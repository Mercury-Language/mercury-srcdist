/*
** Automatically generated from `hlds_out_type_table.m'
** by the Mercury compiler,
** version rotd-2024-05-15
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


// :- module hlds.hlds_out.hlds_out_type_table.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_type_table__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_type_table.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_item.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_out_type_repn.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_type_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__type_table_entry_is_local_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_type_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_type_table_entries_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_3,
  MR_Word * STATE_VARIABLE_State_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_98_111_100_121_95_95_91_50_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word TypeBody_9,
  MR_Word TVarSet_10,
  MR_Word STATE_VARIABLE_State_0_74,
  MR_Word * STATE_VARIABLE_State_75);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructor_repns_4_p_0(
  MR_Word TVarSet_5,
  MR_Word CtorRepns_6,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructor_repns_loop_6_p_0(
  MR_Word TVarSet_7,
  MR_String ArrowOrSemi0_8,
  MR_Word HeadCtorRepn_9,
  MR_Word TailCtorRepns_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_repn_4_p_0(
  MR_Word TVarSet_5,
  MR_Word CtorRepn_6,
  MR_Word STATE_VARIABLE_State_0_29,
  MR_Word * STATE_VARIABLE_State_30);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(
  MR_Word ConsTag_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__local_sectag_to_string_1_f_0(
  MR_Word LocalSectag_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_type_table__does_any_arg_repn_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_arg_repns_8_p_0(
  MR_Word TVarSet_9,
  MR_String IndentStr_10,
  MR_Word AnyFieldName_11,
  MR_Integer CurArgNum_12,
  MR_Word HeadArgRepn_13,
  MR_Word TailArgRepns_14,
  MR_Word STATE_VARIABLE_State_0_25,
  MR_Word * STATE_VARIABLE_State_26);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_arg_pos_width_5_p_0(
  MR_String IndentStr_6,
  MR_Integer CurArgNum_7,
  MR_Word ArgPosWidth_8,
  MR_Word STATE_VARIABLE_State_0_25,
  MR_Word * STATE_VARIABLE_State_26);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__fill_kind_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructors_5_p_0(
  MR_Word TVarSet_6,
  MR_Word HeadCtor_7,
  MR_Word TailCtors_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructors_loop_6_p_0(
  MR_Word TVarSet_7,
  MR_String ArrowOrSemi0_8,
  MR_Word HeadCtor_9,
  MR_Word TailCtors_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_4_p_0(
  MR_Word TVarSet_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_type_table__does_any_arg_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_args_7_p_0(
  MR_Word TVarSet_8,
  MR_String IndentStr_9,
  MR_Word AnyFieldName_10,
  MR_Word HeadArg_11,
  MR_Word TailArgs_12,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(
  MR_Word ForeignTypeAssertions_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(
  MR_Word MaybeCanonical_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_type_table__unqual_cons_id_1_f_0(
  MR_Word ConsId_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_comma_type_params_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_3,
  MR_Word * STATE_VARIABLE_State_4);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_1[4][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_2[3][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_4[2][1];


struct hlds__hlds_out__hlds_out_type_table__vector_common_type_5_0_s {
  const MR_String hlds__hlds_out__hlds_out_type_table__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_type_table__vector_common_type_5_0_s hlds__hlds_out__hlds_out_type_table_vector_common_5[8];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_type_table__format_type_table_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_2[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_4[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
};


static /* final */ const struct hlds__hlds_out__hlds_out_type_table__vector_common_type_5_0_s hlds__hlds_out__hlds_out_type_table_vector_common_5[8] = {
  /* row   0 */   { (MR_String) "enum" },
  /* row   1 */   { (MR_String) "int8" },
  /* row   2 */   { (MR_String) "int16" },
  /* row   3 */   { (MR_String) "int32" },
  /* row   4 */   { (MR_String) "uint8" },
  /* row   5 */   { (MR_String) "uint16" },
  /* row   6 */   { (MR_String) "uint32" },
  /* row   7 */   { (MR_String) "char21" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_type_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__type_table_entry_is_local_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word TypeDefn_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word TypeStatus_4;
  MR_Word Var_5;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_3, &TypeStatus_4);
  Var_5 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_4);
  succeeded = (Var_5 == (MR_Integer) 1);
  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_type_table_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word LocalOnly_9,
  MR_Word TypeTable_10)
{
  MR_Word State0_12;
  MR_Word State_13;
  MR_String Str_14;

  State0_12 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_type_table__format_type_table_5_p_0(Info_7, LocalOnly_9, TypeTable_10, State0_12, &State_13);
  Str_14 = mercury__string__builder__to_string_1_f_0(State_13);
  mercury__io__write_string_4_p_0(Stream_8, Str_14);
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_type_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_out__hlds_out_type_table__type_table_entry_is_local_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_type_table_5_p_0(
  MR_Word Info_6,
  MR_Word LocalOnly_7,
  MR_Word TypeTable_8,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_bool succeeded;
  MR_Word TypeAssocList_10;
  MR_Word SortedTypeAssocList_11;
  MR_Word PrintedTypeAssocList_12;
  MR_Word STATE_VARIABLE_State_16_16;
  MR_Word STATE_VARIABLE_State_18_18;

  mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Types --------\n", STATE_VARIABLE_State_0_13, &STATE_VARIABLE_State_16_16);
  hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_8, &TypeAssocList_10);
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[0]), TypeAssocList_10, &SortedTypeAssocList_11);
  switch (LocalOnly_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PrintedTypeAssocList_12 = SortedTypeAssocList_11;
      break;
    case (MR_Integer) 1:
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[0]), (MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[3]), SortedTypeAssocList_11, &PrintedTypeAssocList_12);
      break;
  }
  hlds__hlds_out__hlds_out_type_table__format_type_table_entries_4_p_0(Info_6, PrintedTypeAssocList_12, STATE_VARIABLE_State_16_16, &STATE_VARIABLE_State_18_18);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_18_18, STATE_VARIABLE_State_14);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_type_table_entries_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_3,
  MR_Word * STATE_VARIABLE_State_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_4 = STATE_VARIABLE_State_0_3;
    else
    {
      MR_Word Type_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_15_15;
      MR_Word TypeCtor_16 = ((MR_Word) ((MR_hl_field(0, Type_10, (MR_Integer) 0))));
      MR_Word TypeDefn_17 = ((MR_Word) ((MR_hl_field(0, Type_10, (MR_Integer) 1))));
      MR_Word TVarSet_18;
      MR_Word TypeParams_19;
      MR_Word TypeBody_20;
      MR_Word TypeStatus_21;
      MR_Word Context_22;
      MR_String DumpOptions_23;
      MR_Word STATE_VARIABLE_State_19_26;
      MR_Word STATE_VARIABLE_State_22_29;
      MR_Word STATE_VARIABLE_State_26_33;
      MR_Word STATE_VARIABLE_State_32_39;
      MR_Word STATE_VARIABLE_State_36_42;
      MR_Word STATE_VARIABLE_State_37_43;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_State_0_3;

      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_17, &TVarSet_18);
      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_17, &TypeParams_19);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_17, &TypeBody_20);
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_17, &TypeStatus_21);
      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_17, &Context_22);
      mercury__string__builder__append_char_3_p_0((MR_Char) 10, STATE_VARIABLE_State_0_3, &STATE_VARIABLE_State_19_26);
      hlds__hlds_out__hlds_out_util__maybe_format_context_comment_5_p_0((MR_Unsigned) 0U, (MR_String) "", Context_22, STATE_VARIABLE_State_19_26, &STATE_VARIABLE_State_22_29);
      DumpOptions_23 = ((MR_String) ((MR_hl_field(0, Info_1, (MR_Integer) 0))));
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_23, (MR_Char) 99);
      if (succeeded)
      {
        MR_String Var_35;
        MR_Word Var_49;
        MR_Word Var_51;

        Var_35 = hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(TypeStatus_21);
        mercury__string__builder__append_string_3_p_0((MR_String) "% status ", STATE_VARIABLE_State_22_29, &Var_49);
        mercury__string__builder__append_string_3_p_0(Var_35, Var_49, &Var_51);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_51, &STATE_VARIABLE_State_26_33);
      }
      else
        STATE_VARIABLE_State_26_33 = STATE_VARIABLE_State_22_29;
      if (((((MR_tag((MR_Word) TypeBody_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_20, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, TypeBody_20, (MR_Integer) 1))));

        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 12U));
      }
      else
      if (((((MR_tag((MR_Word) TypeBody_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_20, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
        mercury__string__builder__append_string_3_p_0((MR_String) ":- solver type ", STATE_VARIABLE_State_26_33, &STATE_VARIABLE_State_32_39);
      else
        mercury__string__builder__append_string_3_p_0((MR_String) ":- type ", STATE_VARIABLE_State_26_33, &STATE_VARIABLE_State_32_39);
      parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), TypeCtor_16, STATE_VARIABLE_State_32_39, &STATE_VARIABLE_State_36_42);
      if ((TypeParams_19 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_State_37_43 = STATE_VARIABLE_State_36_42;
      else
      {
        MR_Word HeadParam_53 = ((MR_Word) ((MR_hl_field(1, TypeParams_19, (MR_Integer) 0))));
        MR_Word TailParams_54 = ((MR_Word) ((MR_hl_field(1, TypeParams_19, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_State_13_56;
        MR_Word STATE_VARIABLE_State_16_59;
        MR_Word STATE_VARIABLE_State_17_60;

        mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_36_42, &STATE_VARIABLE_State_13_56);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), TVarSet_18, (MR_Integer) 0, HeadParam_53, STATE_VARIABLE_State_13_56, &STATE_VARIABLE_State_16_59);
        hlds__hlds_out__hlds_out_type_table__format_comma_type_params_loop_4_p_0(TVarSet_18, TailParams_54, STATE_VARIABLE_State_16_59, &STATE_VARIABLE_State_17_60);
        mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_17_60, &STATE_VARIABLE_State_37_43);
      }
      hlds__hlds_out__hlds_out_type_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_98_111_100_121_95_95_91_50_93_95_48_6_p_0(Info_1, TypeBody_20, TVarSet_18, STATE_VARIABLE_State_37_43, &STATE_VARIABLE_State_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Types_11;
      next_value_of_STATE_VARIABLE_State_0_3 = STATE_VARIABLE_State_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_State_0_3 = next_value_of_STATE_VARIABLE_State_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_98_111_100_121_95_95_91_50_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word TypeBody_9,
  MR_Word TVarSet_10,
  MR_Word STATE_VARIABLE_State_0_74,
  MR_Word * STATE_VARIABLE_State_75)
{
  MR_String IndentStr_13;

  IndentStr_13 = libs__indent__indent2_string_1_f_0((MR_Unsigned) 1U);
  switch (MR_tag((MR_Word) TypeBody_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_14 = (MR_Word) ((MR_Word) (TypeBody_9));
        MR_Word Ctors_15 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_14, (MR_Integer) 0))));
        MR_Word MaybeSuperType_16 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_14, (MR_Integer) 1))));
        MR_Word MaybeUserEqComp_17 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_14, (MR_Integer) 2))));
        MR_Word MaybeRepn_18 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_14, (MR_Integer) 3))));
        MR_Word Foreign_19 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_14, (MR_Integer) 4))));
        MR_Word MercInfo_23;
        MR_Word STATE_VARIABLE_State_77_77;
        MR_Word STATE_VARIABLE_State_81_81;

        mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_0_74, &STATE_VARIABLE_State_77_77);
        if ((MaybeSuperType_16 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_81_81 = STATE_VARIABLE_State_77_77;
        else
        {
          MR_Word SuperType_20 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_16, (MR_Integer) 0))));
          MR_String SuperTypeStr_21;
          MR_Word Var_316;
          MR_Word Var_317;
          MR_Word Var_319;

          SuperTypeStr_21 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_10, (MR_Integer) 0, SuperType_20);
          mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_77_77, &Var_316);
          mercury__string__builder__append_string_3_p_0((MR_String) "% subtype of ", Var_316, &Var_317);
          mercury__string__builder__append_string_3_p_0(SuperTypeStr_21, Var_317, &Var_319);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_319, &STATE_VARIABLE_State_81_81);
        }
        MercInfo_23 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 4))));
        if ((MaybeRepn_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word HeadCtor_24 = ((MR_Word) ((MR_hl_field(0, Ctors_15, (MR_Integer) 0))));
          MR_Word TailCtors_25 = ((MR_Word) ((MR_hl_field(0, Ctors_15, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_State_86_86;
          MR_Word STATE_VARIABLE_State_88_88;
          MR_Word Var_369;

          hlds__hlds_out__hlds_out_type_table__format_constructors_5_p_0(TVarSet_10, HeadCtor_24, TailCtors_25, STATE_VARIABLE_State_81_81, &STATE_VARIABLE_State_86_86);
          parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), MercInfo_23, TVarSet_10, (MR_Word) ((MR_Unsigned) 0U), MaybeUserEqComp_17, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_86_86, &STATE_VARIABLE_State_88_88);
          mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_88_88, &Var_369);
          mercury__string__builder__append_string_3_p_0((MR_String) "% no type representation information yet\n", Var_369, STATE_VARIABLE_State_75);
        }
        else
        {
          MR_Word Repn_27 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_18, (MR_Integer) 0))));
          MR_Word CtorRepns_28 = ((MR_Word) ((MR_hl_field(0, Repn_27, (MR_Integer) 0))));
          MR_Word CheaperTagTest_30 = ((MR_Word) ((MR_hl_field(0, Repn_27, (MR_Integer) 2))));
          MR_Word DuTypeKind_31 = ((MR_Word) ((MR_hl_field(0, Repn_27, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_State_94_94;
          MR_Word STATE_VARIABLE_State_126_126;
          MR_Word STATE_VARIABLE_State_134_134;
          MR_Word STATE_VARIABLE_State_169_169;
          MR_Word MaybeDirectArgCtors_251 = ((MR_Word) ((MR_hl_field(0, Repn_27, (MR_Integer) 4))));

          hlds__hlds_out__hlds_out_type_table__format_constructor_repns_4_p_0(TVarSet_10, CtorRepns_28, STATE_VARIABLE_State_81_81, &STATE_VARIABLE_State_94_94);
          if ((CheaperTagTest_30 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_State_126_126 = STATE_VARIABLE_State_94_94;
          else
          {
            MR_Word ExpConsId_32 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_30, (MR_Integer) 0))));
            MR_Word ExpConsTag_33 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_30, (MR_Integer) 1))));
            MR_Word CheapConsId_34 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_30, (MR_Integer) 2))));
            MR_Word CheapConsTag_35 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_30, (MR_Integer) 3))));
            MR_String ExpConsIdStr_36;
            MR_String CheapConsIdStr_37;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word STATE_VARIABLE_State_99_99;
            MR_Word STATE_VARIABLE_State_104_104;
            MR_Word STATE_VARIABLE_State_111_111;
            MR_String Var_115;
            MR_Word STATE_VARIABLE_State_119_119;
            MR_String Var_130;
            MR_Word Var_321;
            MR_Word Var_323;
            MR_Word Var_324;
            MR_Word Var_326;
            MR_Word Var_328;
            MR_Word Var_329;
            MR_Word Var_331;
            MR_Word Var_333;
            MR_Word Var_334;
            MR_Word Var_336;
            MR_Word Var_338;
            MR_Word Var_339;
            MR_Word Var_341;

            Var_95 = hlds__hlds_out__hlds_out_type_table__unqual_cons_id_1_f_0(ExpConsId_32);
            ExpConsIdStr_36 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(Var_95);
            Var_96 = hlds__hlds_out__hlds_out_type_table__unqual_cons_id_1_f_0(CheapConsId_34);
            CheapConsIdStr_37 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(Var_96);
            mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_94_94, &Var_321);
            mercury__string__builder__append_string_3_p_0((MR_String) "% cheaper tag test:\n", Var_321, &STATE_VARIABLE_State_99_99);
            mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_99_99, &Var_323);
            mercury__string__builder__append_string_3_p_0((MR_String) "%   from ", Var_323, &Var_324);
            mercury__string__builder__append_string_3_p_0(ExpConsIdStr_36, Var_324, &Var_326);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_326, &STATE_VARIABLE_State_104_104);
            Var_115 = hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(ExpConsTag_33);
            mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_104_104, &Var_328);
            mercury__string__builder__append_string_3_p_0((MR_String) "%      ", Var_328, &Var_329);
            mercury__string__builder__append_string_3_p_0(Var_115, Var_329, &Var_331);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_331, &STATE_VARIABLE_State_111_111);
            mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_111_111, &Var_333);
            mercury__string__builder__append_string_3_p_0((MR_String) "%   to ", Var_333, &Var_334);
            mercury__string__builder__append_string_3_p_0(CheapConsIdStr_37, Var_334, &Var_336);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_336, &STATE_VARIABLE_State_119_119);
            Var_130 = hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(CheapConsTag_35);
            mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_119_119, &Var_338);
            mercury__string__builder__append_string_3_p_0((MR_String) "%      ", Var_338, &Var_339);
            mercury__string__builder__append_string_3_p_0(Var_130, Var_339, &Var_341);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_341, &STATE_VARIABLE_State_126_126);
          }
          switch (MR_tag((MR_Word) DuTypeKind_31)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_31)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_354;

                    mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_126_126, &Var_354);
                    mercury__string__builder__append_string_3_p_0((MR_String) "% KIND enumeration\n", Var_354, &STATE_VARIABLE_State_134_134);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_363;

                    mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_126_126, &Var_363);
                    mercury__string__builder__append_string_3_p_0((MR_String) "% KIND dummy\n", Var_363, &STATE_VARIABLE_State_134_134);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_356;

                    mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_126_126, &Var_356);
                    mercury__string__builder__append_string_3_p_0((MR_String) "% KIND general\n", Var_356, &STATE_VARIABLE_State_134_134);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lang_38 = ((MR_Unsigned) ((MR_hl_field(1, DuTypeKind_31, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_String Var_143;
                MR_Word Var_358;
                MR_Word Var_359;
                MR_Word Var_361;

                Var_143 = libs__globals__foreign_language_string_1_f_0(Lang_38);
                mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_126_126, &Var_358);
                mercury__string__builder__append_string_3_p_0((MR_String) "% KIND foreign enumeration for ", Var_358, &Var_359);
                mercury__string__builder__append_string_3_p_0(Var_143, Var_359, &Var_361);
                mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_361, &STATE_VARIABLE_State_134_134);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word FunctorName_39 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_31, (MR_Integer) 0))));
                MR_Word ArgType_40 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_31, (MR_Integer) 1))));
                MR_Word MaybeArgName_41 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_31, (MR_Integer) 2))));
                MR_String ArgTypeStr_42;
                MR_String ArgName_43;
                MR_String Var_157;
                MR_Word Var_343;
                MR_Word Var_344;
                MR_Word Var_346;
                MR_Word Var_347;
                MR_Word Var_349;
                MR_Word Var_350;
                MR_Word Var_352;

                ArgTypeStr_42 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_10, (MR_Integer) 0, ArgType_40);
                if ((MaybeArgName_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  ArgName_43 = (MR_String) "no arg name";
                else
                  ArgName_43 = ((MR_String) ((MR_hl_field(1, MaybeArgName_41, (MR_Integer) 0))));
                Var_157 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(FunctorName_39);
                mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_126_126, &Var_343);
                mercury__string__builder__append_string_3_p_0((MR_String) "% KIND notag: ", Var_343, &Var_344);
                mercury__string__builder__append_string_3_p_0(Var_157, Var_344, &Var_346);
                mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_346, &Var_347);
                mercury__string__builder__append_string_3_p_0(ArgTypeStr_42, Var_347, &Var_349);
                mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_349, &Var_350);
                mercury__string__builder__append_string_3_p_0(ArgName_43, Var_350, &Var_352);
                mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_352, &STATE_VARIABLE_State_134_134);
              }
              break;
          }
          parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), MercInfo_23, TVarSet_10, (MR_Word) ((MR_Unsigned) 0U), MaybeUserEqComp_17, MaybeDirectArgCtors_251, STATE_VARIABLE_State_134_134, &STATE_VARIABLE_State_169_169);
          if ((Foreign_19 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_State_75 = STATE_VARIABLE_State_169_169;
          else
          {
            MR_Word Var_365;

            mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_169_169, &Var_365);
            mercury__string__builder__append_string_3_p_0((MR_String) "% has foreign_type\n", Var_365, STATE_VARIABLE_State_75);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody_52 = (MR_Word) (MR_body((MR_Word) (TypeBody_9), (MR_Integer) 1));
        MR_Word MaybeC_53 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_52, (MR_Integer) 0))));
        MR_Word MaybeJava_54 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_52, (MR_Integer) 1))));
        MR_Word MaybeCsharp_55 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_52, (MR_Integer) 2))));
        MR_String MaybeCStr_56;
        MR_String MaybeJavaStr_61;
        MR_String MaybeCsharpStr_66;
        MR_String Indent1Str_71;
        MR_Word Var_300;
        MR_Word Var_302;
        MR_Word Var_303;
        MR_Word Var_304;
        MR_Word Var_306;
        MR_Word Var_307;
        MR_Word Var_308;
        MR_Word Var_310;
        MR_Word Var_311;
        MR_Word Var_312;
        MR_Word Var_314;

        if ((MaybeC_53 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeCStr_56 = (MR_String) "no_c";
        else
        {
          MR_Word C_57 = ((MR_Word) ((MR_hl_field(1, MaybeC_53, (MR_Integer) 0))));
          MR_String CTypeName_58;
          MR_Word CCanonical_59 = ((MR_Word) ((MR_hl_field(0, C_57, (MR_Integer) 1))));
          MR_Word CAssertions_60 = ((MR_Word) ((MR_hl_field(0, C_57, (MR_Integer) 2))));
          MR_Word Var_193 = ((MR_Word) ((MR_hl_field(0, C_57, (MR_Integer) 0))));
          MR_String Var_199;
          MR_String Var_202;
          MR_String Var_274;
          MR_String Var_276;
          MR_String Var_277;
          MR_String Var_279;
          MR_String Var_280;

          CTypeName_58 = (MR_String) (Var_193);
          Var_199 = hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(CCanonical_59);
          Var_202 = hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(CAssertions_60);
          Var_274 = mercury__string__f_43_43_2_f_0(Var_202, (MR_String) ")");
          Var_276 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_274);
          Var_277 = mercury__string__f_43_43_2_f_0(Var_199, Var_276);
          Var_279 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_277);
          Var_280 = mercury__string__f_43_43_2_f_0(CTypeName_58, Var_279);
          MaybeCStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "c(", Var_280);
        }
        if ((MaybeJava_54 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeJavaStr_61 = (MR_String) "no_java";
        else
        {
          MR_Word Java_62 = ((MR_Word) ((MR_hl_field(1, MaybeJava_54, (MR_Integer) 0))));
          MR_String JavaTypeName_63;
          MR_Word JavaCanonical_64 = ((MR_Word) ((MR_hl_field(0, Java_62, (MR_Integer) 1))));
          MR_Word JavaAssertions_65 = ((MR_Word) ((MR_hl_field(0, Java_62, (MR_Integer) 2))));
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(0, Java_62, (MR_Integer) 0))));
          MR_String Var_210;
          MR_String Var_213;
          MR_String Var_283;
          MR_String Var_285;
          MR_String Var_286;
          MR_String Var_288;
          MR_String Var_289;

          JavaTypeName_63 = (MR_String) (Var_204);
          Var_210 = hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(JavaCanonical_64);
          Var_213 = hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(JavaAssertions_65);
          Var_283 = mercury__string__f_43_43_2_f_0(Var_213, (MR_String) ")");
          Var_285 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_283);
          Var_286 = mercury__string__f_43_43_2_f_0(Var_210, Var_285);
          Var_288 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_286);
          Var_289 = mercury__string__f_43_43_2_f_0(JavaTypeName_63, Var_288);
          MaybeJavaStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "java(", Var_289);
        }
        if ((MaybeCsharp_55 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeCsharpStr_66 = (MR_String) "no_csharp";
        else
        {
          MR_Word Csharp_67 = ((MR_Word) ((MR_hl_field(1, MaybeCsharp_55, (MR_Integer) 0))));
          MR_String CsharpTypeName_68;
          MR_Word CsharpCanonical_69 = ((MR_Word) ((MR_hl_field(0, Csharp_67, (MR_Integer) 1))));
          MR_Word CsharpAssertions_70 = ((MR_Word) ((MR_hl_field(0, Csharp_67, (MR_Integer) 2))));
          MR_Word Var_215 = ((MR_Word) ((MR_hl_field(0, Csharp_67, (MR_Integer) 0))));
          MR_String Var_221;
          MR_String Var_224;
          MR_String Var_292;
          MR_String Var_294;
          MR_String Var_295;
          MR_String Var_297;
          MR_String Var_298;

          CsharpTypeName_68 = (MR_String) (Var_215);
          Var_221 = hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(CsharpCanonical_69);
          Var_224 = hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(CsharpAssertions_70);
          Var_292 = mercury__string__f_43_43_2_f_0(Var_224, (MR_String) ")");
          Var_294 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_292);
          Var_295 = mercury__string__f_43_43_2_f_0(Var_221, Var_294);
          Var_297 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_295);
          Var_298 = mercury__string__f_43_43_2_f_0(CsharpTypeName_68, Var_297);
          MaybeCsharpStr_66 = mercury__string__f_43_43_2_f_0((MR_String) "csharp(", Var_298);
        }
        Indent1Str_71 = libs__indent__indent2_string_1_f_0(((MR_Unsigned) 1U + (MR_Unsigned) 1U));
        mercury__string__builder__append_string_3_p_0((MR_String) " is foreign_type(\n", STATE_VARIABLE_State_0_74, &Var_300);
        mercury__string__builder__append_string_3_p_0(Indent1Str_71, Var_300, &Var_302);
        mercury__string__builder__append_string_3_p_0(MaybeCStr_56, Var_302, &Var_303);
        mercury__string__builder__append_string_3_p_0((MR_String) ",\n", Var_303, &Var_304);
        mercury__string__builder__append_string_3_p_0(Indent1Str_71, Var_304, &Var_306);
        mercury__string__builder__append_string_3_p_0(MaybeJavaStr_61, Var_306, &Var_307);
        mercury__string__builder__append_string_3_p_0((MR_String) ",\n", Var_307, &Var_308);
        mercury__string__builder__append_string_3_p_0(Indent1Str_71, Var_308, &Var_310);
        mercury__string__builder__append_string_3_p_0(MaybeCsharpStr_66, Var_310, &Var_311);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_311, &Var_312);
        mercury__string__builder__append_string_3_p_0(IndentStr_13, Var_312, &Var_314);
        mercury__string__builder__append_string_3_p_0((MR_String) ").\n", Var_314, STATE_VARIABLE_State_75);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_50 = ((MR_Word) ((MR_hl_field(2, TypeBody_9, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_State_185_185;
        MR_Word STATE_VARIABLE_State_188_188;

        mercury__string__builder__append_string_3_p_0((MR_String) " == ", STATE_VARIABLE_State_0_74, &STATE_VARIABLE_State_185_185);
        parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), TVarSet_10, (MR_Integer) 0, Type_50, STATE_VARIABLE_State_185_185, &STATE_VARIABLE_State_188_188);
        mercury__string__builder__append_string_3_p_0((MR_String) ".\n", STATE_VARIABLE_State_188_188, STATE_VARIABLE_State_75);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_72 = ((MR_Word) ((MR_hl_field(3, TypeBody_9, (MR_Integer) 1))));
            MR_Word SolverTypeDetails_73 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_72, (MR_Integer) 0))));
            MR_Word Var_245;
            MR_Word STATE_VARIABLE_State_248_248;
            MR_Word MaybeUserEqComp_252 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_72, (MR_Integer) 1))));
            MR_Word MercInfo_253 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 4))));

            {
              Var_245 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_245, 0) = ((MR_Box) (SolverTypeDetails_73));
            }
            parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), MercInfo_253, TVarSet_10, Var_245, MaybeUserEqComp_252, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_State_0_74, &STATE_VARIABLE_State_248_248);
            mercury__string__builder__append_string_3_p_0((MR_String) ".\n", STATE_VARIABLE_State_248_248, STATE_VARIABLE_State_75);
          }
          break;
        case (MR_Integer) 1:
          mercury__string__builder__append_string_3_p_0((MR_String) ".\n", STATE_VARIABLE_State_0_74, STATE_VARIABLE_State_75);
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructor_repns_4_p_0(
  MR_Word TVarSet_5,
  MR_Word CtorRepns_6,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  if ((CtorRepns_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_out.hlds_out_type_table.format_constructor_repns\'/4", (MR_String) "empty constructor list");
      return;
    }
  else
  {
    MR_Word HeadCtorRepn_8 = ((MR_Word) ((MR_hl_field(1, CtorRepns_6, (MR_Integer) 0))));
    MR_Word TailCtorRepns_9 = ((MR_Word) ((MR_hl_field(1, CtorRepns_6, (MR_Integer) 1))));

    hlds__hlds_out__hlds_out_type_table__format_constructor_repns_loop_6_p_0(TVarSet_5, (MR_String) "--->    ", HeadCtorRepn_8, TailCtorRepns_9, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructor_repns_loop_6_p_0(
  MR_Word TVarSet_7,
  MR_String ArrowOrSemi0_8,
  MR_Word HeadCtorRepn_9,
  MR_Word TailCtorRepns_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_State_18_18;
    MR_Word STATE_VARIABLE_State_19_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    libs__indent__format_indent2_3_p_0((MR_Unsigned) 1U, STATE_VARIABLE_State_0_15, &STATE_VARIABLE_State_18_18);
    mercury__string__builder__append_string_3_p_0(ArrowOrSemi0_8, STATE_VARIABLE_State_18_18, &STATE_VARIABLE_State_19_19);
    if ((TailCtorRepns_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeExistConstraints_23 = ((MR_Word) ((MR_hl_field(0, HeadCtorRepn_9, (MR_Integer) 1))));
      MR_Word SymName_24 = ((MR_Word) ((MR_hl_field(0, HeadCtorRepn_9, (MR_Integer) 2))));
      MR_Word ConsTag_25 = ((MR_Word) ((MR_hl_field(0, HeadCtorRepn_9, (MR_Integer) 3))));
      MR_Word ArgRepns_26 = ((MR_Word) ((MR_hl_field(0, HeadCtorRepn_9, (MR_Integer) 4))));
      MR_Integer Arity_27 = ((MR_Integer) ((MR_hl_field(0, HeadCtorRepn_9, (MR_Integer) 5))));
      MR_String Name_29;
      MR_String NameStr_30;
      MR_String BaseASIndentStr_33;
      MR_String ExistConstraintsPrefix_34;
      MR_String ExistConstraintsSuffix_35;
      MR_String BracePrefix_36;
      MR_String BraceSuffix_37;
      MR_String ConsTagString_38;
      MR_Word STATE_VARIABLE_State_34_46;
      MR_Word STATE_VARIABLE_State_35_47;
      MR_String Var_53;
      MR_Word STATE_VARIABLE_State_45_57;
      MR_String Var_87;
      MR_String Var_89;

      Name_29 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_24);
      NameStr_30 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_29);
      BaseASIndentStr_33 = libs__indent__indent2_string_1_f_0(((MR_Unsigned) 1U + (MR_Unsigned) 4U));
      parse_tree__parse_tree_out_item__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_7, BaseASIndentStr_33, (MR_String) "\n", MaybeExistConstraints_23, &ExistConstraintsPrefix_34, &ExistConstraintsSuffix_35);
      parse_tree__parse_tree_out_item__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_27, Name_29, &BracePrefix_36, &BraceSuffix_37);
      mercury__string__builder__append_string_3_p_0(ExistConstraintsPrefix_34, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_34_46);
      mercury__string__builder__append_string_3_p_0(BracePrefix_36, STATE_VARIABLE_State_34_46, &STATE_VARIABLE_State_35_47);
      Var_53 = hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(ConsTag_25);
      Var_87 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) "\n");
      Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "% tag: ", Var_87);
      ConsTagString_38 = mercury__string__f_43_43_2_f_0(BaseASIndentStr_33, Var_89);
      if ((ArgRepns_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;

        mercury__string__builder__append_string_3_p_0(BracePrefix_36, STATE_VARIABLE_State_35_47, &Var_99);
        mercury__string__builder__append_string_3_p_0(NameStr_30, Var_99, &Var_100);
        mercury__string__builder__append_string_3_p_0(BraceSuffix_37, Var_100, &Var_101);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_101, &Var_102);
        mercury__string__builder__append_string_3_p_0(ConsTagString_38, Var_102, &STATE_VARIABLE_State_45_57);
      }
      else
      {
        MR_Word HeadArgRepn_39 = ((MR_Word) ((MR_hl_field(1, ArgRepns_26, (MR_Integer) 0))));
        MR_Word TailArgRepns_40 = ((MR_Word) ((MR_hl_field(1, ArgRepns_26, (MR_Integer) 1))));
        MR_String BaseASIndent1Str_41;
        MR_Word AnyFieldName_42;
        MR_Word STATE_VARIABLE_State_59_71;
        MR_Word STATE_VARIABLE_State_67_79;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_97;
        MR_Word ArgRepn_104;
        MR_Word ArgRepns_105;
        MR_Word MaybeFieldName_107;

        BaseASIndent1Str_41 = libs__indent__indent2_string_1_f_0(((((MR_Unsigned) 1U + (MR_Unsigned) 4U)) + (MR_Unsigned) 1U));
        mercury__string__builder__append_string_3_p_0(BracePrefix_36, STATE_VARIABLE_State_35_47, &Var_90);
        mercury__string__builder__append_string_3_p_0(NameStr_30, Var_90, &Var_91);
        mercury__string__builder__append_string_3_p_0((MR_String) "(\n", Var_91, &Var_92);
        mercury__string__builder__append_string_3_p_0(ConsTagString_38, Var_92, &STATE_VARIABLE_State_59_71);
        ArgRepn_104 = ((MR_Word) ((MR_hl_field(1, ArgRepns_26, (MR_Integer) 0))));
        ArgRepns_105 = ((MR_Word) ((MR_hl_field(1, ArgRepns_26, (MR_Integer) 1))));
        MaybeFieldName_107 = ((MR_Word) ((MR_hl_field(0, ArgRepn_104, (MR_Integer) 0))));
        if ((MaybeFieldName_107 == (MR_Word) ((MR_Unsigned) 0U)))
          AnyFieldName_42 = hlds__hlds_out__hlds_out_type_table__does_any_arg_repn_have_a_field_name_1_f_0(ArgRepns_105);
        else
          AnyFieldName_42 = (MR_Integer) 1;
        hlds__hlds_out__hlds_out_type_table__format_ctor_arg_repns_8_p_0(TVarSet_7, BaseASIndent1Str_41, AnyFieldName_42, (MR_Integer) 1, HeadArgRepn_39, TailArgRepns_40, STATE_VARIABLE_State_59_71, &STATE_VARIABLE_State_67_79);
        mercury__string__builder__append_string_3_p_0(BaseASIndentStr_33, STATE_VARIABLE_State_67_79, &Var_94);
        mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_94, &Var_95);
        mercury__string__builder__append_string_3_p_0(BraceSuffix_37, Var_95, &Var_97);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_97, &STATE_VARIABLE_State_45_57);
      }
      mercury__string__builder__append_string_3_p_0(ExistConstraintsSuffix_35, STATE_VARIABLE_State_45_57, STATE_VARIABLE_State_16);
    }
    else
    {
      MR_Word HeadTailCtorRepn_12 = ((MR_Word) ((MR_hl_field(1, TailCtorRepns_10, (MR_Integer) 0))));
      MR_Word TailTailCtorRepns_13 = ((MR_Word) ((MR_hl_field(1, TailCtorRepns_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_21_21;
      MR_Word next_value_of_HeadCtorRepn_9;
      MR_Word next_value_of_TailCtorRepns_10;
      MR_Word next_value_of_STATE_VARIABLE_State_0_15;

      hlds__hlds_out__hlds_out_type_table__format_ctor_repn_4_p_0(TVarSet_7, HeadCtorRepn_9, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadCtorRepn_9 = HeadTailCtorRepn_12;
      next_value_of_TailCtorRepns_10 = TailTailCtorRepns_13;
      next_value_of_STATE_VARIABLE_State_0_15 = STATE_VARIABLE_State_21_21;
      ArrowOrSemi0_8 = (MR_String) ";       ";
      HeadCtorRepn_9 = next_value_of_HeadCtorRepn_9;
      TailCtorRepns_10 = next_value_of_TailCtorRepns_10;
      STATE_VARIABLE_State_0_15 = next_value_of_STATE_VARIABLE_State_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_repn_4_p_0(
  MR_Word TVarSet_5,
  MR_Word CtorRepn_6,
  MR_Word STATE_VARIABLE_State_0_29,
  MR_Word * STATE_VARIABLE_State_30)
{
  MR_Word MaybeExistConstraints_9 = ((MR_Word) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 1))));
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 2))));
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 3))));
  MR_Word ArgRepns_12 = ((MR_Word) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 4))));
  MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 5))));
  MR_String Name_15;
  MR_String NameStr_16;
  MR_String BaseASIndentStr_19;
  MR_String ExistConstraintsPrefix_20;
  MR_String ExistConstraintsSuffix_21;
  MR_String BracePrefix_22;
  MR_String BraceSuffix_23;
  MR_String ConsTagString_24;
  MR_Word STATE_VARIABLE_State_34_34;
  MR_Word STATE_VARIABLE_State_35_35;
  MR_String Var_41;
  MR_Word STATE_VARIABLE_State_45_45;
  MR_String Var_76;
  MR_String Var_78;

  Name_15 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
  NameStr_16 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_15);
  BaseASIndentStr_19 = libs__indent__indent2_string_1_f_0(((MR_Unsigned) 1U + (MR_Unsigned) 4U));
  parse_tree__parse_tree_out_item__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_5, BaseASIndentStr_19, (MR_String) "\n", MaybeExistConstraints_9, &ExistConstraintsPrefix_20, &ExistConstraintsSuffix_21);
  parse_tree__parse_tree_out_item__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_13, Name_15, &BracePrefix_22, &BraceSuffix_23);
  mercury__string__builder__append_string_3_p_0(ExistConstraintsPrefix_20, STATE_VARIABLE_State_0_29, &STATE_VARIABLE_State_34_34);
  mercury__string__builder__append_string_3_p_0(BracePrefix_22, STATE_VARIABLE_State_34_34, &STATE_VARIABLE_State_35_35);
  Var_41 = hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(ConsTag_11);
  Var_76 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) "\n");
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "% tag: ", Var_76);
  ConsTagString_24 = mercury__string__f_43_43_2_f_0(BaseASIndentStr_19, Var_78);
  if ((ArgRepns_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;

    mercury__string__builder__append_string_3_p_0(BracePrefix_22, STATE_VARIABLE_State_35_35, &Var_88);
    mercury__string__builder__append_string_3_p_0(NameStr_16, Var_88, &Var_89);
    mercury__string__builder__append_string_3_p_0(BraceSuffix_23, Var_89, &Var_90);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_90, &Var_91);
    mercury__string__builder__append_string_3_p_0(ConsTagString_24, Var_91, &STATE_VARIABLE_State_45_45);
  }
  else
  {
    MR_Word HeadArgRepn_25 = ((MR_Word) ((MR_hl_field(1, ArgRepns_12, (MR_Integer) 0))));
    MR_Word TailArgRepns_26 = ((MR_Word) ((MR_hl_field(1, ArgRepns_12, (MR_Integer) 1))));
    MR_String BaseASIndent1Str_27;
    MR_Word AnyFieldName_28;
    MR_Word STATE_VARIABLE_State_59_59;
    MR_Word STATE_VARIABLE_State_67_67;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word ArgRepn_93;
    MR_Word ArgRepns_94;
    MR_Word MaybeFieldName_96;

    BaseASIndent1Str_27 = libs__indent__indent2_string_1_f_0(((((MR_Unsigned) 1U + (MR_Unsigned) 4U)) + (MR_Unsigned) 1U));
    mercury__string__builder__append_string_3_p_0(BracePrefix_22, STATE_VARIABLE_State_35_35, &Var_79);
    mercury__string__builder__append_string_3_p_0(NameStr_16, Var_79, &Var_80);
    mercury__string__builder__append_string_3_p_0((MR_String) "(\n", Var_80, &Var_81);
    mercury__string__builder__append_string_3_p_0(ConsTagString_24, Var_81, &STATE_VARIABLE_State_59_59);
    ArgRepn_93 = ((MR_Word) ((MR_hl_field(1, ArgRepns_12, (MR_Integer) 0))));
    ArgRepns_94 = ((MR_Word) ((MR_hl_field(1, ArgRepns_12, (MR_Integer) 1))));
    MaybeFieldName_96 = ((MR_Word) ((MR_hl_field(0, ArgRepn_93, (MR_Integer) 0))));
    if ((MaybeFieldName_96 == (MR_Word) ((MR_Unsigned) 0U)))
      AnyFieldName_28 = hlds__hlds_out__hlds_out_type_table__does_any_arg_repn_have_a_field_name_1_f_0(ArgRepns_94);
    else
      AnyFieldName_28 = (MR_Integer) 1;
    hlds__hlds_out__hlds_out_type_table__format_ctor_arg_repns_8_p_0(TVarSet_5, BaseASIndent1Str_27, AnyFieldName_28, (MR_Integer) 1, HeadArgRepn_25, TailArgRepns_26, STATE_VARIABLE_State_59_59, &STATE_VARIABLE_State_67_67);
    mercury__string__builder__append_string_3_p_0(BaseASIndentStr_19, STATE_VARIABLE_State_67_67, &Var_83);
    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_83, &Var_84);
    mercury__string__builder__append_string_3_p_0(BraceSuffix_23, Var_84, &Var_86);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_86, &STATE_VARIABLE_State_45_45);
  }
  mercury__string__builder__append_string_3_p_0(ExistConstraintsSuffix_21, STATE_VARIABLE_State_45_45, STATE_VARIABLE_State_30);
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(
  MR_Word ConsTag_3)
{
  MR_String String_4;

  switch (MR_tag((MR_Word) ConsTag_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          String_4 = (MR_String) "dummy tag";
          break;
        case (MR_Integer) 1:
          String_4 = (MR_String) "notag";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_20 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) IntTag_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(0, IntTag_20, (MR_Integer) 0))));
              MR_String Var_243;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), N_21, &Var_243);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum ", Var_243);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_type_table.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_type_table.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 14:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_type_table.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lang_18 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String ForeignName_19 = ((MR_String) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 2))));
            MR_String Var_105;
            MR_String Var_252;
            MR_String Var_253;

            Var_105 = libs__globals__foreign_language_string_1_f_0(Lang_18);
            Var_252 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_105);
            Var_253 = mercury__string__f_43_43_2_f_0(ForeignName_19, Var_252);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", Var_253);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t Ptag_5;
            MR_Word LocalSectag_6 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 2))));
            MR_Word SectagMask_7 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_String MaskString_8;
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));
            MR_String Var_57;
            MR_String Var_127;
            MR_String Var_128;
            MR_String Var_130;
            MR_Unsigned Var_132;
            MR_String Var_133;
            MR_String Var_140;

            Ptag_5 = (uint8_t) (Var_51);
            switch (SectagMask_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaskString_8 = (MR_String) "rest of word";
                break;
              case (MR_Integer) 1:
                MaskString_8 = (MR_String) "must be masked";
                break;
            }
            Var_57 = hlds__hlds_out__hlds_out_type_table__local_sectag_to_string_1_f_0(LocalSectag_6);
            Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ", no args, ", MaskString_8);
            Var_128 = mercury__string__f_43_43_2_f_0(Var_57, Var_127);
            Var_130 = mercury__string__f_43_43_2_f_0((MR_String) ", local sectag ", Var_128);
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_5, &Var_132);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_132, &Var_133);
            Var_140 = mercury__string__f_43_43_2_f_0(Var_133, Var_130);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_140);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_10 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                String_4 = (MR_String) "ptag 0, remote sectag none, only functor";
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_10, (MR_Integer) 0))));
                  uint8_t Ptag_121 = (uint8_t) (Var_69);
                  MR_Unsigned Var_144;
                  MR_String Var_145;
                  MR_String Var_152;

                  mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_121, &Var_144);
                  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_144, &Var_145);
                  Var_152 = mercury__string__f_43_43_2_f_0(Var_145, (MR_String) ", remote sectag none, unshared");
                  String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_152);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_11 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_10, (MR_Integer) 1))));
                  MR_Unsigned SectagValue_12 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_11, (MR_Integer) 0))));
                  MR_Word SectagSize_13 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_11, (MR_Integer) 1))));
                  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_10, (MR_Integer) 0))));
                  uint8_t Ptag_122 = (uint8_t) (Var_74);

                  if ((SectagSize_13 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_String Var_156;
                    MR_String Var_163;
                    MR_String Var_165;
                    MR_Unsigned Var_167;
                    MR_String Var_168;
                    MR_String Var_175;

                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, SectagValue_12, &Var_156);
                    Var_163 = mercury__string__f_43_43_2_f_0(Var_156, (MR_String) " full word");
                    Var_165 = mercury__string__f_43_43_2_f_0((MR_String) ", remote sectag ", Var_163);
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_122, &Var_167);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_167, &Var_168);
                    Var_175 = mercury__string__f_43_43_2_f_0(Var_168, Var_165);
                    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_175);
                  }
                  else
                  {
                    MR_Word SectagBits_14 = (MR_Word) (MR_body((MR_Word) (SectagSize_13), (MR_Integer) 1));
                    uint8_t NumRemoteSectagBits_15 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_14, (MR_Integer) 0)));
                    MR_Unsigned Mask_16 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_14, (MR_Integer) 1))));
                    MR_String Var_178;
                    MR_String Var_186;
                    MR_Unsigned Var_188;
                    MR_String Var_189;
                    MR_String Var_196;
                    MR_String Var_198;
                    MR_String Var_200;
                    MR_String Var_207;
                    MR_String Var_209;
                    MR_Unsigned Var_211;
                    MR_String Var_212;
                    MR_String Var_219;

                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 2, Mask_16, &Var_178);
                    Var_186 = mercury__string__f_43_43_2_f_0((MR_String) " bits, mask ", Var_178);
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumRemoteSectagBits_15, &Var_188);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_188, &Var_189);
                    Var_196 = mercury__string__f_43_43_2_f_0(Var_189, Var_186);
                    Var_198 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_196);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, SectagValue_12, &Var_200);
                    Var_207 = mercury__string__f_43_43_2_f_0(Var_200, Var_198);
                    Var_209 = mercury__string__f_43_43_2_f_0((MR_String) ", remote sectag ", Var_207);
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_122, &Var_211);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_211, &Var_212);
                    Var_219 = mercury__string__f_43_43_2_f_0(Var_212, Var_209);
                    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_219);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Unsigned Data_17 = ((MR_Unsigned) ((MR_hl_field(3, RemoteArgsTagInfo_10, (MR_Integer) 0))));
                  MR_String Var_222;

                  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Data_17, &Var_222);
                  String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ctor ", Var_222);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_9 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));

            if ((LocalArgsTagInfo_9 == (MR_Word) ((MR_Unsigned) 0U)))
              String_4 = (MR_String) "ptag 0, local sectag none, only functor";
            else
            {
              MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_9, (MR_Integer) 0))));
              MR_String Var_67;
              uint8_t Ptag_115 = (uint8_t) (Var_61);
              MR_Word LocalSectag_116 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_9, (MR_Integer) 1))));
              MR_String Var_231;
              MR_Unsigned Var_233;
              MR_String Var_234;
              MR_String Var_241;

              Var_67 = hlds__hlds_out__hlds_out_type_table__local_sectag_to_string_1_f_0(LocalSectag_116);
              Var_231 = mercury__string__f_43_43_2_f_0((MR_String) ", local sectag ", Var_67);
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_115, &Var_233);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_233, &Var_234);
              Var_241 = mercury__string__f_43_43_2_f_0(Var_234, Var_231);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_241);
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_95 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));
            uint8_t Ptag_125 = (uint8_t) (Var_95);
            MR_Unsigned Var_256;
            MR_String Var_257;

            mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_125, &Var_256);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_256, &Var_257);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "direct arg tag ", Var_257);
          }
          break;
      }
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__local_sectag_to_string_1_f_0(
  MR_Word LocalSectag_3)
{
  MR_bool succeeded;
  MR_String String_4;
  MR_Unsigned SectagValue_5 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_3, (MR_Integer) 0))));
  MR_Word SectagBits_7 = ((MR_Word) ((MR_hl_field(0, LocalSectag_3, (MR_Integer) 2))));
  uint8_t NumBits_8 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_7, (MR_Integer) 0)));

  succeeded = (NumBits_8 == UINT8_C(0));
  if (succeeded)
    String_4 = (MR_String) "none";
  else
  {
    MR_Unsigned Var_18;
    MR_String Var_19;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_30;

    mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumBits_8, &Var_18);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, Var_18, &Var_19);
    Var_26 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) " bits");
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_26);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 1, SectagValue_5, &Var_30);
    String_4 = mercury__string__f_43_43_2_f_0(Var_30, Var_28);
  }
  return String_4;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_type_table__does_any_arg_repn_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word ArgRepn_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgRepns_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFieldName_6 = ((MR_Word) ((MR_hl_field(0, ArgRepn_3, (MR_Integer) 0))));

      if ((MaybeFieldName_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = ArgRepns_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        HeadVar__2_2 = (MR_Integer) 1;
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_arg_repns_8_p_0(
  MR_Word TVarSet_9,
  MR_String IndentStr_10,
  MR_Word AnyFieldName_11,
  MR_Integer CurArgNum_12,
  MR_Word HeadArgRepn_13,
  MR_Word TailArgRepns_14,
  MR_Word STATE_VARIABLE_State_0_25,
  MR_Word * STATE_VARIABLE_State_26)
{
  while (MR_TRUE)
  {
    MR_Word MaybeFieldName_16 = ((MR_Word) ((MR_hl_field(0, HeadArgRepn_13, (MR_Integer) 0))));
    MR_Word Type_18 = ((MR_Word) ((MR_hl_field(0, HeadArgRepn_13, (MR_Integer) 2))));
    MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(0, HeadArgRepn_13, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_State_27_27;
    MR_Word STATE_VARIABLE_State_30_30;
    MR_Word STATE_VARIABLE_State_43_43;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__builder__append_string_3_p_0(IndentStr_10, STATE_VARIABLE_State_0_25, &STATE_VARIABLE_State_27_27);
    switch (AnyFieldName_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_State_30_30 = STATE_VARIABLE_State_27_27;
        break;
      case (MR_Integer) 1:
        if ((MaybeFieldName_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_64;

          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 24, (MR_String) "", &Var_64);
          mercury__string__builder__append_string_3_p_0(Var_64, STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_30_30);
        }
        else
        {
          MR_Word FieldName_21;
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, MaybeFieldName_16, (MR_Integer) 0))));
          MR_String Var_39;
          MR_Word Var_54;
          MR_String Var_55;

          FieldName_21 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
          Var_39 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_21);
          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[1]), (MR_Integer) 20, Var_39, &Var_55);
          mercury__string__builder__append_string_3_p_0(Var_55, STATE_VARIABLE_State_27_27, &Var_54);
          mercury__string__builder__append_string_3_p_0((MR_String) " :: ", Var_54, &STATE_VARIABLE_State_30_30);
        }
        break;
    }
    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), TVarSet_9, (MR_Integer) 0, Type_18, STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_43_43);
    if ((TailArgRepns_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word STATE_VARIABLE_State_45_45;

      mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_45_45);
      hlds__hlds_out__hlds_out_type_table__format_arg_pos_width_5_p_0(IndentStr_10, CurArgNum_12, ArgPosWidth_19, STATE_VARIABLE_State_45_45, STATE_VARIABLE_State_26);
    }
    else
    {
      MR_Word HeadTailArgRepn_23 = ((MR_Word) ((MR_hl_field(1, TailArgRepns_14, (MR_Integer) 0))));
      MR_Word TailTailArgRepns_24 = ((MR_Word) ((MR_hl_field(1, TailArgRepns_14, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_48_48;
      MR_Word STATE_VARIABLE_State_49_49;
      MR_Integer Var_50;
      MR_Integer next_value_of_CurArgNum_12;
      MR_Word next_value_of_HeadArgRepn_13;
      MR_Word next_value_of_TailArgRepns_14;
      MR_Word next_value_of_STATE_VARIABLE_State_0_25;

      mercury__string__builder__append_string_3_p_0((MR_String) ",\n", STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_48_48);
      hlds__hlds_out__hlds_out_type_table__format_arg_pos_width_5_p_0(IndentStr_10, CurArgNum_12, ArgPosWidth_19, STATE_VARIABLE_State_48_48, &STATE_VARIABLE_State_49_49);
      Var_50 = (MR_Integer) ((MR_Unsigned) CurArgNum_12 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_12 = Var_50;
      next_value_of_HeadArgRepn_13 = HeadTailArgRepn_23;
      next_value_of_TailArgRepns_14 = TailTailArgRepns_24;
      next_value_of_STATE_VARIABLE_State_0_25 = STATE_VARIABLE_State_49_49;
      CurArgNum_12 = next_value_of_CurArgNum_12;
      HeadArgRepn_13 = next_value_of_HeadArgRepn_13;
      TailArgRepns_14 = next_value_of_TailArgRepns_14;
      STATE_VARIABLE_State_0_25 = next_value_of_STATE_VARIABLE_State_0_25;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_arg_pos_width_5_p_0(
  MR_String IndentStr_6,
  MR_Integer CurArgNum_7,
  MR_Word ArgPosWidth_8,
  MR_Word STATE_VARIABLE_State_0_25,
  MR_Word * STATE_VARIABLE_State_26)
{
  MR_Word STATE_VARIABLE_State_27_27;

  mercury__string__builder__append_string_3_p_0(IndentStr_6, STATE_VARIABLE_State_0_25, &STATE_VARIABLE_State_27_27);
  switch (MR_tag((MR_Word) ArgPosWidth_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_309;
        MR_Word Var_311;
        MR_String Var_312;

        mercury__string__builder__append_string_3_p_0((MR_String) "% arg ", STATE_VARIABLE_State_27_27, &Var_309);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CurArgNum_7, &Var_312);
        mercury__string__builder__append_string_3_p_0(Var_312, Var_309, &Var_311);
        mercury__string__builder__append_string_3_p_0((MR_String) ": none_nowhere\n", Var_311, STATE_VARIABLE_State_26);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgOnlyOffset_10 = ((MR_Word) ((MR_hl_field(1, ArgPosWidth_8, (MR_Integer) 0))));
        MR_Word CellOffset_11 = ((MR_Word) ((MR_hl_field(1, ArgPosWidth_8, (MR_Integer) 1))));
        MR_Integer AOWordNum_12 = (MR_Integer) (ArgOnlyOffset_10);
        MR_Integer CellWordNum_13 = (MR_Integer) (CellOffset_11);
        MR_Word Var_320;
        MR_Word Var_322;
        MR_String Var_323;
        MR_Word Var_330;
        MR_Word Var_332;
        MR_String Var_333;
        MR_Word Var_340;
        MR_Word Var_342;
        MR_String Var_343;

        mercury__string__builder__append_string_3_p_0((MR_String) "% arg ", STATE_VARIABLE_State_27_27, &Var_320);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CurArgNum_7, &Var_323);
        mercury__string__builder__append_string_3_p_0(Var_323, Var_320, &Var_322);
        mercury__string__builder__append_string_3_p_0((MR_String) ": full word, offset ", Var_322, &Var_330);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), AOWordNum_12, &Var_333);
        mercury__string__builder__append_string_3_p_0(Var_333, Var_330, &Var_332);
        mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_332, &Var_340);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CellWordNum_13, &Var_343);
        mercury__string__builder__append_string_3_p_0(Var_343, Var_340, &Var_342);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_342, STATE_VARIABLE_State_26);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DoubleWordKind_14 = ((MR_Unsigned) ((MR_hl_field(2, ArgPosWidth_8, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_String KindStr_15;
        MR_Integer Var_49;
        MR_Integer Var_53;
        MR_Word ArgOnlyOffset_91 = ((MR_Word) ((MR_hl_field(2, ArgPosWidth_8, (MR_Integer) 0))));
        MR_Word CellOffset_92 = ((MR_Word) ((MR_hl_field(2, ArgPosWidth_8, (MR_Integer) 1))));
        MR_Integer AOWordNum_93 = (MR_Integer) (ArgOnlyOffset_91);
        MR_Integer CellWordNum_94 = (MR_Integer) (CellOffset_92);
        MR_Word Var_351;
        MR_Word Var_353;
        MR_String Var_354;
        MR_Word Var_361;
        MR_Word Var_363;
        MR_Word Var_364;
        MR_Word Var_366;
        MR_String Var_367;
        MR_Word Var_374;
        MR_Word Var_376;
        MR_String Var_377;
        MR_Word Var_384;
        MR_Word Var_386;
        MR_String Var_387;
        MR_Word Var_394;
        MR_Word Var_396;
        MR_String Var_397;

        switch (DoubleWordKind_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            KindStr_15 = (MR_String) "float";
            break;
          case (MR_Integer) 1:
            KindStr_15 = (MR_String) "int64";
            break;
          case (MR_Integer) 2:
            KindStr_15 = (MR_String) "uint64";
            break;
        }
        Var_49 = (MR_Integer) ((MR_Unsigned) AOWordNum_93 + (MR_Unsigned) 1);
        Var_53 = (MR_Integer) ((MR_Unsigned) CellWordNum_94 + (MR_Unsigned) 1);
        mercury__string__builder__append_string_3_p_0((MR_String) "% arg ", STATE_VARIABLE_State_27_27, &Var_351);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CurArgNum_7, &Var_354);
        mercury__string__builder__append_string_3_p_0(Var_354, Var_351, &Var_353);
        mercury__string__builder__append_string_3_p_0((MR_String) ": double word ", Var_353, &Var_361);
        mercury__string__builder__append_string_3_p_0(KindStr_15, Var_361, &Var_363);
        mercury__string__builder__append_string_3_p_0((MR_String) ", offsets ", Var_363, &Var_364);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), AOWordNum_93, &Var_367);
        mercury__string__builder__append_string_3_p_0(Var_367, Var_364, &Var_366);
        mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_366, &Var_374);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CellWordNum_94, &Var_377);
        mercury__string__builder__append_string_3_p_0(Var_377, Var_374, &Var_376);
        mercury__string__builder__append_string_3_p_0((MR_String) " to ", Var_376, &Var_384);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), Var_49, &Var_387);
        mercury__string__builder__append_string_3_p_0(Var_387, Var_384, &Var_386);
        mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_386, &Var_394);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), Var_53, &Var_397);
        mercury__string__builder__append_string_3_p_0(Var_397, Var_394, &Var_396);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_396, STATE_VARIABLE_State_26);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Shift_16 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 3))));
            MR_Word NumBits_17 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 4))));
            MR_Word Mask_18 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 5))));
            MR_Word FillKind_19 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_21 = (MR_Integer) (Shift_16);
            MR_Integer NumBitsInt_22 = (MR_Integer) (NumBits_17);
            MR_Integer MaskInt_23 = (MR_Integer) (Mask_18);
            MR_String FillStr_24;
            MR_Word ArgOnlyOffset_95 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 1))));
            MR_Word CellOffset_96 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 2))));
            MR_Integer AOWordNum_97 = (MR_Integer) (ArgOnlyOffset_95);
            MR_Integer CellWordNum_98 = (MR_Integer) (CellOffset_96);
            MR_Word Var_207;
            MR_Word Var_209;
            MR_String Var_210;
            MR_Word Var_217;
            MR_Word Var_219;
            MR_Word Var_220;
            MR_Word Var_222;
            MR_String Var_223;
            MR_Word Var_230;
            MR_Word Var_232;
            MR_String Var_233;
            MR_Word Var_240;
            MR_Word Var_242;
            MR_String Var_243;
            MR_Word Var_251;
            MR_Word Var_253;
            MR_String Var_254;
            MR_Word Var_262;
            MR_Word Var_264;
            MR_Unsigned Var_266;
            MR_String Var_267;
            MR_Word Var_274;
            MR_Word Var_276;

            FillStr_24 = hlds__hlds_out__hlds_out_type_table__fill_kind_to_string_1_f_0(FillKind_19);
            mercury__string__builder__append_string_3_p_0((MR_String) "% arg ", STATE_VARIABLE_State_27_27, &Var_207);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CurArgNum_7, &Var_210);
            mercury__string__builder__append_string_3_p_0(Var_210, Var_207, &Var_209);
            mercury__string__builder__append_string_3_p_0((MR_String) ": partial ", Var_209, &Var_217);
            mercury__string__builder__append_string_3_p_0((MR_String) "first", Var_217, &Var_219);
            mercury__string__builder__append_string_3_p_0((MR_String) ", offset ", Var_219, &Var_220);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), AOWordNum_97, &Var_223);
            mercury__string__builder__append_string_3_p_0(Var_223, Var_220, &Var_222);
            mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_222, &Var_230);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CellWordNum_98, &Var_233);
            mercury__string__builder__append_string_3_p_0(Var_233, Var_230, &Var_232);
            mercury__string__builder__append_string_3_p_0((MR_String) ", shift ", Var_232, &Var_240);
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 2, ShiftInt_21, &Var_243);
            mercury__string__builder__append_string_3_p_0(Var_243, Var_240, &Var_242);
            mercury__string__builder__append_string_3_p_0((MR_String) " #bits ", Var_242, &Var_251);
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 2, NumBitsInt_22, &Var_254);
            mercury__string__builder__append_string_3_p_0(Var_254, Var_251, &Var_253);
            mercury__string__builder__append_string_3_p_0((MR_String) " mask ", Var_253, &Var_262);
            mercury__string__format__format_cast_int_to_uint_2_p_0(MaskInt_23, &Var_266);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 2, Var_266, &Var_267);
            mercury__string__builder__append_string_3_p_0(Var_267, Var_262, &Var_264);
            mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_264, &Var_274);
            mercury__string__builder__append_string_3_p_0(FillStr_24, Var_274, &Var_276);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_276, STATE_VARIABLE_State_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_103 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 3))));
            MR_Word NumBits_104 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 4))));
            MR_Word Mask_105 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 5))));
            MR_Word FillKind_106 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_108 = (MR_Integer) (Shift_103);
            MR_Integer NumBitsInt_109 = (MR_Integer) (NumBits_104);
            MR_Integer MaskInt_110 = (MR_Integer) (Mask_105);
            MR_String FillStr_111;
            MR_Word ArgOnlyOffset_132 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 1))));
            MR_Word CellOffset_133 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 2))));
            MR_Integer AOWordNum_134 = (MR_Integer) (ArgOnlyOffset_132);
            MR_Integer CellWordNum_135 = (MR_Integer) (CellOffset_133);
            MR_Word Var_136;
            MR_Word Var_138;
            MR_String Var_139;
            MR_Word Var_146;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_151;
            MR_String Var_152;
            MR_Word Var_159;
            MR_Word Var_161;
            MR_String Var_162;
            MR_Word Var_169;
            MR_Word Var_171;
            MR_String Var_172;
            MR_Word Var_180;
            MR_Word Var_182;
            MR_String Var_183;
            MR_Word Var_191;
            MR_Word Var_193;
            MR_Unsigned Var_195;
            MR_String Var_196;
            MR_Word Var_203;
            MR_Word Var_205;

            FillStr_111 = hlds__hlds_out__hlds_out_type_table__fill_kind_to_string_1_f_0(FillKind_106);
            mercury__string__builder__append_string_3_p_0((MR_String) "% arg ", STATE_VARIABLE_State_27_27, &Var_136);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CurArgNum_7, &Var_139);
            mercury__string__builder__append_string_3_p_0(Var_139, Var_136, &Var_138);
            mercury__string__builder__append_string_3_p_0((MR_String) ": partial ", Var_138, &Var_146);
            mercury__string__builder__append_string_3_p_0((MR_String) "later", Var_146, &Var_148);
            mercury__string__builder__append_string_3_p_0((MR_String) ", offset ", Var_148, &Var_149);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), AOWordNum_134, &Var_152);
            mercury__string__builder__append_string_3_p_0(Var_152, Var_149, &Var_151);
            mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_151, &Var_159);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CellWordNum_135, &Var_162);
            mercury__string__builder__append_string_3_p_0(Var_162, Var_159, &Var_161);
            mercury__string__builder__append_string_3_p_0((MR_String) ", shift ", Var_161, &Var_169);
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 2, ShiftInt_108, &Var_172);
            mercury__string__builder__append_string_3_p_0(Var_172, Var_169, &Var_171);
            mercury__string__builder__append_string_3_p_0((MR_String) " #bits ", Var_171, &Var_180);
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 2, NumBitsInt_109, &Var_183);
            mercury__string__builder__append_string_3_p_0(Var_183, Var_180, &Var_182);
            mercury__string__builder__append_string_3_p_0((MR_String) " mask ", Var_182, &Var_191);
            mercury__string__format__format_cast_int_to_uint_2_p_0(MaskInt_110, &Var_195);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 2, Var_195, &Var_196);
            mercury__string__builder__append_string_3_p_0(Var_196, Var_191, &Var_193);
            mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_193, &Var_203);
            mercury__string__builder__append_string_3_p_0(FillStr_111, Var_203, &Var_205);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_205, STATE_VARIABLE_State_26);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgOnlyOffset_99 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 1))));
            MR_Word CellOffset_100 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 2))));
            MR_Integer AOWordNum_101 = (MR_Integer) (ArgOnlyOffset_99);
            MR_Integer CellWordNum_102 = (MR_Integer) (CellOffset_100);
            MR_Word Var_278;
            MR_Word Var_280;
            MR_String Var_281;
            MR_Word Var_288;
            MR_Word Var_290;
            MR_String Var_291;
            MR_Word Var_298;
            MR_Word Var_300;
            MR_String Var_301;

            mercury__string__builder__append_string_3_p_0((MR_String) "% arg ", STATE_VARIABLE_State_27_27, &Var_278);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CurArgNum_7, &Var_281);
            mercury__string__builder__append_string_3_p_0(Var_281, Var_278, &Var_280);
            mercury__string__builder__append_string_3_p_0((MR_String) ": none shifted, offset ", Var_280, &Var_288);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), AOWordNum_101, &Var_291);
            mercury__string__builder__append_string_3_p_0(Var_291, Var_288, &Var_290);
            mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_290, &Var_298);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), CellWordNum_102, &Var_301);
            mercury__string__builder__append_string_3_p_0(Var_301, Var_298, &Var_300);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_300, STATE_VARIABLE_State_26);
          }
          break;
      }
      break;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__fill_kind_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_type_table_vector_common_5[0 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_type_table__vector_common_type_5_0__vct_5_f_0;

  return HeadVar__2_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructors_5_p_0(
  MR_Word TVarSet_6,
  MR_Word HeadCtor_7,
  MR_Word TailCtors_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  hlds__hlds_out__hlds_out_type_table__format_constructors_loop_6_p_0(TVarSet_6, (MR_String) "--->    ", HeadCtor_7, TailCtors_8, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_constructors_loop_6_p_0(
  MR_Word TVarSet_7,
  MR_String ArrowOrSemi0_8,
  MR_Word HeadCtor_9,
  MR_Word TailCtors_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_State_18_18;
    MR_Word STATE_VARIABLE_State_19_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    libs__indent__format_indent2_3_p_0((MR_Unsigned) 1U, STATE_VARIABLE_State_0_15, &STATE_VARIABLE_State_18_18);
    mercury__string__builder__append_string_3_p_0(ArrowOrSemi0_8, STATE_VARIABLE_State_18_18, &STATE_VARIABLE_State_19_19);
    if ((TailCtors_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeExistConstraints_23 = ((MR_Word) ((MR_hl_field(0, HeadCtor_9, (MR_Integer) 1))));
      MR_Word SymName_24 = ((MR_Word) ((MR_hl_field(0, HeadCtor_9, (MR_Integer) 2))));
      MR_Word Args_25 = ((MR_Word) ((MR_hl_field(0, HeadCtor_9, (MR_Integer) 3))));
      MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(0, HeadCtor_9, (MR_Integer) 4))));
      MR_String Name_28;
      MR_String NameStr_29;
      MR_String BaseASIndentStr_32;
      MR_String ExistConstraintsPrefix_33;
      MR_String ExistConstraintsSuffix_34;
      MR_String BracePrefix_35;
      MR_String BraceSuffix_36;
      MR_Word STATE_VARIABLE_State_32_44;
      MR_Word STATE_VARIABLE_State_35_47;
      MR_Word Var_87;
      MR_Word Var_88;

      Name_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_24);
      NameStr_29 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_28);
      BaseASIndentStr_32 = libs__indent__indent2_string_1_f_0(((MR_Unsigned) 1U + (MR_Unsigned) 4U));
      parse_tree__parse_tree_out_item__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_7, BaseASIndentStr_32, (MR_String) "\n", MaybeExistConstraints_23, &ExistConstraintsPrefix_33, &ExistConstraintsSuffix_34);
      parse_tree__parse_tree_out_item__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_26, Name_28, &BracePrefix_35, &BraceSuffix_36);
      mercury__string__builder__append_string_3_p_0(ExistConstraintsPrefix_33, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_32_44);
      if ((Args_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_85;
        MR_Word Var_86;

        mercury__string__builder__append_string_3_p_0(BracePrefix_35, STATE_VARIABLE_State_32_44, &Var_85);
        mercury__string__builder__append_string_3_p_0(NameStr_29, Var_85, &Var_86);
        mercury__string__builder__append_string_3_p_0(BraceSuffix_36, Var_86, &STATE_VARIABLE_State_35_47);
      }
      else
      {
        MR_Word HeadArg_37 = ((MR_Word) ((MR_hl_field(1, Args_25, (MR_Integer) 0))));
        MR_Word TailArgs_38 = ((MR_Word) ((MR_hl_field(1, Args_25, (MR_Integer) 1))));
        MR_Word AnyFieldName_39;
        MR_String BaseASIndent1Str_40;
        MR_Word STATE_VARIABLE_State_44_56;
        MR_Word STATE_VARIABLE_State_52_64;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_83;
        MR_Word Arg_90;
        MR_Word Args_91;
        MR_Word MaybeFieldName_93;

        mercury__string__builder__append_string_3_p_0(BracePrefix_35, STATE_VARIABLE_State_32_44, &Var_77);
        mercury__string__builder__append_string_3_p_0(NameStr_29, Var_77, &Var_78);
        mercury__string__builder__append_string_3_p_0((MR_String) "(\n", Var_78, &STATE_VARIABLE_State_44_56);
        Arg_90 = ((MR_Word) ((MR_hl_field(1, Args_25, (MR_Integer) 0))));
        Args_91 = ((MR_Word) ((MR_hl_field(1, Args_25, (MR_Integer) 1))));
        MaybeFieldName_93 = ((MR_Word) ((MR_hl_field(0, Arg_90, (MR_Integer) 0))));
        if ((MaybeFieldName_93 == (MR_Word) ((MR_Unsigned) 0U)))
          AnyFieldName_39 = hlds__hlds_out__hlds_out_type_table__does_any_arg_have_a_field_name_1_f_0(Args_91);
        else
          AnyFieldName_39 = (MR_Integer) 1;
        BaseASIndent1Str_40 = libs__indent__indent2_string_1_f_0(((((MR_Unsigned) 1U + (MR_Unsigned) 4U)) + (MR_Unsigned) 1U));
        hlds__hlds_out__hlds_out_type_table__format_ctor_args_7_p_0(TVarSet_7, BaseASIndent1Str_40, AnyFieldName_39, HeadArg_37, TailArgs_38, STATE_VARIABLE_State_44_56, &STATE_VARIABLE_State_52_64);
        mercury__string__builder__append_string_3_p_0(BaseASIndentStr_32, STATE_VARIABLE_State_52_64, &Var_80);
        mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_80, &Var_81);
        mercury__string__builder__append_string_3_p_0(BraceSuffix_36, Var_81, &Var_83);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_83, &STATE_VARIABLE_State_35_47);
      }
      mercury__string__builder__append_string_3_p_0(BraceSuffix_36, STATE_VARIABLE_State_35_47, &Var_87);
      mercury__string__builder__append_string_3_p_0(ExistConstraintsSuffix_34, Var_87, &Var_88);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_88, STATE_VARIABLE_State_16);
    }
    else
    {
      MR_Word HeadTailCtor_12 = ((MR_Word) ((MR_hl_field(1, TailCtors_10, (MR_Integer) 0))));
      MR_Word TailTailCtors_13 = ((MR_Word) ((MR_hl_field(1, TailCtors_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_21_21;
      MR_Word next_value_of_HeadCtor_9;
      MR_Word next_value_of_TailCtors_10;
      MR_Word next_value_of_STATE_VARIABLE_State_0_15;

      hlds__hlds_out__hlds_out_type_table__format_ctor_4_p_0(TVarSet_7, HeadCtor_9, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadCtor_9 = HeadTailCtor_12;
      next_value_of_TailCtors_10 = TailTailCtors_13;
      next_value_of_STATE_VARIABLE_State_0_15 = STATE_VARIABLE_State_21_21;
      ArrowOrSemi0_8 = (MR_String) ";       ";
      HeadCtor_9 = next_value_of_HeadCtor_9;
      TailCtors_10 = next_value_of_TailCtors_10;
      STATE_VARIABLE_State_0_15 = next_value_of_STATE_VARIABLE_State_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_4_p_0(
  MR_Word TVarSet_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28)
{
  MR_Word MaybeExistConstraints_9 = ((MR_Word) ((MR_hl_field(0, Ctor_6, (MR_Integer) 1))));
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, Ctor_6, (MR_Integer) 2))));
  MR_Word Args_11 = ((MR_Word) ((MR_hl_field(0, Ctor_6, (MR_Integer) 3))));
  MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(0, Ctor_6, (MR_Integer) 4))));
  MR_String Name_14;
  MR_String NameStr_15;
  MR_String BaseASIndentStr_18;
  MR_String ExistConstraintsPrefix_19;
  MR_String ExistConstraintsSuffix_20;
  MR_String BracePrefix_21;
  MR_String BraceSuffix_22;
  MR_Word STATE_VARIABLE_State_32_32;
  MR_Word STATE_VARIABLE_State_35_35;
  MR_Word Var_77;
  MR_Word Var_78;

  Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
  NameStr_15 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_14);
  BaseASIndentStr_18 = libs__indent__indent2_string_1_f_0(((MR_Unsigned) 1U + (MR_Unsigned) 4U));
  parse_tree__parse_tree_out_item__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_5, BaseASIndentStr_18, (MR_String) "\n", MaybeExistConstraints_9, &ExistConstraintsPrefix_19, &ExistConstraintsSuffix_20);
  parse_tree__parse_tree_out_item__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_12, Name_14, &BracePrefix_21, &BraceSuffix_22);
  mercury__string__builder__append_string_3_p_0(ExistConstraintsPrefix_19, STATE_VARIABLE_State_0_27, &STATE_VARIABLE_State_32_32);
  if ((Args_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_75;
    MR_Word Var_76;

    mercury__string__builder__append_string_3_p_0(BracePrefix_21, STATE_VARIABLE_State_32_32, &Var_75);
    mercury__string__builder__append_string_3_p_0(NameStr_15, Var_75, &Var_76);
    mercury__string__builder__append_string_3_p_0(BraceSuffix_22, Var_76, &STATE_VARIABLE_State_35_35);
  }
  else
  {
    MR_Word HeadArg_23 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
    MR_Word TailArgs_24 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
    MR_Word AnyFieldName_25;
    MR_String BaseASIndent1Str_26;
    MR_Word STATE_VARIABLE_State_44_44;
    MR_Word STATE_VARIABLE_State_52_52;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Arg_80;
    MR_Word Args_81;
    MR_Word MaybeFieldName_83;

    mercury__string__builder__append_string_3_p_0(BracePrefix_21, STATE_VARIABLE_State_32_32, &Var_67);
    mercury__string__builder__append_string_3_p_0(NameStr_15, Var_67, &Var_68);
    mercury__string__builder__append_string_3_p_0((MR_String) "(\n", Var_68, &STATE_VARIABLE_State_44_44);
    Arg_80 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
    Args_81 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
    MaybeFieldName_83 = ((MR_Word) ((MR_hl_field(0, Arg_80, (MR_Integer) 0))));
    if ((MaybeFieldName_83 == (MR_Word) ((MR_Unsigned) 0U)))
      AnyFieldName_25 = hlds__hlds_out__hlds_out_type_table__does_any_arg_have_a_field_name_1_f_0(Args_81);
    else
      AnyFieldName_25 = (MR_Integer) 1;
    BaseASIndent1Str_26 = libs__indent__indent2_string_1_f_0(((((MR_Unsigned) 1U + (MR_Unsigned) 4U)) + (MR_Unsigned) 1U));
    hlds__hlds_out__hlds_out_type_table__format_ctor_args_7_p_0(TVarSet_5, BaseASIndent1Str_26, AnyFieldName_25, HeadArg_23, TailArgs_24, STATE_VARIABLE_State_44_44, &STATE_VARIABLE_State_52_52);
    mercury__string__builder__append_string_3_p_0(BaseASIndentStr_18, STATE_VARIABLE_State_52_52, &Var_70);
    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_70, &Var_71);
    mercury__string__builder__append_string_3_p_0(BraceSuffix_22, Var_71, &Var_73);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_73, &STATE_VARIABLE_State_35_35);
  }
  mercury__string__builder__append_string_3_p_0(BraceSuffix_22, STATE_VARIABLE_State_35_35, &Var_77);
  mercury__string__builder__append_string_3_p_0(ExistConstraintsSuffix_20, Var_77, &Var_78);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_78, STATE_VARIABLE_State_28);
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_type_table__does_any_arg_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Arg_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFieldName_6 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 0))));

      if ((MaybeFieldName_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = Args_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        HeadVar__2_2 = (MR_Integer) 1;
    }
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_ctor_args_7_p_0(
  MR_Word TVarSet_8,
  MR_String IndentStr_9,
  MR_Word AnyFieldName_10,
  MR_Word HeadArg_11,
  MR_Word TailArgs_12,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
{
  while (MR_TRUE)
  {
    MR_Word MaybeFieldName_14 = ((MR_Word) ((MR_hl_field(0, HeadArg_11, (MR_Integer) 0))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, HeadArg_11, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_State_23_23;
    MR_Word STATE_VARIABLE_State_26_26;
    MR_Word STATE_VARIABLE_State_39_39;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__builder__append_string_3_p_0(IndentStr_9, STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_23_23);
    switch (AnyFieldName_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_State_26_26 = STATE_VARIABLE_State_23_23;
        break;
      case (MR_Integer) 1:
        if ((MaybeFieldName_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_55;

          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[0]), (MR_Integer) 24, (MR_String) "", &Var_55);
          mercury__string__builder__append_string_3_p_0(Var_55, STATE_VARIABLE_State_23_23, &STATE_VARIABLE_State_26_26);
        }
        else
        {
          MR_Word FieldName_17;
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, MaybeFieldName_14, (MR_Integer) 0))));
          MR_String Var_35;
          MR_Word Var_45;
          MR_String Var_46;

          FieldName_17 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
          Var_35 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_17);
          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_4[1]), (MR_Integer) 20, Var_35, &Var_46);
          mercury__string__builder__append_string_3_p_0(Var_46, STATE_VARIABLE_State_23_23, &Var_45);
          mercury__string__builder__append_string_3_p_0((MR_String) " :: ", Var_45, &STATE_VARIABLE_State_26_26);
        }
        break;
    }
    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), TVarSet_8, (MR_Integer) 0, Type_15, STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_39_39);
    if ((TailArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_39_39, STATE_VARIABLE_State_22);
    else
    {
      MR_Word HeadTailArg_19 = ((MR_Word) ((MR_hl_field(1, TailArgs_12, (MR_Integer) 0))));
      MR_Word TailTailArgs_20 = ((MR_Word) ((MR_hl_field(1, TailArgs_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_43_43;
      MR_Word next_value_of_HeadArg_11;
      MR_Word next_value_of_TailArgs_12;
      MR_Word next_value_of_STATE_VARIABLE_State_0_21;

      mercury__string__builder__append_string_3_p_0((MR_String) ",\n", STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_43_43);
      // direct tailcall eliminated
      ;
      next_value_of_HeadArg_11 = HeadTailArg_19;
      next_value_of_TailArgs_12 = TailTailArgs_20;
      next_value_of_STATE_VARIABLE_State_0_21 = STATE_VARIABLE_State_43_43;
      HeadArg_11 = next_value_of_HeadArg_11;
      TailArgs_12 = next_value_of_TailArgs_12;
      STATE_VARIABLE_State_0_21 = next_value_of_STATE_VARIABLE_State_0_21;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_type_repn__foreign_type_assertion_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(
  MR_Word ForeignTypeAssertions_3)
{
  MR_String String_4;
  MR_Word AssertionSet_5 = (MR_Word) (ForeignTypeAssertions_3);
  MR_Word Assertions_6;
  MR_Word AssertionStrs_7;
  MR_String Var_10;
  MR_String Var_11;

  Assertions_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionSet_5);
  AssertionStrs_7 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[2]), Assertions_6);
  Var_11 = mercury__string__join_list_2_f_0((MR_String) ", ", AssertionStrs_7);
  Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) "]");
  String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_10);
  return String_4;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(
  MR_Word MaybeCanonical_3)
{
  MR_String String_4;

  if ((MaybeCanonical_3 == (MR_Word) ((MR_Unsigned) 0U)))
    String_4 = (MR_String) "canon";
  else
  {
    MR_Word NonCanonical_5 = ((MR_Word) ((MR_hl_field(1, MaybeCanonical_3, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) NonCanonical_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_4 = (MR_String) "noncanon_subtype";
        break;
      case (MR_Integer) 1:
        {
          MR_Word EqSymName_6 = ((MR_Word) ((MR_hl_field(1, NonCanonical_5, (MR_Integer) 0))));
          MR_Word CmpSymName_7 = ((MR_Word) ((MR_hl_field(1, NonCanonical_5, (MR_Integer) 1))));
          MR_String Var_12;
          MR_String Var_15;
          MR_String Var_33;
          MR_String Var_35;
          MR_String Var_36;

          Var_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(EqSymName_6);
          Var_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(CmpSymName_7);
          Var_33 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) ")");
          Var_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_33);
          Var_36 = mercury__string__f_43_43_2_f_0(Var_12, Var_35);
          String_4 = mercury__string__f_43_43_2_f_0((MR_String) "eq_cmp(", Var_36);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_20;
          MR_Word EqSymName_27 = ((MR_Word) ((MR_hl_field(2, NonCanonical_5, (MR_Integer) 0))));
          MR_String Var_30;

          Var_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(EqSymName_27);
          Var_30 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) ")");
          String_4 = mercury__string__f_43_43_2_f_0((MR_String) "eq(", Var_30);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_25;
              MR_Word CmpSymName_28 = ((MR_Word) ((MR_hl_field(3, NonCanonical_5, (MR_Integer) 1))));
              MR_String Var_39;

              Var_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(CmpSymName_28);
              Var_39 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ")");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cmp(", Var_39);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsSolver_8 = ((MR_Unsigned) ((MR_hl_field(3, NonCanonical_5, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (IsSolver_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  String_4 = (MR_String) "noncanon_abstract";
                  break;
                case (MR_Integer) 1:
                  String_4 = (MR_String) "noncanon_abstract_solver";
                  break;
              }
            }
            break;
        }
        break;
    }
  }
  return String_4;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_type_table__unqual_cons_id_1_f_0(
  MR_Word ConsId_3)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
  MR_Word UnQualConsId_4;
  MR_Word SymName_5;
  MR_Integer Arity_6;
  MR_Word TypeCtor_7;

  if (succeeded)
  {
    SymName_5 = ((MR_Word) ((MR_hl_field(3, ConsId_3, (MR_Integer) 1))));
    Arity_6 = ((MR_Integer) ((MR_hl_field(3, ConsId_3, (MR_Integer) 2))));
    TypeCtor_7 = ((MR_Word) ((MR_hl_field(3, ConsId_3, (MR_Integer) 3))));
    {
      MR_Word Var_8;
      MR_String Var_9;

      Var_9 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_9));
      }
      {
        UnQualConsId_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, UnQualConsId_4, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, UnQualConsId_4, 1) = ((MR_Box) (Var_8));
        MR_hl_field(3, UnQualConsId_4, 2) = ((MR_Box) (Arity_6));
        MR_hl_field(3, UnQualConsId_4, 3) = ((MR_Box) (TypeCtor_7));
      }
    }
  }
  else
    UnQualConsId_4 = ConsId_3;
  return UnQualConsId_4;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__format_comma_type_params_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_3,
  MR_Word * STATE_VARIABLE_State_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_4 = STATE_VARIABLE_State_0_3;
    else
    {
      MR_Word Param_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Params_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_16_16;
      MR_Word STATE_VARIABLE_State_19_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_State_0_3;

      mercury__string__builder__append_string_3_p_0((MR_String) ", ", STATE_VARIABLE_State_0_3, &STATE_VARIABLE_State_16_16);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), HeadVar__1_1, (MR_Integer) 0, Param_10, STATE_VARIABLE_State_16_16, &STATE_VARIABLE_State_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Params_11;
      next_value_of_STATE_VARIABLE_State_0_3 = STATE_VARIABLE_State_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_State_0_3 = next_value_of_STATE_VARIABLE_State_0_3;
      continue;
    }
    break;
  }
}

void mercury__hlds__hlds_out__hlds_out_type_table__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_type_table__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_type_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_type_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_type_table.
