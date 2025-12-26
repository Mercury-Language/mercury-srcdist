/*
** Automatically generated from `optdb_help.m'
** by the Mercury compiler,
** version rotd-2025-12-26
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


// :- module libs.optdb_help.
// :- implementation.

/*
INIT mercury__libs__optdb_help__init
ENDINIT
*/

#include "libs.optdb_help.mih"


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




static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_arg_align_0_0[3];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_arg_align_0_0[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_arg_align_0_0;

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_arg_align_0_0[1];

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_arg_align_0[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_arg_align_0[1];

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_arg_align_0[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_0;

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1builtin__type_ctor_info_character_0;

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_1[5];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_1[5];

static const MR_DuArgLocn libs__optdb_help__libs__optdb_help__field_locns_help_0_1[5];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_1;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_2[2];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_2[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_2;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_3[3];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_3[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_3;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_4[2];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_4[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_4;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_5[3];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_5[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_5;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_6[3];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_6[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_6;

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_arg_align_0;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_7[3];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_7[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_7;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_8[5];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_8[5];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_8;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_9[6];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_9[6];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_9;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_10[5];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_10[5];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_10;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_11[6];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_11[6];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_11;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_12[4];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_12[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_12;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_13[3];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_13[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_13;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_14[4];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_14[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_14;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_15[4];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_15[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_15;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_16[4];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_16[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_16;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_17[5];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_17[5];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_17;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_18[5];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_18[5];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_18;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_19[1];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_19[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_19;

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_0[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_1[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_2[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_3[17];

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_0[4];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_help_0[20];

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_0[20];

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_0[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_0;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_1[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_1;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_2[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_3[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_3;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_4[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_4;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_5[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_5;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_6[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_6;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_7[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_7;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_8[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_8;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_9[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_9;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_10[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_10;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_11[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_11;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_12[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_12;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_13[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_13;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_14[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_14;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_15[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_15;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_16[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_16;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_17[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_17;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_18[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_18;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_19[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_19;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_20[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_20;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_21[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_21;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_22[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_22;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_23[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_23;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_24[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_24;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_25[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_25;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_26[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_27[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_27;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_28[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_28;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_29[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_29;

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_30;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_31[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_31;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_32[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_32;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_33[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_33;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_34[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_34;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_35[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_35;

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_0[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_1[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_2[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_3[33];

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_piece_0[4];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_help_piece_0[36];

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_piece_0[36];

static const MR_EnumFunctorDesc libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_0;

static const MR_EnumFunctorDesc libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_1;

static const MR_EnumFunctorDescPtr libs__optdb_help__libs__optdb_help__enum_ordinal_ordered_help_public_or_private_0[2];

static const MR_EnumFunctorDescPtr libs__optdb_help__libs__optdb_help__enum_name_ordered_help_public_or_private_0[2];

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_public_or_private_0[2];

static MR_bool MR_CALL 
libs__optdb_help____Unify____arg_align_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__optdb_help____Compare____arg_align_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__optdb_help____Compare____help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_piece_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__optdb_help____Compare____help_piece_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_public_or_private_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__optdb_help____Compare____help_public_or_private_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_text_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__optdb_help____Compare____help_text_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__optdb_help_scalar_common_1[4][2];




static /* final */ const MR_Box libs__optdb_help_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__optdb_help__libs__optdb_help__type_ctor_info_help_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};





static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_arg_align_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_arg_align_0_0[3] = {
  (MR_String) "aa_arg_name",
  (MR_String) "aa_aligned_help_text",
  (MR_String) "aa_aligned_texinfo"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_arg_align_0_0 = {
  (MR_String) "arg_align",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__optdb_help__libs__optdb_help__field_types_arg_align_0_0,
  libs__optdb_help__libs__optdb_help__field_names_arg_align_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_arg_align_0_0[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_arg_align_0_0 };

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_arg_align_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_arg_align_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_arg_align_0[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_arg_align_0_0 };

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_arg_align_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__optdb_help____Unify____arg_align_0_0_10001)),
  ((MR_Box) (libs__optdb_help____Compare____arg_align_0_0_10001)),
  (MR_String) "libs.optdb_help",
  (MR_String) "arg_align",
  { libs__optdb_help__libs__optdb_help__du_name_ordered_arg_align_0 },
  { libs__optdb_help__libs__optdb_help__du_ptag_ordered_arg_align_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__optdb_help__libs__optdb_help__functor_number_map_arg_align_0,

};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_0 = {
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

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__optdb_help__libs__optdb_help__type_ctor_info_help_piece_0) }
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_1[5] = {
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__libs__optdb_help__type_ctor_info_help_public_or_private_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_1[5] = {
  (MR_String) "gh_short_names",
  (MR_String) "gh_long_name",
  (MR_String) "gh_alt_long_names",
  (MR_String) "gh_public_or_private",
  (MR_String) "gh_description"
};

static const MR_DuArgLocn libs__optdb_help__libs__optdb_help__field_locns_help_0_1[5] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_1 = {
  (MR_String) "gen_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__optdb_help__libs__optdb_help__field_types_help_0_1,
  libs__optdb_help__libs__optdb_help__field_names_help_0_1,
  libs__optdb_help__libs__optdb_help__field_locns_help_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_2[2] = {
  (MR_String) "h_long_name",
  (MR_String) "h_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_2 = {
  (MR_String) "help",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  libs__optdb_help__libs__optdb_help__field_types_help_0_2,
  libs__optdb_help__libs__optdb_help__field_names_help_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_3[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_3[3] = {
  (MR_String) "hr_long_name",
  (MR_String) "hr_arg_name",
  (MR_String) "hr_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_3 = {
  (MR_String) "arg_help",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  libs__optdb_help__libs__optdb_help__field_types_help_0_3,
  libs__optdb_help__libs__optdb_help__field_names_help_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_4[2] = {
  (MR_String) "ph_long_name",
  (MR_String) "ph_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_4 = {
  (MR_String) "priv_help",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  libs__optdb_help__libs__optdb_help__field_types_help_0_4,
  libs__optdb_help__libs__optdb_help__field_names_help_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_5[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_5[3] = {
  (MR_String) "prh_long_name",
  (MR_String) "prh_arg_name",
  (MR_String) "prh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_5 = {
  (MR_String) "priv_arg_help",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  libs__optdb_help__libs__optdb_help__field_types_help_0_5,
  libs__optdb_help__libs__optdb_help__field_names_help_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_6[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_6[3] = {
  (MR_String) "ah_long_name",
  (MR_String) "ah_alt_long_names",
  (MR_String) "ah_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_6 = {
  (MR_String) "alt_help",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  libs__optdb_help__libs__optdb_help__field_types_help_0_6,
  libs__optdb_help__libs__optdb_help__field_names_help_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_arg_align_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0) }
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_7[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_arg_align_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_7[3] = {
  (MR_String) "arlh_long_name",
  (MR_String) "arlh_arg_aligns",
  (MR_String) "arlh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_7 = {
  (MR_String) "alt_arg_align_help",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  libs__optdb_help__libs__optdb_help__field_types_help_0_7,
  libs__optdb_help__libs__optdb_help__field_names_help_0_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_8[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_8[5] = {
  (MR_String) "alh_long_name",
  (MR_String) "alh_alt_long_names",
  (MR_String) "alh_aligned_help_text",
  (MR_String) "alh_aligned_texinfo",
  (MR_String) "alh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_8 = {
  (MR_String) "alt_align_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  libs__optdb_help__libs__optdb_help__field_types_help_0_8,
  libs__optdb_help__libs__optdb_help__field_names_help_0_8,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_9[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_9[6] = {
  (MR_String) "nlh_long_name",
  (MR_String) "nlh_aligned_help_text",
  (MR_String) "alh_no_aligned_help_text",
  (MR_String) "nlh_aligned_texinfo",
  (MR_String) "alh_no_aligned_texinfo",
  (MR_String) "nlh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_9 = {
  (MR_String) "no_align_help",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  libs__optdb_help__libs__optdb_help__field_types_help_0_9,
  libs__optdb_help__libs__optdb_help__field_names_help_0_9,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_10[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_10[5] = {
  (MR_String) "palh_long_name",
  (MR_String) "palh_alt_long_names",
  (MR_String) "palh_aligned_help_text",
  (MR_String) "palh_aligned_texinfo",
  (MR_String) "palh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_10 = {
  (MR_String) "priv_alt_align_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  libs__optdb_help__libs__optdb_help__field_types_help_0_10,
  libs__optdb_help__libs__optdb_help__field_names_help_0_10,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_11[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_11[6] = {
  (MR_String) "salh_short_name",
  (MR_String) "salh_long_name",
  (MR_String) "salh_alt_long_names",
  (MR_String) "salh_aligned_help_text",
  (MR_String) "salh_aligned_texinfo",
  (MR_String) "salh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_11 = {
  (MR_String) "short_alt_align_help",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  libs__optdb_help__libs__optdb_help__field_types_help_0_11,
  libs__optdb_help__libs__optdb_help__field_names_help_0_11,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_12[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_12[4] = {
  (MR_String) "aah_long_name",
  (MR_String) "aah_alt_long_names",
  (MR_String) "aah_arg_name",
  (MR_String) "aah_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_12 = {
  (MR_String) "alt_arg_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  libs__optdb_help__libs__optdb_help__field_types_help_0_12,
  libs__optdb_help__libs__optdb_help__field_names_help_0_12,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_13[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_13[3] = {
  (MR_String) "pah_long_name",
  (MR_String) "pah_alt_long_names",
  (MR_String) "pah_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_13 = {
  (MR_String) "priv_alt_help",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  libs__optdb_help__libs__optdb_help__field_types_help_0_13,
  libs__optdb_help__libs__optdb_help__field_names_help_0_13,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_14[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_14[4] = {
  (MR_String) "paah_long_name",
  (MR_String) "paah_alt_long_names",
  (MR_String) "paah_arg_name",
  (MR_String) "paah_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_14 = {
  (MR_String) "priv_alt_arg_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  libs__optdb_help__libs__optdb_help__field_types_help_0_14,
  libs__optdb_help__libs__optdb_help__field_names_help_0_14,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_15[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_15[4] = {
  (MR_String) "sh_short_name",
  (MR_String) "sh_long_name",
  (MR_String) "sh_alt_long_names",
  (MR_String) "sh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_15 = {
  (MR_String) "short_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  libs__optdb_help__libs__optdb_help__field_types_help_0_15,
  libs__optdb_help__libs__optdb_help__field_names_help_0_15,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_16[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_16[4] = {
  (MR_String) "psh_short_name",
  (MR_String) "psh_long_name",
  (MR_String) "psh_alt_long_names",
  (MR_String) "psh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_16 = {
  (MR_String) "priv_short_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  libs__optdb_help__libs__optdb_help__field_types_help_0_16,
  libs__optdb_help__libs__optdb_help__field_names_help_0_16,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_17[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_17[5] = {
  (MR_String) "sah_short_name",
  (MR_String) "sah_long_name",
  (MR_String) "sah_alt_long_names",
  (MR_String) "sah_arg_name",
  (MR_String) "sah_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_17 = {
  (MR_String) "short_arg_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  libs__optdb_help__libs__optdb_help__field_types_help_0_17,
  libs__optdb_help__libs__optdb_help__field_names_help_0_17,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_18[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_18[5] = {
  (MR_String) "psah_short_name",
  (MR_String) "psah_long_name",
  (MR_String) "psah_alt_long_names",
  (MR_String) "psah_arg_name",
  (MR_String) "psah_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_18 = {
  (MR_String) "priv_short_arg_help",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(18),
  libs__optdb_help__libs__optdb_help__field_types_help_0_18,
  libs__optdb_help__libs__optdb_help__field_names_help_0_18,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_19[1] = { (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0) };

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_19[1] = { (MR_String) "uh_description" };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_19 = {
  (MR_String) "unnamed_help",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(19),
  libs__optdb_help__libs__optdb_help__field_types_help_0_19,
  libs__optdb_help__libs__optdb_help__field_names_help_0_19,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_0[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_0 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_1[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_1 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_2[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_2 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_3[17] = {
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_3,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_4,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_5,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_6,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_7,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_8,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_9,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_10,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_11,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_12,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_13,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_14,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_15,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_16,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_17,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_18,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_19
};

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(17),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_help_0[20] = {
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_8,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_7,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_12,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_6,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_3,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_1,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_2,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_9,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_0,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_10,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_14,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_13,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_5,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_4,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_18,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_16,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_11,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_17,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_15,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_19
};

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_0[20] = {
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 13,
  (MR_Integer) 12,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 16,
  (MR_Integer) 2,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 18,
  (MR_Integer) 15,
  (MR_Integer) 17,
  (MR_Integer) 14,
  (MR_Integer) 19
};

const MR_TypeCtorInfo_Struct libs__optdb_help__libs__optdb_help__type_ctor_info_help_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__optdb_help____Unify____help_0_0_10001)),
  ((MR_Box) (libs__optdb_help____Compare____help_0_0_10001)),
  (MR_String) "libs.optdb_help",
  (MR_String) "help",
  { libs__optdb_help__libs__optdb_help__du_name_ordered_help_0 },
  { libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_0 },
  (MR_Integer) 20,
  UINT16_C(12),
  libs__optdb_help__libs__optdb_help__functor_number_map_help_0,

};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_0 = {
  (MR_String) "w",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_1 = {
  (MR_String) "fixed",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2 = {
  (MR_String) "opt",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_3 = {
  (MR_String) "opt",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_4 = {
  (MR_String) "arg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_5 = {
  (MR_String) "arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_6[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_6 = {
  (MR_String) "bare_arg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_7[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_7 = {
  (MR_String) "bare_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_8[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_8 = {
  (MR_String) "opt_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(8),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_9[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_9 = {
  (MR_String) "opt_arg",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(9),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_10[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_10 = {
  (MR_String) "quote",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(10),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_11[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_11 = {
  (MR_String) "quote",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(11),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_12[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_12 = {
  (MR_String) "ref",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(12),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_13[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_13 = {
  (MR_String) "ref",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(13),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_14[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_14 = {
  (MR_String) "xref",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(14),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_15[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_15 = {
  (MR_String) "xref",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(15),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_16[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_16 = {
  (MR_String) "samp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(16),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_17[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_17 = {
  (MR_String) "samp",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(17),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_18[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_18 = {
  (MR_String) "emph",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(18),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_19[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_19 = {
  (MR_String) "emph",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 17,
  INT32_C(19),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_19,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_20[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_20 = {
  (MR_String) "env",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 18,
  INT32_C(20),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_20,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_21[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_21 = {
  (MR_String) "env",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 19,
  INT32_C(21),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_21,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_22[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_22 = {
  (MR_String) "code",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 20,
  INT32_C(22),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_22,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_23[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_23 = {
  (MR_String) "code",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 21,
  INT32_C(23),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_23,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_24[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_24 = {
  (MR_String) "file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 22,
  INT32_C(24),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_24,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_25[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_25 = {
  (MR_String) "file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 23,
  INT32_C(25),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_25,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_26[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26 = {
  (MR_String) "var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 24,
  INT32_C(26),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_26,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_27[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_27 = {
  (MR_String) "var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 25,
  INT32_C(27),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_27,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_28[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_28 = {
  (MR_String) "file_var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 26,
  INT32_C(28),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_28,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_29[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_29 = {
  (MR_String) "file_var",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 27,
  INT32_C(29),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_29,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_30 = {
  (MR_String) "blank_line",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(30),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_31[1] = { (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_31 = {
  (MR_String) "help_text_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 28,
  INT32_C(31),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_31,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_32[1] = { (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_32 = {
  (MR_String) "texinfo_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 29,
  INT32_C(32),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_32,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_33[2] = {
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_33 = {
  (MR_String) "help_text_texinfo",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 30,
  INT32_C(33),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_33,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_34[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_34 = {
  (MR_String) "cindex",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 31,
  INT32_C(34),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_34,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_35[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_35 = {
  (MR_String) "findex",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 32,
  INT32_C(35),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_35,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_0[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_30 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_1[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_0 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_2[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_1 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_3[33] = {
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_3,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_4,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_5,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_6,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_7,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_8,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_9,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_10,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_11,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_12,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_13,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_14,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_15,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_16,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_17,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_18,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_19,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_20,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_21,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_22,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_23,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_24,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_25,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_27,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_28,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_29,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_31,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_32,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_33,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_34,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_35
};

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_piece_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(33),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_help_piece_0[36] = {
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_4,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_5,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_6,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_7,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_30,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_34,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_22,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_23,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_18,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_19,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_20,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_21,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_24,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_25,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_28,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_29,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_35,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_1,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_31,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_33,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_3,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_8,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_9,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_10,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_11,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_12,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_13,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_16,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_17,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_32,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_27,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_0,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_14,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_15
};

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_piece_0[36] = {
  (MR_Integer) 33,
  (MR_Integer) 17,
  (MR_Integer) 20,
  (MR_Integer) 21,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 22,
  (MR_Integer) 23,
  (MR_Integer) 24,
  (MR_Integer) 25,
  (MR_Integer) 26,
  (MR_Integer) 27,
  (MR_Integer) 34,
  (MR_Integer) 35,
  (MR_Integer) 28,
  (MR_Integer) 29,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 31,
  (MR_Integer) 32,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 4,
  (MR_Integer) 18,
  (MR_Integer) 30,
  (MR_Integer) 19,
  (MR_Integer) 5,
  (MR_Integer) 16
};

const MR_TypeCtorInfo_Struct libs__optdb_help__libs__optdb_help__type_ctor_info_help_piece_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__optdb_help____Unify____help_piece_0_0_10001)),
  ((MR_Box) (libs__optdb_help____Compare____help_piece_0_0_10001)),
  (MR_String) "libs.optdb_help",
  (MR_String) "help_piece",
  { libs__optdb_help__libs__optdb_help__du_name_ordered_help_piece_0 },
  { libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_piece_0 },
  (MR_Integer) 36,
  UINT16_C(12),
  libs__optdb_help__libs__optdb_help__functor_number_map_help_piece_0,

};

static const MR_EnumFunctorDesc libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_0 = {
  (MR_String) "help_public",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_1 = {
  (MR_String) "help_private",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__optdb_help__libs__optdb_help__enum_ordinal_ordered_help_public_or_private_0[2] = {
  &libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_0,
  &libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_1
};

static const MR_EnumFunctorDescPtr libs__optdb_help__libs__optdb_help__enum_name_ordered_help_public_or_private_0[2] = {
  &libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_1,
  &libs__optdb_help__libs__optdb_help__enum_functor_desc_help_public_or_private_0_0
};

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_public_or_private_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__optdb_help__libs__optdb_help__type_ctor_info_help_public_or_private_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__optdb_help____Unify____help_public_or_private_0_0_10001)),
  ((MR_Box) (libs__optdb_help____Compare____help_public_or_private_0_0_10001)),
  (MR_String) "libs.optdb_help",
  (MR_String) "help_public_or_private",
  { libs__optdb_help__libs__optdb_help__enum_name_ordered_help_public_or_private_0 },
  { libs__optdb_help__libs__optdb_help__enum_ordinal_ordered_help_public_or_private_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__optdb_help__libs__optdb_help__functor_number_map_help_public_or_private_0,

};

const MR_TypeCtorInfo_Struct libs__optdb_help__libs__optdb_help__type_ctor_info_help_text_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__optdb_help____Unify____help_text_0_0_10001)),
  ((MR_Box) (libs__optdb_help____Compare____help_text_0_0_10001)),
  (MR_String) "libs.optdb_help",
  (MR_String) "help_text",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
libs__optdb_help____Compare____help_text_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__optdb_help____Unify____help_text_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__optdb_help____Compare____help_public_or_private_0_0(
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
libs__optdb_help____Unify____help_public_or_private_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__optdb_help____Compare____help_piece_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_146 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_147 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_146 == CastY_147);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    libs__optdb_help____Index____help_piece_0_0(HeadVar__2_2, &IndexX_4);
    libs__optdb_help____Index____help_piece_0_0(HeadVar__3_3, &IndexY_5);
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

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_7, ArgY1_8);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_10;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_9, ArgY1_10);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_12;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_12 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_11, ArgY1_12);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_14;
                  MR_String ArgX2_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_17;
                  MR_Word SubResult1_15;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_17 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_15, ArgX1_13, ArgY1_14);
                    succeeded = (SubResult1_15 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_15;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_16, ArgY2_17);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgX1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_19;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_18, ArgY1_19);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String ArgX1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_21;
                  MR_String ArgX2_23 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_24;
                  MR_Word SubResult1_22;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_24 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_22, ArgX1_20, ArgY1_21);
                    succeeded = (SubResult1_22 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_22;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_23, ArgY2_24);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_26;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_25, ArgY1_26);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String ArgX1_27 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_28;
                  MR_String ArgX2_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_31;
                  MR_Word SubResult1_29;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_28 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_31 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_29, ArgX1_27, ArgY1_28);
                    succeeded = (SubResult1_29 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_29;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_30, ArgY2_31);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_33;
                  MR_String ArgX2_35 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_36;
                  MR_Word SubResult1_34;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_33 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_36 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_34, ArgX1_32, ArgY1_33);
                    succeeded = (SubResult1_34 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_34;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_35, ArgY2_36);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_37 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_38;
                  MR_String ArgX2_40 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_41;
                  MR_String ArgX3_43 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_44;
                  MR_Word SubResult1_39;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_41 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_44 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_39, ArgX1_37, ArgY1_38);
                    succeeded = (SubResult1_39 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_39;
                    else
                    {
                      MR_Word SubResult2_42;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_42, ArgX2_40, ArgY2_41);
                      succeeded = (SubResult2_42 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_42;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_43, ArgY3_44);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_String ArgX1_45 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_46;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_46 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_45, ArgY1_46);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String ArgX1_47 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_48;
                  MR_String ArgX2_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_51;
                  MR_Word SubResult1_49;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_51 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_49, ArgX1_47, ArgY1_48);
                    succeeded = (SubResult1_49 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_49;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_50, ArgY2_51);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String ArgX1_52 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_53;
                  MR_String ArgX2_55 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_56;
                  MR_String ArgX3_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_59;
                  MR_Word SubResult1_54;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_53 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_56 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_59 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_54, ArgX1_52, ArgY1_53);
                    succeeded = (SubResult1_54 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_54;
                    else
                    {
                      MR_Word SubResult2_57;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_57, ArgX2_55, ArgY2_56);
                      succeeded = (SubResult2_57 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_57;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_58, ArgY3_59);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String ArgX1_60 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_61;
                  MR_String ArgX2_63 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_64;
                  MR_String ArgX3_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_67;
                  MR_String ArgX4_69 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_70;
                  MR_Word SubResult1_62;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_61 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_64 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_67 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_70 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_62, ArgX1_60, ArgY1_61);
                    succeeded = (SubResult1_62 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_62;
                    else
                    {
                      MR_Word SubResult2_65;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_65, ArgX2_63, ArgY2_64);
                      succeeded = (SubResult2_65 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_65;
                      else
                      {
                        MR_Word SubResult3_68;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_68, ArgX3_66, ArgY3_67);
                        succeeded = (SubResult3_68 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_68;
                        else
                          mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX4_69, ArgY4_70);
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_String ArgX1_71 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_72;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_72 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_71, ArgY1_72);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_String ArgX1_73 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_74;
                  MR_String ArgX2_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_77;
                  MR_Word SubResult1_75;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_74 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_77 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_75, ArgX1_73, ArgY1_74);
                    succeeded = (SubResult1_75 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_75;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_76, ArgY2_77);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_String ArgX1_78 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_79;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_79 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_78, ArgY1_79);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_String ArgX1_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_81;
                  MR_String ArgX2_83 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_84;
                  MR_Word SubResult1_82;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_81 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_84 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_82, ArgX1_80, ArgY1_81);
                    succeeded = (SubResult1_82 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_82;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_83, ArgY2_84);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_String ArgX1_85 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_86;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_86 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_85, ArgY1_86);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_String ArgX1_87 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_88;
                  MR_String ArgX2_90 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_91;
                  MR_Word SubResult1_89;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 17)));
                  if (succeeded)
                  {
                    ArgY1_88 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_91 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_89, ArgX1_87, ArgY1_88);
                    succeeded = (SubResult1_89 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_89;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_90, ArgY2_91);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_String ArgX1_92 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_93;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 18)));
                  if (succeeded)
                  {
                    ArgY1_93 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_92, ArgY1_93);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_String ArgX1_94 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_95;
                  MR_String ArgX2_97 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_98;
                  MR_Word SubResult1_96;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 19)));
                  if (succeeded)
                  {
                    ArgY1_95 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_98 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_96, ArgX1_94, ArgY1_95);
                    succeeded = (SubResult1_96 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_96;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_97, ArgY2_98);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 20:
                {
                  MR_String ArgX1_99 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_100;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                    ArgY1_100 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_99, ArgY1_100);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 21:
                {
                  MR_String ArgX1_101 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_102;
                  MR_String ArgX2_104 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_105;
                  MR_Word SubResult1_103;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 21)));
                  if (succeeded)
                  {
                    ArgY1_102 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_105 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_103, ArgX1_101, ArgY1_102);
                    succeeded = (SubResult1_103 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_103;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_104, ArgY2_105);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 22:
                {
                  MR_String ArgX1_106 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_107;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 22)));
                  if (succeeded)
                  {
                    ArgY1_107 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_106, ArgY1_107);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 23:
                {
                  MR_String ArgX1_108 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_109;
                  MR_String ArgX2_111 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_112;
                  MR_Word SubResult1_110;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 23)));
                  if (succeeded)
                  {
                    ArgY1_109 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_112 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_110, ArgX1_108, ArgY1_109);
                    succeeded = (SubResult1_110 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_110;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_111, ArgY2_112);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 24:
                {
                  MR_String ArgX1_113 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_114;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 24)));
                  if (succeeded)
                  {
                    ArgY1_114 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_113, ArgY1_114);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 25:
                {
                  MR_String ArgX1_115 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_116;
                  MR_String ArgX2_118 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_119;
                  MR_Word SubResult1_117;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 25)));
                  if (succeeded)
                  {
                    ArgY1_116 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_119 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_117, ArgX1_115, ArgY1_116);
                    succeeded = (SubResult1_117 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_117;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_118, ArgY2_119);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 26:
                {
                  MR_String ArgX1_120 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_121;
                  MR_String ArgX2_123 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_124;
                  MR_Word SubResult1_122;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 26)));
                  if (succeeded)
                  {
                    ArgY1_121 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_124 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_122, ArgX1_120, ArgY1_121);
                    succeeded = (SubResult1_122 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_122;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_123, ArgY2_124);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 27:
                {
                  MR_String ArgX1_125 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_126;
                  MR_String ArgX2_128 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_129;
                  MR_String ArgX3_131 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_132;
                  MR_Word SubResult1_127;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 27)));
                  if (succeeded)
                  {
                    ArgY1_126 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_129 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_132 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_127, ArgX1_125, ArgY1_126);
                    succeeded = (SubResult1_127 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_127;
                    else
                    {
                      MR_Word SubResult2_130;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_130, ArgX2_128, ArgY2_129);
                      succeeded = (SubResult2_130 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_130;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_131, ArgY3_132);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 28:
                {
                  MR_Word TypeInfo_174_174;
                  MR_Word ArgX1_133 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_134;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 28)));
                  if (succeeded)
                  {
                    ArgY1_134 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_174_174 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_174_174, &CompareResult_6, ((MR_Box) (ArgX1_133)), ((MR_Box) (ArgY1_134)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 29:
                {
                  MR_Word TypeInfo_198_198;
                  MR_Word ArgX1_135 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_136;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 29)));
                  if (succeeded)
                  {
                    ArgY1_136 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_198_198 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_198_198, &CompareResult_6, ((MR_Box) (ArgX1_135)), ((MR_Box) (ArgY1_136)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 30:
                {
                  MR_Word ArgX1_137 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_138;
                  MR_Word ArgX2_140 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_141;
                  MR_Word SubResult1_139;
                  MR_Word TypeInfo_175_175;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 30)));
                  if (succeeded)
                  {
                    ArgY1_138 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_141 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    TypeInfo_175_175 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_175_175, &SubResult1_139, ((MR_Box) (ArgX1_137)), ((MR_Box) (ArgY1_138)));
                    succeeded = (SubResult1_139 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_139;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX2_140)), ((MR_Box) (ArgY2_141)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 31:
                {
                  MR_String ArgX1_142 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_143;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 31)));
                  if (succeeded)
                  {
                    ArgY1_143 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_142, ArgY1_143);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 32:
                {
                  MR_String ArgX1_144 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_145;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 32)));
                  if (succeeded)
                  {
                    ArgY1_145 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_144, ArgY1_145);
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
libs__optdb_help____Index____help_piece_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 30;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 23;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 24;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_Integer) 26;
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_Integer) 27;
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_Integer) 28;
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_Integer) 29;
          break;
        case (MR_Integer) 28:
          *HeadVar__2_2 = (MR_Integer) 31;
          break;
        case (MR_Integer) 29:
          *HeadVar__2_2 = (MR_Integer) 32;
          break;
        case (MR_Integer) 30:
          *HeadVar__2_2 = (MR_Integer) 33;
          break;
        case (MR_Integer) 31:
          *HeadVar__2_2 = (MR_Integer) 34;
          break;
        case (MR_Integer) 32:
          *HeadVar__2_2 = (MR_Integer) 35;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
libs__optdb_help____Unify____help_piece_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_121 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_122 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_121 == CastY_122);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_119 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_120 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_120 == CastX_119);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_10;
              MR_String ArgX2_11 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_12 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_11, ArgY2_12) == 0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_16;
              MR_String ArgX2_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_17, ArgY2_18) == 0);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_22;
              MR_String ArgX2_23 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_24 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_23, ArgY2_24) == 0);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_26;
              MR_String ArgX2_27 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_28 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_27, ArgY2_28) == 0);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_30;
              MR_String ArgX2_31 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_32;
              MR_String ArgX3_33 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_31, ArgY2_32) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_33, ArgY3_34) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ArgX1_35 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_35, ArgY1_36) == 0);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ArgX1_37 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_38;
              MR_String ArgX2_39 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_40 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_37, ArgY1_38) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_39, ArgY2_40) == 0);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ArgX1_41 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_42;
              MR_String ArgX2_43 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_44;
              MR_String ArgX3_45 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_44 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_46 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_41, ArgY1_42) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_43, ArgY2_44) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_45, ArgY3_46) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String ArgX1_47 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_48;
              MR_String ArgX2_49 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_50;
              MR_String ArgX3_51 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_52;
              MR_String ArgX4_53 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_52 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_47, ArgY1_48) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_49, ArgY2_50) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_51, ArgY3_52) == 0);
                    if (succeeded)
                      succeeded = (strcmp(ArgX4_53, ArgY4_54) == 0);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String ArgX1_55 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_55, ArgY1_56) == 0);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ArgX1_57 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_58;
              MR_String ArgX2_59 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_60 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_57, ArgY1_58) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_59, ArgY2_60) == 0);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String ArgX1_61 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_61, ArgY1_62) == 0);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String ArgX1_63 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_64;
              MR_String ArgX2_65 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_63, ArgY1_64) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_65, ArgY2_66) == 0);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_String ArgX1_67 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_67, ArgY1_68) == 0);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String ArgX1_69 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_70;
              MR_String ArgX2_71 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_72;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 17)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_69, ArgY1_70) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_71, ArgY2_72) == 0);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String ArgX1_73 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 18)));
              if (succeeded)
              {
                ArgY1_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_73, ArgY1_74) == 0);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_String ArgX1_75 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_76;
              MR_String ArgX2_77 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 19)));
              if (succeeded)
              {
                ArgY1_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_78 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_75, ArgY1_76) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_77, ArgY2_78) == 0);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String ArgX1_79 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_80;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_79, ArgY1_80) == 0);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_String ArgX1_81 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_82;
              MR_String ArgX2_83 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_84;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 21)));
              if (succeeded)
              {
                ArgY1_82 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_84 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_81, ArgY1_82) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_83, ArgY2_84) == 0);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_String ArgX1_85 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 22)));
              if (succeeded)
              {
                ArgY1_86 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_85, ArgY1_86) == 0);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_String ArgX1_87 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_88;
              MR_String ArgX2_89 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_90;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 23)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_90 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_87, ArgY1_88) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_89, ArgY2_90) == 0);
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_String ArgX1_91 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 24)));
              if (succeeded)
              {
                ArgY1_92 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_91, ArgY1_92) == 0);
              }
            }
            break;
          case (MR_Integer) 25:
            {
              MR_String ArgX1_93 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_94;
              MR_String ArgX2_95 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_96;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 25)));
              if (succeeded)
              {
                ArgY1_94 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_96 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_93, ArgY1_94) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_95, ArgY2_96) == 0);
              }
            }
            break;
          case (MR_Integer) 26:
            {
              MR_String ArgX1_97 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_98;
              MR_String ArgX2_99 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_100;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 26)));
              if (succeeded)
              {
                ArgY1_98 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_100 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_97, ArgY1_98) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_99, ArgY2_100) == 0);
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_String ArgX1_101 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_102;
              MR_String ArgX2_103 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_104;
              MR_String ArgX3_105 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_106;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 27)));
              if (succeeded)
              {
                ArgY1_102 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_104 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_106 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_101, ArgY1_102) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_103, ArgY2_104) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_105, ArgY3_106) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word TypeInfo_123_123;
              MR_Word ArgX1_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_108;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 28)));
              if (succeeded)
              {
                ArgY1_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_123_123 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_123_123, ((MR_Box) (ArgX1_107)), ((MR_Box) (ArgY1_108)));
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word TypeInfo_126_126;
              MR_Word ArgX1_109 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_110;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 29)));
              if (succeeded)
              {
                ArgY1_110 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_126_126 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_126_126, ((MR_Box) (ArgX1_109)), ((MR_Box) (ArgY1_110)));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word TypeInfo_124_124;
              MR_Word TypeInfo_125_125;
              MR_Word ArgX1_111 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_112;
              MR_Word ArgX2_113 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_114;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 30)));
              if (succeeded)
              {
                ArgY1_112 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_114 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_124_124 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_124_124, ((MR_Box) (ArgX1_111)), ((MR_Box) (ArgY1_112)));
                if (succeeded)
                {
                  TypeInfo_125_125 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_125_125, ((MR_Box) (ArgX2_113)), ((MR_Box) (ArgY2_114)));
                }
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_String ArgX1_115 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_116;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 31)));
              if (succeeded)
              {
                ArgY1_116 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_115, ArgY1_116) == 0);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_String ArgX1_117 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_118;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 32)));
              if (succeeded)
              {
                ArgY1_118 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_117, ArgY1_118) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__optdb_help____Compare____help_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_207 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_208 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_207 == CastY_208);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    libs__optdb_help____Index____help_0_0(HeadVar__2_2, &IndexX_4);
    libs__optdb_help____Index____help_0_0(HeadVar__3_3, &IndexY_5);
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
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_8;
              MR_String ArgX2_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_String ArgY2_11;
              MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_14;
              MR_Word ArgX4_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 3))) & (MR_Integer) 1);
              MR_Word ArgY4_17;
              MR_Word ArgX5_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
              MR_Word ArgY5_20;
              MR_Word SubResult1_9;
              MR_Word TypeInfo_227_227;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                ArgY2_11 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
                ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
                ArgY4_17 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 3))) & (MR_Integer) 1);
                ArgY5_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 4))));
                TypeInfo_227_227 = (MR_Word) (&libs__optdb_help_scalar_common_1[3]);
                mercury__builtin__compare_3_p_0(TypeInfo_227_227, &SubResult1_9, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                {
                  MR_Word SubResult2_12;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_12, ArgX2_10, ArgY2_11);
                  succeeded = (SubResult2_12 != (MR_Integer) 0);
                  if (succeeded)
                    CompareResult_6 = SubResult2_12;
                  else
                  {
                    MR_Word SubResult3_15;

                    mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_15, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                    succeeded = (SubResult3_15 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult3_15;
                    else
                    {
                      MR_Word SubResult4_18;
                      MR_Integer Var_282 = (MR_Integer) (ArgX4_16);
                      MR_Integer Var_283 = (MR_Integer) (ArgY4_17);

                      succeeded = (Var_282 < Var_283);
                      if (succeeded)
                      {
                        SubResult4_18 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_282 > Var_283);
                        if (succeeded)
                        {
                          SubResult4_18 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult4_18;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_19)), ((MR_Box) (ArgY5_20)));
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_22;
              MR_Word ArgX2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_25;
              MR_Word SubResult1_23;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_22 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
                ArgY2_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_23, ArgX1_21, ArgY1_22);
                succeeded = (SubResult1_23 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_23;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX2_24)), ((MR_Box) (ArgY2_25)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgX1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_27;
                  MR_String ArgX2_29 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_30;
                  MR_Word ArgX3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_33;
                  MR_Word SubResult1_28;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_27 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_30 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_28, ArgX1_26, ArgY1_27);
                    succeeded = (SubResult1_28 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_28;
                    else
                    {
                      MR_Word SubResult2_31;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_31, ArgX2_29, ArgY2_30);
                      succeeded = (SubResult2_31 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_31;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX3_32)), ((MR_Box) (ArgY3_33)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgX1_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_35;
                  MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_38;
                  MR_Word SubResult1_36;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_35 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_36, ArgX1_34, ArgY1_35);
                    succeeded = (SubResult1_36 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_36;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX2_37)), ((MR_Box) (ArgY2_38)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgX1_39 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_40;
                  MR_String ArgX2_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_43;
                  MR_Word ArgX3_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_46;
                  MR_Word SubResult1_41;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_40 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_43 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_41, ArgX1_39, ArgY1_40);
                    succeeded = (SubResult1_41 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_41;
                    else
                    {
                      MR_Word SubResult2_44;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_44, ArgX2_42, ArgY2_43);
                      succeeded = (SubResult2_44 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_44;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX3_45)), ((MR_Box) (ArgY3_46)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String ArgX1_47 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_48;
                  MR_Word ArgX2_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_51;
                  MR_Word ArgX3_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_54;
                  MR_Word SubResult1_49;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_49, ArgX1_47, ArgY1_48);
                    succeeded = (SubResult1_49 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_49;
                    else
                    {
                      MR_Word SubResult2_52;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_52, ((MR_Box) (ArgX2_50)), ((MR_Box) (ArgY2_51)));
                      succeeded = (SubResult2_52 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_52;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX3_53)), ((MR_Box) (ArgY3_54)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String ArgX1_55 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_56;
                  MR_Word ArgX2_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_59;
                  MR_Word ArgX3_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_62;
                  MR_Word SubResult1_57;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_56 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_57, ArgX1_55, ArgY1_56);
                    succeeded = (SubResult1_57 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_57;
                    else
                    {
                      MR_Word SubResult2_60;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[2]), &SubResult2_60, ((MR_Box) (ArgX2_58)), ((MR_Box) (ArgY2_59)));
                      succeeded = (SubResult2_60 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_60;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX3_61)), ((MR_Box) (ArgY3_62)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String ArgX1_63 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_64;
                  MR_Word ArgX2_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_67;
                  MR_String ArgX3_69 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_70;
                  MR_String ArgX4_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_73;
                  MR_Word ArgX5_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_76;
                  MR_Word SubResult1_65;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_64 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_70 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_73 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_65, ArgX1_63, ArgY1_64);
                    succeeded = (SubResult1_65 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_65;
                    else
                    {
                      MR_Word SubResult2_68;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_68, ((MR_Box) (ArgX2_66)), ((MR_Box) (ArgY2_67)));
                      succeeded = (SubResult2_68 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_68;
                      else
                      {
                        MR_Word SubResult3_71;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_71, ArgX3_69, ArgY3_70);
                        succeeded = (SubResult3_71 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_71;
                        else
                        {
                          MR_Word SubResult4_74;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_74, ArgX4_72, ArgY4_73);
                          succeeded = (SubResult4_74 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_74;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_75)), ((MR_Box) (ArgY5_76)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_77 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_78;
                  MR_String ArgX2_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_81;
                  MR_String ArgX3_83 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_84;
                  MR_String ArgX4_86 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_87;
                  MR_String ArgX5_89 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_String ArgY5_90;
                  MR_Word ArgX6_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                  MR_Word ArgY6_93;
                  MR_Word SubResult1_79;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_78 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_81 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_84 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_87 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_90 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    ArgY6_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 6))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_79, ArgX1_77, ArgY1_78);
                    succeeded = (SubResult1_79 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_79;
                    else
                    {
                      MR_Word SubResult2_82;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_82, ArgX2_80, ArgY2_81);
                      succeeded = (SubResult2_82 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_82;
                      else
                      {
                        MR_Word SubResult3_85;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_85, ArgX3_83, ArgY3_84);
                        succeeded = (SubResult3_85 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_85;
                        else
                        {
                          MR_Word SubResult4_88;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_88, ArgX4_86, ArgY4_87);
                          succeeded = (SubResult4_88 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_88;
                          else
                          {
                            MR_Word SubResult5_91;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_91, ArgX5_89, ArgY5_90);
                            succeeded = (SubResult5_91 != (MR_Integer) 0);
                            if (succeeded)
                              CompareResult_6 = SubResult5_91;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX6_92)), ((MR_Box) (ArgY6_93)));
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_94 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_95;
                  MR_Word ArgX2_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_98;
                  MR_String ArgX3_100 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_101;
                  MR_String ArgX4_103 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_104;
                  MR_Word ArgX5_106 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_107;
                  MR_Word SubResult1_96;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_95 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_98 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_101 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_104 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_96, ArgX1_94, ArgY1_95);
                    succeeded = (SubResult1_96 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_96;
                    else
                    {
                      MR_Word SubResult2_99;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_99, ((MR_Box) (ArgX2_97)), ((MR_Box) (ArgY2_98)));
                      succeeded = (SubResult2_99 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_99;
                      else
                      {
                        MR_Word SubResult3_102;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_102, ArgX3_100, ArgY3_101);
                        succeeded = (SubResult3_102 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_102;
                        else
                        {
                          MR_Word SubResult4_105;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_105, ArgX4_103, ArgY4_104);
                          succeeded = (SubResult4_105 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_105;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_106)), ((MR_Box) (ArgY5_107)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Char ArgX1_108 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_109;
                  MR_String ArgX2_111 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_112;
                  MR_Word ArgX3_114 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_115;
                  MR_String ArgX4_117 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_118;
                  MR_String ArgX5_120 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_String ArgY5_121;
                  MR_Word ArgX6_123 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                  MR_Word ArgY6_124;
                  MR_Word SubResult1_110;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_109 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_112 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_115 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_118 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_121 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    ArgY6_124 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 6))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_110, ArgX1_108, ArgY1_109);
                    succeeded = (SubResult1_110 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_110;
                    else
                    {
                      MR_Word SubResult2_113;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_113, ArgX2_111, ArgY2_112);
                      succeeded = (SubResult2_113 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_113;
                      else
                      {
                        MR_Word SubResult3_116;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_116, ((MR_Box) (ArgX3_114)), ((MR_Box) (ArgY3_115)));
                        succeeded = (SubResult3_116 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_116;
                        else
                        {
                          MR_Word SubResult4_119;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_119, ArgX4_117, ArgY4_118);
                          succeeded = (SubResult4_119 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_119;
                          else
                          {
                            MR_Word SubResult5_122;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_122, ArgX5_120, ArgY5_121);
                            succeeded = (SubResult5_122 != (MR_Integer) 0);
                            if (succeeded)
                              CompareResult_6 = SubResult5_122;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX6_123)), ((MR_Box) (ArgY6_124)));
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
                  MR_String ArgX1_125 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_126;
                  MR_Word ArgX2_128 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_129;
                  MR_String ArgX3_131 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_132;
                  MR_Word ArgX4_134 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_135;
                  MR_Word SubResult1_127;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_126 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_129 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_132 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_135 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_127, ArgX1_125, ArgY1_126);
                    succeeded = (SubResult1_127 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_127;
                    else
                    {
                      MR_Word SubResult2_130;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_130, ((MR_Box) (ArgX2_128)), ((MR_Box) (ArgY2_129)));
                      succeeded = (SubResult2_130 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_130;
                      else
                      {
                        MR_Word SubResult3_133;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_133, ArgX3_131, ArgY3_132);
                        succeeded = (SubResult3_133 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_133;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_134)), ((MR_Box) (ArgY4_135)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String ArgX1_136 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_137;
                  MR_Word ArgX2_139 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_140;
                  MR_Word ArgX3_142 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_143;
                  MR_Word SubResult1_138;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_137 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_140 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_143 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_138, ArgX1_136, ArgY1_137);
                    succeeded = (SubResult1_138 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_138;
                    else
                    {
                      MR_Word SubResult2_141;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_141, ((MR_Box) (ArgX2_139)), ((MR_Box) (ArgY2_140)));
                      succeeded = (SubResult2_141 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_141;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX3_142)), ((MR_Box) (ArgY3_143)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String ArgX1_144 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_145;
                  MR_Word ArgX2_147 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_148;
                  MR_String ArgX3_150 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_151;
                  MR_Word ArgX4_153 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_154;
                  MR_Word SubResult1_146;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_145 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_148 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_151 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_154 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_146, ArgX1_144, ArgY1_145);
                    succeeded = (SubResult1_146 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_146;
                    else
                    {
                      MR_Word SubResult2_149;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_149, ((MR_Box) (ArgX2_147)), ((MR_Box) (ArgY2_148)));
                      succeeded = (SubResult2_149 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_149;
                      else
                      {
                        MR_Word SubResult3_152;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_152, ArgX3_150, ArgY3_151);
                        succeeded = (SubResult3_152 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_152;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_153)), ((MR_Box) (ArgY4_154)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Char ArgX1_155 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_156;
                  MR_String ArgX2_158 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_159;
                  MR_Word ArgX3_161 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_162;
                  MR_Word ArgX4_164 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_165;
                  MR_Word SubResult1_157;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_156 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_159 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_162 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_165 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_157, ArgX1_155, ArgY1_156);
                    succeeded = (SubResult1_157 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_157;
                    else
                    {
                      MR_Word SubResult2_160;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_160, ArgX2_158, ArgY2_159);
                      succeeded = (SubResult2_160 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_160;
                      else
                      {
                        MR_Word SubResult3_163;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_163, ((MR_Box) (ArgX3_161)), ((MR_Box) (ArgY3_162)));
                        succeeded = (SubResult3_163 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_163;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_164)), ((MR_Box) (ArgY4_165)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Char ArgX1_166 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_167;
                  MR_String ArgX2_169 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_170;
                  MR_Word ArgX3_172 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_173;
                  MR_Word ArgX4_175 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_176;
                  MR_Word SubResult1_168;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_167 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_170 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_173 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_176 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_168, ArgX1_166, ArgY1_167);
                    succeeded = (SubResult1_168 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_168;
                    else
                    {
                      MR_Word SubResult2_171;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_171, ArgX2_169, ArgY2_170);
                      succeeded = (SubResult2_171 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_171;
                      else
                      {
                        MR_Word SubResult3_174;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_174, ((MR_Box) (ArgX3_172)), ((MR_Box) (ArgY3_173)));
                        succeeded = (SubResult3_174 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_174;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_175)), ((MR_Box) (ArgY4_176)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Char ArgX1_177 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_178;
                  MR_String ArgX2_180 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_181;
                  MR_Word ArgX3_183 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_184;
                  MR_String ArgX4_186 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_187;
                  MR_Word ArgX5_189 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_190;
                  MR_Word SubResult1_179;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_178 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_181 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_184 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_187 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_190 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_179, ArgX1_177, ArgY1_178);
                    succeeded = (SubResult1_179 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_179;
                    else
                    {
                      MR_Word SubResult2_182;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_182, ArgX2_180, ArgY2_181);
                      succeeded = (SubResult2_182 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_182;
                      else
                      {
                        MR_Word SubResult3_185;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_185, ((MR_Box) (ArgX3_183)), ((MR_Box) (ArgY3_184)));
                        succeeded = (SubResult3_185 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_185;
                        else
                        {
                          MR_Word SubResult4_188;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_188, ArgX4_186, ArgY4_187);
                          succeeded = (SubResult4_188 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_188;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_189)), ((MR_Box) (ArgY5_190)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Char ArgX1_191 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_192;
                  MR_String ArgX2_194 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_195;
                  MR_Word ArgX3_197 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_198;
                  MR_String ArgX4_200 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_201;
                  MR_Word ArgX5_203 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_204;
                  MR_Word SubResult1_193;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_192 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_195 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_198 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_201 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_204 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_193, ArgX1_191, ArgY1_192);
                    succeeded = (SubResult1_193 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_193;
                    else
                    {
                      MR_Word SubResult2_196;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_196, ArgX2_194, ArgY2_195);
                      succeeded = (SubResult2_196 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_196;
                      else
                      {
                        MR_Word SubResult3_199;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_199, ((MR_Box) (ArgX3_197)), ((MR_Box) (ArgY3_198)));
                        succeeded = (SubResult3_199 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_199;
                        else
                        {
                          MR_Word SubResult4_202;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_202, ArgX4_200, ArgY4_201);
                          succeeded = (SubResult4_202 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_202;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_203)), ((MR_Box) (ArgY5_204)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word TypeInfo_281_281;
                  MR_Word ArgX1_205 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_206;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_206 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_281_281 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_281_281, &CompareResult_6, ((MR_Box) (ArgX1_205)), ((MR_Box) (ArgY1_206)));
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
libs__optdb_help____Index____help_0_0(
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
libs__optdb_help____Unify____help_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_151 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_152 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_151 == CastY_152);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_149 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_150 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_150 == CastX_149);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_162_162;
          MR_Word TypeInfo_163_163;
          MR_Word TypeInfo_164_164;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_String ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 3))) & (MR_Integer) 1);
          MR_Word ArgY4_10;
          MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 4))));
          MR_Word ArgY5_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 3))) & (MR_Integer) 1);
            ArgY5_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
            TypeInfo_162_162 = (MR_Word) (&libs__optdb_help_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_162_162, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
              if (succeeded)
              {
                TypeInfo_163_163 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_163_163, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                {
                  succeeded = (ArgX4_9 == ArgY4_10);
                  if (succeeded)
                  {
                    TypeInfo_164_164 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_164_164, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_165_165;
          MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
            if (succeeded)
            {
              TypeInfo_165_165 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_165_165, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_161_161;
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_18;
              MR_String ArgX2_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_20;
              MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_19, ArgY2_20) == 0);
                  if (succeeded)
                  {
                    TypeInfo_161_161 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_161_161, ((MR_Box) (ArgX3_21)), ((MR_Box) (ArgY3_22)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_174_174;
              MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_23, ArgY1_24) == 0);
                if (succeeded)
                {
                  TypeInfo_174_174 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_174_174, ((MR_Box) (ArgX2_25)), ((MR_Box) (ArgY2_26)));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_173_173;
              MR_String ArgX1_27 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_28;
              MR_String ArgX2_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_27, ArgY1_28) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_29, ArgY2_30) == 0);
                  if (succeeded)
                  {
                    TypeInfo_173_173 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_173_173, ((MR_Box) (ArgX3_31)), ((MR_Box) (ArgY3_32)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_159_159;
              MR_Word TypeInfo_160_160;
              MR_String ArgX1_33 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_36;
              MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_33, ArgY1_34) == 0);
                if (succeeded)
                {
                  TypeInfo_159_159 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_159_159, ((MR_Box) (ArgX2_35)), ((MR_Box) (ArgY2_36)));
                  if (succeeded)
                  {
                    TypeInfo_160_160 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_160_160, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_155_155;
              MR_Word TypeInfo_156_156;
              MR_String ArgX1_39 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_40;
              MR_Word ArgX2_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_42;
              MR_Word ArgX3_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_44;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_39, ArgY1_40) == 0);
                if (succeeded)
                {
                  TypeInfo_155_155 = (MR_Word) (&libs__optdb_help_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_155_155, ((MR_Box) (ArgX2_41)), ((MR_Box) (ArgY2_42)));
                  if (succeeded)
                  {
                    TypeInfo_156_156 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_156_156, ((MR_Box) (ArgX3_43)), ((MR_Box) (ArgY3_44)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_153_153;
              MR_Word TypeInfo_154_154;
              MR_String ArgX1_45 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_46;
              MR_Word ArgX2_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_48;
              MR_String ArgX3_49 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_50;
              MR_String ArgX4_51 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_52;
              MR_Word ArgX5_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_46 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_52 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (strcmp(ArgX1_45, ArgY1_46) == 0);
                if (succeeded)
                {
                  TypeInfo_153_153 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_153_153, ((MR_Box) (ArgX2_47)), ((MR_Box) (ArgY2_48)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_49, ArgY3_50) == 0);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_51, ArgY4_52) == 0);
                      if (succeeded)
                      {
                        TypeInfo_154_154 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_154_154, ((MR_Box) (ArgX5_53)), ((MR_Box) (ArgY5_54)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeInfo_166_166;
              MR_String ArgX1_55 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_56;
              MR_String ArgX2_57 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_58;
              MR_String ArgX3_59 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_60;
              MR_String ArgX4_61 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_62;
              MR_String ArgX5_63 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_String ArgY5_64;
              MR_Word ArgX6_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Word ArgY6_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_60 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 5))));
                ArgY6_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                succeeded = (strcmp(ArgX1_55, ArgY1_56) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_57, ArgY2_58) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_59, ArgY3_60) == 0);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_61, ArgY4_62) == 0);
                      if (succeeded)
                      {
                        succeeded = (strcmp(ArgX5_63, ArgY5_64) == 0);
                        if (succeeded)
                        {
                          TypeInfo_166_166 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_166_166, ((MR_Box) (ArgX6_65)), ((MR_Box) (ArgY6_66)));
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_167_167;
              MR_Word TypeInfo_168_168;
              MR_String ArgX1_67 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_68;
              MR_Word ArgX2_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_70;
              MR_String ArgX3_71 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_72;
              MR_String ArgX4_73 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_74;
              MR_Word ArgX5_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_76;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (strcmp(ArgX1_67, ArgY1_68) == 0);
                if (succeeded)
                {
                  TypeInfo_167_167 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_167_167, ((MR_Box) (ArgX2_69)), ((MR_Box) (ArgY2_70)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_71, ArgY3_72) == 0);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_73, ArgY4_74) == 0);
                      if (succeeded)
                      {
                        TypeInfo_168_168 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_168_168, ((MR_Box) (ArgX5_75)), ((MR_Box) (ArgY5_76)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_179_179;
              MR_Word TypeInfo_180_180;
              MR_Char ArgX1_77 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_78;
              MR_String ArgX2_79 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_80;
              MR_Word ArgX3_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_82;
              MR_String ArgX4_83 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_84;
              MR_String ArgX5_85 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_String ArgY5_86;
              MR_Word ArgX6_87 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Word ArgY6_88;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_78 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_82 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_84 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_86 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 5))));
                ArgY6_88 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                succeeded = (ArgX1_77 == ArgY1_78);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_79, ArgY2_80) == 0);
                  if (succeeded)
                  {
                    TypeInfo_179_179 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_179_179, ((MR_Box) (ArgX3_81)), ((MR_Box) (ArgY3_82)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_83, ArgY4_84) == 0);
                      if (succeeded)
                      {
                        succeeded = (strcmp(ArgX5_85, ArgY5_86) == 0);
                        if (succeeded)
                        {
                          TypeInfo_180_180 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_180_180, ((MR_Box) (ArgX6_87)), ((MR_Box) (ArgY6_88)));
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
              MR_Word TypeInfo_157_157;
              MR_Word TypeInfo_158_158;
              MR_String ArgX1_89 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_90;
              MR_Word ArgX2_91 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_92;
              MR_String ArgX3_93 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_94;
              MR_Word ArgX4_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_96;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_90 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_94 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_89, ArgY1_90) == 0);
                if (succeeded)
                {
                  TypeInfo_157_157 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_157_157, ((MR_Box) (ArgX2_91)), ((MR_Box) (ArgY2_92)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_93, ArgY3_94) == 0);
                    if (succeeded)
                    {
                      TypeInfo_158_158 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_158_158, ((MR_Box) (ArgX4_95)), ((MR_Box) (ArgY4_96)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word TypeInfo_171_171;
              MR_Word TypeInfo_172_172;
              MR_String ArgX1_97 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_98;
              MR_Word ArgX2_99 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_100;
              MR_Word ArgX3_101 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_102;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_98 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_100 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_102 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_97, ArgY1_98) == 0);
                if (succeeded)
                {
                  TypeInfo_171_171 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_171_171, ((MR_Box) (ArgX2_99)), ((MR_Box) (ArgY2_100)));
                  if (succeeded)
                  {
                    TypeInfo_172_172 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_172_172, ((MR_Box) (ArgX3_101)), ((MR_Box) (ArgY3_102)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_169_169;
              MR_Word TypeInfo_170_170;
              MR_String ArgX1_103 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_104;
              MR_Word ArgX2_105 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_106;
              MR_String ArgX3_107 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_108;
              MR_Word ArgX4_109 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_110;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_104 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_106 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_108 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_110 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_103, ArgY1_104) == 0);
                if (succeeded)
                {
                  TypeInfo_169_169 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_169_169, ((MR_Box) (ArgX2_105)), ((MR_Box) (ArgY2_106)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_107, ArgY3_108) == 0);
                    if (succeeded)
                    {
                      TypeInfo_170_170 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (ArgX4_109)), ((MR_Box) (ArgY4_110)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TypeInfo_183_183;
              MR_Word TypeInfo_184_184;
              MR_Char ArgX1_111 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_112;
              MR_String ArgX2_113 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_114;
              MR_Word ArgX3_115 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_116;
              MR_Word ArgX4_117 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_118;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_112 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_114 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_116 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_118 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_111 == ArgY1_112);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_113, ArgY2_114) == 0);
                  if (succeeded)
                  {
                    TypeInfo_183_183 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_183_183, ((MR_Box) (ArgX3_115)), ((MR_Box) (ArgY3_116)));
                    if (succeeded)
                    {
                      TypeInfo_184_184 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_184_184, ((MR_Box) (ArgX4_117)), ((MR_Box) (ArgY4_118)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word TypeInfo_177_177;
              MR_Word TypeInfo_178_178;
              MR_Char ArgX1_119 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_120;
              MR_String ArgX2_121 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_122;
              MR_Word ArgX3_123 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_124;
              MR_Word ArgX4_125 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_126;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
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
                    TypeInfo_177_177 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_177_177, ((MR_Box) (ArgX3_123)), ((MR_Box) (ArgY3_124)));
                    if (succeeded)
                    {
                      TypeInfo_178_178 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_178_178, ((MR_Box) (ArgX4_125)), ((MR_Box) (ArgY4_126)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word TypeInfo_181_181;
              MR_Word TypeInfo_182_182;
              MR_Char ArgX1_127 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_128;
              MR_String ArgX2_129 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_130;
              MR_Word ArgX3_131 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_132;
              MR_String ArgX4_133 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_134;
              MR_Word ArgX5_135 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_136;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_128 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_130 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_132 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_134 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_136 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (ArgX1_127 == ArgY1_128);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_129, ArgY2_130) == 0);
                  if (succeeded)
                  {
                    TypeInfo_181_181 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_181_181, ((MR_Box) (ArgX3_131)), ((MR_Box) (ArgY3_132)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_133, ArgY4_134) == 0);
                      if (succeeded)
                      {
                        TypeInfo_182_182 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_182_182, ((MR_Box) (ArgX5_135)), ((MR_Box) (ArgY5_136)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_175_175;
              MR_Word TypeInfo_176_176;
              MR_Char ArgX1_137 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_138;
              MR_String ArgX2_139 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_140;
              MR_Word ArgX3_141 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_142;
              MR_String ArgX4_143 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_144;
              MR_Word ArgX5_145 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_146;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_138 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_140 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_142 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_144 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_146 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (ArgX1_137 == ArgY1_138);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_139, ArgY2_140) == 0);
                  if (succeeded)
                  {
                    TypeInfo_175_175 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_175_175, ((MR_Box) (ArgX3_141)), ((MR_Box) (ArgY3_142)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_143, ArgY4_144) == 0);
                      if (succeeded)
                      {
                        TypeInfo_176_176 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_176_176, ((MR_Box) (ArgX5_145)), ((MR_Box) (ArgY5_146)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word TypeInfo_185_185;
              MR_Word ArgX1_147 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_148;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_148 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_185_185 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_185_185, ((MR_Box) (ArgX1_147)), ((MR_Box) (ArgY1_148)));
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__optdb_help____Compare____arg_align_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
libs__optdb_help____Unify____arg_align_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__optdb_help____Unify____arg_align_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__optdb_help____Unify____arg_align_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__optdb_help____Compare____arg_align_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__optdb_help____Compare____arg_align_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__optdb_help____Unify____help_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__optdb_help____Compare____help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__optdb_help____Compare____help_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_piece_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__optdb_help____Unify____help_piece_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__optdb_help____Compare____help_piece_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__optdb_help____Compare____help_piece_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_public_or_private_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__optdb_help____Unify____help_public_or_private_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__optdb_help____Compare____help_public_or_private_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__optdb_help____Compare____help_public_or_private_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__optdb_help____Unify____help_text_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__optdb_help____Unify____help_text_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__optdb_help____Compare____help_text_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__optdb_help____Compare____help_text_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__optdb_help__init(void)
{
}

void mercury__libs__optdb_help__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0);
  MR_register_type_ctor_info(&libs__optdb_help__libs__optdb_help__type_ctor_info_help_0);
  MR_register_type_ctor_info(&libs__optdb_help__libs__optdb_help__type_ctor_info_help_piece_0);
  MR_register_type_ctor_info(&libs__optdb_help__libs__optdb_help__type_ctor_info_help_public_or_private_0);
  MR_register_type_ctor_info(&libs__optdb_help__libs__optdb_help__type_ctor_info_help_text_0);
}

void mercury__libs__optdb_help__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__optdb_help__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.optdb_help.
