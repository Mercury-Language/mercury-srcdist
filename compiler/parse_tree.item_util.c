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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 99 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0;

#line 102 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1;

#line 105 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0[2];

#line 108 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0[2];

#line 111 "parse_tree.item_util.c"
static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0[2];

#line 114 "parse_tree.item_util.c"
static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0_10001(
#line 117 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_1,
#line 119 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2);

#line 122 "parse_tree.item_util.c"
static void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0_10001(
#line 125 "parse_tree.item_util.c"
  MR_Box * parse_tree__item_util__wrapper_arg_1,
#line 127 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2,
#line 129 "parse_tree.item_util.c"
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



#line 166 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0 = {
  (MR_String) "sifk_int2",
  (MR_Integer) 0
};

#line 172 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1 = {
  (MR_String) "sifk_int3",
  (MR_Integer) 1
};

#line 178 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1
};

#line 184 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1
};

#line 190 "parse_tree.item_util.c"
static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 196 "parse_tree.item_util.c"
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

#line 213 "parse_tree.item_util.c"
static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0_10001(
#line 216 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_1,
#line 218 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2)
#line 220 "parse_tree.item_util.c"
{
#line 222 "parse_tree.item_util.c"
  {
#line 224 "parse_tree.item_util.c"
    MR_bool parse_tree__item_util__succeeded;

#line 227 "parse_tree.item_util.c"
    {
#line 229 "parse_tree.item_util.c"
      parse_tree__item_util__succeeded = parse_tree__item_util____Unify____short_int_file_kind_0_0(((MR_Word) parse_tree__item_util__wrapper_arg_1), ((MR_Word) parse_tree__item_util__wrapper_arg_2));
    }
#line 232 "parse_tree.item_util.c"
    return parse_tree__item_util__succeeded;
#line 234 "parse_tree.item_util.c"
  }
#line 236 "parse_tree.item_util.c"
}

#line 239 "parse_tree.item_util.c"
static void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0_10001(
#line 242 "parse_tree.item_util.c"
  MR_Box * parse_tree__item_util__wrapper_arg_1,
#line 244 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2,
#line 246 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_3)
#line 248 "parse_tree.item_util.c"
{
#line 250 "parse_tree.item_util.c"
  {
#line 252 "parse_tree.item_util.c"
    MR_Word parse_tree__item_util__conv0_HeadVar__1_1;

#line 255 "parse_tree.item_util.c"
    {
#line 257 "parse_tree.item_util.c"
      parse_tree__item_util____Compare____short_int_file_kind_0_0(&parse_tree__item_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__item_util__wrapper_arg_2), ((MR_Word) parse_tree__item_util__wrapper_arg_3));
    }
#line 260 "parse_tree.item_util.c"
    *parse_tree__item_util__wrapper_arg_1 = ((MR_Box) (parse_tree__item_util__conv0_HeadVar__1_1));
#line 262 "parse_tree.item_util.c"
  }
#line 264 "parse_tree.item_util.c"
}

#line 28 "item_util.m"
void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0(
#line 28 "item_util.m"
  MR_Word * parse_tree__item_util__HeadVar__1_1,
#line 28 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_2,
#line 28 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__3_3)
#line 28 "item_util.m"
{
#line 28 "item_util.m"
  {
#line 28 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 28 "item_util.m"
    MR_Integer parse_tree__item_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__item_util__HeadVar__2_2;
#line 28 "item_util.m"
    MR_Integer parse_tree__item_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__item_util__HeadVar__3_3;

#line 28 "item_util.m"
    {
#line 28 "item_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__item_util__HeadVar__1_1, parse_tree__item_util__Cast_HeadVar1_4, parse_tree__item_util__Cast_HeadVar2_5);
#line 28 "item_util.m"
      return;
    }
#line 28 "item_util.m"
  }
#line 28 "item_util.m"
}

#line 28 "item_util.m"
MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0(
#line 28 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_1,
#line 28 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_2)
#line 28 "item_util.m"
{
#line 308 "parse_tree.item_util.c"
  {
#line 310 "parse_tree.item_util.c"
    MR_bool parse_tree__item_util__succeeded = (parse_tree__item_util__HeadVar__2_1 == parse_tree__item_util__HeadVar__2_2);

#line 313 "parse_tree.item_util.c"
    return parse_tree__item_util__succeeded;
#line 315 "parse_tree.item_util.c"
  }
#line 28 "item_util.m"
}

#line 58 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
#line 58 "item_util.m"
  MR_Word parse_tree__item_util__Item_3)
#line 58 "item_util.m"
{
#line 209 "item_util.m"
  {
#line 209 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 209 "item_util.m"
    MR_Word parse_tree__item_util__Langs_4;

#line 209 "item_util.m"
#line 209 "item_util.m"
    switch (MR_tag((MR_Word) parse_tree__item_util__Item_3)) {
#line 209 "item_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 209 "item_util.m"
      case (MR_Integer) 0:
#line 209 "item_util.m"
      case (MR_Integer) 2:
#line 289 "item_util.m"
        parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "item_util.m"
        break;
#line 209 "item_util.m"
      case (MR_Integer) 1:
#line 213 "item_util.m"
        {
#line 213 "item_util.m"
          MR_Word parse_tree__item_util__ItemTypeDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_3), (MR_Integer) 1);
#line 219 "item_util.m"
          MR_Word parse_tree__item_util__ForeignType_7;
#line 215 "item_util.m"
          MR_Word parse_tree__item_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 2)));
#line 215 "item_util.m"
          MR_Word parse_tree__item_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 0)));
