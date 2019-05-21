/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
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


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[2][1];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[2][2];




static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[0])))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0(
  MR_Word * parse_tree__item_util__HeadVar__1_1,
  MR_Word parse_tree__item_util__HeadVar__2_2,
  MR_Word parse_tree__item_util__HeadVar__3_3)
{
  {
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
          MR_Word parse_tree__item_util__ForeignType_8;
          MR_Word parse_tree__item_util__DetailsForeign_7;
          MR_Word parse_tree__item_util__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 2)));
          MR_Word parse_tree__item_util__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 1)));
          MR_Word parse_tree__item_util__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 3)));
          MR_Word parse_tree__item_util__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 4)));
          MR_Integer parse_tree__item_util__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 5)));
          MR_Word parse_tree__item_util__Var_9;
          MR_Word parse_tree__item_util__Var_10;

          parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__Var_80)) == (MR_mktag((MR_Integer) 2)));
          if (parse_tree__item_util__succeeded)
          {
            parse_tree__item_util__DetailsForeign_7 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Var_80), (MR_Integer) 2);
            parse_tree__item_util__ForeignType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsForeign_7, (MR_Integer) 0)));
            parse_tree__item_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsForeign_7, (MR_Integer) 1)));
            parse_tree__item_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsForeign_7, (MR_Integer) 2)));
            parse_tree__item_util__succeeded = MR_TRUE;
          }
          if (parse_tree__item_util__succeeded)
          {
            MR_Word parse_tree__item_util__Var_81;

            {
              parse_tree__item_util__Var_81 = parse_tree__prog_foreign__foreign_type_language_1_f_0(parse_tree__item_util__ForeignType_8);
            }
            {
              parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Var_81));
              MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_Word parse_tree__item_util__ItemPragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 1)));
              MR_Word parse_tree__item_util__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_11, (MR_Integer) 0)));
              MR_Word parse_tree__item_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_11, (MR_Integer) 1)));
              MR_Word parse_tree__item_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_11, (MR_Integer) 2)));
              MR_Integer parse_tree__item_util__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_11, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) parse_tree__item_util__Pragma_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word parse_tree__item_util__FDInfo_16 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_12), (MR_Integer) 0);
                    MR_Word parse_tree__item_util__Lang_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_16, (MR_Integer) 0)))) & (MR_Integer) 3);
                    MR_Word parse_tree__item_util__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word parse_tree__item_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_16, (MR_Integer) 1)));

                    {
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_88));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__item_util__Lang_17;
                    MR_Word parse_tree__item_util__FCInfo_20 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_12), (MR_Integer) 1);
                    MR_Word parse_tree__item_util__Var_21;

                    parse_tree__item_util__Lang_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_20, (MR_Integer) 0)));
                    parse_tree__item_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_20, (MR_Integer) 1)));
                    {
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_17));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__item_util__FPInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__Pragma_12, (MR_Integer) 0)));
                    MR_Word parse_tree__item_util__Attrs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_28, (MR_Integer) 0)));
                    MR_Word parse_tree__item_util__Var_77;
                    MR_Word parse_tree__item_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_28, (MR_Integer) 1)));
                    MR_Word parse_tree__item_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_28, (MR_Integer) 2)));
                    MR_Word parse_tree__item_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_28, (MR_Integer) 3)));
                    MR_Word parse_tree__item_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_28, (MR_Integer) 4)));
                    MR_Word parse_tree__item_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_28, (MR_Integer) 5)));
                    MR_Word parse_tree__item_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_28, (MR_Integer) 6)));

                    {
                      parse_tree__item_util__Var_77 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(parse_tree__item_util__Attrs_29);
                    }
                    {
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Var_77));
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_12, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__item_util__FPEInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_12, (MR_Integer) 1)));
                        MR_Word parse_tree__item_util__Lang_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_25, (MR_Integer) 0)));
                        MR_Word parse_tree__item_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_25, (MR_Integer) 1)));
                        MR_String parse_tree__item_util__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_25, (MR_Integer) 2)));

                        {
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_92));
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
                        MR_Word parse_tree__item_util__FEInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_12, (MR_Integer) 1)));
                        MR_Word parse_tree__item_util__Lang_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_22, (MR_Integer) 0)));
                        MR_Word parse_tree__item_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_22, (MR_Integer) 1)));
                        MR_Word parse_tree__item_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_22, (MR_Integer) 2)));

                        {
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_90));
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
          MR_Word parse_tree__item_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
          MR_Word parse_tree__item_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
          MR_Word parse_tree__item_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
          MR_Word parse_tree__item_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
          MR_Integer parse_tree__item_util__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
          MR_Word parse_tree__item_util__Var_6;

          parse_tree__item_util__succeeded = ((((MR_tag((MR_Word) parse_tree__item_util__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Var_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (parse_tree__item_util__succeeded)
          {
            parse_tree__item_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Var_20, (MR_Integer) 1)));
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
    MR_Word parse_tree__item_util__ItemInstance_4;
    MR_Word parse_tree__item_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 0)));
    MR_Word parse_tree__item_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 1)));
    MR_Word parse_tree__item_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 2)));
    MR_Word parse_tree__item_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 3)));
    MR_Word parse_tree__item_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 5)));
    MR_Word parse_tree__item_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 6)));
    MR_Word parse_tree__item_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 7)));
    MR_Integer parse_tree__item_util__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 8)));
    MR_Word parse_tree__item_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 4)));

    {
      parse_tree__item_util__ItemInstance_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 0) = ((MR_Box) (parse_tree__item_util__Var_6));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 1) = ((MR_Box) (parse_tree__item_util__Var_7));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 2) = ((MR_Box) (parse_tree__item_util__Var_8));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 3) = ((MR_Box) (parse_tree__item_util__Var_9));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 5) = ((MR_Box) (parse_tree__item_util__Var_11));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 6) = ((MR_Box) (parse_tree__item_util__Var_12));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 7) = ((MR_Box) (parse_tree__item_util__Var_13));
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 8) = ((MR_Box) (parse_tree__item_util__Var_14));
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
  switch (parse_tree__item_util__ShortIntFileKind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word parse_tree__item_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 0)));
        MR_Word parse_tree__item_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 1)));
        MR_Word parse_tree__item_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 2)));
        MR_Word parse_tree__item_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 3)));
        MR_Word parse_tree__item_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 5)));
        MR_Word parse_tree__item_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 6)));
        MR_Word parse_tree__item_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 7)));
        MR_Integer parse_tree__item_util__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 8)));
        MR_Word parse_tree__item_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 4)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__item_util__MaybeAbstractItemInstance_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__Var_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__Var_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__Var_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__Var_13));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__Var_15));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__item_util__Var_16));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__item_util__Var_17));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__item_util__Var_18));
        }
      }
      break;
    case (MR_Integer) 1:
      *parse_tree__item_util__MaybeAbstractItemInstance_6 = parse_tree__item_util__ItemInstance_5;
      break;
  }
}

