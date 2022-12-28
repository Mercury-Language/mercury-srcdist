/*
** Automatically generated from `hlds_out_util.m'
** by the Mercury compiler,
** version rotd-2022-12-28
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "term_context.mih"
#include "term_io.mih"
#include "term_subst.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0;

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

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_is_first_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_is_last_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_maybe_qualify_cons_id_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__748__1_3_p_0(
  MR_Char LambdaHeadVar__1_51,
  MR_String LambdaHeadVar__2_52,
  MR_String * LambdaHeadVar__3_53);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_7_p_0(
  MR_Integer Indent_8,
  MR_Word VarNamePrint_9,
  MR_Word TVarSet_10,
  MR_Word HeadVar__4_4,
  MR_Word Stream_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_lag_5_p_0(
  MR_Word Stream_6,
  MR_Integer H_7,
  MR_Word T_8);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(
  MR_Word IntConst_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
  MR_Word STATE_VARIABLE_First_0_1,
  MR_Word * STATE_VARIABLE_First_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Pieces_0_4,
  MR_Word * STATE_VARIABLE_Pieces_5);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer NumElementsBefore_7,
  MR_Integer * ElementNum_8,
  MR_Word * AfterContexts_9);

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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][9];


struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s {
  const MR_String hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[15];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[17][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of clause head:"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function result term of clause head:"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of functor"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "list element"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "#"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "type_info_cell_constructor"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[15] = {
  /* row   0 */   { (MR_String) "unsafe_type_cast" },
  /* row   1 */   { (MR_String) "unsafe_type_inst_cast" },
  /* row   2 */   { (MR_String) "equiv_type_cast" },
  /* row   3 */   { (MR_String) "exists_cast" },
  /* row   4 */   { (MR_String) "coerce expression" },
  /* row   5 */   { (MR_String) "unsafe_type_cast" },
  /* row   6 */   { (MR_String) "unsafe_type_inst_cast" },
  /* row   7 */   { (MR_String) "equiv_type_cast" },
  /* row   8 */   { (MR_String) "exists_cast" },
  /* row   9 */   { (MR_String) "coerce expression" },
  /* row  10 */   { (MR_String) "imported in the implementation" },
  /* row  11 */   { (MR_String) "imported in the interface" },
  /* row  12 */   { (MR_String) "imported by a module imported by an ancestor" },
  /* row  13 */   { (MR_String) "imported by an ancestor in its interface" },
  /* row  14 */   { (MR_String) "imported by an ancestor in its implementation" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



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
  (MR_String) "hoi_merc_out_info"
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "hlds_out_info",
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0 },
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0,

};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_is_first_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_first",
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0 },
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_is_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0,

};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_is_last_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_last",
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0 },
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_is_last_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0,

};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_maybe_qualify_cons_id_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "maybe_qualify_cons_id",
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0 },
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_maybe_qualify_cons_id_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0,

};

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__748__1_3_p_0(
  MR_Char LambdaHeadVar__1_51,
  MR_String LambdaHeadVar__2_52,
  MR_String * LambdaHeadVar__3_53)
{
  MR_bool succeeded = (LambdaHeadVar__1_51 == (MR_Char) 42);

  if (succeeded)
    mercury__string__append_3_p_2(LambdaHeadVar__2_52, (MR_String) "star", LambdaHeadVar__3_53);
  else
  {
    MR_String CharStr_20;

    mercury__string__char_to_string_2_p_0(LambdaHeadVar__1_51, &CharStr_20);
    mercury__string__append_3_p_2(LambdaHeadVar__2_52, CharStr_20, LambdaHeadVar__3_53);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
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

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

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

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_7_p_0(
  MR_Integer Indent_8,
  MR_Word VarNamePrint_9,
  MR_Word TVarSet_10,
  MR_Word HeadVar__4_4,
  MR_Word Stream_13)
{
  MR_Word Constraint_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Proof_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));

  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_8);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
  parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_10, VarNamePrint_9, Constraint_11, Stream_13);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ": ");
  if (((MR_tag((MR_Word) Proof_12)) == (MR_Integer) 0))
  {
    MR_Integer InstanceNum_15;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Proof_12, (MR_Integer) 0))));
    MR_String Var_35;

    InstanceNum_15 = (MR_Integer) (Var_25);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "apply instance decl #");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), InstanceNum_15, &Var_35);
    mercury__io__write_string_4_p_0(Stream_13, Var_35);
  }
  else
  {
    MR_Word Super_16 = ((MR_Word) ((MR_hl_field(1, Proof_12, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "super class of ");
    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_10, VarNamePrint_9, Super_16, Stream_13);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_4_p_0(
  MR_Word Stream_5,
  MR_Word IntList_6)
{
  if ((IntList_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "[]");
  else
  {
    MR_Integer H_8 = ((MR_Integer) ((MR_hl_field(1, IntList_6, (MR_Integer) 0))));
    MR_Word T_9 = ((MR_Word) ((MR_hl_field(1, IntList_6, (MR_Integer) 1))));

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "[");
    hlds__hlds_out__hlds_out_util__write_intlist_lag_5_p_0(Stream_5, H_8, T_9);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_lag_5_p_0(
  MR_Word Stream_6,
  MR_Integer H_7,
  MR_Word T_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_int_4_p_0(Stream_6, H_7);
    if (!((T_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer TH_10 = ((MR_Integer) ((MR_hl_field(1, T_8, (MR_Integer) 0))));
      MR_Word TT_11 = ((MR_Word) ((MR_hl_field(1, T_8, (MR_Integer) 1))));
      MR_Integer next_value_of_H_7;
      MR_Word next_value_of_T_8;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_H_7 = TH_10;
      next_value_of_T_8 = TT_11;
      H_7 = next_value_of_H_7;
      T_8 = next_value_of_T_8;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__typeclass_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

  if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
  {
    MR_Word InstModeImport_5 = ((MR_Unsigned) ((MR_hl_field(1, InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (InstModeImport_5) {
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
    MR_Word InstModeExport_4 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (InstModeExport_4) {
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

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

  if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
  {
    MR_Word InstModeImport_5 = ((MR_Unsigned) ((MR_hl_field(1, InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (InstModeImport_5) {
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
    MR_Word InstModeExport_4 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (InstModeExport_4) {
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

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
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
        MR_Word Status_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
        MR_String Var_10;
        MR_String Var_11;

        Var_11 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(Status_8);
        Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) ")");
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", Var_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

        HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[10 + Var_13]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
      }
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word VarNameSrc_8,
  MR_Word InstVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word HeadVar__5_5)
{
  MR_String HeadVar__6_6;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 0))));
  MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 1))));
  MR_String Var_13;
  MR_String Var_14;
  MR_String Var_16;

  Var_13 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_8, VarNamePrint_10, Var_11);
  Var_16 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(Lang_7, InstVarSet_9, Mode_12);
  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "::", Var_16);
  HeadVar__6_6 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
  return HeadVar__6_6;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  conv0_HeadVar__6_6 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word VarNameSrc_8,
  MR_Word InstVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word VarModes_11)
{
  MR_String Str_12;
  MR_Word Strs_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Lang_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarNameSrc_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (InstVarSet_9));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_10));
  }
  Strs_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, VarModes_11);
  Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", Strs_13);
  return Str_12;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_util__write_constraint_proof_7_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word VarNamePrint_10,
  MR_Word TVarSet_11,
  MR_Word ProofMap_12)
{
  MR_Word ProofsList_14;
  MR_Word Var_20;

  parse_tree__prog_out__write_indent_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Proofs: \n");
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_12, &ProofsList_14);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Indent_9));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (VarNamePrint_10));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (TVarSet_11));
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[0]), Var_20, (MR_String) "\n", ProofsList_14, Stream_8);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__3_53;

  hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__748__1_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_53);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_53));
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
  MR_Word VarTable_6,
  MR_Word Qual_7,
  MR_Word ConsId_8,
  MR_Word MaybeArgVars_9)
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
        MR_String Var_93;
        MR_String Var_94;
        MR_String Var_95;
        MR_String Var_97;
        MR_String Var_98;
        MR_Word PredProcId_129 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 2));
        MR_Integer PredId_130 = ((MR_Integer) ((MR_hl_field(0, PredProcId_129, (MR_Integer) 0))));
        MR_Integer ProcId_131 = ((MR_Integer) ((MR_hl_field(0, PredProcId_129, (MR_Integer) 1))));

        Var_94 = mercury__string__int_to_string_1_f_0(PredId_130);
        Var_98 = mercury__string__int_to_string_1_f_0(ProcId_131);
        Var_97 = mercury__string__f_43_43_2_f_0(Var_98, (MR_String) ">");
        Var_95 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_97);
        Var_93 = mercury__string__f_43_43_2_f_0(Var_94, Var_95);
        String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", Var_93);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_101;
            MR_String Var_102;
            MR_String Var_103;
            MR_String Var_105;
            MR_String Var_106;
            MR_Word PredProcId_132 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
            MR_Integer PredId_133 = ((MR_Integer) ((MR_hl_field(0, PredProcId_132, (MR_Integer) 0))));
            MR_Integer ProcId_134 = ((MR_Integer) ((MR_hl_field(0, PredProcId_132, (MR_Integer) 1))));

            Var_102 = mercury__string__int_to_string_1_f_0(PredId_133);
            Var_106 = mercury__string__int_to_string_1_f_0(ProcId_134);
            Var_105 = mercury__string__f_43_43_2_f_0(Var_106, (MR_String) ">");
            Var_103 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_105);
            Var_101 = mercury__string__f_43_43_2_f_0(Var_102, Var_103);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", Var_101);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_109;
            MR_String Var_110;
            MR_String Var_111;
            MR_String Var_113;
            MR_String Var_114;
            MR_Word PredProcId_135 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
            MR_Integer PredId_136 = ((MR_Integer) ((MR_hl_field(0, PredProcId_135, (MR_Integer) 0))));
            MR_Integer ProcId_137 = ((MR_Integer) ((MR_hl_field(0, PredProcId_135, (MR_Integer) 1))));

            Var_110 = mercury__string__int_to_string_1_f_0(PredId_136);
            Var_114 = mercury__string__int_to_string_1_f_0(ProcId_137);
            Var_113 = mercury__string__f_43_43_2_f_0(Var_114, (MR_String) ">");
            Var_111 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_113);
            Var_109 = mercury__string__f_43_43_2_f_0(Var_110, Var_111);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", Var_109);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SymName0_11 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
            MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
            MR_Word SymName_14;
            MR_String SymNameString0_15;
            MR_String SymNameString1_21;
            MR_String SymNameString_22;

            switch (Qual_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String Var_49;

                  Var_49 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_11);
                  {
                    SymName_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, SymName_14, 0) = ((MR_Box) (Var_49));
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
              MR_String Var_56;
              MR_String Var_58;

              Var_58 = mercury__string__int_to_string_1_f_0(Arity_12);
              Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_58);
              String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_56);
            }
            else
            {
              MR_Word ArgVars_23 = ((MR_Word) ((MR_hl_field(1, MaybeArgVars_9, (MR_Integer) 0))));

              if ((ArgVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_59;
                MR_String Var_61;

                Var_61 = mercury__string__int_to_string_1_f_0(Arity_12);
                Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_61);
                String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_59);
              }
              else
              {
                MR_String ArgStr_26;
                MR_String Var_62;
                MR_String Var_64;

                ArgStr_26 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(VarTable_6, ArgVars_23);
                Var_64 = mercury__string__f_43_43_2_f_0(ArgStr_26, (MR_String) ")");
                Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_64);
                String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_62);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Arity_125 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));

            if ((MaybeArgVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_67;

              Var_67 = mercury__string__int_to_string_1_f_0(Arity_125);
              String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_67);
            }
            else
            {
              MR_Word ArgVars_121 = ((MR_Word) ((MR_hl_field(1, MaybeArgVars_9, (MR_Integer) 0))));

              if ((ArgVars_121 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_69;

                Var_69 = mercury__string__int_to_string_1_f_0(Arity_125);
                String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_69);
              }
              else
              {
                MR_String Var_71;
                MR_String ArgStr_119;

                ArgStr_119 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(VarTable_6, ArgVars_121);
                Var_71 = mercury__string__f_43_43_2_f_0(ArgStr_119, (MR_String) "}");
                String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", Var_71);
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word PredProcId_34 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
            MR_Integer PredId_36 = ((MR_Integer) ((MR_hl_field(0, PredProcId_34, (MR_Integer) 0))));
            MR_Integer ProcId_37 = ((MR_Integer) ((MR_hl_field(0, PredProcId_34, (MR_Integer) 1))));
            MR_String Var_74;
            MR_String Var_75;
            MR_String Var_76;
            MR_String Var_78;
            MR_String Var_79;

            Var_75 = mercury__string__int_to_string_1_f_0(PredId_36);
            Var_79 = mercury__string__int_to_string_1_f_0(ProcId_37);
            Var_78 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) ">");
            Var_76 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", Var_78);
            Var_74 = mercury__string__f_43_43_2_f_0(Var_75, Var_76);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", Var_74);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_29 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));

            String_10 = hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(IntConst_29);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_30 = MR_unbox_float((MR_hl_field(3, ConsId_8, (MR_Integer) 1)));

            String_10 = mercury__string__float_to_string_1_f_0(Float_30);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_8, (MR_Integer) 1)));

            String_10 = mercury__term_io__quoted_char_1_f_0(CharConst_31);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String StringConst_32 = ((MR_String) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));

            String_10 = mercury__term_io__quoted_string_1_f_0(StringConst_32);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_33 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))) & (MR_Integer) 7);

            String_10 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_33);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Module_38 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
            MR_String Ctor_39 = ((MR_String) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
            MR_String Var_82;
            MR_String Var_83;
            MR_String Var_84;
            MR_String Var_86;
            MR_String Var_87;
            MR_String Var_89;
            MR_String Var_90;
            MR_Integer Arity_128 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 3))));

            Var_83 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_38);
            Var_90 = mercury__string__int_to_string_1_f_0(Arity_128);
            Var_89 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) ">");
            Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_89);
            Var_86 = mercury__string__f_43_43_2_f_0(Ctor_39, Var_87);
            Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_86);
            Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", Var_82);
          }
          break;
        case (MR_Integer) 11:
          String_10 = (MR_String) "<base_typeclass_info>";
          break;
        case (MR_Integer) 12:
          String_10 = (MR_String) "<type_info_const>";
          break;
        case (MR_Integer) 13:
          String_10 = (MR_String) "<typeclass_info_const>";
          break;
        case (MR_Integer) 14:
          String_10 = (MR_String) "<ground_term_const>";
          break;
      }
      break;
  }
  return String_10;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word VarNameSrc_8,
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
        Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[3]), ArgVars_11);
        break;
      case (MR_Integer) 1:
        Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[2]), ArgVars_11);
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ProcId_43;
          MR_Integer ProcIdInt_44;
          MR_Word Var_110;
          MR_String Var_112;
          MR_String Var_113;
          MR_String Var_114;
          MR_String Var_116;
          MR_String Var_117;
          MR_Word ShroudedPredProcId_143 = (MR_Word) (MR_body((MR_Word) (ConsId_10), (MR_Integer) 2));
          MR_Word PredId_144;

          Var_110 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_143);
          PredId_144 = ((MR_Word) ((MR_hl_field(0, Var_110, (MR_Integer) 0))));
          ProcId_43 = ((MR_Integer) ((MR_hl_field(0, Var_110, (MR_Integer) 1))));
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_43, &ProcIdInt_44);
          Var_113 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_7, PredId_144);
          Var_117 = mercury__string__int_to_string_1_f_0(ProcIdInt_44);
          Var_116 = mercury__string__f_43_43_2_f_0(Var_117, (MR_String) ")");
          Var_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_116);
          Var_112 = mercury__string__f_43_43_2_f_0(Var_113, Var_114);
          Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", Var_112);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_119;
              MR_String Var_121;
              MR_String Var_122;
              MR_String Var_123;
              MR_String Var_125;
              MR_String Var_126;
              MR_Word ShroudedPredProcId_145 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_Word PredId_146;
              MR_Integer ProcId_147;
              MR_Integer ProcIdInt_148;

              Var_119 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_145);
              PredId_146 = ((MR_Word) ((MR_hl_field(0, Var_119, (MR_Integer) 0))));
              ProcId_147 = ((MR_Integer) ((MR_hl_field(0, Var_119, (MR_Integer) 1))));
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_147, &ProcIdInt_148);
              Var_122 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_7, PredId_146);
              Var_126 = mercury__string__int_to_string_1_f_0(ProcIdInt_148);
              Var_125 = mercury__string__f_43_43_2_f_0(Var_126, (MR_String) "))");
              Var_123 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", Var_125);
              Var_121 = mercury__string__f_43_43_2_f_0(Var_122, Var_123);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", Var_121);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_128;
              MR_String Var_130;
              MR_String Var_131;
              MR_String Var_132;
              MR_String Var_134;
              MR_String Var_135;
              MR_Word ShroudedPredProcId_149 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_Word PredId_150;
              MR_Integer ProcId_151;
              MR_Integer ProcIdInt_152;

              Var_128 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_149);
              PredId_150 = ((MR_Word) ((MR_hl_field(0, Var_128, (MR_Integer) 0))));
              ProcId_151 = ((MR_Integer) ((MR_hl_field(0, Var_128, (MR_Integer) 1))));
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_151, &ProcIdInt_152);
              Var_131 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_7, PredId_150);
              Var_135 = mercury__string__int_to_string_1_f_0(ProcIdInt_152);
              Var_134 = mercury__string__f_43_43_2_f_0(Var_135, (MR_String) "))");
              Var_132 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", Var_134);
              Var_130 = mercury__string__f_43_43_2_f_0(Var_131, Var_132);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", Var_130);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));

              if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
              {
                MR_Word Module_16 = ((MR_Word) ((MR_hl_field(1, SymName_13, (MR_Integer) 0))));
                MR_String Name_17 = ((MR_String) ((MR_hl_field(1, SymName_13, (MR_Integer) 1))));
                MR_Word Var_45;

                {
                  Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_45, 0) = ((MR_Box) (Name_17));
                }
                Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(VarNameSrc_8, VarNamePrint_9, Module_16, Var_45, ArgVars_11);
              }
              else
              {
                MR_Word Var_47;
                MR_String Name_137 = ((MR_String) ((MR_hl_field(0, SymName_13, (MR_Integer) 0))));

                {
                  Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_47, 0) = ((MR_Box) (Name_137));
                }
                Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, Var_47, ArgVars_11);
              }
            }
            break;
          case (MR_Integer) 3:
            Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[1]), ArgVars_11);
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_24 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_Word PredId_26;
              MR_Word PredInfo_28;
              MR_Word PredModule_29;
              MR_String PredName_30;
              MR_Word PredSymName_31;
              MR_Word PredConsId_32;
              MR_Word Var_57;
              MR_Integer Var_58;
              MR_Word Var_59;
              MR_Word next_value_of_ConsId_10;

              Var_57 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_24);
              PredId_26 = ((MR_Word) ((MR_hl_field(0, Var_57, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_26, &PredInfo_28);
              PredModule_29 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_28);
              PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_28);
              {
                PredSymName_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PredSymName_31, 0) = ((MR_Box) (PredModule_29));
                MR_hl_field(1, PredSymName_31, 1) = ((MR_Box) (PredName_30));
              }
              Var_58 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0]), ArgVars_11);
              Var_59 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
              {
                PredConsId_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, PredConsId_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, PredConsId_32, 1) = ((MR_Box) (PredSymName_31));
                MR_hl_field(3, PredConsId_32, 2) = ((MR_Box) (Var_58));
                MR_hl_field(3, PredConsId_32, 3) = ((MR_Box) (Var_59));
              }
              // direct tailcall eliminated
              ;
              next_value_of_ConsId_10 = PredConsId_32;
              ConsId_10 = next_value_of_ConsId_10;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word IntConst_19 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));

              Str_12 = hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(IntConst_19);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float Float_20 = MR_unbox_float((MR_hl_field(3, ConsId_10, (MR_Integer) 1)));
              MR_Word Var_51;

              {
                Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_51, 1) = MR_box_float(Float_20);
              }
              Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_8, VarNamePrint_9, Var_51, ArgVars_11);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_10, (MR_Integer) 1)));
              MR_String Var_53;
              MR_String Var_54;

              Var_54 = mercury__term_io__quoted_char_1_f_0(Char_21);
              Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_53);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String String_22 = ((MR_String) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_56, 0) = ((MR_Box) (String_22));
              }
              Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_8, VarNamePrint_9, Var_56, ArgVars_11);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word IDCKind_23 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))) & (MR_Integer) 7);

              Str_12 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_23);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer Arity_33 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 3))));
              MR_String Var_61;
              MR_String Var_62;
              MR_String Var_63;
              MR_String Var_65;
              MR_String Var_66;
              MR_String Var_68;
              MR_String Var_69;
              MR_Word Module_138 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_String Name_139 = ((MR_String) ((MR_hl_field(3, ConsId_10, (MR_Integer) 2))));

              Var_62 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Module_138);
              Var_69 = mercury__string__int_to_string_1_f_0(Arity_33);
              Var_68 = mercury__string__f_43_43_2_f_0(Var_69, (MR_String) ")");
              Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_68);
              Var_65 = mercury__string__f_43_43_2_f_0(Name_139, Var_66);
              Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", Var_65);
              Var_61 = mercury__string__f_43_43_2_f_0(Var_62, Var_63);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", Var_61);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ClassId_34 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 2))));
              MR_String Instance_36 = ((MR_String) ((MR_hl_field(3, ConsId_10, (MR_Integer) 4))));
              MR_String Var_72;
              MR_String Var_73;
              MR_String Var_74;
              MR_String Var_76;
              MR_String Var_78;
              MR_String Var_79;
              MR_String Var_80;
              MR_String Var_82;
              MR_String Var_83;
              MR_String Var_84;
              MR_String Var_86;
              MR_Word Module_140 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_Word Name_141 = ((MR_Word) ((MR_hl_field(0, ClassId_34, (MR_Integer) 0))));
              MR_Integer Arity_142 = ((MR_Integer) ((MR_hl_field(0, ClassId_34, (MR_Integer) 1))));

              Var_73 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Module_140);
              Var_79 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(Name_141);
              Var_83 = mercury__string__int_to_string_1_f_0(Arity_142);
              Var_86 = mercury__string__f_43_43_2_f_0(Instance_36, (MR_String) ")");
              Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "), ", Var_86);
              Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
              Var_80 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_82);
              Var_78 = mercury__string__f_43_43_2_f_0(Var_79, Var_80);
              Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", Var_78);
              Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_76);
              Var_72 = mercury__string__f_43_43_2_f_0(Var_73, Var_74);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", Var_72);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer TIConstNum_38 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_String Var_95;
              MR_String Var_96;

              Var_96 = mercury__string__int_to_string_1_f_0(TIConstNum_38);
              Var_95 = mercury__string__f_43_43_2_f_0(Var_96, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", Var_95);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer TCIConstNum_39 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_String Var_99;
              MR_String Var_100;

              Var_100 = mercury__string__int_to_string_1_f_0(TCIConstNum_39);
              Var_99 = mercury__string__f_43_43_2_f_0(Var_100, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", Var_99);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer ConstNum_40 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
              MR_Word SubConsId_41 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 2))));
              MR_String SubStr_42;
              MR_String Var_104;
              MR_String Var_105;
              MR_String Var_106;
              MR_String Var_108;

              SubStr_42 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_7, VarNameSrc_8, VarNamePrint_9, SubConsId_41, (MR_Word) ((MR_Unsigned) 0U));
              Var_105 = mercury__string__int_to_string_1_f_0(ConstNum_40);
              Var_108 = mercury__string__f_43_43_2_f_0(SubStr_42, (MR_String) ")");
              Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_108);
              Var_104 = mercury__string__f_43_43_2_f_0(Var_105, Var_106);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", Var_104);
            }
            break;
        }
        break;
    }
    return Str_12;
    break;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(
  MR_Word IntConst_3)
{
  MR_String Str_4;
  MR_String BaseStr_5;
  MR_String Suffix_6;

  parse_tree__prog_out__int_const_to_string_and_suffix_3_p_0(IntConst_3, &BaseStr_5, &Suffix_6);
  Str_4 = mercury__string__f_43_43_2_f_0(BaseStr_5, Suffix_6);
  return Str_4;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word ModuleName_9,
  MR_Word Functor_10,
  MR_Word ArgTerms_11)
{
  MR_String Str_12;
  MR_String ModuleNameStr_13;
  MR_Word Term_14;
  MR_String TermStr_15;
  MR_Word Var_16;
  MR_String Var_18;

  ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_9);
  Var_16 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_14, 0) = ((MR_Box) (Functor_10));
    MR_hl_field(0, Term_14, 1) = ((MR_Box) (ArgTerms_11));
    MR_hl_field(0, Term_14, 2) = ((MR_Box) (Var_16));
  }
  TermStr_15 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_7, VarNamePrint_8, (MR_Integer) 0, Term_14);
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", TermStr_15);
  Str_12 = mercury__string__f_43_43_2_f_0(ModuleNameStr_13, Var_18);
  return Str_12;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word ModuleName_9,
  MR_Word Functor_10,
  MR_Word ArgVars_11)
{
  MR_String Str_12;
  MR_String ModuleNameStr_13;
  MR_String FunctorStr_14;
  MR_String Var_16;
  MR_Word ArgTerms_18;
  MR_Word Term_19;
  MR_Word Var_20;

  ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_9);
  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11, &ArgTerms_18);
  Var_20 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_19, 0) = ((MR_Box) (Functor_10));
    MR_hl_field(0, Term_19, 1) = ((MR_Box) (ArgTerms_18));
    MR_hl_field(0, Term_19, 2) = ((MR_Box) (Var_20));
  }
  FunctorStr_14 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_7, VarNamePrint_8, (MR_Integer) 0, Term_19);
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", FunctorStr_14);
  Str_12 = mercury__string__f_43_43_2_f_0(ModuleNameStr_13, Var_16);
  return Str_12;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Word Functor_10,
  MR_Word ArgVars_11)
{
  MR_String Str_12;
  MR_Word ArgTerms_13;
  MR_Word Term_14;
  MR_Word Var_15;

  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11, &ArgTerms_13);
  Var_15 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_14, 0) = ((MR_Box) (Functor_10));
    MR_hl_field(0, Term_14, 1) = ((MR_Box) (ArgTerms_13));
    MR_hl_field(0, Term_14, 2) = ((MR_Box) (Var_15));
  }
  Str_12 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_7, VarNamePrint_8, NextToGraphicToken_9, Term_14);
  return Str_12;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word Functor_8,
  MR_Word ArgVars_9)
{
  MR_String HeadVar__5_5;
  MR_Word ArgTerms_11;
  MR_Word Term_12;
  MR_Word Var_13;

  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, &ArgTerms_11);
  Var_13 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_12, 0) = ((MR_Box) (Functor_8));
    MR_hl_field(0, Term_12, 1) = ((MR_Box) (ArgTerms_11));
    MR_hl_field(0, Term_12, 2) = ((MR_Box) (Var_13));
  }
  HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_6, VarNamePrint_7, (MR_Integer) 1, Term_12);
  return HeadVar__5_5;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[5 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word GenericCallId_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    HeadVar__2_2 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(GenericCallId_4);
  }
  else
  {
    MR_Word PredCallId_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    HeadVar__2_2 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_1_f_0(PredCallId_3);
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__context_to_brief_string_1_f_0(
  MR_Word Context_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String FileName_5;
  MR_Integer LineNumber_6;

  FileName_5 = mercury__term_context__context_file_1_f_0(Context_3);
  LineNumber_6 = mercury__term_context__context_line_1_f_0(Context_3);
  succeeded = (strcmp(FileName_5, (MR_String) "") == 0);
  if (succeeded)
    Str_4 = (MR_String) "dummy context";
  else
  {
    MR_String Var_13;
    MR_String Var_21;
    MR_String Var_22;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), LineNumber_6, &Var_13);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) ">:", Var_13);
    Var_22 = mercury__string__f_43_43_2_f_0(FileName_5, Var_21);
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_22);
  }
  return Str_4;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_String Suffix_9,
  MR_Word Context_10)
{
  MR_bool succeeded;
  MR_String FileName_12;
  MR_Integer LineNumber_13;

  FileName_12 = mercury__term_context__context_file_1_f_0(Context_10);
  LineNumber_13 = mercury__term_context__context_line_1_f_0(Context_10);
  succeeded = (strcmp(FileName_12, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_String Var_32;

    parse_tree__prog_out__write_indent_4_p_0(Stream_7, Indent_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% context: file \"");
    mercury__io__write_string_4_p_0(Stream_7, FileName_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\", line ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), LineNumber_13, &Var_32);
    mercury__io__write_string_4_p_0(Stream_7, Var_32);
    mercury__io__write_string_4_p_0(Stream_7, Suffix_9);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(
  MR_Word UnifyContext_4,
  MR_Word STATE_VARIABLE_Pieces_0_7,
  MR_Word * STATE_VARIABLE_Pieces_8)
{
  MR_Word Var_6;

  hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 1, &Var_6, UnifyContext_4, STATE_VARIABLE_Pieces_0_7, STATE_VARIABLE_Pieces_8);
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(
  MR_Word STATE_VARIABLE_First_0_12,
  MR_Word * STATE_VARIABLE_First_13,
  MR_Word UnifyContext_7,
  MR_Word STATE_VARIABLE_Pieces_0_14,
  MR_Word * STATE_VARIABLE_Pieces_15)
{
  MR_Word MainContext_9 = ((MR_Word) ((MR_hl_field(0, UnifyContext_7, (MR_Integer) 0))));
  MR_Word RevSubContexts_10 = ((MR_Word) ((MR_hl_field(0, UnifyContext_7, (MR_Integer) 1))));
  MR_Word SubContexts_11;
  MR_Word STATE_VARIABLE_First_16_16;
  MR_Word STATE_VARIABLE_Pieces_17_17;

  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0), RevSubContexts_10, &SubContexts_11);
  switch (MR_tag((MR_Word) MainContext_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MainContext_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_First_16_16 = STATE_VARIABLE_First_0_12;
            STATE_VARIABLE_Pieces_17_17 = STATE_VARIABLE_Pieces_0_14;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Pieces_34_33;

            switch (STATE_VARIABLE_First_0_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Pieces_34_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Pieces_34_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
                break;
            }
            STATE_VARIABLE_First_16_16 = (MR_Integer) 1;
            STATE_VARIABLE_Pieces_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_34_33, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ArgNum_19 = ((MR_Integer) ((MR_hl_field(1, MainContext_9, (MR_Integer) 0))));
        MR_String ArgNumStr_20;
        MR_Word STATE_VARIABLE_Pieces_20_26;
        MR_Word Var_27;
        MR_Word Var_30;
        MR_Word Var_31;

        switch (STATE_VARIABLE_First_0_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Pieces_20_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Pieces_20_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
            break;
        }
        STATE_VARIABLE_First_16_16 = (MR_Integer) 1;
        ArgNumStr_20 = mercury__string__int_to_string_1_f_0(ArgNum_19);
        {
          Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_31, 0) = ((MR_Box) (ArgNumStr_20));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[7])));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[5])));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
        }
        STATE_VARIABLE_Pieces_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_20_26, Var_27);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallId_21 = ((MR_Word) ((MR_hl_field(2, MainContext_9, (MR_Integer) 0))));
        MR_Word Markers_22;
        MR_String ArgIdStr_23;
        MR_Word STATE_VARIABLE_Pieces_43_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Integer ArgNum_49 = ((MR_Integer) ((MR_hl_field(2, MainContext_9, (MR_Integer) 1))));

        switch (STATE_VARIABLE_First_0_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Pieces_43_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Pieces_43_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
            break;
        }
        STATE_VARIABLE_First_16_16 = (MR_Integer) 1;
        hlds__hlds_pred__init_markers_1_p_0(&Markers_22);
        ArgIdStr_23 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_21, ArgNum_49, Markers_22);
        {
          Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (ArgIdStr_23));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
        }
        STATE_VARIABLE_Pieces_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_43_35, Var_36);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String Source_24 = ((MR_String) ((MR_hl_field(3, MainContext_9, (MR_Integer) 0))));
        MR_String Msg_25;
        MR_Word STATE_VARIABLE_Pieces_54_39;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_String Var_55;

        switch (STATE_VARIABLE_First_0_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Pieces_54_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Pieces_54_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_14, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
            break;
        }
        Var_55 = mercury__string__f_43_43_2_f_0(Source_24, (MR_String) " unification:\n");
        Msg_25 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", Var_55);
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (Msg_25));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
        }
        STATE_VARIABLE_Pieces_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_54_39, Var_44);
        STATE_VARIABLE_First_16_16 = STATE_VARIABLE_First_0_12;
      }
      break;
  }
  hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(STATE_VARIABLE_First_16_16, STATE_VARIABLE_First_13, SubContexts_11, STATE_VARIABLE_Pieces_17_17, STATE_VARIABLE_Pieces_15);
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
      MR_Word SubContext_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word SubContexts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ElementNum_16;
      MR_Word AfterContexts_17;

      succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(HeadVar__3_3, (MR_Integer) 0, &ElementNum_16, &AfterContexts_17);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Pieces_24_24;
        MR_String ElementNumStr_30;
        MR_Word STATE_VARIABLE_Pieces_11_31;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_Pieces_0_4;

        switch (STATE_VARIABLE_First_0_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Pieces_11_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_4, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Pieces_11_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_4, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
            break;
        }
        ElementNumStr_30 = mercury__string__int_to_string_1_f_0(ElementNum_16);
        {
          Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_39, 0) = ((MR_Box) (ElementNumStr_30));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[12])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[11])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_11_31, Var_32);
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
        MR_Word ConsId_52;
        MR_Integer ArgNum_53;
        MR_String ArgNumStr_54;
        MR_String ConsIdStr_55;
        MR_Word STATE_VARIABLE_Pieces_14_56;
        MR_Word Var_57;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_Pieces_0_4;

        switch (STATE_VARIABLE_First_0_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Pieces_14_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_4, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Pieces_14_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_0_4, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
            break;
        }
        ConsId_52 = ((MR_Word) ((MR_hl_field(0, SubContext_13, (MR_Integer) 0))));
        ArgNum_53 = ((MR_Integer) ((MR_hl_field(0, SubContext_13, (MR_Integer) 1))));
        ArgNumStr_54 = mercury__string__int_to_string_1_f_0(ArgNum_53);
        ConsIdStr_55 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_52);
        {
          Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_61, 0) = ((MR_Box) (ArgNumStr_54));
        }
        {
          Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_66, 1) = ((MR_Box) (ConsIdStr_55));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[10])));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_out__hlds_out_util_scalar_common_1[5])));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
        }
        STATE_VARIABLE_Pieces_28_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_Pieces_14_56, Var_57);
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
      SubContext_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      SubContexts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      ConsId_10 = ((MR_Word) ((MR_hl_field(0, SubContext_5, (MR_Integer) 0))));
      ArgNum_11 = ((MR_Integer) ((MR_hl_field(0, SubContext_5, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Functor_12 = ((MR_Word) ((MR_hl_field(3, ConsId_10, (MR_Integer) 1))));
        Var_15 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 2))));
        succeeded = (Var_15 == (MR_Integer) 2);
        if (succeeded)
        {
          if (((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 1))
          {
            MR_Word ModuleSymName_14 = ((MR_Word) ((MR_hl_field(1, Functor_12, (MR_Integer) 0))));
            MR_String Var_17 = ((MR_String) ((MR_hl_field(1, Functor_12, (MR_Integer) 1))));
            MR_String Var_18;
            MR_String Var_21;

            succeeded = (strcmp(Var_17, (MR_String) "[|]") == 0);
            if (succeeded)
            {
              Var_18 = (MR_String) "list";
              succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_14, &Var_21);
              if (succeeded)
                succeeded = (strcmp(Var_18, Var_21) == 0);
            }
          }
          else
          {
            MR_String Var_16 = ((MR_String) ((MR_hl_field(0, Functor_12, (MR_Integer) 0))));

            succeeded = (strcmp(Var_16, (MR_String) "[|]") == 0);
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

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
  MR_Word CallId_5,
  MR_Integer ArgNum_6,
  MR_Word PredMarkers_7)
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
      MR_Word GenericCallId_25 = ((MR_Word) ((MR_hl_field(1, CallId_5, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GenericCallId_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer PredFormArityInt_27;
            MR_Word PredOrFunc_59 = ((MR_Unsigned) ((MR_hl_field(0, GenericCallId_25, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word PredFormArity_60 = ((MR_Word) ((MR_hl_field(0, GenericCallId_25, (MR_Integer) 1))));

            PredFormArityInt_27 = (MR_Integer) (PredFormArity_60);
            succeeded = (PredOrFunc_59 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (ArgNum_6 == PredFormArityInt_27);
            if (succeeded)
              Var_15 = (MR_String) "the return value";
            else
            {
              MR_String Main_28;
              MR_String PredOrFuncStr_29;
              MR_String Expl_30;
              MR_String Var_37;
              MR_String Var_48;
              MR_String Var_50;

              Var_37 = mercury__string__int_to_string_1_f_0(ArgNum_6);
              Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_37);
              PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_59);
              succeeded = (ArgNum_6 == (MR_Integer) 1);
              if (succeeded)
              {
                MR_String Var_39;

                Var_39 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_29, (MR_String) " term");
                Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", Var_39);
              }
              else
              {
                MR_String Var_42;
                MR_String Var_43;
                MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) ArgNum_6 - (MR_Unsigned) 1);
                MR_String Var_46;

                Var_43 = mercury__string__int_to_string_1_f_0(Var_44);
                Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", PredOrFuncStr_29);
                Var_42 = mercury__string__f_43_43_2_f_0(Var_43, Var_46);
                Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_42);
              }
              Var_50 = mercury__string__f_43_43_2_f_0(Expl_30, (MR_String) ")");
              Var_48 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", Var_50);
              Var_15 = mercury__string__f_43_43_2_f_0(Main_28, Var_48);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_68;

            Var_68 = mercury__string__int_to_string_1_f_0(ArgNum_6);
            Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_68);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_70;

            Var_70 = mercury__string__int_to_string_1_f_0(ArgNum_6);
            Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_70);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(3, GenericCallId_25, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (Var_71) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_String Var_64;

                  Var_64 = mercury__string__int_to_string_1_f_0(ArgNum_6);
                  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_64);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_66;

                  Var_66 = mercury__string__int_to_string_1_f_0(ArgNum_6);
                  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_66);
                }
                break;
              case (MR_Integer) 4:
                {
                  succeeded = (ArgNum_6 == (MR_Integer) 2);
                  if (succeeded)
                    Var_15 = (MR_String) "the result";
                  else
                    Var_15 = (MR_String) "the argument";
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String Var_57;

                  Var_57 = mercury__string__int_to_string_1_f_0(ArgNum_6);
                  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_57);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_62;

                  Var_62 = mercury__string__int_to_string_1_f_0(ArgNum_6);
                  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_62);
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word PFSymNameArity_20 = ((MR_Word) ((MR_hl_field(0, CallId_5, (MR_Integer) 0))));
      MR_Word PredOrFunc_21 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_20, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word PredFormArity_23 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_20, (MR_Integer) 2))));
      MR_Integer Arity_24 = (MR_Integer) (PredFormArity_23);

      succeeded = (PredOrFunc_21 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (Arity_24 == ArgNum_6);
      if (succeeded)
        Var_15 = (MR_String) "the return value";
      else
      {
        MR_String Var_35;

        Var_35 = mercury__string__int_to_string_1_f_0(ArgNum_6);
        Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", Var_35);
      }
    }
    Str1_9 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) " of ");
  }
  {
    MR_Word GenericCallId_10;

    succeeded = ((MR_tag((MR_Word) CallId_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      GenericCallId_10 = ((MR_Word) ((MR_hl_field(1, CallId_5, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) GenericCallId_10)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
    }
  }
  if (!(succeeded))
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_7, (MR_Integer) 13);
  if (succeeded)
    Str2_13 = Str1_9;
  else
    Str2_13 = mercury__string__f_43_43_2_f_0(Str1_9, (MR_String) "call to ");
  if (((MR_tag((MR_Word) CallId_5)) == (MR_Integer) 1))
  {
    MR_Word GenericCallId_73 = ((MR_Word) ((MR_hl_field(1, CallId_5, (MR_Integer) 0))));

    Var_19 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(GenericCallId_73);
  }
  else
  {
    MR_Word PredCallId_72 = ((MR_Word) ((MR_hl_field(0, CallId_5, (MR_Integer) 0))));

    Var_19 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_1_f_0(PredCallId_72);
  }
  Str_8 = mercury__string__f_43_43_2_f_0(Str2_13, Var_19);
  return Str_8;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Purity_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
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
        MR_Word MethodId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

        HeadVar__2_2 = parse_tree__prog_out__pf_sym_name_pred_form_arity_to_string_1_f_0(MethodId_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_14 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));

        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", EventName_14);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

        HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[0 + CastType_16]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
      }
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_dev_string_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_String Str_8;
  MR_Integer ModeNum_9;
  MR_String Var_10;
  MR_String Var_11;
  MR_String Var_13;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_9);
  Var_10 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_5, PredId_6);
  Var_13 = mercury__string__int_to_string_1_f_0(ModeNum_9);
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_13);
  Str_8 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
  return Str_8;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;
  MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer ModeNum_7;
  MR_String Var_8;
  MR_String Var_9;
  MR_String Var_11;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_6, &ModeNum_7);
  Var_8 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_4, PredId_5);
  Var_11 = mercury__string__int_to_string_1_f_0(ModeNum_7);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_11);
  HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  return HeadVar__3_3;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_Word PredIdTable_7;
  MR_Word PredInfo_8;
  MR_Box conv0_PredInfo_8;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_4, &PredIdTable_7);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_7, ((MR_Box) (PredId_5)), &conv0_PredInfo_8);
  if (succeeded)
  {
    PredInfo_8 = ((MR_Word) (conv0_PredInfo_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredOrigin_9;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &PredOrigin_9);
    Str_6 = hlds__pred_name__pred_origin_to_user_string_1_f_0(PredOrigin_9);
  }
  else
  {
    MR_Integer PredIdInt_10;
    MR_String Var_12;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredIdInt_10);
    Var_12 = mercury__string__int_to_string_1_f_0(PredIdInt_10);
    Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", Var_12);
  }
  return Str_6;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_user_string_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_String Str_8;
  MR_Integer ModeNum_9;
  MR_String Var_10;
  MR_String Var_11;
  MR_String Var_13;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_9);
  Var_10 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_5, PredId_6);
  Var_13 = mercury__string__int_to_string_1_f_0(ModeNum_9);
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_13);
  Str_8 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
  return Str_8;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_user_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;
  MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer ModeNum_7;
  MR_String Var_8;
  MR_String Var_9;
  MR_String Var_11;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_6, &ModeNum_7);
  Var_8 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_4, PredId_5);
  Var_11 = mercury__string__int_to_string_1_f_0(ModeNum_7);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_11);
  HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  return HeadVar__3_3;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_Word PredIdTable_7;
  MR_Word PredInfo_8;
  MR_Box conv0_PredInfo_8;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_4, &PredIdTable_7);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_7, ((MR_Box) (PredId_5)), &conv0_PredInfo_8);
  if (succeeded)
  {
    PredInfo_8 = ((MR_Word) (conv0_PredInfo_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredOrigin_9;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &PredOrigin_9);
    Str_6 = hlds__pred_name__pred_origin_to_user_string_1_f_0(PredOrigin_9);
  }
  else
  {
    MR_Integer PredIdInt_10;
    MR_String Var_12;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredIdInt_10);
    Var_12 = mercury__string__int_to_string_1_f_0(PredIdInt_10);
    Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", Var_12);
  }
  return Str_6;
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(
  MR_Word Globals_4,
  MR_Word Lang_5)
{
  MR_Word Info_6;
  MR_String DumpOptions_7;
  MR_Word Ids_8;
  MR_Word Names_9;
  MR_Word MercInfo_10;

  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 198, &DumpOptions_7);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 192, &Ids_8);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 193, &Names_9);
  MercInfo_10 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_4, (MR_Integer) 0, Lang_5);
  {
    Info_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_6, 0) = ((MR_Box) (DumpOptions_7));
    MR_hl_field(0, Info_6, 1) = ((MR_Box) (DumpOptions_7));
    MR_hl_field(0, Info_6, 2) = ((MR_Box) (Ids_8));
    MR_hl_field(0, Info_6, 3) = ((MR_Box) (Names_9));
    MR_hl_field(0, Info_6, 4) = ((MR_Box) (MercInfo_10));
  }
  return Info_6;
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