#line 215 "item_util.m"
          MR_Word parse_tree__item_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 1)));
#line 215 "item_util.m"
          MR_Word parse_tree__item_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 3)));
#line 215 "item_util.m"
          MR_Word parse_tree__item_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 4)));
#line 215 "item_util.m"
          MR_Integer parse_tree__item_util__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 5)));
#line 216 "item_util.m"
          MR_Word parse_tree__item_util__V_8_8;
#line 216 "item_util.m"
          MR_Word parse_tree__item_util__V_9_9;

#line 216 "item_util.m"
          parse_tree__item_util__succeeded = ((((MR_tag((MR_Word) parse_tree__item_util__V_77_77)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_77_77, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 216 "item_util.m"
          if (parse_tree__item_util__succeeded)
#line 216 "item_util.m"
            {
#line 216 "item_util.m"
              parse_tree__item_util__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_77_77, (MR_Integer) 1)));
#line 216 "item_util.m"
              parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_77_77, (MR_Integer) 2)));
#line 216 "item_util.m"
              parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_77_77, (MR_Integer) 3)));
#line 218 "item_util.m"
              {
#line 218 "item_util.m"
                MR_Word parse_tree__item_util__V_78_78;

#line 218 "item_util.m"
                {
#line 218 "item_util.m"
                  parse_tree__item_util__V_78_78 = parse_tree__prog_foreign__foreign_type_language_1_f_0(parse_tree__item_util__ForeignType_7);
                }
#line 218 "item_util.m"
                {
#line 218 "item_util.m"
                  parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "item_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_78_78));
#line 218 "item_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "item_util.m"
                }
#line 218 "item_util.m"
              }
#line 216 "item_util.m"
            }
#line 216 "item_util.m"
          else
#line 220 "item_util.m"
            parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 213 "item_util.m"
        }
#line 209 "item_util.m"
        break;
#line 209 "item_util.m"
      case (MR_Integer) 3:
#line 209 "item_util.m"
#line 209 "item_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) {
#line 209 "item_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 209 "item_util.m"
          case (MR_Integer) 0:
#line 209 "item_util.m"
          case (MR_Integer) 1:
#line 209 "item_util.m"
          case (MR_Integer) 2:
#line 209 "item_util.m"
          case (MR_Integer) 4:
#line 209 "item_util.m"
          case (MR_Integer) 5:
#line 209 "item_util.m"
          case (MR_Integer) 6:
#line 209 "item_util.m"
          case (MR_Integer) 7:
#line 209 "item_util.m"
          case (MR_Integer) 8:
#line 209 "item_util.m"
          case (MR_Integer) 10:
#line 289 "item_util.m"
            parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "item_util.m"
            break;
#line 209 "item_util.m"
          case (MR_Integer) 3:
#line 223 "item_util.m"
            {
#line 223 "item_util.m"
              MR_Word parse_tree__item_util__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 1)));
#line 223 "item_util.m"
              MR_Word parse_tree__item_util__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 0)));
