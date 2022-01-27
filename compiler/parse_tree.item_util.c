/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version DEV
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


/* :- module parse_tree.item_util. */
/* :- implementation. */

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
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0[2];

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0[2];

static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0_10001(
  MR_Box parse_tree__item_util__wrapper_arg_1,
  MR_Box parse_tree__item_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0_10001(
  MR_Box * parse_tree__item_util__wrapper_arg_1,
  MR_Box parse_tree__item_util__wrapper_arg_2,
  MR_Box parse_tree__item_util__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[4][1];




static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0 = {
  (MR_String) "sifk_int2",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1 = {
  (MR_String) "sifk_int3",
  (MR_Integer) 1
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__item_util____Unify____short_int_file_kind_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____short_int_file_kind_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "short_int_file_kind",
  {     parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0 },
  {     parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0
};

static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0_10001(
  MR_Box parse_tree__item_util__wrapper_arg_1,
  MR_Box parse_tree__item_util__wrapper_arg_2)
{
  {
    MR_bool parse_tree__item_util__succeeded;

    {
      parse_tree__item_util__succeeded = parse_tree__item_util____Unify____short_int_file_kind_0_0(((MR_Word) parse_tree__item_util__wrapper_arg_1), ((MR_Word) parse_tree__item_util__wrapper_arg_2));
    }
    return parse_tree__item_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0_10001(
  MR_Box * parse_tree__item_util__wrapper_arg_1,
  MR_Box parse_tree__item_util__wrapper_arg_2,
  MR_Box parse_tree__item_util__wrapper_arg_3)
{
  {
    MR_Word parse_tree__item_util__conv0_HeadVar__1_1;

    {
      parse_tree__item_util____Compare____short_int_file_kind_0_0(&parse_tree__item_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__item_util__wrapper_arg_2), ((MR_Word) parse_tree__item_util__wrapper_arg_3));
    }
    *parse_tree__item_util__wrapper_arg_1 = ((MR_Box) (parse_tree__item_util__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0(
  MR_Word * parse_tree__item_util__HeadVar__1_1,
  MR_Word parse_tree__item_util__HeadVar__2_2,
  MR_Word parse_tree__item_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__item_util__succeeded;
    MR_Integer parse_tree__item_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__item_util__HeadVar__2_2;
    MR_Integer parse_tree__item_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__item_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__item_util__HeadVar__1_1, parse_tree__item_util__Cast_HeadVar1_4, parse_tree__item_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0(
  MR_Word parse_tree__item_util__HeadVar__2_1,
  MR_Word parse_tree__item_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__item_util__succeeded = (parse_tree__item_util__HeadVar__2_1 == parse_tree__item_util__HeadVar__2_2);

    return parse_tree__item_util__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
  MR_Word parse_tree__item_util__Item_3)
{
  {
    MR_bool parse_tree__item_util__succeeded;
    MR_Word parse_tree__item_util__Langs_4;

    switch (MR_tag((MR_Word) parse_tree__item_util__Item_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__item_util__ItemTypeDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_3), (MR_Integer) 1);
          MR_Word parse_tree__item_util__ForeignType_7;
          MR_Word parse_tree__item_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 2)));
          MR_Word parse_tree__item_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 1)));
          MR_Word parse_tree__item_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 3)));
          MR_Word parse_tree__item_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 4)));
          MR_Integer parse_tree__item_util__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 5)));
          MR_Word parse_tree__item_util__V_8_8;
          MR_Word parse_tree__item_util__V_9_9;

          parse_tree__item_util__succeeded = ((((MR_tag((MR_Word) parse_tree__item_util__V_79_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_79_79, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (parse_tree__item_util__succeeded)
            {
              parse_tree__item_util__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_79_79, (MR_Integer) 1)));
              parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_79_79, (MR_Integer) 2)));
              parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_79_79, (MR_Integer) 3)));
              {
                MR_Word parse_tree__item_util__V_80_80;

                {
                  parse_tree__item_util__V_80_80 = parse_tree__prog_foreign__foreign_type_language_1_f_0(parse_tree__item_util__ForeignType_7);
                }
                {
                  parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_80_80));
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          else
            parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) {
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
            parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__item_util__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 1)));
              MR_Word parse_tree__item_util__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 0)));
              MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 1)));
              MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 2)));
              MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) parse_tree__item_util__Pragma_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word parse_tree__item_util__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_11), (MR_Integer) 0);
                    MR_Word parse_tree__item_util__Lang_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 3);
                    MR_Word parse_tree__item_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word parse_tree__item_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 1)));

                    {
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_87));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__item_util__Lang_16;
                    MR_Word parse_tree__item_util__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_11), (MR_Integer) 1);
                    MR_Word parse_tree__item_util__V_20_20;

                    parse_tree__item_util__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 0)));
                    parse_tree__item_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 1)));
                    {
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_16));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__item_util__FPInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__Pragma_11, (MR_Integer) 0)));
                    MR_Word parse_tree__item_util__Attrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 0)));
                    MR_Word parse_tree__item_util__V_76_76;
                    MR_Word parse_tree__item_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 1)));
                    MR_Word parse_tree__item_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 2)));
                    MR_Word parse_tree__item_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 3)));
                    MR_Word parse_tree__item_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 4)));
                    MR_Word parse_tree__item_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 5)));
                    MR_Word parse_tree__item_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 6)));

                    {
                      parse_tree__item_util__V_76_76 = parse_tree__prog_data__get_foreign_language_1_f_0(parse_tree__item_util__Attrs_28);
                    }
                    {
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_76_76));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__item_util__FPEInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 1)));
                        MR_Word parse_tree__item_util__Lang_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 0)));
                        MR_Word parse_tree__item_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 1)));
                        MR_String parse_tree__item_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 2)));

                        {
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_91));
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                    case (MR_Integer) 30:
                    case (MR_Integer) 31:
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word parse_tree__item_util__FEInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 1)));
                        MR_Word parse_tree__item_util__Lang_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 0)));
                        MR_Word parse_tree__item_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 1)));
                        MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 2)));

                        {
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_89));
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              parse_tree__item_util__Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            }
            break;
        }
        break;
    }
    return parse_tree__item_util__Langs_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__item_needs_imports_1_f_0(
  MR_Word parse_tree__item_util__Item_3)
{
  {
    MR_bool parse_tree__item_util__succeeded;
    MR_Word parse_tree__item_util__NeedsImports_4;

    switch (MR_tag((MR_Word) parse_tree__item_util__Item_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__item_util__ItemTypeDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_3), (MR_Integer) 1);
          MR_Word parse_tree__item_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
          MR_Word parse_tree__item_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
          MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
          MR_Word parse_tree__item_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
          MR_Integer parse_tree__item_util__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
          MR_Word parse_tree__item_util__V_6_6;

          parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_20_20)) == (MR_mktag((MR_Integer) 2)));
          if (parse_tree__item_util__succeeded)
            {
              parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__V_20_20, (MR_Integer) 0)));
              parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
            }
          else
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) {
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
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 10:
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return parse_tree__item_util__NeedsImports_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_instance_abstract_1_f_0(
  MR_Word parse_tree__item_util__ItemInstance0_3)
{
  {
    MR_bool parse_tree__item_util__succeeded;
    MR_Word parse_tree__item_util__ItemInstance_4;
    MR_Word parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 0)));
    MR_Word parse_tree__item_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 1)));
    MR_Word parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 2)));
    MR_Word parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 3)));
    MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 5)));
    MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 6)));
    MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 7)));
    MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 8)));
    MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 4)));

    {
      parse_tree__item_util__ItemInstance_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 0) = ((MR_Box) (parse_tree__item_util__V_6_6));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 1) = ((MR_Box) (parse_tree__item_util__V_7_7));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 2) = ((MR_Box) (parse_tree__item_util__V_8_8));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 3) = ((MR_Box) (parse_tree__item_util__V_9_9));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 5) = ((MR_Box) (parse_tree__item_util__V_11_11));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 6) = ((MR_Box) (parse_tree__item_util__V_12_12));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 7) = ((MR_Box) (parse_tree__item_util__V_13_13));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 8) = ((MR_Box) (parse_tree__item_util__V_14_14));
    }
    return parse_tree__item_util__ItemInstance_4;
  }
}

