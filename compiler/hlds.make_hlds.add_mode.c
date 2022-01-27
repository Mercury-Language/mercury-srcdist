/*
** Automatically generated from `add_mode.m'
** by the Mercury compiler,
** version 2015-10-27
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




#line 148 "hlds.make_hlds.add_mode.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2];

#line 151 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0;

#line 154 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1];

#line 157 "hlds.make_hlds.add_mode.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1];

#line 160 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1];

#line 163 "hlds.make_hlds.add_mode.c"
static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1];

#line 166 "hlds.make_hlds.add_mode.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
#line 169 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
#line 171 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2);

#line 174 "hlds.make_hlds.add_mode.c"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
#line 177 "hlds.make_hlds.add_mode.c"
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
#line 179 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
#line 181 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3);

#line 323 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__323__1_1_f_0(
#line 323 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__LambdaHeadVar__1_26);

#line 297 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
#line 297 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3);

#line 297 "add_mode.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2);

#line 301 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
#line 301 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

#line 300 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
#line 300 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

#line 323 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 294 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
#line 294 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 294 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 286 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 286 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

#line 323 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 283 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
#line 283 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 283 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 275 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId_8,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 275 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

#line 247 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_13,
#line 247 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
#line 247 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);

#line 171 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_2_f_0(
#line 171 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OldStatus_4,
#line 171 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__NewInstModeStatus_5);

#line 143 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Args0_13,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_15,
#line 143 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
#line 143 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33);

#line 68 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__VarSet_1,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstSymName_2,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstParams_3,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__MaybeForType_4,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__5_5,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_6,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstStatus_7,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8,
#line 68 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10,
#line 68 "add_mode.m"
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



#line 516 "hlds.make_hlds.add_mode.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 522 "hlds.make_hlds.add_mode.c"
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

#line 537 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

#line 542 "hlds.make_hlds.add_mode.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0
  }
};

#line 551 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

#line 556 "hlds.make_hlds.add_mode.c"
static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1] = {
  (MR_Integer) 0
};

#line 561 "hlds.make_hlds.add_mode.c"
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

#line 578 "hlds.make_hlds.add_mode.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
#line 581 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
#line 583 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2)
#line 585 "hlds.make_hlds.add_mode.c"
{
#line 587 "hlds.make_hlds.add_mode.c"
  {
#line 589 "hlds.make_hlds.add_mode.c"
    MR_bool hlds__make_hlds__add_mode__succeeded;

#line 592 "hlds.make_hlds.add_mode.c"
    {
#line 594 "hlds.make_hlds.add_mode.c"
      hlds__make_hlds__add_mode__succeeded = hlds__make_hlds__add_mode____Unify____circ_id_0_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2));
    }
#line 597 "hlds.make_hlds.add_mode.c"
    return hlds__make_hlds__add_mode__succeeded;
#line 599 "hlds.make_hlds.add_mode.c"
  }
#line 601 "hlds.make_hlds.add_mode.c"
}

#line 604 "hlds.make_hlds.add_mode.c"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
#line 607 "hlds.make_hlds.add_mode.c"
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
#line 609 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
#line 611 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3)
#line 613 "hlds.make_hlds.add_mode.c"
{
#line 615 "hlds.make_hlds.add_mode.c"
  {
#line 617 "hlds.make_hlds.add_mode.c"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__1_1;

#line 620 "hlds.make_hlds.add_mode.c"
    {
#line 622 "hlds.make_hlds.add_mode.c"
      hlds__make_hlds__add_mode____Compare____circ_id_0_0(&hlds__make_hlds__add_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_3));
    }
#line 625 "hlds.make_hlds.add_mode.c"
    *hlds__make_hlds__add_mode__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__1_1));
#line 627 "hlds.make_hlds.add_mode.c"
  }
#line 629 "hlds.make_hlds.add_mode.c"
}

#line 323 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__323__1_1_f_0(
#line 323 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__LambdaHeadVar__1_26)
#line 323 "add_mode.m"
{
#line 323 "add_mode.m"
  {
#line 323 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 323 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__LambdaHeadVar__2_27;
#line 323 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_28_28;
#line 323 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__LambdaHeadVar__1_26, (MR_Integer) 0)));
#line 323 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__LambdaHeadVar__1_26, (MR_Integer) 1)));

#line 325 "add_mode.m"
    {
#line 325 "add_mode.m"
      hlds__make_hlds__add_mode__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_51));
#line 325 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_52));
#line 325 "add_mode.m"
    }
#line 325 "add_mode.m"
    {
#line 325 "add_mode.m"
      hlds__make_hlds__add_mode__LambdaHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "add_mode.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__LambdaHeadVar__2_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 325 "add_mode.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__LambdaHeadVar__2_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_28_28));
#line 325 "add_mode.m"
    }
#line 323 "add_mode.m"
    return hlds__make_hlds__add_mode__LambdaHeadVar__2_27;
#line 323 "add_mode.m"
  }
#line 323 "add_mode.m"
}

#line 297 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
#line 297 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3)
#line 297 "add_mode.m"
{
#line 297 "add_mode.m"
  {
#line 297 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_9 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_10 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__3_3;

#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_9 == hlds__make_hlds__add_mode__CastY_10);
#line 297 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 703 "hlds.make_hlds.add_mode.c"
      *hlds__make_hlds__add_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 297 "add_mode.m"
    else
#line 297 "add_mode.m"
      {
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_8_8;

#line 297 "add_mode.m"
        {
#line 297 "add_mode.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__make_hlds__add_mode__V_8_8, hlds__make_hlds__add_mode__V_4_4, hlds__make_hlds__add_mode__V_6_6);
        }
#line 725 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_8_8 == (MR_Integer) 0);
#line 297 "add_mode.m"
        hlds__make_hlds__add_mode__succeeded = !(hlds__make_hlds__add_mode__succeeded);
#line 297 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 297 "add_mode.m"
          *hlds__make_hlds__add_mode__HeadVar__1_1 = hlds__make_hlds__add_mode__V_8_8;
#line 297 "add_mode.m"
        else
#line 297 "add_mode.m"
          {
#line 297 "add_mode.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mode__HeadVar__1_1, hlds__make_hlds__add_mode__V_5_5, hlds__make_hlds__add_mode__V_7_7);
#line 297 "add_mode.m"
            return;
          }
#line 297 "add_mode.m"
      }
#line 297 "add_mode.m"
  }
#line 297 "add_mode.m"
}

#line 297 "add_mode.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
#line 297 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2)
#line 297 "add_mode.m"
{
#line 297 "add_mode.m"
  {
#line 297 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_7 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__1_1;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_8 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;

#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_7 == hlds__make_hlds__add_mode__CastY_8);
#line 297 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 297 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 297 "add_mode.m"
    else
#line 297 "add_mode.m"
      {
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 786 "hlds.make_hlds.add_mode.c"
        {
#line 788 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_3_3, hlds__make_hlds__add_mode__V_5_5);
        }
#line 297 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 793 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_4_4 == hlds__make_hlds__add_mode__V_6_6);
#line 297 "add_mode.m"
      }
#line 297 "add_mode.m"
    return hlds__make_hlds__add_mode__succeeded;
#line 297 "add_mode.m"
  }
#line 297 "add_mode.m"
}

#line 301 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
#line 301 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
#line 301 "add_mode.m"
{
#line 304 "add_mode.m"
  {
#line 304 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 304 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
#line 304 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 304 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

#line 304 "add_mode.m"
    {
#line 304 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
#line 304 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
#line 304 "add_mode.m"
    }
#line 304 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_2;
#line 304 "add_mode.m"
  }
#line 301 "add_mode.m"
}

#line 300 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
#line 300 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
#line 300 "add_mode.m"
{
#line 303 "add_mode.m"
  {
#line 303 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 303 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
#line 303 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 303 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

#line 303 "add_mode.m"
    {
#line 303 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
#line 303 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
#line 303 "add_mode.m"
    }
#line 303 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_2;
#line 303 "add_mode.m"
  }
#line 300 "add_mode.m"
}

#line 323 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 323 "add_mode.m"
{
#line 323 "add_mode.m"
  {
#line 323 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 323 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 323 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27;

#line 323 "add_mode.m"
    {
#line 323 "add_mode.m"
      hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__323__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 323 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27));
#line 323 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 323 "add_mode.m"
  }
#line 323 "add_mode.m"
}

#line 294 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
#line 294 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 294 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 294 "add_mode.m"
{
#line 294 "add_mode.m"
  {
#line 294 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 294 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 294 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

#line 294 "add_mode.m"
    {
#line 294 "add_mode.m"
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 294 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
#line 294 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 294 "add_mode.m"
  }
#line 294 "add_mode.m"
}

#line 286 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 286 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 286 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
#line 286 "add_mode.m"
{
#line 291 "add_mode.m"
  {
#line 291 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 291 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_16_16;
#line 291 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_17_17;
#line 291 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 291 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 0)));
#line 291 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 1)));
#line 291 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_27;
#line 291 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_80;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_81;

#line 304 "add_mode.m"
    {
#line 304 "add_mode.m"
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
#line 304 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 304 "add_mode.m"
    }
#line 304 "add_mode.m"
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 0)));
#line 304 "add_mode.m"
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 1)));
#line 304 "add_mode.m"
    {
#line 304 "add_mode.m"
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
#line 304 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
#line 304 "add_mode.m"
    }
#line 294 "add_mode.m"
    {
#line 294 "add_mode.m"
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[2], hlds__make_hlds__add_mode__Expansions_9);
    }
#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__CastX_80 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__CastY_81 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_80 == hlds__make_hlds__add_mode__CastY_81);
#line 297 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 297 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 297 "add_mode.m"
    else
#line 297 "add_mode.m"
      {
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

#line 1030 "hlds.make_hlds.add_mode.c"
        {
#line 1032 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_76_76, hlds__make_hlds__add_mode__V_78_78);
        }
#line 297 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 1037 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_77_77 == hlds__make_hlds__add_mode__V_79_79);
#line 297 "add_mode.m"
      }
#line 332 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 322 "add_mode.m"
      {
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_55_75;
#line 322 "add_mode.m"
        MR_String hlds__make_hlds__add_mode__Kinds_38;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Msg_43;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Spec_44;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_52_52;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_55_55;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_56_56;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_63_63;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_64_64;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_68_68;
#line 322 "add_mode.m"
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

#line 322 "add_mode.m"
        {
#line 322 "add_mode.m"
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
        }
#line 322 "add_mode.m"
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
#line 1085 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__TypeCtorInfo_55_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 323 "add_mode.m"
        {
#line 323 "add_mode.m"
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__TypeCtorInfo_55_75, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[3], hlds__make_hlds__add_mode__V_18_18);
        }
#line 327 "add_mode.m"
        {
#line 327 "add_mode.m"
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
#line 327 "add_mode.m"
        }
#line 327 "add_mode.m"
        {
#line 327 "add_mode.m"
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "add_mode.m"
        }
#line 327 "add_mode.m"
        {
#line 327 "add_mode.m"
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[15])));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
#line 327 "add_mode.m"
        }
#line 328 "add_mode.m"
        {
#line 328 "add_mode.m"
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
#line 328 "add_mode.m"
        {
#line 328 "add_mode.m"
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[13]));
        }
#line 328 "add_mode.m"
        {
#line 328 "add_mode.m"
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
#line 329 "add_mode.m"
        {
#line 329 "add_mode.m"
          hlds__make_hlds__add_mode__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
#line 329 "add_mode.m"
        }
#line 329 "add_mode.m"
        {
#line 329 "add_mode.m"
          hlds__make_hlds__add_mode__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_64_64));
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "add_mode.m"
        }
#line 329 "add_mode.m"
        {
#line 329 "add_mode.m"
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_63_63));
#line 329 "add_mode.m"
        }
#line 330 "add_mode.m"
        {
#line 330 "add_mode.m"
          hlds__make_hlds__add_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "add_mode.m"
        }
#line 330 "add_mode.m"
        {
#line 330 "add_mode.m"
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_68_68));
#line 330 "add_mode.m"
        }
#line 331 "add_mode.m"
        {
#line 331 "add_mode.m"
          MR_Word base;
#line 331 "add_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "add_mode.m"
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
#line 331 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
#line 331 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
#line 331 "add_mode.m"
        }
#line 322 "add_mode.m"
      }
#line 332 "add_mode.m"
    else
#line 332 "add_mode.m"
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
#line 291 "add_mode.m"
  }
#line 286 "add_mode.m"
}

#line 323 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 323 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 323 "add_mode.m"
{
#line 323 "add_mode.m"
  {
#line 323 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 323 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 323 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27;

#line 323 "add_mode.m"
    {
#line 323 "add_mode.m"
      hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__323__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 323 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27));
#line 323 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 323 "add_mode.m"
  }
#line 323 "add_mode.m"
}

#line 283 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
#line 283 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 283 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 283 "add_mode.m"
{
#line 283 "add_mode.m"
  {
#line 283 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 283 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 283 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

#line 283 "add_mode.m"
    {
#line 283 "add_mode.m"
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 283 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
#line 283 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 283 "add_mode.m"
  }
#line 283 "add_mode.m"
}

#line 275 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId_8,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 275 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 275 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
#line 275 "add_mode.m"
{
#line 280 "add_mode.m"
  {
#line 280 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 280 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_16_16;
#line 280 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_17_17;
#line 280 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 280 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 0)));
#line 280 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 1)));
#line 280 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_27;
#line 280 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_80;
#line 297 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_81;

#line 303 "add_mode.m"
    {
#line 303 "add_mode.m"
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
#line 303 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 303 "add_mode.m"
    }
#line 303 "add_mode.m"
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 0)));
#line 303 "add_mode.m"
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 1)));
#line 303 "add_mode.m"
    {
#line 303 "add_mode.m"
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
#line 303 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
#line 303 "add_mode.m"
    }
#line 283 "add_mode.m"
    {
#line 283 "add_mode.m"
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[0], hlds__make_hlds__add_mode__Expansions_9);
    }
#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__CastX_80 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__CastY_81 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
#line 297 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_80 == hlds__make_hlds__add_mode__CastY_81);
#line 297 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 297 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 297 "add_mode.m"
    else
#line 297 "add_mode.m"
      {
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
#line 297 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
#line 297 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

#line 1366 "hlds.make_hlds.add_mode.c"
        {
#line 1368 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_76_76, hlds__make_hlds__add_mode__V_78_78);
        }
#line 297 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 1373 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_77_77 == hlds__make_hlds__add_mode__V_79_79);
#line 297 "add_mode.m"
      }
#line 332 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 322 "add_mode.m"
      {
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_55_75;
#line 322 "add_mode.m"
        MR_String hlds__make_hlds__add_mode__Kinds_38;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Msg_43;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Spec_44;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_52_52;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_55_55;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_56_56;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_63_63;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_64_64;
#line 322 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_68_68;
#line 322 "add_mode.m"
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

#line 322 "add_mode.m"
        {
#line 322 "add_mode.m"
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "inst")), ((MR_Box) ((MR_String) "insts")));
        }
#line 322 "add_mode.m"
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
#line 1421 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__TypeCtorInfo_55_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 323 "add_mode.m"
        {
#line 323 "add_mode.m"
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__TypeCtorInfo_55_75, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[1], hlds__make_hlds__add_mode__V_18_18);
        }
#line 327 "add_mode.m"
        {
#line 327 "add_mode.m"
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
#line 327 "add_mode.m"
        }
#line 327 "add_mode.m"
        {
#line 327 "add_mode.m"
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "add_mode.m"
        }
#line 327 "add_mode.m"
        {
#line 327 "add_mode.m"
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[15])));
#line 327 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
#line 327 "add_mode.m"
        }
#line 328 "add_mode.m"
        {
#line 328 "add_mode.m"
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
#line 328 "add_mode.m"
        {
#line 328 "add_mode.m"
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[13]));
        }
#line 328 "add_mode.m"
        {
#line 328 "add_mode.m"
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
#line 329 "add_mode.m"
        {
#line 329 "add_mode.m"
          hlds__make_hlds__add_mode__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
#line 329 "add_mode.m"
        }
#line 329 "add_mode.m"
        {
#line 329 "add_mode.m"
          hlds__make_hlds__add_mode__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_64_64));
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "add_mode.m"
        }
#line 329 "add_mode.m"
        {
#line 329 "add_mode.m"
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
#line 329 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_63_63));
#line 329 "add_mode.m"
        }
#line 330 "add_mode.m"
        {
#line 330 "add_mode.m"
          hlds__make_hlds__add_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "add_mode.m"
        }
#line 330 "add_mode.m"
        {
#line 330 "add_mode.m"
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 330 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_68_68));
#line 330 "add_mode.m"
        }
#line 331 "add_mode.m"
        {
#line 331 "add_mode.m"
          MR_Word base;
#line 331 "add_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "add_mode.m"
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
#line 331 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
#line 331 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
#line 331 "add_mode.m"
        }
#line 322 "add_mode.m"
      }
#line 332 "add_mode.m"
    else
#line 332 "add_mode.m"
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
#line 280 "add_mode.m"
  }
#line 275 "add_mode.m"
}

#line 247 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_13,
#line 247 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
#line 247 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
#line 247 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30)
#line 247 "add_mode.m"
{
#line 257 "add_mode.m"
  while (MR_TRUE)
#line 257 "add_mode.m"
    {
#line 257 "add_mode.m"
      /* tailcall optimized into a loop */
