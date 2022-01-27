/*
** Automatically generated from `error_msg_inst.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module hlds.error_msg_inst. */
/* :- implementation. */

/*
INIT mercury__hlds__error_msg_inst__init
ENDINIT
*/

#include "hlds.error_msg_inst.mih"


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
#include "check_hlds.mode_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "int.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3];

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3];

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0;

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1];

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1];

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2];

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word hlds__error_msg_inst__Pieces_4,
  MR_Integer hlds__error_msg_inst__Left_5,
  MR_String * hlds__error_msg_inst__Summary_6);

static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__Name_9,
  MR_Word hlds__error_msg_inst__ArgInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11);

static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__Name_9,
  MR_Word hlds__error_msg_inst__ArgInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11);

static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_inline_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Inst_7);

static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Inst_7);

static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Mode_7);

static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Mode_7);

static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__AnyPrefix_9,
  MR_Word hlds__error_msg_inst__Uniq_10,
  MR_Word hlds__error_msg_inst__PredInstInfo_11);

static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__AnyPrefix_9,
  MR_Word hlds__error_msg_inst__Uniq_10,
  MR_Word hlds__error_msg_inst__PredInstInfo_11);

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__InstName_8,
  MR_Word hlds__error_msg_inst__Suffix_9);

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__InstName_8,
  MR_Word hlds__error_msg_inst__Suffix_9);

static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11);

static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11);

static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadInst_9,
  MR_Word hlds__error_msg_inst__TailInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11);

static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadInst_9,
  MR_Word hlds__error_msg_inst__TailInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11);

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__Inst_8,
  MR_Word hlds__error_msg_inst__Suffix_9);

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__Inst_8,
  MR_Word hlds__error_msg_inst__Suffix_9);


static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[31][2];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[25][1];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[2][7];




