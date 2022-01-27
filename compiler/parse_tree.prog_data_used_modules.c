/*
** Automatically generated from `prog_data_used_modules.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module parse_tree.prog_data_used_modules. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_data_used_modules__init
ENDINIT
*/

#include "parse_tree.prog_data_used_modules.mih"


#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_value_ordered_item_visibility_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_name_ordered_item_visibility_0[2];

static const MR_Integer parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_item_visibility_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_used_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_types_used_modules_0_0[2];

static const MR_ConstString parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_names_used_modules_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_stag_ordered_used_modules_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_ptag_ordered_used_modules_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_name_ordered_used_modules_0[1];

static const MR_Integer parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_used_modules_0[1];

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____item_visibility_0_0_10001(
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____item_visibility_0_0_10001(
  MR_Box * parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____used_modules_0_0_10001(
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____used_modules_0_0_10001(
  MR_Box * parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_data_used_modules_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__prog_data_used_modules_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_0 = {
  (MR_String) "visibility_public",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_functor_desc_item_visibility_0_1 = {
  (MR_String) "visibility_private",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_value_ordered_item_visibility_0[2] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_used_modules____Unify____item_visibility_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_used_modules____Compare____item_visibility_0_0_10001)),
  (MR_String) "parse_tree.prog_data_used_modules",
  (MR_String) "item_visibility",
  {     parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_name_ordered_item_visibility_0 },
  {     parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__enum_value_ordered_item_visibility_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_item_visibility_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_used_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_types_used_modules_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data_used_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_used_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_ConstString parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_names_used_modules_0_0[2] = {
  (MR_String) "int_used_modules",
  (MR_String) "imp_used_modules"
};

static const MR_DuFunctorDesc parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0 = {
  (MR_String) "used_modules",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_types_used_modules_0_0,
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__field_names_used_modules_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_stag_ordered_used_modules_0_0[1] = {
  &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_ptag_ordered_used_modules_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_stag_ordered_used_modules_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_name_ordered_used_modules_0[1] = {
  &parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_functor_desc_used_modules_0_0
};

static const MR_Integer parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_used_modules_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_used_modules____Unify____used_modules_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_used_modules____Compare____used_modules_0_0_10001)),
  (MR_String) "parse_tree.prog_data_used_modules",
  (MR_String) "used_modules",
  {     parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_name_ordered_used_modules_0 },
  {     parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__du_ptag_ordered_used_modules_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__functor_number_map_used_modules_0
};

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____item_visibility_0_0_10001(
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;

    {
      parse_tree__prog_data_used_modules__succeeded = parse_tree__prog_data_used_modules____Unify____item_visibility_0_0(((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_2));
    }
    return parse_tree__prog_data_used_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____item_visibility_0_0_10001(
  MR_Box * parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_used_modules__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_used_modules____Compare____item_visibility_0_0(&parse_tree__prog_data_used_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_3));
    }
    *parse_tree__prog_data_used_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_used_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____used_modules_0_0_10001(
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;

    {
      parse_tree__prog_data_used_modules__succeeded = parse_tree__prog_data_used_modules____Unify____used_modules_0_0(((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_2));
    }
    return parse_tree__prog_data_used_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_used_modules____Compare____used_modules_0_0_10001(
  MR_Box * parse_tree__prog_data_used_modules__wrapper_arg_1,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_2,
  MR_Box parse_tree__prog_data_used_modules__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_used_modules__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_used_modules____Compare____used_modules_0_0(&parse_tree__prog_data_used_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_used_modules__wrapper_arg_3));
    }
    *parse_tree__prog_data_used_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_used_modules__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__prog_data_used_modules____Compare____used_modules_0_0(
  MR_Word * parse_tree__prog_data_used_modules__HeadVar__1_1,
  MR_Word parse_tree__prog_data_used_modules__HeadVar__2_2,
  MR_Word parse_tree__prog_data_used_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;
    MR_Integer parse_tree__prog_data_used_modules__CastX_9 = (MR_Integer) parse_tree__prog_data_used_modules__HeadVar__2_2;
    MR_Integer parse_tree__prog_data_used_modules__CastY_10 = (MR_Integer) parse_tree__prog_data_used_modules__HeadVar__3_3;

    parse_tree__prog_data_used_modules__succeeded = (parse_tree__prog_data_used_modules__CastX_9 == parse_tree__prog_data_used_modules__CastY_10);
    if (parse_tree__prog_data_used_modules__succeeded)
      *parse_tree__prog_data_used_modules__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_data_used_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_used_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_used_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_used_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_used_modules__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_used_modules_scalar_common_1[0], &parse_tree__prog_data_used_modules__V_8_8, ((MR_Box) (parse_tree__prog_data_used_modules__V_4_4)), ((MR_Box) (parse_tree__prog_data_used_modules__V_6_6)));
        }
        parse_tree__prog_data_used_modules__succeeded = (parse_tree__prog_data_used_modules__V_8_8 == (MR_Integer) 0);
        parse_tree__prog_data_used_modules__succeeded = !(parse_tree__prog_data_used_modules__succeeded);
        if (parse_tree__prog_data_used_modules__succeeded)
          *parse_tree__prog_data_used_modules__HeadVar__1_1 = parse_tree__prog_data_used_modules__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_used_modules_scalar_common_1[0], parse_tree__prog_data_used_modules__HeadVar__1_1, ((MR_Box) (parse_tree__prog_data_used_modules__V_5_5)), ((MR_Box) (parse_tree__prog_data_used_modules__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____used_modules_0_0(
  MR_Word parse_tree__prog_data_used_modules__HeadVar__1_1,
  MR_Word parse_tree__prog_data_used_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;
    MR_Integer parse_tree__prog_data_used_modules__CastX_7 = (MR_Integer) parse_tree__prog_data_used_modules__HeadVar__1_1;
    MR_Integer parse_tree__prog_data_used_modules__CastY_8 = (MR_Integer) parse_tree__prog_data_used_modules__HeadVar__2_2;

    parse_tree__prog_data_used_modules__succeeded = (parse_tree__prog_data_used_modules__CastX_7 == parse_tree__prog_data_used_modules__CastY_8);
    if (parse_tree__prog_data_used_modules__succeeded)
      parse_tree__prog_data_used_modules__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_data_used_modules__TypeInfo_10_10;
        MR_Word parse_tree__prog_data_used_modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_used_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_used_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_used_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__prog_data_used_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_used_modules_scalar_common_1[0], ((MR_Box) (parse_tree__prog_data_used_modules__V_3_3)), ((MR_Box) (parse_tree__prog_data_used_modules__V_5_5)));
        }
        if (parse_tree__prog_data_used_modules__succeeded)
          {
            parse_tree__prog_data_used_modules__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_data_used_modules_scalar_common_1[0];
            {
              parse_tree__prog_data_used_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_used_modules__TypeInfo_10_10, ((MR_Box) (parse_tree__prog_data_used_modules__V_4_4)), ((MR_Box) (parse_tree__prog_data_used_modules__V_6_6)));
            }
          }
      }
    return parse_tree__prog_data_used_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_used_modules____Compare____item_visibility_0_0(
  MR_Word * parse_tree__prog_data_used_modules__HeadVar__1_1,
  MR_Word parse_tree__prog_data_used_modules__HeadVar__2_2,
  MR_Word parse_tree__prog_data_used_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;
    MR_Integer parse_tree__prog_data_used_modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_data_used_modules__HeadVar__2_2;
    MR_Integer parse_tree__prog_data_used_modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_data_used_modules__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_data_used_modules__HeadVar__1_1, parse_tree__prog_data_used_modules__Cast_HeadVar1_4, parse_tree__prog_data_used_modules__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_used_modules____Unify____item_visibility_0_0(
  MR_Word parse_tree__prog_data_used_modules__HeadVar__2_1,
  MR_Word parse_tree__prog_data_used_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded = (parse_tree__prog_data_used_modules__HeadVar__2_1 == parse_tree__prog_data_used_modules__HeadVar__2_2);

    return parse_tree__prog_data_used_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_used_modules__record_format_modules_as_used_2_p_0(
  MR_Word parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_7,
  MR_Word * parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_8)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;
    MR_Word parse_tree__prog_data_used_modules__ImplUsedModules0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_7, (MR_Integer) 1)));
    MR_Word parse_tree__prog_data_used_modules__FormatModules_5;
    MR_Word parse_tree__prog_data_used_modules__ImplUsedModules_6;
    MR_Word parse_tree__prog_data_used_modules__V_9_9;
    MR_Word parse_tree__prog_data_used_modules__V_10_10;
    MR_Word parse_tree__prog_data_used_modules__V_11_11;
    MR_Word parse_tree__prog_data_used_modules__V_12_12;
    MR_Word parse_tree__prog_data_used_modules__V_13_13;
    MR_Word parse_tree__prog_data_used_modules__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_7, (MR_Integer) 0)));
    MR_Word parse_tree__prog_data_used_modules__V_17_17;
    MR_Word parse_tree__prog_data_used_modules__V_18_18;

    {
      parse_tree__prog_data_used_modules__V_9_9 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
    }
    {
      parse_tree__prog_data_used_modules__V_11_11 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    }
    {
      parse_tree__prog_data_used_modules__V_13_13 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
    }
    {
      parse_tree__prog_data_used_modules__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__V_12_12, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__V_13_13));
      MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_data_used_modules__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__V_10_10, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__V_11_11));
      MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__V_10_10, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__V_12_12));
    }
    {
      parse_tree__prog_data_used_modules__FormatModules_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__FormatModules_5, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__V_9_9));
      MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__FormatModules_5, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__V_10_10));
    }
    {
      mercury__set__insert_list_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_data_used_modules__FormatModules_5, parse_tree__prog_data_used_modules__ImplUsedModules0_4, &parse_tree__prog_data_used_modules__ImplUsedModules_6);
    }
    parse_tree__prog_data_used_modules__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_7, (MR_Integer) 0)));
    parse_tree__prog_data_used_modules__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_7, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__V_17_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__ImplUsedModules_6));
    }
  }
}

