/*
** Automatically generated from `prog_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2026-09-06
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


// :- module parse_tree.prog_foreign_enum.
// :- implementation.

/*
INIT mercury__parse_tree__prog_foreign_enum__init
ENDINIT
*/

#include "parse_tree.prog_foreign_enum.mih"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_foreign_enum__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_EnumFunctorDesc parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_ordinal_ordered_for_fe_or_fee_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_name_ordered_for_fe_or_fee_0[2];

static const MR_Integer parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__functor_number_map_for_fe_or_fee_0[2];

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__IntroducedFrom__func__build_ctor_name_to_foreign_name_map__163__1_1_f_0(
  MR_String LambdaHeadVar__1_129);

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__IntroducedFrom__func__build_ctor_name_to_foreign_name_map__146__1_1_f_0(
  MR_String LambdaHeadVar__1_94);

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__unqual_ctor_to_format_piece_1_f_0(
  MR_Word SymName_3);

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__qual_ctor_to_format_piece_1_f_0(
  MR_Word SymName_3);

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word CtorNames0_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__add_bad_qual_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_foreign_enum__add_bad_qual_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_loop_16_p_0(
  MR_Word TypeModuleName_1,
  MR_Word ValidCtorNames_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MercuryForeignBiMap_0_4,
  MR_Word * STATE_VARIABLE_MercuryForeignBiMap_5,
  MR_Word STATE_VARIABLE_SeenCtorNames_0_6,
  MR_Word * STATE_VARIABLE_SeenCtorNames_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_BadQualCtorSymNames_0_9,
  MR_Word * STATE_VARIABLE_BadQualCtorSymNames_10,
  MR_Word STATE_VARIABLE_InvalidCtorSymNames_0_11,
  MR_Word * STATE_VARIABLE_InvalidCtorSymNames_12,
  MR_Word STATE_VARIABLE_RepeatedCtorNames_0_13,
  MR_Word * STATE_VARIABLE_RepeatedCtorNames_14,
  MR_Word STATE_VARIABLE_RepeatedForeignNames_0_15,
  MR_Word * STATE_VARIABLE_RepeatedForeignNames_16);

static MR_bool MR_CALL 
parse_tree__prog_foreign_enum____Unify____for_fe_or_fee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign_enum____Compare____for_fe_or_fee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_1[40][2];

static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_4[4][3];




static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_1[40][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the specified"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mapping between"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the names of Mercury constructors and"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the corresponding foreign"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inconsistent."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The following Mercury constructor"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "repeated:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The following foreign"))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the following"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a module qualification that is"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not compatible with the type definition:"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the type:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[17])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not have a foreign value:"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__prog_foreign_enum_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "...")) },
};

