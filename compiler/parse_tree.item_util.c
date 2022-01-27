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
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[2])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 168 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0 = {
  (MR_String) "sifk_int2",
  (MR_Integer) 0
};

#line 174 "parse_tree.item_util.c"
static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1 = {
  (MR_String) "sifk_int3",
  (MR_Integer) 1
};

#line 180 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_short_int_file_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1
};

#line 186 "parse_tree.item_util.c"
static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_short_int_file_kind_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_short_int_file_kind_0_1
};

#line 192 "parse_tree.item_util.c"
static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_short_int_file_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 198 "parse_tree.item_util.c"
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

#line 215 "parse_tree.item_util.c"
static MR_bool MR_CALL 
parse_tree__item_util____Unify____short_int_file_kind_0_0_10001(
#line 218 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_1,
#line 220 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2)
#line 222 "parse_tree.item_util.c"
{
#line 224 "parse_tree.item_util.c"
  {
#line 226 "parse_tree.item_util.c"
    MR_bool parse_tree__item_util__succeeded;

#line 229 "parse_tree.item_util.c"
    {
#line 231 "parse_tree.item_util.c"
      parse_tree__item_util__succeeded = parse_tree__item_util____Unify____short_int_file_kind_0_0(((MR_Word) parse_tree__item_util__wrapper_arg_1), ((MR_Word) parse_tree__item_util__wrapper_arg_2));
    }
#line 234 "parse_tree.item_util.c"
    return parse_tree__item_util__succeeded;
#line 236 "parse_tree.item_util.c"
  }
#line 238 "parse_tree.item_util.c"
}

#line 241 "parse_tree.item_util.c"
static void MR_CALL 
parse_tree__item_util____Compare____short_int_file_kind_0_0_10001(
#line 244 "parse_tree.item_util.c"
  MR_Box * parse_tree__item_util__wrapper_arg_1,
#line 246 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_2,
#line 248 "parse_tree.item_util.c"
  MR_Box parse_tree__item_util__wrapper_arg_3)
#line 250 "parse_tree.item_util.c"
{
#line 252 "parse_tree.item_util.c"
  {
#line 254 "parse_tree.item_util.c"
    MR_Word parse_tree__item_util__conv0_HeadVar__1_1;

#line 257 "parse_tree.item_util.c"
    {
#line 259 "parse_tree.item_util.c"
      parse_tree__item_util____Compare____short_int_file_kind_0_0(&parse_tree__item_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__item_util__wrapper_arg_2), ((MR_Word) parse_tree__item_util__wrapper_arg_3));
    }
#line 262 "parse_tree.item_util.c"
    *parse_tree__item_util__wrapper_arg_1 = ((MR_Box) (parse_tree__item_util__conv0_HeadVar__1_1));
#line 264 "parse_tree.item_util.c"
  }
#line 266 "parse_tree.item_util.c"
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
#line 310 "parse_tree.item_util.c"
  {
#line 312 "parse_tree.item_util.c"
    MR_bool parse_tree__item_util__succeeded = (parse_tree__item_util__HeadVar__2_1 == parse_tree__item_util__HeadVar__2_2);

#line 315 "parse_tree.item_util.c"
    return parse_tree__item_util__succeeded;
#line 317 "parse_tree.item_util.c"
  }
#line 28 "item_util.m"
}

#line 55 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
#line 55 "item_util.m"
  MR_Word parse_tree__item_util__Item_3)
#line 55 "item_util.m"
{
#line 192 "item_util.m"
  {
#line 192 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 192 "item_util.m"
    MR_Word parse_tree__item_util__Langs_4;

#line 192 "item_util.m"
#line 192 "item_util.m"
    switch (MR_tag((MR_Word) parse_tree__item_util__Item_3)) {
#line 192 "item_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "item_util.m"
      case (MR_Integer) 0:
#line 192 "item_util.m"
      case (MR_Integer) 1:
#line 273 "item_util.m"
        parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "item_util.m"
        break;
#line 192 "item_util.m"
      case (MR_Integer) 2:
#line 196 "item_util.m"
        {
#line 196 "item_util.m"
          MR_Word parse_tree__item_util__ItemTypeDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_3), (MR_Integer) 2);
#line 202 "item_util.m"
          MR_Word parse_tree__item_util__ForeignType_7;
#line 198 "item_util.m"
          MR_Word parse_tree__item_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 2)));
#line 198 "item_util.m"
          MR_Word parse_tree__item_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 0)));
#line 198 "item_util.m"
          MR_Word parse_tree__item_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 1)));
#line 198 "item_util.m"
          MR_Word parse_tree__item_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 3)));
#line 198 "item_util.m"
          MR_Word parse_tree__item_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 4)));
#line 198 "item_util.m"
          MR_Integer parse_tree__item_util__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 5)));
#line 199 "item_util.m"
          MR_Word parse_tree__item_util__V_8_8;
#line 199 "item_util.m"
          MR_Word parse_tree__item_util__V_9_9;

#line 199 "item_util.m"
          parse_tree__item_util__succeeded = ((((MR_tag((MR_Word) parse_tree__item_util__V_78_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_78_78, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 199 "item_util.m"
          if (parse_tree__item_util__succeeded)
#line 199 "item_util.m"
            {
#line 199 "item_util.m"
              parse_tree__item_util__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_78_78, (MR_Integer) 1)));
#line 199 "item_util.m"
              parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_78_78, (MR_Integer) 2)));