void MR_CALL 
parse_tree__item_util__maybe_make_abstract_instance_3_p_0(
  MR_Word parse_tree__item_util__ShortIntFileKind_4,
  MR_Word parse_tree__item_util__ItemInstance_5,
  MR_Word * parse_tree__item_util__MaybeAbstractItemInstance_6)
{
  {
    MR_bool parse_tree__item_util__succeeded;

    switch (parse_tree__item_util__ShortIntFileKind_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 1)));
          MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 2)));
          MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 3)));
          MR_Word parse_tree__item_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 5)));
          MR_Word parse_tree__item_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 6)));
          MR_Word parse_tree__item_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 7)));
          MR_Integer parse_tree__item_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 8)));
          MR_Word parse_tree__item_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 4)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__item_util__MaybeAbstractItemInstance_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_10_10));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_11_11));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__V_12_12));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_13_13));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_15_15));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__item_util__V_16_16));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__item_util__V_17_17));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__item_util__V_18_18));
          }
        }
        break;
      case (MR_Integer) 1:
        *parse_tree__item_util__MaybeAbstractItemInstance_6 = parse_tree__item_util__ItemInstance_5;
        break;
    }
  }
}

void MR_CALL 
parse_tree__item_util__make_abstract_typeclass_2_p_0(
  MR_Word parse_tree__item_util__ItemTypeClass_3,
  MR_Word * parse_tree__item_util__AbstractItemTypeClass_4)
{
  {
    MR_bool parse_tree__item_util__succeeded;
    MR_Word parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 0)));
    MR_Word parse_tree__item_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 1)));
    MR_Word parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 2)));
    MR_Word parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 3)));
    MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 5)));
    MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 6)));
    MR_Integer parse_tree__item_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 7)));
    MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__item_util__AbstractItemTypeClass_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_6_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_7_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__V_8_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_9_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_11_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__item_util__V_12_12));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__item_util__V_13_13));
    }
  }
}

