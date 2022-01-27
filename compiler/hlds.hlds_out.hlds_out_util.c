/*
** Automatically generated from `hlds_out_util.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module hlds.hlds_out.hlds_out_util. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_util__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_util.mih"


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
#include "hlds.hlds_out.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "term_io.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__790__1_3_p_0(
  MR_Char hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_103,
  MR_String hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_104,
  MR_String * hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_105);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
  MR_Word hlds__hlds_out__hlds_out_util__T_6);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8];


/* sealed */ struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s {
  const MR_String hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[12];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of clause head:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function result term of clause head:"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ")\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "list element"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "#"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of functor"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "type_info_cell_constructor"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[12] = {
  /* row 0 */   {     (MR_String) "unsafe_type_cast" },
  /* row 1 */   {     (MR_String) "unsafe_type_inst_cast" },
  /* row 2 */   {     (MR_String) "equiv_type_cast" },
  /* row 3 */   {     (MR_String) "exists_cast" },
  /* row 4 */   {     (MR_String) "unsafe_type_cast" },
  /* row 5 */   {     (MR_String) "unsafe_type_inst_cast" },
  /* row 6 */   {     (MR_String) "equiv_type_cast" },
  /* row 7 */   {     (MR_String) "exists_cast" },
  /* row 8 */   {     (MR_String) "imported in the implementation" },
  /* row 9 */   {     (MR_String) "imported in the interface" },
  /* row 10 */   {     (MR_String) "imported by an ancestor" },
  /* row 11 */   {     (MR_String) "imported from an ancestor\'s private interface" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0
};