#line 199 "item_util.m"
              parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__V_78_78, (MR_Integer) 3)));
#line 201 "item_util.m"
              {
#line 201 "item_util.m"
                MR_Word parse_tree__item_util__V_79_79;

#line 201 "item_util.m"
                {
#line 201 "item_util.m"
                  parse_tree__item_util__V_79_79 = parse_tree__prog_foreign__foreign_type_language_1_f_0(parse_tree__item_util__ForeignType_7);
                }
#line 201 "item_util.m"
                {
#line 201 "item_util.m"
                  parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "item_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_79_79));
#line 201 "item_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "item_util.m"
                }
#line 201 "item_util.m"
              }
#line 199 "item_util.m"
            }
#line 199 "item_util.m"
          else
#line 203 "item_util.m"
            parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 196 "item_util.m"
        }
#line 192 "item_util.m"
        break;
#line 192 "item_util.m"
      case (MR_Integer) 3:
#line 192 "item_util.m"
#line 192 "item_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) {
#line 192 "item_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 192 "item_util.m"
          case (MR_Integer) 0:
#line 192 "item_util.m"
          case (MR_Integer) 1:
#line 192 "item_util.m"
          case (MR_Integer) 2:
#line 192 "item_util.m"
          case (MR_Integer) 3:
#line 192 "item_util.m"
          case (MR_Integer) 5:
#line 192 "item_util.m"
          case (MR_Integer) 6:
#line 192 "item_util.m"
          case (MR_Integer) 7:
#line 192 "item_util.m"
          case (MR_Integer) 8:
#line 192 "item_util.m"
          case (MR_Integer) 9:
#line 192 "item_util.m"
          case (MR_Integer) 11:
#line 273 "item_util.m"
            parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "item_util.m"
            break;
#line 192 "item_util.m"
          case (MR_Integer) 4:
#line 206 "item_util.m"
            {
#line 206 "item_util.m"
              MR_Word parse_tree__item_util__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 1)));
#line 206 "item_util.m"
              MR_Word parse_tree__item_util__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 0)));
#line 207 "item_util.m"
              MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 1)));
#line 207 "item_util.m"
              MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 2)));
#line 207 "item_util.m"
              MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemPragma_10, (MR_Integer) 3)));

#line 223 "item_util.m"
#line 223 "item_util.m"
              switch (MR_tag((MR_Word) parse_tree__item_util__Pragma_11)) {
#line 223 "item_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 223 "item_util.m"
                case (MR_Integer) 0:
#line 221 "item_util.m"
                  {
#line 221 "item_util.m"
                    MR_Word parse_tree__item_util__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_11), (MR_Integer) 0);
#line 221 "item_util.m"
                    MR_Word parse_tree__item_util__Lang_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 211 "item_util.m"
                    MR_Word parse_tree__item_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 211 "item_util.m"
                    MR_Word parse_tree__item_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FDInfo_15, (MR_Integer) 1)));

#line 222 "item_util.m"
                    {
#line 222 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_86));
#line 222 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "item_util.m"
                    }
#line 221 "item_util.m"
                  }
#line 223 "item_util.m"
                  break;
#line 223 "item_util.m"
                case (MR_Integer) 1:
#line 221 "item_util.m"
                  {
#line 221 "item_util.m"
                    MR_Word parse_tree__item_util__Lang_16;
#line 221 "item_util.m"
                    MR_Word parse_tree__item_util__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Pragma_11), (MR_Integer) 1);
#line 214 "item_util.m"
                    MR_Word parse_tree__item_util__V_20_20;

#line 214 "item_util.m"
                    parse_tree__item_util__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 0)));
#line 214 "item_util.m"
                    parse_tree__item_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FCInfo_19, (MR_Integer) 1)));
#line 222 "item_util.m"
                    {
#line 222 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_16));
#line 222 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "item_util.m"
                    }
#line 221 "item_util.m"
                  }
#line 223 "item_util.m"
                  break;
#line 223 "item_util.m"
                case (MR_Integer) 2:
#line 224 "item_util.m"
                  {
#line 224 "item_util.m"
                    MR_Word parse_tree__item_util__FPInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__Pragma_11, (MR_Integer) 0)));
#line 224 "item_util.m"
                    MR_Word parse_tree__item_util__Attrs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 0)));
#line 224 "item_util.m"
                    MR_Word parse_tree__item_util__V_75_75;
#line 225 "item_util.m"
                    MR_Word parse_tree__item_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 1)));
#line 225 "item_util.m"
                    MR_Word parse_tree__item_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 2)));
#line 225 "item_util.m"
                    MR_Word parse_tree__item_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 3)));
#line 225 "item_util.m"
                    MR_Word parse_tree__item_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 4)));
#line 225 "item_util.m"
                    MR_Word parse_tree__item_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 5)));
#line 225 "item_util.m"
                    MR_Word parse_tree__item_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPInfo_27, (MR_Integer) 6)));

#line 226 "item_util.m"
                    {
#line 226 "item_util.m"
                      parse_tree__item_util__V_75_75 = parse_tree__prog_data__get_foreign_language_1_f_0(parse_tree__item_util__Attrs_28);
                    }
#line 226 "item_util.m"
                    {
#line 226 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__V_75_75));
#line 226 "item_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "item_util.m"
                    }
#line 224 "item_util.m"
                  }
#line 223 "item_util.m"
                  break;
#line 223 "item_util.m"
                case (MR_Integer) 3:
#line 223 "item_util.m"
#line 223 "item_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 0)))) {
#line 223 "item_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 223 "item_util.m"
                    case (MR_Integer) 0:
#line 223 "item_util.m"
                    case (MR_Integer) 2:
#line 223 "item_util.m"
                    case (MR_Integer) 4:
#line 223 "item_util.m"
                    case (MR_Integer) 5:
#line 223 "item_util.m"
                    case (MR_Integer) 6:
#line 223 "item_util.m"
                    case (MR_Integer) 7:
#line 223 "item_util.m"
                    case (MR_Integer) 8:
#line 223 "item_util.m"
                    case (MR_Integer) 9:
#line 223 "item_util.m"
                    case (MR_Integer) 10:
#line 223 "item_util.m"
                    case (MR_Integer) 11:
#line 223 "item_util.m"
                    case (MR_Integer) 12:
#line 223 "item_util.m"
                    case (MR_Integer) 13:
#line 223 "item_util.m"
                    case (MR_Integer) 14:
#line 223 "item_util.m"
                    case (MR_Integer) 15:
#line 223 "item_util.m"
                    case (MR_Integer) 16:
#line 223 "item_util.m"
                    case (MR_Integer) 17:
#line 223 "item_util.m"
                    case (MR_Integer) 18:
#line 223 "item_util.m"
                    case (MR_Integer) 19:
#line 223 "item_util.m"
                    case (MR_Integer) 20:
#line 223 "item_util.m"
                    case (MR_Integer) 21:
#line 223 "item_util.m"
                    case (MR_Integer) 22:
#line 223 "item_util.m"
                    case (MR_Integer) 23:
#line 223 "item_util.m"
                    case (MR_Integer) 24:
#line 223 "item_util.m"
                    case (MR_Integer) 25:
#line 223 "item_util.m"
                    case (MR_Integer) 26:
#line 223 "item_util.m"
                    case (MR_Integer) 27:
#line 223 "item_util.m"
                    case (MR_Integer) 28:
#line 223 "item_util.m"
                    case (MR_Integer) 29:
#line 257 "item_util.m"
                      parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 223 "item_util.m"
                      break;
#line 223 "item_util.m"
                    case (MR_Integer) 1:
#line 221 "item_util.m"
                      {
#line 221 "item_util.m"
                        MR_Word parse_tree__item_util__FPEInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 1)));
#line 221 "item_util.m"
                        MR_Word parse_tree__item_util__Lang_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 0)));
#line 220 "item_util.m"
                        MR_Word parse_tree__item_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 1)));
#line 220 "item_util.m"
                        MR_String parse_tree__item_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FPEInfo_24, (MR_Integer) 2)));

#line 222 "item_util.m"
                        {
#line 222 "item_util.m"
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_90));
#line 222 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "item_util.m"
                        }
#line 221 "item_util.m"
                      }
#line 223 "item_util.m"
                      break;
#line 223 "item_util.m"
                    case (MR_Integer) 3:
#line 221 "item_util.m"
                      {
#line 221 "item_util.m"
                        MR_Word parse_tree__item_util__FEInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Pragma_11, (MR_Integer) 1)));
#line 221 "item_util.m"
                        MR_Word parse_tree__item_util__Lang_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 0)));
#line 217 "item_util.m"
                        MR_Word parse_tree__item_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 1)));
#line 217 "item_util.m"
                        MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__FEInfo_21, (MR_Integer) 2)));

#line 222 "item_util.m"
                        {
#line 222 "item_util.m"
                          parse_tree__item_util__Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 0) = ((MR_Box) (parse_tree__item_util__Lang_88));
#line 222 "item_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__item_util__Langs_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "item_util.m"
                        }
#line 221 "item_util.m"
                      }
#line 223 "item_util.m"
                      break;
#line 223 "item_util.m"
                  }
#line 223 "item_util.m"
                  break;
#line 223 "item_util.m"
              }
#line 206 "item_util.m"
            }
#line 192 "item_util.m"
            break;
#line 192 "item_util.m"
          case (MR_Integer) 10:
#line 194 "item_util.m"
            {
#line 194 "item_util.m"
              return parse_tree__item_util__Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            }
#line 192 "item_util.m"
            break;
#line 192 "item_util.m"
        }
#line 192 "item_util.m"
        break;
#line 192 "item_util.m"
    }
#line 192 "item_util.m"
    return parse_tree__item_util__Langs_4;
#line 192 "item_util.m"
  }
#line 55 "item_util.m"
}

#line 53 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__item_needs_imports_1_f_0(
#line 53 "item_util.m"
  MR_Word parse_tree__item_util__Item_3)
#line 53 "item_util.m"
{
#line 162 "item_util.m"
  {
#line 162 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 162 "item_util.m"
    MR_Word parse_tree__item_util__NeedsImports_4;

#line 162 "item_util.m"
#line 162 "item_util.m"
    switch (MR_tag((MR_Word) parse_tree__item_util__Item_3)) {
#line 162 "item_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 162 "item_util.m"
      case (MR_Integer) 0:
#line 187 "item_util.m"
        parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
#line 162 "item_util.m"
        break;
#line 162 "item_util.m"
      case (MR_Integer) 1:
#line 182 "item_util.m"
        parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 162 "item_util.m"
        break;
#line 162 "item_util.m"
      case (MR_Integer) 2:
#line 162 "item_util.m"
        {
#line 162 "item_util.m"
          MR_Word parse_tree__item_util__ItemTypeDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_3), (MR_Integer) 2);
#line 163 "item_util.m"
          MR_Word parse_tree__item_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 2)));
