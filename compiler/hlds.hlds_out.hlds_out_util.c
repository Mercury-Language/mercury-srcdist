/*
** Automatically generated from `hlds_out_util.m'
** by the Mercury compiler,
** version rotd-2020-05-26
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


// :- module hlds.hlds_out.hlds_out_util.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_util__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_util.mih"


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
#include "int.mih"
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
#include "term_io.mih"
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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0;

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

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__826__1_3_p_0(
  MR_Char LambdaHeadVar__1_129,
  MR_String LambdaHeadVar__2_130,
  MR_String * LambdaHeadVar__3_131);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
  MR_Integer Indent_7,
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
  MR_Integer H_5,
  MR_Word T_6);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
  MR_Word STATE_VARIABLE_First_0_1,
  MR_Word * STATE_VARIABLE_First_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Pieces_0_4,
  MR_Word * STATE_VARIABLE_Pieces_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
  MR_Word First_5,
  MR_Word SubContext_6,
  MR_Word STATE_VARIABLE_Pieces_0_12,
  MR_Word * STATE_VARIABLE_Pieces_13);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumElementsBefore_7,
  MR_Integer * ElementNum_8,
  MR_Word * AfterContexts_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
  MR_Word STATE_VARIABLE_First_0_16,
  MR_Word * STATE_VARIABLE_First_17,
  MR_Word MainContext_7,
  MR_Word STATE_VARIABLE_Pieces_0_18,
  MR_Word * STATE_VARIABLE_Pieces_19);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
  MR_Word First_4,
  MR_Word STATE_VARIABLE_Pieces_0_6,
  MR_Word * STATE_VARIABLE_Pieces_7);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[17][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8];


/* sealed */ struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s {
  const MR_String hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[13];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[17][2] = {
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of clause head:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function result term of clause head:"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of functor"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "list element"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "#"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
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
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[13] = {
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
  /* row 10 */   {     (MR_String) "imported by a module imported by an ancestor" },
  /* row 11 */   {     (MR_String) "imported by an ancestor in its interface" },
  /* row 12 */   {     (MR_String) "imported by an ancestor in its implementation" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "hlds_out_info",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_first",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_last",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "maybe_qualify_cons_id",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0
};

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__826__1_3_p_0(
  MR_Char LambdaHeadVar__1_129,
  MR_String LambdaHeadVar__2_130,
  MR_String * LambdaHeadVar__3_131)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_129 == (MR_Char) 42);

    if (succeeded)
      mercury__string__append_3_p_2(LambdaHeadVar__2_130, (MR_String) "star", LambdaHeadVar__3_131);
    else
    {
      MR_String CharStr_20;

      mercury__string__char_to_string_2_p_0(LambdaHeadVar__1_129, &CharStr_20);
      mercury__string__append_3_p_2(LambdaHeadVar__2_130, CharStr_20, LambdaHeadVar__3_131);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
  MR_Integer Indent_7,
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word HeadVar__4_4)
{
  {
    MR_Word Constraint_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Proof_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(TVarSet_9, VarNamePrint_8, Constraint_10);
    mercury__io__write_string_3_p_0((MR_String) ": ");
    if (((MR_tag((MR_Word) Proof_11)) == (MR_Integer) 0))
    {
      MR_Integer Num_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_11, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
      mercury__io__write_int_3_p_0(Num_13);
    }
    else
    {
      MR_Word Super_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_11, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "super class of ");
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(TVarSet_9, VarNamePrint_8, Super_14);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__indent_string_1_f_0(
  MR_Integer Indent_3)
{
  {
    MR_bool succeeded = (Indent_3 == (MR_Integer) 0);
    MR_String Str_4;

    if (succeeded)
      Str_4 = (MR_String) "";
    else
    {
      MR_String Var_6;
      MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) Indent_3 - (MR_Unsigned) 1);

      Var_6 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0(Var_7);
      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_6);
    }
    return Str_4;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(
  MR_Word IntList_4)
{
  if ((IntList_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "[]");
  else
  {
    MR_Integer H_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), IntList_4, (MR_Integer) 0))));
    MR_Word T_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntList_4, (MR_Integer) 1))));

    mercury__io__write_string_3_p_0((MR_String) "[");
    hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(H_6, T_7);
    mercury__io__write_string_3_p_0((MR_String) "]");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
  MR_Integer H_5,
  MR_Word T_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_int_3_p_0(H_5);
    if (!((T_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer TH_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 0))));
      MR_Word TT_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), T_6, (MR_Integer) 1))));
      MR_Integer next_value_of_H_5;
      MR_Word next_value_of_T_6;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_H_5 = TH_8;
      next_value_of_T_6 = TT_9;
      H_5 = next_value_of_H_5;
      T_6 = next_value_of_T_6;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__typeclass_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

    if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
    {
      MR_Word InstModeImport_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeImport_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "other_module(import_abstract)";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "other_module(import_opt)";
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "other_module(import_plain)";
          break;
      }
    }
    else
    {
      MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "this_module(export_anywhere)";
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "this_module(export_nowhere)";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "this_module(export_only_submodules)";
          break;
      }
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

    if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
    {
      MR_Word InstModeImport_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeImport_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "other_module(import_abstract)";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "other_module(import_opt)";
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "other_module(import_plain)";
          break;
      }
    }
    else
    {
      MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "this_module(export_anywhere)";
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "this_module(export_nowhere)";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "this_module(export_only_submodules)";
          break;
      }
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "opt_imported";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "abstract_imported";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "pseudo_imported";
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_String) "exported";
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_String) "opt_exported";
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_String) "abstract_exported";
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_String) "pseudo_exported";
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_String) "exported_to_submodules";
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_String) "local";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Status_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String Var_10;
          MR_String Var_11;

          Var_11 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(Status_8);
          Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) ")");
          HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", Var_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

          HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[8 + Var_13]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(
  MR_Word VarSet_7,
  MR_Word InstVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadVar__4_4)
{
  {
    MR_String Var_15;

    Var_15 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(VarSet_7, InstVarSet_8, VarNamePrint_9, HeadVar__4_4);
    mercury__io__write_string_3_p_0(Var_15);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(
  MR_Word VarSet_6,
  MR_Word InstVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadVar__4_4)
{
  {
    MR_String HeadVar__5_5;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Mode_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;

    Var_11 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, VarNamePrint_8, Var_9);
    Var_14 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, InstVarSet_7, Mode_10);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", Var_14);
    HeadVar__5_5 = mercury__string__f_43_43_2_f_0(Var_11, Var_12);
    return HeadVar__5_5;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(
  MR_Word VarSet_8,
  MR_Word InstVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word Vars_11,
  MR_Word Modes_12)
{
  {
    MR_String Var_16;

    Var_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(VarSet_8, InstVarSet_9, VarNamePrint_10, Vars_11, Modes_12);
    mercury__io__write_string_3_p_0(Var_16);
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
  MR_Word VarSet_7,
  MR_Word InstVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word Vars_10,
  MR_Word Modes_11)
{
  {
    MR_String Str_12;
    MR_Word VarModes_13;
    MR_Word Strs_14;
    MR_Word Var_15;

    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Vars_10, Modes_11, &VarModes_13);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (VarSet_7));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (InstVarSet_8));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (VarNamePrint_9));
    }
    Strs_14 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_15, VarModes_13);
    Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", Strs_14);
    return Str_12;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(
  MR_Integer Indent_7,
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word ProofMap_10)
{
  {
    MR_Word ProofsList_12;
    MR_Word Var_19;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_10, &ProofsList_12);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Indent_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (VarNamePrint_8));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (TVarSet_9));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[0]), ProofsList_12, (MR_String) "\n", Var_19);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
  MR_Integer Indent_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_4 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_10;
      MR_Integer next_value_of_Indent_4;

      mercury__io__write_string_3_p_0((MR_String) "  ");
      Var_10 = (MR_Integer) ((MR_Unsigned) Indent_4 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_4 = Var_10;
      Indent_4 = next_value_of_Indent_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_vars_or_arity_6_p_0(
  MR_Word Qual_7,
  MR_Word VarSet_8,
  MR_Word ConsId_9,
  MR_Word MaybeArgVars_10)
{
  {
    MR_String Var_14;

    Var_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(Qual_7, VarSet_8, ConsId_9, MaybeArgVars_10);
    mercury__io__write_string_3_p_0(Var_14);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__3_131;

    hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__826__1_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_131);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_131));
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
  MR_Word VarSet_6,
  MR_Word Qual_7,
  MR_Word ConsId_8,
  MR_Word MaybeArgVars_9)
{
  {
    MR_bool succeeded;
    MR_String String_10;

    switch (MR_tag((MR_Word) ConsId_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_10 = (MR_String) "<typeclass_info_cell_constructor>";
        break;
      case (MR_Integer) 1:
        String_10 = (MR_String) "<type_info_cell_constructor>";
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_75;
          MR_String Var_76;
          MR_String Var_77;
          MR_String Var_79;
          MR_String Var_80;
          MR_Word PredProcId_157 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 2));
          MR_Integer PredId_158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_157, (MR_Integer) 0))));
          MR_Integer ProcId_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_157, (MR_Integer) 1))));

          Var_76 = mercury__string__int_to_string_1_f_0(PredId_158);
          Var_80 = mercury__string__int_to_string_1_f_0(ProcId_159);
          Var_79 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) ">");
          Var_77 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_79);
          Var_75 = mercury__string__f_43_43_2_f_0(Var_76, Var_77);
          String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", Var_75);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_67;
              MR_String Var_68;
              MR_String Var_69;
              MR_String Var_71;
              MR_String Var_72;
              MR_Word PredProcId_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));
              MR_Integer PredId_161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_160, (MR_Integer) 0))));
              MR_Integer ProcId_162 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_160, (MR_Integer) 1))));

              Var_68 = mercury__string__int_to_string_1_f_0(PredId_161);
              Var_72 = mercury__string__int_to_string_1_f_0(ProcId_162);
              Var_71 = mercury__string__f_43_43_2_f_0(Var_72, (MR_String) ">");
              Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_71);
              Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_69);
              String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", Var_67);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_59;
              MR_String Var_60;
              MR_String Var_61;
              MR_String Var_63;
              MR_String Var_64;
              MR_Word PredProcId_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));
              MR_Integer PredId_164 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_163, (MR_Integer) 0))));
              MR_Integer ProcId_165 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_163, (MR_Integer) 1))));

              Var_60 = mercury__string__int_to_string_1_f_0(PredId_164);
              Var_64 = mercury__string__int_to_string_1_f_0(ProcId_165);
              Var_63 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) ">");
              Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_63);
              Var_59 = mercury__string__f_43_43_2_f_0(Var_60, Var_61);
              String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", Var_59);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));
              MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 2))));
              MR_Word SymName_14;
              MR_String SymNameString0_15;
              MR_String SymNameString1_21;
              MR_String SymNameString_22;

              switch (Qual_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_String Var_127;

                    Var_127 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_11);
                    {
                      SymName_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SymName_14, 0) = ((MR_Box) (Var_127));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  SymName_14 = SymName0_11;
                  break;
              }
              SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_14);
              succeeded = mercury__string__contains_char_2_p_0(SymNameString0_15, (MR_Char) 42);
              if (succeeded)
              {
                MR_Box conv1_SymNameString1_21;

                mercury__string__foldl_4_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[2]), SymNameString0_15, ((MR_Box) ((MR_String) "")), &conv1_SymNameString1_21);
                SymNameString1_21 = ((MR_String) (conv1_SymNameString1_21));
              }
              else
                SymNameString1_21 = SymNameString0_15;
              SymNameString_22 = mercury__term_io__escaped_string_1_f_0(SymNameString1_21);
              if ((MaybeArgVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_141;
                MR_String Var_143;

                Var_143 = mercury__string__int_to_string_1_f_0(Arity_12);
                Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_143);
                String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_141);
              }
              else
              {
                MR_Word ArgVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVars_9, (MR_Integer) 0))));

                if ((ArgVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Var_138;
                  MR_String Var_140;

                  Var_140 = mercury__string__int_to_string_1_f_0(Arity_12);
                  Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_140);
                  String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_138);
                }
                else
                {
                  MR_String ArgStr_26;
                  MR_String Var_134;
                  MR_String Var_136;

                  ArgStr_26 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, ArgVars_23);
                  Var_136 = mercury__string__f_43_43_2_f_0(ArgStr_26, (MR_String) ")");
                  Var_134 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_136);
                  String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_134);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Arity_153 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));

              if ((MaybeArgVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_126;

                Var_126 = mercury__string__int_to_string_1_f_0(Arity_153);
                String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_126);
              }
              else
              {
                MR_Word ArgVars_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVars_9, (MR_Integer) 0))));

                if ((ArgVars_149 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Var_124;

                  Var_124 = mercury__string__int_to_string_1_f_0(Arity_153);
                  String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_124);
                }
                else
                {
                  MR_String Var_121;
                  MR_String ArgStr_147;

                  ArgStr_147 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, ArgVars_149);
                  Var_121 = mercury__string__f_43_43_2_f_0(ArgStr_147, (MR_String) "}");
                  String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", Var_121);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredProcId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));
              MR_Integer PredId_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_43, (MR_Integer) 0))));
              MR_Integer ProcId_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_43, (MR_Integer) 1))));
              MR_String Var_94;
              MR_String Var_95;
              MR_String Var_96;
              MR_String Var_98;
              MR_String Var_99;

              Var_95 = mercury__string__int_to_string_1_f_0(PredId_45);
              Var_99 = mercury__string__int_to_string_1_f_0(ProcId_46);
              Var_98 = mercury__string__f_43_43_2_f_0(Var_99, (MR_String) ">");
              Var_96 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", Var_98);
              Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
              String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", Var_94);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));

              mercury__string__int_to_string_2_p_0(Int_29, &String_10);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));
              MR_String Var_118;

              Var_118 = mercury__string__uint_to_string_1_f_0(UInt_30);
              String_10 = mercury__string__f_43_43_2_f_0(Var_118, (MR_String) "u");
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_31 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_116;

              Var_116 = mercury__string__int8_to_string_1_f_0(Int8_31);
              String_10 = mercury__string__f_43_43_2_f_0(Var_116, (MR_String) "i8");
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_32 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_114;

              Var_114 = mercury__string__uint8_to_string_1_f_0(UInt8_32);
              String_10 = mercury__string__f_43_43_2_f_0(Var_114, (MR_String) "u8");
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_33 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_112;

              Var_112 = mercury__string__int16_to_string_1_f_0(Int16_33);
              String_10 = mercury__string__f_43_43_2_f_0(Var_112, (MR_String) "i16");
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_34 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_110;

              Var_110 = mercury__string__uint16_to_string_1_f_0(UInt16_34);
              String_10 = mercury__string__f_43_43_2_f_0(Var_110, (MR_String) "u16");
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_35 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_108;

              Var_108 = mercury__string__int32_to_string_1_f_0(Int32_35);
              String_10 = mercury__string__f_43_43_2_f_0(Var_108, (MR_String) "i32");
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_36 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_106;

              Var_106 = mercury__string__uint32_to_string_1_f_0(UInt32_36);
              String_10 = mercury__string__f_43_43_2_f_0(Var_106, (MR_String) "u32");
            }
            break;
          case (MR_Integer) 13:
            {
              int64_t Int64_37 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_104;

              Var_104 = mercury__string__int64_to_string_1_f_0(Int64_37);
              String_10 = mercury__string__f_43_43_2_f_0(Var_104, (MR_String) "i64");
            }
            break;
          case (MR_Integer) 14:
            {
              uint64_t UInt64_38 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));
              MR_String Var_102;

              Var_102 = mercury__string__uint64_to_string_1_f_0(UInt64_38);
              String_10 = mercury__string__f_43_43_2_f_0(Var_102, (MR_String) "u64");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_39 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));

              String_10 = mercury__string__float_to_string_1_f_0(Float_39);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char CharConst_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1)));

              String_10 = mercury__term_io__quoted_char_1_f_0(CharConst_40);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String StringConst_41 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));

              String_10 = mercury__term_io__quoted_string_1_f_0(StringConst_41);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String Name_42 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));

              String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", Name_42);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Module_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));
              MR_String Ctor_48 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 2))));
              MR_String Var_83;
              MR_String Var_84;
              MR_String Var_85;
              MR_String Var_87;
              MR_String Var_88;
              MR_String Var_90;
              MR_String Var_91;
              MR_Integer Arity_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 3))));

              Var_84 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_47);
              Var_91 = mercury__string__int_to_string_1_f_0(Arity_156);
              Var_90 = mercury__string__f_43_43_2_f_0(Var_91, (MR_String) ">");
              Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_90);
              Var_87 = mercury__string__f_43_43_2_f_0(Ctor_48, Var_88);
              Var_85 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_87);
              Var_83 = mercury__string__f_43_43_2_f_0(Var_84, Var_85);
              String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", Var_83);
            }
            break;
          case (MR_Integer) 20:
            String_10 = (MR_String) "<base_typeclass_info>";
            break;
          case (MR_Integer) 21:
            String_10 = (MR_String) "<type_info_const>";
            break;
          case (MR_Integer) 22:
            String_10 = (MR_String) "<typeclass_info_const>";
            break;
          case (MR_Integer) 23:
            String_10 = (MR_String) "<ground_term_const>";
            break;
        }
        break;
    }
    return String_10;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word ConsId_11,
  MR_Word ArgVars_12)
{
  {
    MR_String Var_16;

    Var_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_8, VarSet_9, VarNamePrint_10, ConsId_11, ArgVars_12);
    mercury__io__write_string_3_p_0(Var_16);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word ConsId_10,
  MR_Word ArgVars_11)
{
  while (MR_TRUE)
  {
    MR_String Str_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) ConsId_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarSet_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[3]), ArgVars_11);
        break;
      case (MR_Integer) 1:
        Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarSet_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[2]), ArgVars_11);
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ProcId_51;
          MR_Integer ProcIdInt_52;
          MR_Word Var_71;
          MR_String Var_73;
          MR_String Var_74;
          MR_String Var_75;
          MR_String Var_77;
          MR_String Var_78;
          MR_Word ShroudedPredProcId_171 = (MR_Word) (MR_body((MR_Word) (ConsId_10), (MR_Integer) 2));
          MR_Word PredId_172;

          Var_71 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_171);
          PredId_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
          ProcId_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 1))));
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_51, &ProcIdInt_52);
          Var_74 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_7, PredId_172);
          Var_78 = mercury__string__int_to_string_1_f_0(ProcIdInt_52);
          Var_77 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) ")");
          Var_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_77);
          Var_73 = mercury__string__f_43_43_2_f_0(Var_74, Var_75);
          Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", Var_73);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_62;
              MR_String Var_64;
              MR_String Var_65;
              MR_String Var_66;
              MR_String Var_68;
              MR_String Var_69;
              MR_Word ShroudedPredProcId_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_Word PredId_174;
              MR_Integer ProcId_175;
              MR_Integer ProcIdInt_176;

              Var_62 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_173);
              PredId_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));
              ProcId_175 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1))));
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_175, &ProcIdInt_176);
              Var_65 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_7, PredId_174);
              Var_69 = mercury__string__int_to_string_1_f_0(ProcIdInt_176);
              Var_68 = mercury__string__f_43_43_2_f_0(Var_69, (MR_String) "))");
              Var_66 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", Var_68);
              Var_64 = mercury__string__f_43_43_2_f_0(Var_65, Var_66);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", Var_64);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_53;
              MR_String Var_55;
              MR_String Var_56;
              MR_String Var_57;
              MR_String Var_59;
              MR_String Var_60;
              MR_Word ShroudedPredProcId_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_Word PredId_178;
              MR_Integer ProcId_179;
              MR_Integer ProcIdInt_180;

              Var_53 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_177);
              PredId_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))));
              ProcId_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 1))));
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_179, &ProcIdInt_180);
              Var_56 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_7, PredId_178);
              Var_60 = mercury__string__int_to_string_1_f_0(ProcIdInt_180);
              Var_59 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "))");
              Var_57 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", Var_59);
              Var_55 = mercury__string__f_43_43_2_f_0(Var_56, Var_57);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", Var_55);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));

              if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
              {
                MR_Word Module_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));
                MR_String Name_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1))));
                MR_Word Var_163;

                {
                  Var_163 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Name_17));
                }
                Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(VarSet_8, VarNamePrint_9, Module_16, Var_163, ArgVars_11);
              }
              else
              {
                MR_Word Var_162;
                MR_String Name_164 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0))));

                {
                  Var_162 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (Name_164));
                }
                Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarSet_8, VarNamePrint_9, (MR_Integer) 0, Var_162, ArgVars_11);
              }
            }
            break;
          case (MR_Integer) 3:
            Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarSet_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[1]), ArgVars_11);
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_Word PredId_34;
              MR_Word PredInfo_36;
              MR_Word PredModule_37;
              MR_String PredName_38;
              MR_Word PredSymName_39;
              MR_Word PredConsId_40;
              MR_Word Var_130;
              MR_Integer Var_131;
              MR_Word Var_132;
              MR_Word next_value_of_ConsId_10;

              Var_130 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_32);
              PredId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_130, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_34, &PredInfo_36);
              PredModule_37 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_36);
              PredName_38 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_36);
              {
                PredSymName_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PredSymName_39, 0) = ((MR_Box) (PredModule_37));
                MR_hl_field(MR_mktag(1), PredSymName_39, 1) = ((MR_Box) (PredName_38));
              }
              Var_131 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0]), ArgVars_11);
              Var_132 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
              {
                PredConsId_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PredConsId_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), PredConsId_40, 1) = ((MR_Box) (PredSymName_39));
                MR_hl_field(MR_mktag(3), PredConsId_40, 2) = ((MR_Box) (Var_131));
                MR_hl_field(MR_mktag(3), PredConsId_40, 3) = ((MR_Box) (Var_132));
              }
              // direct tailcall eliminated
              ;
              next_value_of_ConsId_10 = PredConsId_40;
              ConsId_10 = next_value_of_ConsId_10;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));

              Str_12 = mercury__string__int_to_string_1_f_0(Int_19);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_String Var_156;

              Var_156 = mercury__string__uint_to_string_1_f_0(UInt_20);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_156, (MR_String) "u");
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_21 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_154;

              Var_154 = mercury__string__int8_to_string_1_f_0(Int8_21);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_154, (MR_String) "i8");
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_22 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_152;

              Var_152 = mercury__string__uint8_to_string_1_f_0(UInt8_22);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_152, (MR_String) "u8");
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_23 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_150;

              Var_150 = mercury__string__int16_to_string_1_f_0(Int16_23);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_150, (MR_String) "i16");
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_24 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_148;

              Var_148 = mercury__string__uint16_to_string_1_f_0(UInt16_24);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_148, (MR_String) "u16");
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_25 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_146;

              Var_146 = mercury__string__int32_to_string_1_f_0(Int32_25);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_146, (MR_String) "i32");
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_26 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_144;

              Var_144 = mercury__string__uint32_to_string_1_f_0(UInt32_26);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_144, (MR_String) "u32");
            }
            break;
          case (MR_Integer) 13:
            {
              int64_t Int64_27 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_142;

              Var_142 = mercury__string__int64_to_string_1_f_0(Int64_27);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_142, (MR_String) "i64");
            }
            break;
          case (MR_Integer) 14:
            {
              uint64_t UInt64_28 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_140;

              Var_140 = mercury__string__uint64_to_string_1_f_0(UInt64_28);
              Str_12 = mercury__string__f_43_43_2_f_0(Var_140, (MR_String) "u64");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_Word Var_139;

              {
                Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_139, 1) = MR_box_float(Float_29);
              }
              Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarSet_8, VarNamePrint_9, Var_139, ArgVars_11);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char Char_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1)));
              MR_String Var_136;
              MR_String Var_137;

              Var_137 = mercury__term_io__quoted_char_1_f_0(Char_30);
              Var_136 = mercury__string__f_43_43_2_f_0(Var_137, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_136);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String String_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_Word Var_134;

              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_134, 0) = ((MR_Box) (String_31));
              }
              Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarSet_8, VarNamePrint_9, Var_134, ArgVars_11);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String Name_165 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));

              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", Name_165);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Integer Arity_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 3))));
              MR_String Var_120;
              MR_String Var_121;
              MR_String Var_122;
              MR_String Var_124;
              MR_String Var_125;
              MR_String Var_127;
              MR_String Var_128;
              MR_Word Module_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_String Name_167 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 2))));

              Var_121 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Module_166);
              Var_128 = mercury__string__int_to_string_1_f_0(Arity_41);
              Var_127 = mercury__string__f_43_43_2_f_0(Var_128, (MR_String) ")");
              Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_127);
              Var_124 = mercury__string__f_43_43_2_f_0(Name_167, Var_125);
              Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", Var_124);
              Var_120 = mercury__string__f_43_43_2_f_0(Var_121, Var_122);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", Var_120);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ClassId_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 2))));
              MR_String Instance_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 4))));
              MR_String Var_103;
              MR_String Var_104;
              MR_String Var_105;
              MR_String Var_107;
              MR_String Var_109;
              MR_String Var_110;
              MR_String Var_111;
              MR_String Var_113;
              MR_String Var_114;
              MR_String Var_115;
              MR_String Var_117;
              MR_Word Module_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_Word Name_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_42, (MR_Integer) 0))));
              MR_Integer Arity_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_42, (MR_Integer) 1))));

              Var_104 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Module_168);
              Var_110 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Name_169);
              Var_114 = mercury__string__int_to_string_1_f_0(Arity_170);
              Var_117 = mercury__string__f_43_43_2_f_0(Instance_44, (MR_String) ")");
              Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "), ", Var_117);
              Var_113 = mercury__string__f_43_43_2_f_0(Var_114, Var_115);
              Var_111 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_113);
              Var_109 = mercury__string__f_43_43_2_f_0(Var_110, Var_111);
              Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", Var_109);
              Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_107);
              Var_103 = mercury__string__f_43_43_2_f_0(Var_104, Var_105);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", Var_103);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer TIConstNum_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_String Var_93;
              MR_String Var_94;

              Var_94 = mercury__string__int_to_string_1_f_0(TIConstNum_46);
              Var_93 = mercury__string__f_43_43_2_f_0(Var_94, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", Var_93);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer TCIConstNum_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_String Var_89;
              MR_String Var_90;

              Var_90 = mercury__string__int_to_string_1_f_0(TCIConstNum_47);
              Var_89 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", Var_89);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Integer ConstNum_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_Word SubConsId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 2))));
              MR_String SubStr_50;
              MR_String Var_82;
              MR_String Var_83;
              MR_String Var_84;
              MR_String Var_86;

              SubStr_50 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_7, VarSet_8, VarNamePrint_9, SubConsId_49, (MR_Word) ((MR_Unsigned) 0U));
              Var_83 = mercury__string__int_to_string_1_f_0(ConstNum_48);
              Var_86 = mercury__string__f_43_43_2_f_0(SubStr_50, (MR_String) ")");
              Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_86);
              Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", Var_82);
            }
            break;
        }
        break;
    }
    return Str_12;
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word ModuleName_10,
  MR_Word Functor_11,
  MR_Word ArgTerms_12)
{
  {
    MR_String Var_16;

    Var_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(VarSet_8, VarNamePrint_9, ModuleName_10, Functor_11, ArgTerms_12);
    mercury__io__write_string_3_p_0(Var_16);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ModuleName_9,
  MR_Word Functor_10,
  MR_Word ArgTerms_11)
{
  {
    MR_String Str_12;
    MR_String ModuleNameStr_13;
    MR_Word Context_14;
    MR_Word Term_15;
    MR_String TermStr_16;
    MR_String Var_18;

    ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_9);
    mercury__term__context_init_1_p_0(&Context_14);
    {
      Term_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_15, 0) = ((MR_Box) (Functor_10));
      MR_hl_field(MR_mktag(0), Term_15, 1) = ((MR_Box) (ArgTerms_11));
      MR_hl_field(MR_mktag(0), Term_15, 2) = ((MR_Box) (Context_14));
    }
    TermStr_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, (MR_Integer) 0, Term_15);
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", TermStr_16);
    Str_12 = mercury__string__f_43_43_2_f_0(ModuleNameStr_13, Var_18);
    return Str_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word ModuleName_10,
  MR_Word Functor_11,
  MR_Word ArgVars_12)
{
  {
    MR_String Var_16;

    Var_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(VarSet_8, VarNamePrint_9, ModuleName_10, Functor_11, ArgVars_12);
    mercury__io__write_string_3_p_0(Var_16);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ModuleName_9,
  MR_Word Functor_10,
  MR_Word ArgVars_11)
{
  {
    MR_String Str_12;
    MR_String ModuleNameStr_13;
    MR_String FunctorStr_14;
    MR_String Var_16;
    MR_Word Context_24;
    MR_Word ArgTerms_25;
    MR_Word Term_26;

    ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_9);
    mercury__term__context_init_1_p_0(&Context_24);
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11, &ArgTerms_25);
    {
      Term_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_26, 0) = ((MR_Box) (Functor_10));
      MR_hl_field(MR_mktag(0), Term_26, 1) = ((MR_Box) (ArgTerms_25));
      MR_hl_field(MR_mktag(0), Term_26, 2) = ((MR_Box) (Context_24));
    }
    FunctorStr_14 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, (MR_Integer) 0, Term_26);
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", FunctorStr_14);
    Str_12 = mercury__string__f_43_43_2_f_0(ModuleNameStr_13, Var_16);
    return Str_12;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Word Functor_10,
  MR_Word ArgVars_11)
{
  {
    MR_String Str_12;
    MR_Word Context_13;
    MR_Word ArgTerms_14;
    MR_Word Term_15;

    mercury__term__context_init_1_p_0(&Context_13);
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11, &ArgTerms_14);
    {
      Term_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_15, 0) = ((MR_Box) (Functor_10));
      MR_hl_field(MR_mktag(0), Term_15, 1) = ((MR_Box) (ArgTerms_14));
      MR_hl_field(MR_mktag(0), Term_15, 2) = ((MR_Box) (Context_13));
    }
    Str_12 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, Term_15);
    return Str_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Functor_11,
  MR_Word ArgVars_12)
{
  {
    MR_String Var_16;
    MR_Word Context_24;
    MR_Word ArgTerms_25;
    MR_Word Term_26;

    mercury__term__context_init_1_p_0(&Context_24);
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_12, &ArgTerms_25);
    {
      Term_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_26, 0) = ((MR_Box) (Functor_11));
      MR_hl_field(MR_mktag(0), Term_26, 1) = ((MR_Box) (ArgTerms_25));
      MR_hl_field(MR_mktag(0), Term_26, 2) = ((MR_Box) (Context_24));
    }
    Var_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Term_26);
    mercury__io__write_string_3_p_0(Var_16);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Functor_8,
  MR_Word ArgVars_9)
{
  {
    MR_String HeadVar__5_5;
    MR_Word Context_17;
    MR_Word ArgTerms_18;
    MR_Word Term_19;

    mercury__term__context_init_1_p_0(&Context_17);
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, &ArgTerms_18);
    {
      Term_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_19, 0) = ((MR_Box) (Functor_8));
      MR_hl_field(MR_mktag(0), Term_19, 1) = ((MR_Box) (ArgTerms_18));
      MR_hl_field(MR_mktag(0), Term_19, 2) = ((MR_Box) (Context_17));
    }
    HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, VarNamePrint_7, (MR_Integer) 1, Term_19);
    return HeadVar__5_5;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Functor_9,
  MR_Word ArgVars_10)
{
  {
    MR_String Var_24;
    MR_Word Context_32;
    MR_Word ArgTerms_33;
    MR_Word Term_34;

    mercury__term__context_init_1_p_0(&Context_32);
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_10, &ArgTerms_33);
    {
      Term_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_34, 0) = ((MR_Box) (Functor_9));
      MR_hl_field(MR_mktag(0), Term_34, 1) = ((MR_Box) (ArgTerms_33));
      MR_hl_field(MR_mktag(0), Term_34, 2) = ((MR_Box) (Context_32));
    }
    Var_24 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_34);
    mercury__io__write_string_3_p_0(Var_24);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[4 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word GenericCallId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      HeadVar__2_2 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(GenericCallId_4);
    }
    else
    {
      MR_Word PredCallId_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

      HeadVar__2_2 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(PredCallId_3);
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(
  MR_Word STATE_VARIABLE_First_0_12,
  MR_Word * STATE_VARIABLE_First_13,
  MR_Word UnifyContext_7,
  MR_Word STATE_VARIABLE_Pieces_0_14,
  MR_Word * STATE_VARIABLE_Pieces_15)
{
  {
    MR_Word MainContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_7, (MR_Integer) 0))));
    MR_Word RevSubContexts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_7, (MR_Integer) 1))));
    MR_Word SubContexts_11;
    MR_Word STATE_VARIABLE_First_16_16;
    MR_Word STATE_VARIABLE_Pieces_17_17;

    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0), RevSubContexts_10, &SubContexts_11);
    hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(STATE_VARIABLE_First_0_12, &STATE_VARIABLE_First_16_16, MainContext_9, STATE_VARIABLE_Pieces_0_14, &STATE_VARIABLE_Pieces_17_17);
    hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(STATE_VARIABLE_First_16_16, STATE_VARIABLE_First_13, SubContexts_11, STATE_VARIABLE_Pieces_17_17, STATE_VARIABLE_Pieces_15);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(
  MR_Word UnifyContext_4,
  MR_Word STATE_VARIABLE_Pieces_0_7,
  MR_Word * STATE_VARIABLE_Pieces_8)
{
  {
    MR_Word MainContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_4, (MR_Integer) 0))));
    MR_Word RevSubContexts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_4, (MR_Integer) 1))));
    MR_Word SubContexts_20;
    MR_Word STATE_VARIABLE_First_16_21;
    MR_Word STATE_VARIABLE_Pieces_17_22;
    MR_Word Var_6;

    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0), RevSubContexts_19, &SubContexts_20);
    hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0((MR_Integer) 1, &STATE_VARIABLE_First_16_21, MainContext_18, STATE_VARIABLE_Pieces_0_7, &STATE_VARIABLE_Pieces_17_22);
    hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(STATE_VARIABLE_First_16_21, &Var_6, SubContexts_20, STATE_VARIABLE_Pieces_17_22, STATE_VARIABLE_Pieces_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
  MR_Word STATE_VARIABLE_First_0_1,
  MR_Word * STATE_VARIABLE_First_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Pieces_0_4,
  MR_Word * STATE_VARIABLE_Pieces_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Pieces_5 = STATE_VARIABLE_Pieces_0_4;
      *STATE_VARIABLE_First_2 = STATE_VARIABLE_First_0_1;
    }
    else
    {
      MR_Word SubContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word SubContexts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ElementNum_16;
      MR_Word AfterContexts_17;

      succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(HeadVar__3_3, (MR_Integer) 0, &ElementNum_16, &AfterContexts_17);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Pieces_24_24;
        MR_String ElementNumStr_37;
        MR_Word STATE_VARIABLE_Pieces_11_38;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_Pieces_0_4;

        switch (STATE_VARIABLE_First_0_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_4, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[10])));
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_4, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[12])));
            break;
        }
        ElementNumStr_37 = mercury__string__int_to_string_1_f_0(ElementNum_16);
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (ElementNumStr_37));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[15])));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
        }
        STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_11_38, Var_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = AfterContexts_17;
        next_value_of_STATE_VARIABLE_Pieces_0_4 = STATE_VARIABLE_Pieces_24_24;
        STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_Pieces_0_4 = next_value_of_STATE_VARIABLE_Pieces_0_4;
        continue;
      }
      else
      {
        MR_Word STATE_VARIABLE_Pieces_28_28;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_Pieces_0_4;

        hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(STATE_VARIABLE_First_0_1, SubContext_13, STATE_VARIABLE_Pieces_0_4, &STATE_VARIABLE_Pieces_28_28);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = SubContexts_14;
        next_value_of_STATE_VARIABLE_Pieces_0_4 = STATE_VARIABLE_Pieces_28_28;
        STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_Pieces_0_4 = next_value_of_STATE_VARIABLE_Pieces_0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
  MR_Word First_5,
  MR_Word SubContext_6,
  MR_Word STATE_VARIABLE_Pieces_0_12,
  MR_Word * STATE_VARIABLE_Pieces_13)
{
  {
    MR_Word ConsId_8;
    MR_Integer ArgNum_9;
    MR_String ArgNumStr_10;
    MR_String ConsIdStr_11;
    MR_Word STATE_VARIABLE_Pieces_14_14;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;

    switch (First_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[10])));
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[12])));
        break;
    }
    ConsId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubContext_6, (MR_Integer) 0))));
    ArgNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubContext_6, (MR_Integer) 1))));
    ArgNumStr_10 = mercury__string__int_to_string_1_f_0(ArgNum_9);
    ConsIdStr_11 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_8);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (ArgNumStr_10));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (ConsIdStr_11));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    *STATE_VARIABLE_Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_14_14, Var_16);
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumElementsBefore_7,
  MR_Integer * ElementNum_8,
  MR_Word * AfterContexts_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubContext_5;
    MR_Word SubContexts_6;
    MR_Word ConsId_10;
    MR_Integer ArgNum_11;
    MR_Word Functor_12;
    MR_Integer Var_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SubContext_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      SubContexts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      ConsId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubContext_5, (MR_Integer) 0))));
      ArgNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubContext_5, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Functor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 2))));
        succeeded = (Var_15 == (MR_Integer) 2);
        if (succeeded)
        {
          if (((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_12, (MR_Integer) 0))));
            MR_String Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), Functor_12, (MR_Integer) 1))));
            MR_String Var_17;
            MR_String Var_21;

            succeeded = (strcmp(Var_16, (MR_String) "[|]") == 0);
            if (succeeded)
            {
              Var_17 = (MR_String) "list";
              succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_14, &Var_21);
              if (succeeded)
                succeeded = (strcmp(Var_17, Var_21) == 0);
            }
          }
          else
          {
            MR_String Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_12, (MR_Integer) 0))));

            succeeded = (strcmp(Var_18, (MR_String) "[|]") == 0);
          }
          if (succeeded)
            switch (ArgNum_11) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  *ElementNum_8 = NumElementsBefore_7;
                  *AfterContexts_9 = SubContexts_6;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) NumElementsBefore_7 + (MR_Unsigned) 1);
                  MR_Word next_value_of_HeadVar__1_1 = SubContexts_6;
                  MR_Integer next_value_of_NumElementsBefore_7 = Var_19;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  NumElementsBefore_7 = next_value_of_NumElementsBefore_7;
                  continue;
                }
                break;
            }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
  MR_Word STATE_VARIABLE_First_0_16,
  MR_Word * STATE_VARIABLE_First_17,
  MR_Word MainContext_7,
  MR_Word STATE_VARIABLE_Pieces_0_18,
  MR_Word * STATE_VARIABLE_Pieces_19)
{
  switch (MR_tag((MR_Word) MainContext_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MainContext_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_First_17 = STATE_VARIABLE_First_0_16;
            *STATE_VARIABLE_Pieces_19 = STATE_VARIABLE_Pieces_0_18;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Pieces_42_42;

            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(STATE_VARIABLE_First_0_16, STATE_VARIABLE_Pieces_0_18, &STATE_VARIABLE_Pieces_42_42);
            *STATE_VARIABLE_First_17 = (MR_Integer) 1;
            *STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_42_42, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[8])));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ArgNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MainContext_7, (MR_Integer) 0))));
        MR_String ArgNumStr_10;
        MR_Word STATE_VARIABLE_Pieces_51_51;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_58;

        hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(STATE_VARIABLE_First_0_16, STATE_VARIABLE_Pieces_0_18, &STATE_VARIABLE_Pieces_51_51);
        *STATE_VARIABLE_First_17 = (MR_Integer) 1;
        ArgNumStr_10 = mercury__string__int_to_string_1_f_0(ArgNum_9);
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (ArgNumStr_10));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[6])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[13])));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
        }
        *STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_51_51, Var_54);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MainContext_7, (MR_Integer) 0))));
        MR_Word Markers_12;
        MR_String ArgIdStr_13;
        MR_Word STATE_VARIABLE_Pieces_31_31;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Integer ArgNum_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), MainContext_7, (MR_Integer) 1))));

        switch (STATE_VARIABLE_First_0_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_18, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[10])));
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_18, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[12])));
            break;
        }
        *STATE_VARIABLE_First_17 = (MR_Integer) 1;
        hlds__hlds_pred__init_markers_1_p_0(&Markers_12);
        ArgIdStr_13 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_11, ArgNum_65, Markers_12);
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (ArgIdStr_13));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
        }
        *STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_31_31, Var_34);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String Source_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), MainContext_7, (MR_Integer) 0))));
        MR_String Msg_15;
        MR_Word STATE_VARIABLE_Pieces_20_20;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_String Var_71;

        hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(STATE_VARIABLE_First_0_16, STATE_VARIABLE_Pieces_0_18, &STATE_VARIABLE_Pieces_20_20);
        Var_71 = mercury__string__f_43_43_2_f_0(Source_14, (MR_String) " unification:\n");
        Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", Var_71);
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Msg_15));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
        }
        *STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_20_20, Var_26);
        *STATE_VARIABLE_First_17 = STATE_VARIABLE_First_0_16;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
  MR_Word First_4,
  MR_Word STATE_VARIABLE_Pieces_0_6,
  MR_Word * STATE_VARIABLE_Pieces_7)
{
  switch (First_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_6, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[10])));
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_Pieces_0_6, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[12])));
      break;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
  MR_Word CallId_5,
  MR_Integer ArgNum_6,
  MR_Word PredMarkers_7)
{
  {
    MR_bool succeeded = (ArgNum_6 <= (MR_Integer) 0);
    MR_String Str_8;
    MR_String Str1_9;
    MR_String Str2_13;
    MR_String Var_19;

    if (succeeded)
      Str1_9 = (MR_String) "";
    else
    {
      MR_String Var_15;

      if (((MR_tag((MR_Word) CallId_5)) == (MR_Integer) 1))
      {
        MR_Word GenericCallId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallId_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GenericCallId_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredOrFunc_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCallId_26, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Integer Arity_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GenericCallId_26, (MR_Integer) 1))));

              succeeded = (PredOrFunc_56 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (ArgNum_6 == Arity_57);
              if (succeeded)
                Var_15 = (MR_String) "the return value";
              else
              {
                MR_String Main_28;
                MR_String PredOrFuncStr_29;
                MR_String Expl_30;
                MR_String Var_38;
                MR_String Var_49;
                MR_String Var_51;

                Var_38 = mercury__string__int_to_string_1_f_0(ArgNum_6);
                Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_38);
                PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_56);
                succeeded = (ArgNum_6 == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_String Var_40;

                  Var_40 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_29, (MR_String) " term");
                  Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", Var_40);
                }
                else
                {
                  MR_String Var_43;
                  MR_String Var_44;
                  MR_Integer Var_45 = (MR_Integer) ((MR_Unsigned) ArgNum_6 - (MR_Unsigned) 1);
                  MR_String Var_47;

                  Var_44 = mercury__string__int_to_string_1_f_0(Var_45);
                  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", PredOrFuncStr_29);
                  Var_43 = mercury__string__f_43_43_2_f_0(Var_44, Var_47);
                  Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_43);
                }
                Var_51 = mercury__string__f_43_43_2_f_0(Expl_30, (MR_String) ")");
                Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", Var_51);
                Var_15 = mercury__string__f_43_43_2_f_0(Main_28, Var_49);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_String Var_36;

              Var_36 = mercury__string__int_to_string_1_f_0(ArgNum_6);
              Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_36);
            }
            break;
        }
      }
      else
      {
        MR_Word PredOrFunc_23;
        MR_Integer Arity_25;
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallId_5, (MR_Integer) 0))));

        PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))) & (MR_Integer) 1);
        Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 2))));
        succeeded = (PredOrFunc_23 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (Arity_25 == ArgNum_6);
        if (succeeded)
          Var_15 = (MR_String) "the return value";
        else
        {
          MR_String Var_55;

          Var_55 = mercury__string__int_to_string_1_f_0(ArgNum_6);
          Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_55);
        }
      }
      Str1_9 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) " of ");
    }
    {
      MR_Word GenericCallId_10;

      succeeded = ((MR_tag((MR_Word) CallId_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        GenericCallId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallId_5, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) GenericCallId_10)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        succeeded = !(succeeded);
      }
    }
    if (!(succeeded))
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_7, (MR_Integer) 12);
    if (succeeded)
      Str2_13 = Str1_9;
    else
      Str2_13 = mercury__string__f_43_43_2_f_0(Str1_9, (MR_String) "call to ");
    if (((MR_tag((MR_Word) CallId_5)) == (MR_Integer) 1))
    {
      MR_Word GenericCallId_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallId_5, (MR_Integer) 0))));

      Var_19 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(GenericCallId_63);
    }
    else
    {
      MR_Word PredCallId_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallId_5, (MR_Integer) 0))));

      Var_19 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(PredCallId_62);
    }
    Str_8 = mercury__string__f_43_43_2_f_0(Str2_13, Var_19);
    return Str_8;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Purity_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          MR_Word PredOrFunc_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_String Var_6;
          MR_String Var_7;
          MR_String Var_9;
          MR_String Var_10;

          Var_6 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(Purity_3);
          Var_10 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_4);
          Var_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) " call");
          Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", Var_9);
          HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_6, Var_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MethodId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

          HeadVar__2_2 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(MethodId_13);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String EventName_14 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

          HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", EventName_14);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word CastType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

          HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[0 + CastType_16]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  {
    MR_String Str_8;
    MR_Integer ModeNum_9;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_9);
    Var_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_5, PredId_6);
    Var_13 = mercury__string__int_to_string_1_f_0(ModeNum_9);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_13);
    Str_8 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
    return Str_8;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8)
{
  {
    MR_String Var_12;
    MR_Integer ModeNum_18;
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_22;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_8, &ModeNum_18);
    Var_19 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_6, PredId_7);
    Var_22 = mercury__string__int_to_string_1_f_0(ModeNum_18);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_22);
    Var_12 = mercury__string__f_43_43_2_f_0(Var_19, Var_20);
    mercury__io__write_string_3_p_0(Var_12);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;
    MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ModeNum_11;
    MR_String Var_12;
    MR_String Var_13;
    MR_String Var_15;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_6, &ModeNum_11);
    Var_12 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_4, PredId_5);
    Var_15 = mercury__string__int_to_string_1_f_0(ModeNum_11);
    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_15);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
    return HeadVar__3_3;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_18;
    MR_Integer ModeNum_24;
    MR_String Var_25;
    MR_String Var_26;
    MR_String Var_28;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_24);
    Var_25 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_5, PredId_6);
    Var_28 = mercury__string__int_to_string_1_f_0(ModeNum_24);
    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_28);
    Var_18 = mercury__string__f_43_43_2_f_0(Var_25, Var_26);
    mercury__io__write_string_3_p_0(Var_18);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6)
{
  {
    MR_String Var_10;

    Var_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_5, PredId_6);
    mercury__io__write_string_3_p_0(Var_10);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  {
    MR_bool succeeded;
    MR_String Str_6;
    MR_Word PredTable_7;
    MR_Word PredInfo_8;
    MR_Box conv0_PredInfo_8;

    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_4, &PredTable_7);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_7, ((MR_Box) (PredId_5)), &conv0_PredInfo_8);
    if (succeeded)
    {
      PredInfo_8 = ((MR_Word) (conv0_PredInfo_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Str_6 = hlds__hlds_out__hlds_out_util__pred_info_id_to_string_1_f_0(PredInfo_8);
    else
    {
      MR_Integer PredIdInt_9;
      MR_String Var_11;

      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredIdInt_9);
      Var_11 = mercury__string__int_to_string_1_f_0(PredIdInt_9);
      Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", Var_11);
    }
    return Str_6;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_info_id_to_string_1_f_0(
  MR_Word PredInfo_3)
{
  {
    MR_bool succeeded;
    MR_String Str_4;
    MR_Word Module_5;
    MR_String Name_6;
    MR_Integer Arity_7;
    MR_Word PredOrFunc_8;
    MR_Word Origin_9;

    Module_5 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_3);
    Name_6 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_3);
    Arity_7 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_3);
    PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_3);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_3, &Origin_9);
    switch (MR_tag((MR_Word) Origin_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_98;

          {
            SymName_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SymName_98, 0) = ((MR_Box) (Module_5));
            MR_hl_field(MR_mktag(1), SymName_98, 1) = ((MR_Box) (Name_6));
          }
          Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_98, Arity_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SpecialId_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_9, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_9, (MR_Integer) 1))));
          MR_String Descr_12;
          MR_Integer TypeArity_14;
          MR_String ForStr_15;
          MR_String Var_95;
          MR_String Var_96;

          hlds__special_pred__special_pred_description_2_p_0(SpecialId_10, &Descr_12);
          TypeArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
          succeeded = (TypeArity_14 == (MR_Integer) 0);
          if (succeeded)
            ForStr_15 = (MR_String) " for type ";
          else
            ForStr_15 = (MR_String) " for type constructor ";
          Var_96 = parse_tree__prog_out__type_name_to_string_1_f_0(TypeCtor_11);
          Var_95 = mercury__string__f_43_43_2_f_0(ForStr_15, Var_96);
          Str_4 = mercury__string__f_43_43_2_f_0(Descr_12, Var_95);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MethodName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_9, (MR_Integer) 0))));
          MR_Word MethodConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_9, (MR_Integer) 1))));
          MR_Word ClassId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 0))));
          MR_Word InstanceTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 1))));
          MR_String MethodStr_22;
          MR_Word ClassName_23;
          MR_String ClassStr_25;
          MR_String TypeStrs_26;
          MR_Word Var_86;
          MR_String Var_101;
          MR_String Var_103;
          MR_String Var_104;
          MR_String Var_106;
          MR_String Var_107;

          MethodStr_22 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, MethodName_16, Arity_7);
          ClassName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_18, (MR_Integer) 0))));
          ClassStr_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_23);
          Var_86 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
          TypeStrs_26 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(Var_86, InstanceTypes_19);
          Var_101 = mercury__string__f_43_43_2_f_0(TypeStrs_26, (MR_String) ")\'");
          Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_101);
          Var_104 = mercury__string__f_43_43_2_f_0(ClassStr_25, Var_103);
          Var_106 = mercury__string__f_43_43_2_f_0((MR_String) " for \140", Var_104);
          Var_107 = mercury__string__f_43_43_2_f_0(MethodStr_22, Var_106);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "instance method ", Var_107);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MethodId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))));
              MR_Word ClassSymName_28;
              MR_Integer ClassArity_29;
              MR_Word MethodPredOrFunc_30;
              MR_Word MethodSymName_31;
              MR_Integer MethodArity_32;
              MR_String Var_74;
              MR_String Var_77;
              MR_String Var_82;
              MR_Word ClassId_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
              MR_String Var_109;
              MR_String Var_117;
              MR_String Var_118;
              MR_String Var_120;
              MR_String Var_121;
              MR_String Var_128;
              MR_String Var_130;
              MR_String Var_131;
              MR_String Var_133;
              MR_String Var_134;

              ClassSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_97, (MR_Integer) 0))));
              ClassArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_97, (MR_Integer) 1))));
              MethodPredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 0))) & (MR_Integer) 1);
              MethodSymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 1))));
              MethodArity_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 2))));
              Var_74 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(MethodPredOrFunc_30);
              Var_77 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_31);
              Var_82 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_28);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), ClassArity_29, &Var_109);
              Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_109);
              Var_118 = mercury__string__f_43_43_2_f_0(Var_82, Var_117);
              Var_120 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_118);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), MethodArity_32, &Var_121);
              Var_128 = mercury__string__f_43_43_2_f_0(Var_121, Var_120);
              Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_128);
              Var_131 = mercury__string__f_43_43_2_f_0(Var_77, Var_130);
              Var_133 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_131);
              Var_134 = mercury__string__f_43_43_2_f_0(Var_74, Var_133);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "class method ", Var_134);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              MR_Word SymName_98;

              {
                SymName_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SymName_98, 0) = ((MR_Box) (Module_5));
                MR_hl_field(MR_mktag(1), SymName_98, 1) = ((MR_Box) (Name_6));
              }
              Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_98, Arity_7);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String FileName_33 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
              MR_Integer LineNumber_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))));
              MR_Word PromiseType_35;

              succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_3, &PromiseType_35);
              if (succeeded)
              {
                MR_String Var_65;
                MR_String Var_137;
                MR_String Var_144;
                MR_String Var_146;
                MR_String Var_147;
                MR_String Var_149;
                MR_String Var_150;

                Var_65 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_35);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), LineNumber_34, &Var_137);
                Var_144 = mercury__string__f_43_43_2_f_0(Var_137, (MR_String) ")");
                Var_146 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_144);
                Var_147 = mercury__string__f_43_43_2_f_0(FileName_33, Var_146);
                Var_149 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", Var_147);
                Var_150 = mercury__string__f_43_43_2_f_0(Var_65, Var_149);
                Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_150);
              }
              else
              {
                MR_Word SymName_36;

                {
                  SymName_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SymName_36, 0) = ((MR_Box) (Module_5));
                  MR_hl_field(MR_mktag(1), SymName_36, 1) = ((MR_Box) (Name_6));
                }
                Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_36, Arity_7);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeCtorSymName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
              MR_Integer TypeCtorArity_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))));
              MR_Word SolverAuxPredKind_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 3))) & (MR_Integer) 3);
              MR_String TypeStr_43;
              MR_Word Var_55;

              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (TypeCtorSymName_40));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (TypeCtorArity_41));
              }
              TypeStr_43 = parse_tree__prog_out__sym_name_arity_to_string_1_f_0(Var_55);
              switch (SolverAuxPredKind_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", TypeStr_43);
                  break;
                case (MR_Integer) 2:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", TypeStr_43);
                  break;
                case (MR_Integer) 1:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", TypeStr_43);
                  break;
                case (MR_Integer) 0:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", TypeStr_43);
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BasePredId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
              MR_Word TablingAuxPredKind_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_String BasePredIdStr_39;

              BasePredIdStr_39 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(BasePredId_37);
              switch (TablingAuxPredKind_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", BasePredIdStr_39);
                  break;
                case (MR_Integer) 0:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", BasePredIdStr_39);
                  break;
              }
            }
            break;
        }
        break;
    }
    return Str_4;
  }
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(
  MR_Word Globals_4,
  MR_Word Lang_5)
{
  {
    MR_Word Info_6;
    MR_String DumpOptions_7;
    MR_Word Ids_8;
    MR_Word Names_9;
    MR_Word MercInfo_10;

    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 180, &DumpOptions_7);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 174, &Ids_8);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 175, &Names_9);
    MercInfo_10 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_4, (MR_Integer) 0, Lang_5);
    {
      Info_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_6, 0) = ((MR_Box) (DumpOptions_7));
      MR_hl_field(MR_mktag(0), Info_6, 1) = ((MR_Box) (DumpOptions_7));
      MR_hl_field(MR_mktag(0), Info_6, 2) = ((MR_Box) (Ids_8));
      MR_hl_field(MR_mktag(0), Info_6, 3) = ((MR_Box) (Names_9));
      MR_hl_field(MR_mktag(0), Info_6, 4) = ((MR_Box) (MercInfo_10));
    }
    return Info_6;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.hlds_out.hlds_out_util.