#line 224 "item_util.m"
              MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 1)));
#line 224 "item_util.m"
              MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 2)));
#line 224 "item_util.m"
              MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 3)));

#line 240 "item_util.m"
#line 240 "item_util.m"
              switch (MR_tag((MR_Word) parse_tree__item_util__Pragma_11)) {
#line 240 "item_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 240 "item_util.m"
                case (MR_Integer) 0:
#line 238 "item_util.m"
                  {
#line 238 "item_util.m"
                    MR_Word parse_tree__item_util__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_11), (MR_Integer) 0);
#line 238 "item_util.m"
                    MR_Word parse_tree__item_util__Lang_85 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 228 "item_util.m"
                    MR_Word parse_tree__item_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 228 "item_util.m"
                    MR_Word parse_tree__item_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 1)));

#line 239 "item_util.m"
                    {
#line 239 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_85));
#line 239 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "item_util.m"
                    }
#line 238 "item_util.m"
                  }
#line 240 "item_util.m"
                  break;
#line 240 "item_util.m"
                case (MR_Integer) 1:
#line 238 "item_util.m"
                  {
#line 238 "item_util.m"
                    MR_Word parse_tree__item_util__Lang_16;
#line 238 "item_util.m"
                    MR_Word parse_tree__item_util__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_11), (MR_Integer) 1);
#line 231 "item_util.m"
                    MR_Word parse_tree__item_util__V_20_20;

#line 231 "item_util.m"
                    parse_tree__item_util__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 0)));
#line 231 "item_util.m"
                    parse_tree__item_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 1)));
#line 239 "item_util.m"
                    {
#line 239 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_16));
#line 239 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "item_util.m"
                    }
#line 238 "item_util.m"
                  }
#line 240 "item_util.m"
                  break;
#line 240 "item_util.m"
                case (MR_Integer) 2:
#line 241 "item_util.m"
                  {
#line 241 "item_util.m"
                    MR_Word parse_tree__item_util__FPInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__Pragma_11, (MR_Integer) 0)));
#line 241 "item_util.m"
                    MR_Word parse_tree__item_util__Attrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 0)));
#line 241 "item_util.m"
                    MR_Word parse_tree__item_util__V_74_74;
#line 242 "item_util.m"
                    MR_Word parse_tree__item_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 1)));
#line 242 "item_util.m"
                    MR_Word parse_tree__item_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 2)));
#line 242 "item_util.m"
                    MR_Word parse_tree__item_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 3)));
#line 242 "item_util.m"
                    MR_Word parse_tree__item_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 4)));
#line 242 "item_util.m"
                    MR_Word parse_tree__item_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 5)));
#line 242 "item_util.m"
                    MR_Word parse_tree__item_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 6)));

#line 243 "item_util.m"
                    {
#line 243 "item_util.m"
                      parse_tree__item_util__V_74_74 = parse_tree__prog_data__get_foreign_language_1_f_0(parse_tree__item_util__Attrs_28);
                    }
#line 243 "item_util.m"
                    {
#line 243 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_74_74));
#line 243 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "item_util.m"
                    }
#line 241 "item_util.m"
                  }
#line 240 "item_util.m"
                  break;
#line 240 "item_util.m"
                case (MR_Integer) 3:
#line 240 "item_util.m"
#line 240 "item_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 0)))) {
#line 240 "item_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 240 "item_util.m"
                    case (MR_Integer) 0:
#line 240 "item_util.m"
                    case (MR_Integer) 2:
#line 240 "item_util.m"
                    case (MR_Integer) 4:
#line 240 "item_util.m"
                    case (MR_Integer) 5:
#line 240 "item_util.m"
                    case (MR_Integer) 6:
#line 240 "item_util.m"
                    case (MR_Integer) 7:
#line 240 "item_util.m"
                    case (MR_Integer) 8:
#line 240 "item_util.m"
                    case (MR_Integer) 9:
#line 240 "item_util.m"
                    case (MR_Integer) 10:
#line 240 "item_util.m"
                    case (MR_Integer) 11:
#line 240 "item_util.m"
                    case (MR_Integer) 12:
#line 240 "item_util.m"
                    case (MR_Integer) 13:
#line 240 "item_util.m"
                    case (MR_Integer) 14:
#line 240 "item_util.m"
                    case (MR_Integer) 15:
#line 240 "item_util.m"
                    case (MR_Integer) 16:
#line 240 "item_util.m"
                    case (MR_Integer) 17:
#line 240 "item_util.m"
                    case (MR_Integer) 18:
#line 240 "item_util.m"
                    case (MR_Integer) 19:
#line 240 "item_util.m"
                    case (MR_Integer) 20:
#line 240 "item_util.m"
                    case (MR_Integer) 21:
#line 240 "item_util.m"
                    case (MR_Integer) 22:
#line 240 "item_util.m"
                    case (MR_Integer) 23:
#line 240 "item_util.m"
                    case (MR_Integer) 24:
#line 240 "item_util.m"
                    case (MR_Integer) 25:
#line 240 "item_util.m"
                    case (MR_Integer) 26:
#line 240 "item_util.m"
                    case (MR_Integer) 27:
#line 240 "item_util.m"
                    case (MR_Integer) 28:
#line 240 "item_util.m"
                    case (MR_Integer) 29:
#line 274 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 240 "item_util.m"
                      break;
#line 240 "item_util.m"
                    case (MR_Integer) 1:
#line 238 "item_util.m"
                      {
#line 238 "item_util.m"
                        MR_Word parse_tree__item_util__FPEInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 1)));
#line 238 "item_util.m"
                        MR_Word parse_tree__item_util__Lang_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 0)));
#line 237 "item_util.m"
                        MR_Word parse_tree__item_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 1)));
#line 237 "item_util.m"
                        MR_String parse_tree__item_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 2)));

#line 239 "item_util.m"
                        {
#line 239 "item_util.m"
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_89));
#line 239 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "item_util.m"
                        }
#line 238 "item_util.m"
                      }
#line 240 "item_util.m"
                      break;
#line 240 "item_util.m"
                    case (MR_Integer) 3:
#line 238 "item_util.m"
                      {
#line 238 "item_util.m"
                        MR_Word parse_tree__item_util__FEInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 1)));
#line 238 "item_util.m"
                        MR_Word parse_tree__item_util__Lang_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 0)));
#line 234 "item_util.m"
                        MR_Word parse_tree__item_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 1)));
#line 234 "item_util.m"
                        MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 2)));

#line 239 "item_util.m"
                        {
#line 239 "item_util.m"
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_87));
#line 239 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "item_util.m"
                        }
#line 238 "item_util.m"
                      }
#line 240 "item_util.m"
                      break;
#line 240 "item_util.m"
                  }
#line 240 "item_util.m"
                  break;
#line 240 "item_util.m"
              }
#line 223 "item_util.m"
            }
#line 209 "item_util.m"
            break;
#line 209 "item_util.m"
          case (MR_Integer) 9:
#line 211 "item_util.m"
            {
#line 211 "item_util.m"
              return parse_tree__item_util__Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            }
#line 209 "item_util.m"
            break;
#line 209 "item_util.m"
        }
#line 209 "item_util.m"
        break;
#line 209 "item_util.m"
    }
#line 209 "item_util.m"
    return parse_tree__item_util__Langs_4;
#line 209 "item_util.m"
  }
#line 58 "item_util.m"
}

#line 56 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__item_needs_imports_1_f_0(
#line 56 "item_util.m"
  MR_Word parse_tree__item_util__Item_3)
#line 56 "item_util.m"
{
#line 181 "item_util.m"
  {
#line 181 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 181 "item_util.m"
    MR_Word parse_tree__item_util__NeedsImports_4;

#line 181 "item_util.m"
#line 181 "item_util.m"
    switch (MR_tag((MR_Word) parse_tree__item_util__Item_3)) {
#line 181 "item_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 181 "item_util.m"
      case (MR_Integer) 0:
#line 181 "item_util.m"
      case (MR_Integer) 2:
#line 201 "item_util.m"
        parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 181 "item_util.m"
        break;
#line 181 "item_util.m"
      case (MR_Integer) 1:
#line 181 "item_util.m"
        {
#line 181 "item_util.m"
          MR_Word parse_tree__item_util__ItemTypeDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_3), (MR_Integer) 1);
#line 182 "item_util.m"
          MR_Word parse_tree__item_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
#line 182 "item_util.m"
          MR_Word parse_tree__item_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
#line 182 "item_util.m"
          MR_Word parse_tree__item_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
#line 182 "item_util.m"
          MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
#line 182 "item_util.m"
          MR_Word parse_tree__item_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
#line 182 "item_util.m"
          MR_Integer parse_tree__item_util__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
#line 182 "item_util.m"
          MR_Word parse_tree__item_util__V_6_6;

#line 182 "item_util.m"
          parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_20_20)) == (MR_mktag((MR_Integer) 2)));