#line 163 "item_util.m"
          MR_Word parse_tree__item_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 0)));
#line 163 "item_util.m"
          MR_Word parse_tree__item_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 1)));
#line 163 "item_util.m"
          MR_Word parse_tree__item_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 3)));
#line 163 "item_util.m"
          MR_Word parse_tree__item_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 4)));
#line 163 "item_util.m"
          MR_Integer parse_tree__item_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_5, (MR_Integer) 5)));
#line 163 "item_util.m"
          MR_Word parse_tree__item_util__V_6_6;

#line 163 "item_util.m"
          parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_21_21)) == (MR_mktag((MR_Integer) 2)));
#line 163 "item_util.m"
          if (parse_tree__item_util__succeeded)
#line 163 "item_util.m"
            {
#line 163 "item_util.m"
              parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__V_21_21, (MR_Integer) 0)));
#line 164 "item_util.m"
              parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
#line 163 "item_util.m"
            }
#line 163 "item_util.m"
          else
#line 166 "item_util.m"
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 162 "item_util.m"
        }
#line 162 "item_util.m"
        break;
#line 162 "item_util.m"
      case (MR_Integer) 3:
#line 162 "item_util.m"
#line 162 "item_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_3, (MR_Integer) 0)))) {
#line 162 "item_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 162 "item_util.m"
          case (MR_Integer) 0:
#line 162 "item_util.m"
          case (MR_Integer) 1:
#line 162 "item_util.m"
          case (MR_Integer) 2:
#line 162 "item_util.m"
          case (MR_Integer) 3:
#line 162 "item_util.m"
          case (MR_Integer) 4:
#line 162 "item_util.m"
          case (MR_Integer) 5:
#line 162 "item_util.m"
          case (MR_Integer) 6:
#line 162 "item_util.m"
          case (MR_Integer) 7:
#line 162 "item_util.m"
          case (MR_Integer) 8:
#line 162 "item_util.m"
          case (MR_Integer) 9:
#line 162 "item_util.m"
          case (MR_Integer) 10:
#line 182 "item_util.m"
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 1;
#line 162 "item_util.m"
            break;
#line 162 "item_util.m"
          case (MR_Integer) 11:
#line 187 "item_util.m"
            parse_tree__item_util__NeedsImports_4 = (MR_Integer) 0;
#line 162 "item_util.m"
            break;
#line 162 "item_util.m"
        }
#line 162 "item_util.m"
        break;
#line 162 "item_util.m"
    }
#line 162 "item_util.m"
    return parse_tree__item_util__NeedsImports_4;
#line 162 "item_util.m"
  }
#line 53 "item_util.m"
}

#line 47 "item_util.m"
MR_Word MR_CALL 
parse_tree__item_util__make_instance_abstract_1_f_0(
#line 47 "item_util.m"
  MR_Word parse_tree__item_util__Info0_3)
#line 47 "item_util.m"
{
#line 155 "item_util.m"
  {
#line 155 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;
#line 155 "item_util.m"
    MR_Word parse_tree__item_util__Info_4;
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 0)));
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 1)));
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 2)));
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 3)));
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 5)));
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 6)));
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 7)));
#line 156 "item_util.m"
    MR_Integer parse_tree__item_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 8)));
#line 156 "item_util.m"
    MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__Info0_3, (MR_Integer) 4)));

#line 156 "item_util.m"
    {
#line 156 "item_util.m"
      parse_tree__item_util__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 0) = ((MR_Box) (parse_tree__item_util__V_6_6));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 1) = ((MR_Box) (parse_tree__item_util__V_7_7));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 2) = ((MR_Box) (parse_tree__item_util__V_8_8));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 3) = ((MR_Box) (parse_tree__item_util__V_9_9));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 5) = ((MR_Box) (parse_tree__item_util__V_11_11));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 6) = ((MR_Box) (parse_tree__item_util__V_12_12));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 7) = ((MR_Box) (parse_tree__item_util__V_13_13));
#line 156 "item_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__item_util__Info_4, 8) = ((MR_Box) (parse_tree__item_util__V_14_14));
#line 156 "item_util.m"
    }
#line 155 "item_util.m"
    return parse_tree__item_util__Info_4;
#line 155 "item_util.m"
  }
#line 47 "item_util.m"
}

#line 39 "item_util.m"
MR_bool MR_CALL 
parse_tree__item_util__make_abstract_unify_compare_3_p_0(
#line 39 "item_util.m"
  MR_Word parse_tree__item_util__Item_4,
#line 39 "item_util.m"
  MR_Word parse_tree__item_util__HeadVar__2_2,
#line 39 "item_util.m"
  MR_Word * parse_tree__item_util__AbstractItem_5)
#line 39 "item_util.m"
{
#line 132 "item_util.m"
  {
#line 132 "item_util.m"
    MR_bool parse_tree__item_util__succeeded = (parse_tree__item_util__HeadVar__2_2 == (MR_Integer) 0);
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__ItemTypeDefn_6;
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__TypeDefn_7;
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__AbstractTypeDefn_11;
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__AbstractItemTypeDefn_15;
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__V_32_32;
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__V_33_33;
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__V_34_34;
#line 132 "item_util.m"
    MR_Word parse_tree__item_util__V_35_35;
#line 132 "item_util.m"
    MR_Integer parse_tree__item_util__V_36_36;

#line 132 "item_util.m"
    if (parse_tree__item_util__succeeded)
#line 132 "item_util.m"
      {
#line 133 "item_util.m"
        parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__Item_4)) == (MR_mktag((MR_Integer) 2)));
