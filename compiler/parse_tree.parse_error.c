/*
** Automatically generated from `parse_error.m'
** by the Mercury compiler,
** version rotd-2022-06-12
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


// :- module parse_tree.parse_error.
// :- implementation.

/*
INIT mercury__parse_tree__parse_error__init
ENDINIT
*/

#include "parse_tree.parse_error.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_2;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_3;

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_fatal_read_module_error_0[4];

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_fatal_read_module_error_0[4];

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_fatal_read_module_error_0[4];

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_2;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_3;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_4;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_5;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_6;

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_7;

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_nonfatal_read_module_error_0[8];

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_nonfatal_read_module_error_0[8];

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_nonfatal_read_module_error_0[8];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__parse_error__parse_tree__parse_error__field_types_read_module_errors_0_0[5];

static const MR_ConstString parse_tree__parse_error__parse_tree__parse_error__field_names_read_module_errors_0_0[5];

static const MR_DuFunctorDesc parse_tree__parse_error__parse_tree__parse_error__du_functor_desc_read_module_errors_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__du_stag_ordered_read_module_errors_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_error__parse_tree__parse_error__du_ptag_ordered_read_module_errors_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__du_name_ordered_read_module_errors_0[1];

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_errors_0[1];

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____fatal_read_module_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_error____Compare____fatal_read_module_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____nonfatal_read_module_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_error____Compare____nonfatal_read_module_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_error_scalar_common_1[5][2];




static /* final */ const MR_Box parse_tree__parse_error_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_0 = {
  (MR_String) "frme_could_not_open_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_1 = {
  (MR_String) "frme_could_not_read_file",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_2 = {
  (MR_String) "frme_bad_submodule_start",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_3 = {
  (MR_String) "frme_bad_module_end",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_fatal_read_module_error_0[4] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_1,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_fatal_read_module_error_0[4] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_3,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_fatal_read_module_error_0_1
};

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_fatal_read_module_error_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_error____Unify____fatal_read_module_error_0_0_10001)),
  ((MR_Box) (parse_tree__parse_error____Compare____fatal_read_module_error_0_0_10001)),
  (MR_String) "parse_tree.parse_error",
  (MR_String) "fatal_read_module_error",
  { parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_fatal_read_module_error_0 },
  { parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_fatal_read_module_error_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__parse_error__parse_tree__parse_error__functor_number_map_fatal_read_module_error_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_0 = {
  (MR_String) "rme_unexpected_module_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_1 = {
  (MR_String) "rme_no_module_decl_at_start",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_2 = {
  (MR_String) "rme_no_section_decl_at_start",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_3 = {
  (MR_String) "rme_end_module_not_at_end_of_src",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_4 = {
  (MR_String) "rme_unexpected_term_in_int_or_opt",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_5 = {
  (MR_String) "rme_could_not_read_term",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_6 = {
  (MR_String) "rme_could_not_parse_item",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_7 = {
  (MR_String) "rme_nec",
  INT32_C(7)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_nonfatal_read_module_error_0[8] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_1,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_3,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_4,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_5,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_6,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_7
};

static const MR_EnumFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_nonfatal_read_module_error_0[8] = {
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_6,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_5,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_3,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_7,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_1,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_2,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_0,
  &parse_tree__parse_error__parse_tree__parse_error__enum_functor_desc_nonfatal_read_module_error_0_4
};

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_nonfatal_read_module_error_0[8] = {
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_error____Unify____nonfatal_read_module_error_0_0_10001)),
  ((MR_Box) (parse_tree__parse_error____Compare____nonfatal_read_module_error_0_0_10001)),
  (MR_String) "parse_tree.parse_error",
  (MR_String) "nonfatal_read_module_error",
  { parse_tree__parse_error__parse_tree__parse_error__enum_name_ordered_nonfatal_read_module_error_0 },
  { parse_tree__parse_error__parse_tree__parse_error__enum_ordinal_ordered_nonfatal_read_module_error_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  parse_tree__parse_error__parse_tree__parse_error__functor_number_map_nonfatal_read_module_error_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_error__parse_tree__parse_error__field_types_read_module_errors_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_ConstString parse_tree__parse_error__parse_tree__parse_error__field_names_read_module_errors_0_0[5] = {
  (MR_String) "rm_fatal_errors",
  (MR_String) "rm_fatal_error_specs",
  (MR_String) "rm_nonfatal_errors",
  (MR_String) "rm_nonfatal_error_specs",
  (MR_String) "rm_warning_specs"
};

static const MR_DuFunctorDesc parse_tree__parse_error__parse_tree__parse_error__du_functor_desc_read_module_errors_0_0 = {
  (MR_String) "read_module_errors",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_error__parse_tree__parse_error__field_types_read_module_errors_0_0,
  parse_tree__parse_error__parse_tree__parse_error__field_names_read_module_errors_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__du_stag_ordered_read_module_errors_0_0[1] = {
  &parse_tree__parse_error__parse_tree__parse_error__du_functor_desc_read_module_errors_0_0
};

static const MR_DuPtagLayout parse_tree__parse_error__parse_tree__parse_error__du_ptag_ordered_read_module_errors_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_error__parse_tree__parse_error__du_stag_ordered_read_module_errors_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_error__parse_tree__parse_error__du_name_ordered_read_module_errors_0[1] = {
  &parse_tree__parse_error__parse_tree__parse_error__du_functor_desc_read_module_errors_0_0
};

static const MR_Integer parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_errors_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_error____Unify____read_module_errors_0_0_10001)),
  ((MR_Box) (parse_tree__parse_error____Compare____read_module_errors_0_0_10001)),
  (MR_String) "parse_tree.parse_error",
  (MR_String) "read_module_errors",
  { parse_tree__parse_error__parse_tree__parse_error__du_name_ordered_read_module_errors_0 },
  { parse_tree__parse_error__parse_tree__parse_error__du_ptag_ordered_read_module_errors_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_error__parse_tree__parse_error__functor_number_map_read_module_errors_0,

};

void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_error_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&parse_tree__parse_error_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&parse_tree__parse_error_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&parse_tree__parse_error_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&parse_tree__parse_error_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_error____Compare____nonfatal_read_module_error_0_0(
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
parse_tree__parse_error____Unify____nonfatal_read_module_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_error____Compare____fatal_read_module_error_0_0(
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
parse_tree__parse_error____Unify____fatal_read_module_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(
  MR_String ErrorMsg_6,
  MR_Word FatalError_7,
  MR_Word * Errors_8)
{
  MR_Word Spec_10;
  MR_Word Var_15;
  MR_Word FatalErrors0_28;
  MR_Word NonFatalErrors_30;
  MR_Word FatalErrors_33;
  MR_Word FatalSpecs_34;

  parse_tree__parse_error__io_error_to_error_spec_4_p_0(ErrorMsg_6, &Spec_10);
  FatalErrors0_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0));
  NonFatalErrors_30 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
  {
    Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Spec_10));
    MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) (FatalError_7)), FatalErrors0_28, &FatalErrors_33);
  FatalSpecs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_15, (MR_Word) ((MR_Unsigned) 0U));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Errors_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FatalErrors_33));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FatalSpecs_34));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NonFatalErrors_30));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