static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_foreign_enum__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_enum_scalar_common_4[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_foreign_enum_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_foreign_enum__add_bad_qual_ctors_error_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_foreign_enum_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_foreign_enum__add_unknown_ctors_error_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_foreign_enum_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_foreign_enum_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_foreign_enum__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_EnumFunctorDesc parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0 = {
  (MR_String) "for_foreign_enum",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1 = {
  (MR_String) "for_foreign_export_enum",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_ordinal_ordered_for_fe_or_fee_0[2] = {
  &parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0,
  &parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_name_ordered_for_fe_or_fee_0[2] = {
  &parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0,
  &parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1
};

static const MR_Integer parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__functor_number_map_for_fe_or_fee_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__type_ctor_info_for_fe_or_fee_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_foreign_enum____Unify____for_fe_or_fee_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign_enum____Compare____for_fe_or_fee_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign_enum",
  (MR_String) "for_fe_or_fee",
  { parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_name_ordered_for_fe_or_fee_0 },
  { parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__enum_ordinal_ordered_for_fe_or_fee_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__functor_number_map_for_fe_or_fee_0,

};

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__IntroducedFrom__func__build_ctor_name_to_foreign_name_map__163__1_1_f_0(
  MR_String LambdaHeadVar__1_129)
{
  MR_Word LambdaHeadVar__2_130;

  {
    LambdaHeadVar__2_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LambdaHeadVar__2_130, 1) = ((MR_Box) (LambdaHeadVar__1_129));
  }
  return LambdaHeadVar__2_130;
}

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__IntroducedFrom__func__build_ctor_name_to_foreign_name_map__146__1_1_f_0(
  MR_String LambdaHeadVar__1_94)
{
  MR_Word LambdaHeadVar__2_95;

  {
    LambdaHeadVar__2_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LambdaHeadVar__2_95, 1) = ((MR_Box) (LambdaHeadVar__1_94));
  }
  return LambdaHeadVar__2_95;
}

void MR_CALL 
parse_tree__prog_foreign_enum____Compare____for_fe_or_fee_0_0(
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
parse_tree__prog_foreign_enum____Unify____for_fe_or_fee_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__unqual_ctor_to_format_piece_1_f_0(
  MR_Word SymName_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (SymName_3));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__prog_foreign_enum__qual_ctor_to_format_piece_1_f_0(
  MR_Word SymName_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (SymName_3));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_130;

  conv2_LambdaHeadVar__2_130 = parse_tree__prog_foreign_enum__IntroducedFrom__func__build_ctor_name_to_foreign_name_map__163__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_130));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_95;

  conv0_LambdaHeadVar__2_95 = parse_tree__prog_foreign_enum__IntroducedFrom__func__build_ctor_name_to_foreign_name_map__146__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_95));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0(
  MR_Word ForWhat_10,
  MR_Word Context_11,
  MR_Word ContextPieces_12,
  MR_Word TypeModuleName_13,
  MR_Word ValidCtorNames_14,
  MR_Word MercuryForeignAL_15,
  MR_Word * MercuryForeignBiMap_16,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  MR_bool succeeded;
  MR_Word MercuryForeignBiMap0_18;
  MR_Word SeenCtorNames0_19;
  MR_Word SeenForeignNames0_20;
  MR_Word BadQualCtorSymNamesCord0_21;
  MR_Word InvalidCtorSymNamesCord0_22;
  MR_Word RepeatedCtorNamesCord0_23;
  MR_Word RepeatedForeignNamesCord0_24;
  MR_Word SeenCtorNames_25;
  MR_Word BadQualCtorSymNamesCord_26;
  MR_Word InvalidCtorSymNamesCord_27;
  MR_Word RepeatedCtorNamesCord_28;
  MR_Word RepeatedForeignNamesCord_29;
  MR_Word RepeatedCtorNames_30;
  MR_Word RepeatedForeignNames_31;
  MR_Word STATE_VARIABLE_Specs_1_53;
  MR_Word STATE_VARIABLE_Specs_2_55;
  MR_Word STATE_VARIABLE_Specs_3_169;

  MercuryForeignBiMap0_18 = mercury__bimap__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  SeenCtorNames0_19 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  SeenForeignNames0_20 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  BadQualCtorSymNamesCord0_21 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  InvalidCtorSymNamesCord0_22 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  RepeatedCtorNamesCord0_23 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  RepeatedForeignNamesCord0_24 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_loop_16_p_0(TypeModuleName_13, ValidCtorNames_14, MercuryForeignAL_15, MercuryForeignBiMap0_18, MercuryForeignBiMap_16, SeenCtorNames0_19, &SeenCtorNames_25, SeenForeignNames0_20, BadQualCtorSymNamesCord0_21, &BadQualCtorSymNamesCord_26, InvalidCtorSymNamesCord0_22, &InvalidCtorSymNamesCord_27, RepeatedCtorNamesCord0_23, &RepeatedCtorNamesCord_28, RepeatedForeignNamesCord0_24, &RepeatedForeignNamesCord_29);
  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), BadQualCtorSymNamesCord_26);
  if (succeeded)
    STATE_VARIABLE_Specs_1_53 = STATE_VARIABLE_Specs_0_50;
  else
  {
    MR_Word Var_52;

    Var_52 = mercury__cord__to_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), BadQualCtorSymNamesCord_26);
    parse_tree__prog_foreign_enum__add_bad_qual_ctors_error_5_p_0(Context_11, ContextPieces_12, Var_52, STATE_VARIABLE_Specs_0_50, &STATE_VARIABLE_Specs_1_53);
  }
  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidCtorSymNamesCord_27);
  if (succeeded)
    STATE_VARIABLE_Specs_2_55 = STATE_VARIABLE_Specs_1_53;
  else
  {
    MR_Word Var_54;

    Var_54 = mercury__cord__to_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidCtorSymNamesCord_27);
    parse_tree__prog_foreign_enum__add_unknown_ctors_error_5_p_0(Context_11, ContextPieces_12, Var_54, STATE_VARIABLE_Specs_1_53, &STATE_VARIABLE_Specs_2_55);
  }
  RepeatedCtorNames_30 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedCtorNamesCord_28);
  RepeatedForeignNames_31 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedForeignNamesCord_29);
  succeeded = (RepeatedCtorNames_30 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (RepeatedForeignNames_31 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    STATE_VARIABLE_Specs_3_169 = STATE_VARIABLE_Specs_2_55;
  else
  {
    MR_String NameOrValue_32;
    MR_String NamesOrValues_33;
    MR_Word MainPieces_34;
    MR_Word CtorNamePieces_35;
    MR_Word ForeignNamePieces_40;
    MR_Word Pieces_44;
    MR_Word Spec_45;
    MR_Word Var_56;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_165;

    switch (ForWhat_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          NameOrValue_32 = (MR_String) "value";
          NamesOrValues_33 = (MR_String) "values";
        }
        break;
      case (MR_Integer) 1:
        {
          NameOrValue_32 = (MR_String) "name";
          NamesOrValues_33 = (MR_String) "names";
        }
        break;
    }
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (NamesOrValues_33));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[7])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[6])));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[5])));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    Var_66 = parse_tree__error_spec__color_as_subject_1_f_0(Var_67);
    Var_85 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[11])));
    Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[12])));
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[9])), Var_84);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_79);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[4])), Var_65);
    MainPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_12, Var_56);
    if ((RepeatedCtorNames_30 == (MR_Word) ((MR_Unsigned) 0U)))
      CtorNamePieces_35 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RepeatedCtorPieces_38;
      MR_Word Var_96;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_String Var_101;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_111;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Box conv1_Var_101;

      RepeatedCtorPieces_38 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__prog_foreign_enum_scalar_common_4[2]), RepeatedCtorNames_30);
      conv1_Var_101 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedCtorNames_30, ((MR_Box) ((MR_String) "name is")), ((MR_Box) ((MR_String) "names are")));
      Var_101 = ((MR_String) (conv1_Var_101));
      {
        Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_100, 1) = ((MR_Box) (Var_101));
      }
      {
        Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[13])));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
      }
      Var_106 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[15])));
      Var_117 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[19])), RepeatedCtorPieces_38);
      Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[21])));
      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[17])), Var_116);
      Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_111);
      CtorNamePieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_105);
    }
    if ((RepeatedForeignNames_31 == (MR_Word) ((MR_Unsigned) 0U)))
      ForeignNamePieces_40 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RepeatedForeignPieces_43;
      MR_Word Var_131;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_String Var_136;
      MR_String Var_137;
      MR_String Var_139;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_148;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Box conv3_Var_136;

      RepeatedForeignPieces_43 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__prog_foreign_enum_scalar_common_4[3]), RepeatedForeignNames_31);
      Var_137 = mercury__string__f_43_43_2_f_0(NameOrValue_32, (MR_String) " is");
      Var_139 = mercury__string__f_43_43_2_f_0(NamesOrValues_33, (MR_String) " are");
      conv3_Var_136 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedForeignNames_31, ((MR_Box) (Var_137)), ((MR_Box) (Var_139)));
      Var_136 = ((MR_String) (conv3_Var_136));
      {
        Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_135, 1) = ((MR_Box) (Var_136));
      }
      {
        Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
        MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_131, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[22])));
        MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_134));
      }
      Var_143 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[15])));
      Var_154 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[19])), RepeatedForeignPieces_43);
      Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_154, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[21])));
      Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[17])), Var_153);
      Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, Var_148);
      ForeignNamePieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, Var_142);
    }
    Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CtorNamePieces_35, ForeignNamePieces_40);
    Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_34, Var_165);
    {
      Spec_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_foreign_enum.build_ctor_name_to_foreign_name_map\'/9"));
      MR_hl_field(0, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_45, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_45, 4) = ((MR_Box) (Pieces_44));
    }
    {
      STATE_VARIABLE_Specs_3_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_3_169, 0) = ((MR_Box) (Spec_45));
      MR_hl_field(1, STATE_VARIABLE_Specs_3_169, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_55));
    }
  }
  switch (ForWhat_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word UnseenCtorNames_46;
        MR_Word UnseenCtorNamesList_47;

        mercury__set_tree234__difference_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ValidCtorNames_14, SeenCtorNames_25, &UnseenCtorNames_46);
        mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnseenCtorNames_46, &UnseenCtorNamesList_47);
        if ((UnseenCtorNamesList_47 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_3_169;
        else
          parse_tree__prog_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(Context_11, ContextPieces_12, UnseenCtorNamesList_47, STATE_VARIABLE_Specs_3_169, STATE_VARIABLE_Specs_51);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_3_169;
      break;
  }
}