#line 133 "item_util.m"
        if (parse_tree__item_util__succeeded)
#line 133 "item_util.m"
          {
#line 133 "item_util.m"
            parse_tree__item_util__ItemTypeDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_4), (MR_Integer) 2);
#line 134 "item_util.m"
            parse_tree__item_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 0)));
#line 134 "item_util.m"
            parse_tree__item_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 1)));
#line 134 "item_util.m"
            parse_tree__item_util__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 2)));
#line 134 "item_util.m"
            parse_tree__item_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 3)));
#line 134 "item_util.m"
            parse_tree__item_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 4)));
#line 134 "item_util.m"
            parse_tree__item_util__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_6, (MR_Integer) 5)));
#line 141 "item_util.m"
#line 141 "item_util.m"
            switch (MR_tag((MR_Word) parse_tree__item_util__TypeDefn_7)) {
#line 141 "item_util.m"
              default:
#line 141 "item_util.m"
                parse_tree__item_util__succeeded = MR_FALSE;
#line 141 "item_util.m"
                break;
#line 141 "item_util.m"
              case (MR_Integer) 0:
#line 137 "item_util.m"
                {
#line 137 "item_util.m"
                  MR_Word parse_tree__item_util__Constructors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)));
#line 137 "item_util.m"
                  MR_Word parse_tree__item_util__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));
#line 137 "item_util.m"
                  MR_Word parse_tree__item_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 137 "item_util.m"
                  MR_Word parse_tree__item_util__V_25_25;
#line 137 "item_util.m"
                  MR_Word parse_tree__item_util__V_26_26;
#line 137 "item_util.m"
                  MR_Word parse_tree__item_util__V_27_27;
#line 137 "item_util.m"
                  MR_Word parse_tree__item_util___UserEqComp_9;

#line 137 "item_util.m"
                  parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 137 "item_util.m"
                  if (parse_tree__item_util__succeeded)
#line 137 "item_util.m"
                    {
#line 137 "item_util.m"
                      parse_tree__item_util___UserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__item_util__V_24_24, (MR_Integer) 0)));
#line 139 "item_util.m"
                      parse_tree__item_util__V_27_27 = (MR_Integer) 0;
#line 139 "item_util.m"
                      parse_tree__item_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[0]);
#line 139 "item_util.m"
                      parse_tree__item_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1]);
#line 138 "item_util.m"
                      {
#line 138 "item_util.m"
                        parse_tree__item_util__AbstractTypeDefn_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 138 "item_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_11, 0) = ((MR_Box) (parse_tree__item_util__Constructors_8));
#line 138 "item_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_11, 1) = ((MR_Box) (parse_tree__item_util__V_25_25));
#line 138 "item_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractTypeDefn_11, 2) = ((MR_Box) (parse_tree__item_util__MaybeDirectArgCtors_10));
#line 138 "item_util.m"
                      }
#line 138 "item_util.m"
                      parse_tree__item_util__succeeded = MR_TRUE;
#line 137 "item_util.m"
                    }
#line 137 "item_util.m"
                }
#line 141 "item_util.m"
                break;
#line 141 "item_util.m"
              case (MR_Integer) 3:
#line 141 "item_util.m"
#line 141 "item_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 0)))) {
#line 141 "item_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 141 "item_util.m"
                  case (MR_Integer) 0:
#line 148 "item_util.m"
                    {
#line 148 "item_util.m"
                      MR_Word parse_tree__item_util__SolverTypeDetails_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 148 "item_util.m"
                      MR_Word parse_tree__item_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));
#line 148 "item_util.m"
                      MR_Word parse_tree__item_util__V_17_17;
#line 148 "item_util.m"
                      MR_Word parse_tree__item_util__V_18_18;
#line 148 "item_util.m"
                      MR_Word parse_tree__item_util__V_19_19;
#line 148 "item_util.m"
                      MR_Word parse_tree__item_util___UserEqComp_30;

#line 148 "item_util.m"
                      parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 148 "item_util.m"
                      if (parse_tree__item_util__succeeded)
#line 148 "item_util.m"
                        {
#line 148 "item_util.m"
                          parse_tree__item_util___UserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__item_util__V_16_16, (MR_Integer) 0)));
#line 150 "item_util.m"
                          parse_tree__item_util__V_19_19 = (MR_Integer) 1;
#line 150 "item_util.m"
                          parse_tree__item_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[2]);
#line 150 "item_util.m"
                          parse_tree__item_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[3]);
#line 149 "item_util.m"
                          {
#line 149 "item_util.m"
                            parse_tree__item_util__AbstractTypeDefn_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 149 "item_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 149 "item_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_11, 1) = ((MR_Box) (parse_tree__item_util__SolverTypeDetails_14));
#line 149 "item_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_11, 2) = ((MR_Box) (parse_tree__item_util__V_17_17));
#line 149 "item_util.m"
                          }
#line 149 "item_util.m"
                          parse_tree__item_util__succeeded = MR_TRUE;
#line 148 "item_util.m"
                        }
#line 148 "item_util.m"
                    }
#line 141 "item_util.m"
                    break;
#line 141 "item_util.m"
                  case (MR_Integer) 1:
#line 143 "item_util.m"
                    {
#line 143 "item_util.m"
                      MR_Word parse_tree__item_util__ForeignType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 1)));
#line 143 "item_util.m"
                      MR_Word parse_tree__item_util__Assertions_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 3)));
#line 143 "item_util.m"
                      MR_Word parse_tree__item_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_7, (MR_Integer) 2)));
#line 143 "item_util.m"
                      MR_Word parse_tree__item_util__V_21_21;
#line 143 "item_util.m"
                      MR_Word parse_tree__item_util__V_22_22;
#line 143 "item_util.m"
                      MR_Word parse_tree__item_util__V_23_23;
#line 143 "item_util.m"
                      MR_Word parse_tree__item_util___UserEqComp_28;

#line 143 "item_util.m"
                      parse_tree__item_util__succeeded = ((MR_tag((MR_Word) parse_tree__item_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 143 "item_util.m"
                      if (parse_tree__item_util__succeeded)
#line 143 "item_util.m"
                        {
#line 143 "item_util.m"
                          parse_tree__item_util___UserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__item_util__V_20_20, (MR_Integer) 0)));
#line 145 "item_util.m"
                          parse_tree__item_util__V_23_23 = (MR_Integer) 0;
#line 145 "item_util.m"
                          parse_tree__item_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[0]);
#line 145 "item_util.m"
                          parse_tree__item_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[1]);
#line 144 "item_util.m"
                          {
#line 144 "item_util.m"
                            parse_tree__item_util__AbstractTypeDefn_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 144 "item_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 144 "item_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_11, 1) = ((MR_Box) (parse_tree__item_util__ForeignType_12));
#line 144 "item_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_11, 2) = ((MR_Box) (parse_tree__item_util__V_21_21));
#line 144 "item_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__item_util__AbstractTypeDefn_11, 3) = ((MR_Box) (parse_tree__item_util__Assertions_13));
#line 144 "item_util.m"
                          }
#line 144 "item_util.m"
                          parse_tree__item_util__succeeded = MR_TRUE;
#line 143 "item_util.m"
                        }
#line 143 "item_util.m"
                    }
#line 141 "item_util.m"
                    break;
#line 141 "item_util.m"
                }
#line 141 "item_util.m"
                break;
#line 141 "item_util.m"
            }
#line 132 "item_util.m"
            if (parse_tree__item_util__succeeded)
#line 132 "item_util.m"
              {
#line 152 "item_util.m"
                {
#line 152 "item_util.m"
                  parse_tree__item_util__AbstractItemTypeDefn_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 152 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_15, 0) = ((MR_Box) (parse_tree__item_util__V_32_32));
#line 152 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_15, 1) = ((MR_Box) (parse_tree__item_util__V_33_33));
#line 152 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_15, 2) = ((MR_Box) (parse_tree__item_util__AbstractTypeDefn_11));
#line 152 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_15, 3) = ((MR_Box) (parse_tree__item_util__V_34_34));
#line 152 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_15, 4) = ((MR_Box) (parse_tree__item_util__V_35_35));
#line 152 "item_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_15, 5) = ((MR_Box) (parse_tree__item_util__V_36_36));
#line 152 "item_util.m"
                }
#line 153 "item_util.m"
                *parse_tree__item_util__AbstractItem_5 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__item_util__AbstractItemTypeDefn_15);
#line 153 "item_util.m"
                parse_tree__item_util__succeeded = MR_TRUE;
#line 132 "item_util.m"
              }
#line 133 "item_util.m"
          }
#line 132 "item_util.m"
      }
#line 132 "item_util.m"
    return parse_tree__item_util__succeeded;
#line 132 "item_util.m"
  }
#line 39 "item_util.m"
}

#line 36 "item_util.m"
MR_bool MR_CALL 
parse_tree__item_util__make_abstract_defn_3_p_0(
#line 36 "item_util.m"
  MR_Word parse_tree__item_util__Item_4,
#line 36 "item_util.m"
  MR_Word parse_tree__item_util__ShortIntFileKind_5,
#line 36 "item_util.m"
  MR_Word * parse_tree__item_util__AbstractItem_6)
#line 36 "item_util.m"
{
#line 75 "item_util.m"
  {
#line 75 "item_util.m"
    MR_bool parse_tree__item_util__succeeded;

#line 75 "item_util.m"
#line 75 "item_util.m"
    switch (MR_tag((MR_Word) parse_tree__item_util__Item_4)) {
#line 75 "item_util.m"
      default:
#line 75 "item_util.m"
        parse_tree__item_util__succeeded = MR_FALSE;
#line 75 "item_util.m"
        break;
#line 75 "item_util.m"
      case (MR_Integer) 2:
#line 75 "item_util.m"
        {
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__ItemTypeDefn_7 = (MR_Word) MR_body(((MR_Word) parse_tree__item_util__Item_4), (MR_Integer) 2);
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__TypeDefn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 2)));
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__AbstractDetails_13;
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__AbstractItemTypeDefn_20;
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__V_26_26;
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 0)));
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 1)));
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 3)));
#line 75 "item_util.m"
          MR_Word parse_tree__item_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 4)));
#line 75 "item_util.m"
          MR_Integer parse_tree__item_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeDefn_7, (MR_Integer) 5)));