parse_tree__parse_error__io_error_to_error_spec_4_p_0(
  MR_String ErrorMsg_5,
  MR_Word * Spec_6)
{
  MR_String ProgName_8;
  MR_Word Pieces_9;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_Word Var_19;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_8);
  {
    Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_14, 0) = ((MR_Box) (ProgName_8));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (ErrorMsg_5));
  }
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_error_scalar_common_1[4])));
  }
  {
    Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_error_scalar_common_1[3])));
    MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
  }
  {
    Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Spec_6 = base;
    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_error.io_error_to_error_spec\'/4"));
    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Pieces_9));
  }
}

MR_Word MR_CALL 
parse_tree__parse_error__get_read_module_specs_1_f_0(
  MR_Word Errors_3)
{
  MR_Word Specs_4;
  MR_Word FatalSpecs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors_3, (MR_Integer) 1))));
  MR_Word NonFatalSpecs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors_3, (MR_Integer) 3))));
  MR_Word WarningSpecs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors_3, (MR_Integer) 4))));
  MR_Word Var_10;

  Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NonFatalSpecs_8, WarningSpecs_9);
  Specs_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FatalSpecs_6, Var_10);
  return Specs_4;
}

MR_bool MR_CALL 
parse_tree__parse_error__there_are_some_errors_1_p_0(
  MR_Word Errors_2)
{
  MR_bool succeeded;
  MR_Word FatalErrors_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors_2, (MR_Integer) 0))));
  MR_Word NonFatalErrors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors_2, (MR_Integer) 2))));

  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_3);
  if (!(succeeded))
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_5);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_error__there_are_no_errors_1_p_0(
  MR_Word Errors_2)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_9_9;
  MR_Word FatalErrors_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors_2, (MR_Integer) 0))));
  MR_Word NonFatalErrors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors_2, (MR_Integer) 2))));

  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_3);
  if (succeeded)
  {
    TypeCtorInfo_9_9 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_9_9, NonFatalErrors_5);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_error__add_warning_3_p_0(
  MR_Word Specs_4,
  MR_Word Errors0_5,
  MR_Word * Errors_6)
{
  MR_Word FatalErrors_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_5, (MR_Integer) 0))));
  MR_Word FatalSpecs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_5, (MR_Integer) 1))));
  MR_Word NonFatalErrors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_5, (MR_Integer) 2))));
  MR_Word NonFatalSpecs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_5, (MR_Integer) 3))));
  MR_Word WarningSpecs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_5, (MR_Integer) 4))));
  MR_Word WarningSpecs_12;

  WarningSpecs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_4, WarningSpecs0_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Errors_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FatalErrors_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FatalSpecs_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NonFatalErrors_9));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonFatalSpecs_10));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (WarningSpecs_12));
  }
}