static void MR_CALL 
parse_tree__prog_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word CtorNames0_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word CtorNames_10;
  MR_Word CtorsStart_11;
  MR_Word CtorsEnd_12;
  MR_String CtorOrCtors_13;
  MR_String DoOrDoes_14;
  MR_Word PrefixPieces_15;
  MR_Word CtorsComponent_17;
  MR_Word Msg_23;
  MR_Word Spec_24;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_111;
  MR_Box conv0_CtorOrCtors_13;
  MR_Box conv1_DoOrDoes_14;

  mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNames0_8, &CtorNames_10);
  mercury__list__split_upto_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Integer) 10, CtorNames_10, &CtorsStart_11, &CtorsEnd_12);
  conv0_CtorOrCtors_13 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNames_10, ((MR_Box) ((MR_String) "constructor")), ((MR_Box) ((MR_String) "constructors")));
  CtorOrCtors_13 = ((MR_String) (conv0_CtorOrCtors_13));
  conv1_DoOrDoes_14 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNames_10, ((MR_Box) ((MR_String) "does")), ((MR_Box) ((MR_String) "do")));
  DoOrDoes_14 = ((MR_String) (conv1_DoOrDoes_14));
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (CtorOrCtors_13));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[24])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (DoOrDoes_14));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[33])));
  }
  Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_40);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_39);
  PrefixPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_32);
  if ((CtorsEnd_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CtorsPieces_16;
    MR_Word Var_50;
    MR_Word Var_51;

    Var_51 = parse_tree__error_spec__quote_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[19])), CtorNames_10);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[21])));
    CtorsPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[17])), Var_50);
    {
      CtorsComponent_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CtorsComponent_17, 0) = ((MR_Box) (CtorsPieces_16));
    }
  }
  else
  {
    MR_Integer NumEndCtors_20;
    MR_Word NonVerboseCtorsPieces_21;
    MR_Word VerboseCtorsPieces_22;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_75;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_93;
    MR_Word Var_94;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorsEnd_12, &NumEndCtors_20);
    Var_66 = parse_tree__error_spec__quote_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[36])), CtorsStart_11);
    {
      Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_82, 1) = ((MR_Box) (NumEndCtors_20));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[39])));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[37])));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[20])));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
    }
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_75);
    NonVerboseCtorsPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[17])), Var_65);
    Var_94 = parse_tree__error_spec__quote_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[19])), CtorNames_10);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[21])));
    VerboseCtorsPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[17])), Var_93);
    {
      CtorsComponent_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, CtorsComponent_17, 0) = ((MR_Box) (VerboseCtorsPieces_22));
      MR_hl_field(2, CtorsComponent_17, 1) = ((MR_Box) (NonVerboseCtorsPieces_21));
    }
  }
  {
    Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_105, 0) = ((MR_Box) (PrefixPieces_15));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (CtorsComponent_17));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
  }
  {
    Msg_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_23, 0) = ((MR_Box) (Context_6));
    MR_hl_field(2, Msg_23, 1) = ((MR_Box) (Var_104));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (Msg_23));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_foreign_enum.add_foreign_enum_unmapped_ctors_error\'/5"));
    MR_hl_field(2, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(2, Spec_24, 3) = ((MR_Box) (Var_111));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_26 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_24));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
  }
}

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__prog_foreign_enum__unqual_ctor_to_format_piece_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__prog_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_String IsOrAre_10;
  MR_String NotConstructors_11;
  MR_Word UnqualCtors_12;
  MR_Word ErrorPieces_13;
  MR_Word Spec_14;
  MR_Word Var_22;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_59;
  MR_Box conv0_IsOrAre_10;
  MR_Box conv1_NotConstructors_11;

  conv0_IsOrAre_10 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Ctors_8, ((MR_Box) ((MR_String) "symbol is")), ((MR_Box) ((MR_String) "symbols are")));
  IsOrAre_10 = ((MR_String) (conv0_IsOrAre_10));
  conv1_NotConstructors_11 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Ctors_8, ((MR_Box) ((MR_String) "not a constructor")), ((MR_Box) ((MR_String) "not constructors")));
  NotConstructors_11 = ((MR_String) (conv1_NotConstructors_11));
  UnqualCtors_12 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_foreign_enum_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_foreign_enum_scalar_common_4[1]), Ctors_8);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (IsOrAre_10));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[24])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[29])));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (NotConstructors_11));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_34);
  Var_46 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[19])), UnqualCtors_12);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[21])));
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[31])), Var_45);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_37);
  ErrorPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_32);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, ErrorPieces_13);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_foreign_enum.add_unknown_ctors_error\'/5"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Var_59));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
  }
}

