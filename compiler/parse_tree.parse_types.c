/*
** Automatically generated from `parse_types.m'
** by the Mercury compiler,
** version rotd-2022-03-23
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
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_3[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_4[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_5[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_6[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_7[3];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_8[3];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_8;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_9[3];

static const MR_DuArgLocn parse_tree__parse_types__parse_tree__parse_types__field_locns_item_or_marker_0_9[3];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_9;

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_10[1];

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_10;

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_3[8];

static const MR_DuPtagLayout parse_tree__parse_types__parse_tree__parse_types__du_ptag_ordered_item_or_marker_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_name_ordered_item_or_marker_0[11];

static const MR_Integer parse_tree__parse_types__parse_tree__parse_types__functor_number_map_item_or_marker_0[11];

static MR_bool MR_CALL 
parse_tree__parse_types____Unify____item_or_marker_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_types_scalar_common_1[36][2];




static /* final */ const MR_Box parse_tree__parse_types_scalar_common_1[36][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "source_file"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[4])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a version number map"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_types_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_types__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1 = {
  (MR_String) "iom_item_and_specs",
  INT16_C(2),
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_types__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2 = {
  (MR_String) "iom_marker_include",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_types__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_types__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3 = {
  (MR_String) "iom_marker_avail",
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4 = {
  (MR_String) "iom_marker_fim",
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

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_5[1] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5 = {
  (MR_String) "iom_marker_version_numbers",
  INT16_C(1),
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

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6 = {
  (MR_String) "iom_marker_src_file",
  INT16_C(1),
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
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7 = {
  (MR_String) "iom_marker_module_start",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_8[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_8 = {
  (MR_String) "iom_marker_module_end",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_9[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)
};

static const MR_DuArgLocn parse_tree__parse_types__parse_tree__parse_types__field_locns_item_or_marker_0_9[3] = {
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

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_9 = {
  (MR_String) "iom_marker_section",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_9,
  NULL,
  parse_tree__parse_types__parse_tree__parse_types__field_locns_item_or_marker_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_10[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_types__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_10 = {
  (MR_String) "iom_handled",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  parse_tree__parse_types__parse_tree__parse_types__field_types_item_or_marker_0_10,
  NULL,
  NULL,
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

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_3[8] = {
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_8,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_9,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_10
};

static const MR_DuPtagLayout parse_tree__parse_types__parse_tree__parse_types__du_ptag_ordered_item_or_marker_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__parse_types__parse_tree__parse_types__du_stag_ordered_item_or_marker_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_types__parse_tree__parse_types__du_name_ordered_item_or_marker_0[11] = {
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_10,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_0,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_1,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_3,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_4,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_2,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_8,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_7,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_9,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_6,
  &parse_tree__parse_types__parse_tree__parse_types__du_functor_desc_item_or_marker_0_5
};

static const MR_Integer parse_tree__parse_types__parse_tree__parse_types__functor_number_map_item_or_marker_0[11] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_types__parse_tree__parse_types__type_ctor_info_item_or_marker_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_types____Unify____item_or_marker_0_0_10001)),
  ((MR_Box) (parse_tree__parse_types____Compare____item_or_marker_0_0_10001)),
  (MR_String) "parse_tree.parse_types",
  (MR_String) "item_or_marker",
  { parse_tree__parse_types__parse_tree__parse_types__du_name_ordered_item_or_marker_0 },
  { parse_tree__parse_types__parse_tree__parse_types__du_ptag_ordered_item_or_marker_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  parse_tree__parse_types__parse_tree__parse_types__functor_number_map_item_or_marker_0,

};

void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_407 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_408 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_407 == CastY_408);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__prog_item____Compare____item_0_0(HeadVar__1_1, Var_428, ArgY1_5);
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
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_429 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_430 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_38;

                parse_tree__prog_item____Compare____item_0_0(&SubResult1_38, Var_430, ArgY1_37);
                succeeded = (SubResult1_38 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_38;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_types_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_429)), ((MR_Box) (ArgY2_40)));
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
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_433 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_types_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_433)), ((MR_Box) (ArgY1_80)));
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
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
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
              MR_Word Var_431 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_types_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_431)), ((MR_Box) (ArgY1_111)));
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_432 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        parse_tree__prog_item____Compare____item_fim_0_0(HeadVar__1_1, Var_432, ArgY1_142);
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_444 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        recompilation____Compare____module_item_version_numbers_0_0(HeadVar__1_1, Var_444, ArgY1_173);
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_443 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_String ArgY1_204 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_443, ArgY1_204);
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_437 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_438 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_255 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_250;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_250, Var_439, ArgY1_249);
                        succeeded = (SubResult1_250 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_250;
                        else
                        {
                          MR_Word SubResult2_253;

                          mercury__term____Compare____context_0_0(&SubResult2_253, Var_438, ArgY2_252);
                          succeeded = (SubResult2_253 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_253;
                          else
                            parse_tree__prog_data____Compare____item_seq_num_0_0(HeadVar__1_1, Var_437, ArgY3_255);
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_434 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_435 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_436 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ArgY1_308 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_311 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_314 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_309;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_309, Var_436, ArgY1_308);
                        succeeded = (SubResult1_309 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_309;
                        else
                        {
                          MR_Word SubResult2_312;

                          mercury__term____Compare____context_0_0(&SubResult2_312, Var_435, ArgY2_311);
                          succeeded = (SubResult2_312 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_312;
                          else
                            parse_tree__prog_data____Compare____item_seq_num_0_0(HeadVar__1_1, Var_434, ArgY3_314);
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_440 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_441 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_442 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ArgY1_367 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word ArgY2_370 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_373 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_368;
                        MR_Integer Var_445 = (MR_Integer) (Var_442);
                        MR_Integer Var_446 = (MR_Integer) (ArgY1_367);

                        succeeded = (Var_445 < Var_446);
                        if (succeeded)
                        {
                          SubResult1_368 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_445 > Var_446);
                          if (succeeded)
                          {
                            SubResult1_368 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_368 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_368;
                        else
                        {
                          MR_Word SubResult2_371;

                          mercury__term____Compare____context_0_0(&SubResult2_371, Var_441, ArgY2_370);
                          succeeded = (SubResult2_371 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_371;
                          else
                            parse_tree__prog_data____Compare____item_seq_num_0_0(HeadVar__1_1, Var_440, ArgY3_373);
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_427 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ArgY1_406 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_types_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_427)), ((MR_Box) (ArgY1_406)));
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

MR_bool MR_CALL 
parse_tree__parse_types____Unify____item_or_marker_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_39 == CastY_40);
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
          MR_Word TypeInfo_44_44;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = parse_tree__prog_item____Unify____item_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
            {
              TypeInfo_44_44 = (MR_Word) (&parse_tree__parse_types_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_47_47;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_47_47 = (MR_Word) (&parse_tree__parse_types_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_45_45;
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_45_45 = (MR_Word) (&parse_tree__parse_types_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_item____Unify____item_fim_0_0(ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = recompilation____Unify____module_item_version_numbers_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                {
                  succeeded = mercury__term____Unify____context_0_0(ArgX2_21, ArgY2_22);
                  if (succeeded)
                    succeeded = parse_tree__prog_data____Unify____item_seq_num_0_0(ArgX3_23, ArgY3_24);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_28;
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_25, ArgY1_26);
                if (succeeded)
                {
                  succeeded = mercury__term____Unify____context_0_0(ArgX2_27, ArgY2_28);
                  if (succeeded)
                    succeeded = parse_tree__prog_data____Unify____item_seq_num_0_0(ArgX3_29, ArgY3_30);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_34;
              MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_31 == ArgY1_32);
                if (succeeded)
                {
                  succeeded = mercury__term____Unify____context_0_0(ArgX2_33, ArgY2_34);
                  if (succeeded)
                    succeeded = parse_tree__prog_data____Unify____item_seq_num_0_0(ArgX3_35, ArgY3_36);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_41_41;
              MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_41_41 = (MR_Word) (&parse_tree__parse_types_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX1_37)), ((MR_Box) (ArgY1_38)));
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__parse_types__iom_desc_pieces_1_f_0(
  MR_Word IOM_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) IOM_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Item_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IOM_3, (MR_Integer) 0))));

        Pieces_4 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Item_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOM_3, (MR_Integer) 0))));

        Pieces_4 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_111);
      }
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[18]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IOM_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word HeadAvail_8;
            MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IOM_3, (MR_Integer) 1))));

            HeadAvail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 0))));
            if (((MR_tag((MR_Word) HeadAvail_8)) == (MR_Integer) 0))
              Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[8]));
            else
              Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[12]));
          }
          break;
        case (MR_Integer) 1:
          Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[15]));
          break;
        case (MR_Integer) 2:
          Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[35]));
          break;
        case (MR_Integer) 3:
          Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[33]));
          break;
        case (MR_Integer) 4:
          Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[24]));
          break;
        case (MR_Integer) 5:
          Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[21]));
          break;
        case (MR_Integer) 6:
          {
            MR_Word SectionKind_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), IOM_3, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (SectionKind_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[27]));
                break;
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_types_scalar_common_1[30]));
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          Pieces_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
  }
  return Pieces_4;
}

static MR_bool MR_CALL 
parse_tree__parse_types____Unify____item_or_marker_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_types____Unify____item_or_marker_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_types____Compare____item_or_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_types____Compare____item_or_marker_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