#line 182 "item_util.m"
          if (parse_tree__item_util__succeeded)
#line 182 "item_util.m"
            {
#line 182 "item_util.m"
              parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__V_20_20, (MR_Integer) 0)));
#line 183 "item_util.m"
              parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
#line 182 "item_util.m"
            }
#line 182 "item_util.m"
          else
#line 185 "item_util.m"
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 181 "item_util.m"
        }
#line 181 "item_util.m"
        break;
#line 181 "item_util.m"
      case (MR_Integer) 3:
#line 181 "item_util.m"
#line 181 "item_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) {
#line 181 "item_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 181 "item_util.m"
          case (MR_Integer) 0:
#line 181 "item_util.m"
          case (MR_Integer) 1:
#line 181 "item_util.m"
          case (MR_Integer) 2:
#line 181 "item_util.m"
          case (MR_Integer) 3:
#line 181 "item_util.m"
          case (MR_Integer) 4:
#line 181 "item_util.m"
          case (MR_Integer) 5:
#line 181 "item_util.m"
          case (MR_Integer) 6:
#line 181 "item_util.m"
          case (MR_Integer) 7:
#line 181 "item_util.m"
          case (MR_Integer) 8:
#line 181 "item_util.m"
          case (MR_Integer) 9:
#line 201 "item_util.m"
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 181 "item_util.m"
            break;
#line 181 "item_util.m"
          case (MR_Integer) 10:
#line 204 "item_util.m"
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
#line 181 "item_util.m"
            break;
#line 181 "item_util.m"
        }
#line 181 "item_util.m"
        break;
#line 181 "item_util.m"
    }
#line 181 "item_util.m"
    return parse_tree__item_util__NeedsImports_4;
#line 181 "item_util.m"
  }
#line 56 "item_util.m"
}

#line 50 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__make_instance_abstract_1_f_0(
#line 50 "item_util.m"
  MR_Word parse_tree__item_util__ItemInstance0_3)
#line 50 "item_util.m"
{
#line 173 "item_util.m"
  {
#line 173 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 173 "item_util.m"
    MR_Word parse_tree__item_util__ItemInstance_4;
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 0)));
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 1)));
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 2)));
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 3)));
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 5)));
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 6)));
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 7)));
#line 174 "item_util.m"
    MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 8)));
#line 174 "item_util.m"
    MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance0_3, (MR_Integer) 4)));

#line 174 "item_util.m"
    {
#line 174 "item_util.m"
      parse_tree__item_util__ItemInstance_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 0) = ((MR_Box) (parse_tree__item_util__V_6_6));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 1) = ((MR_Box) (parse_tree__item_util__V_7_7));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 2) = ((MR_Box) (parse_tree__item_util__V_8_8));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 3) = ((MR_Box) (parse_tree__item_util__V_9_9));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 5) = ((MR_Box) (parse_tree__item_util__V_11_11));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 6) = ((MR_Box) (parse_tree__item_util__V_12_12));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 7) = ((MR_Box) (parse_tree__item_util__V_13_13));
#line 174 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_4, 8) = ((MR_Box) (parse_tree__item_util__V_14_14));
#line 174 "item_util.m"
    }
#line 173 "item_util.m"
    return parse_tree__item_util__ItemInstance_4;
#line 173 "item_util.m"
  }
#line 50 "item_util.m"
}

#line 42 "item_util.m"
void MR_CALL 
parse_tree__item_util__maybe_make_abstract_instance_3_p_0(
#line 42 "item_util.m"
  MR_Word parse_tree__item_util__ShortIntFileKind_4,
#line 42 "item_util.m"
  MR_Word parse_tree__item_util__ItemInstance_5,
#line 42 "item_util.m"
  MR_Word * parse_tree__item_util__MaybeAbstractItemInstance_6)