#line 257 "add_mode.m"
      {
#line 257 "add_mode.m"
        MR_bool hlds__make_hlds__add_mode__succeeded;

#line 253 "add_mode.m"
        {
#line 253 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), hlds__make_hlds__add_mode__Expansions0_12);
        }
#line 257 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 255 "add_mode.m"
          {
#line 254 "add_mode.m"
            {
#line 254 "add_mode.m"
              hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigModeId_10, hlds__make_hlds__add_mode__ModeId0_11, hlds__make_hlds__add_mode__Expansions0_12, hlds__make_hlds__add_mode__Context_13, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);
            }
#line 256 "add_mode.m"
            *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 1;
#line 255 "add_mode.m"
          }
#line 257 "add_mode.m"
        else
#line 258 "add_mode.m"
          {
#line 258 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ModeDefns_16;
#line 270 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Name_24;
#line 270 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Args_25;
#line 260 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ModeDefn_17;
#line 260 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Body_20;
#line 260 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvMode_23;
#line 260 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_ModeDefn_17;
#line 261 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 261 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_19_19;
#line 261 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_21_21;
#line 261 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_22_22;

#line 258 "add_mode.m"
            {
#line 258 "add_mode.m"
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable_9, &hlds__make_hlds__add_mode__ModeDefns_16);
            }