static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_mercury_to_mercury"
};

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0 = {
  (MR_String) "hlds_out_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "hlds_out_info",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_first",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_last",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_maybe_qualify_cons_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "maybe_qualify_cons_id",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0
};

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

    {
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

    {
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

    {
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

    {
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__790__1_3_p_0(
  MR_Char hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_103,
  MR_String hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_104,
  MR_String * hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_105)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_103 == (MR_Char) 42);

    if (hlds__hlds_out__hlds_out_util__succeeded)
      {
        {
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_104, (MR_String) "star", hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_105);
        }
      }
    else
      {
        MR_String hlds__hlds_out__hlds_out_util__CharStr_20;

        {
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_103, &hlds__hlds_out__hlds_out_util__CharStr_20);
        }
        {
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_104, hlds__hlds_out__hlds_out_util__CharStr_20, hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_105);
        }
      }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_18 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_19 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_18 == hlds__hlds_out__hlds_out_util__CastY_19);
    if (hlds__hlds_out__hlds_out_util__succeeded)
      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__hlds_out__hlds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__hlds_out__hlds_out_util__V_14_14;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_14_14, hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9);
        }
        hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_14_14 == (MR_Integer) 0);
        hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
        if (hlds__hlds_out__hlds_out_util__succeeded)
          *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_14_14;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__V_5_5, hlds__hlds_out__hlds_out_util__V_10_10);
            }
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 0);
            hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
            if (hlds__hlds_out__hlds_out_util__succeeded)
              *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_15_15;
            else
              {
                MR_Word hlds__hlds_out__hlds_out_util__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                }
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_16_16 == (MR_Integer) 0);
                hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
                if (hlds__hlds_out__hlds_out_util__succeeded)
                  *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_16_16;
                else
                  {
                    MR_Word hlds__hlds_out__hlds_out_util__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_17_17, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_7_7)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_12_12)));
                    }
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_17_17 == (MR_Integer) 0);
                    hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
                    if (hlds__hlds_out__hlds_out_util__succeeded)
                      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_17_17;
                    else
                      {
                        parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__V_8_8, hlds__hlds_out__hlds_out_util__V_13_13);
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_13 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__1_1;
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_14 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;

    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_13 == hlds__hlds_out__hlds_out_util__CastY_14);
    if (hlds__hlds_out__hlds_out_util__succeeded)
      hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_15_15;
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_16_16;
        MR_String hlds__hlds_out__hlds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 4)));
        MR_String hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));

        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_3_3, hlds__hlds_out__hlds_out_util__V_8_8) == 0);
        if (hlds__hlds_out__hlds_out_util__succeeded)
          {
            hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9) == 0);
            if (hlds__hlds_out__hlds_out_util__succeeded)
              {
                hlds__hlds_out__hlds_out_util__TypeInfo_15_15 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
                {
                  hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_15_15, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_10_10)));
                }
                if (hlds__hlds_out__hlds_out_util__succeeded)
                  {
                    hlds__hlds_out__hlds_out_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
                    {
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                    }
                    if (hlds__hlds_out__hlds_out_util__succeeded)
                      {
                        hlds__hlds_out__hlds_out_util__succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__V_7_7, hlds__hlds_out__hlds_out_util__V_12_12);
                      }
                  }
              }
          }
      }
    return hlds__hlds_out__hlds_out_util__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
  MR_Word hlds__hlds_out__hlds_out_util__T_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__H_5);
        }
        if ((hlds__hlds_out__hlds_out_util__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer hlds__hlds_out__hlds_out_util__TH_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_util__TT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            /* direct tailcall eliminated */
            {
              MR_Integer hlds__hlds_out__hlds_out_util__H__tmp_copy_5 = hlds__hlds_out__hlds_out_util__TH_8;
              MR_Word hlds__hlds_out__hlds_out_util__T__tmp_copy_6 = hlds__hlds_out__hlds_out_util__TT_9;

              hlds__hlds_out__hlds_out_util__T_6 = hlds__hlds_out__hlds_out_util__T__tmp_copy_6;
              hlds__hlds_out__hlds_out_util__H_5 = hlds__hlds_out__hlds_out_util__H__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "opt_imported";
            break;
          case (MR_Integer) 1:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "abstract_imported";
            break;
          case (MR_Integer) 2:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "pseudo_imported";
            break;
          case (MR_Integer) 3:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exported";
            break;
          case (MR_Integer) 4:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "opt_exported";
            break;
          case (MR_Integer) 5:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "abstract_exported";
            break;
          case (MR_Integer) 6:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "pseudo_exported";
            break;
          case (MR_Integer) 7:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exported_to_submodules";
            break;
          case (MR_Integer) 8:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "local";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_util__Status_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
          MR_String hlds__hlds_out__hlds_out_util__V_9_9;
          MR_String hlds__hlds_out__hlds_out_util__V_10_10;

          {
            hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Status_7);
          }
          {
            hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) ")");
          }
          {
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", hlds__hlds_out__hlds_out_util__V_9_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[8 + hlds__hlds_out__hlds_out_util__V_12_12]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
        }
        break;
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_util__Proof_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Constraint_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Proof_11)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer hlds__hlds_out__hlds_out_util__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__Num_13);
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_util__Super_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "super class of ");
        }
        {
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Super_14);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

    switch (hlds__hlds_out__hlds_out_util__First_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__ConsId_8;
    MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9;
    MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
    MR_String hlds__hlds_out__hlds_out_util__ConsIdStr_11;
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14;
    MR_Word hlds__hlds_out__hlds_out_util__V_16_16;
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;
    MR_Word hlds__hlds_out__hlds_out_util__V_20_20;
    MR_Word hlds__hlds_out__hlds_out_util__V_21_21;
    MR_Word hlds__hlds_out__hlds_out_util__V_24_24;
    MR_Word hlds__hlds_out__hlds_out_util__V_25_25;

    switch (hlds__hlds_out__hlds_out_util__First_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
          }
        }
        break;
    }
    hlds__hlds_out__hlds_out_util__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 1)));
    {
      hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
    }
    {
      hlds__hlds_out__hlds_out_util__ConsIdStr_11 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_8);
    }
    {
      hlds__hlds_out__hlds_out_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
    }
    {
      hlds__hlds_out__hlds_out_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ConsIdStr_11));
    }
    {
      hlds__hlds_out__hlds_out_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_25_25));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
    }
    {
      hlds__hlds_out__hlds_out_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_24_24));
    }
    {
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_20_20));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_21_21));
    }
    {
      hlds__hlds_out__hlds_out_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_19_19));
    }
    {
      *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14, hlds__hlds_out__hlds_out_util__V_16_16);
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_util__SubContext_5;
        MR_Word hlds__hlds_out__hlds_out_util__SubContexts_6;
        MR_Word hlds__hlds_out__hlds_out_util__ConsId_10;
        MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_11;
        MR_Word hlds__hlds_out__hlds_out_util__Functor_12;
        MR_Integer hlds__hlds_out__hlds_out_util__V_15_15;
        MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13;

        if (hlds__hlds_out__hlds_out_util__succeeded)
          {
            hlds__hlds_out__hlds_out_util__SubContext_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_util__SubContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_util__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_util__ArgNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (hlds__hlds_out__hlds_out_util__succeeded)
              {
                hlds__hlds_out__hlds_out_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
                hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 2);
                if (hlds__hlds_out__hlds_out_util__succeeded)
                  {
                    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Functor_12)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word hlds__hlds_out__hlds_out_util__ModuleSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));
                        MR_String hlds__hlds_out__hlds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 1)));
                        MR_String hlds__hlds_out__hlds_out_util__V_17_17;
                        MR_String hlds__hlds_out__hlds_out_util__V_21_21;

                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_16_16, (MR_String) "[|]") == 0);
                        if (hlds__hlds_out__hlds_out_util__succeeded)
                          {
                            hlds__hlds_out__hlds_out_util__V_17_17 = (MR_String) "list";
                            {
                              hlds__hlds_out__hlds_out_util__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(hlds__hlds_out__hlds_out_util__ModuleSymName_14, &hlds__hlds_out__hlds_out_util__V_21_21);
                            }
                            if (hlds__hlds_out__hlds_out_util__succeeded)
                              hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_17_17, hlds__hlds_out__hlds_out_util__V_21_21) == 0);
                          }
                      }
                    else
                      {
                        MR_String hlds__hlds_out__hlds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));

                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_18_18, (MR_String) "[|]") == 0);
                      }
                    if (hlds__hlds_out__hlds_out_util__succeeded)
                      switch (hlds__hlds_out__hlds_out_util__ArgNum_11) {
                        default:
                          hlds__hlds_out__hlds_out_util__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          {
                            *hlds__hlds_out__hlds_out_util__ElementNum_8 = hlds__hlds_out__hlds_out_util__NumElementsBefore_7;
                            *hlds__hlds_out__hlds_out_util__AfterContexts_9 = hlds__hlds_out__hlds_out_util__SubContexts_6;
                            hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Integer hlds__hlds_out__hlds_out_util__V_19_19 = (hlds__hlds_out__hlds_out_util__NumElementsBefore_7 + (MR_Integer) 1);

                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_util__SubContexts_6;
                              MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7 = hlds__hlds_out__hlds_out_util__V_19_19;

                              hlds__hlds_out__hlds_out_util__NumElementsBefore_7 = hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7;
                              hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                          break;
                      }
                  }
              }
          }
        return hlds__hlds_out__hlds_out_util__succeeded;
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

        if ((hlds__hlds_out__hlds_out_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4;
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1;
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_util__SubContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_util__SubContexts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer hlds__hlds_out__hlds_out_util__ElementNum_16;
            MR_Word hlds__hlds_out__hlds_out_util__AfterContexts_17;

            {
              hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0, &hlds__hlds_out__hlds_out_util__ElementNum_16, &hlds__hlds_out__hlds_out_util__AfterContexts_17);
            }
            if (hlds__hlds_out__hlds_out_util__succeeded)
              {
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;
                MR_String hlds__hlds_out__hlds_out_util__ElementNumStr_37;
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38;
                MR_Word hlds__hlds_out__hlds_out_util__V_40_40;
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;
                MR_Word hlds__hlds_out__hlds_out_util__V_46_46;
                MR_Word hlds__hlds_out__hlds_out_util__V_47_47;

                switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                      }
                    }
                    break;
                }
                {
                  hlds__hlds_out__hlds_out_util__ElementNumStr_37 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ElementNum_16);
                }
                {
                  hlds__hlds_out__hlds_out_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ElementNumStr_37));
                }
                {
                  hlds__hlds_out__hlds_out_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_47_47));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
                }
                {
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_46_46));
                }
                {
                  hlds__hlds_out__hlds_out_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[15])));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_43_43));
                }
                {
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38, hlds__hlds_out__hlds_out_util__V_40_40);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__AfterContexts_17;
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;

                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
                }
                continue;
              }
            else
              {
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

                {
                  hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1, hlds__hlds_out__hlds_out_util__SubContext_13, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__SubContexts_14;
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__MainContext_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42;

              {
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42);
              }
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
              {
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[8]));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
          MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51;
          MR_Word hlds__hlds_out__hlds_out_util__V_54_54;
          MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
          MR_Word hlds__hlds_out__hlds_out_util__V_58_58;

          {
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51);
          }
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
          {
            hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
          }
          {
            hlds__hlds_out__hlds_out_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
          }
          {
            hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_58_58));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[6])));
          }
          {
            hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_57_57));
          }
          {
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51, hlds__hlds_out__hlds_out_util__V_54_54);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_util__Markers_12;
          MR_String hlds__hlds_out__hlds_out_util__ArgIdStr_13;
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31;
          MR_Word hlds__hlds_out__hlds_out_util__V_34_34;
          MR_Word hlds__hlds_out__hlds_out_util__V_35_35;
          MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 1)));

          switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                }
              }
              break;
          }
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
          {
            hlds__hlds_pred__init_markers_1_p_0(&hlds__hlds_out__hlds_out_util__Markers_12);
          }
          {
            hlds__hlds_out__hlds_out_util__ArgIdStr_13 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__CallId_11, hlds__hlds_out__hlds_out_util__ArgNum_65, hlds__hlds_out__hlds_out_util__Markers_12);
          }
          {
            hlds__hlds_out__hlds_out_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgIdStr_13));
          }
          {
            hlds__hlds_out__hlds_out_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_35_35));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
          }
          {
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31, hlds__hlds_out__hlds_out_util__V_34_34);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String hlds__hlds_out__hlds_out_util__Source_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
          MR_String hlds__hlds_out__hlds_out_util__Msg_15;
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20;
          MR_Word hlds__hlds_out__hlds_out_util__V_26_26;
          MR_Word hlds__hlds_out__hlds_out_util__V_27_27;
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;

          {
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20);
          }
          {
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Source_14, (MR_String) " unification:\n");
          }
          {
            hlds__hlds_out__hlds_out_util__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", hlds__hlds_out__hlds_out_util__V_71_71);
          }
          {
            hlds__hlds_out__hlds_out_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Msg_15));
          }
          {
            hlds__hlds_out__hlds_out_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_27_27));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
          }
          {
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20, hlds__hlds_out__hlds_out_util__V_26_26);
          }
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Indent_4 == (MR_Integer) 0);

        if (hlds__hlds_out__hlds_out_util__succeeded)
          {
          }
        else
          {
            MR_Integer hlds__hlds_out__hlds_out_util__V_10_10;

            {
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
            hlds__hlds_out__hlds_out_util__V_10_10 = (hlds__hlds_out__hlds_out_util__Indent_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4 = hlds__hlds_out__hlds_out_util__V_10_10;

              hlds__hlds_out__hlds_out_util__Indent_4 = hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__IntList_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

    if ((hlds__hlds_out__hlds_out_util__IntList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "[]");
        }
      }
    else
      {
        MR_Integer hlds__hlds_out__hlds_out_util__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_util__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
        {
          hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(hlds__hlds_out__hlds_out_util__H_6, hlds__hlds_out__hlds_out_util__T_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
      }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__typeclass_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Word hlds__hlds_out__hlds_out_util__InstModeStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__InstModeStatus_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__hlds_out__hlds_out_util__InstModeImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__InstModeStatus_3, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__InstModeImport_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__InstModeImport_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_abstract)";
                break;
              case (MR_Integer) 1:
                hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_opt)";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_util__InstModeImportLocn_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__InstModeImport_7, (MR_Integer) 0)));

              switch (hlds__hlds_out__hlds_out_util__InstModeImportLocn_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_plain(ancestors_priv_int_file))";
                  break;
                case (MR_Integer) 0:
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_plain(imp))";
                  break;
                case (MR_Integer) 1:
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_plain(int))";
                  break;
              }
            }
            break;
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_util__InstModeExport_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__InstModeStatus_3, (MR_Integer) 0)));

        switch (hlds__hlds_out__hlds_out_util__InstModeExport_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "this_module(export_anywhere)";
            break;
          case (MR_Integer) 0:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "this_module(export_nowhere)";
            break;
          case (MR_Integer) 1:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "this_module(export_only_submodules)";
            break;
        }
      }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Word hlds__hlds_out__hlds_out_util__InstModeStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__InstModeStatus_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__hlds_out__hlds_out_util__InstModeImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__InstModeStatus_3, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__InstModeImport_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__InstModeImport_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_abstract)";
                break;
              case (MR_Integer) 1:
                hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_opt)";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_util__InstModeImportLocn_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__InstModeImport_7, (MR_Integer) 0)));

              switch (hlds__hlds_out__hlds_out_util__InstModeImportLocn_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_plain(ancestors_priv_int_file))";
                  break;
                case (MR_Integer) 0:
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_plain(imp))";
                  break;
                case (MR_Integer) 1:
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "other_module(import_plain(int))";
                  break;
              }
            }
            break;
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_util__InstModeExport_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__InstModeStatus_3, (MR_Integer) 0)));

        switch (hlds__hlds_out__hlds_out_util__InstModeExport_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "this_module(export_anywhere)";
            break;
          case (MR_Integer) 0:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "this_module(export_nowhere)";
            break;
          case (MR_Integer) 1:
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "this_module(export_only_submodules)";
            break;
        }
      }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
    MR_Word hlds__hlds_out__hlds_out_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_util__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

    {
      hlds__hlds_out__hlds_out_util__V_11_11 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Var_9);
    }
    {
      hlds__hlds_out__hlds_out_util__V_14_14 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, hlds__hlds_out__hlds_out_util__InstVarSet_7, hlds__hlds_out__hlds_out_util__Mode_10);
    }
    {
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_14_14);
    }
    {
      hlds__hlds_out__hlds_out_util__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_11_11, hlds__hlds_out__hlds_out_util__V_12_12);
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

    {
      hlds__hlds_out__hlds_out_util__V_15_15 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__InstVarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__HeadVar__4_4);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_15_15);
    }
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5;

    {
      hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5));
    return hlds__hlds_out__hlds_out_util__wrapper_arg_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
  MR_Word hlds__hlds_out__hlds_out_util__Vars_10,
  MR_Word hlds__hlds_out__hlds_out_util__Modes_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
    MR_Word hlds__hlds_out__hlds_out_util__VarModes_13;
    MR_Word hlds__hlds_out__hlds_out_util__Strs_14;
    MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_util__Vars_10, hlds__hlds_out__hlds_out_util__Modes_11, &hlds__hlds_out__hlds_out_util__VarModes_13);
    }
    {
      hlds__hlds_out__hlds_out_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__InstVarSet_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_9));
    }
    {
      hlds__hlds_out__hlds_out_util__Strs_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__VarModes_13);
    }
    {
      hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__Strs_14);
    }
    return hlds__hlds_out__hlds_out_util__Str_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_9,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
  MR_Word hlds__hlds_out__hlds_out_util__Vars_11,
  MR_Word hlds__hlds_out__hlds_out_util__Modes_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

    {
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__InstVarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__Vars_11, hlds__hlds_out__hlds_out_util__Modes_12);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;

    {
      hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_util__ProofMap_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__ProofsList_12;
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_util__ProofMap_10, &hlds__hlds_out__hlds_out_util__ProofsList_12);
    }
    {
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TVarSet_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Indent_9));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[0], hlds__hlds_out__hlds_out_util__ProofsList_12, (MR_String) "\n", hlds__hlds_out__hlds_out_util__V_19_19);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
    MR_String hlds__hlds_out__hlds_out_util__conv0_LambdaHeadVar__3_105;

    {
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__790__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_LambdaHeadVar__3_105);
    }
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_LambdaHeadVar__3_105));
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_9)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__String_10;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_cell_constructor>";
        break;
      case (MR_Integer) 1:
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_cell_constructor>";
        break;
      case (MR_Integer) 2:
        {
          MR_String hlds__hlds_out__hlds_out_util__V_67_67;
          MR_String hlds__hlds_out__hlds_out_util__V_68_68;
          MR_String hlds__hlds_out__hlds_out_util__V_69_69;
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
          MR_String hlds__hlds_out__hlds_out_util__V_72_72;
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)));
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_131, (MR_Integer) 0)));
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_131, (MR_Integer) 1)));

          {
            hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_132);
          }
          {
            hlds__hlds_out__hlds_out_util__V_72_72 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_133);
          }
          {
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_72_72, (MR_String) ">");
          }
          {
            hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_71_71);
          }
          {
            hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_68_68, hlds__hlds_out__hlds_out_util__V_69_69);
          }
          {
            hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_67_67);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String hlds__hlds_out__hlds_out_util__V_59_59;
              MR_String hlds__hlds_out__hlds_out_util__V_60_60;
              MR_String hlds__hlds_out__hlds_out_util__V_61_61;
              MR_String hlds__hlds_out__hlds_out_util__V_63_63;
              MR_String hlds__hlds_out__hlds_out_util__V_64_64;
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_134, (MR_Integer) 0)));
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_134, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_135);
              }
              {
                hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_136);
              }
              {
                hlds__hlds_out__hlds_out_util__V_63_63 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_64_64, (MR_String) ">");
              }
              {
                hlds__hlds_out__hlds_out_util__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_63_63);
              }
              {
                hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_60_60, hlds__hlds_out__hlds_out_util__V_61_61);
              }
              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_59_59);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String hlds__hlds_out__hlds_out_util__V_51_51;
              MR_String hlds__hlds_out__hlds_out_util__V_52_52;
              MR_String hlds__hlds_out__hlds_out_util__V_53_53;
              MR_String hlds__hlds_out__hlds_out_util__V_55_55;
              MR_String hlds__hlds_out__hlds_out_util__V_56_56;
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_137, (MR_Integer) 0)));
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_137, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_138);
              }
              {
                hlds__hlds_out__hlds_out_util__V_56_56 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_139);
              }
              {
                hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, (MR_String) ">");
              }
              {
                hlds__hlds_out__hlds_out_util__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_55_55);
              }
              {
                hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_52_52, hlds__hlds_out__hlds_out_util__V_53_53);
              }
              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_51_51);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_util__SymName0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_util__SymName_14;
              MR_String hlds__hlds_out__hlds_out_util__SymNameString0_15;
              MR_String hlds__hlds_out__hlds_out_util__SymNameString1_21;
              MR_String hlds__hlds_out__hlds_out_util__SymNameString_22;
              MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

              switch (hlds__hlds_out__hlds_out_util__Qual_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_String hlds__hlds_out__hlds_out_util__V_101_101;

                    {
                      hlds__hlds_out__hlds_out_util__V_101_101 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_out__hlds_out_util__SymName0_11);
                    }
                    {
                      hlds__hlds_out__hlds_out_util__SymName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_14, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_101_101));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__hlds_out__hlds_out_util__SymName_14 = hlds__hlds_out__hlds_out_util__SymName0_11;
                  break;
              }
              {
                hlds__hlds_out__hlds_out_util__SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_14);
              }
              {
                hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_15, (MR_Char) 42);
              }
              if (hlds__hlds_out__hlds_out_util__succeeded)
                {
                  MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21;

                  {
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[2], hlds__hlds_out__hlds_out_util__SymNameString0_15, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                  }
                  hlds__hlds_out__hlds_out_util__SymNameString1_21 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                }
              else
                hlds__hlds_out__hlds_out_util__SymNameString1_21 = hlds__hlds_out__hlds_out_util__SymNameString0_15;
              {
                hlds__hlds_out__hlds_out_util__SymNameString_22 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_21);
              }
              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String hlds__hlds_out__hlds_out_util__V_115_115;
                  MR_String hlds__hlds_out__hlds_out_util__V_117_117;

                  {
                    hlds__hlds_out__hlds_out_util__V_117_117 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_117_117);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_115_115);
                  }
                }
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

                  if ((hlds__hlds_out__hlds_out_util__ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_String hlds__hlds_out__hlds_out_util__V_112_112;
                      MR_String hlds__hlds_out__hlds_out_util__V_114_114;

                      {
                        hlds__hlds_out__hlds_out_util__V_114_114 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_114_114);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_112_112);
                      }
                    }
                  else
                    {
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_26;
                      MR_String hlds__hlds_out__hlds_out_util__V_108_108;
                      MR_String hlds__hlds_out__hlds_out_util__V_110_110;

                      {
                        hlds__hlds_out__hlds_out_util__ArgStr_26 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_23);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__V_110_110 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_26, (MR_String) ")");
                      }
                      {
                        hlds__hlds_out__hlds_out_util__V_108_108 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_110_110);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_108_108);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String hlds__hlds_out__hlds_out_util__V_100_100;

                  {
                    hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_127);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_100_100);
                  }
                }
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

                  if ((hlds__hlds_out__hlds_out_util__ArgVars_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_String hlds__hlds_out__hlds_out_util__V_98_98;

                      {
                        hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_127);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_98_98);
                      }
                    }
                  else
                    {
                      MR_String hlds__hlds_out__hlds_out_util__V_95_95;
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_121;

                      {
                        hlds__hlds_out__hlds_out_util__ArgStr_121 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_123);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_121, (MR_String) "}");
                      }
                      {
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", hlds__hlds_out__hlds_out_util__V_95_95);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_35, (MR_Integer) 0)));
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_35, (MR_Integer) 1)));
              MR_String hlds__hlds_out__hlds_out_util__V_86_86;
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
              MR_String hlds__hlds_out__hlds_out_util__V_88_88;
              MR_String hlds__hlds_out__hlds_out_util__V_90_90;
              MR_String hlds__hlds_out__hlds_out_util__V_91_91;

              {
                hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_37);
              }
              {
                hlds__hlds_out__hlds_out_util__V_91_91 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_38);
              }
              {
                hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_91_91, (MR_String) ">");
              }
              {
                hlds__hlds_out__hlds_out_util__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_90_90);
              }
              {
                hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_87_87, hlds__hlds_out__hlds_out_util__V_88_88);
              }
              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_86_86);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer hlds__hlds_out__hlds_out_util__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

              {
                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_29, &hlds__hlds_out__hlds_out_util__String_10);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned hlds__hlds_out__hlds_out_util__UInt_30 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__uint_to_string_1_f_0(hlds__hlds_out__hlds_out_util__UInt_30);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float hlds__hlds_out__hlds_out_util__Float_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_31);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Char hlds__hlds_out__hlds_out_util__CharConst_32 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_32);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String hlds__hlds_out__hlds_out_util__StringConst_33 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_33);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String hlds__hlds_out__hlds_out_util__Name_34 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_34);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word hlds__hlds_out__hlds_out_util__Module_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
              MR_String hlds__hlds_out__hlds_out_util__Ctor_40 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
              MR_String hlds__hlds_out__hlds_out_util__V_75_75;
              MR_String hlds__hlds_out__hlds_out_util__V_76_76;
              MR_String hlds__hlds_out__hlds_out_util__V_77_77;
              MR_String hlds__hlds_out__hlds_out_util__V_79_79;
              MR_String hlds__hlds_out__hlds_out_util__V_80_80;
              MR_String hlds__hlds_out__hlds_out_util__V_82_82;
              MR_String hlds__hlds_out__hlds_out_util__V_83_83;
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

              {
                hlds__hlds_out__hlds_out_util__V_76_76 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_39);
              }
              {
                hlds__hlds_out__hlds_out_util__V_83_83 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_130);
              }
              {
                hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_83_83, (MR_String) ">");
              }
              {
                hlds__hlds_out__hlds_out_util__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_82_82);
              }
              {
                hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_40, hlds__hlds_out__hlds_out_util__V_80_80);
              }
              {
                hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_79_79);
              }
              {
                hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_76_76, hlds__hlds_out__hlds_out_util__V_77_77);
              }
              {
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_75_75);
              }
            }
            break;
          case (MR_Integer) 12:
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<base_typeclass_info>";
            break;
          case (MR_Integer) 13:
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_const>";
            break;
          case (MR_Integer) 14:
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_const>";
            break;
          case (MR_Integer) 15:
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<ground_term_const>";
            break;
        }
        break;
    }
    return hlds__hlds_out__hlds_out_util__String_10;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_vars_or_arity_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_9,
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

    {
      hlds__hlds_out__hlds_out_util__V_14_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(hlds__hlds_out__hlds_out_util__Qual_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__ConsId_9, hlds__hlds_out__hlds_out_util__MaybeArgVars_10);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_14_14);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_10,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;
        MR_String hlds__hlds_out__hlds_out_util__Str_12;

        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[3], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[2], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_43;
              MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_44;
              MR_Word hlds__hlds_out__hlds_out_util__V_63_63;
              MR_String hlds__hlds_out__hlds_out_util__V_65_65;
              MR_String hlds__hlds_out__hlds_out_util__V_66_66;
              MR_String hlds__hlds_out__hlds_out_util__V_67_67;
              MR_String hlds__hlds_out__hlds_out_util__V_69_69;
              MR_String hlds__hlds_out__hlds_out_util__V_70_70;
              MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_146 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_util__PredId_147;

              {
                hlds__hlds_out__hlds_out_util__V_63_63 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_146);
              }
              hlds__hlds_out__hlds_out_util__PredId_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_63_63, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_util__ProcId_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_63_63, (MR_Integer) 1)));
              {
                hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_43, &hlds__hlds_out__hlds_out_util__ProcIdInt_44);
              }
              {
                hlds__hlds_out__hlds_out_util__V_66_66 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_147);
              }
              {
                hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_44);
              }
              {
                hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_70_70, (MR_String) ")");
              }
              {
                hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_69_69);
              }
              {
                hlds__hlds_out__hlds_out_util__V_65_65 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_66_66, hlds__hlds_out__hlds_out_util__V_67_67);
              }
              {
                hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", hlds__hlds_out__hlds_out_util__V_65_65);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__hlds_out__hlds_out_util__V_54_54;
                  MR_String hlds__hlds_out__hlds_out_util__V_56_56;
                  MR_String hlds__hlds_out__hlds_out_util__V_57_57;
                  MR_String hlds__hlds_out__hlds_out_util__V_58_58;
                  MR_String hlds__hlds_out__hlds_out_util__V_60_60;
                  MR_String hlds__hlds_out__hlds_out_util__V_61_61;
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_149;
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_150;
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_151;

                  {
                    hlds__hlds_out__hlds_out_util__V_54_54 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_148);
                  }
                  hlds__hlds_out__hlds_out_util__PredId_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, (MR_Integer) 0)));
                  hlds__hlds_out__hlds_out_util__ProcId_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, (MR_Integer) 1)));
                  {
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_150, &hlds__hlds_out__hlds_out_util__ProcIdInt_151);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_57_57 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_149);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_61_61 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_151);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_61_61, (MR_String) "))");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_60_60);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_56_56 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_57_57, hlds__hlds_out__hlds_out_util__V_58_58);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", hlds__hlds_out__hlds_out_util__V_56_56);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_out__hlds_out_util__V_45_45;
                  MR_String hlds__hlds_out__hlds_out_util__V_47_47;
                  MR_String hlds__hlds_out__hlds_out_util__V_48_48;
                  MR_String hlds__hlds_out__hlds_out_util__V_49_49;
                  MR_String hlds__hlds_out__hlds_out_util__V_51_51;
                  MR_String hlds__hlds_out__hlds_out_util__V_52_52;
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_153;
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_154;
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_155;

                  {
                    hlds__hlds_out__hlds_out_util__V_45_45 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_152);
                  }
                  hlds__hlds_out__hlds_out_util__PredId_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_45_45, (MR_Integer) 0)));
                  hlds__hlds_out__hlds_out_util__ProcId_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_45_45, (MR_Integer) 1)));
                  {
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_154, &hlds__hlds_out__hlds_out_util__ProcIdInt_155);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_48_48 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_153);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_155);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_52_52, (MR_String) "))");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_51_51);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_48_48, hlds__hlds_out__hlds_out_util__V_49_49);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", hlds__hlds_out__hlds_out_util__V_47_47);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_out__hlds_out_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
                  MR_Word hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

                  if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__SymName_13)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word hlds__hlds_out__hlds_out_util__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));
                      MR_String hlds__hlds_out__hlds_out_util__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 1)));
                      MR_Word hlds__hlds_out__hlds_out_util__V_138_138;

                      {
                        hlds__hlds_out__hlds_out_util__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_138_138, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_17));
                      }
                      {
                        hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__Module_16, hlds__hlds_out__hlds_out_util__V_138_138, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
                    }
                  else
                    {
                      MR_Word hlds__hlds_out__hlds_out_util__V_137_137;
                      MR_String hlds__hlds_out__hlds_out_util__Name_139 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));

                      {
                        hlds__hlds_out__hlds_out_util__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_139));
                      }
                      {
                        hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__V_137_137, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[1], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_26;
                  MR_Word hlds__hlds_out__hlds_out_util__PredInfo_28;
                  MR_Word hlds__hlds_out__hlds_out_util__PredModule_29;
                  MR_String hlds__hlds_out__hlds_out_util__PredName_30;
                  MR_Word hlds__hlds_out__hlds_out_util__PredSymName_31;
                  MR_Word hlds__hlds_out__hlds_out_util__PredConsId_32;
                  MR_Word hlds__hlds_out__hlds_out_util__V_122_122;
                  MR_Integer hlds__hlds_out__hlds_out_util__V_123_123;
                  MR_Word hlds__hlds_out__hlds_out_util__V_124_124;
                  MR_Integer hlds__hlds_out__hlds_out_util__V_27_27;

                  {
                    hlds__hlds_out__hlds_out_util__V_122_122 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_24);
                  }
                  hlds__hlds_out__hlds_out_util__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_122_122, (MR_Integer) 0)));
                  hlds__hlds_out__hlds_out_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_122_122, (MR_Integer) 1)));
                  {
                    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_26, &hlds__hlds_out__hlds_out_util__PredInfo_28);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__PredModule_29 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_28);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_28);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__PredSymName_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredModule_29));
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredName_30));
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_123_123 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_124_124 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
                  {
                    hlds__hlds_out__hlds_out_util__PredConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredSymName_31));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_32, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_123_123));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_124_124));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10 = hlds__hlds_out__hlds_out_util__PredConsId_32;

                    hlds__hlds_out__hlds_out_util__ConsId_10 = hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Integer hlds__hlds_out__hlds_out_util__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__V_132_132;

                  {
                    hlds__hlds_out__hlds_out_util__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_132_132, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Int_19));
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_132_132, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Unsigned hlds__hlds_out__hlds_out_util__UInt_20 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));

                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__uint_to_string_1_f_0(hlds__hlds_out__hlds_out_util__UInt_20);
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Float hlds__hlds_out__hlds_out_util__Float_21 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__V_131_131;

                  {
                    hlds__hlds_out__hlds_out_util__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_131_131, 1) = MR_box_float(hlds__hlds_out__hlds_out_util__Float_21);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_131_131, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Char hlds__hlds_out__hlds_out_util__Char_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_String hlds__hlds_out__hlds_out_util__V_128_128;
                  MR_String hlds__hlds_out__hlds_out_util__V_129_129;

                  {
                    hlds__hlds_out__hlds_out_util__V_129_129 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__Char_22);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_128_128 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_129_129, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_128_128);
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String hlds__hlds_out__hlds_out_util__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__V_126_126;

                  {
                    hlds__hlds_out__hlds_out_util__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_126_126, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__String_23));
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_126_126, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String hlds__hlds_out__hlds_out_util__Name_140 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));

                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_140);
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
                  MR_String hlds__hlds_out__hlds_out_util__V_112_112;
                  MR_String hlds__hlds_out__hlds_out_util__V_113_113;
                  MR_String hlds__hlds_out__hlds_out_util__V_114_114;
                  MR_String hlds__hlds_out__hlds_out_util__V_116_116;
                  MR_String hlds__hlds_out__hlds_out_util__V_117_117;
                  MR_String hlds__hlds_out__hlds_out_util__V_119_119;
                  MR_String hlds__hlds_out__hlds_out_util__V_120_120;
                  MR_Word hlds__hlds_out__hlds_out_util__Module_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_String hlds__hlds_out__hlds_out_util__Name_142 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));

                  {
                    hlds__hlds_out__hlds_out_util__V_113_113 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_141);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_120_120 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_33);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_119_119 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_120_120, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_117_117 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_119_119);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Name_142, hlds__hlds_out__hlds_out_util__V_117_117);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", hlds__hlds_out__hlds_out_util__V_116_116);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_112_112 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_113_113, hlds__hlds_out__hlds_out_util__V_114_114);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", hlds__hlds_out__hlds_out_util__V_112_112);
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word hlds__hlds_out__hlds_out_util__ClassId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
                  MR_String hlds__hlds_out__hlds_out_util__Instance_36 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 4)));
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;
                  MR_String hlds__hlds_out__hlds_out_util__V_97_97;
                  MR_String hlds__hlds_out__hlds_out_util__V_99_99;
                  MR_String hlds__hlds_out__hlds_out_util__V_101_101;
                  MR_String hlds__hlds_out__hlds_out_util__V_102_102;
                  MR_String hlds__hlds_out__hlds_out_util__V_103_103;
                  MR_String hlds__hlds_out__hlds_out_util__V_105_105;
                  MR_String hlds__hlds_out__hlds_out_util__V_106_106;
                  MR_String hlds__hlds_out__hlds_out_util__V_107_107;
                  MR_String hlds__hlds_out__hlds_out_util__V_109_109;
                  MR_Word hlds__hlds_out__hlds_out_util__Module_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__Name_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_34, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_34, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_out__hlds_out_util__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

                  {
                    hlds__hlds_out__hlds_out_util__V_96_96 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_143);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_102_102 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Name_144);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_106_106 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_145);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_109_109 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Instance_36, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) "), ", hlds__hlds_out__hlds_out_util__V_109_109);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_106_106, hlds__hlds_out__hlds_out_util__V_107_107);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_103_103 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_105_105);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_101_101 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_102_102, hlds__hlds_out__hlds_out_util__V_103_103);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_99_99 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", hlds__hlds_out__hlds_out_util__V_101_101);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_99_99);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_96_96, hlds__hlds_out__hlds_out_util__V_97_97);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", hlds__hlds_out__hlds_out_util__V_95_95);
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer hlds__hlds_out__hlds_out_util__TIConstNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_String hlds__hlds_out__hlds_out_util__V_85_85;
                  MR_String hlds__hlds_out__hlds_out_util__V_86_86;

                  {
                    hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TIConstNum_38);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_86_86, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", hlds__hlds_out__hlds_out_util__V_85_85);
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Integer hlds__hlds_out__hlds_out_util__TCIConstNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_String hlds__hlds_out__hlds_out_util__V_81_81;
                  MR_String hlds__hlds_out__hlds_out_util__V_82_82;

                  {
                    hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TCIConstNum_39);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_82_82, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", hlds__hlds_out__hlds_out_util__V_81_81);
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Integer hlds__hlds_out__hlds_out_util__ConstNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util__SubConsId_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
                  MR_String hlds__hlds_out__hlds_out_util__SubStr_42;
                  MR_String hlds__hlds_out__hlds_out_util__V_74_74;
                  MR_String hlds__hlds_out__hlds_out_util__V_75_75;
                  MR_String hlds__hlds_out__hlds_out_util__V_76_76;
                  MR_String hlds__hlds_out__hlds_out_util__V_78_78;

                  {
                    hlds__hlds_out__hlds_out_util__SubStr_42 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__SubConsId_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConstNum_40);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SubStr_42, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_78_78);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_75_75, hlds__hlds_out__hlds_out_util__V_76_76);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", hlds__hlds_out__hlds_out_util__V_74_74);
                  }
                }
                break;
            }
            break;
        }
        return hlds__hlds_out__hlds_out_util__Str_12;
      }
      break;
    }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_8,
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_11,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

    {
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__ConsId_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
    MR_Word hlds__hlds_out__hlds_out_util__Context_14;
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;
    MR_String hlds__hlds_out__hlds_out_util__TermStr_16;
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;

    {
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
    {
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_14);
    }
    {
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_11));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_14));
    }
    {
      hlds__hlds_out__hlds_out_util__TermStr_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_15);
    }
    {
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__TermStr_16);
    }
    {
      hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_18_18);
    }
    return hlds__hlds_out__hlds_out_util__Str_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

    {
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgTerms_12);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
    MR_String hlds__hlds_out__hlds_out_util__FunctorStr_14;
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

    {
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
    {
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
    {
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
    }
    {
      hlds__hlds_out__hlds_out_util__FunctorStr_14 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_26);
    }
    {
      hlds__hlds_out__hlds_out_util__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__FunctorStr_14);
    }
    {
      hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_16_16);
    }
    return hlds__hlds_out__hlds_out_util__Str_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

    {
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_9,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16;
    MR_Word hlds__hlds_out__hlds_out_util__Context_13;
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_14;
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;

    {
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_13);
    }
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_14);
    }
    {
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_13));
    }
    {
      hlds__hlds_out__hlds_out_util__Str_12 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__NextToGraphicToken_9, hlds__hlds_out__hlds_out_util__Term_15);
    }
    return hlds__hlds_out__hlds_out_util__Str_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_10,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

    {
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_12, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
    {
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_11));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
    }
    {
      hlds__hlds_out__hlds_out_util__V_16_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__NextToGraphicToken_10, hlds__hlds_out__hlds_out_util__Term_26);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_7,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20;
    MR_Word hlds__hlds_out__hlds_out_util__Context_17;
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_18;
    MR_Word hlds__hlds_out__hlds_out_util__Term_19;

    {
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_17);
    }
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_18);
    }
    {
      hlds__hlds_out__hlds_out_util__Term_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_17));
    }
    {
      hlds__hlds_out__hlds_out_util__HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_19);
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35;
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
    MR_Word hlds__hlds_out__hlds_out_util__Context_32;
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_33;
    MR_Word hlds__hlds_out__hlds_out_util__Term_34;

    {
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_32);
    }
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__ArgVars_10, &hlds__hlds_out__hlds_out_util__ArgTerms_33);
    }
    {
      hlds__hlds_out__hlds_out_util__Term_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_33));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_32));
    }
    {
      hlds__hlds_out__hlds_out_util__V_24_24 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_34);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_24_24);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__CallId_5,
  MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_6,
  MR_Word hlds__hlds_out__hlds_out_util__PredMarkers_7)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 <= (MR_Integer) 0);
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
    MR_String hlds__hlds_out__hlds_out_util__Str1_9;
    MR_String hlds__hlds_out__hlds_out_util__Str2_13;
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;

    if (hlds__hlds_out__hlds_out_util__succeeded)
      hlds__hlds_out__hlds_out_util__Str1_9 = (MR_String) "";
    else
      {
        MR_String hlds__hlds_out__hlds_out_util__V_15_15;

        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_26)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_util___Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) & (MR_Integer) 3);

                  hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_56 == (MR_Integer) 1);
                  if (hlds__hlds_out__hlds_out_util__succeeded)
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == hlds__hlds_out__hlds_out_util__Arity_57);
                  if (hlds__hlds_out__hlds_out_util__succeeded)
                    hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
                  else
                    {
                      MR_String hlds__hlds_out__hlds_out_util__Main_28;
                      MR_String hlds__hlds_out__hlds_out_util__PredOrFuncStr_29;
                      MR_String hlds__hlds_out__hlds_out_util__Expl_30;
                      MR_String hlds__hlds_out__hlds_out_util__V_38_38;
                      MR_String hlds__hlds_out__hlds_out_util__V_49_49;
                      MR_String hlds__hlds_out__hlds_out_util__V_51_51;

                      {
                        hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_38_38);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_56);
                      }
                      hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == (MR_Integer) 1);
                      if (hlds__hlds_out__hlds_out_util__succeeded)
                        {
                          MR_String hlds__hlds_out__hlds_out_util__V_40_40;

                          {
                            hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__PredOrFuncStr_29, (MR_String) " term");
                          }
                          {
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", hlds__hlds_out__hlds_out_util__V_40_40);
                          }
                        }
                      else
                        {
                          MR_String hlds__hlds_out__hlds_out_util__V_43_43;
                          MR_String hlds__hlds_out__hlds_out_util__V_44_44;
                          MR_Integer hlds__hlds_out__hlds_out_util__V_45_45 = (hlds__hlds_out__hlds_out_util__ArgNum_6 - (MR_Integer) 1);
                          MR_String hlds__hlds_out__hlds_out_util__V_47_47;

                          {
                            hlds__hlds_out__hlds_out_util__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_45_45);
                          }
                          {
                            hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", hlds__hlds_out__hlds_out_util__PredOrFuncStr_29);
                          }
                          {
                            hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_44_44, hlds__hlds_out__hlds_out_util__V_47_47);
                          }
                          {
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_43_43);
                          }
                        }
                      {
                        hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Expl_30, (MR_String) ")");
                      }
                      {
                        hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", hlds__hlds_out__hlds_out_util__V_51_51);
                      }
                      {
                        hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Main_28, hlds__hlds_out__hlds_out_util__V_49_49);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  MR_String hlds__hlds_out__hlds_out_util__V_36_36;

                  {
                    hlds__hlds_out__hlds_out_util__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_36_36);
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_23;
            MR_Integer hlds__hlds_out__hlds_out_util__Arity_25;
            MR_Word hlds__hlds_out__hlds_out_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24;

            hlds__hlds_out__hlds_out_util__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_util__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 2)));
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_23 == (MR_Integer) 1);
            if (hlds__hlds_out__hlds_out_util__succeeded)
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Arity_25 == hlds__hlds_out__hlds_out_util__ArgNum_6);
            if (hlds__hlds_out__hlds_out_util__succeeded)
              hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
            else
              {
                MR_String hlds__hlds_out__hlds_out_util__V_55_55;

                {
                  hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
                {
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_55_55);
                }
              }
          }
        {
          hlds__hlds_out__hlds_out_util__Str1_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_15_15, (MR_String) " of ");
        }
      }
    {
      MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_10;
      MR_Word hlds__hlds_out__hlds_out_util__V_11_11;
      MR_Word hlds__hlds_out__hlds_out_util__V_12_12;

      hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__hlds_out__hlds_out_util__succeeded)
        {
          hlds__hlds_out__hlds_out_util__GenericCallId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_10)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__hlds_out__hlds_out_util__succeeded)
            {
              hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 1)));
            }
          hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
        }
    }
    if (!(hlds__hlds_out__hlds_out_util__succeeded))
      {
        {
          hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_out__hlds_out_util__PredMarkers_7, (MR_Integer) 12);
        }
      }
    if (hlds__hlds_out__hlds_out_util__succeeded)
      hlds__hlds_out__hlds_out_util__Str2_13 = hlds__hlds_out__hlds_out_util__Str1_9;
    else
      {
        {
          hlds__hlds_out__hlds_out_util__Str2_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str1_9, (MR_String) "call to ");
        }
      }
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_63);
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_util__V_19_19 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_62);
        }
      }
    {
      hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str2_13, hlds__hlds_out__hlds_out_util__V_19_19);
    }
    return hlds__hlds_out__hlds_out_util__Str_8;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[4 + hlds__hlds_out__hlds_out_util__HeadVar__1_1]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;

    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_util__Purity_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_String hlds__hlds_out__hlds_out_util__V_6_6;
          MR_String hlds__hlds_out__hlds_out_util__V_7_7;
          MR_String hlds__hlds_out__hlds_out_util__V_9_9;
          MR_String hlds__hlds_out__hlds_out_util__V_10_10;
          MR_Integer hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));

          {
            hlds__hlds_out__hlds_out_util__V_6_6 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Purity_3);
          }
          {
            hlds__hlds_out__hlds_out_util__V_10_10 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_4);
          }
          {
            hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) " call");
          }
          {
            hlds__hlds_out__hlds_out_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", hlds__hlds_out__hlds_out_util__V_9_9);
          }
          {
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__V_7_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_util__MethodId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_util___ClassId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

          {
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__MethodId_13);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String hlds__hlds_out__hlds_out_util__EventName_14 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

          {
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_out__hlds_out_util__EventName_14);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word hlds__hlds_out__hlds_out_util__CastType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[0 + hlds__hlds_out__hlds_out_util__CastType_16]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
        }
        break;
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_4);
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_3);
        }
      }
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13,
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_7,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_11;
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16;
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17;

    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_10, &hlds__hlds_out__hlds_out_util__SubContexts_11);
    }
    {
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__MainContext_9, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17);
    }
    {
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13, hlds__hlds_out__hlds_out_util__SubContexts_11, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_4,
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7,
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_20;
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21;
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22;
    MR_Word hlds__hlds_out__hlds_out_util__V_6_6;

    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_19, &hlds__hlds_out__hlds_out_util__SubContexts_20);
    }
    {
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0((MR_Integer) 1, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, hlds__hlds_out__hlds_out_util__MainContext_18, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22);
    }
    {
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, &hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__SubContexts_20, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6,
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_9;
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;

    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
    {
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
    {
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
    {
      hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_13_13);
    }
    {
      hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, hlds__hlds_out__hlds_out_util__V_11_11);
    }
    return hlds__hlds_out__hlds_out_util__Str_8;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_6,
  MR_Word hlds__hlds_out__hlds_out_util__PredId_7,
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_18;
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;
    MR_String hlds__hlds_out__hlds_out_util__V_20_20;
    MR_String hlds__hlds_out__hlds_out_util__V_22_22;

    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_8, &hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
    {
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_6, hlds__hlds_out__hlds_out_util__PredId_7);
    }
    {
      hlds__hlds_out__hlds_out_util__V_22_22 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
    {
      hlds__hlds_out__hlds_out_util__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_22_22);
    }
    {
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_19_19, hlds__hlds_out__hlds_out_util__V_20_20);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_12_12);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__3_3;
    MR_Word hlds__hlds_out__hlds_out_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_11;
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_6, &hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
    {
      hlds__hlds_out__hlds_out_util__V_12_12 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, hlds__hlds_out__hlds_out_util__PredId_5);
    }
    {
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
    {
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_15_15);
    }
    {
      hlds__hlds_out__hlds_out_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, hlds__hlds_out__hlds_out_util__V_13_13);
    }
    return hlds__hlds_out__hlds_out_util__HeadVar__3_3;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_24;
    MR_String hlds__hlds_out__hlds_out_util__V_25_25;
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;
    MR_String hlds__hlds_out__hlds_out_util__V_28_28;

    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
    {
      hlds__hlds_out__hlds_out_util__V_25_25 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
    {
      hlds__hlds_out__hlds_out_util__V_28_28 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
    {
      hlds__hlds_out__hlds_out_util__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_28_28);
    }
    {
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_25_25, hlds__hlds_out__hlds_out_util__V_26_26);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_18_18);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_info_id_to_string_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__PredInfo_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__Str_4;
    MR_Word hlds__hlds_out__hlds_out_util__Module_5;
    MR_String hlds__hlds_out__hlds_out_util__Name_6;
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_7;
    MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_8;
    MR_Word hlds__hlds_out__hlds_out_util__Origin_9;

    {
      hlds__hlds_out__hlds_out_util__Module_5 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_3);
    }
    {
      hlds__hlds_out__hlds_out_util__Name_6 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_3);
    }
    {
      hlds__hlds_out__hlds_out_util__Arity_7 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_3);
    }
    {
      hlds__hlds_out__hlds_out_util__PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_3);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_3, &hlds__hlds_out__hlds_out_util__Origin_9);
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_util__SpecialId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_util__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 1)));
          MR_String hlds__hlds_out__hlds_out_util__Descr_12;
          MR_Integer hlds__hlds_out__hlds_out_util__TypeArity_14;
          MR_String hlds__hlds_out__hlds_out_util__ForStr_15;
          MR_String hlds__hlds_out__hlds_out_util__V_78_78;
          MR_String hlds__hlds_out__hlds_out_util__V_79_79;
          MR_Word hlds__hlds_out__hlds_out_util___TypeSymName_13;

          {
            hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_out__hlds_out_util__SpecialId_10, &hlds__hlds_out__hlds_out_util__Descr_12);
          }
          hlds__hlds_out__hlds_out_util___TypeSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_11, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_util__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_11, (MR_Integer) 1)));
          hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__TypeArity_14 == (MR_Integer) 0);
          if (hlds__hlds_out__hlds_out_util__succeeded)
            hlds__hlds_out__hlds_out_util__ForStr_15 = (MR_String) " for type ";
          else
            hlds__hlds_out__hlds_out_util__ForStr_15 = (MR_String) " for type constructor ";
          {
            hlds__hlds_out__hlds_out_util__V_79_79 = parse_tree__prog_out__type_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TypeCtor_11);
          }
          {
            hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ForStr_15, hlds__hlds_out__hlds_out_util__V_79_79);
          }
          {
            hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Descr_12, hlds__hlds_out__hlds_out_util__V_78_78);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_util__MethodName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_util__MethodConstraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_util__ClassId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_17, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_util__InstanceTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_17, (MR_Integer) 1)));
          MR_String hlds__hlds_out__hlds_out_util__MethodStr_22;
          MR_Word hlds__hlds_out__hlds_out_util__ClassName_23;
          MR_String hlds__hlds_out__hlds_out_util__ClassStr_25;
          MR_String hlds__hlds_out__hlds_out_util__TypeStrs_26;
          MR_Word hlds__hlds_out__hlds_out_util__V_65_65;
          MR_Word hlds__hlds_out__hlds_out_util__V_66_66;
          MR_Word hlds__hlds_out__hlds_out_util__V_68_68;
          MR_Word hlds__hlds_out__hlds_out_util__V_69_69;
          MR_Word hlds__hlds_out__hlds_out_util__V_71_71;
          MR_Word hlds__hlds_out__hlds_out_util__V_72_72;
          MR_Word hlds__hlds_out__hlds_out_util__V_74_74;
          MR_Word hlds__hlds_out__hlds_out_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_17, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_17, (MR_Integer) 3)));
          MR_Integer hlds__hlds_out__hlds_out_util__V_24_24;

          {
            hlds__hlds_out__hlds_out_util__MethodStr_22 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_8, hlds__hlds_out__hlds_out_util__MethodName_16, hlds__hlds_out__hlds_out_util__Arity_7);
          }
          hlds__hlds_out__hlds_out_util__ClassName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_18, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_18, (MR_Integer) 1)));
          {
            hlds__hlds_out__hlds_out_util__ClassStr_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ClassName_23);
          }
          {
            hlds__hlds_out__hlds_out_util__V_65_65 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
          }
          {
            hlds__hlds_out__hlds_out_util__TypeStrs_26 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(hlds__hlds_out__hlds_out_util__V_65_65, hlds__hlds_out__hlds_out_util__InstanceTypes_19);
          }
          {
            hlds__hlds_out__hlds_out_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeStrs_26));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
          }
          {
            hlds__hlds_out__hlds_out_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_72_72, 0) = ((MR_Box) ((MR_String) "("));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_72_72, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_74_74));
          }
          {
            hlds__hlds_out__hlds_out_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_71_71, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ClassStr_25));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_71_71, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_72_72));
          }
          {
            hlds__hlds_out__hlds_out_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_69_69, 0) = ((MR_Box) ((MR_String) " for \140"));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_69_69, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_71_71));
          }
          {
            hlds__hlds_out__hlds_out_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MethodStr_22));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_68_68, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_69_69));
          }
          {
            hlds__hlds_out__hlds_out_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_66_66, 0) = ((MR_Box) ((MR_String) "instance method "));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_66_66, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_68_68));
          }
          {
            hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__append_list_1_f_0(hlds__hlds_out__hlds_out_util__V_66_66);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_util__SymName_80;

          {
            hlds__hlds_out__hlds_out_util__SymName_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_80, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_5));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_6));
          }
          {
            hlds__hlds_out__hlds_out_util__Str_4 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_8, hlds__hlds_out__hlds_out_util__SymName_80, hlds__hlds_out__hlds_out_util__Arity_7);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            {
              MR_Word hlds__hlds_out__hlds_out_util__SymName_80;

              {
                hlds__hlds_out__hlds_out_util__SymName_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_80, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_5));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_6));
              }
              {
                hlds__hlds_out__hlds_out_util__Str_4 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_8, hlds__hlds_out__hlds_out_util__SymName_80, hlds__hlds_out__hlds_out_util__Arity_7);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String hlds__hlds_out__hlds_out_util__FileName_27 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_util__LineNumber_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_util__PromiseType_29;

              {
                hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_3, &hlds__hlds_out__hlds_out_util__PromiseType_29);
              }
              if (hlds__hlds_out__hlds_out_util__succeeded)
                {
                  MR_String hlds__hlds_out__hlds_out_util__V_59_59;
                  MR_String hlds__hlds_out__hlds_out_util__V_83_83;
                  MR_String hlds__hlds_out__hlds_out_util__V_90_90;
                  MR_String hlds__hlds_out__hlds_out_util__V_92_92;
                  MR_String hlds__hlds_out__hlds_out_util__V_93_93;
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;

                  {
                    hlds__hlds_out__hlds_out_util__V_59_59 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PromiseType_29);
                  }
                  {
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0], hlds__hlds_out__hlds_out_util__LineNumber_28, &hlds__hlds_out__hlds_out_util__V_83_83);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_83_83, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_out__hlds_out_util__V_90_90);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_93_93 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__FileName_27, hlds__hlds_out__hlds_out_util__V_92_92);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_95_95 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", hlds__hlds_out__hlds_out_util__V_93_93);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__V_96_96 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, hlds__hlds_out__hlds_out_util__V_95_95);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "\140", hlds__hlds_out__hlds_out_util__V_96_96);
                  }
                }
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_30;

                  {
                    hlds__hlds_out__hlds_out_util__SymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_5));
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_6));
                  }
                  {
                    hlds__hlds_out__hlds_out_util__Str_4 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_8, hlds__hlds_out__hlds_out_util__SymName_30, hlds__hlds_out__hlds_out_util__Arity_7);
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_out__hlds_out_util__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_util__TypeCtorArity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_util__SolverAuxPredKind_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 3)));
              MR_String hlds__hlds_out__hlds_out_util__TypeStr_37;
              MR_Word hlds__hlds_out__hlds_out_util__V_49_49;

              {
                hlds__hlds_out__hlds_out_util__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_49_49, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorSymName_34));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_49_49, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorArity_35));
              }
              {
                hlds__hlds_out__hlds_out_util__TypeStr_37 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_49_49);
              }
              switch (hlds__hlds_out__hlds_out_util__SolverAuxPredKind_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_37);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_37);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_37);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_37);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_util__BasePredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_util__TablingAuxPredKind_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_9, (MR_Integer) 2)));
              MR_String hlds__hlds_out__hlds_out_util__BasePredIdStr_33;

              {
                hlds__hlds_out__hlds_out_util__BasePredIdStr_33 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__BasePredId_31);
              }
              switch (hlds__hlds_out__hlds_out_util__TablingAuxPredKind_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_33);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_33);
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return hlds__hlds_out__hlds_out_util__Str_4;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
  MR_Word hlds__hlds_out__hlds_out_util__PredId_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__Str_6;
    MR_Word hlds__hlds_out__hlds_out_util__PredTable_7;
    MR_Word hlds__hlds_out__hlds_out_util__PredInfo_8;
    MR_Box hlds__hlds_out__hlds_out_util__conv0_PredInfo_8;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, &hlds__hlds_out__hlds_out_util__PredTable_7);
    }
    {
      hlds__hlds_out__hlds_out_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_util__PredTable_7, ((MR_Box) (hlds__hlds_out__hlds_out_util__PredId_5)), &hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
    }
    if (hlds__hlds_out__hlds_out_util__succeeded)
      {
        hlds__hlds_out__hlds_out_util__PredInfo_8 = ((MR_Word) hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
        hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
      }
    if (hlds__hlds_out__hlds_out_util__succeeded)
      {
        hlds__hlds_out__hlds_out_util__Str_6 = hlds__hlds_out__hlds_out_util__pred_info_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
      }
    else
      {
        MR_Integer hlds__hlds_out__hlds_out_util__PredIdInt_9;
        MR_String hlds__hlds_out__hlds_out_util__V_11_11;

        {
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__PredId_5, &hlds__hlds_out__hlds_out_util__PredIdInt_9);
        }
        {
          hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredIdInt_9);
        }
        {
          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", hlds__hlds_out__hlds_out_util__V_11_11);
        }
      }
    return hlds__hlds_out__hlds_out_util__Str_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;

    {
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_10_10);
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_util__Globals_4,
  MR_Word hlds__hlds_out__hlds_out_util__Lang_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
    MR_Word hlds__hlds_out__hlds_out_util__Info_6;
    MR_String hlds__hlds_out__hlds_out_util__DumpOptions_7;
    MR_Word hlds__hlds_out__hlds_out_util__Ids_8;
    MR_Word hlds__hlds_out__hlds_out_util__Names_9;
    MR_Word hlds__hlds_out__hlds_out_util__MercInfo_10;

    {
      libs__globals__lookup_string_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 159, &hlds__hlds_out__hlds_out_util__DumpOptions_7);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 155, &hlds__hlds_out__hlds_out_util__Ids_8);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 156, &hlds__hlds_out__hlds_out_util__Names_9);
    }
    {
      hlds__hlds_out__hlds_out_util__MercInfo_10 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Lang_5);
    }
    {
      hlds__hlds_out__hlds_out_util__Info_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Ids_8));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Names_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MercInfo_10));
    }
    return hlds__hlds_out__hlds_out_util__Info_6;
  }
}

void mercury__hlds__hlds_out__hlds_out_util__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_maybe_qualify_cons_id_0);
}

void mercury__hlds__hlds_out__hlds_out_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_out.hlds_out_util. */