void MR_CALL 
parse_tree__parse_error__add_any_nec_errors_3_p_0(
  MR_Word Specs_4,
  MR_Word STATE_VARIABLE_Errors_0_8,
  MR_Word * STATE_VARIABLE_Errors_9)
{
  if ((Specs_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Errors_9 = STATE_VARIABLE_Errors_0_8;
  else
  {
    MR_Word FatalErrors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Errors_0_8, (MR_Integer) 0))));
    MR_Word FatalSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Errors_0_8, (MR_Integer) 1))));
    MR_Word NonFatalErrors0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Errors_0_8, (MR_Integer) 2))));
    MR_Word NonFatalSpecs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Errors_0_8, (MR_Integer) 3))));
    MR_Word WarningSpecs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Errors_0_8, (MR_Integer) 4))));
    MR_Word NonFatalErrors_20;
    MR_Word NonFatalSpecs_21;

    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) ((MR_Integer) 7)), NonFatalErrors0_17, &NonFatalErrors_20);
    NonFatalSpecs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_4, NonFatalSpecs0_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Errors_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FatalErrors_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FatalSpecs_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NonFatalErrors_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonFatalSpecs_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (WarningSpecs_19));
    }
  }
}

void MR_CALL 
parse_tree__parse_error__add_nonfatal_error_4_p_0(
  MR_Word Error_5,
  MR_Word Specs_6,
  MR_Word Errors0_7,
  MR_Word * Errors_8)
{
  MR_Word FatalErrors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 0))));
  MR_Word FatalSpecs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 1))));
  MR_Word NonFatalErrors0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 2))));
  MR_Word NonFatalSpecs0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 3))));
  MR_Word WarningSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 4))));
  MR_Word NonFatalErrors_14;
  MR_Word NonFatalSpecs_15;

  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) (Error_5)), NonFatalErrors0_11, &NonFatalErrors_14);
  NonFatalSpecs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_6, NonFatalSpecs0_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Errors_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FatalErrors_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FatalSpecs_10));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NonFatalErrors_14));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonFatalSpecs_15));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (WarningSpecs_13));
  }
}

void MR_CALL 
parse_tree__parse_error__add_fatal_error_4_p_0(
  MR_Word Error_5,
  MR_Word Specs_6,
  MR_Word Errors0_7,
  MR_Word * Errors_8)
{
  MR_Word FatalErrors0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 0))));
  MR_Word FatalSpecs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 1))));
  MR_Word NonFatalErrors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 2))));
  MR_Word NonFatalSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 3))));
  MR_Word WarningSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_7, (MR_Integer) 4))));
  MR_Word FatalErrors_14;
  MR_Word FatalSpecs_15;

  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) (Error_5)), FatalErrors0_9, &FatalErrors_14);
  FatalSpecs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_6, FatalSpecs0_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Errors_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FatalErrors_14));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FatalSpecs_15));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NonFatalErrors_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonFatalSpecs_12));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (WarningSpecs_13));
  }
}

MR_Word MR_CALL 
parse_tree__parse_error__init_read_module_errors_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_4;

  Var_2 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0));
  Var_4 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____fatal_read_module_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_error____Unify____fatal_read_module_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_error____Compare____fatal_read_module_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_error____Compare____fatal_read_module_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____nonfatal_read_module_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_error____Unify____nonfatal_read_module_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_error____Compare____nonfatal_read_module_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_error____Compare____nonfatal_read_module_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_error____Unify____read_module_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_error____Compare____read_module_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_error____Compare____read_module_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_error__init(void)
{
}

void mercury__parse_tree__parse_error__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0);
	MR_register_type_ctor_info(&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0);
	MR_register_type_ctor_info(&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0);
}

void mercury__parse_tree__parse_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_error__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_error.