static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[31][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[25][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "not_reached"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\044any_inst"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\044ground_inst"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\044unify_inst"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "/*"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "*/"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ") ="))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "out"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "di"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "ui"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "uo"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "mdi"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "mui"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "muo"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0)),
    ((MR_Box) (&hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0)),
    ((MR_Box) (&hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_inst_varset",
  (MR_String) "imi_expand_named_insts"
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 = {
  (MR_String) "inst_msg_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "inst_msg_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0 = {
  (MR_String) "dont_expand_named_insts",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1 = {
  (MR_String) "expand_named_insts",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "maybe_expand_named_insts",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0 = {
  (MR_String) "quote_short_inst",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1 = {
  (MR_String) "fixed_short_inst",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____short_inst_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____short_inst_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "short_inst",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0
};

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    {
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____inst_msg_info_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
{
  {
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

    {
      hlds__error_msg_inst____Compare____inst_msg_info_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    {
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
{
  {
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

    {
      hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    {
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____short_inst_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
{
  {
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

    {
      hlds__error_msg_inst____Compare____short_inst_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar1_4 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar2_5 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__Cast_HeadVar1_4, hlds__error_msg_inst__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__2_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__HeadVar__2_1 == hlds__error_msg_inst__HeadVar__2_2);

    return hlds__error_msg_inst__succeeded;
  }
}

void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar1_4 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar2_5 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__Cast_HeadVar1_4, hlds__error_msg_inst__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__2_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__HeadVar__2_1 == hlds__error_msg_inst__HeadVar__2_2);

    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__CastX_12 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
    MR_Integer hlds__error_msg_inst__CastY_13 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_12 == hlds__error_msg_inst__CastY_13);
    if (hlds__error_msg_inst__succeeded)
      *hlds__error_msg_inst__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__error_msg_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__error_msg_inst__V_10_10;

        {
          hlds__hlds_module____Compare____module_info_0_0(&hlds__error_msg_inst__V_10_10, hlds__error_msg_inst__V_4_4, hlds__error_msg_inst__V_7_7);
        }
        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_10_10 == (MR_Integer) 0);
        hlds__error_msg_inst__succeeded = !(hlds__error_msg_inst__succeeded);
        if (hlds__error_msg_inst__succeeded)
          *hlds__error_msg_inst__HeadVar__1_1 = hlds__error_msg_inst__V_10_10;
        else
          {
            MR_Word hlds__error_msg_inst__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[3], &hlds__error_msg_inst__V_11_11, ((MR_Box) (hlds__error_msg_inst__V_5_5)), ((MR_Box) (hlds__error_msg_inst__V_8_8)));
            }
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_11_11 == (MR_Integer) 0);
            hlds__error_msg_inst__succeeded = !(hlds__error_msg_inst__succeeded);
            if (hlds__error_msg_inst__succeeded)
              *hlds__error_msg_inst__HeadVar__1_1 = hlds__error_msg_inst__V_11_11;
            else
              {
                MR_Integer hlds__error_msg_inst__V_17_17 = (MR_Integer) hlds__error_msg_inst__V_6_6;
                MR_Integer hlds__error_msg_inst__V_18_18 = (MR_Integer) hlds__error_msg_inst__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__V_17_17, hlds__error_msg_inst__V_18_18);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__CastX_9 = (MR_Integer) hlds__error_msg_inst__HeadVar__1_1;
    MR_Integer hlds__error_msg_inst__CastY_10 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;

    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_9 == hlds__error_msg_inst__CastY_10);
    if (hlds__error_msg_inst__succeeded)
      hlds__error_msg_inst__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__error_msg_inst__TypeInfo_12_12;
        MR_Word hlds__error_msg_inst__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 2)));

        {
          hlds__error_msg_inst__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__error_msg_inst__V_3_3, hlds__error_msg_inst__V_6_6);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__TypeInfo_12_12 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[3];
            {
              hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_12_12, ((MR_Box) (hlds__error_msg_inst__V_4_4)), ((MR_Box) (hlds__error_msg_inst__V_7_7)));
            }
            if (hlds__error_msg_inst__succeeded)
              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_5_5 == hlds__error_msg_inst__V_8_8);
          }
      }
    return hlds__error_msg_inst__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word hlds__error_msg_inst__Pieces_4,
  MR_Integer hlds__error_msg_inst__Left_5,
  MR_String * hlds__error_msg_inst__Summary_6)
{
  {
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__Left_5 > (MR_Integer) 0);
    MR_String hlds__error_msg_inst__FirstFixed_7;
    MR_Word hlds__error_msg_inst__AfterFirstFixed_8;
    MR_Word hlds__error_msg_inst__V_12_12;
    MR_Word hlds__error_msg_inst__V_24_24;
    MR_Word hlds__error_msg_inst__V_25_25;

    if (hlds__error_msg_inst__succeeded)
      {
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__Pieces_4)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_4, (MR_Integer) 0)));
            hlds__error_msg_inst__AfterFirstFixed_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_4, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__V_12_12)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__FirstFixed_7 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_12_12, (MR_Integer) 0)));
                hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__AfterFirstFixed_8)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__AfterFirstFixed_8, (MR_Integer) 0)));
                    hlds__error_msg_inst__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__AfterFirstFixed_8, (MR_Integer) 1)));
                    if ((hlds__error_msg_inst__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Integer hlds__error_msg_inst__V_22_22;

                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 15)));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 1)));
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_22_22 == (MR_Integer) -1);
                            if (hlds__error_msg_inst__succeeded)
                              {
                                *hlds__error_msg_inst__Summary_6 = hlds__error_msg_inst__FirstFixed_7;
                                hlds__error_msg_inst__succeeded = MR_TRUE;
                              }
                          }
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TailPieces_9;
                        MR_String hlds__error_msg_inst__TailSummary_10;
                        MR_String hlds__error_msg_inst__V_14_14;
                        MR_Word hlds__error_msg_inst__V_16_16;
                        MR_Integer hlds__error_msg_inst__V_17_17;
                        MR_Integer hlds__error_msg_inst__V_18_18;
                        MR_String hlds__error_msg_inst__V_19_19;
                        MR_String hlds__error_msg_inst__V_20_20;

                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 1)));
                            hlds__error_msg_inst__succeeded = (strcmp(hlds__error_msg_inst__V_14_14, (MR_String) ",") == 0);
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_24_24, (MR_Integer) 0)));
                                hlds__error_msg_inst__TailPieces_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_24_24, (MR_Integer) 1)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__V_18_18 = (MR_Integer) 1;
                                    hlds__error_msg_inst__V_17_17 = (hlds__error_msg_inst__Left_5 - hlds__error_msg_inst__V_18_18);
                                    {
                                      hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__TailPieces_9, hlds__error_msg_inst__V_17_17, &hlds__error_msg_inst__TailSummary_10);
                                    }
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__V_20_20 = (MR_String) ", ";
                                        {
                                          hlds__error_msg_inst__V_19_19 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__V_20_20, hlds__error_msg_inst__TailSummary_10);
                                        }
                                        {
                                          *hlds__error_msg_inst__Summary_6 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__FirstFixed_7, hlds__error_msg_inst__V_19_19);
                                        }
                                        hlds__error_msg_inst__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__error_msg_inst__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__Name_9,
  MR_Word hlds__error_msg_inst__ArgInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;

    if ((hlds__error_msg_inst__ArgInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__error_msg_inst__V_32_32;

        {
          hlds__error_msg_inst__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_32_32, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
        }
        {
          hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_32_32));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
        }
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__ArgPieces_15;
        MR_String hlds__error_msg_inst__ArgSummary_16;

        {
          hlds__error_msg_inst__ArgPieces_15 = hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadArgInst_13, hlds__error_msg_inst__TailArgInsts_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__ArgPieces_15, (MR_Integer) 4, &hlds__error_msg_inst__ArgSummary_16);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            MR_Word hlds__error_msg_inst__V_19_19;
            MR_String hlds__error_msg_inst__V_20_20;
            MR_String hlds__error_msg_inst__V_21_21;
            MR_String hlds__error_msg_inst__V_23_23;

            {
              hlds__error_msg_inst__V_23_23 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__ArgSummary_16, (MR_String) ")");
            }
            {
              hlds__error_msg_inst__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_23_23);
            }
            {
              hlds__error_msg_inst__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__Name_9, hlds__error_msg_inst__V_21_21);
            }
            {
              hlds__error_msg_inst__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_19_19, 0) = ((MR_Box) (hlds__error_msg_inst__V_20_20));
            }
            {
              hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_19_19));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__V_25_25;
            MR_Word hlds__error_msg_inst__V_26_26;
            MR_String hlds__error_msg_inst__V_27_27;
            MR_Word hlds__error_msg_inst__V_29_29;

            {
              hlds__error_msg_inst__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__Name_9, (MR_String) "(");
            }
            {
              hlds__error_msg_inst__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_26_26, 1) = ((MR_Box) (hlds__error_msg_inst__V_27_27));
            }
            {
              hlds__error_msg_inst__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_25_25, 0) = ((MR_Box) (hlds__error_msg_inst__V_26_26));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_25_25, 1) = ((MR_Box) (hlds__error_msg_inst__ArgPieces_15));
            }
            {
              hlds__error_msg_inst__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
            }
            {
              hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_25_25, hlds__error_msg_inst__V_29_29);
            }
          }
      }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__Name_9,
  MR_Word hlds__error_msg_inst__ArgInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;

    if ((hlds__error_msg_inst__ArgInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__error_msg_inst__V_42_42;

        {
          hlds__error_msg_inst__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_42_42, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
        }
        {
          hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_42_42));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
        }
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__ArgPieces_15;
        MR_String hlds__error_msg_inst__ArgSummary_16;

        {
          hlds__error_msg_inst__ArgPieces_15 = hlds__error_msg_inst__insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadArgInst_13, hlds__error_msg_inst__TailArgInsts_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[13]));
        }
        {
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__ArgPieces_15, (MR_Integer) 4, &hlds__error_msg_inst__ArgSummary_16);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            MR_Word hlds__error_msg_inst__V_22_22;
            MR_Word hlds__error_msg_inst__V_23_23;
            MR_Word hlds__error_msg_inst__V_24_24;
            MR_String hlds__error_msg_inst__V_25_25;
            MR_String hlds__error_msg_inst__V_27_27;

            {
              hlds__error_msg_inst__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_22_22, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
            }
            {
              hlds__error_msg_inst__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__ArgSummary_16, (MR_String) ")");
            }
            {
              hlds__error_msg_inst__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_27_27);
            }
            {
              hlds__error_msg_inst__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_24_24, 1) = ((MR_Box) (hlds__error_msg_inst__V_25_25));
            }
            {
              hlds__error_msg_inst__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_23_23, 0) = ((MR_Box) (hlds__error_msg_inst__V_24_24));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_23_23, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
            }
            {
              hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_22_22));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__V_23_23));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word hlds__error_msg_inst__V_29_29;
            MR_Word hlds__error_msg_inst__V_30_30;
            MR_Word hlds__error_msg_inst__V_38_38;
            MR_Word hlds__error_msg_inst__V_39_39;

            {
              hlds__error_msg_inst__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_30_30, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
            }
            {
              hlds__error_msg_inst__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 0) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[11])));
            }
            {
              hlds__error_msg_inst__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_39_39, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
            }
            {
              hlds__error_msg_inst__V_38_38 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_43_43, hlds__error_msg_inst__ArgPieces_15, hlds__error_msg_inst__V_39_39);
            }
            {
              hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_43_43, hlds__error_msg_inst__V_29_29, hlds__error_msg_inst__V_38_38);
            }
          }
      }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_inline_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Inst_7)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__HeadVar__4_4;

    {
      hlds__error_msg_inst__HeadVar__4_4 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__Inst_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    return hlds__error_msg_inst__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Inst_7)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__HeadVar__4_4;

    {
      hlds__error_msg_inst__HeadVar__4_4 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__Inst_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    return hlds__error_msg_inst__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
{
  {
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
    MR_Word hlds__error_msg_inst__conv0_HeadVar__4_4;

    {
      hlds__error_msg_inst__conv0_HeadVar__4_4 = hlds__error_msg_inst__arg_inst_to_inline_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__4_4));
    return hlds__error_msg_inst__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Mode_7)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_8;

    if (((MR_tag((MR_Word) hlds__error_msg_inst__Mode_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__error_msg_inst__InitInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__FinalInst0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__InitInst_13;
        MR_Word hlds__error_msg_inst__FinalInst_16;
        MR_Word hlds__error_msg_inst__SubInitInstName_12;
        MR_Word hlds__error_msg_inst__V_37_37;
        MR_Word hlds__error_msg_inst__V_11_11;
        MR_Word hlds__error_msg_inst__SubFinalInstName_15;
        MR_Word hlds__error_msg_inst__V_38_38;
        MR_Word hlds__error_msg_inst__V_14_14;
        MR_Word hlds__error_msg_inst__V_39_39;
        MR_Word hlds__error_msg_inst__V_40_40;
        MR_Word hlds__error_msg_inst__V_41_41;
        MR_Word hlds__error_msg_inst__V_42_42;

        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 1)));
                hlds__error_msg_inst__SubInitInstName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__InitInst_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 1) = ((MR_Box) (hlds__error_msg_inst__SubInitInstName_12));
          }
        else
          hlds__error_msg_inst__InitInst_13 = hlds__error_msg_inst__InitInst0_9;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 1)));
                hlds__error_msg_inst__SubFinalInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__FinalInst_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 1) = ((MR_Box) (hlds__error_msg_inst__SubFinalInstName_15));
          }
        else
          hlds__error_msg_inst__FinalInst_16 = hlds__error_msg_inst__FinalInst0_10;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
            hlds__error_msg_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_39_39 == (MR_Integer) 0);
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_41_41 == (MR_Integer) 0);
                        if (hlds__error_msg_inst__succeeded)
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]);
          }
        else
          {
            MR_Word hlds__error_msg_inst__V_46_46;
            MR_Word hlds__error_msg_inst__V_47_47;
            MR_Word hlds__error_msg_inst__V_48_48;
            MR_Word hlds__error_msg_inst__V_49_49;

            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
                hlds__error_msg_inst__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_46_46 == (MR_Integer) 1);
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                            hlds__error_msg_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_48_48 == (MR_Integer) 3);
                            if (hlds__error_msg_inst__succeeded)
                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25]);
              }
            else
              {
                MR_Word hlds__error_msg_inst__V_53_53;
                MR_Word hlds__error_msg_inst__V_54_54;

                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_53_53 == (MR_Integer) 0);
                        if (hlds__error_msg_inst__succeeded)
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24]);
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__V_58_58;
                    MR_Word hlds__error_msg_inst__V_59_59;

                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                            hlds__error_msg_inst__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_58_58 == (MR_Integer) 1);
                            if (hlds__error_msg_inst__succeeded)
                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[27]);
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__InitPieces_17;
                        MR_Word hlds__error_msg_inst__FinalPieces_18;
                        MR_Word hlds__error_msg_inst__V_65_65;

                        {
                          hlds__error_msg_inst__InitPieces_17 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__InitInst_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                        }
                        {
                          hlds__error_msg_inst__FinalPieces_18 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__FinalInst_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                        }
                        {
                          hlds__error_msg_inst__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[24])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 1) = ((MR_Box) (hlds__error_msg_inst__FinalPieces_18));
                        }
                        {
                          hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__InitPieces_17, hlds__error_msg_inst__V_65_65);
                        }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word hlds__error_msg_inst__ModeName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__ArgInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
        MR_String hlds__error_msg_inst__BaseModeName_21;

        {
          hlds__error_msg_inst__BaseModeName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__error_msg_inst__ModeName_19);
        }
        if ((hlds__error_msg_inst__ArgInsts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_35_35;

            {
              hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BaseModeName_21));
            }
            {
              hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__ArgInstPieces_24;
            MR_Word hlds__error_msg_inst__V_25_25;
            MR_Word hlds__error_msg_inst__V_26_26;
            MR_Word hlds__error_msg_inst__V_27_27;
            MR_String hlds__error_msg_inst__V_28_28;
            MR_Word hlds__error_msg_inst__V_30_30;

            {
              hlds__error_msg_inst__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 1) = ((MR_Box) (hlds__error_msg_inst__mode_to_inline_pieces_3_f_0_1));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 3) = ((MR_Box) (hlds__error_msg_inst__Info_5));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_6));
            }
            {
              hlds__error_msg_inst__ArgInstPieces_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[2], hlds__error_msg_inst__V_25_25, hlds__error_msg_inst__ArgInsts_20);
            }
            {
              hlds__error_msg_inst__V_28_28 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BaseModeName_21, (MR_String) "(");
            }
            {
              hlds__error_msg_inst__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
            }
            {
              hlds__error_msg_inst__V_30_30 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgInstPieces_24);
            }
            {
              hlds__error_msg_inst__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 0) = ((MR_Box) (hlds__error_msg_inst__V_27_27));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 1) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
            }
            {
              hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22]));
            }
          }
      }
    return hlds__error_msg_inst__Pieces_8;
  }
}

