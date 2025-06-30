/*
** Automatically generated from `optdb_help.m'
** by the Mercury compiler,
** version rotd-2025-06-30
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




static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_arg_align_0_0[2];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_arg_align_0_0[2];

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

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_8[4];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_8[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_8;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_9[4];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_9[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_9;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_10[4];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_10[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_10;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_11[5];

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_11[5];

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

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_2[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_3[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_3;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_4[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_4;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_5[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_5;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_6[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_6;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_7[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_7;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_8[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_8;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_9[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_9;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_10[4];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_10;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_11[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_11;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_12[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_12;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_13[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_13;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_14[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_14;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_15[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_15;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_16[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_16;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_17[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_17;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_18[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_18;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_19[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_19;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_20[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_20;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_21[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_21;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_22[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_22;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_23[2];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_23;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_24[3];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_24;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_25[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_25;

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_26[1];

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26;

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_0[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_1[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_2[1];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_3[24];

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_piece_0[4];

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_help_piece_0[27];

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_piece_0[27];

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





static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_arg_align_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_arg_align_0_0[2] = {
  (MR_String) "aa_arg_name",
  (MR_String) "aa_aligned_text"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_arg_align_0_0 = {
  (MR_String) "arg_align",
  INT16_C(2),
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

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_8[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_8[4] = {
  (MR_String) "alh_long_name",
  (MR_String) "alh_alt_long_names",
  (MR_String) "alh_aligned_text",
  (MR_String) "alh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_8 = {
  (MR_String) "alt_align_help",
  INT16_C(4),
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

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_9[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_9[4] = {
  (MR_String) "nlh_long_name",
  (MR_String) "nlh_aligned_text",
  (MR_String) "alh_no_aligned_text",
  (MR_String) "nlh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_9 = {
  (MR_String) "no_align_help",
  INT16_C(4),
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

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_10[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_10[4] = {
  (MR_String) "palh_long_name",
  (MR_String) "palh_alt_long_names",
  (MR_String) "palh_aligned_text",
  (MR_String) "palh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_10 = {
  (MR_String) "priv_alt_align_help",
  INT16_C(4),
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

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_0_11[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0)
};

static const MR_ConstString libs__optdb_help__libs__optdb_help__field_names_help_0_11[5] = {
  (MR_String) "salh_short_name",
  (MR_String) "salh_long_name",
  (MR_String) "salh_alt_long_names",
  (MR_String) "salh_aligned_text",
  (MR_String) "salh_description"
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_0_11 = {
  (MR_String) "short_alt_align_help",
  INT16_C(5),
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
  UINT8_C(0),
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
  (MR_String) "opt",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2 = {
  (MR_String) "opt",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_3 = {
  (MR_String) "arg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_4 = {
  (MR_String) "arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
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
  (MR_String) "opt_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_6[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_6 = {
  (MR_String) "opt_arg",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_7 = {
  (MR_String) "quote",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
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
  (MR_String) "quote",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
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
  (MR_String) "ref",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_10[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_10 = {
  (MR_String) "ref",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_11[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_11 = {
  (MR_String) "xref",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_12[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_12 = {
  (MR_String) "xref",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_13[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_13 = {
  (MR_String) "samp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_14[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_14 = {
  (MR_String) "samp",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_15[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_15 = {
  (MR_String) "emph",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_16[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_16 = {
  (MR_String) "emph",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_17[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_17 = {
  (MR_String) "var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_18[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_18 = {
  (MR_String) "var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(18),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_19[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_19 = {
  (MR_String) "file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(19),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_19,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_20[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_20 = {
  (MR_String) "file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 17,
  INT32_C(20),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_20,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_21[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_21 = {
  (MR_String) "code",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 18,
  INT32_C(21),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_21,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_22[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_22 = {
  (MR_String) "code",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 19,
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
  (MR_String) "file_var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 20,
  INT32_C(23),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_23,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_24[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_24 = {
  (MR_String) "file_var",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 21,
  INT32_C(24),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_24,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_25[1] = { (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_25 = {
  (MR_String) "help_text_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 22,
  INT32_C(25),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_25,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__optdb_help__libs__optdb_help__field_types_help_piece_0_26[1] = { (MR_PseudoTypeInfo) (&libs__optdb_help__list__ti_list_1libs__optdb_help__type_ctor_info_help_piece_0) };

static const MR_DuFunctorDesc libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26 = {
  (MR_String) "texinfo_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 23,
  INT32_C(26),
  libs__optdb_help__libs__optdb_help__field_types_help_piece_0_26,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_0[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_0 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_1[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_1 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_2[1] = { &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2 };

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_3[24] = {
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
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26
};

static const MR_DuPtagLayout libs__optdb_help__libs__optdb_help__du_ptag_ordered_help_piece_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
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
    UINT32_C(24),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__optdb_help__libs__optdb_help__du_stag_ordered_help_piece_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__optdb_help__libs__optdb_help__du_name_ordered_help_piece_0[27] = {
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_3,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_4,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_21,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_22,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_15,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_16,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_19,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_20,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_23,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_24,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_25,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_1,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_2,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_5,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_6,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_7,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_8,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_9,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_10,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_13,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_14,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_26,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_17,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_18,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_0,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_11,
  &libs__optdb_help__libs__optdb_help__du_functor_desc_help_piece_0_12
};

static const MR_Integer libs__optdb_help__libs__optdb_help__functor_number_map_help_piece_0[27] = {
  (MR_Integer) 24,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 25,
  (MR_Integer) 26,
  (MR_Integer) 19,
  (MR_Integer) 20,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 22,
  (MR_Integer) 23,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 21
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
  (MR_Integer) 27,
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
  MR_Integer CastX_121 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_122 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_121 == CastY_122);
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
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_String ArgY1_8;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_7, ArgY1_8);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_10;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_9, ArgY1_10);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_12;
              MR_String ArgX2_14 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_String ArgY2_15;
              MR_Word SubResult1_13;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
                ArgY2_15 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 1))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_13, ArgX1_11, ArgY1_12);
                succeeded = (SubResult1_13 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_13;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_14, ArgY2_15);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgX1_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_17;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_16, ArgY1_17);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgX1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_19;
                  MR_String ArgX2_21 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_22;
                  MR_Word SubResult1_20;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_22 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_20, ArgX1_18, ArgY1_19);
                    succeeded = (SubResult1_20 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_20;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_21, ArgY2_22);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_24;
                  MR_String ArgX2_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_27;
                  MR_Word SubResult1_25;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_24 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_27 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_25, ArgX1_23, ArgY1_24);
                    succeeded = (SubResult1_25 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_25;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_26, ArgY2_27);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String ArgX1_28 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_29;
                  MR_String ArgX2_31 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_32;
                  MR_String ArgX3_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_35;
                  MR_Word SubResult1_30;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_32 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_35 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_30, ArgX1_28, ArgY1_29);
                    succeeded = (SubResult1_30 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_30;
                    else
                    {
                      MR_Word SubResult2_33;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_33, ArgX2_31, ArgY2_32);
                      succeeded = (SubResult2_33 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_33;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_34, ArgY3_35);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String ArgX1_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_37;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_37 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_36, ArgY1_37);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String ArgX1_38 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_39;
                  MR_String ArgX2_41 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_42;
                  MR_Word SubResult1_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_39 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_42 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_40, ArgX1_38, ArgY1_39);
                    succeeded = (SubResult1_40 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_40;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_41, ArgY2_42);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_43 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_44;
                  MR_String ArgX2_46 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_47;
                  MR_String ArgX3_49 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_50;
                  MR_Word SubResult1_45;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_44 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_47 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_50 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_45, ArgX1_43, ArgY1_44);
                    succeeded = (SubResult1_45 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_45;
                    else
                    {
                      MR_Word SubResult2_48;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_48, ArgX2_46, ArgY2_47);
                      succeeded = (SubResult2_48 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_48;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_49, ArgY3_50);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_51 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_52;
                  MR_String ArgX2_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_55;
                  MR_String ArgX3_57 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_58;
                  MR_String ArgX4_60 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_61;
                  MR_Word SubResult1_53;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_52 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_55 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_58 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_61 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_53, ArgX1_51, ArgY1_52);
                    succeeded = (SubResult1_53 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_53;
                    else
                    {
                      MR_Word SubResult2_56;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_56, ArgX2_54, ArgY2_55);
                      succeeded = (SubResult2_56 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_56;
                      else
                      {
                        MR_Word SubResult3_59;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_59, ArgX3_57, ArgY3_58);
                        succeeded = (SubResult3_59 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_59;
                        else
                          mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX4_60, ArgY4_61);
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_String ArgX1_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_63;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_63 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_62, ArgY1_63);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String ArgX1_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_65;
                  MR_String ArgX2_67 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_68;
                  MR_Word SubResult1_66;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_65 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_68 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_66, ArgX1_64, ArgY1_65);
                    succeeded = (SubResult1_66 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_66;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_67, ArgY2_68);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String ArgX1_69 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_70;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_70 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_69, ArgY1_70);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String ArgX1_71 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_72;
                  MR_String ArgX2_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_75;
                  MR_Word SubResult1_73;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_72 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_75 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_73, ArgX1_71, ArgY1_72);
                    succeeded = (SubResult1_73 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_73;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_74, ArgY2_75);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_String ArgX1_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_77;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_77 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_76, ArgY1_77);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_String ArgX1_78 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_79;
                  MR_String ArgX2_81 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_82;
                  MR_Word SubResult1_80;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_79 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_82 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_80, ArgX1_78, ArgY1_79);
                    succeeded = (SubResult1_80 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_80;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_81, ArgY2_82);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_String ArgX1_83 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_84;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_84 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_83, ArgY1_84);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_String ArgX1_85 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_86;
                  MR_String ArgX2_88 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_89;
                  MR_Word SubResult1_87;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_86 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_89 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_87, ArgX1_85, ArgY1_86);
                    succeeded = (SubResult1_87 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_87;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_88, ArgY2_89);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_String ArgX1_90 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_91;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_91 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_90, ArgY1_91);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_String ArgX1_92 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_93;
                  MR_String ArgX2_95 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_96;
                  MR_Word SubResult1_94;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 17)));
                  if (succeeded)
                  {
                    ArgY1_93 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_96 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_94, ArgX1_92, ArgY1_93);
                    succeeded = (SubResult1_94 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_94;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_95, ArgY2_96);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_String ArgX1_97 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_98;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 18)));
                  if (succeeded)
                  {
                    ArgY1_98 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_97, ArgY1_98);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_String ArgX1_99 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_100;
                  MR_String ArgX2_102 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_103;
                  MR_Word SubResult1_101;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 19)));
                  if (succeeded)
                  {
                    ArgY1_100 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_103 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_101, ArgX1_99, ArgY1_100);
                    succeeded = (SubResult1_101 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_101;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_102, ArgY2_103);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 20:
                {
                  MR_String ArgX1_104 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_105;
                  MR_String ArgX2_107 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_108;
                  MR_Word SubResult1_106;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                    ArgY1_105 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_108 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_106, ArgX1_104, ArgY1_105);
                    succeeded = (SubResult1_106 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_106;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_107, ArgY2_108);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 21:
                {
                  MR_String ArgX1_109 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_110;
                  MR_String ArgX2_112 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_113;
                  MR_String ArgX3_115 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_116;
                  MR_Word SubResult1_111;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 21)));
                  if (succeeded)
                  {
                    ArgY1_110 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_113 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_116 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_111, ArgX1_109, ArgY1_110);
                    succeeded = (SubResult1_111 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_111;
                    else
                    {
                      MR_Word SubResult2_114;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_114, ArgX2_112, ArgY2_113);
                      succeeded = (SubResult2_114 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_114;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_115, ArgY3_116);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 22:
                {
                  MR_Word TypeInfo_140_140;
                  MR_Word ArgX1_117 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_118;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 22)));
                  if (succeeded)
                  {
                    ArgY1_118 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_140_140 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_140_140, &CompareResult_6, ((MR_Box) (ArgX1_117)), ((MR_Box) (ArgY1_118)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 23:
                {
                  MR_Word TypeInfo_162_162;
                  MR_Word ArgX1_119 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_120;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 23)));
                  if (succeeded)
                  {
                    ArgY1_120 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_162_162 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_162_162, &CompareResult_6, ((MR_Box) (ArgX1_119)), ((MR_Box) (ArgY1_120)));
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
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 23;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 24;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 26;
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
  MR_Integer CastX_97 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_98 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_97 == CastY_98);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_8;
          MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_String ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_9, ArgY2_10) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_14;
              MR_String ArgX2_15 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_15, ArgY2_16) == 0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_18;
              MR_String ArgX2_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_19, ArgY2_20) == 0);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_22;
              MR_String ArgX2_23 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_24;
              MR_String ArgX3_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_24 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_23, ArgY2_24) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_25, ArgY3_26) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ArgX1_27 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_27, ArgY1_28) == 0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_30;
              MR_String ArgX2_31 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_31, ArgY2_32) == 0);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ArgX1_33 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_34;
              MR_String ArgX2_35 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_36;
              MR_String ArgX3_37 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_38 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_33, ArgY1_34) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_35, ArgY2_36) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_37, ArgY3_38) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ArgX1_39 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_40;
              MR_String ArgX2_41 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_42;
              MR_String ArgX3_43 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_44;
              MR_String ArgX4_45 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_44 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_46 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_39, ArgY1_40) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_41, ArgY2_42) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_43, ArgY3_44) == 0);
                    if (succeeded)
                      succeeded = (strcmp(ArgX4_45, ArgY4_46) == 0);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ArgX1_47 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_47, ArgY1_48) == 0);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ArgX1_49 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_50;
              MR_String ArgX2_51 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_52 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_49, ArgY1_50) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_51, ArgY2_52) == 0);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ArgX1_53 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_53, ArgY1_54) == 0);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String ArgX1_55 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_56;
              MR_String ArgX2_57 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_55, ArgY1_56) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_57, ArgY2_58) == 0);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String ArgX1_59 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_59, ArgY1_60) == 0);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ArgX1_61 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_62;
              MR_String ArgX2_63 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_61, ArgY1_62) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_63, ArgY2_64) == 0);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String ArgX1_65 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_65, ArgY1_66) == 0);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String ArgX1_67 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_68;
              MR_String ArgX2_69 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_70 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_67, ArgY1_68) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_69, ArgY2_70) == 0);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_String ArgX1_71 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_72;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_71, ArgY1_72) == 0);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String ArgX1_73 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_74;
              MR_String ArgX2_75 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_76;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 17)));
              if (succeeded)
              {
                ArgY1_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_73, ArgY1_74) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_75, ArgY2_76) == 0);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String ArgX1_77 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 18)));
              if (succeeded)
              {
                ArgY1_78 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_77, ArgY1_78) == 0);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_String ArgX1_79 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_80;
              MR_String ArgX2_81 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_82;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 19)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_82 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_79, ArgY1_80) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_81, ArgY2_82) == 0);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String ArgX1_83 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_84;
              MR_String ArgX2_85 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
                ArgY1_84 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_86 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_83, ArgY1_84) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_85, ArgY2_86) == 0);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_String ArgX1_87 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_88;
              MR_String ArgX2_89 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_90;
              MR_String ArgX3_91 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 21)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_90 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_92 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_87, ArgY1_88) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_89, ArgY2_90) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_91, ArgY3_92) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word TypeInfo_99_99;
              MR_Word ArgX1_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_94;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 22)));
              if (succeeded)
              {
                ArgY1_94 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_99_99 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_99_99, ((MR_Box) (ArgX1_93)), ((MR_Box) (ArgY1_94)));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word TypeInfo_100_100;
              MR_Word ArgX1_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_96;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 23)));
              if (succeeded)
              {
                ArgY1_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_100_100 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_100_100, ((MR_Box) (ArgX1_95)), ((MR_Box) (ArgY1_96)));
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
  MR_Integer CastX_192 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_193 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_192 == CastY_193);
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
              MR_Word TypeInfo_211_211;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                ArgY2_11 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
                ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
                ArgY4_17 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 3))) & (MR_Integer) 1);
                ArgY5_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 4))));
                TypeInfo_211_211 = (MR_Word) (&libs__optdb_help_scalar_common_1[3]);
                mercury__builtin__compare_3_p_0(TypeInfo_211_211, &SubResult1_9, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
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
                      MR_Integer Var_262 = (MR_Integer) (ArgX4_16);
                      MR_Integer Var_263 = (MR_Integer) (ArgY4_17);

                      succeeded = (Var_262 < Var_263);
                      if (succeeded)
                      {
                        SubResult4_18 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_262 > Var_263);
                        if (succeeded)
                        {
                          SubResult4_18 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_18 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
                  MR_Word ArgX4_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_73;
                  MR_Word SubResult1_65;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_64 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_70 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
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
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_72)), ((MR_Box) (ArgY4_73)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_75;
                  MR_String ArgX2_77 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_78;
                  MR_String ArgX3_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_81;
                  MR_Word ArgX4_83 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_84;
                  MR_Word SubResult1_76;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_75 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_78 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_81 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_76, ArgX1_74, ArgY1_75);
                    succeeded = (SubResult1_76 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_76;
                    else
                    {
                      MR_Word SubResult2_79;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_79, ArgX2_77, ArgY2_78);
                      succeeded = (SubResult2_79 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_79;
                      else
                      {
                        MR_Word SubResult3_82;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_82, ArgX3_80, ArgY3_81);
                        succeeded = (SubResult3_82 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_82;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_83)), ((MR_Box) (ArgY4_84)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_85 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_86;
                  MR_Word ArgX2_88 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_89;
                  MR_String ArgX3_91 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_92;
                  MR_Word ArgX4_94 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_95;
                  MR_Word SubResult1_87;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_86 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_92 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_87, ArgX1_85, ArgY1_86);
                    succeeded = (SubResult1_87 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_87;
                    else
                    {
                      MR_Word SubResult2_90;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_90, ((MR_Box) (ArgX2_88)), ((MR_Box) (ArgY2_89)));
                      succeeded = (SubResult2_90 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_90;
                      else
                      {
                        MR_Word SubResult3_93;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_93, ArgX3_91, ArgY3_92);
                        succeeded = (SubResult3_93 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_93;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_94)), ((MR_Box) (ArgY4_95)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Char ArgX1_96 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_97;
                  MR_String ArgX2_99 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_100;
                  MR_Word ArgX3_102 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_103;
                  MR_String ArgX4_105 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_106;
                  MR_Word ArgX5_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_109;
                  MR_Word SubResult1_98;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_97 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_100 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_103 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_106 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_109 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_98, ArgX1_96, ArgY1_97);
                    succeeded = (SubResult1_98 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_98;
                    else
                    {
                      MR_Word SubResult2_101;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_101, ArgX2_99, ArgY2_100);
                      succeeded = (SubResult2_101 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_101;
                      else
                      {
                        MR_Word SubResult3_104;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_104, ((MR_Box) (ArgX3_102)), ((MR_Box) (ArgY3_103)));
                        succeeded = (SubResult3_104 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_104;
                        else
                        {
                          MR_Word SubResult4_107;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_107, ArgX4_105, ArgY4_106);
                          succeeded = (SubResult4_107 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_107;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_108)), ((MR_Box) (ArgY5_109)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String ArgX1_110 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_111;
                  MR_Word ArgX2_113 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_114;
                  MR_String ArgX3_116 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_117;
                  MR_Word ArgX4_119 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_120;
                  MR_Word SubResult1_112;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_111 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_114 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_117 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_120 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_112, ArgX1_110, ArgY1_111);
                    succeeded = (SubResult1_112 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_112;
                    else
                    {
                      MR_Word SubResult2_115;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_115, ((MR_Box) (ArgX2_113)), ((MR_Box) (ArgY2_114)));
                      succeeded = (SubResult2_115 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_115;
                      else
                      {
                        MR_Word SubResult3_118;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_118, ArgX3_116, ArgY3_117);
                        succeeded = (SubResult3_118 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_118;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_119)), ((MR_Box) (ArgY4_120)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String ArgX1_121 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_122;
                  MR_Word ArgX2_124 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_125;
                  MR_Word ArgX3_127 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_128;
                  MR_Word SubResult1_123;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_122 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_125 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_128 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_123, ArgX1_121, ArgY1_122);
                    succeeded = (SubResult1_123 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_123;
                    else
                    {
                      MR_Word SubResult2_126;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_126, ((MR_Box) (ArgX2_124)), ((MR_Box) (ArgY2_125)));
                      succeeded = (SubResult2_126 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_126;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX3_127)), ((MR_Box) (ArgY3_128)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String ArgX1_129 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_130;
                  MR_Word ArgX2_132 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_133;
                  MR_String ArgX3_135 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_136;
                  MR_Word ArgX4_138 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_139;
                  MR_Word SubResult1_131;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_130 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_133 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_136 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_139 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_131, ArgX1_129, ArgY1_130);
                    succeeded = (SubResult1_131 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_131;
                    else
                    {
                      MR_Word SubResult2_134;

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult2_134, ((MR_Box) (ArgX2_132)), ((MR_Box) (ArgY2_133)));
                      succeeded = (SubResult2_134 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_134;
                      else
                      {
                        MR_Word SubResult3_137;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_137, ArgX3_135, ArgY3_136);
                        succeeded = (SubResult3_137 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_137;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_138)), ((MR_Box) (ArgY4_139)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Char ArgX1_140 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_141;
                  MR_String ArgX2_143 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_144;
                  MR_Word ArgX3_146 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_147;
                  MR_Word ArgX4_149 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_150;
                  MR_Word SubResult1_142;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_141 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_144 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_147 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_150 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_142, ArgX1_140, ArgY1_141);
                    succeeded = (SubResult1_142 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_142;
                    else
                    {
                      MR_Word SubResult2_145;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_145, ArgX2_143, ArgY2_144);
                      succeeded = (SubResult2_145 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_145;
                      else
                      {
                        MR_Word SubResult3_148;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_148, ((MR_Box) (ArgX3_146)), ((MR_Box) (ArgY3_147)));
                        succeeded = (SubResult3_148 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_148;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_149)), ((MR_Box) (ArgY4_150)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Char ArgX1_151 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_152;
                  MR_String ArgX2_154 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_155;
                  MR_Word ArgX3_157 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_158;
                  MR_Word ArgX4_160 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Word ArgY4_161;
                  MR_Word SubResult1_153;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_152 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_155 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_158 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_161 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_153, ArgX1_151, ArgY1_152);
                    succeeded = (SubResult1_153 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_153;
                    else
                    {
                      MR_Word SubResult2_156;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_156, ArgX2_154, ArgY2_155);
                      succeeded = (SubResult2_156 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_156;
                      else
                      {
                        MR_Word SubResult3_159;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_159, ((MR_Box) (ArgX3_157)), ((MR_Box) (ArgY3_158)));
                        succeeded = (SubResult3_159 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_159;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX4_160)), ((MR_Box) (ArgY4_161)));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Char ArgX1_162 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_163;
                  MR_String ArgX2_165 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_166;
                  MR_Word ArgX3_168 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_169;
                  MR_String ArgX4_171 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_172;
                  MR_Word ArgX5_174 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_175;
                  MR_Word SubResult1_164;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_163 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_166 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_169 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_172 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_175 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_164, ArgX1_162, ArgY1_163);
                    succeeded = (SubResult1_164 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_164;
                    else
                    {
                      MR_Word SubResult2_167;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_167, ArgX2_165, ArgY2_166);
                      succeeded = (SubResult2_167 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_167;
                      else
                      {
                        MR_Word SubResult3_170;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_170, ((MR_Box) (ArgX3_168)), ((MR_Box) (ArgY3_169)));
                        succeeded = (SubResult3_170 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_170;
                        else
                        {
                          MR_Word SubResult4_173;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_173, ArgX4_171, ArgY4_172);
                          succeeded = (SubResult4_173 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_173;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_174)), ((MR_Box) (ArgY5_175)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Char ArgX1_176 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                  MR_Char ArgY1_177;
                  MR_String ArgX2_179 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_180;
                  MR_Word ArgX3_182 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_183;
                  MR_String ArgX4_185 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_186;
                  MR_Word ArgX5_188 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_189;
                  MR_Word SubResult1_178;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_177 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                    ArgY2_180 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_183 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_186 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_189 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_178, ArgX1_176, ArgY1_177);
                    succeeded = (SubResult1_178 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_178;
                    else
                    {
                      MR_Word SubResult2_181;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_181, ArgX2_179, ArgY2_180);
                      succeeded = (SubResult2_181 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_181;
                      else
                      {
                        MR_Word SubResult3_184;

                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[0]), &SubResult3_184, ((MR_Box) (ArgX3_182)), ((MR_Box) (ArgY3_183)));
                        succeeded = (SubResult3_184 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_184;
                        else
                        {
                          MR_Word SubResult4_187;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_187, ArgX4_185, ArgY4_186);
                          succeeded = (SubResult4_187 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_187;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__optdb_help_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_188)), ((MR_Box) (ArgY5_189)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word TypeInfo_261_261;
                  MR_Word ArgX1_190 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_191;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_191 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    TypeInfo_261_261 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    mercury__builtin__compare_3_p_0(TypeInfo_261_261, &CompareResult_6, ((MR_Box) (ArgX1_190)), ((MR_Box) (ArgY1_191)));
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
  MR_Integer CastX_141 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_142 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_141 == CastY_142);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_139 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_140 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_140 == CastX_139);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_152_152;
          MR_Word TypeInfo_153_153;
          MR_Word TypeInfo_154_154;
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
            TypeInfo_152_152 = (MR_Word) (&libs__optdb_help_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_152_152, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
              if (succeeded)
              {
                TypeInfo_153_153 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_153_153, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                {
                  succeeded = (ArgX4_9 == ArgY4_10);
                  if (succeeded)
                  {
                    TypeInfo_154_154 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_154_154, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_155_155;
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
              TypeInfo_155_155 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_155_155, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_151_151;
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
                    TypeInfo_151_151 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_151_151, ((MR_Box) (ArgX3_21)), ((MR_Box) (ArgY3_22)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_164_164;
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
                  TypeInfo_164_164 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_164_164, ((MR_Box) (ArgX2_25)), ((MR_Box) (ArgY2_26)));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_163_163;
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
                    TypeInfo_163_163 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_163_163, ((MR_Box) (ArgX3_31)), ((MR_Box) (ArgY3_32)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_149_149;
              MR_Word TypeInfo_150_150;
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
                  TypeInfo_149_149 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_149_149, ((MR_Box) (ArgX2_35)), ((MR_Box) (ArgY2_36)));
                  if (succeeded)
                  {
                    TypeInfo_150_150 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_150_150, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_145_145;
              MR_Word TypeInfo_146_146;
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
                  TypeInfo_145_145 = (MR_Word) (&libs__optdb_help_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_145_145, ((MR_Box) (ArgX2_41)), ((MR_Box) (ArgY2_42)));
                  if (succeeded)
                  {
                    TypeInfo_146_146 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_146_146, ((MR_Box) (ArgX3_43)), ((MR_Box) (ArgY3_44)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_143_143;
              MR_Word TypeInfo_144_144;
              MR_String ArgX1_45 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_46;
              MR_Word ArgX2_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_48;
              MR_String ArgX3_49 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_50;
              MR_Word ArgX4_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_46 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_45, ArgY1_46) == 0);
                if (succeeded)
                {
                  TypeInfo_143_143 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_143_143, ((MR_Box) (ArgX2_47)), ((MR_Box) (ArgY2_48)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_49, ArgY3_50) == 0);
                    if (succeeded)
                    {
                      TypeInfo_144_144 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_144_144, ((MR_Box) (ArgX4_51)), ((MR_Box) (ArgY4_52)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeInfo_156_156;
              MR_String ArgX1_53 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_54;
              MR_String ArgX2_55 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_56;
              MR_String ArgX3_57 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_58;
              MR_Word ArgX4_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_53, ArgY1_54) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_55, ArgY2_56) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_57, ArgY3_58) == 0);
                    if (succeeded)
                    {
                      TypeInfo_156_156 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_156_156, ((MR_Box) (ArgX4_59)), ((MR_Box) (ArgY4_60)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_157_157;
              MR_Word TypeInfo_158_158;
              MR_String ArgX1_61 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_62;
              MR_Word ArgX2_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_64;
              MR_String ArgX3_65 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_66;
              MR_Word ArgX4_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_61, ArgY1_62) == 0);
                if (succeeded)
                {
                  TypeInfo_157_157 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_157_157, ((MR_Box) (ArgX2_63)), ((MR_Box) (ArgY2_64)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_65, ArgY3_66) == 0);
                    if (succeeded)
                    {
                      TypeInfo_158_158 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_158_158, ((MR_Box) (ArgX4_67)), ((MR_Box) (ArgY4_68)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_169_169;
              MR_Word TypeInfo_170_170;
              MR_Char ArgX1_69 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_70;
              MR_String ArgX2_71 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_72;
              MR_Word ArgX3_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_74;
              MR_String ArgX4_75 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_76;
              MR_Word ArgX5_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (ArgX1_69 == ArgY1_70);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_71, ArgY2_72) == 0);
                  if (succeeded)
                  {
                    TypeInfo_169_169 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_169_169, ((MR_Box) (ArgX3_73)), ((MR_Box) (ArgY3_74)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_75, ArgY4_76) == 0);
                      if (succeeded)
                      {
                        TypeInfo_170_170 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (ArgX5_77)), ((MR_Box) (ArgY5_78)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TypeInfo_147_147;
              MR_Word TypeInfo_148_148;
              MR_String ArgX1_79 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_80;
              MR_Word ArgX2_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_82;
              MR_String ArgX3_83 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_84;
              MR_Word ArgX4_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_82 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_84 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_86 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_79, ArgY1_80) == 0);
                if (succeeded)
                {
                  TypeInfo_147_147 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_147_147, ((MR_Box) (ArgX2_81)), ((MR_Box) (ArgY2_82)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_83, ArgY3_84) == 0);
                    if (succeeded)
                    {
                      TypeInfo_148_148 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_148_148, ((MR_Box) (ArgX4_85)), ((MR_Box) (ArgY4_86)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word TypeInfo_161_161;
              MR_Word TypeInfo_162_162;
              MR_String ArgX1_87 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_88;
              MR_Word ArgX2_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_90;
              MR_Word ArgX3_91 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (strcmp(ArgX1_87, ArgY1_88) == 0);
                if (succeeded)
                {
                  TypeInfo_161_161 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_161_161, ((MR_Box) (ArgX2_89)), ((MR_Box) (ArgY2_90)));
                  if (succeeded)
                  {
                    TypeInfo_162_162 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_162_162, ((MR_Box) (ArgX3_91)), ((MR_Box) (ArgY3_92)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_159_159;
              MR_Word TypeInfo_160_160;
              MR_String ArgX1_93 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_94;
              MR_Word ArgX2_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_96;
              MR_String ArgX3_97 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_98;
              MR_Word ArgX4_99 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_100;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_94 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_98 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_100 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_93, ArgY1_94) == 0);
                if (succeeded)
                {
                  TypeInfo_159_159 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_159_159, ((MR_Box) (ArgX2_95)), ((MR_Box) (ArgY2_96)));
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_97, ArgY3_98) == 0);
                    if (succeeded)
                    {
                      TypeInfo_160_160 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_160_160, ((MR_Box) (ArgX4_99)), ((MR_Box) (ArgY4_100)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TypeInfo_173_173;
              MR_Word TypeInfo_174_174;
              MR_Char ArgX1_101 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_102;
              MR_String ArgX2_103 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_104;
              MR_Word ArgX3_105 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_106;
              MR_Word ArgX4_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_108;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_102 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_104 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_106 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_101 == ArgY1_102);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_103, ArgY2_104) == 0);
                  if (succeeded)
                  {
                    TypeInfo_173_173 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_173_173, ((MR_Box) (ArgX3_105)), ((MR_Box) (ArgY3_106)));
                    if (succeeded)
                    {
                      TypeInfo_174_174 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_174_174, ((MR_Box) (ArgX4_107)), ((MR_Box) (ArgY4_108)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word TypeInfo_167_167;
              MR_Word TypeInfo_168_168;
              MR_Char ArgX1_109 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_110;
              MR_String ArgX2_111 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_112;
              MR_Word ArgX3_113 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_114;
              MR_Word ArgX4_115 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_116;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_110 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_112 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_114 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_116 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_109 == ArgY1_110);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_111, ArgY2_112) == 0);
                  if (succeeded)
                  {
                    TypeInfo_167_167 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_167_167, ((MR_Box) (ArgX3_113)), ((MR_Box) (ArgY3_114)));
                    if (succeeded)
                    {
                      TypeInfo_168_168 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_168_168, ((MR_Box) (ArgX4_115)), ((MR_Box) (ArgY4_116)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word TypeInfo_171_171;
              MR_Word TypeInfo_172_172;
              MR_Char ArgX1_117 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_118;
              MR_String ArgX2_119 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_120;
              MR_Word ArgX3_121 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_122;
              MR_String ArgX4_123 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_124;
              MR_Word ArgX5_125 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_126;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_118 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_120 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_122 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_124 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_126 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = (ArgX1_117 == ArgY1_118);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_119, ArgY2_120) == 0);
                  if (succeeded)
                  {
                    TypeInfo_171_171 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_171_171, ((MR_Box) (ArgX3_121)), ((MR_Box) (ArgY3_122)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_123, ArgY4_124) == 0);
                      if (succeeded)
                      {
                        TypeInfo_172_172 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_172_172, ((MR_Box) (ArgX5_125)), ((MR_Box) (ArgY5_126)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_165_165;
              MR_Word TypeInfo_166_166;
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

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
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
                    TypeInfo_165_165 = (MR_Word) (&libs__optdb_help_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_165_165, ((MR_Box) (ArgX3_131)), ((MR_Box) (ArgY3_132)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_133, ArgY4_134) == 0);
                      if (succeeded)
                      {
                        TypeInfo_166_166 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_166_166, ((MR_Box) (ArgX5_135)), ((MR_Box) (ArgY5_136)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word TypeInfo_175_175;
              MR_Word ArgX1_137 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_138;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_138 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_175_175 = (MR_Word) (&libs__optdb_help_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_175_175, ((MR_Box) (ArgX1_137)), ((MR_Box) (ArgY1_138)));
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
libs__optdb_help____Unify____arg_align_0_0(
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
