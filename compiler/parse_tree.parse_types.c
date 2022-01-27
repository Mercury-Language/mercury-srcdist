/*
** Automatically generated from `parse_types.m'
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


/* :- module parse_tree.parse_types. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_types__init
ENDINIT
*/

#include "parse_tree.parse_types.mih"


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
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_3[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_4[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_5[3];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_6[3];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_7[3];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7;

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_3[5];

static const MR_DuPtagLayout parse_tree__parse_types__parse_tree__parse_types__du_ptag_ordered_item_or_marker_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_name_ordered_item_or_marker_0[8];

static const MR_Integer parse_tree__parse_types__parse_tree__parse_types__functor_number_map_item_or_marker_0[8];

static MR_bool MR_CALL 
parse_tree__parse_types____Unify____item_or_marker_0_0_10001(
  MR_Box parse_tree__parse_types__wrapper_arg_1,
  MR_Box parse_tree__parse_types__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0_10001(
  MR_Box * parse_tree__parse_types__wrapper_arg_1,
  MR_Box parse_tree__parse_types__wrapper_arg_2,
  MR_Box parse_tree__parse_types__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_types_scalar_common_1[2][2];




static /* final */ const MR_Box parse_tree__parse_types_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_0 = {
  (MR_String) "iom_item",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1 = {
  (MR_String) "iom_marker_include",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2 = {
  (MR_String) "iom_marker_avail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_3[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3 = {
  (MR_String) "iom_marker_version_numbers",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4 = {
  (MR_String) "iom_marker_src_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_5[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5 = {
  (MR_String) "iom_marker_module_start",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_6[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6 = {
  (MR_String) "iom_marker_module_end",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_7[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7 = {
  (MR_String) "iom_marker_section",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_7,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_0[1] = {
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_1[1] = {
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_2[1] = {
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2
};

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_3[5] = {
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7
};

static const MR_DuPtagLayout parse_tree__parse_types__parse_tree__parse_types__du_ptag_ordered_item_or_marker_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_2
  },
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_name_ordered_item_or_marker_0[8] = {
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_0,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3
};

static const MR_Integer parse_tree__parse_types__parse_tree__parse_types__functor_number_map_item_or_marker_0[8] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct parse_tree__parse_types__parse_tree__parse_types__type_ctor_info_item_or_marker_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_types____Unify____item_or_marker_0_0_10001)),
  ((MR_Box) (parse_tree__parse_types____Compare____item_or_marker_0_0_10001)),
  (MR_String) "parse_tree.parse_types",
  (MR_String) "item_or_marker",
  {     parse_tree__parse_types__parse_tree__parse_types__du_name_ordered_item_or_marker_0 },
  {     parse_tree__parse_types__parse_tree__parse_types__du_ptag_ordered_item_or_marker_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  parse_tree__parse_types__parse_tree__parse_types__functor_number_map_item_or_marker_0
};

static MR_bool MR_CALL 
parse_tree__parse_types____Unify____item_or_marker_0_0_10001(
  MR_Box parse_tree__parse_types__wrapper_arg_1,
  MR_Box parse_tree__parse_types__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_types__succeeded;

    {
      parse_tree__parse_types__succeeded = parse_tree__parse_types____Unify____item_or_marker_0_0(((MR_Word) parse_tree__parse_types__wrapper_arg_1), ((MR_Word) parse_tree__parse_types__wrapper_arg_2));
    }
    return parse_tree__parse_types__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0_10001(
  MR_Box * parse_tree__parse_types__wrapper_arg_1,
  MR_Box parse_tree__parse_types__wrapper_arg_2,
  MR_Box parse_tree__parse_types__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_types__conv0_HeadVar__1_1;

    {
      parse_tree__parse_types____Compare____item_or_marker_0_0(&parse_tree__parse_types__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_types__wrapper_arg_2), ((MR_Word) parse_tree__parse_types__wrapper_arg_3));
    }
    *parse_tree__parse_types__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_types__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0(
  MR_Word * parse_tree__parse_types__HeadVar__1_1,
  MR_Word parse_tree__parse_types__HeadVar__2_2,
  MR_Word parse_tree__parse_types__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_types__succeeded;
    MR_Integer parse_tree__parse_types__CastX_234 = (MR_Integer) parse_tree__parse_types__HeadVar__2_2;
    MR_Integer parse_tree__parse_types__CastY_235 = (MR_Integer) parse_tree__parse_types__HeadVar__3_3;

    parse_tree__parse_types__succeeded = (parse_tree__parse_types__CastX_234 == parse_tree__parse_types__CastY_235);
    if (parse_tree__parse_types__succeeded)
      *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_types__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__parse_types__HeadVar__1_1, parse_tree__parse_types__V_250_250, parse_tree__parse_types__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_types__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_types__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_types_scalar_common_1[1], parse_tree__parse_types__HeadVar__1_1, ((MR_Box) (parse_tree__parse_types__V_252_252)), ((MR_Box) (parse_tree__parse_types__V_29_29)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_types__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_types__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_types_scalar_common_1[0], parse_tree__parse_types__HeadVar__1_1, ((MR_Box) (parse_tree__parse_types__V_251_251)), ((MR_Box) (parse_tree__parse_types__V_53_53)));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__parse_types__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__parse_types__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            recompilation____Compare____version_numbers_0_0(parse_tree__parse_types__HeadVar__1_1, parse_tree__parse_types__V_263_263, parse_tree__parse_types__V_77_77);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String parse_tree__parse_types__V_262_262 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String parse_tree__parse_types__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__parse_types__HeadVar__1_1, parse_tree__parse_types__V_262_262, parse_tree__parse_types__V_101_101);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer parse_tree__parse_types__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word parse_tree__parse_types__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word parse_tree__parse_types__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word parse_tree__parse_types__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__parse_types__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer parse_tree__parse_types__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word parse_tree__parse_types__V_140_140;

                          {
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__parse_types__V_140_140, parse_tree__parse_types__V_258_258, parse_tree__parse_types__V_137_137);
                          }
                          parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_140_140 == (MR_Integer) 0);
                          parse_tree__parse_types__succeeded = !(parse_tree__parse_types__succeeded);
                          if (parse_tree__parse_types__succeeded)
                            *parse_tree__parse_types__HeadVar__1_1 = parse_tree__parse_types__V_140_140;
                          else
                            {
                              MR_Word parse_tree__parse_types__V_141_141;

                              {
                                mercury__term____Compare____context_0_0(&parse_tree__parse_types__V_141_141, parse_tree__parse_types__V_257_257, parse_tree__parse_types__V_138_138);
                              }
                              parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_141_141 == (MR_Integer) 0);
                              parse_tree__parse_types__succeeded = !(parse_tree__parse_types__succeeded);
                              if (parse_tree__parse_types__succeeded)
                                *parse_tree__parse_types__HeadVar__1_1 = parse_tree__parse_types__V_141_141;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_types__HeadVar__1_1, parse_tree__parse_types__V_256_256, parse_tree__parse_types__V_139_139);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer parse_tree__parse_types__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word parse_tree__parse_types__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word parse_tree__parse_types__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word parse_tree__parse_types__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__parse_types__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer parse_tree__parse_types__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word parse_tree__parse_types__V_186_186;

                          {
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__parse_types__V_186_186, parse_tree__parse_types__V_255_255, parse_tree__parse_types__V_183_183);
                          }
                          parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_186_186 == (MR_Integer) 0);
                          parse_tree__parse_types__succeeded = !(parse_tree__parse_types__succeeded);
                          if (parse_tree__parse_types__succeeded)
                            *parse_tree__parse_types__HeadVar__1_1 = parse_tree__parse_types__V_186_186;
                          else
                            {
                              MR_Word parse_tree__parse_types__V_187_187;

                              {
                                mercury__term____Compare____context_0_0(&parse_tree__parse_types__V_187_187, parse_tree__parse_types__V_254_254, parse_tree__parse_types__V_184_184);
                              }
                              parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_187_187 == (MR_Integer) 0);
                              parse_tree__parse_types__succeeded = !(parse_tree__parse_types__succeeded);
                              if (parse_tree__parse_types__succeeded)
                                *parse_tree__parse_types__HeadVar__1_1 = parse_tree__parse_types__V_187_187;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_types__HeadVar__1_1, parse_tree__parse_types__V_253_253, parse_tree__parse_types__V_185_185);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer parse_tree__parse_types__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word parse_tree__parse_types__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word parse_tree__parse_types__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__parse_types__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word parse_tree__parse_types__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__parse_types__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer parse_tree__parse_types__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word parse_tree__parse_types__V_232_232;
                          MR_Integer parse_tree__parse_types__V_264_264 = (MR_Integer) parse_tree__parse_types__V_261_261;
                          MR_Integer parse_tree__parse_types__V_265_265 = (MR_Integer) parse_tree__parse_types__V_229_229;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__parse_types__V_232_232, parse_tree__parse_types__V_264_264, parse_tree__parse_types__V_265_265);
                          }
                          parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_232_232 == (MR_Integer) 0);
                          parse_tree__parse_types__succeeded = !(parse_tree__parse_types__succeeded);
                          if (parse_tree__parse_types__succeeded)
                            *parse_tree__parse_types__HeadVar__1_1 = parse_tree__parse_types__V_232_232;
                          else
                            {
                              MR_Word parse_tree__parse_types__V_233_233;

                              {
                                mercury__term____Compare____context_0_0(&parse_tree__parse_types__V_233_233, parse_tree__parse_types__V_260_260, parse_tree__parse_types__V_230_230);
                              }
                              parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_233_233 == (MR_Integer) 0);
                              parse_tree__parse_types__succeeded = !(parse_tree__parse_types__succeeded);
                              if (parse_tree__parse_types__succeeded)
                                *parse_tree__parse_types__HeadVar__1_1 = parse_tree__parse_types__V_233_233;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_types__HeadVar__1_1, parse_tree__parse_types__V_259_259, parse_tree__parse_types__V_231_231);
                                }
                            }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_types____Unify____item_or_marker_0_0(
  MR_Word parse_tree__parse_types__HeadVar__1_1,
  MR_Word parse_tree__parse_types__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_types__succeeded;
    MR_Integer parse_tree__parse_types__CastX_31 = (MR_Integer) parse_tree__parse_types__HeadVar__1_1;
    MR_Integer parse_tree__parse_types__CastY_32 = (MR_Integer) parse_tree__parse_types__HeadVar__2_2;

    parse_tree__parse_types__succeeded = (parse_tree__parse_types__CastX_31 == parse_tree__parse_types__CastY_32);
    if (parse_tree__parse_types__succeeded)
      parse_tree__parse_types__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_types__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_types__V_4_4;

            parse_tree__parse_types__succeeded = ((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_types__succeeded)
              {
                parse_tree__parse_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_types__succeeded = parse_tree__prog_item____Unify____item_0_0(parse_tree__parse_types__V_3_3, parse_tree__parse_types__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_types__TypeInfo_35_35;
            MR_Word parse_tree__parse_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_types__V_6_6;

            parse_tree__parse_types__succeeded = ((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_types__succeeded)
              {
                parse_tree__parse_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_types__TypeInfo_35_35 = (MR_Word) &parse_tree__parse_types_scalar_common_1[1];
                {
                  parse_tree__parse_types__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_types__TypeInfo_35_35, ((MR_Box) (parse_tree__parse_types__V_5_5)), ((MR_Box) (parse_tree__parse_types__V_6_6)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_types__TypeInfo_34_34;
            MR_Word parse_tree__parse_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_types__V_8_8;

            parse_tree__parse_types__succeeded = ((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_types__succeeded)
              {
                parse_tree__parse_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_types__TypeInfo_34_34 = (MR_Word) &parse_tree__parse_types_scalar_common_1[0];
                {
                  parse_tree__parse_types__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_types__TypeInfo_34_34, ((MR_Box) (parse_tree__parse_types__V_7_7)), ((MR_Box) (parse_tree__parse_types__V_8_8)));
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__parse_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_types__V_10_10;

                parse_tree__parse_types__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__parse_types__succeeded)
                  {
                    parse_tree__parse_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__parse_types__succeeded = recompilation____Unify____version_numbers_0_0(parse_tree__parse_types__V_9_9, parse_tree__parse_types__V_10_10);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String parse_tree__parse_types__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 1)));
                MR_String parse_tree__parse_types__V_12_12;

                parse_tree__parse_types__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__parse_types__succeeded)
                  {
                    parse_tree__parse_types__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_types__succeeded = (strcmp(parse_tree__parse_types__V_11_11, parse_tree__parse_types__V_12_12) == 0);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__parse_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer parse_tree__parse_types__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__parse_types__V_16_16;
                MR_Word parse_tree__parse_types__V_17_17;
                MR_Integer parse_tree__parse_types__V_18_18;

                parse_tree__parse_types__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (parse_tree__parse_types__succeeded)
                  {
                    parse_tree__parse_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__parse_types__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      parse_tree__parse_types__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_types__V_13_13, parse_tree__parse_types__V_16_16);
                    }
                    if (parse_tree__parse_types__succeeded)
                      {
                        {
                          parse_tree__parse_types__succeeded = mercury__term____Unify____context_0_0(parse_tree__parse_types__V_14_14, parse_tree__parse_types__V_17_17);
                        }
                        if (parse_tree__parse_types__succeeded)
                          parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_15_15 == parse_tree__parse_types__V_18_18);
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word parse_tree__parse_types__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_types__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer parse_tree__parse_types__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__parse_types__V_22_22;
                MR_Word parse_tree__parse_types__V_23_23;
                MR_Integer parse_tree__parse_types__V_24_24;

                parse_tree__parse_types__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (parse_tree__parse_types__succeeded)
                  {
                    parse_tree__parse_types__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_types__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__parse_types__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      parse_tree__parse_types__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_types__V_19_19, parse_tree__parse_types__V_22_22);
                    }
                    if (parse_tree__parse_types__succeeded)
                      {
                        {
                          parse_tree__parse_types__succeeded = mercury__term____Unify____context_0_0(parse_tree__parse_types__V_20_20, parse_tree__parse_types__V_23_23);
                        }
                        if (parse_tree__parse_types__succeeded)
                          parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_21_21 == parse_tree__parse_types__V_24_24);
                      }
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word parse_tree__parse_types__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_types__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer parse_tree__parse_types__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__parse_types__V_28_28;
                MR_Word parse_tree__parse_types__V_29_29;
                MR_Integer parse_tree__parse_types__V_30_30;

                parse_tree__parse_types__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_types__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (parse_tree__parse_types__succeeded)
                  {
                    parse_tree__parse_types__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_types__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__parse_types__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__parse_types__HeadVar__2_2, (MR_Integer) 3)));
                    parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_25_25 == parse_tree__parse_types__V_28_28);
                    if (parse_tree__parse_types__succeeded)
                      {
                        {
                          parse_tree__parse_types__succeeded = mercury__term____Unify____context_0_0(parse_tree__parse_types__V_26_26, parse_tree__parse_types__V_29_29);
                        }
                        if (parse_tree__parse_types__succeeded)
                          parse_tree__parse_types__succeeded = (parse_tree__parse_types__V_27_27 == parse_tree__parse_types__V_30_30);
                      }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__parse_types__succeeded;
  }
}

void mercury__parse_tree__parse_types__init(void)
{
}

void mercury__parse_tree__parse_types__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_types__parse_tree__parse_types__type_ctor_info_item_or_marker_0);
}

void mercury__parse_tree__parse_types__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_types. */