static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
{
  {
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
    MR_Word hlds__error_msg_inst__conv0_HeadVar__4_4;

    {
      hlds__error_msg_inst__conv0_HeadVar__4_4 = hlds__error_msg_inst__arg_inst_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__4_4));
    return hlds__error_msg_inst__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0(
  MR_Word hlds__error_msg_inst__Info_5,
  MR_Word hlds__error_msg_inst__Expansions0_6,
  MR_Word hlds__error_msg_inst__Mode_7)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_8;

    if (((MR_tag((MR_Word) hlds__error_msg_inst__Mode_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__error_msg_inst__InitInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__FinalInst0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__InitInst_13;
        MR_Word hlds__error_msg_inst__FinalInst_16;
        MR_Word hlds__error_msg_inst__SubInitInstName_12;
        MR_Word hlds__error_msg_inst__V_37_37;
        MR_Word hlds__error_msg_inst__V_11_11;
        MR_Word hlds__error_msg_inst__SubFinalInstName_15;
        MR_Word hlds__error_msg_inst__V_38_38;
        MR_Word hlds__error_msg_inst__V_14_14;
        MR_Word hlds__error_msg_inst__V_39_39;
        MR_Word hlds__error_msg_inst__V_40_40;
        MR_Word hlds__error_msg_inst__V_41_41;
        MR_Word hlds__error_msg_inst__V_42_42;

        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 1)));
                hlds__error_msg_inst__SubInitInstName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__InitInst_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 1) = ((MR_Box) (hlds__error_msg_inst__SubInitInstName_12));
          }
        else
          hlds__error_msg_inst__InitInst_13 = hlds__error_msg_inst__InitInst0_9;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 1)));
                hlds__error_msg_inst__SubFinalInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__FinalInst_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 1) = ((MR_Box) (hlds__error_msg_inst__SubFinalInstName_15));
          }
        else
          hlds__error_msg_inst__FinalInst_16 = hlds__error_msg_inst__FinalInst0_10;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
            hlds__error_msg_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_39_39 == (MR_Integer) 0);
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_41_41 == (MR_Integer) 0);
                        if (hlds__error_msg_inst__succeeded)
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]);
          }
        else
          {
            MR_Word hlds__error_msg_inst__V_46_46;
            MR_Word hlds__error_msg_inst__V_47_47;

            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                    hlds__error_msg_inst__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_46_46 == (MR_Integer) 0);
                    if (hlds__error_msg_inst__succeeded)
                      hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24]);
              }
            else
              {
                MR_Word hlds__error_msg_inst__V_51_51;
                MR_Word hlds__error_msg_inst__V_52_52;
                MR_Word hlds__error_msg_inst__V_53_53;
                MR_Word hlds__error_msg_inst__V_54_54;

                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
                    hlds__error_msg_inst__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_51_51 == (MR_Integer) 1);
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                                hlds__error_msg_inst__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_53_53 == (MR_Integer) 3);
                                if (hlds__error_msg_inst__succeeded)
                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25]);
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__V_58_58;
                    MR_Word hlds__error_msg_inst__V_59_59;
                    MR_Word hlds__error_msg_inst__V_60_60;
                    MR_Word hlds__error_msg_inst__V_61_61;

                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_58_58 == (MR_Integer) 1);
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                                    hlds__error_msg_inst__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_60_60 == (MR_Integer) 1);
                                    if (hlds__error_msg_inst__succeeded)
                                      hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                          }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[26]);
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__V_65_65;
                        MR_Word hlds__error_msg_inst__V_66_66;

                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                                hlds__error_msg_inst__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_65_65 == (MR_Integer) 1);
                                if (hlds__error_msg_inst__succeeded)
                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[27]);
                          }
                        else
                          {
                            MR_Word hlds__error_msg_inst__V_70_70;
                            MR_Word hlds__error_msg_inst__V_71_71;
                            MR_Word hlds__error_msg_inst__V_72_72;
                            MR_Word hlds__error_msg_inst__V_73_73;

                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
                                hlds__error_msg_inst__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_70_70 == (MR_Integer) 2);
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                        if (hlds__error_msg_inst__succeeded)
                                          {
                                            hlds__error_msg_inst__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                                            hlds__error_msg_inst__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_72_72 == (MR_Integer) 4);
                                            if (hlds__error_msg_inst__succeeded)
                                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                  }
                              }
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[28]);
                              }
                            else
                              {
                                MR_Word hlds__error_msg_inst__V_77_77;
                                MR_Word hlds__error_msg_inst__V_78_78;
                                MR_Word hlds__error_msg_inst__V_79_79;
                                MR_Word hlds__error_msg_inst__V_80_80;

                                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
                                    hlds__error_msg_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_77_77 == (MR_Integer) 2);
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (hlds__error_msg_inst__succeeded)
                                          {
                                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                            if (hlds__error_msg_inst__succeeded)
                                              {
                                                hlds__error_msg_inst__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                                                hlds__error_msg_inst__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_79_79 == (MR_Integer) 2);
                                                if (hlds__error_msg_inst__succeeded)
                                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                          }
                                      }
                                  }
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[29]);
                                  }
                                else
                                  {
                                    MR_Word hlds__error_msg_inst__V_84_84;
                                    MR_Word hlds__error_msg_inst__V_85_85;

                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                        if (hlds__error_msg_inst__succeeded)
                                          {
                                            hlds__error_msg_inst__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
                                            hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
                                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_84_84 == (MR_Integer) 2);
                                            if (hlds__error_msg_inst__succeeded)
                                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[30]);
                                      }
                                    else
                                      {
                                        MR_Word hlds__error_msg_inst__InitPieces_17;
                                        MR_Word hlds__error_msg_inst__FinalPieces_18;
                                        MR_Word hlds__error_msg_inst__V_91_91;

                                        {
                                          hlds__error_msg_inst__InitPieces_17 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__InitInst_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                        }
                                        {
                                          hlds__error_msg_inst__FinalPieces_18 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__FinalInst_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                        }
                                        {
                                          hlds__error_msg_inst__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[24])));
                                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_91_91, 1) = ((MR_Box) (hlds__error_msg_inst__FinalPieces_18));
                                        }
                                        {
                                          hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__InitPieces_17, hlds__error_msg_inst__V_91_91);
                                        }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word hlds__error_msg_inst__ModeName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__ArgInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
        MR_String hlds__error_msg_inst__BaseModeName_21;

        {
          hlds__error_msg_inst__BaseModeName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__error_msg_inst__ModeName_19);
        }
        if ((hlds__error_msg_inst__ArgInsts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_35_35;

            {
              hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BaseModeName_21));
            }
            {
              hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__ArgInstPieces_24;
            MR_Word hlds__error_msg_inst__V_25_25;
            MR_Word hlds__error_msg_inst__V_26_26;
            MR_Word hlds__error_msg_inst__V_27_27;
            MR_String hlds__error_msg_inst__V_28_28;
            MR_Word hlds__error_msg_inst__V_30_30;

            {
              hlds__error_msg_inst__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 1) = ((MR_Box) (hlds__error_msg_inst__mode_to_pieces_3_f_0_1));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 3) = ((MR_Box) (hlds__error_msg_inst__Info_5));
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_6));
            }
            {
              hlds__error_msg_inst__ArgInstPieces_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[2], hlds__error_msg_inst__V_25_25, hlds__error_msg_inst__ArgInsts_20);
            }
            {
              hlds__error_msg_inst__V_28_28 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BaseModeName_21, (MR_String) "(");
            }
            {
              hlds__error_msg_inst__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
            }
            {
              hlds__error_msg_inst__V_30_30 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgInstPieces_24);
            }
            {
              hlds__error_msg_inst__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 0) = ((MR_Box) (hlds__error_msg_inst__V_27_27));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 1) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
            }
            {
              hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22]));
            }
          }
      }
    return hlds__error_msg_inst__Pieces_8;
  }
}

