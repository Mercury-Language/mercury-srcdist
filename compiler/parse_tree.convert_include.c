/*
** Automatically generated from `convert_include.m'
** by the Mercury compiler,
** version rotd-2025-07-06
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


// :- module parse_tree.convert_include.
// :- implementation.

/*
INIT mercury__parse_tree__convert_include__init
ENDINIT
*/

#include "parse_tree.convert_include.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_include__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_include__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_include__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static void MR_CALL 
parse_tree__convert_include__include_map_to_int_imp_modules_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_IntModules_0_13,
  MR_Word * STATE_VARIABLE_IntModules_14,
  MR_Word STATE_VARIABLE_ImpModules_0_15,
  MR_Word * STATE_VARIABLE_ImpModules_16);

static void MR_CALL 
parse_tree__convert_include__classify_include_module_6_p_0(
  MR_Word Section_7,
  MR_Word ItemInclude_8,
  MR_Word STATE_VARIABLE_InclMap_0_18,
  MR_Word * STATE_VARIABLE_InclMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__convert_include__include_map_to_int_imp_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_include__classify_include_modules_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_include__classify_include_modules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box parse_tree__convert_include_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__convert_include_scalar_common_2[20][2];

static /* final */ const MR_Box parse_tree__convert_include_scalar_common_3[2][9];

static /* final */ const MR_Box parse_tree__convert_include_scalar_common_4[2][4];




static /* final */ const MR_Box parse_tree__convert_include_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__convert_include_scalar_common_3[1])),
    ((MR_Box) (parse_tree__convert_include__include_map_to_int_imp_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__convert_include_scalar_common_2[20][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "include"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for submodule"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration was here."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_include_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[17])))
  },
};

static /* final */ const MR_Box parse_tree__convert_include_scalar_common_3[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__convert_include__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__convert_include__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__convert_include__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_include__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__convert_include__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_include__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_include__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_include__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_include_scalar_common_4[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__convert_include_scalar_common_3[0])),
    ((MR_Box) (parse_tree__convert_include__classify_include_modules_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__convert_include_scalar_common_3[0])),
    ((MR_Box) (parse_tree__convert_include__classify_include_modules_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_include__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_include__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_include__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static void MR_CALL 
parse_tree__convert_include__include_map_to_int_imp_modules_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_IntModules_0_13,
  MR_Word * STATE_VARIABLE_IntModules_14,
  MR_Word STATE_VARIABLE_ImpModules_0_15,
  MR_Word * STATE_VARIABLE_ImpModules_16)
{
  MR_Word Section_11 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_8, 0))) & (MR_Integer) 1);

  switch (Section_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_ImpModules_0_15, STATE_VARIABLE_ImpModules_16);
        *STATE_VARIABLE_IntModules_14 = STATE_VARIABLE_IntModules_0_13;
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_IntModules_0_13, STATE_VARIABLE_IntModules_14);
        *STATE_VARIABLE_ImpModules_16 = STATE_VARIABLE_ImpModules_0_15;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__convert_include__classify_include_module_6_p_0(
  MR_Word Section_7,
  MR_Word ItemInclude_8,
  MR_Word STATE_VARIABLE_InclMap_0_18,
  MR_Word * STATE_VARIABLE_InclMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ItemInclude_8, 0))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, ItemInclude_8, 1))));
  MR_Word PrevEntry_14;
  MR_Box conv0_PrevEntry_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), STATE_VARIABLE_InclMap_0_18, ((MR_Box) (ModuleName_11)), &conv0_PrevEntry_14);
  if (succeeded)
  {
    PrevEntry_14 = ((MR_Word) (conv0_PrevEntry_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PrevContext_16 = ((MR_Word) ((MR_hl_field(0, PrevEntry_14, 1))));
    MR_Word MainPieces_26;
    MR_Word MainMsg_27;
    MR_Word PrevMsg_29;
    MR_Word Spec_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_57;
    MR_Word Var_58;

    Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[9])));
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (ModuleName_11));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[13])));
    }
    Var_44 = parse_tree__error_spec__color_as_subject_1_f_0(Var_45);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[14])));
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[11])), Var_43);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_38);
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[3])), Var_35);
    {
      MainMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_27, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, MainMsg_27, 1) = ((MR_Box) (MainPieces_26));
    }
    {
      PrevMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrevMsg_29, 0) = ((MR_Box) (PrevContext_16));
      MR_hl_field(0, PrevMsg_29, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_include_scalar_common_2[19])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (PrevMsg_29));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (MainMsg_27));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Spec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_include.report_duplicate_include\'/5"));
      MR_hl_field(2, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_30, 3) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
    *STATE_VARIABLE_InclMap_19 = STATE_VARIABLE_InclMap_0_18;
  }
  else
  {
    MR_Word Entry_17;

    {
      Entry_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_17, 0) = (MR_Box) ((MR_Unsigned) (Section_7));
      MR_hl_field(0, Entry_17, 1) = ((MR_Box) (Context_12));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Entry_17)), STATE_VARIABLE_InclMap_0_18, STATE_VARIABLE_InclMap_19);
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
  }
}