#line 42 "item_util.m"
{
#line 166 "item_util.m"
  {
#line 166 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;

#line 166 "item_util.m"
#line 166 "item_util.m"
    switch (parse_tree__item_util__ShortIntFileKind_4) {
#line 166 "item_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 166 "item_util.m"
      case (MR_Integer) 0:
#line 173 "item_util.m"
        {
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 0)));
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 1)));
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 2)));
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 3)));
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 5)));
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 6)));
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 7)));
#line 174 "item_util.m"
          MR_Integer parse_tree__item_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 8)));
#line 174 "item_util.m"
          MR_Word parse_tree__item_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_5, (MR_Integer) 4)));

#line 174 "item_util.m"
          {
#line 174 "item_util.m"
            MR_Word base;
#line 174 "item_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 174 "item_util.m"
            *parse_tree__item_util__MaybeAbstractItemInstance_6 = base;
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_10_10));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_11_11));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__V_12_12));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_13_13));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_15_15));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__item_util__V_16_16));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__item_util__V_17_17));
#line 174 "item_util.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__item_util__V_18_18));
#line 174 "item_util.m"
          }
#line 173 "item_util.m"
        }
#line 166 "item_util.m"
        break;
#line 166 "item_util.m"
      case (MR_Integer) 1:
#line 170 "item_util.m"
        *parse_tree__item_util__MaybeAbstractItemInstance_6 = parse_tree__item_util__ItemInstance_5;
#line 166 "item_util.m"
        break;
#line 166 "item_util.m"
    }
#line 166 "item_util.m"
  }
#line 42 "item_util.m"
}

#line 39 "item_util.m"
void MR_CALL 
parse_tree__item_util__make_abstract_typeclass_2_p_0(
#line 39 "item_util.m"
  MR_Word parse_tree__item_util__ItemTypeClass_3,
#line 39 "item_util.m"
  MR_Word * parse_tree__item_util__AbstractItemTypeClass_4)
#line 39 "item_util.m"
{
#line 159 "item_util.m"
  {
#line 159 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 160 "item_util.m"
    MR_Word parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 0)));
#line 160 "item_util.m"
    MR_Word parse_tree__item_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 1)));
#line 160 "item_util.m"
    MR_Word parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 2)));
#line 160 "item_util.m"
    MR_Word parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 3)));
#line 160 "item_util.m"
    MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 5)));
#line 160 "item_util.m"
    MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 6)));
#line 160 "item_util.m"
    MR_Integer parse_tree__item_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 7)));
#line 160 "item_util.m"
    MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_3, (MR_Integer) 4)));

#line 160 "item_util.m"
    {
#line 160 "item_util.m"
      MR_Word base;
#line 160 "item_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 160 "item_util.m"
      *parse_tree__item_util__AbstractItemTypeClass_4 = base;
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_6_6));
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_7_7));
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__V_8_8));
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_9_9));
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_11_11));
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__item_util__V_12_12));
#line 160 "item_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__item_util__V_13_13));
#line 160 "item_util.m"
    }
#line 159 "item_util.m"
  }
#line 39 "item_util.m"
}

#line 36 "item_util.m"
void MR_CALL 
parse_tree__item_util__maybe_make_abstract_type_defn_3_p_0(
#line 36 "item_util.m"
  MR_Word parse_tree__item_util__ShortIntFileKind_4,
#line 36 "item_util.m"
  MR_Word parse_tree__item_util__ItemTypeDefn_5,
#line 36 "item_util.m"
  MR_Word * parse_tree__item_util__MaybeAbstractItemTypeDefn_6)
#line 36 "item_util.m"
{
#line 77 "item_util.m"
  {
#line 77 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 77 "item_util.m"
    MR_Word parse_tree__item_util__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
#line 77 "item_util.m"
    MR_Word parse_tree__item_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
#line 77 "item_util.m"
    MR_Word parse_tree__item_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
#line 77 "item_util.m"
    MR_Word parse_tree__item_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
#line 77 "item_util.m"
    MR_Word parse_tree__item_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
#line 77 "item_util.m"
    MR_Integer parse_tree__item_util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));