#line 89 "item_util.m"
#line 89 "item_util.m"
          switch (MR_tag((MR_Word) parse_tree__item_util__TypeDefn_8)) {
#line 89 "item_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 89 "item_util.m"
            case (MR_Integer) 0:
#line 78 "item_util.m"
              {
#line 78 "item_util.m"
                MR_Word parse_tree__item_util__Ctors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_8, (MR_Integer) 0)));
#line 78 "item_util.m"
                MR_Word parse_tree__item_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_8, (MR_Integer) 1)));
#line 78 "item_util.m"
                MR_Word parse_tree__item_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__TypeDefn_8, (MR_Integer) 2)));
#line 81 "item_util.m"
                MR_Integer parse_tree__item_util__NumBits_12;

#line 79 "item_util.m"
                {
#line 79 "item_util.m"
                  parse_tree__item_util__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__item_util__Ctors_9, &parse_tree__item_util__NumBits_12);
                }
#line 81 "item_util.m"
                if (parse_tree__item_util__succeeded)
#line 80 "item_util.m"
                  {
#line 80 "item_util.m"
                    parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 80 "item_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__item_util__AbstractDetails_13, 0) = ((MR_Box) (parse_tree__item_util__NumBits_12));
#line 80 "item_util.m"
                  }
#line 81 "item_util.m"
                else
#line 82 "item_util.m"
                  parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 88 "item_util.m"
                parse_tree__item_util__succeeded = (parse_tree__item_util__ShortIntFileKind_5 == (MR_Integer) 1);
#line 78 "item_util.m"
              }
#line 89 "item_util.m"
              break;
#line 89 "item_util.m"
            case (MR_Integer) 1:
#line 98 "item_util.m"
              {
#line 109 "item_util.m"
                parse_tree__item_util__succeeded = (parse_tree__item_util__ShortIntFileKind_5 == (MR_Integer) 1);
#line 98 "item_util.m"
                if (parse_tree__item_util__succeeded)
#line 98 "item_util.m"
                  {
#line 100 "item_util.m"
                    parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 100 "item_util.m"
                    parse_tree__item_util__succeeded = MR_TRUE;
#line 98 "item_util.m"
                  }
#line 98 "item_util.m"
              }
#line 89 "item_util.m"
              break;
#line 89 "item_util.m"
            case (MR_Integer) 2:
#line 90 "item_util.m"
              {
#line 90 "item_util.m"
                parse_tree__item_util__AbstractDetails_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__item_util__TypeDefn_8, (MR_Integer) 0)));
#line 90 "item_util.m"
                parse_tree__item_util__succeeded = MR_TRUE;
#line 90 "item_util.m"
              }
#line 89 "item_util.m"
              break;
#line 89 "item_util.m"
            case (MR_Integer) 3:
#line 89 "item_util.m"
#line 89 "item_util.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__TypeDefn_8, (MR_Integer) 0)))) {
#line 89 "item_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 89 "item_util.m"
                case (MR_Integer) 0:
#line 96 "item_util.m"
                  {
#line 96 "item_util.m"
                    parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 96 "item_util.m"
                    parse_tree__item_util__succeeded = MR_TRUE;
#line 96 "item_util.m"
                  }
#line 89 "item_util.m"
                  break;
#line 89 "item_util.m"
                case (MR_Integer) 1:
#line 111 "item_util.m"
                  {
#line 114 "item_util.m"
                    parse_tree__item_util__AbstractDetails_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 115 "item_util.m"
                    {
#line 115 "item_util.m"
                      parse_tree__item_util__succeeded = mercury__builtin__semidet_fail_0_p_0();
                    }
#line 111 "item_util.m"
                  }
#line 89 "item_util.m"
                  break;
#line 89 "item_util.m"
              }
#line 89 "item_util.m"
              break;
#line 89 "item_util.m"
          }
#line 75 "item_util.m"
          if (parse_tree__item_util__succeeded)
#line 75 "item_util.m"
            {
#line 118 "item_util.m"
              {
#line 118 "item_util.m"
                parse_tree__item_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 118 "item_util.m"
                MR_hl_field(MR_mktag(2), parse_tree__item_util__V_26_26, 0) = ((MR_Box) (parse_tree__item_util__AbstractDetails_13));
#line 118 "item_util.m"
              }
#line 117 "item_util.m"
              {
#line 117 "item_util.m"
                parse_tree__item_util__AbstractItemTypeDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 117 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 0) = ((MR_Box) (parse_tree__item_util__V_27_27));
#line 117 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 1) = ((MR_Box) (parse_tree__item_util__V_28_28));
#line 117 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 2) = ((MR_Box) (parse_tree__item_util__V_26_26));
#line 117 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 3) = ((MR_Box) (parse_tree__item_util__V_29_29));
#line 117 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 4) = ((MR_Box) (parse_tree__item_util__V_30_30));
#line 117 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeDefn_20, 5) = ((MR_Box) (parse_tree__item_util__V_31_31));
#line 117 "item_util.m"
              }
#line 119 "item_util.m"
              *parse_tree__item_util__AbstractItem_6 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__item_util__AbstractItemTypeDefn_20);
#line 119 "item_util.m"
              parse_tree__item_util__succeeded = MR_TRUE;
#line 75 "item_util.m"
            }
#line 75 "item_util.m"
        }
#line 75 "item_util.m"
        break;
#line 75 "item_util.m"
      case (MR_Integer) 3:
#line 75 "item_util.m"
#line 75 "item_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 0)))) {
#line 75 "item_util.m"
          default:
#line 75 "item_util.m"
            parse_tree__item_util__succeeded = MR_FALSE;