static MR_Box MR_CALL 
parse_tree__prog_foreign_enum__add_bad_qual_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__prog_foreign_enum__qual_ctor_to_format_piece_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__prog_foreign_enum__add_bad_qual_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_String HasOrHave_10;
  MR_Word QualCtors_11;
  MR_Word ErrorPieces_12;
  MR_Word Spec_13;
  MR_Word Var_19;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_57;
  MR_Box conv0_HasOrHave_10;

  conv0_HasOrHave_10 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Ctors_8, ((MR_Box) ((MR_String) "symbol has")), ((MR_Box) ((MR_String) "symbols have")));
  HasOrHave_10 = ((MR_String) (conv0_HasOrHave_10));
  QualCtors_11 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_foreign_enum_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_foreign_enum_scalar_common_4[0]), Ctors_8);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (HasOrHave_10));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[26])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_foreign_enum_scalar_common_1[24])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[23])));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_23));
  }
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[28])));
  Var_44 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[19])), QualCtors_11);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[21])));
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_foreign_enum_scalar_common_1[17])), Var_43);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_38);
  ErrorPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_32);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, ErrorPieces_12);
  {
    Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_foreign_enum.add_bad_qual_ctors_error\'/5"));
    MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_15 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
  }
}

static void MR_CALL 
parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_loop_16_p_0(
  MR_Word TypeModuleName_1,
  MR_Word ValidCtorNames_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MercuryForeignBiMap_0_4,
  MR_Word * STATE_VARIABLE_MercuryForeignBiMap_5,
  MR_Word STATE_VARIABLE_SeenCtorNames_0_6,
  MR_Word * STATE_VARIABLE_SeenCtorNames_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_BadQualCtorSymNames_0_9,
  MR_Word * STATE_VARIABLE_BadQualCtorSymNames_10,
  MR_Word STATE_VARIABLE_InvalidCtorSymNames_0_11,
  MR_Word * STATE_VARIABLE_InvalidCtorSymNames_12,
  MR_Word STATE_VARIABLE_RepeatedCtorNames_0_13,
  MR_Word * STATE_VARIABLE_RepeatedCtorNames_14,
  MR_Word STATE_VARIABLE_RepeatedForeignNames_0_15,
  MR_Word * STATE_VARIABLE_RepeatedForeignNames_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RepeatedForeignNames_16 = STATE_VARIABLE_RepeatedForeignNames_0_15;
      *STATE_VARIABLE_RepeatedCtorNames_14 = STATE_VARIABLE_RepeatedCtorNames_0_13;
      *STATE_VARIABLE_InvalidCtorSymNames_12 = STATE_VARIABLE_InvalidCtorSymNames_0_11;
      *STATE_VARIABLE_BadQualCtorSymNames_10 = STATE_VARIABLE_BadQualCtorSymNames_0_9;
      *STATE_VARIABLE_SeenCtorNames_7 = STATE_VARIABLE_SeenCtorNames_0_6;
      *STATE_VARIABLE_MercuryForeignBiMap_5 = STATE_VARIABLE_MercuryForeignBiMap_0_4;
    }
    else
    {
      MR_Word MercuryForeign_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word MercuryForeignAL_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word CtorSymName_49 = ((MR_Word) ((MR_hl_field(0, MercuryForeign_40, 0))));
      MR_String ForeignName_50 = ((MR_String) ((MR_hl_field(0, MercuryForeign_40, 1))));
      MR_String CtorName_53;
      MR_Word STATE_VARIABLE_BadQualCtorSymNames_1_68;
      MR_Word STATE_VARIABLE_OK_2_69;
      MR_Word STATE_VARIABLE_InvalidCtorSymNames_1_70;
      MR_Word STATE_VARIABLE_OK_3_71;
      MR_Word STATE_VARIABLE_RepeatedCtorNames_1_73;
      MR_Word STATE_VARIABLE_OK_4_74;
      MR_Word STATE_VARIABLE_SeenCtorNames_2_75;
      MR_Word STATE_VARIABLE_RepeatedForeignNames_1_77;
      MR_Word STATE_VARIABLE_SeenForeignNames_2_79;
      MR_Word STATE_VARIABLE_MercuryForeignBiMap_1_80;
      MR_Word STATE_VARIABLE_SeenCtorNames_1_72;
      MR_Word STATE_VARIABLE_SeenForeignNames_1_76;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_MercuryForeignBiMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_SeenCtorNames_0_6;
      MR_Word next_value_of_HeadVar__8_8;
      MR_Word next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_9;
      MR_Word next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_15;

      if (((MR_tag((MR_Word) CtorSymName_49)) == (MR_Integer) 1))
      {
        MR_Word CtorModuleName_52 = ((MR_Word) ((MR_hl_field(1, CtorSymName_49, 0))));

        CtorName_53 = ((MR_String) ((MR_hl_field(1, CtorSymName_49, 1))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CtorModuleName_52, TypeModuleName_1);
        if (succeeded)
        {
          STATE_VARIABLE_OK_2_69 = (MR_Integer) 1;
          STATE_VARIABLE_BadQualCtorSymNames_1_68 = STATE_VARIABLE_BadQualCtorSymNames_0_9;
        }
        else
        {
          mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (CtorSymName_49)), STATE_VARIABLE_BadQualCtorSymNames_0_9, &STATE_VARIABLE_BadQualCtorSymNames_1_68);
          STATE_VARIABLE_OK_2_69 = (MR_Integer) 0;
        }
      }
      else
      {
        CtorName_53 = ((MR_String) ((MR_hl_field(0, CtorSymName_49, 0))));
        STATE_VARIABLE_BadQualCtorSymNames_1_68 = STATE_VARIABLE_BadQualCtorSymNames_0_9;
        STATE_VARIABLE_OK_2_69 = (MR_Integer) 1;
      }
      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ValidCtorNames_2, ((MR_Box) (CtorName_53)));
      if (succeeded)
      {
        STATE_VARIABLE_OK_3_71 = STATE_VARIABLE_OK_2_69;
        STATE_VARIABLE_InvalidCtorSymNames_1_70 = STATE_VARIABLE_InvalidCtorSymNames_0_11;
      }
      else
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (CtorSymName_49)), STATE_VARIABLE_InvalidCtorSymNames_0_11, &STATE_VARIABLE_InvalidCtorSymNames_1_70);
        STATE_VARIABLE_OK_3_71 = (MR_Integer) 0;
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_53)), STATE_VARIABLE_SeenCtorNames_0_6, &STATE_VARIABLE_SeenCtorNames_1_72);
      if (succeeded)
      {
        STATE_VARIABLE_SeenCtorNames_2_75 = STATE_VARIABLE_SeenCtorNames_1_72;
        STATE_VARIABLE_OK_4_74 = STATE_VARIABLE_OK_3_71;
        STATE_VARIABLE_RepeatedCtorNames_1_73 = STATE_VARIABLE_RepeatedCtorNames_0_13;
      }
      else
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_53)), STATE_VARIABLE_RepeatedCtorNames_0_13, &STATE_VARIABLE_RepeatedCtorNames_1_73);
        STATE_VARIABLE_OK_4_74 = (MR_Integer) 0;
        STATE_VARIABLE_SeenCtorNames_2_75 = STATE_VARIABLE_SeenCtorNames_0_6;
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ForeignName_50)), HeadVar__8_8, &STATE_VARIABLE_SeenForeignNames_1_76);
      if (succeeded)
      {
        STATE_VARIABLE_SeenForeignNames_2_79 = STATE_VARIABLE_SeenForeignNames_1_76;
        STATE_VARIABLE_RepeatedForeignNames_1_77 = STATE_VARIABLE_RepeatedForeignNames_0_15;
        switch (STATE_VARIABLE_OK_4_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_MercuryForeignBiMap_1_80 = STATE_VARIABLE_MercuryForeignBiMap_0_4;
            break;
          case (MR_Integer) 1:
            mercury__bimap__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_53)), ((MR_Box) (ForeignName_50)), STATE_VARIABLE_MercuryForeignBiMap_0_4, &STATE_VARIABLE_MercuryForeignBiMap_1_80);
            break;
        }
      }
      else
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ForeignName_50)), STATE_VARIABLE_RepeatedForeignNames_0_15, &STATE_VARIABLE_RepeatedForeignNames_1_77);
        STATE_VARIABLE_SeenForeignNames_2_79 = HeadVar__8_8;
        STATE_VARIABLE_MercuryForeignBiMap_1_80 = STATE_VARIABLE_MercuryForeignBiMap_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = MercuryForeignAL_41;
      next_value_of_STATE_VARIABLE_MercuryForeignBiMap_0_4 = STATE_VARIABLE_MercuryForeignBiMap_1_80;
      next_value_of_STATE_VARIABLE_SeenCtorNames_0_6 = STATE_VARIABLE_SeenCtorNames_2_75;
      next_value_of_HeadVar__8_8 = STATE_VARIABLE_SeenForeignNames_2_79;
      next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_9 = STATE_VARIABLE_BadQualCtorSymNames_1_68;
      next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_11 = STATE_VARIABLE_InvalidCtorSymNames_1_70;
      next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_13 = STATE_VARIABLE_RepeatedCtorNames_1_73;
      next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_15 = STATE_VARIABLE_RepeatedForeignNames_1_77;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_MercuryForeignBiMap_0_4 = next_value_of_STATE_VARIABLE_MercuryForeignBiMap_0_4;
      STATE_VARIABLE_SeenCtorNames_0_6 = next_value_of_STATE_VARIABLE_SeenCtorNames_0_6;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      STATE_VARIABLE_BadQualCtorSymNames_0_9 = next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_9;
      STATE_VARIABLE_InvalidCtorSymNames_0_11 = next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_11;
      STATE_VARIABLE_RepeatedCtorNames_0_13 = next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_13;
      STATE_VARIABLE_RepeatedForeignNames_0_15 = next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_15;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign_enum____Unify____for_fe_or_fee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign_enum____Unify____for_fe_or_fee_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign_enum____Compare____for_fe_or_fee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign_enum____Compare____for_fe_or_fee_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_foreign_enum__init(void)
{
}

void mercury__parse_tree__prog_foreign_enum__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__type_ctor_info_for_fe_or_fee_0);
}

void mercury__parse_tree__prog_foreign_enum__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_foreign_enum__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_foreign_enum.