#line 260 "add_mode.m"
            {
#line 260 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_16, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), &hlds__make_hlds__add_mode__conv0_ModeDefn_17);
            }
#line 260 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 260 "add_mode.m"
              {
#line 260 "add_mode.m"
                hlds__make_hlds__add_mode__ModeDefn_17 = ((MR_Word) hlds__make_hlds__add_mode__conv0_ModeDefn_17);
#line 260 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 260 "add_mode.m"
              }
#line 260 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 260 "add_mode.m"
              {
#line 261 "add_mode.m"
                hlds__make_hlds__add_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 0)));
#line 261 "add_mode.m"
                hlds__make_hlds__add_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 1)));
#line 261 "add_mode.m"
                hlds__make_hlds__add_mode__Body_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 2)));
#line 261 "add_mode.m"
                hlds__make_hlds__add_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 3)));
#line 261 "add_mode.m"
                hlds__make_hlds__add_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 4)));
#line 262 "add_mode.m"
                hlds__make_hlds__add_mode__EqvMode_23 = (MR_Word) hlds__make_hlds__add_mode__Body_20;
#line 263 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvMode_23)) == (MR_mktag((MR_Integer) 1)));
#line 263 "add_mode.m"
                if (hlds__make_hlds__add_mode__succeeded)
#line 263 "add_mode.m"
                  {
#line 263 "add_mode.m"
                    hlds__make_hlds__add_mode__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 0)));
#line 263 "add_mode.m"
                    hlds__make_hlds__add_mode__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 1)));
#line 263 "add_mode.m"
                  }
#line 260 "add_mode.m"
              }
#line 270 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 265 "add_mode.m"
              {
#line 265 "add_mode.m"
                MR_Integer hlds__make_hlds__add_mode__Arity_26;
#line 265 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__ModeId_27;
#line 265 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__Expansions_28;

#line 265 "add_mode.m"
                {
#line 265 "add_mode.m"
                  hlds__make_hlds__add_mode__Arity_26 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_25);
                }
#line 266 "add_mode.m"
                {
#line 266 "add_mode.m"
                  hlds__make_hlds__add_mode__ModeId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_24));
#line 266 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 266 "add_mode.m"
                }
#line 267 "add_mode.m"
                {
#line 267 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11));
#line 267 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_12));
#line 267 "add_mode.m"
                }
#line 268 "add_mode.m"
                /* direct tailcall eliminated */
#line 268 "add_mode.m"
                {
#line 268 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__ModeId0__tmp_copy_11 = hlds__make_hlds__add_mode__ModeId_27;
#line 268 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_12 = hlds__make_hlds__add_mode__Expansions_28;

#line 268 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions0_12 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_12;
#line 268 "add_mode.m"
                  hlds__make_hlds__add_mode__ModeId0_11 = hlds__make_hlds__add_mode__ModeId0__tmp_copy_11;
#line 268 "add_mode.m"
                }
#line 268 "add_mode.m"
                continue;
#line 265 "add_mode.m"
              }
#line 270 "add_mode.m"
            else
#line 271 "add_mode.m"
              {
#line 271 "add_mode.m"
                *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 0;
#line 271 "add_mode.m"
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29;
#line 271 "add_mode.m"
              }
#line 258 "add_mode.m"
          }
#line 257 "add_mode.m"
      }
#line 257 "add_mode.m"
      break;
#line 257 "add_mode.m"
    }
#line 247 "add_mode.m"
}

