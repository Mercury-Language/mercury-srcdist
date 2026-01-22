/*
** Automatically generated from `prog_data_used_modules.m'
** by the Mercury compiler,
** version rotd-2026-01-22
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


// :- module parse_tree.prog_data_used_modules.
// :- implementation.

/*
INIT mercury__parse_tree__prog_data_used_modules__init
ENDINIT
*/

#include "parse_tree.prog_data_used_modules.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.sym_name.mih"




static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_ordinal_ordered_item_visibility_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_name_ordered_item_visibility_0[2];

static const MR_Integer parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_item_visibility_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_used_modules__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_types_used_modules_0_0[2];

static const MR_ConstString parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_names_used_modules_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_stag_ordered_used_modules_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_ptag_ordered_used_modules_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_name_ordered_used_modules_0[1];

static const MR_Integer parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_used_modules_0[1];

static void MR_CALL 
parse_tree__prog_data_used_modules__add_module_and_ancestors_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_9,
  MR_Word * STATE_VARIABLE_UsedModuleNames_10);

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____item_visibility_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____item_visibility_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____used_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____used_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_data_used_modules_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__prog_data_used_modules_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};





static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_0 = {
  (MR_String) "visibility_public",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_1 = {
  (MR_String) "visibility_private",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_ordinal_ordered_item_visibility_0[2] = {
  &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_0,
  &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_name_ordered_item_visibility_0[2] = {
  &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_1,
  &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_0
};

static const MR_Integer parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_item_visibility_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_used_modules____Unify____item_visibility_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_used_modules____Compare____item_visibility_0_0_10001)),
  (MR_String) "parse_tree.prog_data_used_modules",
  (MR_String) "item_visibility",
  { parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_name_ordered_item_visibility_0 },
  { parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_ordinal_ordered_item_visibility_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_item_visibility_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_used_modules__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_types_used_modules_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_used_modules__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_used_modules__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_names_used_modules_0_0[2] = {
  (MR_String) "int_used_modules",
  (MR_String) "imp_used_modules"
};

static const MR_DuFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0 = {
  (MR_String) "used_modules",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_types_used_modules_0_0,
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_names_used_modules_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_stag_ordered_used_modules_0_0[1] = { &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0 };

static const MR_DuPtagLayout parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_ptag_ordered_used_modules_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_stag_ordered_used_modules_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_name_ordered_used_modules_0[1] = { &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0 };

static const MR_Integer parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_used_modules_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_used_modules____Unify____used_modules_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_used_modules____Compare____used_modules_0_0_10001)),
  (MR_String) "parse_tree.prog_data_used_modules",
  (MR_String) "used_modules",
  { parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_name_ordered_used_modules_0 },
  { parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_ptag_ordered_used_modules_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_used_modules_0,

};

void MR_CALL 
parse_tree__prog_data_used_modules____Compare____used_modules_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_used_modules_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_used_modules_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____used_modules_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_data_used_modules_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__prog_data_used_modules_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_used_modules____Compare____item_visibility_0_0(
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
parse_tree__prog_data_used_modules____Unify____item_visibility_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_used_modules__record_format_modules_as_used_2_p_0(
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8)
{
  MR_Word ImpUsedModules0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UsedModules_0_7, 1))));
  MR_Word FormatModules_5;
  MR_Word ImpUsedModules_6;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_16;

  Var_9 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
  Var_11 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
  Var_13 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_12));
  }
  {
    FormatModules_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FormatModules_5, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, FormatModules_5, 1) = ((MR_Box) (Var_10));
  }
  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), FormatModules_5, ImpUsedModules0_4, &ImpUsedModules_6);
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UsedModules_0_7, 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UsedModules_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (ImpUsedModules_6));
  }
}

void MR_CALL 
parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(
  MR_Word Visibility_5,
  MR_Word SymName_6,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(1, SymName_6, 0))));

    parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(Visibility_5, ModuleName_9, STATE_VARIABLE_UsedModules_0_11, STATE_VARIABLE_UsedModules_12);
  }
  else
    *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
}

void MR_CALL 
parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(
  MR_Word Visibility_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13)
{
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UsedModules_0_12, 1))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UsedModules_0_12, 0))));

  switch (Visibility_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ImpUsedModules_11;
        MR_Word Var_18;

        parse_tree__prog_data_used_modules__add_module_and_ancestors_3_p_0(ModuleName_6, Var_20, &ImpUsedModules_11);
        Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UsedModules_0_12, 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_UsedModules_13 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(0, base, 1) = ((MR_Box) (ImpUsedModules_11));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word IntUsedModules_9;
        MR_Word Var_16;

        parse_tree__prog_data_used_modules__add_module_and_ancestors_3_p_0(ModuleName_6, Var_21, &IntUsedModules_9);
        Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UsedModules_0_12, 1))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_UsedModules_13 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (IntUsedModules_9));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_data_used_modules__add_module_and_ancestors_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_9,
  MR_Word * STATE_VARIABLE_UsedModuleNames_10)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_UsedModuleNames_1_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), STATE_VARIABLE_UsedModuleNames_0_9, &STATE_VARIABLE_UsedModuleNames_1_11);
    if (((MR_tag((MR_Word) ModuleName_4)) == (MR_Integer) 1))
    {
      MR_Word ParentModuleName_7 = ((MR_Word) ((MR_hl_field(1, ModuleName_4, 0))));
      MR_Word next_value_of_ModuleName_4 = ParentModuleName_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_9 = STATE_VARIABLE_UsedModuleNames_1_11;

      // direct tailcall eliminated
      ;
      ModuleName_4 = next_value_of_ModuleName_4;
      STATE_VARIABLE_UsedModuleNames_0_9 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_9;
      continue;
    }
    else
      *STATE_VARIABLE_UsedModuleNames_10 = STATE_VARIABLE_UsedModuleNames_1_11;
    break;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_used_modules__used_modules_init_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;

  Var_2 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_3 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____item_visibility_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_used_modules____Unify____item_visibility_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____item_visibility_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_used_modules____Compare____item_visibility_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____used_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_used_modules____Unify____used_modules_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____used_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_used_modules____Compare____used_modules_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_data_used_modules__init(void)
{
}

void mercury__parse_tree__prog_data_used_modules__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0);
}

void mercury__parse_tree__prog_data_used_modules__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_data_used_modules__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_data_used_modules.
