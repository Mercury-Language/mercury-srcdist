/*
** Automatically generated from `parse_types.m'
** by the Mercury compiler,
** version rotd-2019-02-15
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


// :- module parse_tree.parse_types.
// :- implementation.

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
#include "multi_map.mih"
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

static const MR_DuArgLocn parse_tree__parse_types__parse_tree__parse_types__field_locns_item_or_marker_0_7[3];

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
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_0 = {
  (MR_String) "iom_item",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1 = {
  (MR_String) "iom_marker_include",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_types__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2 = {
  (MR_String) "iom_marker_avail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_3[1] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_version_numbers_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3 = {
  (MR_String) "iom_marker_version_numbers",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4 = {
  (MR_String) "iom_marker_src_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_5[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5 = {
  (MR_String) "iom_marker_module_start",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_6[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6 = {
  (MR_String) "iom_marker_module_end",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_7[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__parse_types__parse_tree__parse_types__field_locns_item_or_marker_0_7[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7 = {
  (MR_String) "iom_marker_section",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_7,
  NULL,
  parse_tree__parse_types__parse_tree__parse_types__field_locns_item_or_marker_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(5),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_types____Unify____item_or_marker_0_0_10001)),
  ((MR_Box) (parse_tree__parse_types____Compare____item_or_marker_0_0_10001)),
  (MR_String) "parse_tree.parse_types",
  (MR_String) "item_or_marker",
  {     parse_tree__parse_types__parse_tree__parse_types__du_name_ordered_item_or_marker_0 },
  {     parse_tree__parse_types__parse_tree__parse_types__du_ptag_ordered_item_or_marker_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  parse_tree__parse_types__parse_tree__parse_types__functor_number_map_item_or_marker_0
};

void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_234 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_235 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_234 == CastY_235);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_item____Compare____item_0_0(HeadVar__1_1, Var_250, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_types_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_252)), ((MR_Box) (ArgY1_29)));
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_types_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_251)), ((MR_Box) (ArgY1_53)));
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          recompilation____Compare____version_numbers_0_0(HeadVar__1_1, Var_263, ArgY1_77);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_262 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_101 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_262, ArgY1_101);
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer Var_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Integer ArgY3_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_136;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_136, Var_258, ArgY1_135);
                          succeeded = (SubResult1_136 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_136;
                          else
                          {
                            MR_Word SubResult2_139;

                            mercury__term____Compare____context_0_0(&SubResult2_139, Var_257, ArgY2_138);
                            succeeded = (SubResult2_139 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_139;
                            else
                            {
                              succeeded = (Var_256 < ArgY3_141);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_256 > ArgY3_141);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 2;
                                else
                                  *HeadVar__1_1 = (MR_Integer) 0;
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Var_253 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ArgY1_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Integer ArgY3_187 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_182;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_182, Var_255, ArgY1_181);
                          succeeded = (SubResult1_182 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_182;
                          else
                          {
                            MR_Word SubResult2_185;

                            mercury__term____Compare____context_0_0(&SubResult2_185, Var_254, ArgY2_184);
                            succeeded = (SubResult2_185 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_185;
                            else
                            {
                              succeeded = (Var_253 < ArgY3_187);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_253 > ArgY3_187);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 2;
                                else
                                  *HeadVar__1_1 = (MR_Integer) 0;
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer Var_259 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_261 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ArgY1_227 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Word ArgY2_230 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Integer ArgY3_233 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_228;
                          MR_Integer Var_264 = (MR_Integer) (Var_261);
                          MR_Integer Var_265 = (MR_Integer) (ArgY1_227);

                          succeeded = (Var_264 < Var_265);
                          if (succeeded)
                          {
                            SubResult1_228 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_264 > Var_265);
                            if (succeeded)
                            {
                              SubResult1_228 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_228 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_228;
                          else
                          {
                            MR_Word SubResult2_231;

                            mercury__term____Compare____context_0_0(&SubResult2_231, Var_260, ArgY2_230);
                            succeeded = (SubResult2_231 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_231;
                            else
                            {
                              succeeded = (Var_259 < ArgY3_233);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_259 > ArgY3_233);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 2;
                                else
                                  *HeadVar__1_1 = (MR_Integer) 0;
                              }
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_31 == CastY_32);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_item____Unify____item_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_35_35;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_35_35 = (MR_Word) (&parse_tree__parse_types_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_34_34;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_34_34 = (MR_Word) (&parse_tree__parse_types_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = recompilation____Unify____version_numbers_0_0(ArgX1_9, ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;
                MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_16;
                MR_Integer ArgX3_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_13, ArgY1_14);
                  if (succeeded)
                  {
                    succeeded = mercury__term____Unify____context_0_0(ArgX2_15, ArgY2_16);
                    if (succeeded)
                      succeeded = (ArgX3_17 == ArgY3_18);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_22;
                MR_Integer ArgX3_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
                  if (succeeded)
                  {
                    succeeded = mercury__term____Unify____context_0_0(ArgX2_21, ArgY2_22);
                    if (succeeded)
                      succeeded = (ArgX3_23 == ArgY3_24);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_26;
                MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_28;
                MR_Integer ArgX3_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Integer ArgY3_30;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_25 == ArgY1_26);
                  if (succeeded)
                  {
                    succeeded = mercury__term____Unify____context_0_0(ArgX2_27, ArgY2_28);
                    if (succeeded)
                      succeeded = (ArgX3_29 == ArgY3_30);
                  }
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_types____Unify____item_or_marker_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_types____Unify____item_or_marker_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_types____Compare____item_or_marker_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_types__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_types.