void MR_CALL 
parse_tree__convert_include__add_only_int_include_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_IntInclMap_0_11,
  MR_Word * STATE_VARIABLE_IntInclMap_12)
{
  MR_Word Section_8 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_6, 0))) & (MR_Integer) 1);
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, InclInfo_6, 1))));

  switch (Section_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_IntInclMap_12 = STATE_VARIABLE_IntInclMap_0_11;
      break;
    case (MR_Integer) 0:
      {
        MR_Word IntInclInfo_10;

        {
          IntInclInfo_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IntInclInfo_10, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, IntInclInfo_10, 1) = ((MR_Box) (Context_9));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (IntInclInfo_10)), STATE_VARIABLE_IntInclMap_0_11, STATE_VARIABLE_IntInclMap_12);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__convert_include__include_map_to_int_imp_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_IntModules_14;
  MR_Word conv0_STATE_VARIABLE_ImpModules_16;

  parse_tree__convert_include__include_map_to_int_imp_modules_acc_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_IntModules_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ImpModules_16);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_IntModules_14));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ImpModules_16));
}

void MR_CALL 
parse_tree__convert_include__include_map_to_int_imp_modules_3_p_0(
  MR_Word IncludeMap_4,
  MR_Word * IntModules_5,
  MR_Word * ImpModules_6)
{
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv3_IntModules_5;
  MR_Box conv2_ImpModules_6;

  Var_8 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_9 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__convert_include_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_include_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_include_scalar_common_1[1]), IncludeMap_4, ((MR_Box) (Var_8)), &conv3_IntModules_5, ((MR_Box) (Var_9)), &conv2_ImpModules_6);
  *IntModules_5 = ((MR_Word) (conv3_IntModules_5));
  *ImpModules_6 = ((MR_Word) (conv2_ImpModules_6));
}

static void MR_CALL 
parse_tree__convert_include__classify_include_modules_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_InclMap_19;
  MR_Word conv4_STATE_VARIABLE_Specs_21;

  parse_tree__convert_include__classify_include_module_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_InclMap_19, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_InclMap_19));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__convert_include__classify_include_modules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InclMap_19;
  MR_Word conv0_STATE_VARIABLE_Specs_21;

  parse_tree__convert_include__classify_include_module_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InclMap_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InclMap_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

void MR_CALL 
parse_tree__convert_include__classify_include_modules_5_p_0(
  MR_Word IntIncludes_6,
  MR_Word ImpIncludes_7,
  MR_Word * STATE_VARIABLE_InclMap_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  MR_Word STATE_VARIABLE_InclMap_1_13;
  MR_Word STATE_VARIABLE_InclMap_2_15;
  MR_Word STATE_VARIABLE_Specs_1_16;
  MR_Box conv3_STATE_VARIABLE_InclMap_2_15;
  MR_Box conv2_STATE_VARIABLE_Specs_1_16;
  MR_Box conv7_STATE_VARIABLE_InclMap_10;
  MR_Box conv6_STATE_VARIABLE_Specs_12;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), &STATE_VARIABLE_InclMap_1_13);
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_include_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_include_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_include_scalar_common_4[0]), IntIncludes_6, ((MR_Box) (STATE_VARIABLE_InclMap_1_13)), &conv3_STATE_VARIABLE_InclMap_2_15, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv2_STATE_VARIABLE_Specs_1_16);
  STATE_VARIABLE_InclMap_2_15 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_2_15));
  STATE_VARIABLE_Specs_1_16 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_16));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__convert_include_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_include_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_include_scalar_common_4[1]), ImpIncludes_7, ((MR_Box) (STATE_VARIABLE_InclMap_2_15)), &conv7_STATE_VARIABLE_InclMap_10, ((MR_Box) (STATE_VARIABLE_Specs_1_16)), &conv6_STATE_VARIABLE_Specs_12);
  *STATE_VARIABLE_InclMap_10 = ((MR_Word) (conv7_STATE_VARIABLE_InclMap_10));
  *STATE_VARIABLE_Specs_12 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_12));
}

void mercury__parse_tree__convert_include__init(void)
{
}

void mercury__parse_tree__convert_include__init_type_tables(void)
{
}

void mercury__parse_tree__convert_include__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__convert_include__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.convert_include.
