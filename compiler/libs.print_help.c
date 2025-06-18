/*
** Automatically generated from `print_help.m'
** by the Mercury compiler,
** version rotd-2025-06-18
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


// :- module libs.print_help.
// :- implementation.

/*
INIT mercury__libs__print_help__init
ENDINIT
*/

#include "libs.print_help.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "enum.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_alt_name_pos_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_alt_name_pos_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_alt_name_pos_0[2];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_arg_align_0_0[2];

static const MR_ConstString libs__print_help__libs__print_help__field_names_arg_align_0_0[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_arg_align_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_arg_align_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_arg_align_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_arg_align_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_arg_align_0[1];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_character_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_1[6];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_1[6];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_1[6];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_1;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_2[2];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_2[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_2;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_3[3];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_3[3];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_3;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_4[2];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_4[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_4;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_5[3];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_5[3];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_5;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_6[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_6[4];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_6[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_6;

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_arg_align_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_7[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_7[4];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_7[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_7;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_8[5];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_8[5];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_8[5];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_8;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_9[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_9[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_9;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_10[5];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_10[5];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_10[5];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_10;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_11[6];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_11[6];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_11[6];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_11;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_12[5];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_12[5];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_12[5];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_12;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_13[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_13[4];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_13[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_13;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_14[5];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_14[5];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_14[5];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_14;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_15[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_15[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_15;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_16[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_16[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_16;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_17[5];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_17[5];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_17;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_18[5];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_18[5];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_18;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_19[1];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_19[1];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_19;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_1[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_2[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_3[17];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_0[4];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_0[20];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_0[20];

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_help_public_or_private_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_help_public_or_private_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_public_or_private_0[2];

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_print_what_help_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_print_what_help_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_print_what_help_0[2];

static MR_bool MR_CALL 
libs__print_help____Unify____alt_name_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____alt_name_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____arg_align_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____arg_align_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_public_or_private_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____help_public_or_private_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____print_what_help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____print_what_help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__print_help_scalar_common_1[3][2];




static /* final */ const MR_Box libs__print_help_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_arg_align_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};





static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_0 = {
  (MR_String) "xpos_one_line",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_1 = {
  (MR_String) "xpos_sep_lines",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_alt_name_pos_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_alt_name_pos_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_alt_name_pos_0_1
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_alt_name_pos_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____alt_name_pos_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____alt_name_pos_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "alt_name_pos",
  { libs__print_help__libs__print_help__enum_name_ordered_alt_name_pos_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_alt_name_pos_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_alt_name_pos_0,

};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_arg_align_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_arg_align_0_0[2] = {
  (MR_String) "aa_arg_name",
  (MR_String) "aa_aligned_text"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_arg_align_0_0 = {
  (MR_String) "arg_align",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_arg_align_0_0,
  libs__print_help__libs__print_help__field_names_arg_align_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_arg_align_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_arg_align_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_arg_align_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_arg_align_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_arg_align_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_arg_align_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_arg_align_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_arg_align_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____arg_align_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____arg_align_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "arg_align",
  { libs__print_help__libs__print_help__du_name_ordered_arg_align_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_arg_align_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_arg_align_0,

};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_0 = {
  (MR_String) "no_help",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) }
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_1[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_help_public_or_private_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_1[6] = {
  (MR_String) "gh_long_name",
  (MR_String) "gh_alt_name_pos",
  (MR_String) "gh_alt_long_names",
  (MR_String) "gh_short_names",
  (MR_String) "gh_public_or_private",
  (MR_String) "gh_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_1[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_1 = {
  (MR_String) "xgen_help",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help__libs__print_help__field_types_help_0_1,
  libs__print_help__libs__print_help__field_names_help_0_1,
  libs__print_help__libs__print_help__field_locns_help_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_2[2] = {
  (MR_String) "h_long_name",
  (MR_String) "h_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_2 = {
  (MR_String) "xhelp",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  libs__print_help__libs__print_help__field_types_help_0_2,
  libs__print_help__libs__print_help__field_names_help_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_3[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_3[3] = {
  (MR_String) "hr_long_name",
  (MR_String) "hr_arg_name",
  (MR_String) "hr_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_3 = {
  (MR_String) "xarg_help",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  libs__print_help__libs__print_help__field_types_help_0_3,
  libs__print_help__libs__print_help__field_names_help_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_4[2] = {
  (MR_String) "ph_long_name",
  (MR_String) "ph_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_4 = {
  (MR_String) "xpriv_help",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  libs__print_help__libs__print_help__field_types_help_0_4,
  libs__print_help__libs__print_help__field_names_help_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_5[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_5[3] = {
  (MR_String) "prh_long_name",
  (MR_String) "prh_arg_name",
  (MR_String) "prh_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_5 = {
  (MR_String) "xpriv_arg_help",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  libs__print_help__libs__print_help__field_types_help_0_5,
  libs__print_help__libs__print_help__field_names_help_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_6[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_6[4] = {
  (MR_String) "ah_long_name",
  (MR_String) "ah_alt_name_pos",
  (MR_String) "ah_alt_long_names",
  (MR_String) "ah_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_6[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_6 = {
  (MR_String) "xalt_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  libs__print_help__libs__print_help__field_types_help_0_6,
  libs__print_help__libs__print_help__field_names_help_0_6,
  libs__print_help__libs__print_help__field_locns_help_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_arg_align_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_arg_align_0) }
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_7[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_arg_align_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_7[4] = {
  (MR_String) "arlh_long_name",
  (MR_String) "arlh_alt_arg_pos",
  (MR_String) "arlh_arg_aligns",
  (MR_String) "arlh_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_7[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_7 = {
  (MR_String) "xalt_arg_align_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  libs__print_help__libs__print_help__field_types_help_0_7,
  libs__print_help__libs__print_help__field_names_help_0_7,
  libs__print_help__libs__print_help__field_locns_help_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_8[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_8[5] = {
  (MR_String) "alh_long_name",
  (MR_String) "alh_alt_name_pos",
  (MR_String) "alh_alt_long_names",
  (MR_String) "alh_aligned_text",
  (MR_String) "alh_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_8[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_8 = {
  (MR_String) "xalt_align_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  libs__print_help__libs__print_help__field_types_help_0_8,
  libs__print_help__libs__print_help__field_names_help_0_8,
  libs__print_help__libs__print_help__field_locns_help_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_9[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_9[4] = {
  (MR_String) "nlh_long_name",
  (MR_String) "nlh_aligned_text",
  (MR_String) "alh_no_aligned_text",
  (MR_String) "nlh_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_9 = {
  (MR_String) "xno_align_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  libs__print_help__libs__print_help__field_types_help_0_9,
  libs__print_help__libs__print_help__field_names_help_0_9,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_10[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_10[5] = {
  (MR_String) "palh_long_name",
  (MR_String) "palh_alt_name_pos",
  (MR_String) "palh_alt_long_names",
  (MR_String) "palh_aligned_text",
  (MR_String) "palh_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_10[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_10 = {
  (MR_String) "xpriv_alt_align_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  libs__print_help__libs__print_help__field_types_help_0_10,
  libs__print_help__libs__print_help__field_names_help_0_10,
  libs__print_help__libs__print_help__field_locns_help_0_10,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_11[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_11[6] = {
  (MR_String) "salh_short_name",
  (MR_String) "salh_long_name",
  (MR_String) "salh_alt_name_pos",
  (MR_String) "salh_alt_long_names",
  (MR_String) "salh_aligned_text",
  (MR_String) "salh_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_11[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_11 = {
  (MR_String) "xshort_alt_align_help",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  libs__print_help__libs__print_help__field_types_help_0_11,
  libs__print_help__libs__print_help__field_names_help_0_11,
  libs__print_help__libs__print_help__field_locns_help_0_11,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_12[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_12[5] = {
  (MR_String) "aah_long_name",
  (MR_String) "aah_alt_name_pos",
  (MR_String) "aah_alt_long_names",
  (MR_String) "aah_arg_name",
  (MR_String) "aah_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_12[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_12 = {
  (MR_String) "xalt_arg_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  libs__print_help__libs__print_help__field_types_help_0_12,
  libs__print_help__libs__print_help__field_names_help_0_12,
  libs__print_help__libs__print_help__field_locns_help_0_12,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_13[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_13[4] = {
  (MR_String) "pah_long_name",
  (MR_String) "pah_alt_name_pos",
  (MR_String) "pah_alt_long_names",
  (MR_String) "pah_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_13[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_13 = {
  (MR_String) "xpriv_alt_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  libs__print_help__libs__print_help__field_types_help_0_13,
  libs__print_help__libs__print_help__field_names_help_0_13,
  libs__print_help__libs__print_help__field_locns_help_0_13,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_14[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_14[5] = {
  (MR_String) "paah_long_name",
  (MR_String) "paah_alt_name_pos",
  (MR_String) "paah_alt_long_names",
  (MR_String) "paah_arg_name",
  (MR_String) "paah_description"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_help_0_14[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_14 = {
  (MR_String) "xpriv_alt_arg_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  libs__print_help__libs__print_help__field_types_help_0_14,
  libs__print_help__libs__print_help__field_names_help_0_14,
  libs__print_help__libs__print_help__field_locns_help_0_14,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_15[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_15[4] = {
  (MR_String) "sh_short_name",
  (MR_String) "sh_long_name",
  (MR_String) "sh_alt_long_names",
  (MR_String) "sh_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_15 = {
  (MR_String) "xshort_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  libs__print_help__libs__print_help__field_types_help_0_15,
  libs__print_help__libs__print_help__field_names_help_0_15,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_16[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_16[4] = {
  (MR_String) "psh_short_name",
  (MR_String) "psh_long_name",
  (MR_String) "psh_alt_long_names",
  (MR_String) "psh_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_16 = {
  (MR_String) "xpriv_short_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  libs__print_help__libs__print_help__field_types_help_0_16,
  libs__print_help__libs__print_help__field_names_help_0_16,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_17[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_17[5] = {
  (MR_String) "sah_short_name",
  (MR_String) "sah_long_name",
  (MR_String) "sah_alt_long_names",
  (MR_String) "sah_arg_name",
  (MR_String) "sah_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_17 = {
  (MR_String) "xshort_arg_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  libs__print_help__libs__print_help__field_types_help_0_17,
  libs__print_help__libs__print_help__field_names_help_0_17,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_18[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_18[5] = {
  (MR_String) "psah_short_name",
  (MR_String) "psah_long_name",
  (MR_String) "psah_alt_long_names",
  (MR_String) "psah_arg_name",
  (MR_String) "psah_description"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_18 = {
  (MR_String) "xpriv_short_arg_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(18),
  libs__print_help__libs__print_help__field_types_help_0_18,
  libs__print_help__libs__print_help__field_names_help_0_18,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_0_19[1] = { (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0) };

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_0_19[1] = { (MR_String) "uh_description" };

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_0_19 = {
  (MR_String) "xunnamed_help",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(19),
  libs__print_help__libs__print_help__field_types_help_0_19,
  libs__print_help__libs__print_help__field_names_help_0_19,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_0_0 };

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_1[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_0_1 };

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_2[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_0_2 };

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_0_3[17] = {
  &libs__print_help__libs__print_help__du_functor_desc_help_0_3,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_4,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_5,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_6,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_7,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_8,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_9,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_10,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_11,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_12,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_13,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_14,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_15,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_16,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_17,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_18,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_19
};

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__print_help__libs__print_help__du_stag_ordered_help_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_help_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_help_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(17),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__print_help__libs__print_help__du_stag_ordered_help_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_0[20] = {
  &libs__print_help__libs__print_help__du_functor_desc_help_0_0,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_8,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_7,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_12,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_6,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_3,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_1,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_2,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_9,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_10,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_14,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_13,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_5,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_4,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_18,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_16,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_11,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_17,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_15,
  &libs__print_help__libs__print_help__du_functor_desc_help_0_19
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_0[20] = {
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 13,
  (MR_Integer) 12,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 16,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 18,
  (MR_Integer) 15,
  (MR_Integer) 17,
  (MR_Integer) 14,
  (MR_Integer) 19
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_help_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____help_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____help_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "help",
  { libs__print_help__libs__print_help__du_name_ordered_help_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_help_0 },
  (MR_Integer) 20,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_help_0,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_0 = {
  (MR_String) "help_public",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_1 = {
  (MR_String) "help_private",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_help_public_or_private_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_help_public_or_private_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_help_public_or_private_0_0
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_public_or_private_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_help_public_or_private_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____help_public_or_private_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____help_public_or_private_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "help_public_or_private",
  { libs__print_help__libs__print_help__enum_name_ordered_help_public_or_private_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_help_public_or_private_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_help_public_or_private_0,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0 = {
  (MR_String) "print_public_help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1 = {
  (MR_String) "print_public_and_private_help",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_print_what_help_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_print_what_help_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_print_what_help_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_print_what_help_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____print_what_help_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____print_what_help_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "print_what_help",
  { libs__print_help__libs__print_help__enum_name_ordered_print_what_help_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_print_what_help_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_print_what_help_0,

};

void MR_CALL 
libs__print_help____Compare____print_what_help_0_0(
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
libs__print_help____Unify____print_what_help_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__print_help____Compare____help_public_or_private_0_0(
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
libs__print_help____Unify____help_public_or_private_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__print_help____Compare____help_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_219 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_220 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_219 == CastY_220);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    libs__print_help____Index____help_0_0(HeadVar__2_2, &IndexX_4);
    libs__print_help____Index____help_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_11;
              MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_14;
              MR_Word ArgX4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_Word ArgY4_17;
              MR_Word ArgX5_19 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 4))) & (MR_Integer) 1);
              MR_Word ArgY5_20;
              MR_Word ArgX6_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 5))));
              MR_Word ArgY6_23;
              MR_Word SubResult1_9;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
                ArgY2_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))) & (MR_Integer) 1);
                ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
                ArgY4_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
                ArgY5_20 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 4))) & (MR_Integer) 1);
                ArgY6_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 5))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_9, ArgX1_7, ArgY1_8);
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                {
                  MR_Word SubResult2_12;
                  MR_Integer Var_306 = (MR_Integer) (ArgX2_10);
                  MR_Integer Var_307 = (MR_Integer) (ArgY2_11);

                  succeeded = (Var_306 < Var_307);
                  if (succeeded)
                  {
                    SubResult2_12 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_306 > Var_307);
                    if (succeeded)
                    {
                      SubResult2_12 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_12 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_12;
                  else
                  {
                    MR_Word SubResult3_15;

                    mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_15, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                    succeeded = (SubResult3_15 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult3_15;
                    else
                    {
                      MR_Word SubResult4_18;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[2]), &SubResult4_18, ((MR_Box) (ArgX4_16)), ((MR_Box) (ArgY4_17)));
                      succeeded = (SubResult4_18 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult4_18;
                      else
                      {
                        MR_Word SubResult5_21;
                        MR_Integer Var_308 = (MR_Integer) (ArgX5_19);
                        MR_Integer Var_309 = (MR_Integer) (ArgY5_20);

                        succeeded = (Var_308 < Var_309);
                        if (succeeded)
                        {
                          SubResult5_21 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_308 > Var_309);
                          if (succeeded)
                          {
                            SubResult5_21 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult5_21 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult5_21;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX6_22)), ((MR_Box) (ArgY6_23)));
                      }
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_24 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_25;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_28;
              MR_Word SubResult1_26;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_25 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_26, ArgX1_24, ArgY1_25);
                succeeded = (SubResult1_26 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_26;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX2_27)), ((MR_Box) (ArgY2_28)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_30;
                  MR_String ArgX2_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_33;
                  MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_36;
                  MR_Word SubResult1_31;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_33 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_31, ArgX1_29, ArgY1_30);
                    succeeded = (SubResult1_31 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_31;
                    else
                    {
                      MR_Word SubResult2_34;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_34, ArgX2_32, ArgY2_33);
                      succeeded = (SubResult2_34 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_34;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX3_35)), ((MR_Box) (ArgY3_36)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgX1_37 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_38;
                  MR_Word ArgX2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_41;
                  MR_Word SubResult1_39;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_39, ArgX1_37, ArgY1_38);
                    succeeded = (SubResult1_39 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_39;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX2_40)), ((MR_Box) (ArgY2_41)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgX1_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_43;
                  MR_String ArgX2_45 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_46;
                  MR_Word ArgX3_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_49;
                  MR_Word SubResult1_44;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_43 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_46 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_44, ArgX1_42, ArgY1_43);
                    succeeded = (SubResult1_44 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_44;
                    else
                    {
                      MR_Word SubResult2_47;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_47, ArgX2_45, ArgY2_46);
                      succeeded = (SubResult2_47 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_47;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX3_48)), ((MR_Box) (ArgY3_49)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String ArgX1_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_51;
                  MR_Word ArgX2_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_54;
                  MR_Word ArgX3_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_57;
                  MR_Word ArgX4_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_60;
                  MR_Word SubResult1_52;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_51 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_54 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_52, ArgX1_50, ArgY1_51);
                    succeeded = (SubResult1_52 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_52;
                    else
                    {
                      MR_Word SubResult2_55;
                      MR_Integer Var_304 = (MR_Integer) (ArgX2_53);
                      MR_Integer Var_305 = (MR_Integer) (ArgY2_54);

                      succeeded = (Var_304 < Var_305);
                      if (succeeded)
                      {
                        SubResult2_55 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_304 > Var_305);
                        if (succeeded)
                        {
                          SubResult2_55 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_55 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_55;
                      else
                      {
                        MR_Word SubResult3_58;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_58, ((MR_Box) (ArgX3_56)), ((MR_Box) (ArgY3_57)));
                        succeeded = (SubResult3_58 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_58;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX4_59)), ((MR_Box) (ArgY4_60)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String ArgX1_61 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_62;
                  MR_Word ArgX2_64 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_65;
                  MR_Word ArgX3_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_68;
                  MR_Word ArgX4_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_71;
                  MR_Word SubResult1_63;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_62 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_65 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_63, ArgX1_61, ArgY1_62);
                    succeeded = (SubResult1_63 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_63;
                    else
                    {
                      MR_Word SubResult2_66;
                      MR_Integer Var_300 = (MR_Integer) (ArgX2_64);
                      MR_Integer Var_301 = (MR_Integer) (ArgY2_65);

                      succeeded = (Var_300 < Var_301);
                      if (succeeded)
                      {
                        SubResult2_66 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_300 > Var_301);
                        if (succeeded)
                        {
                          SubResult2_66 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_66 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_66;
                      else
                      {
                        MR_Word SubResult3_69;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[1]), &SubResult3_69, ((MR_Box) (ArgX3_67)), ((MR_Box) (ArgY3_68)));
                        succeeded = (SubResult3_69 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_69;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX4_70)), ((MR_Box) (ArgY4_71)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String ArgX1_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_73;
                  MR_Word ArgX2_75 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_76;
                  MR_Word ArgX3_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_79;
                  MR_String ArgX4_81 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_82;
                  MR_Word ArgX5_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_85;
                  MR_Word SubResult1_74;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_73 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_76 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_79 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_82 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_74, ArgX1_72, ArgY1_73);
                    succeeded = (SubResult1_74 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_74;
                    else
                    {
                      MR_Word SubResult2_77;
                      MR_Integer Var_298 = (MR_Integer) (ArgX2_75);
                      MR_Integer Var_299 = (MR_Integer) (ArgY2_76);

                      succeeded = (Var_298 < Var_299);
                      if (succeeded)
                      {
                        SubResult2_77 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_298 > Var_299);
                        if (succeeded)
                        {
                          SubResult2_77 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_77 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_77;
                      else
                      {
                        MR_Word SubResult3_80;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_80, ((MR_Box) (ArgX3_78)), ((MR_Box) (ArgY3_79)));
                        succeeded = (SubResult3_80 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_80;
                        else
                        {
                          MR_Word SubResult4_83;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_83, ArgX4_81, ArgY4_82);
                          succeeded = (SubResult4_83 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_83;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX5_84)), ((MR_Box) (ArgY5_85)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_86 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_87;
                  MR_String ArgX2_89 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_90;
                  MR_String ArgX3_92 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_93;
                  MR_Word ArgX4_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_96;
                  MR_Word SubResult1_88;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_87 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_90 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_93 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_88, ArgX1_86, ArgY1_87);
                    succeeded = (SubResult1_88 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_88;
                    else
                    {
                      MR_Word SubResult2_91;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_91, ArgX2_89, ArgY2_90);
                      succeeded = (SubResult2_91 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_91;
                      else
                      {
                        MR_Word SubResult3_94;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_94, ArgX3_92, ArgY3_93);
                        succeeded = (SubResult3_94 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_94;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX4_95)), ((MR_Box) (ArgY4_96)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_97 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_98;
                  MR_Word ArgX2_100 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_101;
                  MR_Word ArgX3_103 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_104;
                  MR_String ArgX4_106 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_107;
                  MR_Word ArgX5_109 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_110;
                  MR_Word SubResult1_99;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_98 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_101 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_104 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_107 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_110 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_99, ArgX1_97, ArgY1_98);
                    succeeded = (SubResult1_99 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_99;
                    else
                    {
                      MR_Word SubResult2_102;
                      MR_Integer Var_310 = (MR_Integer) (ArgX2_100);
                      MR_Integer Var_311 = (MR_Integer) (ArgY2_101);

                      succeeded = (Var_310 < Var_311);
                      if (succeeded)
                      {
                        SubResult2_102 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_310 > Var_311);
                        if (succeeded)
                        {
                          SubResult2_102 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_102 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_102;
                      else
                      {
                        MR_Word SubResult3_105;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_105, ((MR_Box) (ArgX3_103)), ((MR_Box) (ArgY3_104)));
                        succeeded = (SubResult3_105 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_105;
                        else
                        {
                          MR_Word SubResult4_108;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_108, ArgX4_106, ArgY4_107);
                          succeeded = (SubResult4_108 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_108;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX5_109)), ((MR_Box) (ArgY5_110)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Char ArgX1_111 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_112;
                  MR_String ArgX2_114 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_115;
                  MR_Word ArgX3_117 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 1);
                  MR_Word ArgY3_118;
                  MR_Word ArgX4_120 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_121;
                  MR_String ArgX5_123 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_String ArgY5_124;
                  MR_Word ArgX6_126 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                  MR_Word ArgY6_127;
                  MR_Word SubResult1_113;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_112 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_115 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_118 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))) & (MR_Integer) 1);
                    ArgY4_121 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_124 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    ArgY6_127 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 6))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_113, ArgX1_111, ArgY1_112);
                    succeeded = (SubResult1_113 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_113;
                    else
                    {
                      MR_Word SubResult2_116;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_116, ArgX2_114, ArgY2_115);
                      succeeded = (SubResult2_116 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_116;
                      else
                      {
                        MR_Word SubResult3_119;
                        MR_Integer Var_316 = (MR_Integer) (ArgX3_117);
                        MR_Integer Var_317 = (MR_Integer) (ArgY3_118);

                        succeeded = (Var_316 < Var_317);
                        if (succeeded)
                        {
                          SubResult3_119 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_316 > Var_317);
                          if (succeeded)
                          {
                            SubResult3_119 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_119 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_119;
                        else
                        {
                          MR_Word SubResult4_122;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult4_122, ((MR_Box) (ArgX4_120)), ((MR_Box) (ArgY4_121)));
                          succeeded = (SubResult4_122 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_122;
                          else
                          {
                            MR_Word SubResult5_125;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_125, ArgX5_123, ArgY5_124);
                            succeeded = (SubResult5_125 != (MR_Integer) 0);
                            if (succeeded)
                              CompareResult_6 = SubResult5_125;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX6_126)), ((MR_Box) (ArgY6_127)));
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String ArgX1_128 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_129;
                  MR_Word ArgX2_131 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_132;
                  MR_Word ArgX3_134 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_135;
                  MR_String ArgX4_137 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_138;
                  MR_Word ArgX5_140 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_141;
                  MR_Word SubResult1_130;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_129 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_132 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_135 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_138 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_141 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_130, ArgX1_128, ArgY1_129);
                    succeeded = (SubResult1_130 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_130;
                    else
                    {
                      MR_Word SubResult2_133;
                      MR_Integer Var_302 = (MR_Integer) (ArgX2_131);
                      MR_Integer Var_303 = (MR_Integer) (ArgY2_132);

                      succeeded = (Var_302 < Var_303);
                      if (succeeded)
                      {
                        SubResult2_133 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_302 > Var_303);
                        if (succeeded)
                        {
                          SubResult2_133 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_133 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_133;
                      else
                      {
                        MR_Word SubResult3_136;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_136, ((MR_Box) (ArgX3_134)), ((MR_Box) (ArgY3_135)));
                        succeeded = (SubResult3_136 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_136;
                        else
                        {
                          MR_Word SubResult4_139;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_139, ArgX4_137, ArgY4_138);
                          succeeded = (SubResult4_139 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_139;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX5_140)), ((MR_Box) (ArgY5_141)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String ArgX1_142 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_143;
                  MR_Word ArgX2_145 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_146;
                  MR_Word ArgX3_148 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_149;
                  MR_Word ArgX4_151 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_152;
                  MR_Word SubResult1_144;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_143 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_146 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_149 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_152 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_144, ArgX1_142, ArgY1_143);
                    succeeded = (SubResult1_144 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_144;
                    else
                    {
                      MR_Word SubResult2_147;
                      MR_Integer Var_314 = (MR_Integer) (ArgX2_145);
                      MR_Integer Var_315 = (MR_Integer) (ArgY2_146);

                      succeeded = (Var_314 < Var_315);
                      if (succeeded)
                      {
                        SubResult2_147 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_314 > Var_315);
                        if (succeeded)
                        {
                          SubResult2_147 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_147 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_147;
                      else
                      {
                        MR_Word SubResult3_150;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_150, ((MR_Box) (ArgX3_148)), ((MR_Box) (ArgY3_149)));
                        succeeded = (SubResult3_150 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_150;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX4_151)), ((MR_Box) (ArgY4_152)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String ArgX1_153 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_154;
                  MR_Word ArgX2_156 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_157;
                  MR_Word ArgX3_159 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_160;
                  MR_String ArgX4_162 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_163;
                  MR_Word ArgX5_165 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_166;
                  MR_Word SubResult1_155;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_154 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_157 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_160 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_163 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_166 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_155, ArgX1_153, ArgY1_154);
                    succeeded = (SubResult1_155 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_155;
                    else
                    {
                      MR_Word SubResult2_158;
                      MR_Integer Var_312 = (MR_Integer) (ArgX2_156);
                      MR_Integer Var_313 = (MR_Integer) (ArgY2_157);

                      succeeded = (Var_312 < Var_313);
                      if (succeeded)
                      {
                        SubResult2_158 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_312 > Var_313);
                        if (succeeded)
                        {
                          SubResult2_158 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_158 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_158;
                      else
                      {
                        MR_Word SubResult3_161;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_161, ((MR_Box) (ArgX3_159)), ((MR_Box) (ArgY3_160)));
                        succeeded = (SubResult3_161 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_161;
                        else
                        {
                          MR_Word SubResult4_164;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_164, ArgX4_162, ArgY4_163);
                          succeeded = (SubResult4_164 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_164;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX5_165)), ((MR_Box) (ArgY5_166)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Char ArgX1_167 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_168;
                  MR_String ArgX2_170 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_171;
                  MR_Word ArgX3_173 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_174;
                  MR_Word ArgX4_176 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_177;
                  MR_Word SubResult1_169;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_168 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_171 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_174 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_177 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_169, ArgX1_167, ArgY1_168);
                    succeeded = (SubResult1_169 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_169;
                    else
                    {
                      MR_Word SubResult2_172;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_172, ArgX2_170, ArgY2_171);
                      succeeded = (SubResult2_172 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_172;
                      else
                      {
                        MR_Word SubResult3_175;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_175, ((MR_Box) (ArgX3_173)), ((MR_Box) (ArgY3_174)));
                        succeeded = (SubResult3_175 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_175;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX4_176)), ((MR_Box) (ArgY4_177)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Char ArgX1_178 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_179;
                  MR_String ArgX2_181 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_182;
                  MR_Word ArgX3_184 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_185;
                  MR_Word ArgX4_187 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_188;
                  MR_Word SubResult1_180;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_179 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_182 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_185 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_188 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_180, ArgX1_178, ArgY1_179);
                    succeeded = (SubResult1_180 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_180;
                    else
                    {
                      MR_Word SubResult2_183;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_183, ArgX2_181, ArgY2_182);
                      succeeded = (SubResult2_183 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_183;
                      else
                      {
                        MR_Word SubResult3_186;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_186, ((MR_Box) (ArgX3_184)), ((MR_Box) (ArgY3_185)));
                        succeeded = (SubResult3_186 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_186;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX4_187)), ((MR_Box) (ArgY4_188)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Char ArgX1_189 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_190;
                  MR_String ArgX2_192 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_193;
                  MR_Word ArgX3_195 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_196;
                  MR_String ArgX4_198 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_199;
                  MR_Word ArgX5_201 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_202;
                  MR_Word SubResult1_191;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_190 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_193 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_196 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_199 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_202 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_191, ArgX1_189, ArgY1_190);
                    succeeded = (SubResult1_191 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_191;
                    else
                    {
                      MR_Word SubResult2_194;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_194, ArgX2_192, ArgY2_193);
                      succeeded = (SubResult2_194 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_194;
                      else
                      {
                        MR_Word SubResult3_197;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_197, ((MR_Box) (ArgX3_195)), ((MR_Box) (ArgY3_196)));
                        succeeded = (SubResult3_197 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_197;
                        else
                        {
                          MR_Word SubResult4_200;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_200, ArgX4_198, ArgY4_199);
                          succeeded = (SubResult4_200 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_200;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX5_201)), ((MR_Box) (ArgY5_202)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Char ArgX1_203 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_204;
                  MR_String ArgX2_206 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_207;
                  MR_Word ArgX3_209 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_210;
                  MR_String ArgX4_212 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_213;
                  MR_Word ArgX5_215 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_216;
                  MR_Word SubResult1_205;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_204 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_207 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_210 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_213 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_216 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_205, ArgX1_203, ArgY1_204);
                    succeeded = (SubResult1_205 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_205;
                    else
                    {
                      MR_Word SubResult2_208;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_208, ArgX2_206, ArgY2_207);
                      succeeded = (SubResult2_208 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_208;
                      else
                      {
                        MR_Word SubResult3_211;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult3_211, ((MR_Box) (ArgX3_209)), ((MR_Box) (ArgY3_210)));
                        succeeded = (SubResult3_211 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_211;
                        else
                        {
                          MR_Word SubResult4_214;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_214, ArgX4_212, ArgY4_213);
                          succeeded = (SubResult4_214 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_214;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &CompareResult_6, ((MR_Box) (ArgX5_215)), ((MR_Box) (ArgY5_216)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word TypeInfo_297_297;
                  MR_Word ArgX1_217 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_218;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_218 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_297_297 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    mercury__builtin__compare_3_p_0(TypeInfo_297_297, &CompareResult_6, ((MR_Box) (ArgX1_217)), ((MR_Box) (ArgY1_218)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
libs__print_help____Index____help_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
libs__print_help____Unify____help_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_159 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_160 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_159 == CastY_160);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_157 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_158 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_158 == CastX_157);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_170_170;
          MR_Word TypeInfo_171_171;
          MR_Word TypeInfo_172_172;
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))) & (MR_Integer) 1);
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_Word ArgY4_10;
          MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 4))) & (MR_Integer) 1);
          MR_Word ArgY5_12;
          MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 5))));
          MR_Word ArgY6_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
            ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 4))) & (MR_Integer) 1);
            ArgY6_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 5))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
              {
                TypeInfo_170_170 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                {
                  TypeInfo_171_171 = (MR_Word) (&libs__print_help_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_171_171, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
                  if (succeeded)
                  {
                    succeeded = (ArgX5_11 == ArgY5_12);
                    if (succeeded)
                    {
                      TypeInfo_172_172 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_172_172, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_173_173;
          MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
            if (succeeded)
            {
              TypeInfo_173_173 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_173_173, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_169_169;
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_20;
              MR_String ArgX2_21 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_21, ArgY2_22) == 0);
                  if (succeeded)
                  {
                    TypeInfo_169_169 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_169_169, ((MR_Box) (ArgX3_23)), ((MR_Box) (ArgY3_24)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_182_182;
              MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
                if (succeeded)
                {
                  TypeInfo_182_182 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_182_182, ((MR_Box) (ArgX2_27)), ((MR_Box) (ArgY2_28)));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_181_181;
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_30;
              MR_String ArgX2_31 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_32;
              MR_Word ArgX3_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_31, ArgY2_32) == 0);
                  if (succeeded)
                  {
                    TypeInfo_181_181 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_181_181, ((MR_Box) (ArgX3_33)), ((MR_Box) (ArgY3_34)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_167_167;
              MR_Word TypeInfo_168_168;
              MR_String ArgX1_35 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_36;
              MR_Word ArgX2_37 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_38;
              MR_Word ArgX3_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_40;
              MR_Word ArgX4_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_38 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_35, ArgY1_36) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_37 == ArgY2_38);
                  if (succeeded)
                  {
                    TypeInfo_167_167 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_167_167, ((MR_Box) (ArgX3_39)), ((MR_Box) (ArgY3_40)));
                    if (succeeded)
                    {
                      TypeInfo_168_168 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_168_168, ((MR_Box) (ArgX4_41)), ((MR_Box) (ArgY4_42)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_String ArgX1_43 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_44;
              MR_Word ArgX2_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_46;
              MR_Word ArgX3_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_48;
              MR_Word ArgX4_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_43, ArgY1_44) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_45 == ArgY2_46);
                  if (succeeded)
                  {
                    TypeInfo_163_163 = (MR_Word) (&libs__print_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_163_163, ((MR_Box) (ArgX3_47)), ((MR_Box) (ArgY3_48)));
                    if (succeeded)
                    {
                      TypeInfo_164_164 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_164_164, ((MR_Box) (ArgX4_49)), ((MR_Box) (ArgY4_50)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_161_161;
              MR_Word TypeInfo_162_162;
              MR_String ArgX1_51 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_52;
              MR_Word ArgX2_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_54;
              MR_Word ArgX3_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_56;
              MR_String ArgX4_57 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_58;
              MR_Word ArgX5_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_54 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (strcmp(ArgX1_51, ArgY1_52) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_53 == ArgY2_54);
                  if (succeeded)
                  {
                    TypeInfo_161_161 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_161_161, ((MR_Box) (ArgX3_55)), ((MR_Box) (ArgY3_56)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_57, ArgY4_58) == 0);
                      if (succeeded)
                      {
                        TypeInfo_162_162 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_162_162, ((MR_Box) (ArgX5_59)), ((MR_Box) (ArgY5_60)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeInfo_174_174;
              MR_String ArgX1_61 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_62;
              MR_String ArgX2_63 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_64;
              MR_String ArgX3_65 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_66;
              MR_Word ArgX4_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_61, ArgY1_62) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_63, ArgY2_64) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_65, ArgY3_66) == 0);
                    if (succeeded)
                    {
                      TypeInfo_174_174 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_174_174, ((MR_Box) (ArgX4_67)), ((MR_Box) (ArgY4_68)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_175_175;
              MR_Word TypeInfo_176_176;
              MR_String ArgX1_69 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_70;
              MR_Word ArgX2_71 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_72;
              MR_Word ArgX3_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_74;
              MR_String ArgX4_75 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_76;
              MR_Word ArgX5_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_72 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (strcmp(ArgX1_69, ArgY1_70) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_71 == ArgY2_72);
                  if (succeeded)
                  {
                    TypeInfo_175_175 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_175_175, ((MR_Box) (ArgX3_73)), ((MR_Box) (ArgY3_74)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_75, ArgY4_76) == 0);
                      if (succeeded)
                      {
                        TypeInfo_176_176 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_176_176, ((MR_Box) (ArgX5_77)), ((MR_Box) (ArgY5_78)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_187_187;
              MR_Word TypeInfo_188_188;
              MR_Char ArgX1_79 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_80;
              MR_String ArgX2_81 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_82;
              MR_Word ArgX3_83 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))) & (MR_Integer) 1);
              MR_Word ArgY3_84;
              MR_Word ArgX4_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_86;
              MR_String ArgX5_87 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_String ArgY5_88;
              MR_Word ArgX6_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Word ArgY6_90;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_82 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_84 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 1);
                ArgY4_86 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_88 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 5))));
                ArgY6_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                succeeded = (ArgX1_79 == ArgY1_80);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_81, ArgY2_82) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_83 == ArgY3_84);
                    if (succeeded)
                    {
                      TypeInfo_187_187 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_187_187, ((MR_Box) (ArgX4_85)), ((MR_Box) (ArgY4_86)));
                      if (succeeded)
                      {
                        succeeded = (strcmp(ArgX5_87, ArgY5_88) == 0);
                        if (succeeded)
                        {
                          TypeInfo_188_188 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_188_188, ((MR_Box) (ArgX6_89)), ((MR_Box) (ArgY6_90)));
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TypeInfo_165_165;
              MR_Word TypeInfo_166_166;
              MR_String ArgX1_91 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_92;
              MR_Word ArgX2_93 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_94;
              MR_Word ArgX3_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_96;
              MR_String ArgX4_97 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_98;
              MR_Word ArgX5_99 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_100;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_92 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_94 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_98 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_100 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (strcmp(ArgX1_91, ArgY1_92) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_93 == ArgY2_94);
                  if (succeeded)
                  {
                    TypeInfo_165_165 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_165_165, ((MR_Box) (ArgX3_95)), ((MR_Box) (ArgY3_96)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_97, ArgY4_98) == 0);
                      if (succeeded)
                      {
                        TypeInfo_166_166 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_166_166, ((MR_Box) (ArgX5_99)), ((MR_Box) (ArgY5_100)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word TypeInfo_179_179;
              MR_Word TypeInfo_180_180;
              MR_String ArgX1_101 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_102;
              MR_Word ArgX2_103 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_104;
              MR_Word ArgX3_105 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_106;
              MR_Word ArgX4_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_108;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_102 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_104 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_106 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_101, ArgY1_102) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_103 == ArgY2_104);
                  if (succeeded)
                  {
                    TypeInfo_179_179 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_179_179, ((MR_Box) (ArgX3_105)), ((MR_Box) (ArgY3_106)));
                    if (succeeded)
                    {
                      TypeInfo_180_180 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_180_180, ((MR_Box) (ArgX4_107)), ((MR_Box) (ArgY4_108)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_177_177;
              MR_Word TypeInfo_178_178;
              MR_String ArgX1_109 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_110;
              MR_Word ArgX2_111 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_112;
              MR_Word ArgX3_113 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_114;
              MR_String ArgX4_115 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_116;
              MR_Word ArgX5_117 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_118;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_110 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_112 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_114 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_116 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_118 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (strcmp(ArgX1_109, ArgY1_110) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_111 == ArgY2_112);
                  if (succeeded)
                  {
                    TypeInfo_177_177 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_177_177, ((MR_Box) (ArgX3_113)), ((MR_Box) (ArgY3_114)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_115, ArgY4_116) == 0);
                      if (succeeded)
                      {
                        TypeInfo_178_178 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_178_178, ((MR_Box) (ArgX5_117)), ((MR_Box) (ArgY5_118)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TypeInfo_191_191;
              MR_Word TypeInfo_192_192;
              MR_Char ArgX1_119 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_120;
              MR_String ArgX2_121 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_122;
              MR_Word ArgX3_123 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_124;
              MR_Word ArgX4_125 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_126;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_120 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_122 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_124 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_126 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_119 == ArgY1_120);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_121, ArgY2_122) == 0);
                  if (succeeded)
                  {
                    TypeInfo_191_191 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_191_191, ((MR_Box) (ArgX3_123)), ((MR_Box) (ArgY3_124)));
                    if (succeeded)
                    {
                      TypeInfo_192_192 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_192_192, ((MR_Box) (ArgX4_125)), ((MR_Box) (ArgY4_126)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word TypeInfo_185_185;
              MR_Word TypeInfo_186_186;
              MR_Char ArgX1_127 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_128;
              MR_String ArgX2_129 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_130;
              MR_Word ArgX3_131 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_132;
              MR_Word ArgX4_133 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_134;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_128 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_130 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_132 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_134 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_127 == ArgY1_128);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_129, ArgY2_130) == 0);
                  if (succeeded)
                  {
                    TypeInfo_185_185 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_185_185, ((MR_Box) (ArgX3_131)), ((MR_Box) (ArgY3_132)));
                    if (succeeded)
                    {
                      TypeInfo_186_186 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_186_186, ((MR_Box) (ArgX4_133)), ((MR_Box) (ArgY4_134)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word TypeInfo_189_189;
              MR_Word TypeInfo_190_190;
              MR_Char ArgX1_135 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_136;
              MR_String ArgX2_137 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_138;
              MR_Word ArgX3_139 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_140;
              MR_String ArgX4_141 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_142;
              MR_Word ArgX5_143 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_144;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_136 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_138 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_140 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_142 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_144 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (ArgX1_135 == ArgY1_136);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_137, ArgY2_138) == 0);
                  if (succeeded)
                  {
                    TypeInfo_189_189 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_189_189, ((MR_Box) (ArgX3_139)), ((MR_Box) (ArgY3_140)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_141, ArgY4_142) == 0);
                      if (succeeded)
                      {
                        TypeInfo_190_190 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_190_190, ((MR_Box) (ArgX5_143)), ((MR_Box) (ArgY5_144)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_183_183;
              MR_Word TypeInfo_184_184;
              MR_Char ArgX1_145 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_146;
              MR_String ArgX2_147 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_148;
              MR_Word ArgX3_149 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_150;
              MR_String ArgX4_151 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_152;
              MR_Word ArgX5_153 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_154;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_146 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_148 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_150 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_152 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_154 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (ArgX1_145 == ArgY1_146);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_147, ArgY2_148) == 0);
                  if (succeeded)
                  {
                    TypeInfo_183_183 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_183_183, ((MR_Box) (ArgX3_149)), ((MR_Box) (ArgY3_150)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_151, ArgY4_152) == 0);
                      if (succeeded)
                      {
                        TypeInfo_184_184 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_184_184, ((MR_Box) (ArgX5_153)), ((MR_Box) (ArgY5_154)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word TypeInfo_193_193;
              MR_Word ArgX1_155 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_156;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_156 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_193_193 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_193_193, ((MR_Box) (ArgX1_155)), ((MR_Box) (ArgY1_156)));
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__print_help____Compare____arg_align_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
libs__print_help____Unify____arg_align_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

void MR_CALL 
libs__print_help____Compare____alt_name_pos_0_0(
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
libs__print_help____Unify____alt_name_pos_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help____Unify____alt_name_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____alt_name_pos_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____alt_name_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____alt_name_pos_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____arg_align_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____arg_align_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____arg_align_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____arg_align_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____help_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____help_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_public_or_private_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____help_public_or_private_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_public_or_private_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____help_public_or_private_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____print_what_help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____print_what_help_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____print_what_help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____print_what_help_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__print_help__init(void)
{
}

void mercury__libs__print_help__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_alt_name_pos_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_arg_align_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_help_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_help_public_or_private_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_print_what_help_0);
}

void mercury__libs__print_help__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__print_help__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.print_help.