#line 171 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_2_f_0(
#line 171 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OldStatus_4,
#line 171 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__NewInstModeStatus_5)
#line 171 "add_mode.m"
{
#line 175 "add_mode.m"
  {
#line 175 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__OldStatus_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ReportDup_6;
#line 175 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__OldReportDup_7;
#line 175 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__NewReportDup_9;

#line 178 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 177 "add_mode.m"
      hlds__make_hlds__add_mode__OldReportDup_7 = (MR_Integer) 0;
#line 178 "add_mode.m"
    else
#line 179 "add_mode.m"
      hlds__make_hlds__add_mode__OldReportDup_7 = (MR_Integer) 1;
#line 184 "add_mode.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_mode__NewInstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
#line 185 "add_mode.m"
      {
#line 185 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__InstModeImport_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__NewInstModeStatus_5, (MR_Integer) 0)));

#line 191 "add_mode.m"
#line 191 "add_mode.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_mode__InstModeImport_10)) {
#line 191 "add_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 191 "add_mode.m"
          case (MR_Integer) 0:
#line 191 "add_mode.m"
#line 191 "add_mode.m"
            switch (MR_unmkbody(hlds__make_hlds__add_mode__InstModeImport_10)) {
#line 191 "add_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 191 "add_mode.m"
              case (MR_Integer) 0:
#line 190 "add_mode.m"
                hlds__make_hlds__add_mode__NewReportDup_9 = (MR_Integer) 1;
#line 191 "add_mode.m"
                break;
#line 191 "add_mode.m"
              case (MR_Integer) 1:
#line 193 "add_mode.m"
                hlds__make_hlds__add_mode__NewReportDup_9 = (MR_Integer) 0;
#line 191 "add_mode.m"
                break;
#line 191 "add_mode.m"
            }
#line 191 "add_mode.m"
            break;
#line 191 "add_mode.m"
          case (MR_Integer) 1:
#line 190 "add_mode.m"
            hlds__make_hlds__add_mode__NewReportDup_9 = (MR_Integer) 1;
#line 191 "add_mode.m"
            break;
#line 191 "add_mode.m"
        }
#line 185 "add_mode.m"
      }
#line 184 "add_mode.m"
    else
#line 183 "add_mode.m"
      hlds__make_hlds__add_mode__NewReportDup_9 = (MR_Integer) 1;
#line 196 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__OldReportDup_7 == hlds__make_hlds__add_mode__NewReportDup_9);
#line 198 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 197 "add_mode.m"
      hlds__make_hlds__add_mode__ReportDup_6 = hlds__make_hlds__add_mode__NewReportDup_9;
#line 198 "add_mode.m"
    else
#line 199 "add_mode.m"
      {
#line 199 "add_mode.m"
        {
#line 199 "add_mode.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mode", (MR_String) "function \140hlds.make_hlds.add_mode.should_report_duplicate_inst_or_mode\'/2", (MR_String) "mismatch");
        }
#line 199 "add_mode.m"
      }
#line 175 "add_mode.m"
    return hlds__make_hlds__add_mode__ReportDup_6;
#line 175 "add_mode.m"
  }
#line 171 "add_mode.m"
}

#line 143 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Args0_13,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_15,
#line 143 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
#line 143 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
#line 143 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33)
#line 143 "add_mode.m"
{
#line 153 "add_mode.m"
  while (MR_TRUE)
#line 153 "add_mode.m"
    {
#line 153 "add_mode.m"
      /* tailcall optimized into a loop */
#line 153 "add_mode.m"
      {
#line 153 "add_mode.m"
        MR_bool hlds__make_hlds__add_mode__succeeded;

#line 149 "add_mode.m"
        {
#line 149 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), hlds__make_hlds__add_mode__Expansions0_14);
        }
#line 153 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 151 "add_mode.m"
          {
#line 150 "add_mode.m"
            {
#line 150 "add_mode.m"
              hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigInstId_11, hlds__make_hlds__add_mode__InstId0_12, hlds__make_hlds__add_mode__Expansions0_14, hlds__make_hlds__add_mode__Context_15, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33);
            }
#line 152 "add_mode.m"
            *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 1;
#line 151 "add_mode.m"
          }
#line 153 "add_mode.m"
        else
#line 166 "add_mode.m"
          {
#line 166 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Name_27;
#line 166 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Args_28;
#line 155 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__InstDefn_18;
#line 155 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Params_20;
#line 155 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Body_21;
#line 155 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvInst0_25;
#line 155 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvInst_26;
#line 155 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_35_35;
#line 155 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_InstDefn_18;
#line 156 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_19_19;
#line 156 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_22_22;
#line 156 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_23_23;
#line 156 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_24_24;

#line 155 "add_mode.m"
            {
#line 155 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__UserInstTable_10, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), &hlds__make_hlds__add_mode__conv0_InstDefn_18);
            }
#line 155 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 155 "add_mode.m"
              {
#line 155 "add_mode.m"
                hlds__make_hlds__add_mode__InstDefn_18 = ((MR_Word) hlds__make_hlds__add_mode__conv0_InstDefn_18);
#line 155 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 155 "add_mode.m"
              }
#line 155 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 155 "add_mode.m"
              {
#line 156 "add_mode.m"
                hlds__make_hlds__add_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 0)));
#line 156 "add_mode.m"
                hlds__make_hlds__add_mode__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 1)));
#line 156 "add_mode.m"
                hlds__make_hlds__add_mode__Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 2)));
#line 156 "add_mode.m"
                hlds__make_hlds__add_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 3)));
#line 156 "add_mode.m"
                hlds__make_hlds__add_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 4)));
#line 156 "add_mode.m"
                hlds__make_hlds__add_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 5)));
#line 157 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__Body_21)) == (MR_mktag((MR_Integer) 1)));
#line 157 "add_mode.m"
                if (hlds__make_hlds__add_mode__succeeded)
#line 157 "add_mode.m"
                  {
#line 157 "add_mode.m"
                    hlds__make_hlds__add_mode__EqvInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Body_21, (MR_Integer) 0)));
#line 158 "add_mode.m"
                    {
#line 158 "add_mode.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(hlds__make_hlds__add_mode__Params_20, hlds__make_hlds__add_mode__Args0_13, hlds__make_hlds__add_mode__EqvInst0_25, &hlds__make_hlds__add_mode__EqvInst_26);
                    }
#line 159 "add_mode.m"
                    hlds__make_hlds__add_mode__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvInst_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 159 "add_mode.m"
                    if (hlds__make_hlds__add_mode__succeeded)
#line 159 "add_mode.m"
                      {
#line 159 "add_mode.m"
                        hlds__make_hlds__add_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 1)));
#line 159 "add_mode.m"
                        hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 159 "add_mode.m"
                        if (hlds__make_hlds__add_mode__succeeded)
#line 159 "add_mode.m"
                          {
#line 159 "add_mode.m"
                            hlds__make_hlds__add_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 0)));
#line 159 "add_mode.m"
                            hlds__make_hlds__add_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 1)));
#line 159 "add_mode.m"
                          }
#line 159 "add_mode.m"
                      }
#line 157 "add_mode.m"
                  }
#line 155 "add_mode.m"
              }
#line 166 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 161 "add_mode.m"
              {
#line 161 "add_mode.m"
                MR_Integer hlds__make_hlds__add_mode__Arity_29;
#line 161 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__InstId_30;
#line 161 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__Expansions_31;

#line 161 "add_mode.m"
                {
#line 161 "add_mode.m"
                  hlds__make_hlds__add_mode__Arity_29 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_28);
                }
#line 162 "add_mode.m"
                {
#line 162 "add_mode.m"
                  hlds__make_hlds__add_mode__InstId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_27));
#line 162 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_29));
#line 162 "add_mode.m"
                }
#line 163 "add_mode.m"
                {
#line 163 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12));
#line 163 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_14));
#line 163 "add_mode.m"
                }
#line 164 "add_mode.m"
                /* direct tailcall eliminated */
#line 164 "add_mode.m"
                {
#line 164 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__InstId0__tmp_copy_12 = hlds__make_hlds__add_mode__InstId_30;
#line 164 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Args0__tmp_copy_13 = hlds__make_hlds__add_mode__Args_28;
#line 164 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_14 = hlds__make_hlds__add_mode__Expansions_31;

#line 164 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions0_14 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_14;
#line 164 "add_mode.m"
                  hlds__make_hlds__add_mode__Args0_13 = hlds__make_hlds__add_mode__Args0__tmp_copy_13;
#line 164 "add_mode.m"
                  hlds__make_hlds__add_mode__InstId0_12 = hlds__make_hlds__add_mode__InstId0__tmp_copy_12;
#line 164 "add_mode.m"
                }