#line 109 "item_util.m"
#line 109 "item_util.m"
    switch (MR_tag((MR_Word) parse_tree__item_util__TypeDefn_7)) {
#line 109 "item_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 109 "item_util.m"
      case (MR_Integer) 0:
#line 81 "item_util.m"
        {
#line 81 "item_util.m"
          MR_Word parse_tree__item_util__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)));
#line 81 "item_util.m"
          MR_Word parse_tree__item_util__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 81 "item_util.m"
          MR_Word parse_tree__item_util__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));

#line 99 "item_util.m"
#line 99 "item_util.m"
          switch (parse_tree__item_util__ShortIntFileKind_4) {
#line 99 "item_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 99 "item_util.m"
            case (MR_Integer) 0:
#line 91 "item_util.m"
              if ((parse_tree__item_util__MaybeUserEqComp_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 90 "item_util.m"
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
#line 91 "item_util.m"
              else
#line 92 "item_util.m"
                {
#line 92 "item_util.m"
                  MR_Word parse_tree__item_util__AbstractTypeDefn_12;

#line 93 "item_util.m"
                  {
#line 93 "item_util.m"
                    parse_tree__item_util__AbstractTypeDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 93 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 0) = ((MR_Box) (parse_tree__item_util__Ctors_8));
#line 93 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
#line 93 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_12, 2) = ((MR_Box) (parse_tree__item_util__MaybeDirectArgCtors_10));
#line 93 "item_util.m"
                  }
#line 96 "item_util.m"
                  {
#line 96 "item_util.m"
                    MR_Word base;
#line 96 "item_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 96 "item_util.m"
                    *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
#line 96 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
#line 96 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
#line 96 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_12));
#line 96 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
#line 96 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
#line 96 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
#line 96 "item_util.m"
                  }
#line 92 "item_util.m"
                }
#line 99 "item_util.m"
              break;
#line 99 "item_util.m"
            case (MR_Integer) 1:
#line 100 "item_util.m"
              {
#line 100 "item_util.m"
                MR_Word parse_tree__item_util__AbstractDetails_14;
#line 100 "item_util.m"
                MR_Word parse_tree__item_util__V_26_26;
#line 103 "item_util.m"
                MR_Integer parse_tree__item_util__NumBits_13;
#line 106 "item_util.m"
                MR_Word parse_tree__item_util__V_54_54;
#line 106 "item_util.m"
                MR_Word parse_tree__item_util__V_55_55;
#line 106 "item_util.m"
                MR_Word parse_tree__item_util__V_57_57;
#line 106 "item_util.m"
                MR_Word parse_tree__item_util__V_58_58;
#line 106 "item_util.m"
                MR_Integer parse_tree__item_util__V_59_59;
#line 106 "item_util.m"
                MR_Word parse_tree__item_util__V_56_56;

#line 101 "item_util.m"
                {
#line 101 "item_util.m"
                  parse_tree__item_util__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__item_util__Ctors_8, &parse_tree__item_util__NumBits_13);
                }
#line 103 "item_util.m"
                if (parse_tree__item_util__succeeded)
#line 102 "item_util.m"
                  {
#line 102 "item_util.m"
                    parse_tree__item_util__AbstractDetails_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 102 "item_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__AbstractDetails_14, 0) = ((MR_Box) (parse_tree__item_util__NumBits_13));
#line 102 "item_util.m"
                  }
#line 103 "item_util.m"
                else
#line 104 "item_util.m"
                  parse_tree__item_util__AbstractDetails_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "item_util.m"
                {
#line 107 "item_util.m"
                  parse_tree__item_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "item_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__item_util__V_26_26, 0) = ((MR_Box) (parse_tree__item_util__AbstractDetails_14));
#line 107 "item_util.m"
                }
#line 106 "item_util.m"
                parse_tree__item_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
#line 106 "item_util.m"
                parse_tree__item_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
#line 106 "item_util.m"
                parse_tree__item_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
#line 106 "item_util.m"
                parse_tree__item_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
#line 106 "item_util.m"
                parse_tree__item_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
#line 106 "item_util.m"
                parse_tree__item_util__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
#line 106 "item_util.m"
                {
#line 106 "item_util.m"
                  MR_Word base;
#line 106 "item_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 106 "item_util.m"
                  *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
#line 106 "item_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_54_54));
#line 106 "item_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_55_55));
#line 106 "item_util.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__V_26_26));
#line 106 "item_util.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_57_57));
#line 106 "item_util.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_58_58));
#line 106 "item_util.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_59_59));
#line 106 "item_util.m"
                }
#line 100 "item_util.m"
              }
#line 99 "item_util.m"
              break;
#line 99 "item_util.m"
          }