static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
{
  {
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
    MR_Word hlds__error_msg_inst__conv1_Pieces_8;

    {
      hlds__error_msg_inst__conv1_Pieces_8 = hlds__error_msg_inst__mode_to_inline_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv1_Pieces_8));
    return hlds__error_msg_inst__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__AnyPrefix_9,
  MR_Word hlds__error_msg_inst__Uniq_10,
  MR_Word hlds__error_msg_inst__PredInstInfo_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;
    MR_Word hlds__error_msg_inst__TypeInfo_101_101;
    MR_Word hlds__error_msg_inst__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 0)));
    MR_Word hlds__error_msg_inst__ArgModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 1)));
    MR_Word hlds__error_msg_inst__Det_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 3)));
    MR_Word hlds__error_msg_inst__UniqPieces_17;
    MR_Word hlds__error_msg_inst__ArgModesPieces_19;
    MR_String hlds__error_msg_inst__IsDetStr_20;
    MR_Word hlds__error_msg_inst__ModesDetPieces_21;
    MR_Word hlds__error_msg_inst__V_40_40;
    MR_Word hlds__error_msg_inst___MaybeArgRegs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 2)));
    MR_Box hlds__error_msg_inst__conv2_IsDetStr_20;

    switch (hlds__error_msg_inst__Uniq_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String hlds__error_msg_inst__BoundName_18;
          MR_Word hlds__error_msg_inst__V_34_34;
          MR_Word hlds__error_msg_inst__V_35_35;
          MR_Box hlds__error_msg_inst__conv0_BoundName_18;

          {
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_10, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_BoundName_18);
          }
          hlds__error_msg_inst__BoundName_18 = ((MR_String) hlds__error_msg_inst__conv0_BoundName_18);
          {
            hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_18));
          }
          {
            hlds__error_msg_inst__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[21])));
          }
          {
            hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[12])));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 1) = ((MR_Box) (hlds__error_msg_inst__V_34_34));
          }
        }
        break;
      case (MR_Integer) 0:
        hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    hlds__error_msg_inst__TypeInfo_101_101 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[2];
    {
      hlds__error_msg_inst__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 3) = ((MR_Box) (hlds__error_msg_inst__Info_7));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_8));
    }
    {
      hlds__error_msg_inst__ArgModesPieces_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__error_msg_inst__TypeInfo_101_101, hlds__error_msg_inst__V_40_40, hlds__error_msg_inst__ArgModes_14);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Det_16, ((MR_Box) ((MR_String) "is ")), &hlds__error_msg_inst__conv2_IsDetStr_20);
    }
    hlds__error_msg_inst__IsDetStr_20 = ((MR_String) hlds__error_msg_inst__conv2_IsDetStr_20);
    switch (hlds__error_msg_inst__PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__error_msg_inst__RealArgModesPieces_25;
          MR_Word hlds__error_msg_inst__RetModePieces_26;
          MR_Word hlds__error_msg_inst__JoinedRealArgModePieces_27;
          MR_Box hlds__error_msg_inst__conv3_RetModePieces_26;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__error_msg_inst__TypeInfo_101_101, hlds__error_msg_inst__ArgModesPieces_19, &hlds__error_msg_inst__RealArgModesPieces_25, &hlds__error_msg_inst__conv3_RetModePieces_26);
          }
          hlds__error_msg_inst__RetModePieces_26 = ((MR_Word) hlds__error_msg_inst__conv3_RetModePieces_26);
          {
            hlds__error_msg_inst__JoinedRealArgModePieces_27 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__RealArgModesPieces_25);
          }
          if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_61_61;
              MR_Word hlds__error_msg_inst__V_62_62;
              MR_String hlds__error_msg_inst__V_63_63;
              MR_String hlds__error_msg_inst__V_65_65;
              MR_Word hlds__error_msg_inst__V_67_67;
              MR_Word hlds__error_msg_inst__V_68_68;

              {
                hlds__error_msg_inst__V_65_65 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func =");
              }
              {
                hlds__error_msg_inst__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_65_65);
              }
              {
                hlds__error_msg_inst__V_62_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_62_62, 0) = ((MR_Box) (hlds__error_msg_inst__V_63_63));
              }
              {
                hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (hlds__error_msg_inst__V_62_62));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
              }
              {
                hlds__error_msg_inst__V_68_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_68_68, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
              }
              {
                hlds__error_msg_inst__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_67_67, 0) = ((MR_Box) (hlds__error_msg_inst__V_68_68));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
              }
              {
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_61_61, hlds__error_msg_inst__V_67_67);
              }
            }
          else
            {
              MR_Word hlds__error_msg_inst__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              MR_Word hlds__error_msg_inst__V_42_42;
              MR_Word hlds__error_msg_inst__V_43_43;
              MR_String hlds__error_msg_inst__V_44_44;
              MR_String hlds__error_msg_inst__V_46_46;
              MR_Word hlds__error_msg_inst__V_48_48;
              MR_Word hlds__error_msg_inst__V_49_49;
              MR_Word hlds__error_msg_inst__V_52_52;
              MR_Word hlds__error_msg_inst__V_55_55;
              MR_Word hlds__error_msg_inst__V_56_56;

              {
                hlds__error_msg_inst__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func(");
              }
              {
                hlds__error_msg_inst__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_46_46);
              }
              {
                hlds__error_msg_inst__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_43_43, 1) = ((MR_Box) (hlds__error_msg_inst__V_44_44));
              }
              {
                hlds__error_msg_inst__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_42_42, 0) = ((MR_Box) (hlds__error_msg_inst__V_43_43));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_42_42, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedRealArgModePieces_27));
              }
              {
                hlds__error_msg_inst__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[15])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
              }
              {
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 1) = ((MR_Box) (hlds__error_msg_inst__V_52_52));
              }
              {
                hlds__error_msg_inst__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_56_56, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
              }
              {
                hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__V_56_56));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
              }
              {
                hlds__error_msg_inst__V_48_48 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_107_107, hlds__error_msg_inst__V_49_49, hlds__error_msg_inst__V_55_55);
              }
              {
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_107_107, hlds__error_msg_inst__V_42_42, hlds__error_msg_inst__V_48_48);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_88_88;
            MR_String hlds__error_msg_inst__V_89_89;
            MR_String hlds__error_msg_inst__V_91_91;
            MR_Word hlds__error_msg_inst__V_93_93;
            MR_Word hlds__error_msg_inst__V_94_94;

            {
              hlds__error_msg_inst__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred");
            }
            {
              hlds__error_msg_inst__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_91_91);
            }
            {
              hlds__error_msg_inst__V_88_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_88_88, 0) = ((MR_Box) (hlds__error_msg_inst__V_89_89));
            }
            {
              hlds__error_msg_inst__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_94_94, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
            }
            {
              hlds__error_msg_inst__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_93_93, 0) = ((MR_Box) (hlds__error_msg_inst__V_94_94));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 0) = ((MR_Box) (hlds__error_msg_inst__V_88_88));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 1) = ((MR_Box) (hlds__error_msg_inst__V_93_93));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__JoinedArgModePieces_24;
            MR_Word hlds__error_msg_inst__V_73_73;
            MR_Word hlds__error_msg_inst__V_74_74;
            MR_String hlds__error_msg_inst__V_75_75;
            MR_String hlds__error_msg_inst__V_77_77;
            MR_Word hlds__error_msg_inst__V_79_79;
            MR_Word hlds__error_msg_inst__V_82_82;
            MR_Word hlds__error_msg_inst__V_83_83;

            {
              hlds__error_msg_inst__JoinedArgModePieces_24 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgModesPieces_19);
            }
            {
              hlds__error_msg_inst__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred(");
            }
            {
              hlds__error_msg_inst__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_77_77);
            }
            {
              hlds__error_msg_inst__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_74_74, 1) = ((MR_Box) (hlds__error_msg_inst__V_75_75));
            }
            {
              hlds__error_msg_inst__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_73_73, 0) = ((MR_Box) (hlds__error_msg_inst__V_74_74));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_73_73, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedArgModePieces_24));
            }
            {
              hlds__error_msg_inst__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_83_83, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
            }
            {
              hlds__error_msg_inst__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 0) = ((MR_Box) (hlds__error_msg_inst__V_83_83));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
            }
            {
              hlds__error_msg_inst__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_79_79, 1) = ((MR_Box) (hlds__error_msg_inst__V_82_82));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_73_73, hlds__error_msg_inst__V_79_79);
            }
          }
        break;
    }
    {
      hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__UniqPieces_17, hlds__error_msg_inst__ModesDetPieces_21);
    }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0_1(
  MR_Box hlds__error_msg_inst__closure_arg,
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
{
  {
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
    MR_Word hlds__error_msg_inst__conv1_Pieces_8;

    {
      hlds__error_msg_inst__conv1_Pieces_8 = hlds__error_msg_inst__mode_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv1_Pieces_8));
    return hlds__error_msg_inst__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_String hlds__error_msg_inst__AnyPrefix_9,
  MR_Word hlds__error_msg_inst__Uniq_10,
  MR_Word hlds__error_msg_inst__PredInstInfo_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;
    MR_Word hlds__error_msg_inst__TypeInfo_105_105;
    MR_Word hlds__error_msg_inst__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 0)));
    MR_Word hlds__error_msg_inst__ArgModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 1)));
    MR_Word hlds__error_msg_inst__Det_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 3)));
    MR_Word hlds__error_msg_inst__UniqPieces_17;
    MR_Word hlds__error_msg_inst__ArgModesPieces_19;
    MR_String hlds__error_msg_inst__IsDetStr_20;
    MR_Word hlds__error_msg_inst__ModesDetPieces_21;
    MR_Word hlds__error_msg_inst__V_40_40;
    MR_Word hlds__error_msg_inst___MaybeArgRegs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 2)));
    MR_Box hlds__error_msg_inst__conv2_IsDetStr_20;

    switch (hlds__error_msg_inst__Uniq_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String hlds__error_msg_inst__BoundName_18;
          MR_Word hlds__error_msg_inst__V_34_34;
          MR_Word hlds__error_msg_inst__V_35_35;
          MR_Box hlds__error_msg_inst__conv0_BoundName_18;

          {
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_10, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_BoundName_18);
          }
          hlds__error_msg_inst__BoundName_18 = ((MR_String) hlds__error_msg_inst__conv0_BoundName_18);
          {
            hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_18));
          }
          {
            hlds__error_msg_inst__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[21])));
          }
          {
            hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[12])));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 1) = ((MR_Box) (hlds__error_msg_inst__V_34_34));
          }
        }
        break;
      case (MR_Integer) 0:
        hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    hlds__error_msg_inst__TypeInfo_105_105 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[2];
    {
      hlds__error_msg_inst__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 3) = ((MR_Box) (hlds__error_msg_inst__Info_7));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_8));
    }
    {
      hlds__error_msg_inst__ArgModesPieces_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__error_msg_inst__TypeInfo_105_105, hlds__error_msg_inst__V_40_40, hlds__error_msg_inst__ArgModes_14);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Det_16, ((MR_Box) ((MR_String) "is ")), &hlds__error_msg_inst__conv2_IsDetStr_20);
    }
    hlds__error_msg_inst__IsDetStr_20 = ((MR_String) hlds__error_msg_inst__conv2_IsDetStr_20);
    switch (hlds__error_msg_inst__PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__error_msg_inst__RealArgModesPieces_25;
          MR_Word hlds__error_msg_inst__RetModePieces_26;
          MR_Word hlds__error_msg_inst__JoinedRealArgModePieces_27;
          MR_Box hlds__error_msg_inst__conv3_RetModePieces_26;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__error_msg_inst__TypeInfo_105_105, hlds__error_msg_inst__ArgModesPieces_19, &hlds__error_msg_inst__RealArgModesPieces_25, &hlds__error_msg_inst__conv3_RetModePieces_26);
          }
          hlds__error_msg_inst__RetModePieces_26 = ((MR_Word) hlds__error_msg_inst__conv3_RetModePieces_26);
          {
            hlds__error_msg_inst__JoinedRealArgModePieces_27 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__error_msg_inst__RealArgModesPieces_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_65_65;
              MR_Word hlds__error_msg_inst__V_66_66;
              MR_String hlds__error_msg_inst__V_67_67;
              MR_String hlds__error_msg_inst__V_69_69;
              MR_Word hlds__error_msg_inst__V_71_71;
              MR_Word hlds__error_msg_inst__V_72_72;

              {
                hlds__error_msg_inst__V_69_69 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func =");
              }
              {
                hlds__error_msg_inst__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_69_69);
              }
              {
                hlds__error_msg_inst__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_66_66, 0) = ((MR_Box) (hlds__error_msg_inst__V_67_67));
              }
              {
                hlds__error_msg_inst__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 0) = ((MR_Box) (hlds__error_msg_inst__V_66_66));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
              }
              {
                hlds__error_msg_inst__V_72_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_72_72, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
              }
              {
                hlds__error_msg_inst__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 0) = ((MR_Box) (hlds__error_msg_inst__V_72_72));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
              }
              {
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_65_65, hlds__error_msg_inst__V_71_71);
              }
            }
          else
            {
              MR_Word hlds__error_msg_inst__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              MR_Word hlds__error_msg_inst__V_43_43;
              MR_Word hlds__error_msg_inst__V_44_44;
              MR_String hlds__error_msg_inst__V_45_45;
              MR_String hlds__error_msg_inst__V_47_47;
              MR_Word hlds__error_msg_inst__V_49_49;
              MR_Word hlds__error_msg_inst__V_52_52;
              MR_Word hlds__error_msg_inst__V_53_53;
              MR_Word hlds__error_msg_inst__V_56_56;
              MR_Word hlds__error_msg_inst__V_59_59;
              MR_Word hlds__error_msg_inst__V_60_60;

              {
                hlds__error_msg_inst__V_47_47 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func(");
              }
              {
                hlds__error_msg_inst__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_47_47);
              }
              {
                hlds__error_msg_inst__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_44_44, 0) = ((MR_Box) (hlds__error_msg_inst__V_45_45));
              }
              {
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedRealArgModePieces_27));
              }
              {
                hlds__error_msg_inst__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 0) = ((MR_Box) (hlds__error_msg_inst__V_44_44));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 1) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
              }
              {
                hlds__error_msg_inst__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[14])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
              }
              {
                hlds__error_msg_inst__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_53_53, 1) = ((MR_Box) (hlds__error_msg_inst__V_56_56));
              }
              {
                hlds__error_msg_inst__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_60_60, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
              }
              {
                hlds__error_msg_inst__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 0) = ((MR_Box) (hlds__error_msg_inst__V_60_60));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
              }
              {
                hlds__error_msg_inst__V_52_52 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_111_111, hlds__error_msg_inst__V_53_53, hlds__error_msg_inst__V_59_59);
              }
              {
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_111_111, hlds__error_msg_inst__V_43_43, hlds__error_msg_inst__V_52_52);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_92_92;
            MR_String hlds__error_msg_inst__V_93_93;
            MR_String hlds__error_msg_inst__V_95_95;
            MR_Word hlds__error_msg_inst__V_97_97;
            MR_Word hlds__error_msg_inst__V_98_98;

            {
              hlds__error_msg_inst__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred");
            }
            {
              hlds__error_msg_inst__V_93_93 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_95_95);
            }
            {
              hlds__error_msg_inst__V_92_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_92_92, 0) = ((MR_Box) (hlds__error_msg_inst__V_93_93));
            }
            {
              hlds__error_msg_inst__V_98_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_98_98, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
            }
            {
              hlds__error_msg_inst__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_97_97, 0) = ((MR_Box) (hlds__error_msg_inst__V_98_98));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 0) = ((MR_Box) (hlds__error_msg_inst__V_92_92));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 1) = ((MR_Box) (hlds__error_msg_inst__V_97_97));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__JoinedArgModePieces_24;
            MR_Word hlds__error_msg_inst__V_77_77;
            MR_Word hlds__error_msg_inst__V_78_78;
            MR_String hlds__error_msg_inst__V_79_79;
            MR_String hlds__error_msg_inst__V_81_81;
            MR_Word hlds__error_msg_inst__V_83_83;
            MR_Word hlds__error_msg_inst__V_86_86;
            MR_Word hlds__error_msg_inst__V_87_87;

            {
              hlds__error_msg_inst__JoinedArgModePieces_24 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgModesPieces_19);
            }
            {
              hlds__error_msg_inst__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred(");
            }
            {
              hlds__error_msg_inst__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_81_81);
            }
            {
              hlds__error_msg_inst__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_78_78, 1) = ((MR_Box) (hlds__error_msg_inst__V_79_79));
            }
            {
              hlds__error_msg_inst__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 0) = ((MR_Box) (hlds__error_msg_inst__V_78_78));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedArgModePieces_24));
            }
            {
              hlds__error_msg_inst__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_87_87, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
            }
            {
              hlds__error_msg_inst__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_86_86, 0) = ((MR_Box) (hlds__error_msg_inst__V_87_87));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
            }
            {
              hlds__error_msg_inst__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_83_83, 1) = ((MR_Box) (hlds__error_msg_inst__V_86_86));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_77_77, hlds__error_msg_inst__V_83_83);
            }
          }
        break;
    }
    {
      hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__UniqPieces_17, hlds__error_msg_inst__ModesDetPieces_21);
    }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__InstName_8,
  MR_Word hlds__error_msg_inst__Suffix_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__error_msg_inst__succeeded;
        MR_Word hlds__error_msg_inst__Pieces_10;

        switch (MR_tag((MR_Word) hlds__error_msg_inst__InstName_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__error_msg_inst__TypeCtorInfo_79_79;
              MR_Word hlds__error_msg_inst__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__ArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_String hlds__error_msg_inst__SymNameStr_17;
              MR_Word hlds__error_msg_inst__Expansions1_18;
              MR_Word hlds__error_msg_inst__ExpandInsts_19;
              MR_Word hlds__error_msg_inst__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__V_75_75;
              MR_Word hlds__error_msg_inst__V_76_76;

              if (((MR_tag((MR_Word) hlds__error_msg_inst__SymName_11)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word hlds__error_msg_inst__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
                  MR_String hlds__error_msg_inst__BaseName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__CurModuleName_16;

                  {
                    hlds__hlds_module__module_info_get_name_2_p_0(hlds__error_msg_inst__ModuleInfo_13, &hlds__error_msg_inst__CurModuleName_16);
                  }
                  {
                    hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__ModuleName_14, hlds__error_msg_inst__CurModuleName_16);
                  }
                  if (hlds__error_msg_inst__succeeded)
                    hlds__error_msg_inst__SymNameStr_17 = hlds__error_msg_inst__BaseName_15;
                  else
                    {
                      hlds__error_msg_inst__SymNameStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__error_msg_inst__SymName_11);
                    }
                }
              else
                hlds__error_msg_inst__SymNameStr_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
              hlds__error_msg_inst__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
              {
                mercury__set__insert_3_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, ((MR_Box) (hlds__error_msg_inst__InstName_8)), hlds__error_msg_inst__Expansions0_7, &hlds__error_msg_inst__Expansions1_18);
              }
              hlds__error_msg_inst__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              hlds__error_msg_inst__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              hlds__error_msg_inst__ExpandInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              switch (hlds__error_msg_inst__ExpandInsts_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      hlds__error_msg_inst__succeeded = mercury__set__contains_2_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, hlds__error_msg_inst__Expansions0_7, ((MR_Box) (hlds__error_msg_inst__InstName_8)));
                    }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        MR_Word hlds__error_msg_inst__NamePieces_20;

                        {
                          hlds__error_msg_inst__NamePieces_20 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                        }
                        {
                          hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_20));
                        }
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__EqvInst_21;

                        {
                          check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_13, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_21);
                        }
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 5))))
                          {
                            MR_Word hlds__error_msg_inst__TypeInfo_158_158;
                            MR_Word hlds__error_msg_inst__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));
                            MR_Word hlds__error_msg_inst__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 2)));

                            {
                              hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__SymName_11, hlds__error_msg_inst__V_82_82);
                            }
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__TypeInfo_158_158 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[7];
                                {
                                  hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_158_158, ((MR_Box) (hlds__error_msg_inst__ArgInsts_12)), ((MR_Box) (hlds__error_msg_inst__V_83_83)));
                                }
                              }
                          }
                        else
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 4))))
                          {
                            MR_Word hlds__error_msg_inst__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));

                            {
                              hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_81_81);
                            }
                          }
                        else
                          hlds__error_msg_inst__succeeded = MR_FALSE;
                        if (hlds__error_msg_inst__succeeded)
                          {
                            MR_Word hlds__error_msg_inst__NamePieces_64;

                            {
                              hlds__error_msg_inst__NamePieces_64 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                            }
                            {
                              hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_64));
                            }
                          }
                        else
                          {
                            MR_Word hlds__error_msg_inst__ExpandedPieces_22;
                            MR_Word hlds__error_msg_inst__V_55_55;
                            MR_Word hlds__error_msg_inst__V_58_58;
                            MR_Word hlds__error_msg_inst__V_61_61;
                            MR_Word hlds__error_msg_inst__NamePieces_65;

                            {
                              hlds__error_msg_inst__NamePieces_65 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6]));
                            }
                            {
                              hlds__error_msg_inst__ExpandedPieces_22 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__EqvInst_21, hlds__error_msg_inst__Suffix_9);
                            }
                            {
                              hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_65));
                            }
                            {
                              hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__ExpandedPieces_22));
                            }
                            {
                              hlds__error_msg_inst__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[20])));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 1) = ((MR_Box) (hlds__error_msg_inst__V_61_61));
                            }
                            {
                              hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_55_55, hlds__error_msg_inst__V_58_58);
                            }
                          }
                      }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__error_msg_inst__ModuleInfo_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__EqvInst_146;
              MR_Word hlds__error_msg_inst__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__V_139_139;

              {
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_145, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_146);
              }
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__error_msg_inst__succeeded)
                {
                  hlds__error_msg_inst__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 1)));
                  {
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_139_139);
                  }
                }
              if (hlds__error_msg_inst__succeeded)
                {
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[11])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_146, hlds__error_msg_inst__Suffix_9);
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__error_msg_inst__ModuleInfo_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__EqvInst_107;
              MR_Word hlds__error_msg_inst__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__V_100_100;

              {
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_106, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_107);
              }
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__error_msg_inst__succeeded)
                {
                  hlds__error_msg_inst__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 1)));
                  {
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_100_100);
                  }
                }
              if (hlds__error_msg_inst__succeeded)
                {
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[8])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_107, hlds__error_msg_inst__Suffix_9);
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_94;
                  MR_Word hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_87_87;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_93, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_94);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_87_87);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[7])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_94, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_72;
                  MR_Word hlds__error_msg_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_84_84;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_71, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_72);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_84_84);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[6])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_72, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_133;
                  MR_Word hlds__error_msg_inst__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_126_126;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_132, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_133);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_126_126);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[10])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_133, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_120;
                  MR_Word hlds__error_msg_inst__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_113_113;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_119, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_120);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_113_113);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[9])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_120, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__error_msg_inst__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__EqvInst_69;
                  MR_Word hlds__error_msg_inst___Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));

                  {
                    hlds__error_msg_inst__EqvInst_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 1) = ((MR_Box) (hlds__error_msg_inst__Uniq_25));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_69, hlds__error_msg_inst__Suffix_9);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__error_msg_inst__SubInstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst___Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__error_msg_inst__InstName__tmp_copy_8 = hlds__error_msg_inst__SubInstName_24;

                    hlds__error_msg_inst__InstName_8 = hlds__error_msg_inst__InstName__tmp_copy_8;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return hlds__error_msg_inst__Pieces_10;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__InstName_8,
  MR_Word hlds__error_msg_inst__Suffix_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__error_msg_inst__succeeded;
        MR_Word hlds__error_msg_inst__Pieces_10;

        switch (MR_tag((MR_Word) hlds__error_msg_inst__InstName_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__error_msg_inst__TypeCtorInfo_79_79;
              MR_Word hlds__error_msg_inst__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__ArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_String hlds__error_msg_inst__SymNameStr_17;
              MR_Word hlds__error_msg_inst__Expansions1_18;
              MR_Word hlds__error_msg_inst__ExpandInsts_19;
              MR_Word hlds__error_msg_inst__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__V_75_75;
              MR_Word hlds__error_msg_inst__V_76_76;

              if (((MR_tag((MR_Word) hlds__error_msg_inst__SymName_11)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word hlds__error_msg_inst__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
                  MR_String hlds__error_msg_inst__BaseName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__CurModuleName_16;

                  {
                    hlds__hlds_module__module_info_get_name_2_p_0(hlds__error_msg_inst__ModuleInfo_13, &hlds__error_msg_inst__CurModuleName_16);
                  }
                  {
                    hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__ModuleName_14, hlds__error_msg_inst__CurModuleName_16);
                  }
                  if (hlds__error_msg_inst__succeeded)
                    hlds__error_msg_inst__SymNameStr_17 = hlds__error_msg_inst__BaseName_15;
                  else
                    {
                      hlds__error_msg_inst__SymNameStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__error_msg_inst__SymName_11);
                    }
                }
              else
                hlds__error_msg_inst__SymNameStr_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
              hlds__error_msg_inst__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
              {
                mercury__set__insert_3_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, ((MR_Box) (hlds__error_msg_inst__InstName_8)), hlds__error_msg_inst__Expansions0_7, &hlds__error_msg_inst__Expansions1_18);
              }
              hlds__error_msg_inst__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              hlds__error_msg_inst__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              hlds__error_msg_inst__ExpandInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              switch (hlds__error_msg_inst__ExpandInsts_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      hlds__error_msg_inst__succeeded = mercury__set__contains_2_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, hlds__error_msg_inst__Expansions0_7, ((MR_Box) (hlds__error_msg_inst__InstName_8)));
                    }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        MR_Word hlds__error_msg_inst__NamePieces_20;

                        {
                          hlds__error_msg_inst__NamePieces_20 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                        }
                        {
                          hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_20));
                        }
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__EqvInst_21;

                        {
                          check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_13, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_21);
                        }
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 5))))
                          {
                            MR_Word hlds__error_msg_inst__TypeInfo_158_158;
                            MR_Word hlds__error_msg_inst__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));
                            MR_Word hlds__error_msg_inst__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 2)));

                            {
                              hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__SymName_11, hlds__error_msg_inst__V_82_82);
                            }
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__TypeInfo_158_158 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[7];
                                {
                                  hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_158_158, ((MR_Box) (hlds__error_msg_inst__ArgInsts_12)), ((MR_Box) (hlds__error_msg_inst__V_83_83)));
                                }
                              }
                          }
                        else
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 4))))
                          {
                            MR_Word hlds__error_msg_inst__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));

                            {
                              hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_81_81);
                            }
                          }
                        else
                          hlds__error_msg_inst__succeeded = MR_FALSE;
                        if (hlds__error_msg_inst__succeeded)
                          {
                            MR_Word hlds__error_msg_inst__NamePieces_64;

                            {
                              hlds__error_msg_inst__NamePieces_64 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                            }
                            {
                              hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_64));
                            }
                          }
                        else
                          {
                            MR_Word hlds__error_msg_inst__ExpandedPieces_22;
                            MR_Word hlds__error_msg_inst__V_55_55;
                            MR_Word hlds__error_msg_inst__V_58_58;
                            MR_Word hlds__error_msg_inst__V_61_61;
                            MR_Word hlds__error_msg_inst__NamePieces_65;

                            {
                              hlds__error_msg_inst__NamePieces_65 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6]));
                            }
                            {
                              hlds__error_msg_inst__ExpandedPieces_22 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__EqvInst_21, hlds__error_msg_inst__Suffix_9);
                            }
                            {
                              hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_65));
                            }
                            {
                              hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__ExpandedPieces_22));
                            }
                            {
                              hlds__error_msg_inst__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[20])));
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 1) = ((MR_Box) (hlds__error_msg_inst__V_61_61));
                            }
                            {
                              hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_55_55, hlds__error_msg_inst__V_58_58);
                            }
                          }
                      }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__error_msg_inst__ModuleInfo_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__EqvInst_146;
              MR_Word hlds__error_msg_inst__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__V_139_139;

              {
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_145, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_146);
              }
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__error_msg_inst__succeeded)
                {
                  hlds__error_msg_inst__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 1)));
                  {
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_139_139);
                  }
                }
              if (hlds__error_msg_inst__succeeded)
                {
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[11])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_146, hlds__error_msg_inst__Suffix_9);
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__error_msg_inst__ModuleInfo_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__EqvInst_107;
              MR_Word hlds__error_msg_inst__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__V_100_100;

              {
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_106, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_107);
              }
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (hlds__error_msg_inst__succeeded)
                {
                  hlds__error_msg_inst__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 1)));
                  {
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_100_100);
                  }
                }
              if (hlds__error_msg_inst__succeeded)
                {
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[8])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_107, hlds__error_msg_inst__Suffix_9);
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_94;
                  MR_Word hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_87_87;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_93, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_94);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_87_87);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[7])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_94, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_72;
                  MR_Word hlds__error_msg_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_84_84;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_71, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_72);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_84_84);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[6])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_72, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_133;
                  MR_Word hlds__error_msg_inst__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_126_126;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_132, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_133);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_126_126);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[10])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_133, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__error_msg_inst__ModuleInfo_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__EqvInst_120;
                  MR_Word hlds__error_msg_inst__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst__V_113_113;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_119, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_120);
                  }
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (hlds__error_msg_inst__succeeded)
                    {
                      hlds__error_msg_inst__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 1)));
                      {
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_113_113);
                      }
                    }
                  if (hlds__error_msg_inst__succeeded)
                    {
                      {
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[9])));
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                      }
                    }
                  else
                    {
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_120, hlds__error_msg_inst__Suffix_9);
                    }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__error_msg_inst__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__EqvInst_69;
                  MR_Word hlds__error_msg_inst___Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));

                  {
                    hlds__error_msg_inst__EqvInst_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 1) = ((MR_Box) (hlds__error_msg_inst__Uniq_25));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_69, hlds__error_msg_inst__Suffix_9);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__error_msg_inst__SubInstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));
                  MR_Word hlds__error_msg_inst___Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__error_msg_inst__InstName__tmp_copy_8 = hlds__error_msg_inst__SubInstName_24;

                    hlds__error_msg_inst__InstName_8 = hlds__error_msg_inst__InstName__tmp_copy_8;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return hlds__error_msg_inst__Pieces_10;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;
    MR_Word hlds__error_msg_inst__HeadSuffix_13;
    MR_Word hlds__error_msg_inst__ConsId0_17;
    MR_Word hlds__error_msg_inst__ArgInsts_18;
    MR_Word hlds__error_msg_inst__ConsId_24;
    MR_String hlds__error_msg_inst__ConsIdStr_25;
    MR_Integer hlds__error_msg_inst__Arity_20;
    MR_Word hlds__error_msg_inst__TypeCtor_21;
    MR_String hlds__error_msg_inst__BaseName_23;
    MR_Word hlds__error_msg_inst__SymName_19;
    MR_Word hlds__error_msg_inst___ModuleName_22;
    MR_Box hlds__error_msg_inst__conv0_ConsIdStr_25;

    if ((hlds__error_msg_inst__TailBoundInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailBoundInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailBoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_16;

        {
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailBoundInst_14, hlds__error_msg_inst__TailTailBoundInsts_15, hlds__error_msg_inst__Suffix_11);
        }
        {
          hlds__error_msg_inst__HeadSuffix_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[5])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_16));
        }
      }
    hlds__error_msg_inst__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 0)));
    hlds__error_msg_inst__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 1)));
    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__ConsId0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__error_msg_inst__succeeded)
      {
        hlds__error_msg_inst__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 1)));
        hlds__error_msg_inst__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 2)));
        hlds__error_msg_inst__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 3)));
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__SymName_19)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst___ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 0)));
            hlds__error_msg_inst__BaseName_23 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 1)));
          }
      }
    if (hlds__error_msg_inst__succeeded)
      {
        MR_Word hlds__error_msg_inst__V_28_28;

        {
          hlds__error_msg_inst__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_28_28, 0) = ((MR_Box) (hlds__error_msg_inst__BaseName_23));
        }
        {
          hlds__error_msg_inst__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 2) = ((MR_Box) (hlds__error_msg_inst__Arity_20));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 3) = ((MR_Box) (hlds__error_msg_inst__TypeCtor_21));
        }
      }
    else
      hlds__error_msg_inst__ConsId_24 = hlds__error_msg_inst__ConsId0_17;
    {
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], (MR_Integer) 1, hlds__error_msg_inst__ConsId_24, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_ConsIdStr_25);
    }
    hlds__error_msg_inst__ConsIdStr_25 = ((MR_String) hlds__error_msg_inst__conv0_ConsIdStr_25);
    {
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__ConsIdStr_25, hlds__error_msg_inst__ArgInsts_18, hlds__error_msg_inst__HeadSuffix_13);
    }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;
    MR_Word hlds__error_msg_inst__HeadSuffix_13;
    MR_Word hlds__error_msg_inst__ConsId0_17;
    MR_Word hlds__error_msg_inst__ArgInsts_18;
    MR_Word hlds__error_msg_inst__ConsId_24;
    MR_String hlds__error_msg_inst__ConsIdStr_25;
    MR_Integer hlds__error_msg_inst__Arity_20;
    MR_Word hlds__error_msg_inst__TypeCtor_21;
    MR_String hlds__error_msg_inst__BaseName_23;
    MR_Word hlds__error_msg_inst__SymName_19;
    MR_Word hlds__error_msg_inst___ModuleName_22;
    MR_Box hlds__error_msg_inst__conv0_ConsIdStr_25;

    if ((hlds__error_msg_inst__TailBoundInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailBoundInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailBoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_16;
        MR_Word hlds__error_msg_inst__V_28_28;
        MR_Word hlds__error_msg_inst__V_31_31;

        {
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailBoundInst_14, hlds__error_msg_inst__TailTailBoundInsts_15, hlds__error_msg_inst__Suffix_11);
        }
        {
          hlds__error_msg_inst__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_31_31, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_16));
        }
        {
          hlds__error_msg_inst__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[5])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_28_28, 1) = ((MR_Box) (hlds__error_msg_inst__V_31_31));
        }
        {
          hlds__error_msg_inst__HeadSuffix_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
        }
      }
    hlds__error_msg_inst__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 0)));
    hlds__error_msg_inst__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 1)));
    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__ConsId0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__error_msg_inst__succeeded)
      {
        hlds__error_msg_inst__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 1)));
        hlds__error_msg_inst__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 2)));
        hlds__error_msg_inst__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 3)));
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__SymName_19)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst___ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 0)));
            hlds__error_msg_inst__BaseName_23 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 1)));
          }
      }
    if (hlds__error_msg_inst__succeeded)
      {
        MR_Word hlds__error_msg_inst__V_34_34;

        {
          hlds__error_msg_inst__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_34_34, 0) = ((MR_Box) (hlds__error_msg_inst__BaseName_23));
        }
        {
          hlds__error_msg_inst__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 1) = ((MR_Box) (hlds__error_msg_inst__V_34_34));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 2) = ((MR_Box) (hlds__error_msg_inst__Arity_20));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 3) = ((MR_Box) (hlds__error_msg_inst__TypeCtor_21));
        }
      }
    else
      hlds__error_msg_inst__ConsId_24 = hlds__error_msg_inst__ConsId0_17;
    {
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], (MR_Integer) 1, hlds__error_msg_inst__ConsId_24, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_ConsIdStr_25);
    }
    hlds__error_msg_inst__ConsIdStr_25 = ((MR_String) hlds__error_msg_inst__conv0_ConsIdStr_25);
    {
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__ConsIdStr_25, hlds__error_msg_inst__ArgInsts_18, hlds__error_msg_inst__HeadSuffix_13);
    }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadInst_9,
  MR_Word hlds__error_msg_inst__TailInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;
    MR_Word hlds__error_msg_inst__HeadSuffix_13;

    if ((hlds__error_msg_inst__TailInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_16;

        {
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailInst_14, hlds__error_msg_inst__TailTailInsts_15, hlds__error_msg_inst__Suffix_11);
        }
        {
          hlds__error_msg_inst__HeadSuffix_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[18]), hlds__error_msg_inst__TailPieces_16);
        }
      }
    {
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadInst_9, hlds__error_msg_inst__HeadSuffix_13);
    }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_pieces_5_f_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__Expansions0_8,
  MR_Word hlds__error_msg_inst__HeadInst_9,
  MR_Word hlds__error_msg_inst__TailInsts_10,
  MR_Word hlds__error_msg_inst__Suffix_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_12;
    MR_Word hlds__error_msg_inst__HeadSuffix_13;

    if ((hlds__error_msg_inst__TailInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_16;

        {
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailInst_14, hlds__error_msg_inst__TailTailInsts_15, hlds__error_msg_inst__Suffix_11);
        }
        {
          hlds__error_msg_inst__HeadSuffix_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6]), hlds__error_msg_inst__TailPieces_16);
        }
      }
    {
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadInst_9, hlds__error_msg_inst__HeadSuffix_13);
    }
    return hlds__error_msg_inst__Pieces_12;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__Inst_8,
  MR_Word hlds__error_msg_inst__Suffix_9)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_10;

    switch (MR_tag((MR_Word) hlds__error_msg_inst__Inst_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__error_msg_inst__Inst_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[4])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__error_msg_inst__Uniq_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)));
          MR_Word hlds__error_msg_inst__HOInstInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

          if ((hlds__error_msg_inst__HOInstInfo_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_51_51;
              MR_String hlds__error_msg_inst__Str_73;
              MR_Box hlds__error_msg_inst__conv0_Str_73;

              {
                parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_77, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_Str_73);
              }
              hlds__error_msg_inst__Str_73 = ((MR_String) hlds__error_msg_inst__conv0_Str_73);
              {
                hlds__error_msg_inst__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_51_51, 0) = ((MR_Box) (hlds__error_msg_inst__Str_73));
              }
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_51_51));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
          else
            {
              MR_Word hlds__error_msg_inst__PredInstInfo_71 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_78), (MR_Integer) 1);
              MR_Word hlds__error_msg_inst__HOPieces_72;

              {
                hlds__error_msg_inst__HOPieces_72 = hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "any_", hlds__error_msg_inst__Uniq_77, hlds__error_msg_inst__PredInstInfo_71);
              }
              {
                hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_72, hlds__error_msg_inst__Suffix_9);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__error_msg_inst__Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 3)));
              MR_String hlds__error_msg_inst__BoundName_15;
              MR_Word hlds__error_msg_inst__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv1_BoundName_15;

              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_12, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv1_BoundName_15);
              }
              hlds__error_msg_inst__BoundName_15 = ((MR_String) hlds__error_msg_inst__conv1_BoundName_15);
              if ((hlds__error_msg_inst__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word hlds__error_msg_inst__V_67_67;

                  {
                    hlds__error_msg_inst__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_67_67, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_15));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_67_67));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  MR_Word hlds__error_msg_inst__HeadBoundInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__TailBoundInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__BoundPieces_18;
                  MR_Word hlds__error_msg_inst__V_60_60;
                  MR_Word hlds__error_msg_inst__V_61_61;
                  MR_String hlds__error_msg_inst__V_62_62;
                  MR_Word hlds__error_msg_inst__V_64_64;

                  {
                    hlds__error_msg_inst__BoundPieces_18 = hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__HeadBoundInst_16, hlds__error_msg_inst__TailBoundInsts_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  {
                    hlds__error_msg_inst__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BoundName_15, (MR_String) "(");
                  }
                  {
                    hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__V_62_62));
                  }
                  {
                    hlds__error_msg_inst__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_60_60, 0) = ((MR_Box) (hlds__error_msg_inst__V_61_61));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_60_60, 1) = ((MR_Box) (hlds__error_msg_inst__BoundPieces_18));
                  }
                  {
                    hlds__error_msg_inst__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_64_64, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_60_60, hlds__error_msg_inst__V_64_64);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__error_msg_inst__HOInstInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__Uniq_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

              if ((hlds__error_msg_inst__HOInstInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String hlds__error_msg_inst__Str_22;
                  MR_Word hlds__error_msg_inst__V_55_55;
                  MR_Box hlds__error_msg_inst__conv3_Str_22;

                  {
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_70, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv3_Str_22);
                  }
                  hlds__error_msg_inst__Str_22 = ((MR_String) hlds__error_msg_inst__conv3_Str_22);
                  {
                    hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__Str_22));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  MR_Word hlds__error_msg_inst__PredInstInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_19), (MR_Integer) 1);
                  MR_Word hlds__error_msg_inst__HOPieces_21;

                  {
                    hlds__error_msg_inst__HOPieces_21 = hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "", hlds__error_msg_inst__Uniq_70, hlds__error_msg_inst__PredInstInfo_20);
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_21, hlds__error_msg_inst__Suffix_9);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__error_msg_inst__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__InstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_String hlds__error_msg_inst__Name_25;
              MR_Word hlds__error_msg_inst__V_49_49;
              MR_Word hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv4_Name_25;

              {
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_24, (MR_Integer) 0, hlds__error_msg_inst__Var_23, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv4_Name_25);
              }
              hlds__error_msg_inst__Name_25 = ((MR_String) hlds__error_msg_inst__conv4_Name_25);
              {
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (hlds__error_msg_inst__Name_25));
              }
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__error_msg_inst__Vars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__ConstrainedInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_String hlds__error_msg_inst__Names_28;
              MR_Word hlds__error_msg_inst__V_34_34;
              MR_Word hlds__error_msg_inst__V_38_38;
              MR_Word hlds__error_msg_inst__V_39_39;
              MR_Word hlds__error_msg_inst__V_40_40;
              MR_Word hlds__error_msg_inst__V_43_43;
              MR_Word hlds__error_msg_inst__V_44_44;
              MR_Word hlds__error_msg_inst__InstVarSet_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv2_Names_28;

              {
                hlds__error_msg_inst__V_34_34 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Vars_26);
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_82, (MR_Integer) 0, hlds__error_msg_inst__V_34_34, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv2_Names_28);
              }
              hlds__error_msg_inst__Names_28 = ((MR_String) hlds__error_msg_inst__conv2_Names_28);
              {
                hlds__error_msg_inst__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 1) = ((MR_Box) (hlds__error_msg_inst__Names_28));
              }
              {
                hlds__error_msg_inst__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
              {
                hlds__error_msg_inst__V_43_43 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__ConstrainedInst_27, hlds__error_msg_inst__V_44_44);
              }
              {
                hlds__error_msg_inst__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[2])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__V_43_43));
              }
              {
                hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__V_39_39));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 1) = ((MR_Box) (hlds__error_msg_inst__V_40_40));
              }
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[1])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__error_msg_inst__InstName_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_84, hlds__error_msg_inst__Suffix_9);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__error_msg_inst__ArgInsts_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__InstName_30;
              MR_Word hlds__error_msg_inst__Name_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__InstName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 0) = ((MR_Box) (hlds__error_msg_inst__Name_83));
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 1) = ((MR_Box) (hlds__error_msg_inst__ArgInsts_29));
              }
              {
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_30, hlds__error_msg_inst__Suffix_9);
              }
            }
            break;
        }
        break;
    }
    return hlds__error_msg_inst__Pieces_10;
  }
}