#line 75 "item_util.m"
            break;
#line 75 "item_util.m"
          case (MR_Integer) 6:
#line 126 "item_util.m"
            {
#line 126 "item_util.m"
              MR_Word parse_tree__item_util__ItemTypeClass_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 1)));
#line 126 "item_util.m"
              MR_Word parse_tree__item_util__AbstractItemTypeClass_24;
#line 127 "item_util.m"
              MR_Word parse_tree__item_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 0)));
#line 127 "item_util.m"
              MR_Word parse_tree__item_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 1)));
#line 127 "item_util.m"
              MR_Word parse_tree__item_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 2)));
#line 127 "item_util.m"
              MR_Word parse_tree__item_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 3)));
#line 127 "item_util.m"
              MR_Word parse_tree__item_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 5)));
#line 127 "item_util.m"
              MR_Word parse_tree__item_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 6)));
#line 127 "item_util.m"
              MR_Integer parse_tree__item_util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 7)));
#line 127 "item_util.m"
              MR_Word parse_tree__item_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemTypeClass_23, (MR_Integer) 4)));

#line 127 "item_util.m"
              {
#line 127 "item_util.m"
                parse_tree__item_util__AbstractItemTypeClass_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 0) = ((MR_Box) (parse_tree__item_util__V_38_38));
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 1) = ((MR_Box) (parse_tree__item_util__V_39_39));
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 2) = ((MR_Box) (parse_tree__item_util__V_40_40));
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 3) = ((MR_Box) (parse_tree__item_util__V_41_41));
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 5) = ((MR_Box) (parse_tree__item_util__V_43_43));
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 6) = ((MR_Box) (parse_tree__item_util__V_44_44));
#line 127 "item_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemTypeClass_24, 7) = ((MR_Box) (parse_tree__item_util__V_45_45));
#line 127 "item_util.m"
              }
#line 129 "item_util.m"
              {
#line 129 "item_util.m"
                MR_Word base;
#line 129 "item_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "item_util.m"
                *parse_tree__item_util__AbstractItem_6 = base;
#line 129 "item_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 129 "item_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__item_util__AbstractItemTypeClass_24));
#line 129 "item_util.m"
              }
#line 126 "item_util.m"
              parse_tree__item_util__succeeded = MR_TRUE;
#line 126 "item_util.m"
            }
#line 75 "item_util.m"
            break;
#line 75 "item_util.m"
          case (MR_Integer) 7:
#line 121 "item_util.m"
            {
#line 121 "item_util.m"
              MR_Word parse_tree__item_util__ItemInstance_21;
#line 121 "item_util.m"
              MR_Word parse_tree__item_util__AbstractItemInstance_22;
#line 121 "item_util.m"
              MR_Word parse_tree__item_util__V_48_48;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_49_49;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_50_50;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_51_51;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_52_52;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_54_54;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_55_55;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_56_56;
#line 156 "item_util.m"
              MR_Integer parse_tree__item_util__V_57_57;
#line 156 "item_util.m"
              MR_Word parse_tree__item_util__V_53_53;

#line 122 "item_util.m"
              parse_tree__item_util__succeeded = (parse_tree__item_util__ShortIntFileKind_5 == (MR_Integer) 0);
#line 121 "item_util.m"
              if (parse_tree__item_util__succeeded)
#line 121 "item_util.m"
                {
#line 121 "item_util.m"
                  parse_tree__item_util__ItemInstance_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__item_util__Item_4, (MR_Integer) 1)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "item_util.m"
                  parse_tree__item_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 0)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 1)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 2)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 3)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 4)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 5)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 6)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 7)));
#line 156 "item_util.m"
                  parse_tree__item_util__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__item_util__ItemInstance_21, (MR_Integer) 8)));
#line 156 "item_util.m"
                  {
#line 156 "item_util.m"
                    parse_tree__item_util__AbstractItemInstance_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 0) = ((MR_Box) (parse_tree__item_util__V_49_49));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 1) = ((MR_Box) (parse_tree__item_util__V_50_50));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 2) = ((MR_Box) (parse_tree__item_util__V_51_51));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 3) = ((MR_Box) (parse_tree__item_util__V_52_52));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 4) = ((MR_Box) (parse_tree__item_util__V_48_48));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 5) = ((MR_Box) (parse_tree__item_util__V_54_54));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 6) = ((MR_Box) (parse_tree__item_util__V_55_55));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 7) = ((MR_Box) (parse_tree__item_util__V_56_56));
#line 156 "item_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__item_util__AbstractItemInstance_22, 8) = ((MR_Box) (parse_tree__item_util__V_57_57));
#line 156 "item_util.m"
                  }
#line 124 "item_util.m"
                  {
#line 124 "item_util.m"
                    MR_Word base;
#line 124 "item_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "item_util.m"
                    *parse_tree__item_util__AbstractItem_6 = base;
#line 124 "item_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 124 "item_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__item_util__AbstractItemInstance_22));
#line 124 "item_util.m"
                  }
#line 124 "item_util.m"
                  parse_tree__item_util__succeeded = MR_TRUE;
#line 121 "item_util.m"
                }
#line 121 "item_util.m"
            }
#line 75 "item_util.m"
            break;
#line 75 "item_util.m"
        }
#line 75 "item_util.m"
        break;
#line 75 "item_util.m"
    }
#line 75 "item_util.m"
    return parse_tree__item_util__succeeded;
#line 75 "item_util.m"
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