void MR_CALL 
parse_tree__item_util__maybe_make_abstract_type_defn_3_p_0(
  MR_Word parse_tree__item_util__ShortIntFileKind_4,
  MR_Word parse_tree__item_util__ItemTypeDefn_5,
  MR_Word * parse_tree__item_util__MaybeAbstractItemTypeDefn_6)
{
  {
    MR_bool parse_tree__item_util__succeeded;
    MR_Word parse_tree__item_util__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
    MR_Word parse_tree__item_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
    MR_Word parse_tree__item_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
    MR_Word parse_tree__item_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
    MR_Word parse_tree__item_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
    MR_Integer parse_tree__item_util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) parse_tree__item_util__TypeDefn_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__item_util__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
          MR_Word parse_tree__item_util__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));

          switch (parse_tree__item_util__ShortIntFileKind_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              if ((parse_tree__item_util__MaybeUserEqComp_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
              else
                {
                  MR_Word parse_tree__item_util__AbstractTypeDefn_12;

                  {
                    parse_tree__item_util__AbstractTypeDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 0) = ((MR_Box) (parse_tree__item_util__Ctors_8));
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 2) = ((MR_Box) (parse_tree__item_util__MaybeDirectArgCtors_10));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_12));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
                  }
                }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__item_util__AbstractDetails_14;
                MR_Word parse_tree__item_util__V_26_26;
                MR_Integer parse_tree__item_util__NumBits_13;
                MR_Word parse_tree__item_util__V_54_54;
                MR_Word parse_tree__item_util__V_55_55;
                MR_Word parse_tree__item_util__V_57_57;
                MR_Word parse_tree__item_util__V_58_58;
                MR_Integer parse_tree__item_util__V_59_59;
                MR_Word parse_tree__item_util__V_56_56;

                {
                  parse_tree__item_util__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__item_util__Ctors_8, &parse_tree__item_util__NumBits_13);
                }
                if (parse_tree__item_util__succeeded)
                  {
                    parse_tree__item_util__AbstractDetails_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__AbstractDetails_14, 0) = ((MR_Box) (parse_tree__item_util__NumBits_13));
                  }
                else
                  parse_tree__item_util__AbstractDetails_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  parse_tree__item_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), parse_tree__item_util__V_26_26, 0) = ((MR_Box) (parse_tree__item_util__AbstractDetails_14));
                }
                parse_tree__item_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
                parse_tree__item_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
                parse_tree__item_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
                parse_tree__item_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
                parse_tree__item_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
                parse_tree__item_util__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_54_54));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_55_55));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__V_26_26));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_57_57));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_58_58));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_59_59));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (parse_tree__item_util__ShortIntFileKind_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__item_util_scalar_common_1[2])));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__item_util_scalar_common_1[3])));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__item_util__ForeignType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
              MR_Word parse_tree__item_util__Assertions_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 3)));
              MR_Word parse_tree__item_util__MaybeUserEqComp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));

              if ((parse_tree__item_util__MaybeUserEqComp_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
              else
                {
                  MR_Word parse_tree__item_util__AbstractTypeDefn_37;

                  {
                    parse_tree__item_util__AbstractTypeDefn_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 1) = ((MR_Box) (parse_tree__item_util__ForeignType_18));
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 3) = ((MR_Box) (parse_tree__item_util__Assertions_19));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_37));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
                  }
                }
            }
            break;
        }
        break;
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.item_util. */