#line 164 "add_mode.m"
                continue;
#line 161 "add_mode.m"
              }
#line 166 "add_mode.m"
            else
#line 167 "add_mode.m"
              {
#line 167 "add_mode.m"
                *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 0;
#line 167 "add_mode.m"
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32;
#line 167 "add_mode.m"
              }
#line 166 "add_mode.m"
          }
#line 153 "add_mode.m"
      }
#line 153 "add_mode.m"
      break;
#line 153 "add_mode.m"
    }
#line 143 "add_mode.m"
}

#line 68 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__VarSet_1,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstSymName_2,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstParams_3,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__MaybeForType_4,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__5_5,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_6,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstStatus_7,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8,
#line 68 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9,
#line 68 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10,
#line 68 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11)
#line 68 "add_mode.m"
{
#line 73 "add_mode.m"
  {
#line 73 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;

#line 73 "add_mode.m"
    if ((hlds__make_hlds__add_mode__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "add_mode.m"
      {
#line 75 "add_mode.m"
        {
#line 75 "add_mode.m"
          mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_mode", (MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11", (MR_String) "abstract insts not implemented");
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
        MR_Word hlds__make_hlds__add_mode__EqvInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__HeadVar__5_5, (MR_Integer) 0)));
#line 77 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__InstArity_36;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__InstId_37;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__IFTC_41;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__InstDefn_59;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_103_103;
#line 122 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_104_104;

#line 78 "add_mode.m"
        {
#line 78 "add_mode.m"
          mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__InstParams_3, &hlds__make_hlds__add_mode__InstArity_36);
        }
#line 79 "add_mode.m"
        {
#line 79 "add_mode.m"
          hlds__make_hlds__add_mode__InstId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 79 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_37, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstSymName_2));
#line 79 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_37, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
#line 79 "add_mode.m"
        }
#line 89 "add_mode.m"
#line 89 "add_mode.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvInst_31)) {
#line 89 "add_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 89 "add_mode.m"
          case (MR_Integer) 0:
#line 99 "add_mode.m"
            {
#line 102 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__V_70_70;
#line 102 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode___ForType_54;

#line 100 "add_mode.m"
              hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__MaybeForType_4)) == (MR_mktag((MR_Integer) 1)));
#line 102 "add_mode.m"
              if (hlds__make_hlds__add_mode__succeeded)
#line 102 "add_mode.m"
                {
#line 102 "add_mode.m"
                  hlds__make_hlds__add_mode___ForType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));
#line 103 "add_mode.m"
                  {
#line 103 "add_mode.m"
                    hlds__make_hlds__add_mode__V_70_70 = hlds__status__inst_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_mode__InstStatus_7);
                  }
#line 103 "add_mode.m"
                  hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_70_70 == (MR_Integer) 1);
#line 102 "add_mode.m"
                }
#line 114 "add_mode.m"
              if (hlds__make_hlds__add_mode__succeeded)
#line 105 "add_mode.m"
                {
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__ShortInstSymName_55;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Pieces_56;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Msg_57;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Spec_58;
#line 105 "add_mode.m"
                  MR_String hlds__make_hlds__add_mode__V_71_71;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_74_74;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_75_75;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_76_76;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_95_95;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_96_96;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_100_100;

#line 105 "add_mode.m"
                  {
#line 105 "add_mode.m"
                    hlds__make_hlds__add_mode__V_71_71 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_mode__InstSymName_2);
                  }
#line 105 "add_mode.m"
                  {
#line 105 "add_mode.m"
                    hlds__make_hlds__add_mode__ShortInstSymName_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 105 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ShortInstSymName_55, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_71_71));
#line 105 "add_mode.m"
                  }
#line 107 "add_mode.m"
                  {
#line 107 "add_mode.m"
                    hlds__make_hlds__add_mode__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ShortInstSymName_55));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
#line 107 "add_mode.m"
                  }
#line 107 "add_mode.m"
                  {
#line 107 "add_mode.m"
                    hlds__make_hlds__add_mode__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_76_76));
#line 107 "add_mode.m"
                  }
#line 107 "add_mode.m"
                  {
#line 107 "add_mode.m"
                    hlds__make_hlds__add_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_75_75));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])));
#line 107 "add_mode.m"
                  }
#line 106 "add_mode.m"
                  {
#line 106 "add_mode.m"
                    hlds__make_hlds__add_mode__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14])));
#line 106 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_74_74));
#line 106 "add_mode.m"
                  }
#line 111 "add_mode.m"
                  {
#line 111 "add_mode.m"
                    hlds__make_hlds__add_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_56));
#line 111 "add_mode.m"
                  }
#line 111 "add_mode.m"
                  {
#line 111 "add_mode.m"
                    hlds__make_hlds__add_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_96_96));
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "add_mode.m"
                  }
#line 111 "add_mode.m"
                  {
#line 111 "add_mode.m"
                    hlds__make_hlds__add_mode__Msg_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_95_95));
#line 111 "add_mode.m"
                  }
#line 112 "add_mode.m"
                  {
#line 112 "add_mode.m"
                    hlds__make_hlds__add_mode__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_57));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "add_mode.m"
                  }
#line 112 "add_mode.m"
                  {
#line 112 "add_mode.m"
                    hlds__make_hlds__add_mode__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_100_100));
#line 112 "add_mode.m"
                  }
#line 113 "add_mode.m"
                  {
#line 113 "add_mode.m"
                    hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_58));
#line 113 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10));
#line 113 "add_mode.m"
                  }
#line 105 "add_mode.m"
                }
#line 114 "add_mode.m"
              else
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
#line 99 "add_mode.m"
            }
#line 89 "add_mode.m"
            break;
#line 89 "add_mode.m"
          case (MR_Integer) 1:
#line 89 "add_mode.m"
          case (MR_Integer) 2:
#line 99 "add_mode.m"
            {
#line 102 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__V_70_70;
#line 102 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode___ForType_54;

#line 100 "add_mode.m"
              hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__MaybeForType_4)) == (MR_mktag((MR_Integer) 1)));
#line 102 "add_mode.m"
              if (hlds__make_hlds__add_mode__succeeded)
#line 102 "add_mode.m"
                {
#line 102 "add_mode.m"
                  hlds__make_hlds__add_mode___ForType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));
#line 103 "add_mode.m"
                  {
#line 103 "add_mode.m"
                    hlds__make_hlds__add_mode__V_70_70 = hlds__status__inst_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_mode__InstStatus_7);
                  }
#line 103 "add_mode.m"
                  hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_70_70 == (MR_Integer) 1);
#line 102 "add_mode.m"
                }
#line 114 "add_mode.m"
              if (hlds__make_hlds__add_mode__succeeded)
#line 105 "add_mode.m"
                {
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__ShortInstSymName_55;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Pieces_56;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Msg_57;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Spec_58;
#line 105 "add_mode.m"
                  MR_String hlds__make_hlds__add_mode__V_71_71;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_74_74;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_75_75;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_76_76;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_95_95;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_96_96;
#line 105 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_100_100;

#line 105 "add_mode.m"
                  {
#line 105 "add_mode.m"
                    hlds__make_hlds__add_mode__V_71_71 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_mode__InstSymName_2);
                  }
#line 105 "add_mode.m"
                  {
#line 105 "add_mode.m"
                    hlds__make_hlds__add_mode__ShortInstSymName_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 105 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ShortInstSymName_55, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_71_71));