void MR_CALL 
parse_tree__item_util__make_abstract_typeclass_2_p_0(
  MR_Word parse_tree__item_util__ItemTypeClass_3,
  MR_Word * parse_tree__item_util__AbstractItemTypeClass_4)
{
  {
    MR_Word parse_tree__item_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 0)));
    MR_Word parse_tree__item_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 1)));
    MR_Word parse_tree__item_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 2)));
    MR_Word parse_tree__item_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 3)));
    MR_Word parse_tree__item_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 5)));
    MR_Word parse_tree__item_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 6)));
    MR_Integer parse_tree__item_util__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 7)));
    MR_Word parse_tree__item_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__item_util__AbstractItemTypeClass_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__Var_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__item_util__Var_12));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__item_util__Var_13));
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
    MR_Word parse_tree__item_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
    MR_Word parse_tree__item_util__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
    MR_Word parse_tree__item_util__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
    MR_Word parse_tree__item_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
    MR_Integer parse_tree__item_util__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) parse_tree__item_util__TypeDefn_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__item_util__DetailsDu_8 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__TypeDefn_7), (MR_Integer) 0);
          MR_Word parse_tree__item_util__Ctors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsDu_8, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__MaybeUserEqComp_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsDu_8, (MR_Integer) 1)));
          MR_Word parse_tree__item_util__MaybeDirectArgCtors_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsDu_8, (MR_Integer) 2)));

          switch (parse_tree__item_util__ShortIntFileKind_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              if ((parse_tree__item_util__MaybeUserEqComp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
              else
              {
                MR_Word parse_tree__item_util__AbstractDetailsDu_13;
                MR_Word parse_tree__item_util__AbstractTypeDefn_14;

                {
                  parse_tree__item_util__AbstractDetailsDu_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractDetailsDu_13, 0) = ((MR_Box) (parse_tree__item_util__Ctors_9));
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractDetailsDu_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractDetailsDu_13, 2) = ((MR_Box) (parse_tree__item_util__MaybeDirectArgCtors_11));
                }
                parse_tree__item_util__AbstractTypeDefn_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__item_util__AbstractDetailsDu_13);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__Var_46));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__Var_47));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_14));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__Var_48));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__Var_49));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__Var_50));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__item_util__AbstractDetails_16;
                MR_Word parse_tree__item_util__Var_29;
                MR_Integer parse_tree__item_util__NumBits_15;
                MR_Word parse_tree__item_util__Var_57;
                MR_Word parse_tree__item_util__Var_58;
                MR_Word parse_tree__item_util__Var_60;
                MR_Word parse_tree__item_util__Var_61;
                MR_Integer parse_tree__item_util__Var_62;
                MR_Word parse_tree__item_util__Var_59;

                {
                  parse_tree__item_util__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__item_util__Ctors_9, &parse_tree__item_util__NumBits_15);
                }
                if (parse_tree__item_util__succeeded)
                  {
                    parse_tree__item_util__AbstractDetails_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__AbstractDetails_16, 0) = ((MR_Box) (parse_tree__item_util__NumBits_15));
                  }
                else
                  parse_tree__item_util__AbstractDetails_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  parse_tree__item_util__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__item_util__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), parse_tree__item_util__Var_29, 1) = ((MR_Box) (parse_tree__item_util__AbstractDetails_16));
                }
                parse_tree__item_util__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
                parse_tree__item_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
                parse_tree__item_util__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
                parse_tree__item_util__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
                parse_tree__item_util__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
                parse_tree__item_util__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__Var_57));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__Var_58));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__Var_29));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__Var_60));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__Var_61));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__Var_62));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__Var_46));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__Var_47));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_2[1])));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__Var_48));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__Var_49));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__Var_50));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__item_util__DetailsForeign_19 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__TypeDefn_7), (MR_Integer) 2);
          MR_Word parse_tree__item_util__ForeignType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsForeign_19, (MR_Integer) 0)));
          MR_Word parse_tree__item_util__Assertions_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsForeign_19, (MR_Integer) 2)));
          MR_Word parse_tree__item_util__MaybeUserEqComp_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__DetailsForeign_19, (MR_Integer) 1)));

          if ((parse_tree__item_util__MaybeUserEqComp_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
          else
          {
            MR_Word parse_tree__item_util__AbsttactDetailsForeign_22;
            MR_Word parse_tree__item_util__AbstractTypeDefn_40;

            {
              parse_tree__item_util__AbsttactDetailsForeign_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbsttactDetailsForeign_22, 0) = ((MR_Box) (parse_tree__item_util__ForeignType_20));
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbsttactDetailsForeign_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
              MR_hl_field(MR_mktag(0), parse_tree__item_util__AbsttactDetailsForeign_22, 2) = ((MR_Box) (parse_tree__item_util__Assertions_21));
            }
            parse_tree__item_util__AbstractTypeDefn_40 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__item_util__AbsttactDetailsForeign_22);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__Var_46));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__Var_47));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_40));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__Var_48));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__Var_49));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__Var_50));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
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
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__Var_46));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__Var_47));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_2[0])));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__Var_48));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__Var_49));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__Var_50));
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
            break;
        }
        break;
    }
  }
}

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

/* :- end_module parse_tree.item_util. */