void MR_CALL 
parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(
  MR_Word parse_tree__prog_data_used_modules__Visibility_5,
  MR_Word parse_tree__prog_data_used_modules__ModuleName_6,
  MR_Word parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11,
  MR_Word * parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_data_used_modules__succeeded;

        if (((MR_tag((MR_Word) parse_tree__prog_data_used_modules__ModuleName_6)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__prog_data_used_modules__ParentModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__ModuleName_6, (MR_Integer) 0)));
            MR_Word parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13;
            MR_Word parse_tree__prog_data_used_modules__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 1)));
            MR_Word parse_tree__prog_data_used_modules__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 0)));
            MR_String parse_tree__prog_data_used_modules__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__ModuleName_6, (MR_Integer) 1)));

            switch (parse_tree__prog_data_used_modules__Visibility_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_data_used_modules__ImplUsedModules_24;
                  MR_Word parse_tree__prog_data_used_modules__V_31_31;
                  MR_Word parse_tree__prog_data_used_modules__V_32_32;

                  {
                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__prog_data_used_modules__ModuleName_6)), parse_tree__prog_data_used_modules__V_35_35, &parse_tree__prog_data_used_modules__ImplUsedModules_24);
                  }
                  parse_tree__prog_data_used_modules__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 0)));
                  parse_tree__prog_data_used_modules__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 1)));
                  {
                    parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__V_31_31));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__ImplUsedModules_24));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_data_used_modules__IntUsedModules_22;
                  MR_Word parse_tree__prog_data_used_modules__V_29_29;
                  MR_Word parse_tree__prog_data_used_modules__V_28_28;

                  {
                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__prog_data_used_modules__ModuleName_6)), parse_tree__prog_data_used_modules__V_36_36, &parse_tree__prog_data_used_modules__IntUsedModules_22);
                  }
                  parse_tree__prog_data_used_modules__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 0)));
                  parse_tree__prog_data_used_modules__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 1)));
                  {
                    parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__IntUsedModules_22));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__V_29_29));
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_data_used_modules__ModuleName__tmp_copy_6 = parse_tree__prog_data_used_modules__ParentModuleName_9;
              MR_Word parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0__tmp_copy_11 = parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_13_13;

              parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11 = parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0__tmp_copy_11;
              parse_tree__prog_data_used_modules__ModuleName_6 = parse_tree__prog_data_used_modules__ModuleName__tmp_copy_6;
            }
            continue;
          }
        else
          {
            MR_Word parse_tree__prog_data_used_modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 1)));
            MR_Word parse_tree__prog_data_used_modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 0)));

            switch (parse_tree__prog_data_used_modules__Visibility_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_data_used_modules__ImplUsedModules_45;
                  MR_Word parse_tree__prog_data_used_modules__V_52_52;
                  MR_Word parse_tree__prog_data_used_modules__V_53_53;

                  {
                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__prog_data_used_modules__ModuleName_6)), parse_tree__prog_data_used_modules__V_56_56, &parse_tree__prog_data_used_modules__ImplUsedModules_45);
                  }
                  parse_tree__prog_data_used_modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 0)));
                  parse_tree__prog_data_used_modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 1)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__V_52_52));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__ImplUsedModules_45));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_data_used_modules__IntUsedModules_43;
                  MR_Word parse_tree__prog_data_used_modules__V_50_50;
                  MR_Word parse_tree__prog_data_used_modules__V_49_49;

                  {
                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__prog_data_used_modules__ModuleName_6)), parse_tree__prog_data_used_modules__V_57_57, &parse_tree__prog_data_used_modules__IntUsedModules_43);
                  }
                  parse_tree__prog_data_used_modules__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 0)));
                  parse_tree__prog_data_used_modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, (MR_Integer) 1)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__IntUsedModules_43));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__V_50_50));
                  }
                }
                break;
            }
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(
  MR_Word parse_tree__prog_data_used_modules__Visibility_5,
  MR_Word parse_tree__prog_data_used_modules__SymName_6,
  MR_Word parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11,
  MR_Word * parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_12)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_data_used_modules__SymName_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_data_used_modules__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__SymName_6, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_used_modules__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_data_used_modules__SymName_6, (MR_Integer) 1)));

        {
          parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0(parse_tree__prog_data_used_modules__Visibility_5, parse_tree__prog_data_used_modules__ModuleName_9, parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11, parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_12);
        }
      }
    else
      *parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_12 = parse_tree__prog_data_used_modules__STATE_VARIABLE_UsedModules_0_11;
  }
}

MR_Word MR_CALL 
parse_tree__prog_data_used_modules__used_modules_init_0_f_0(void)
{
  {
    MR_bool parse_tree__prog_data_used_modules__succeeded;
    MR_Word parse_tree__prog_data_used_modules__HeadVar__1_1;
    MR_Word parse_tree__prog_data_used_modules__TypeCtorInfo_4_4 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__prog_data_used_modules__V_2_2;
    MR_Word parse_tree__prog_data_used_modules__V_3_3;

    {
      parse_tree__prog_data_used_modules__V_2_2 = mercury__set__init_0_f_0(parse_tree__prog_data_used_modules__TypeCtorInfo_4_4);
    }
    {
      parse_tree__prog_data_used_modules__V_3_3 = mercury__set__init_0_f_0(parse_tree__prog_data_used_modules__TypeCtorInfo_4_4);
    }
    {
      parse_tree__prog_data_used_modules__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_data_used_modules__V_2_2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_data_used_modules__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__prog_data_used_modules__V_3_3));
    }
    return parse_tree__prog_data_used_modules__HeadVar__1_1;
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_data_used_modules. */
