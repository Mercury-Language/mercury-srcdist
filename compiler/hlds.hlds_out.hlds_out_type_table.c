/*
** Automatically generated from `hlds_out_type_table.m'
** by the Mercury compiler,
** version rotd-2022-06-24
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
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
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_type_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__foreign_type_assertion_to_string_1_f_0(
  MR_Word Assertion_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__type_table_entry_is_local_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_type_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_type_table_entries_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TypeBody_11,
  MR_Word TVarSet_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructor_repns_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word CtorRepns_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructor_repns_loop_7_p_0(
  MR_Word Stream_8,
  MR_Word TVarSet_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtorRepn_11,
  MR_Word TailCtorRepns_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_ctor_repn_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word CtorRepn_8);

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
hlds__hlds_out__hlds_out_type_table__mercury_output_ctor_arg_repns_9_p_0(
  MR_Word Stream_10,
  MR_Word TVarSet_11,
  MR_Integer Indent_12,
  MR_Word AnyFieldName_13,
  MR_Integer CurArgNum_14,
  MR_Word HeadArgRepn_15,
  MR_Word TailArgRepns_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_arg_pos_width_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Integer CurArgNum_9,
  MR_Word ArgPosWidth_10);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__fill_kind_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructors_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word HeadCtor_9,
  MR_Word TailCtors_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructors_loop_7_p_0(
  MR_Word Stream_8,
  MR_Word TVarSet_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtor_11,
  MR_Word TailCtors_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_ctor_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word Ctor_8);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_type_table__does_any_arg_have_a_field_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__mercury_output_ctor_args_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_Word AnyFieldName_12,
  MR_Word HeadArg_13,
  MR_Word TailArgs_14);

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
hlds__hlds_out__hlds_out_type_table__write_comma_type_params_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_1[3][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_2[2][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_5[1][4];


struct hlds__hlds_out__hlds_out_type_table__vector_common_type_4_0_s {
  const MR_String hlds__hlds_out__hlds_out_type_table__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_type_table__vector_common_type_4_0_s hlds__hlds_out__hlds_out_type_table_vector_common_4[8];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_type_table__write_type_table_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_2[2][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_type_table_scalar_common_5[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_type_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_type_table__vector_common_type_4_0_s hlds__hlds_out__hlds_out_type_table_vector_common_4[8] = {
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



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_type_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_type_table__foreign_type_assertion_to_string_1_f_0(
  MR_Word Assertion_3)
{
  MR_String String_4;

  switch (Assertion_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_4 = (MR_String) "pass_as_mercury";
      break;
    case (MR_Integer) 1:
      String_4 = (MR_String) "stable";
      break;
    case (MR_Integer) 2:
      String_4 = (MR_String) "word_aligned_ptr";
      break;
  }
  return String_4;
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__type_table_entry_is_local_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word TypeDefn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word TypeStatus_4;
  MR_Word Var_5;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_3, &TypeStatus_4);
  Var_5 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_4);
  succeeded = (Var_5 == (MR_Integer) 1);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_type_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_out__hlds_out_type_table__type_table_entry_is_local_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_type_table_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word LocalOnly_9,
  MR_Word TypeTable_10)
{
  MR_bool succeeded;
  MR_Word TypeAssocList_12;
  MR_Word SortedTypeAssocList_13;
  MR_Word PrintedTypeAssocList_14;

  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Types --------\n");
  hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_10, &TypeAssocList_12);
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[0]), TypeAssocList_12, &SortedTypeAssocList_13);
  switch (LocalOnly_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PrintedTypeAssocList_14 = SortedTypeAssocList_13;
      break;
    case (MR_Integer) 1:
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[0]), (MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[2]), SortedTypeAssocList_13, &PrintedTypeAssocList_14);
      break;
  }
  hlds__hlds_out__hlds_out_type_table__write_type_table_entries_5_p_0(Info_7, Stream_8, PrintedTypeAssocList_14);
  mercury__io__nl_3_p_0(Stream_8);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_type_table_entries_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Types_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_13, (MR_Integer) 0))));
      MR_Word TypeDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_13, (MR_Integer) 1))));
      MR_Word TVarSet_26;
      MR_Word TypeParams_27;
      MR_Word TypeBody_28;
      MR_Word TypeStatus_29;
      MR_Word Context_30;
      MR_String DumpOptions_31;
      MR_Word next_value_of_HeadVar__3_3;

      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_24, &TVarSet_26);
      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_24, &TypeParams_27);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_24, &TypeBody_28);
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_24, &TypeStatus_29);
      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_24, &Context_30);
      mercury__io__write_char_4_p_0(Stream_2, (MR_Char) 10);
      hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_2, (MR_Integer) 0, (MR_String) "", Context_30);
      DumpOptions_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0))));
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_31, (MR_Char) 99);
      if (succeeded)
      {
        MR_String Var_43;

        Var_43 = hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(TypeStatus_29);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "% status ");
        mercury__io__write_string_4_p_0(Stream_2, Var_43);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      }
      if (((((MR_tag((MR_Word) TypeBody_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_28, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeBody_28, (MR_Integer) 1))));

        succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 12U));
      }
      else
      if (((((MR_tag((MR_Word) TypeBody_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_28, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- solver type ");
      else
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ":- type ");
      parse_tree__prog_out__write_type_name_4_p_0(Stream_2, TypeCtor_23);
      if (!((TypeParams_27 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word HeadParam_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeParams_27, (MR_Integer) 0))));
        MR_Word TailParams_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeParams_27, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "(");
        parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_26, (MR_Integer) 0, HeadParam_66, Stream_2);
        hlds__hlds_out__hlds_out_type_table__write_comma_type_params_loop_5_p_0(Stream_2, TVarSet_26, TailParams_67);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ")");
      }
      hlds__hlds_out__hlds_out_type_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_51_93_95_48_7_p_0(Info_1, Stream_2, TypeBody_28, TVarSet_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_116_121_112_101_95_98_111_100_121_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TypeBody_11,
  MR_Word TVarSet_12)
{
  MR_String IndentStr_15;

  IndentStr_15 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0((MR_Integer) 1);
  switch (MR_tag((MR_Word) TypeBody_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_16 = (MR_Word) ((MR_Word) (TypeBody_11));
        MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_16, (MR_Integer) 0))));
        MR_Word MaybeSuperType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_16, (MR_Integer) 1))));
        MR_Word MaybeUserEqComp_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_16, (MR_Integer) 2))));
        MR_Word MaybeRepn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_16, (MR_Integer) 3))));
        MR_Word Foreign_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_16, (MR_Integer) 4))));
        MR_Word MercInfo_25;

        mercury__io__nl_3_p_0(Stream_9);
        if (!((MaybeSuperType_18 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word SuperType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_18, (MR_Integer) 0))));
          MR_String SuperTypeStr_23;

          SuperTypeStr_23 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_12, (MR_Integer) 0, SuperType_22);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% subtype of ");
          mercury__io__write_string_4_p_0(Stream_9, SuperTypeStr_23);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
        MercInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
        if ((MaybeRepn_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word HeadCtor_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_17, (MR_Integer) 0))));
          MR_Word TailCtors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_17, (MR_Integer) 1))));

          hlds__hlds_out__hlds_out_type_table__write_constructors_6_p_0(Stream_9, TVarSet_12, HeadCtor_26, TailCtors_27);
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(MercInfo_25, TVarSet_12, (MR_Word) ((MR_Unsigned) 0U), MaybeUserEqComp_19, (MR_Word) ((MR_Unsigned) 0U), Stream_9);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% no type representation information yet\n");
        }
        else
        {
          MR_Word Repn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_20, (MR_Integer) 0))));
          MR_Word CtorRepns_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_29, (MR_Integer) 0))));
          MR_Word CheaperTagTest_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_29, (MR_Integer) 2))));
          MR_Word DuTypeKind_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_29, (MR_Integer) 3))));
          MR_Word MaybeDirectArgCtors_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_29, (MR_Integer) 4))));

          hlds__hlds_out__hlds_out_type_table__write_constructor_repns_5_p_0(Stream_9, TVarSet_12, CtorRepns_30);
          if (!((CheaperTagTest_32 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ExpConsId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_32, (MR_Integer) 0))));
            MR_Word ExpConsTag_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_32, (MR_Integer) 1))));
            MR_Word CheapConsId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_32, (MR_Integer) 2))));
            MR_Word CheapConsTag_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_32, (MR_Integer) 3))));
            MR_String ExpConsIdStr_38;
            MR_String CheapConsIdStr_39;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_String Var_114;
            MR_String Var_129;

            Var_94 = hlds__hlds_out__hlds_out_type_table__unqual_cons_id_1_f_0(ExpConsId_34);
            ExpConsIdStr_38 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(Var_94);
            Var_95 = hlds__hlds_out__hlds_out_type_table__unqual_cons_id_1_f_0(CheapConsId_36);
            CheapConsIdStr_39 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(Var_95);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% cheaper tag test:\n");
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%   from ");
            mercury__io__write_string_4_p_0(Stream_9, ExpConsIdStr_38);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
            Var_114 = hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(ExpConsTag_35);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%      ");
            mercury__io__write_string_4_p_0(Stream_9, Var_114);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%   to ");
            mercury__io__write_string_4_p_0(Stream_9, CheapConsIdStr_39);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
            Var_129 = hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(CheapConsTag_37);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%      ");
            mercury__io__write_string_4_p_0(Stream_9, Var_129);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
          }
          switch (MR_tag((MR_Word) DuTypeKind_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% KIND enumeration\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% KIND dummy\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% KIND general\n");
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lang_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), DuTypeKind_33, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_String Var_142;

                Var_142 = libs__globals__foreign_language_string_1_f_0(Lang_40);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% KIND foreign enumeration for ");
                mercury__io__write_string_4_p_0(Stream_9, Var_142);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word FunctorName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_33, (MR_Integer) 0))));
                MR_Word ArgType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_33, (MR_Integer) 1))));
                MR_Word MaybeArgName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_33, (MR_Integer) 2))));
                MR_String ArgTypeStr_44;
                MR_String ArgName_45;
                MR_String Var_156;

                ArgTypeStr_44 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_12, (MR_Integer) 0, ArgType_42);
                if ((MaybeArgName_43 == (MR_Word) ((MR_Unsigned) 0U)))
                  ArgName_45 = (MR_String) "no arg name";
                else
                  ArgName_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgName_43, (MR_Integer) 0))));
                Var_156 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(FunctorName_41);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% KIND notag: ");
                mercury__io__write_string_4_p_0(Stream_9, Var_156);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                mercury__io__write_string_4_p_0(Stream_9, ArgTypeStr_44);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                mercury__io__write_string_4_p_0(Stream_9, ArgName_45);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              }
              break;
          }
          parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(MercInfo_25, TVarSet_12, (MR_Word) ((MR_Unsigned) 0U), MaybeUserEqComp_19, MaybeDirectArgCtors_246, Stream_9);
          if (!((Foreign_21 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% has foreign_type\n");
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody_53 = (MR_Word) (MR_body((MR_Word) (TypeBody_11), (MR_Integer) 1));
        MR_Word MaybeC_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_53, (MR_Integer) 0))));
        MR_Word MaybeJava_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_53, (MR_Integer) 1))));
        MR_Word MaybeCsharp_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_53, (MR_Integer) 2))));
        MR_String MaybeCStr_57;
        MR_String MaybeJavaStr_62;
        MR_String MaybeCsharpStr_67;
        MR_String Indent1Str_72;

        if ((MaybeC_54 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeCStr_57 = (MR_String) "no_c";
        else
        {
          MR_Word C_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_54, (MR_Integer) 0))));
          MR_String CTypeName_59;
          MR_Word CCanonical_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_58, (MR_Integer) 1))));
          MR_Word CAssertions_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_58, (MR_Integer) 2))));
          MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_58, (MR_Integer) 0))));
          MR_String Var_195;
          MR_String Var_198;
          MR_String Var_265;
          MR_String Var_267;
          MR_String Var_268;
          MR_String Var_270;
          MR_String Var_271;

          CTypeName_59 = (MR_String) (Var_189);
          Var_195 = hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(CCanonical_60);
          Var_198 = hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(CAssertions_61);
          Var_265 = mercury__string__f_43_43_2_f_0(Var_198, (MR_String) ")");
          Var_267 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_265);
          Var_268 = mercury__string__f_43_43_2_f_0(Var_195, Var_267);
          Var_270 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_268);
          Var_271 = mercury__string__f_43_43_2_f_0(CTypeName_59, Var_270);
          MaybeCStr_57 = mercury__string__f_43_43_2_f_0((MR_String) "c(", Var_271);
        }
        if ((MaybeJava_55 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeJavaStr_62 = (MR_String) "no_java";
        else
        {
          MR_Word Java_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeJava_55, (MR_Integer) 0))));
          MR_String JavaTypeName_64;
          MR_Word JavaCanonical_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Java_63, (MR_Integer) 1))));
          MR_Word JavaAssertions_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Java_63, (MR_Integer) 2))));
          MR_Word Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Java_63, (MR_Integer) 0))));
          MR_String Var_206;
          MR_String Var_209;
          MR_String Var_274;
          MR_String Var_276;
          MR_String Var_277;
          MR_String Var_279;
          MR_String Var_280;

          JavaTypeName_64 = (MR_String) (Var_200);
          Var_206 = hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(JavaCanonical_65);
          Var_209 = hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(JavaAssertions_66);
          Var_274 = mercury__string__f_43_43_2_f_0(Var_209, (MR_String) ")");
          Var_276 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_274);
          Var_277 = mercury__string__f_43_43_2_f_0(Var_206, Var_276);
          Var_279 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_277);
          Var_280 = mercury__string__f_43_43_2_f_0(JavaTypeName_64, Var_279);
          MaybeJavaStr_62 = mercury__string__f_43_43_2_f_0((MR_String) "java(", Var_280);
        }
        if ((MaybeCsharp_56 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeCsharpStr_67 = (MR_String) "no_csharp";
        else
        {
          MR_Word Csharp_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCsharp_56, (MR_Integer) 0))));
          MR_String CsharpTypeName_69;
          MR_Word CsharpCanonical_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Csharp_68, (MR_Integer) 1))));
          MR_Word CsharpAssertions_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Csharp_68, (MR_Integer) 2))));
          MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Csharp_68, (MR_Integer) 0))));
          MR_String Var_217;
          MR_String Var_220;
          MR_String Var_283;
          MR_String Var_285;
          MR_String Var_286;
          MR_String Var_288;
          MR_String Var_289;

          CsharpTypeName_69 = (MR_String) (Var_211);
          Var_217 = hlds__hlds_out__hlds_out_type_table__maybe_canonical_to_simple_string_1_f_0(CsharpCanonical_70);
          Var_220 = hlds__hlds_out__hlds_out_type_table__foreign_type_assertions_to_simple_string_1_f_0(CsharpAssertions_71);
          Var_283 = mercury__string__f_43_43_2_f_0(Var_220, (MR_String) ")");
          Var_285 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_283);
          Var_286 = mercury__string__f_43_43_2_f_0(Var_217, Var_285);
          Var_288 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_286);
          Var_289 = mercury__string__f_43_43_2_f_0(CsharpTypeName_69, Var_288);
          MaybeCsharpStr_67 = mercury__string__f_43_43_2_f_0((MR_String) "csharp(", Var_289);
        }
        Indent1Str_72 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1));
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " is foreign_type(\n");
        mercury__io__write_string_4_p_0(Stream_9, Indent1Str_72);
        mercury__io__write_string_4_p_0(Stream_9, MaybeCStr_57);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
        mercury__io__write_string_4_p_0(Stream_9, Indent1Str_72);
        mercury__io__write_string_4_p_0(Stream_9, MaybeJavaStr_62);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
        mercury__io__write_string_4_p_0(Stream_9, Indent1Str_72);
        mercury__io__write_string_4_p_0(Stream_9, MaybeCsharpStr_67);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ").\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_11, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " == ");
        parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_12, (MR_Integer) 0, Type_51, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeBody_11, (MR_Integer) 1))));
            MR_Word SolverTypeDetails_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_73, (MR_Integer) 0))));
            MR_Word Var_241;
            MR_Word MaybeUserEqComp_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_73, (MR_Integer) 1))));
            MR_Word MercInfo_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));

            {
              Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (SolverTypeDetails_74));
            }
            parse_tree__parse_tree_out__mercury_output_where_attributes_8_p_0(MercInfo_248, TVarSet_12, Var_241, MaybeUserEqComp_247, (MR_Word) ((MR_Unsigned) 0U), Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".\n");
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".\n");
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructor_repns_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word CtorRepns_8)
{
  if ((CtorRepns_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_out.hlds_out_type_table.write_constructor_repns\'/5", (MR_String) "empty constructor list");
      return;
    }
  else
  {
    MR_Word HeadCtorRepn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_8, (MR_Integer) 0))));
    MR_Word TailCtorRepns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_8, (MR_Integer) 1))));

    hlds__hlds_out__hlds_out_type_table__write_constructor_repns_loop_7_p_0(Stream_6, TVarSet_7, (MR_String) "--->    ", HeadCtorRepn_10, TailCtorRepns_11);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructor_repns_loop_7_p_0(
  MR_Word Stream_8,
  MR_Word TVarSet_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtorRepn_11,
  MR_Word TailCtorRepns_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_8, ArrowOrSemi0_10);
    if ((TailCtorRepns_12 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_out__hlds_out_type_table__write_ctor_repn_5_p_0(Stream_8, TVarSet_9, HeadCtorRepn_11);
    else
    {
      MR_Word HeadTailCtorRepn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtorRepns_12, (MR_Integer) 0))));
      MR_Word TailTailCtorRepns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtorRepns_12, (MR_Integer) 1))));
      MR_Word next_value_of_HeadCtorRepn_11;
      MR_Word next_value_of_TailCtorRepns_12;

      hlds__hlds_out__hlds_out_type_table__write_ctor_repn_5_p_0(Stream_8, TVarSet_9, HeadCtorRepn_11);
      // direct tailcall eliminated
      ;
      next_value_of_HeadCtorRepn_11 = HeadTailCtorRepn_14;
      next_value_of_TailCtorRepns_12 = TailTailCtorRepns_15;
      ArrowOrSemi0_10 = (MR_String) ";       ";
      HeadCtorRepn_11 = next_value_of_HeadCtorRepn_11;
      TailCtorRepns_12 = next_value_of_TailCtorRepns_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_ctor_repn_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word CtorRepn_8)
{
  MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_8, (MR_Integer) 1))));
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_8, (MR_Integer) 2))));
  MR_Word ConsTag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_8, (MR_Integer) 3))));
  MR_Word ArgRepns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_8, (MR_Integer) 4))));
  MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_8, (MR_Integer) 5))));
  MR_String Name_17;
  MR_String NameStr_18;
  MR_String ExistConstraintsPrefix_21;
  MR_String ExistConstraintsSuffix_22;
  MR_String BracePrefix_23;
  MR_String BraceSuffix_24;
  MR_String ConsTagString_25;
  MR_String Var_32;
  MR_String Var_40;
  MR_String Var_44;
  MR_String Var_79;
  MR_String Var_81;

  Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
  NameStr_18 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_17);
  Var_32 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4));
  parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_7, Var_32, (MR_String) "\n", MaybeExistConstraints_11, &ExistConstraintsPrefix_21, &ExistConstraintsSuffix_22);
  parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_15, Name_17, &BracePrefix_23, &BraceSuffix_24);
  mercury__io__write_string_4_p_0(Stream_6, ExistConstraintsPrefix_21);
  mercury__io__write_string_4_p_0(Stream_6, BracePrefix_23);
  Var_40 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4));
  Var_44 = hlds__hlds_out__hlds_out_type_table__du_cons_tag_to_string_1_f_0(ConsTag_13);
  Var_79 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "\n");
  Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "% tag: ", Var_79);
  ConsTagString_25 = mercury__string__f_43_43_2_f_0(Var_40, Var_81);
  if ((ArgRepns_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_6, BracePrefix_23);
    mercury__io__write_string_4_p_0(Stream_6, NameStr_18);
    mercury__io__write_string_4_p_0(Stream_6, BraceSuffix_24);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_6, ConsTagString_25);
  }
  else
  {
    MR_Word HeadArgRepn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_14, (MR_Integer) 0))));
    MR_Word TailArgRepns_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_14, (MR_Integer) 1))));
    MR_Word AnyFieldName_28;
    MR_Word ArgRepn_95;
    MR_Word ArgRepns_96;
    MR_Word MaybeFieldName_98;

    mercury__io__write_string_4_p_0(Stream_6, BracePrefix_23);
    mercury__io__write_string_4_p_0(Stream_6, NameStr_18);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(\n");
    mercury__io__write_string_4_p_0(Stream_6, ConsTagString_25);
    ArgRepn_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_14, (MR_Integer) 0))));
    ArgRepns_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_14, (MR_Integer) 1))));
    MaybeFieldName_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRepn_95, (MR_Integer) 0))));
    if ((MaybeFieldName_98 == (MR_Word) ((MR_Unsigned) 0U)))
      AnyFieldName_28 = hlds__hlds_out__hlds_out_type_table__does_any_arg_repn_have_a_field_name_1_f_0(ArgRepns_96);
    else
      AnyFieldName_28 = (MR_Integer) 1;
    hlds__hlds_out__hlds_out_type_table__mercury_output_ctor_arg_repns_9_p_0(Stream_6, TVarSet_7, (MR_Integer) ((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4)) + (MR_Unsigned) 1), AnyFieldName_28, (MR_Integer) 1, HeadArgRepn_26, TailArgRepns_27);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4));
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    mercury__io__write_string_4_p_0(Stream_6, BraceSuffix_24);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_6, ExistConstraintsSuffix_22);
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
        MR_Word IntTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) IntTag_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_20, (MR_Integer) 0))));
              MR_String Var_244;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), N_21, &Var_244);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum ", Var_244);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_out.hlds_out_type_table.du_cons_tag_to_string\'/1", (MR_String) "non-du cons_tag");
            break;
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 0))))) {
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
            MR_Word Lang_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String ForeignName_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2))));
            MR_String Var_106;
            MR_String Var_253;
            MR_String Var_254;

            Var_106 = libs__globals__foreign_language_string_1_f_0(Lang_18);
            Var_253 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_106);
            Var_254 = mercury__string__f_43_43_2_f_0(ForeignName_19, Var_253);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", Var_254);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t Ptag_5;
            MR_Word LocalSectag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2))));
            MR_Word SectagMask_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_String MaskString_8;
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));
            MR_String Var_58;
            MR_String Var_128;
            MR_String Var_129;
            MR_String Var_131;
            MR_Unsigned Var_133;
            MR_String Var_134;
            MR_String Var_141;

            Ptag_5 = (uint8_t) (Var_52);
            switch (SectagMask_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaskString_8 = (MR_String) "rest of word";
                break;
              case (MR_Integer) 1:
                MaskString_8 = (MR_String) "must be masked";
                break;
            }
            Var_58 = hlds__hlds_out__hlds_out_type_table__local_sectag_to_string_1_f_0(LocalSectag_6);
            Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ", no args, ", MaskString_8);
            Var_129 = mercury__string__f_43_43_2_f_0(Var_58, Var_128);
            Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ", local sectag ", Var_129);
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_5, &Var_133);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_133, &Var_134);
            Var_141 = mercury__string__f_43_43_2_f_0(Var_134, Var_131);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_141);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                String_4 = (MR_String) "ptag 0, remote sectag none, only functor";
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_10, (MR_Integer) 0))));
                  uint8_t Ptag_122 = (uint8_t) (Var_70);
                  MR_Unsigned Var_145;
                  MR_String Var_146;
                  MR_String Var_153;

                  mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_122, &Var_145);
                  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_145, &Var_146);
                  Var_153 = mercury__string__f_43_43_2_f_0(Var_146, (MR_String) ", remote sectag none, unshared");
                  String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_153);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_10, (MR_Integer) 1))));
                  MR_Unsigned SectagValue_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_11, (MR_Integer) 0))));
                  MR_Word SectagSize_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_11, (MR_Integer) 1))));
                  MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_10, (MR_Integer) 0))));
                  uint8_t Ptag_123 = (uint8_t) (Var_75);

                  if ((SectagSize_13 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_String Var_157;
                    MR_String Var_164;
                    MR_String Var_166;
                    MR_Unsigned Var_168;
                    MR_String Var_169;
                    MR_String Var_176;

                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, SectagValue_12, &Var_157);
                    Var_164 = mercury__string__f_43_43_2_f_0(Var_157, (MR_String) " full word");
                    Var_166 = mercury__string__f_43_43_2_f_0((MR_String) ", remote sectag ", Var_164);
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_123, &Var_168);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_168, &Var_169);
                    Var_176 = mercury__string__f_43_43_2_f_0(Var_169, Var_166);
                    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_176);
                  }
                  else
                  {
                    MR_Word SectagBits_14 = (MR_Word) (MR_body((MR_Word) (SectagSize_13), (MR_Integer) 1));
                    uint8_t NumRemoteSectagBits_15 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_14, (MR_Integer) 0)));
                    MR_Unsigned Mask_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectagBits_14, (MR_Integer) 1))));
                    MR_String Var_179;
                    MR_String Var_187;
                    MR_Unsigned Var_189;
                    MR_String Var_190;
                    MR_String Var_197;
                    MR_String Var_199;
                    MR_String Var_201;
                    MR_String Var_208;
                    MR_String Var_210;
                    MR_Unsigned Var_212;
                    MR_String Var_213;
                    MR_String Var_220;

                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 2, Mask_16, &Var_179);
                    Var_187 = mercury__string__f_43_43_2_f_0((MR_String) " bits, mask ", Var_179);
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumRemoteSectagBits_15, &Var_189);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_189, &Var_190);
                    Var_197 = mercury__string__f_43_43_2_f_0(Var_190, Var_187);
                    Var_199 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_197);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, SectagValue_12, &Var_201);
                    Var_208 = mercury__string__f_43_43_2_f_0(Var_201, Var_199);
                    Var_210 = mercury__string__f_43_43_2_f_0((MR_String) ", remote sectag ", Var_208);
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_123, &Var_212);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_212, &Var_213);
                    Var_220 = mercury__string__f_43_43_2_f_0(Var_213, Var_210);
                    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_220);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Unsigned Data_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RemoteArgsTagInfo_10, (MR_Integer) 0))));
                  MR_String Var_223;

                  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Data_17, &Var_223);
                  String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ctor ", Var_223);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));

            if ((LocalArgsTagInfo_9 == (MR_Word) ((MR_Unsigned) 0U)))
              String_4 = (MR_String) "ptag 0, local sectag none, only functor";
            else
            {
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_9, (MR_Integer) 0))));
              MR_String Var_68;
              uint8_t Ptag_116 = (uint8_t) (Var_62);
              MR_Word LocalSectag_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_9, (MR_Integer) 1))));
              MR_String Var_232;
              MR_Unsigned Var_234;
              MR_String Var_235;
              MR_String Var_242;

              Var_68 = hlds__hlds_out__hlds_out_type_table__local_sectag_to_string_1_f_0(LocalSectag_117);
              Var_232 = mercury__string__f_43_43_2_f_0((MR_String) ", local sectag ", Var_68);
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_116, &Var_234);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_234, &Var_235);
              Var_242 = mercury__string__f_43_43_2_f_0(Var_235, Var_232);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "ptag ", Var_242);
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));
            uint8_t Ptag_126 = (uint8_t) (Var_96);
            MR_Unsigned Var_257;
            MR_String Var_258;

            mercury__string__format__format_cast_uint8_to_uint_2_p_0(Ptag_126, &Var_257);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_257, &Var_258);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "direct arg tag ", Var_258);
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
  MR_Unsigned SectagValue_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_3, (MR_Integer) 0))));
  MR_Word SectagBits_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_3, (MR_Integer) 2))));
  uint8_t NumBits_8 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_7, (MR_Integer) 0)));

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
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, Var_18, &Var_19);
    Var_26 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) " bits");
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_26);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 1, SectagValue_5, &Var_30);
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
      MR_Word ArgRepn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgRepns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFieldName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRepn_3, (MR_Integer) 0))));

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
hlds__hlds_out__hlds_out_type_table__mercury_output_ctor_arg_repns_9_p_0(
  MR_Word Stream_10,
  MR_Word TVarSet_11,
  MR_Integer Indent_12,
  MR_Word AnyFieldName_13,
  MR_Integer CurArgNum_14,
  MR_Word HeadArgRepn_15,
  MR_Word TailArgRepns_16)
{
  while (MR_TRUE)
  {
    MR_Word MaybeFieldName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgRepn_15, (MR_Integer) 0))));
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgRepn_15, (MR_Integer) 1))));
    MR_Word ArgPosWidth_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArgRepn_15, (MR_Integer) 2))));

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_10, Indent_12);
    switch (AnyFieldName_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeFieldName_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_63;

          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 24, (MR_String) "", &Var_63);
          mercury__io__write_string_4_p_0(Stream_10, Var_63);
        }
        else
        {
          MR_Word FieldName_22;
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_18, (MR_Integer) 0))));
          MR_String Var_40;
          MR_String Var_54;

          FieldName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
          Var_40 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_22);
          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), (MR_Integer) 20, Var_40, &Var_54);
          mercury__io__write_string_4_p_0(Stream_10, Var_54);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) " :: ");
        }
        break;
    }
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_11, (MR_Integer) 0, Type_19, Stream_10);
    if ((TailArgRepns_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
      hlds__hlds_out__hlds_out_type_table__write_arg_pos_width_6_p_0(Stream_10, Indent_12, CurArgNum_14, ArgPosWidth_20);
    }
    else
    {
      MR_Word HeadTailArgRepn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgRepns_16, (MR_Integer) 0))));
      MR_Word TailTailArgRepns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgRepns_16, (MR_Integer) 1))));
      MR_Integer Var_50;
      MR_Integer next_value_of_CurArgNum_14;
      MR_Word next_value_of_HeadArgRepn_15;
      MR_Word next_value_of_TailArgRepns_16;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n");
      hlds__hlds_out__hlds_out_type_table__write_arg_pos_width_6_p_0(Stream_10, Indent_12, CurArgNum_14, ArgPosWidth_20);
      Var_50 = (MR_Integer) ((MR_Unsigned) CurArgNum_14 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_14 = Var_50;
      next_value_of_HeadArgRepn_15 = HeadTailArgRepn_24;
      next_value_of_TailArgRepns_16 = TailTailArgRepns_25;
      CurArgNum_14 = next_value_of_CurArgNum_14;
      HeadArgRepn_15 = next_value_of_HeadArgRepn_15;
      TailArgRepns_16 = next_value_of_TailArgRepns_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_arg_pos_width_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_Integer CurArgNum_9,
  MR_Word ArgPosWidth_10)
{
  hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, Indent_8);
  switch (MR_tag((MR_Word) ArgPosWidth_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_312;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CurArgNum_9, &Var_312);
        mercury__io__write_string_4_p_0(Stream_7, Var_312);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": none_nowhere\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgOnlyOffset_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_10, (MR_Integer) 0))));
        MR_Word CellOffset_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_10, (MR_Integer) 1))));
        MR_Integer AOWordNum_14 = (MR_Integer) (ArgOnlyOffset_12);
        MR_Integer CellWordNum_15 = (MR_Integer) (CellOffset_13);
        MR_String Var_323;
        MR_String Var_333;
        MR_String Var_343;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CurArgNum_9, &Var_323);
        mercury__io__write_string_4_p_0(Stream_7, Var_323);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": full word, offset ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), AOWordNum_14, &Var_333);
        mercury__io__write_string_4_p_0(Stream_7, Var_333);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CellWordNum_15, &Var_343);
        mercury__io__write_string_4_p_0(Stream_7, Var_343);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DoubleWordKind_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ArgPosWidth_10, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_String KindStr_17;
        MR_Integer Var_51;
        MR_Integer Var_55;
        MR_Word ArgOnlyOffset_93 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_10, (MR_Integer) 0))));
        MR_Word CellOffset_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_10, (MR_Integer) 1))));
        MR_Integer AOWordNum_95 = (MR_Integer) (ArgOnlyOffset_93);
        MR_Integer CellWordNum_96 = (MR_Integer) (CellOffset_94);
        MR_String Var_354;
        MR_String Var_367;
        MR_String Var_377;
        MR_String Var_387;
        MR_String Var_397;

        switch (DoubleWordKind_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            KindStr_17 = (MR_String) "float";
            break;
          case (MR_Integer) 1:
            KindStr_17 = (MR_String) "int64";
            break;
          case (MR_Integer) 2:
            KindStr_17 = (MR_String) "uint64";
            break;
        }
        Var_51 = (MR_Integer) ((MR_Unsigned) AOWordNum_95 + (MR_Unsigned) 1);
        Var_55 = (MR_Integer) ((MR_Unsigned) CellWordNum_96 + (MR_Unsigned) 1);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CurArgNum_9, &Var_354);
        mercury__io__write_string_4_p_0(Stream_7, Var_354);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": double word ");
        mercury__io__write_string_4_p_0(Stream_7, KindStr_17);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", offsets ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), AOWordNum_95, &Var_367);
        mercury__io__write_string_4_p_0(Stream_7, Var_367);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CellWordNum_96, &Var_377);
        mercury__io__write_string_4_p_0(Stream_7, Var_377);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " to ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), Var_51, &Var_387);
        mercury__io__write_string_4_p_0(Stream_7, Var_387);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), Var_55, &Var_397);
        mercury__io__write_string_4_p_0(Stream_7, Var_397);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
            MR_Word NumBits_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 4))));
            MR_Word Mask_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 5))));
            MR_Word FillKind_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_23 = (MR_Integer) (Shift_18);
            MR_Integer NumBitsInt_24 = (MR_Integer) (NumBits_19);
            MR_Integer MaskInt_25 = (MR_Integer) (Mask_20);
            MR_String FillStr_26;
            MR_Word ArgOnlyOffset_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 1))));
            MR_Word CellOffset_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));
            MR_Integer AOWordNum_99 = (MR_Integer) (ArgOnlyOffset_97);
            MR_Integer CellWordNum_100 = (MR_Integer) (CellOffset_98);
            MR_String Var_211;
            MR_String Var_224;
            MR_String Var_234;
            MR_String Var_244;
            MR_String Var_255;
            MR_String Var_267;

            FillStr_26 = hlds__hlds_out__hlds_out_type_table__fill_kind_to_string_1_f_0(FillKind_21);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CurArgNum_9, &Var_211);
            mercury__io__write_string_4_p_0(Stream_7, Var_211);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": partial ");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "first");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", offset ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), AOWordNum_99, &Var_224);
            mercury__io__write_string_4_p_0(Stream_7, Var_224);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CellWordNum_100, &Var_234);
            mercury__io__write_string_4_p_0(Stream_7, Var_234);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", shift ");
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 2, ShiftInt_23, &Var_244);
            mercury__io__write_string_4_p_0(Stream_7, Var_244);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " #bits ");
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 2, NumBitsInt_24, &Var_255);
            mercury__io__write_string_4_p_0(Stream_7, Var_255);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " mask ");
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 2, MaskInt_25, &Var_267);
            mercury__io__write_string_4_p_0(Stream_7, Var_267);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_7, FillStr_26);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
            MR_Word NumBits_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 4))));
            MR_Word Mask_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 5))));
            MR_Word FillKind_108 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_110 = (MR_Integer) (Shift_105);
            MR_Integer NumBitsInt_111 = (MR_Integer) (NumBits_106);
            MR_Integer MaskInt_112 = (MR_Integer) (Mask_107);
            MR_String FillStr_113;
            MR_Word ArgOnlyOffset_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 1))));
            MR_Word CellOffset_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));
            MR_Integer AOWordNum_136 = (MR_Integer) (ArgOnlyOffset_134);
            MR_Integer CellWordNum_137 = (MR_Integer) (CellOffset_135);
            MR_String Var_141;
            MR_String Var_154;
            MR_String Var_164;
            MR_String Var_174;
            MR_String Var_185;
            MR_String Var_197;

            FillStr_113 = hlds__hlds_out__hlds_out_type_table__fill_kind_to_string_1_f_0(FillKind_108);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CurArgNum_9, &Var_141);
            mercury__io__write_string_4_p_0(Stream_7, Var_141);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": partial ");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "later");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", offset ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), AOWordNum_136, &Var_154);
            mercury__io__write_string_4_p_0(Stream_7, Var_154);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CellWordNum_137, &Var_164);
            mercury__io__write_string_4_p_0(Stream_7, Var_164);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", shift ");
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 2, ShiftInt_110, &Var_174);
            mercury__io__write_string_4_p_0(Stream_7, Var_174);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " #bits ");
            mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 2, NumBitsInt_111, &Var_185);
            mercury__io__write_string_4_p_0(Stream_7, Var_185);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " mask ");
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 2, MaskInt_112, &Var_197);
            mercury__io__write_string_4_p_0(Stream_7, Var_197);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_7, FillStr_113);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgOnlyOffset_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 1))));
            MR_Word CellOffset_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));
            MR_Integer AOWordNum_103 = (MR_Integer) (ArgOnlyOffset_101);
            MR_Integer CellWordNum_104 = (MR_Integer) (CellOffset_102);
            MR_String Var_281;
            MR_String Var_291;
            MR_String Var_301;

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% arg ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CurArgNum_9, &Var_281);
            mercury__io__write_string_4_p_0(Stream_7, Var_281);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ": none shifted, offset ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), AOWordNum_103, &Var_291);
            mercury__io__write_string_4_p_0(Stream_7, Var_291);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), CellWordNum_104, &Var_301);
            mercury__io__write_string_4_p_0(Stream_7, Var_301);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
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
  MR_String HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_type_table_vector_common_4[0 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_type_table__vector_common_type_4_0__vct_4_f_0;

  return HeadVar__2_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructors_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word HeadCtor_9,
  MR_Word TailCtors_10)
{
  hlds__hlds_out__hlds_out_type_table__write_constructors_loop_7_p_0(Stream_7, TVarSet_8, (MR_String) "--->    ", HeadCtor_9, TailCtors_10);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_constructors_loop_7_p_0(
  MR_Word Stream_8,
  MR_Word TVarSet_9,
  MR_String ArrowOrSemi0_10,
  MR_Word HeadCtor_11,
  MR_Word TailCtors_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_8, ArrowOrSemi0_10);
    if ((TailCtors_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeExistConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_11, (MR_Integer) 1))));
      MR_Word SymName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_11, (MR_Integer) 2))));
      MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_11, (MR_Integer) 3))));
      MR_Integer Arity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor_11, (MR_Integer) 4))));
      MR_String Name_36;
      MR_String NameStr_37;
      MR_String ExistConstraintsPrefix_40;
      MR_String ExistConstraintsSuffix_41;
      MR_String BracePrefix_42;
      MR_String BraceSuffix_43;
      MR_String Var_48;

      Name_36 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_32);
      NameStr_37 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_36);
      Var_48 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4));
      parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_9, Var_48, (MR_String) "\n", MaybeExistConstraints_31, &ExistConstraintsPrefix_40, &ExistConstraintsSuffix_41);
      parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_34, Name_36, &BracePrefix_42, &BraceSuffix_43);
      mercury__io__write_string_4_p_0(Stream_8, ExistConstraintsPrefix_40);
      if ((Args_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(Stream_8, BracePrefix_42);
        mercury__io__write_string_4_p_0(Stream_8, NameStr_37);
        mercury__io__write_string_4_p_0(Stream_8, BraceSuffix_43);
      }
      else
      {
        MR_Word HeadArg_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_33, (MR_Integer) 0))));
        MR_Word TailArgs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_33, (MR_Integer) 1))));
        MR_Word AnyFieldName_46;
        MR_Word Arg_91;
        MR_Word Args_92;
        MR_Word MaybeFieldName_94;

        mercury__io__write_string_4_p_0(Stream_8, BracePrefix_42);
        mercury__io__write_string_4_p_0(Stream_8, NameStr_37);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(\n");
        Arg_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_33, (MR_Integer) 0))));
        Args_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_33, (MR_Integer) 1))));
        MaybeFieldName_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_91, (MR_Integer) 0))));
        if ((MaybeFieldName_94 == (MR_Word) ((MR_Unsigned) 0U)))
          AnyFieldName_46 = hlds__hlds_out__hlds_out_type_table__does_any_arg_have_a_field_name_1_f_0(Args_92);
        else
          AnyFieldName_46 = (MR_Integer) 1;
        hlds__hlds_out__hlds_out_type_table__mercury_output_ctor_args_8_p_0(Stream_8, TVarSet_9, (MR_Integer) ((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4)) + (MR_Unsigned) 1), AnyFieldName_46, HeadArg_44, TailArgs_45);
        hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_8, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4));
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_8, BraceSuffix_43);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      mercury__io__write_string_4_p_0(Stream_8, BraceSuffix_43);
      mercury__io__write_string_4_p_0(Stream_8, ExistConstraintsSuffix_41);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    }
    else
    {
      MR_Word HeadTailCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_12, (MR_Integer) 0))));
      MR_Word TailTailCtors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_12, (MR_Integer) 1))));
      MR_Word next_value_of_HeadCtor_11;
      MR_Word next_value_of_TailCtors_12;

      hlds__hlds_out__hlds_out_type_table__write_ctor_5_p_0(Stream_8, TVarSet_9, HeadCtor_11);
      // direct tailcall eliminated
      ;
      next_value_of_HeadCtor_11 = HeadTailCtor_14;
      next_value_of_TailCtors_12 = TailTailCtors_15;
      ArrowOrSemi0_10 = (MR_String) ";       ";
      HeadCtor_11 = next_value_of_HeadCtor_11;
      TailCtors_12 = next_value_of_TailCtors_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_ctor_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word Ctor_8)
{
  MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 1))));
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 2))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 3))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 4))));
  MR_String Name_16;
  MR_String NameStr_17;
  MR_String ExistConstraintsPrefix_20;
  MR_String ExistConstraintsSuffix_21;
  MR_String BracePrefix_22;
  MR_String BraceSuffix_23;
  MR_String Var_30;

  Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
  NameStr_17 = parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0((MR_Integer) 1, Name_16);
  Var_30 = hlds__hlds_out__hlds_out_util__indent_string_1_f_0((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4));
  parse_tree__parse_tree_out__maybe_cons_exist_constraints_to_prefix_suffix_6_p_0(TVarSet_7, Var_30, (MR_String) "\n", MaybeExistConstraints_11, &ExistConstraintsPrefix_20, &ExistConstraintsSuffix_21);
  parse_tree__parse_tree_out__maybe_brace_for_name_prefix_suffix_4_p_0(Arity_14, Name_16, &BracePrefix_22, &BraceSuffix_23);
  mercury__io__write_string_4_p_0(Stream_6, ExistConstraintsPrefix_20);
  if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_6, BracePrefix_22);
    mercury__io__write_string_4_p_0(Stream_6, NameStr_17);
    mercury__io__write_string_4_p_0(Stream_6, BraceSuffix_23);
  }
  else
  {
    MR_Word HeadArg_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
    MR_Word TailArgs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
    MR_Word AnyFieldName_26;
    MR_Word Arg_73;
    MR_Word Args_74;
    MR_Word MaybeFieldName_76;

    mercury__io__write_string_4_p_0(Stream_6, BracePrefix_22);
    mercury__io__write_string_4_p_0(Stream_6, NameStr_17);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(\n");
    Arg_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
    Args_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
    MaybeFieldName_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_73, (MR_Integer) 0))));
    if ((MaybeFieldName_76 == (MR_Word) ((MR_Unsigned) 0U)))
      AnyFieldName_26 = hlds__hlds_out__hlds_out_type_table__does_any_arg_have_a_field_name_1_f_0(Args_74);
    else
      AnyFieldName_26 = (MR_Integer) 1;
    hlds__hlds_out__hlds_out_type_table__mercury_output_ctor_args_8_p_0(Stream_6, TVarSet_7, (MR_Integer) ((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4)) + (MR_Unsigned) 1), AnyFieldName_26, HeadArg_24, TailArgs_25);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_6, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 4));
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    mercury__io__write_string_4_p_0(Stream_6, BraceSuffix_23);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_6, BraceSuffix_23);
  mercury__io__write_string_4_p_0(Stream_6, ExistConstraintsSuffix_21);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
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
      MR_Word Arg_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFieldName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0))));

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
hlds__hlds_out__hlds_out_type_table__mercury_output_ctor_args_8_p_0(
  MR_Word Stream_9,
  MR_Word TVarSet_10,
  MR_Integer Indent_11,
  MR_Word AnyFieldName_12,
  MR_Word HeadArg_13,
  MR_Word TailArgs_14)
{
  while (MR_TRUE)
  {
    MR_Word MaybeFieldName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArg_13, (MR_Integer) 0))));
    MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArg_13, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_9, Indent_11);
    switch (AnyFieldName_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeFieldName_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_55;

          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[0]), (MR_Integer) 24, (MR_String) "", &Var_55);
          mercury__io__write_string_4_p_0(Stream_9, Var_55);
        }
        else
        {
          MR_Word FieldName_19;
          MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_16, (MR_Integer) 0))));
          MR_String Var_37;
          MR_String Var_46;

          FieldName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
          Var_37 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_19);
          mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_2[1]), (MR_Integer) 20, Var_37, &Var_46);
          mercury__io__write_string_4_p_0(Stream_9, Var_46);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " :: ");
        }
        break;
    }
    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_10, (MR_Integer) 0, Type_17, Stream_9);
    if ((TailArgs_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    else
    {
      MR_Word HeadTailArg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_14, (MR_Integer) 0))));
      MR_Word TailTailArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadArg_13;
      MR_Word next_value_of_TailArgs_14;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadArg_13 = HeadTailArg_21;
      next_value_of_TailArgs_14 = TailTailArgs_22;
      HeadArg_13 = next_value_of_HeadArg_13;
      TailArgs_14 = next_value_of_TailArgs_14;
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
  MR_String conv0_String_4;

  conv0_String_4 = hlds__hlds_out__hlds_out_type_table__foreign_type_assertion_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
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
  AssertionStrs_7 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_type_table_scalar_common_1[1]), Assertions_6);
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
    MR_Word NonCanonical_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanonical_3, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) NonCanonical_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_4 = (MR_String) "noncanon_subtype";
        break;
      case (MR_Integer) 1:
        {
          MR_Word EqSymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_5, (MR_Integer) 0))));
          MR_Word CmpSymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_5, (MR_Integer) 1))));
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
          MR_Word EqSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_5, (MR_Integer) 0))));
          MR_String Var_30;

          Var_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(EqSymName_27);
          Var_30 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) ")");
          String_4 = mercury__string__f_43_43_2_f_0((MR_String) "eq(", Var_30);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NonCanonical_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_25;
              MR_Word CmpSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NonCanonical_5, (MR_Integer) 1))));
              MR_String Var_39;

              Var_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(CmpSymName_28);
              Var_39 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ")");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cmp(", Var_39);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsSolver_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), NonCanonical_5, (MR_Integer) 1))) & (MR_Integer) 1);

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
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word UnQualConsId_4;
  MR_Word SymName_5;
  MR_Integer Arity_6;
  MR_Word TypeCtor_7;

  if (succeeded)
  {
    SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 1))));
    Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 2))));
    TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 3))));
    {
      MR_Word Var_8;
      MR_String Var_9;

      Var_9 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
      }
      {
        UnQualConsId_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnQualConsId_4, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), UnQualConsId_4, 1) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(3), UnQualConsId_4, 2) = ((MR_Box) (Arity_6));
        MR_hl_field(MR_mktag(3), UnQualConsId_4, 3) = ((MR_Box) (TypeCtor_7));
      }
    }
  }
  else
    UnQualConsId_4 = ConsId_3;
  return UnQualConsId_4;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_type_table__write_comma_type_params_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Param_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Params_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ", ");
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__2_2, (MR_Integer) 0, Param_13, HeadVar__1_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Params_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