#line 105 "add_mode.m"
                  }
#line 107 "add_mode.m"
                  {
#line 107 "add_mode.m"
                    hlds__make_hlds__add_mode__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ShortInstSymName_55));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
#line 107 "add_mode.m"
                  }
#line 107 "add_mode.m"
                  {
#line 107 "add_mode.m"
                    hlds__make_hlds__add_mode__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_76_76));
#line 107 "add_mode.m"
                  }
#line 107 "add_mode.m"
                  {
#line 107 "add_mode.m"
                    hlds__make_hlds__add_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_75_75));
#line 107 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])));
#line 107 "add_mode.m"
                  }
#line 106 "add_mode.m"
                  {
#line 106 "add_mode.m"
                    hlds__make_hlds__add_mode__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14])));
#line 106 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_74_74));
#line 106 "add_mode.m"
                  }
#line 111 "add_mode.m"
                  {
#line 111 "add_mode.m"
                    hlds__make_hlds__add_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_56));
#line 111 "add_mode.m"
                  }
#line 111 "add_mode.m"
                  {
#line 111 "add_mode.m"
                    hlds__make_hlds__add_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_96_96));
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "add_mode.m"
                  }
#line 111 "add_mode.m"
                  {
#line 111 "add_mode.m"
                    hlds__make_hlds__add_mode__Msg_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
#line 111 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_95_95));
#line 111 "add_mode.m"
                  }
#line 112 "add_mode.m"
                  {
#line 112 "add_mode.m"
                    hlds__make_hlds__add_mode__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_57));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "add_mode.m"
                  }
#line 112 "add_mode.m"
                  {
#line 112 "add_mode.m"
                    hlds__make_hlds__add_mode__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 112 "add_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_100_100));
#line 112 "add_mode.m"
                  }
#line 113 "add_mode.m"
                  {
#line 113 "add_mode.m"
                    hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_58));
#line 113 "add_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10));
#line 113 "add_mode.m"
                  }
#line 105 "add_mode.m"
                }
#line 114 "add_mode.m"
              else
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
#line 99 "add_mode.m"
            }
#line 89 "add_mode.m"
            break;
#line 89 "add_mode.m"
          case (MR_Integer) 3:
#line 89 "add_mode.m"
#line 89 "add_mode.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_31, (MR_Integer) 0)))) {
#line 89 "add_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 89 "add_mode.m"
              case (MR_Integer) 0:
#line 81 "add_mode.m"
                {
#line 85 "add_mode.m"
                  if ((hlds__make_hlds__add_mode__MaybeForType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "add_mode.m"
                    hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 85 "add_mode.m"
                  else
#line 86 "add_mode.m"
                    {
#line 86 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__ForType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));

#line 87 "add_mode.m"
                      {
#line 87 "add_mode.m"
                        hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 87 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__IFTC_41, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ForType_42));
#line 87 "add_mode.m"
                      }
#line 86 "add_mode.m"
                    }
#line 81 "add_mode.m"
                  hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
#line 81 "add_mode.m"
                }
#line 89 "add_mode.m"
                break;
#line 89 "add_mode.m"
              case (MR_Integer) 1:
#line 89 "add_mode.m"
              case (MR_Integer) 2:
#line 89 "add_mode.m"
              case (MR_Integer) 3:
#line 89 "add_mode.m"
              case (MR_Integer) 4:
#line 89 "add_mode.m"
              case (MR_Integer) 5:
#line 99 "add_mode.m"
                {
#line 102 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_70_70;
#line 102 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode___ForType_54;

#line 100 "add_mode.m"
                  hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "add_mode.m"
                  hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__MaybeForType_4)) == (MR_mktag((MR_Integer) 1)));
#line 102 "add_mode.m"
                  if (hlds__make_hlds__add_mode__succeeded)
#line 102 "add_mode.m"
                    {
#line 102 "add_mode.m"
                      hlds__make_hlds__add_mode___ForType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));
#line 103 "add_mode.m"
                      {
#line 103 "add_mode.m"
                        hlds__make_hlds__add_mode__V_70_70 = hlds__status__inst_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_mode__InstStatus_7);
                      }
#line 103 "add_mode.m"
                      hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_70_70 == (MR_Integer) 1);
#line 102 "add_mode.m"
                    }
#line 114 "add_mode.m"
                  if (hlds__make_hlds__add_mode__succeeded)
#line 105 "add_mode.m"
                    {
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__ShortInstSymName_55;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__Pieces_56;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__Msg_57;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__Spec_58;
#line 105 "add_mode.m"
                      MR_String hlds__make_hlds__add_mode__V_71_71;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__V_74_74;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__V_75_75;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__V_76_76;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__V_95_95;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__V_96_96;
#line 105 "add_mode.m"
                      MR_Word hlds__make_hlds__add_mode__V_100_100;

#line 105 "add_mode.m"
                      {
#line 105 "add_mode.m"
                        hlds__make_hlds__add_mode__V_71_71 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_mode__InstSymName_2);
                      }
#line 105 "add_mode.m"
                      {
#line 105 "add_mode.m"
                        hlds__make_hlds__add_mode__ShortInstSymName_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 105 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ShortInstSymName_55, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_71_71));
#line 105 "add_mode.m"
                      }
#line 107 "add_mode.m"
                      {
#line 107 "add_mode.m"
                        hlds__make_hlds__add_mode__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ShortInstSymName_55));
#line 107 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
#line 107 "add_mode.m"
                      }
#line 107 "add_mode.m"
                      {
#line 107 "add_mode.m"
                        hlds__make_hlds__add_mode__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_mode.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 107 "add_mode.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_76_76));
#line 107 "add_mode.m"
                      }
#line 107 "add_mode.m"
                      {
#line 107 "add_mode.m"
                        hlds__make_hlds__add_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_75_75));
#line 107 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])));
#line 107 "add_mode.m"
                      }
#line 106 "add_mode.m"
                      {
#line 106 "add_mode.m"
                        hlds__make_hlds__add_mode__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14])));
#line 106 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_74_74));
#line 106 "add_mode.m"
                      }
#line 111 "add_mode.m"
                      {
#line 111 "add_mode.m"
                        hlds__make_hlds__add_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 111 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_56));
#line 111 "add_mode.m"
                      }
#line 111 "add_mode.m"
                      {
#line 111 "add_mode.m"
                        hlds__make_hlds__add_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_96_96));
#line 111 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "add_mode.m"
                      }
#line 111 "add_mode.m"
                      {
#line 111 "add_mode.m"
                        hlds__make_hlds__add_mode__Msg_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
#line 111 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_95_95));
#line 111 "add_mode.m"
                      }
#line 112 "add_mode.m"
                      {
#line 112 "add_mode.m"
                        hlds__make_hlds__add_mode__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_57));
#line 112 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "add_mode.m"
                      }
#line 112 "add_mode.m"
                      {
#line 112 "add_mode.m"
                        hlds__make_hlds__add_mode__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 112 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 112 "add_mode.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_100_100));
#line 112 "add_mode.m"
                      }
#line 113 "add_mode.m"
                      {
#line 113 "add_mode.m"
                        hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_58));
#line 113 "add_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10));
#line 113 "add_mode.m"
                      }
#line 105 "add_mode.m"
                    }
#line 114 "add_mode.m"
                  else
#line 114 "add_mode.m"
                    hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
#line 99 "add_mode.m"
                }
#line 89 "add_mode.m"
                break;
#line 89 "add_mode.m"
            }
#line 89 "add_mode.m"
            break;
#line 89 "add_mode.m"
        }
#line 118 "add_mode.m"
        {
#line 118 "add_mode.m"
          hlds__make_hlds__add_mode__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_mode__EqvInst_31));