static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_pieces_4_f_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__Expansions0_7,
  MR_Word hlds__error_msg_inst__Inst_8,
  MR_Word hlds__error_msg_inst__Suffix_9)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_10;

    switch (MR_tag((MR_Word) hlds__error_msg_inst__Inst_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__error_msg_inst__Inst_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[4])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__error_msg_inst__Uniq_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)));
          MR_Word hlds__error_msg_inst__HOInstInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

          if ((hlds__error_msg_inst__HOInstInfo_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_51_51;
              MR_String hlds__error_msg_inst__Str_80;
              MR_Box hlds__error_msg_inst__conv0_Str_80;

              {
                parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_84, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_Str_80);
              }
              hlds__error_msg_inst__Str_80 = ((MR_String) hlds__error_msg_inst__conv0_Str_80);
              {
                hlds__error_msg_inst__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_51_51, 0) = ((MR_Box) (hlds__error_msg_inst__Str_80));
              }
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_51_51));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
          else
            {
              MR_Word hlds__error_msg_inst__PredInstInfo_78 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_85), (MR_Integer) 1);
              MR_Word hlds__error_msg_inst__HOPieces_79;

              {
                hlds__error_msg_inst__HOPieces_79 = hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "any_", hlds__error_msg_inst__Uniq_84, hlds__error_msg_inst__PredInstInfo_78);
              }
              {
                hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_79, hlds__error_msg_inst__Suffix_9);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__error_msg_inst__Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 3)));
              MR_String hlds__error_msg_inst__BoundName_15;
              MR_Word hlds__error_msg_inst__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv1_BoundName_15;

              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_12, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv1_BoundName_15);
              }
              hlds__error_msg_inst__BoundName_15 = ((MR_String) hlds__error_msg_inst__conv1_BoundName_15);
              if ((hlds__error_msg_inst__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word hlds__error_msg_inst__V_74_74;

                  {
                    hlds__error_msg_inst__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_74_74, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_15));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_74_74));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  MR_Word hlds__error_msg_inst__HeadBoundInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__TailBoundInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__BoundPieces_18;
                  MR_Word hlds__error_msg_inst__V_63_63;
                  MR_Word hlds__error_msg_inst__V_64_64;
                  MR_Word hlds__error_msg_inst__V_65_65;
                  MR_Word hlds__error_msg_inst__V_68_68;
                  MR_Word hlds__error_msg_inst__V_71_71;

                  {
                    hlds__error_msg_inst__BoundPieces_18 = hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__HeadBoundInst_16, hlds__error_msg_inst__TailBoundInsts_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[13]));
                  }
                  {
                    hlds__error_msg_inst__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_64_64, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_15));
                  }
                  {
                    hlds__error_msg_inst__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_68_68, 1) = ((MR_Box) (hlds__error_msg_inst__BoundPieces_18));
                  }
                  {
                    hlds__error_msg_inst__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 1) = ((MR_Box) (hlds__error_msg_inst__V_68_68));
                  }
                  {
                    hlds__error_msg_inst__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_63_63, 0) = ((MR_Box) (hlds__error_msg_inst__V_64_64));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_63_63, 1) = ((MR_Box) (hlds__error_msg_inst__V_65_65));
                  }
                  {
                    hlds__error_msg_inst__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_63_63, hlds__error_msg_inst__V_71_71);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__error_msg_inst__HOInstInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__Uniq_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

              if ((hlds__error_msg_inst__HOInstInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String hlds__error_msg_inst__Str_22;
                  MR_Word hlds__error_msg_inst__V_55_55;
                  MR_Box hlds__error_msg_inst__conv3_Str_22;

                  {
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_77, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv3_Str_22);
                  }
                  hlds__error_msg_inst__Str_22 = ((MR_String) hlds__error_msg_inst__conv3_Str_22);
                  {
                    hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__Str_22));
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
                  }
                }
              else
                {
                  MR_Word hlds__error_msg_inst__PredInstInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_19), (MR_Integer) 1);
                  MR_Word hlds__error_msg_inst__HOPieces_21;

                  {
                    hlds__error_msg_inst__HOPieces_21 = hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "", hlds__error_msg_inst__Uniq_77, hlds__error_msg_inst__PredInstInfo_20);
                  }
                  {
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_21, hlds__error_msg_inst__Suffix_9);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__error_msg_inst__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__InstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_String hlds__error_msg_inst__Name_25;
              MR_Word hlds__error_msg_inst__V_49_49;
              MR_Word hlds__error_msg_inst__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv4_Name_25;

              {
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_24, (MR_Integer) 0, hlds__error_msg_inst__Var_23, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv4_Name_25);
              }
              hlds__error_msg_inst__Name_25 = ((MR_String) hlds__error_msg_inst__conv4_Name_25);
              {
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (hlds__error_msg_inst__Name_25));
              }
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__error_msg_inst__Vars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__ConstrainedInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_String hlds__error_msg_inst__Names_28;
              MR_Word hlds__error_msg_inst__V_34_34;
              MR_Word hlds__error_msg_inst__V_38_38;
              MR_Word hlds__error_msg_inst__V_39_39;
              MR_Word hlds__error_msg_inst__V_40_40;
              MR_Word hlds__error_msg_inst__V_43_43;
              MR_Word hlds__error_msg_inst__V_44_44;
              MR_Word hlds__error_msg_inst__InstVarSet_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv2_Names_28;

              {
                hlds__error_msg_inst__V_34_34 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Vars_26);
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_89, (MR_Integer) 0, hlds__error_msg_inst__V_34_34, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv2_Names_28);
              }
              hlds__error_msg_inst__Names_28 = ((MR_String) hlds__error_msg_inst__conv2_Names_28);
              {
                hlds__error_msg_inst__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 1) = ((MR_Box) (hlds__error_msg_inst__Names_28));
              }
              {
                hlds__error_msg_inst__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
              }
              {
                hlds__error_msg_inst__V_43_43 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__ConstrainedInst_27, hlds__error_msg_inst__V_44_44);
              }
              {
                hlds__error_msg_inst__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[2])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__V_43_43));
              }
              {
                hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__V_39_39));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 1) = ((MR_Box) (hlds__error_msg_inst__V_40_40));
              }
              {
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[1])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__error_msg_inst__InstName_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_91, hlds__error_msg_inst__Suffix_9);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__error_msg_inst__ArgInsts_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__InstName_30;
              MR_Word hlds__error_msg_inst__Name_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__InstName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 0) = ((MR_Box) (hlds__error_msg_inst__Name_90));
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 1) = ((MR_Box) (hlds__error_msg_inst__ArgInsts_29));
              }
              {
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_30, hlds__error_msg_inst__Suffix_9);
              }
            }
            break;
        }
        break;
    }
    return hlds__error_msg_inst__Pieces_10;
  }
}

MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_8_f_0(
  MR_Word hlds__error_msg_inst__ModuleInfo_10,
  MR_Word hlds__error_msg_inst__InstVarSet_11,
  MR_Word hlds__error_msg_inst__ExpandNamedInsts_12,
  MR_Word hlds__error_msg_inst__ShortInstQF_13,
  MR_Word hlds__error_msg_inst__ShortInstSuffix_14,
  MR_Word hlds__error_msg_inst__LongInstPrefix_15,
  MR_Word hlds__error_msg_inst__LongInstSuffix_16,
  MR_Word hlds__error_msg_inst__Inst0_17)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_18;
    MR_Word hlds__error_msg_inst__Info_19;
    MR_Word hlds__error_msg_inst__Inst_20;
    MR_Word hlds__error_msg_inst__Expansions0_21;
    MR_Word hlds__error_msg_inst__InlinePieces_22;
    MR_String hlds__error_msg_inst__InlineStr_23;
    MR_Integer hlds__error_msg_inst__Len_24;

    {
      hlds__error_msg_inst__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 0) = ((MR_Box) (hlds__error_msg_inst__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 1) = ((MR_Box) (hlds__error_msg_inst__InstVarSet_11));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 2) = ((MR_Box) (hlds__error_msg_inst__ExpandNamedInsts_12));
    }
    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(hlds__error_msg_inst__Inst0_17, &hlds__error_msg_inst__Inst_20);
    }
    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__error_msg_inst__Expansions0_21);
    }
    {
      hlds__error_msg_inst__InlinePieces_22 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_19, hlds__error_msg_inst__Expansions0_21, hlds__error_msg_inst__Inst_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      hlds__error_msg_inst__InlineStr_23 = parse_tree__error_util__error_pieces_to_string_1_f_0(hlds__error_msg_inst__InlinePieces_22);
    }
    {
      mercury__string__length_2_p_0(hlds__error_msg_inst__InlineStr_23, &hlds__error_msg_inst__Len_24);
    }
    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__Len_24 < (MR_Integer) 40);
    if (hlds__error_msg_inst__succeeded)
      {
        MR_Word hlds__error_msg_inst__InlinePiece_25;

        switch (hlds__error_msg_inst__ShortInstQF_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              hlds__error_msg_inst__InlinePiece_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__InlinePiece_25, 0) = ((MR_Box) (hlds__error_msg_inst__InlineStr_23));
            }
            break;
          case (MR_Integer) 0:
            {
              hlds__error_msg_inst__InlinePiece_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InlinePiece_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InlinePiece_25, 1) = ((MR_Box) (hlds__error_msg_inst__InlineStr_23));
            }
            break;
        }
        {
          hlds__error_msg_inst__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_18, 0) = ((MR_Box) (hlds__error_msg_inst__InlinePiece_25));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_18, 1) = ((MR_Box) (hlds__error_msg_inst__ShortInstSuffix_14));
        }
      }
    else
      {
        MR_Word hlds__error_msg_inst__V_28_28;

        {
          hlds__error_msg_inst__V_28_28 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_19, hlds__error_msg_inst__Expansions0_21, hlds__error_msg_inst__Inst_20, hlds__error_msg_inst__LongInstSuffix_16);
        }
        {
          hlds__error_msg_inst__Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__LongInstPrefix_15, hlds__error_msg_inst__V_28_28);
        }
      }
    return hlds__error_msg_inst__Pieces_18;
  }
}

void mercury__hlds__error_msg_inst__init(void)
{
}

void mercury__hlds__error_msg_inst__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0);
}

void mercury__hlds__error_msg_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.error_msg_inst. */