#line 81 "item_util.m"
        }
#line 109 "item_util.m"
        break;
#line 109 "item_util.m"
      case (MR_Integer) 1:
#line 134 "item_util.m"
#line 134 "item_util.m"
        switch (parse_tree__item_util__ShortIntFileKind_4) {
#line 134 "item_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 134 "item_util.m"
          case (MR_Integer) 0:
#line 133 "item_util.m"
            *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
#line 134 "item_util.m"
            break;
#line 134 "item_util.m"
          case (MR_Integer) 1:
#line 135 "item_util.m"
            {
#line 138 "item_util.m"
              {
#line 138 "item_util.m"
                MR_Word base;
#line 138 "item_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 138 "item_util.m"
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
#line 138 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
#line 138 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
#line 138 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__item_util_scalar_common_1[2])));
#line 138 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
#line 138 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
#line 138 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
#line 138 "item_util.m"
              }
#line 135 "item_util.m"
            }
#line 134 "item_util.m"
            break;
#line 134 "item_util.m"
        }
#line 109 "item_util.m"
        break;
#line 109 "item_util.m"
      case (MR_Integer) 2:
#line 111 "item_util.m"
        *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
#line 109 "item_util.m"
        break;
#line 109 "item_util.m"
      case (MR_Integer) 3:
#line 109 "item_util.m"
#line 109 "item_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)))) {
#line 109 "item_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 109 "item_util.m"
          case (MR_Integer) 0:
#line 114 "item_util.m"
            {
#line 119 "item_util.m"
              {
#line 119 "item_util.m"
                MR_Word base;
#line 119 "item_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 119 "item_util.m"
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
#line 119 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
#line 119 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
#line 119 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__item_util_scalar_common_1[3])));
#line 119 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
#line 119 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
#line 119 "item_util.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
#line 119 "item_util.m"
              }
#line 114 "item_util.m"
            }
#line 109 "item_util.m"
            break;
#line 109 "item_util.m"
          case (MR_Integer) 1:
#line 143 "item_util.m"
            {
#line 143 "item_util.m"
              MR_Word parse_tree__item_util__ForeignType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 143 "item_util.m"
              MR_Word parse_tree__item_util__Assertions_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 3)));
#line 143 "item_util.m"
              MR_Word parse_tree__item_util__MaybeUserEqComp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));

#line 150 "item_util.m"
              if ((parse_tree__item_util__MaybeUserEqComp_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "item_util.m"
                *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = parse_tree__item_util__ItemTypeDefn_5;
#line 150 "item_util.m"
              else
#line 151 "item_util.m"
                {
#line 151 "item_util.m"
                  MR_Word parse_tree__item_util__AbstractTypeDefn_37;

#line 152 "item_util.m"
                  {
#line 152 "item_util.m"
                    parse_tree__item_util__AbstractTypeDefn_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 152 "item_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 152 "item_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 1) = ((MR_Box) (parse_tree__item_util__ForeignType_18));
#line 152 "item_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1])));
#line 152 "item_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_37, 3) = ((MR_Box) (parse_tree__item_util__Assertions_19));
#line 152 "item_util.m"
                  }
#line 154 "item_util.m"
                  {
#line 154 "item_util.m"
                    MR_Word base;
#line 154 "item_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 154 "item_util.m"
                    *parse_tree__item_util__MaybeAbstractItemTypeDefn_6 = base;
#line 154 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__item_util__V_43_43));
#line 154 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__item_util__V_44_44));
#line 154 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_37));
#line 154 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__item_util__V_45_45));
#line 154 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__item_util__V_46_46));
#line 154 "item_util.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__item_util__V_47_47));
#line 154 "item_util.m"
                  }
#line 151 "item_util.m"
                }
#line 143 "item_util.m"
            }
#line 109 "item_util.m"
            break;
#line 109 "item_util.m"
        }
#line 109 "item_util.m"
        break;
#line 109 "item_util.m"
    }
#line 77 "item_util.m"
  }
#line 36 "item_util.m"
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