#line 118 "add_mode.m"
        }
#line 118 "add_mode.m"
        {
#line 118 "add_mode.m"
          hlds__make_hlds__add_mode__InstDefn_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 118 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_1));
#line 118 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstParams_3));
#line 118 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_103_103));
#line 118 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 3) = ((MR_Box) (hlds__make_hlds__add_mode__IFTC_41));
#line 118 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 4) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
#line 118 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 5) = ((MR_Box) (hlds__make_hlds__add_mode__InstStatus_7));
#line 118 "add_mode.m"
        }
#line 120 "add_mode.m"
        {
#line 120 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__map__insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, ((MR_Box) (hlds__make_hlds__add_mode__InstId_37)), ((MR_Box) (hlds__make_hlds__add_mode__InstDefn_59)), hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8, &hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_104_104);
        }
#line 122 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 121 "add_mode.m"
          {
#line 121 "add_mode.m"
            *hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9 = hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_104_104;
#line 121 "add_mode.m"
            *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102;
#line 121 "add_mode.m"
          }
#line 122 "add_mode.m"
        else
#line 126 "add_mode.m"
          {
#line 126 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__OldStatus_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstStatus_7, (MR_Integer) 0)));
#line 126 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__NewInstModeStatus_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstStatus_7, (MR_Integer) 1)));
#line 126 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ReportDup_62;

#line 127 "add_mode.m"
            {
#line 127 "add_mode.m"
              hlds__make_hlds__add_mode__ReportDup_62 = hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_2_f_0(hlds__make_hlds__add_mode__OldStatus_60, hlds__make_hlds__add_mode__NewInstModeStatus_61);
            }
#line 131 "add_mode.m"
#line 131 "add_mode.m"
            switch (hlds__make_hlds__add_mode__ReportDup_62) {
#line 131 "add_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 131 "add_mode.m"
              case (MR_Integer) 0:
#line 130 "add_mode.m"
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102;
#line 131 "add_mode.m"
                break;
#line 131 "add_mode.m"
              case (MR_Integer) 1:
#line 132 "add_mode.m"
                {
#line 132 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__OrigInstDefn_63;
#line 132 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__OrigContext_64;
#line 133 "add_mode.m"
                  MR_Box hlds__make_hlds__add_mode__conv0_OrigInstDefn_63;
#line 134 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_109_109;
#line 134 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_110_110;
#line 134 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_111_111;
#line 134 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_112_112;
#line 134 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__V_113_113;

#line 133 "add_mode.m"
                  {
#line 133 "add_mode.m"
                    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8, ((MR_Box) (hlds__make_hlds__add_mode__InstId_37)), &hlds__make_hlds__add_mode__conv0_OrigInstDefn_63);
                  }
#line 133 "add_mode.m"
                  hlds__make_hlds__add_mode__OrigInstDefn_63 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigInstDefn_63);
#line 134 "add_mode.m"
                  hlds__make_hlds__add_mode__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 0)));
#line 134 "add_mode.m"
                  hlds__make_hlds__add_mode__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 1)));
#line 134 "add_mode.m"
                  hlds__make_hlds__add_mode__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 2)));
#line 134 "add_mode.m"
                  hlds__make_hlds__add_mode__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 3)));
#line 134 "add_mode.m"
                  hlds__make_hlds__add_mode__OrigContext_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 4)));
#line 134 "add_mode.m"
                  hlds__make_hlds__add_mode__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 5)));
#line 136 "add_mode.m"
                  {
#line 136 "add_mode.m"
                    hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__InstSymName_2, hlds__make_hlds__add_mode__InstArity_36, (MR_String) "inst", hlds__make_hlds__add_mode__Context_6, hlds__make_hlds__add_mode__OrigContext_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_102_102, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11);
                  }
#line 132 "add_mode.m"
                }
#line 131 "add_mode.m"
                break;
#line 131 "add_mode.m"
            }
#line 126 "add_mode.m"
            *hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9 = hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8;
#line 126 "add_mode.m"
          }
#line 77 "add_mode.m"
      }
#line 73 "add_mode.m"
  }
#line 68 "add_mode.m"
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
#line 205 "add_mode.m"
  {
#line 205 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 0)));
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Params_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 1)));
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 2)));
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 3)));
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 4)));
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeTable0_19;
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeTable_20;
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Body_37;
#line 205 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_40;
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeId_41;
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeDefn_42;
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_54_54;
#line 205 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_43_58;
#line 206 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 5)));
#line 226 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_40_55;

#line 208 "add_mode.m"
    {
#line 208 "add_mode.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21, &hlds__make_hlds__add_mode__ModeTable0_19);
    }
#line 218 "add_mode.m"
    hlds__make_hlds__add_mode__Body_37 = (MR_Word) hlds__make_hlds__add_mode__ModeDefn_15;
#line 220 "add_mode.m"
    {
#line 220 "add_mode.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_14, &hlds__make_hlds__add_mode__Arity_40);
    }
#line 221 "add_mode.m"
    {
#line 221 "add_mode.m"
      hlds__make_hlds__add_mode__ModeId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_41, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_13));
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_41, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_40));
#line 221 "add_mode.m"
    }
#line 222 "add_mode.m"
    hlds__make_hlds__add_mode__V_54_54 = (MR_Word) hlds__make_hlds__add_mode__Body_37;
#line 222 "add_mode.m"
    {
#line 222 "add_mode.m"
      hlds__make_hlds__add_mode__ModeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_16));
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Params_14));
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_54_54));
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 3) = ((MR_Box) (hlds__make_hlds__add_mode__Context_17));
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 4) = ((MR_Box) (hlds__make_hlds__add_mode__ModeStatus_9));
#line 222 "add_mode.m"
    }
#line 224 "add_mode.m"
    {
#line 224 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = hlds__hlds_data__mode_table_insert_4_p_0(hlds__make_hlds__add_mode__ModeId_41, hlds__make_hlds__add_mode__ModeDefn_42, hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_40_55);
    }
#line 226 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 225 "add_mode.m"
      {
#line 225 "add_mode.m"
        hlds__make_hlds__add_mode__ModeTable_20 = hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_40_55;
#line 225 "add_mode.m"
        hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_43_58 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23;
#line 225 "add_mode.m"
      }
#line 226 "add_mode.m"
    else
#line 227 "add_mode.m"
      {
#line 227 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__OldStatus_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeStatus_9, (MR_Integer) 0)));
#line 227 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__NewInstModeStatus_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeStatus_9, (MR_Integer) 1)));
#line 227 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ReportDup_45;
#line 227 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__OldReportDup_69;
#line 227 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__NewReportDup_71;

#line 176 "add_mode.m"
        hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__OldStatus_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 177 "add_mode.m"
          hlds__make_hlds__add_mode__OldReportDup_69 = (MR_Integer) 0;
#line 178 "add_mode.m"
        else
#line 179 "add_mode.m"
          hlds__make_hlds__add_mode__OldReportDup_69 = (MR_Integer) 1;
#line 184 "add_mode.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_mode__NewInstModeStatus_44)) == (MR_mktag((MR_Integer) 1))))
#line 185 "add_mode.m"
          {
#line 185 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__InstModeImport_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__NewInstModeStatus_44, (MR_Integer) 0)));

#line 191 "add_mode.m"
#line 191 "add_mode.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_mode__InstModeImport_72)) {
#line 191 "add_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 191 "add_mode.m"
              case (MR_Integer) 0:
#line 191 "add_mode.m"
#line 191 "add_mode.m"
                switch (MR_unmkbody(hlds__make_hlds__add_mode__InstModeImport_72)) {
#line 191 "add_mode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 191 "add_mode.m"
                  case (MR_Integer) 0:
#line 190 "add_mode.m"
                    hlds__make_hlds__add_mode__NewReportDup_71 = (MR_Integer) 1;
#line 191 "add_mode.m"
                    break;
#line 191 "add_mode.m"
                  case (MR_Integer) 1:
#line 193 "add_mode.m"
                    hlds__make_hlds__add_mode__NewReportDup_71 = (MR_Integer) 0;
#line 191 "add_mode.m"
                    break;
#line 191 "add_mode.m"
                }
#line 191 "add_mode.m"
                break;
#line 191 "add_mode.m"
              case (MR_Integer) 1:
#line 190 "add_mode.m"
                hlds__make_hlds__add_mode__NewReportDup_71 = (MR_Integer) 1;
#line 191 "add_mode.m"
                break;
#line 191 "add_mode.m"
            }
#line 185 "add_mode.m"
          }
