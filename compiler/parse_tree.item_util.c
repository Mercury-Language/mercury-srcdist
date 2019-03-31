/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version rotd-2019-03-31
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


// :- module parse_tree.item_util.
// :- implementation.

/*
INIT mercury__parse_tree__item_util__init
ENDINIT
*/

#include "parse_tree.item_util.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0[2];

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0[2];

static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[2][1];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[1][2];




static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[0])))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0 = {
  (MR_String) "sifk_int2",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1 = {
  (MR_String) "sifk_int3",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1
};

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_short_int_file_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__item_util____Unify____short_int_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____short_int_file_kind_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "short_int_file_kind",
  {     parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0 },
  {     parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0
};

void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0(
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
parse_tree__item_util____Unify____short_int_file_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
  MR_Word Item_3)
{
  {
    MR_bool succeeded;
    MR_Word Langs_4;

    switch (MR_tag((MR_Word) Item_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemTypeDefn_6 = (MR_Word) (MR_body((MR_Word) (Item_3), (MR_Integer) 1));
          MR_Word ForeignType_8;
          MR_Word DetailsForeign_7;
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 2))));

          succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 2);
          if (succeeded)
          {
            DetailsForeign_7 = (MR_Word) (MR_body((MR_Word) (Var_31), (MR_Integer) 2));
            ForeignType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_7, (MR_Integer) 0))));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_32;

            Var_32 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_8);
            {
              Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
            Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 10:
          case (MR_Integer) 12:
            Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            {
              MR_Word ItemPragma_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_11, (MR_Integer) 0))));

              Langs_4 = parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(Pragma_12);
            }
            break;
          case (MR_Integer) 9:
            Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            break;
          case (MR_Integer) 11:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.item_needs_foreign_imports\'/1", (MR_String) "item_type_repn");
            }
            break;
        }
        break;
    }
    return Langs_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__pragma_needs_foreign_imports_1_f_0(
  MR_Word Pragma_3)
{
  {
    MR_Word Langs_4;

    switch (MR_tag((MR_Word) Pragma_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FDInfo_5 = (MR_Word) ((MR_Word) (Pragma_3));
          MR_Word Lang_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

          {
            Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_56));
            MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Lang_6;
          MR_Word FCInfo_9 = (MR_Word) (MR_body((MR_Word) (Pragma_3), (MR_Integer) 1));

          Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_9, (MR_Integer) 0))) & (MR_Integer) 3);
          {
            Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_6));
            MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_17 = (MR_Word) (MR_body((MR_Word) (Pragma_3), (MR_Integer) 2));
          MR_Word Attrs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_17, (MR_Integer) 0))));
          MR_Word Var_53;

          Var_53 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_18);
          {
            Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FPEInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 1))));
              MR_Word Lang_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_14, (MR_Integer) 0))) & (MR_Integer) 3);

              {
                Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_60));
                MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 23:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 27:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
            Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word FEInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 1))));
              MR_Word Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_11, (MR_Integer) 0))) & (MR_Integer) 3);

              {
                Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_58));
                MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        break;
    }
    return Langs_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__item_needs_imports_1_f_0(
  MR_Word Item_3)
{
  {
    MR_bool succeeded;
    MR_Word NeedsImports_4;

    switch (MR_tag((MR_Word) Item_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        NeedsImports_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemTypeDefn_5 = (MR_Word) (MR_body((MR_Word) (Item_3), (MR_Integer) 1));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_5, (MR_Integer) 2))));

          succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            NeedsImports_4 = (MR_Integer) 0;
          }
          else
            NeedsImports_4 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            NeedsImports_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 10:
          case (MR_Integer) 12:
            NeedsImports_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 11:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.item_needs_imports\'/1", (MR_String) "item_type_repn");
            }
            break;
        }
        break;
    }
    return NeedsImports_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_instance_abstract_1_f_0(
  MR_Word ItemInstance0_3)
{
  {
    MR_Word ItemInstance_4;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 1))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 2))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 3))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 5))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 6))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 7))));
    MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstance0_3, (MR_Integer) 8))));

    {
      ItemInstance_4 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemInstance_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 5) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 6) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 7) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), ItemInstance_4, 8) = ((MR_Box) (Var_14));
    }
    return ItemInstance_4;
  }
}

void MR_CALL 
parse_tree__item_util__make_abstract_typeclass_2_p_0(
  MR_Word ItemTypeClass_3,
  MR_Word * AbstractItemTypeClass_4)
{
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_3, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_3, (MR_Integer) 1))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_3, (MR_Integer) 2))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_3, (MR_Integer) 3))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_3, (MR_Integer) 5))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_3, (MR_Integer) 6))));
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClass_3, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *AbstractItemTypeClass_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_13));
    }
  }
}

void MR_CALL 
parse_tree__item_util__maybe_make_abstract_type_defn_for_int2_2_p_0(
  MR_Word ItemTypeDefn_3,
  MR_Word * MaybeAbstractItemTypeDefn_4)
{
  {
    MR_Word TypeDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 2))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 3))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 4))));
    MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_6 = (MR_Word) ((MR_Word) (TypeDefn_5));
          MR_Word Ctors_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 0))));
          MR_Word MaybeCanonical_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_6, (MR_Integer) 2))));

          if ((MaybeCanonical_8 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
          else
          {
            MR_Word AbstractDetailsDu_11;
            MR_Word AbstractTypeDefn_12;

            {
              AbstractDetailsDu_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractDetailsDu_11, 0) = ((MR_Box) (Ctors_7));
              MR_hl_field(MR_mktag(0), AbstractDetailsDu_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
              MR_hl_field(MR_mktag(0), AbstractDetailsDu_11, 2) = ((MR_Box) (MaybeDirectArgCtors_9));
            }
            AbstractTypeDefn_12 = (MR_Word) ((MR_Word) (AbstractDetailsDu_11));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *MaybeAbstractItemTypeDefn_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractTypeDefn_12));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *MaybeAbstractItemTypeDefn_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsForeign_17 = (MR_Word) (MR_body((MR_Word) (TypeDefn_5), (MR_Integer) 2));
          MR_Word ForeignType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_17, (MR_Integer) 0))));
          MR_Word Assertions_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_17, (MR_Integer) 2))));
          MR_Word MaybeCanonical_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_17, (MR_Integer) 1))));

          if ((MaybeCanonical_33 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
          else
          {
            MR_Word AbstractDetailsForeign_20;
            MR_Word AbstractTypeDefn_30;

            {
              AbstractDetailsForeign_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 0) = ((MR_Box) (ForeignType_18));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
              MR_hl_field(MR_mktag(0), AbstractDetailsForeign_20, 2) = ((MR_Box) (Assertions_19));
            }
            AbstractTypeDefn_30 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (AbstractDetailsForeign_20)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *MaybeAbstractItemTypeDefn_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractTypeDefn_30));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
            break;
          case (MR_Integer) 1:
            *MaybeAbstractItemTypeDefn_4 = ItemTypeDefn_3;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__item_util____Unify____short_int_file_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__item_util____Compare____short_int_file_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__item_util__init(void)
{
}

void mercury__parse_tree__item_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_short_int_file_kind_0);
}

void mercury__parse_tree__item_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__item_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.item_util.