#line 184 "add_mode.m"
        else
#line 183 "add_mode.m"
          hlds__make_hlds__add_mode__NewReportDup_71 = (MR_Integer) 1;
#line 196 "add_mode.m"
        hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__OldReportDup_69 == hlds__make_hlds__add_mode__NewReportDup_71);
#line 198 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 197 "add_mode.m"
          hlds__make_hlds__add_mode__ReportDup_45 = hlds__make_hlds__add_mode__NewReportDup_71;
#line 198 "add_mode.m"
        else
#line 199 "add_mode.m"
          {
#line 199 "add_mode.m"
            {
#line 199 "add_mode.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_mode", (MR_String) "function \140hlds.make_hlds.add_mode.should_report_duplicate_inst_or_mode\'/2", (MR_String) "mismatch");
#line 199 "add_mode.m"
              return;
            }
#line 199 "add_mode.m"
          }
#line 232 "add_mode.m"
#line 232 "add_mode.m"
        switch (hlds__make_hlds__add_mode__ReportDup_45) {
#line 232 "add_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 232 "add_mode.m"
          case (MR_Integer) 0:
#line 231 "add_mode.m"
            hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_43_58 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23;
#line 232 "add_mode.m"
            break;
#line 232 "add_mode.m"
          case (MR_Integer) 1:
#line 233 "add_mode.m"
            {
#line 233 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__ModeDefns_46;
#line 233 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__OrigModeDefn_47;
#line 233 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__OrigContext_51;
#line 235 "add_mode.m"
              MR_Box hlds__make_hlds__add_mode__conv0_OrigModeDefn_47;
#line 236 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__V_48_48;
#line 236 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 236 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__V_50_50;
#line 236 "add_mode.m"
              MR_Word hlds__make_hlds__add_mode__V_52_52;

#line 234 "add_mode.m"
              {
#line 234 "add_mode.m"
                hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__ModeDefns_46);
              }
#line 235 "add_mode.m"
              {
#line 235 "add_mode.m"
                mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_46, ((MR_Box) (hlds__make_hlds__add_mode__ModeId_41)), &hlds__make_hlds__add_mode__conv0_OrigModeDefn_47);
              }
#line 235 "add_mode.m"
              hlds__make_hlds__add_mode__OrigModeDefn_47 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigModeDefn_47);
#line 236 "add_mode.m"
              hlds__make_hlds__add_mode__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_47, (MR_Integer) 0)));
#line 236 "add_mode.m"
              hlds__make_hlds__add_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_47, (MR_Integer) 1)));
#line 236 "add_mode.m"
              hlds__make_hlds__add_mode__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_47, (MR_Integer) 2)));
#line 236 "add_mode.m"
              hlds__make_hlds__add_mode__OrigContext_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_47, (MR_Integer) 3)));
#line 236 "add_mode.m"
              hlds__make_hlds__add_mode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_47, (MR_Integer) 4)));
#line 238 "add_mode.m"
              {
#line 238 "add_mode.m"
                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__Name_13, hlds__make_hlds__add_mode__Arity_40, (MR_String) "mode", hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__OrigContext_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_43_58);
              }
#line 233 "add_mode.m"
            }
#line 232 "add_mode.m"
            break;
#line 232 "add_mode.m"
        }
#line 227 "add_mode.m"
        hlds__make_hlds__add_mode__ModeTable_20 = hlds__make_hlds__add_mode__ModeTable0_19;
#line 227 "add_mode.m"
      }
#line 242 "add_mode.m"
    {
#line 242 "add_mode.m"
      hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(hlds__make_hlds__add_mode__ModeTable_20, hlds__make_hlds__add_mode__ModeId_41, hlds__make_hlds__add_mode__ModeId_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__InvalidMode_10, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_43_58, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_24);
    }
#line 211 "add_mode.m"
    {
#line 211 "add_mode.m"
      hlds__hlds_module__module_info_set_mode_table_3_p_0(hlds__make_hlds__add_mode__ModeTable_20, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_22);
#line 211 "add_mode.m"
      return;
    }
#line 205 "add_mode.m"
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
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_27,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_28,
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30)
#line 25 "add_mode.m"
{
#line 50 "add_mode.m"
  {
#line 50 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 0)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstParams_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 1)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__MaybeForType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 2)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstDefn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 3)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 4)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 5)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstTable0_20;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__UserInstTable0_21;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__UserInstTable_22;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstTable_23;
#line 50 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__InstArity_24;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstId_25;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__TestArgs_26;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_31_31;
#line 51 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 6)));

#line 54 "add_mode.m"
    {
#line 54 "add_mode.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_mode__InstTable0_20);
    }
#line 55 "add_mode.m"
    {
#line 55 "add_mode.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__make_hlds__add_mode__InstTable0_20, &hlds__make_hlds__add_mode__UserInstTable0_21);
    }
#line 56 "add_mode.m"
    {
#line 56 "add_mode.m"
      hlds__make_hlds__add_mode__insts_add_11_p_0(hlds__make_hlds__add_mode__VarSet_17, hlds__make_hlds__add_mode__InstName_13, hlds__make_hlds__add_mode__InstParams_14, hlds__make_hlds__add_mode__MaybeForType_15, hlds__make_hlds__add_mode__InstDefn_16, hlds__make_hlds__add_mode__Context_18, hlds__make_hlds__add_mode__InstStatus_9, hlds__make_hlds__add_mode__UserInstTable0_21, &hlds__make_hlds__add_mode__UserInstTable_22, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_31_31);
    }
#line 58 "add_mode.m"
    {
#line 58 "add_mode.m"
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(hlds__make_hlds__add_mode__UserInstTable_22, hlds__make_hlds__add_mode__InstTable0_20, &hlds__make_hlds__add_mode__InstTable_23);
    }
#line 59 "add_mode.m"
    {
#line 59 "add_mode.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(hlds__make_hlds__add_mode__InstTable_23, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_28);
    }
#line 62 "add_mode.m"
    {
#line 62 "add_mode.m"
      hlds__make_hlds__add_mode__InstArity_24 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__InstParams_14);
    }
#line 63 "add_mode.m"
    {
#line 63 "add_mode.m"
      hlds__make_hlds__add_mode__InstId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 63 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_25, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstName_13));
#line 63 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_25, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_24));
#line 63 "add_mode.m"
    }
#line 64 "add_mode.m"
    {
#line 64 "add_mode.m"
      hlds__make_hlds__add_mode__TestArgs_26 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__InstArity_24, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 65 "add_mode.m"
    {
#line 65 "add_mode.m"
      hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(hlds__make_hlds__add_mode__UserInstTable_22, hlds__make_hlds__add_mode__InstId_25, hlds__make_hlds__add_mode__InstId_25, hlds__make_hlds__add_mode__TestArgs_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_18, hlds__make_hlds__add_mode__InvalidInst_10, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_31_31, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);
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
