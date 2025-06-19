/*
** Automatically generated from `print_help_old.m'
** by the Mercury compiler,
** version rotd-2025-06-19
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


// :- module libs.print_help_old.
// :- implementation.

/*
INIT mercury__libs__print_help_old__init
ENDINIT
*/

#include "libs.print_help_old.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_0;

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_1;

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_alt_name_pos_0[2];

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_name_ordered_alt_name_pos_0[2];

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_alt_name_pos_0[2];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1builtin__type_ctor_info_character_0;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_1[6];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_1[6];

static const MR_DuArgLocn libs__print_help_old__libs__print_help_old__field_locns_help_0_1[6];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_1;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_2[2];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_2[2];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_2;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_3[2];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_3[2];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_3;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_4[4];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_4[4];

static const MR_DuArgLocn libs__print_help_old__libs__print_help_old__field_locns_help_0_4[4];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_4;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_5[4];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_5[4];

static const MR_DuArgLocn libs__print_help_old__libs__print_help_old__field_locns_help_0_5[4];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_5;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_6[4];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_6[4];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_6;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_7[4];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_7[4];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_7;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_8[4];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_8[4];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_8;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_9[4];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_9[4];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_9;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_10[1];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_10[1];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_10;

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_1[1];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_2[1];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_3[8];

static const MR_DuPtagLayout libs__print_help_old__libs__print_help_old__du_ptag_ordered_help_0[4];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_name_ordered_help_0[11];

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_help_0[11];

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_0;

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_1;

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_help_public_or_private_0[2];

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_name_ordered_help_public_or_private_0[2];

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_help_public_or_private_0[2];

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1libs__print_help_old__type_ctor_info_help_0;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_section_0_0[3];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_section_0_0[3];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_0;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_section_0_1[1];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_section_0_1[1];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_1;

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_section_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_section_0_1[1];

static const MR_DuPtagLayout libs__print_help_old__libs__print_help_old__du_ptag_ordered_help_section_0[2];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_name_ordered_help_section_0[2];

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_help_section_0[2];

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_maybe_nested_help_section_0_0[1];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1libs__print_help_old__type_ctor_info_help_section_0;

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_maybe_nested_help_section_0_1[3];

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_maybe_nested_help_section_0_1[3];

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_1;

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_maybe_nested_help_section_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_maybe_nested_help_section_0_1[1];

static const MR_DuPtagLayout libs__print_help_old__libs__print_help_old__du_ptag_ordered_maybe_nested_help_section_0[2];

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_name_ordered_maybe_nested_help_section_0[2];

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_maybe_nested_help_section_0[2];

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_0;

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_1;

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_print_what_help_0[2];

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_name_ordered_print_what_help_0[2];

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_print_what_help_0[2];

static void MR_CALL 
libs__print_help_old__output_maybe_nested_help_section_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help_old__output_help_section_6_p_0(
  MR_Word Stream_7,
  MR_Word What_8,
  MR_String SectionNameIndent_9,
  MR_Word Section_10);

static void MR_CALL 
libs__print_help_old__output_help_messages_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__print_help_old__output_help_message_5_p_0(
  MR_Word Stream_6,
  MR_Word What_7,
  MR_Word OptHelp_8);

static MR_Word MR_CALL 
libs__print_help_old__join_options_3_f_0(
  MR_Word AltNamePos_5,
  MR_Integer OptNameLineMaxLen_6,
  MR_Word OptionStrs_7);

static MR_String MR_CALL 
libs__print_help_old__short_name_with_arg_to_str_1_f_0(
  MR_String ShortName_3);

static MR_String MR_CALL 
libs__print_help_old__short_name_to_str_1_f_0(
  MR_Char ShortName_3);

static MR_String MR_CALL 
libs__print_help_old__long_name_to_str_1_f_0(
  MR_String LongName_3);

static MR_bool MR_CALL 
libs__print_help_old____Unify____alt_name_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help_old____Compare____alt_name_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help_old____Unify____help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help_old____Compare____help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help_old____Unify____help_public_or_private_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help_old____Compare____help_public_or_private_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help_old____Unify____help_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help_old____Compare____help_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help_old____Unify____maybe_nested_help_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help_old____Compare____maybe_nested_help_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help_old____Unify____print_what_help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help_old____Compare____print_what_help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__print_help_old_scalar_common_1[4][2];

static /* final */ const MR_Box libs__print_help_old_scalar_common_2[1][1];

static /* final */ const MR_Box libs__print_help_old_scalar_common_3[2][5];

static /* final */ const MR_Box libs__print_help_old_scalar_common_4[8][3];

static /* final */ const MR_Box libs__print_help_old_scalar_common_5[1][9];




static /* final */ const MR_Box libs__print_help_old_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_section_0))
  },
};

static /* final */ const MR_Box libs__print_help_old_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box libs__print_help_old_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__print_help_old_scalar_common_4[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[0])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[1])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[0])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[0])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[0])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[0])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[0])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&libs__print_help_old_scalar_common_3[0])),
    ((MR_Box) (libs__print_help_old__output_help_message_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__print_help_old_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__print_help_old__libs__print_help_old__type_ctor_info_print_what_help_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_section_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_0 = {
  (MR_String) "pos_one_line",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_1 = {
  (MR_String) "pos_sep_lines",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_alt_name_pos_0[2] = {
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_0,
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_name_ordered_alt_name_pos_0[2] = {
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_0,
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_alt_name_pos_0_1
};

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_alt_name_pos_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help_old__libs__print_help_old__type_ctor_info_alt_name_pos_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help_old____Unify____alt_name_pos_0_0_10001)),
  ((MR_Box) (libs__print_help_old____Compare____alt_name_pos_0_0_10001)),
  (MR_String) "libs.print_help_old",
  (MR_String) "alt_name_pos",
  { libs__print_help_old__libs__print_help_old__enum_name_ordered_alt_name_pos_0 },
  { libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_alt_name_pos_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help_old__libs__print_help_old__functor_number_map_alt_name_pos_0,

};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_0 = {
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

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) }
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_1[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__libs__print_help_old__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_public_or_private_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_1[6] = {
  (MR_String) "gh_long_name",
  (MR_String) "gh_alt_name_pos",
  (MR_String) "gh_alt_long_names",
  (MR_String) "gh_short_names",
  (MR_String) "gh_public_or_private",
  (MR_String) "gh_description"
};

static const MR_DuArgLocn libs__print_help_old__libs__print_help_old__field_locns_help_0_1[6] = {
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

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_1 = {
  (MR_String) "gen_help",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help_old__libs__print_help_old__field_types_help_0_1,
  libs__print_help_old__libs__print_help_old__field_names_help_0_1,
  libs__print_help_old__libs__print_help_old__field_locns_help_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_2[2] = {
  (MR_String) "h_long_name",
  (MR_String) "h_description"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_2 = {
  (MR_String) "help",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  libs__print_help_old__libs__print_help_old__field_types_help_0_2,
  libs__print_help_old__libs__print_help_old__field_names_help_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_3[2] = {
  (MR_String) "ph_long_name",
  (MR_String) "ph_description"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_3 = {
  (MR_String) "priv_help",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  libs__print_help_old__libs__print_help_old__field_types_help_0_3,
  libs__print_help_old__libs__print_help_old__field_names_help_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_4[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__libs__print_help_old__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_4[4] = {
  (MR_String) "ah_long_name",
  (MR_String) "ah_alt_name_pos",
  (MR_String) "ah_alt_long_names",
  (MR_String) "ah_description"
};

static const MR_DuArgLocn libs__print_help_old__libs__print_help_old__field_locns_help_0_4[4] = {
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

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_4 = {
  (MR_String) "alt_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  libs__print_help_old__libs__print_help_old__field_types_help_0_4,
  libs__print_help_old__libs__print_help_old__field_names_help_0_4,
  libs__print_help_old__libs__print_help_old__field_locns_help_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_5[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__libs__print_help_old__type_ctor_info_alt_name_pos_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_5[4] = {
  (MR_String) "pah_long_name",
  (MR_String) "pah_alt_name_pos",
  (MR_String) "pah_alt_long_names",
  (MR_String) "pah_description"
};

static const MR_DuArgLocn libs__print_help_old__libs__print_help_old__field_locns_help_0_5[4] = {
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

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_5 = {
  (MR_String) "priv_alt_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  libs__print_help_old__libs__print_help_old__field_types_help_0_5,
  libs__print_help_old__libs__print_help_old__field_names_help_0_5,
  libs__print_help_old__libs__print_help_old__field_locns_help_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_6[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_6[4] = {
  (MR_String) "sh_short_name",
  (MR_String) "sh_long_name",
  (MR_String) "sh_alt_long_names",
  (MR_String) "sh_description"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_6 = {
  (MR_String) "short_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  libs__print_help_old__libs__print_help_old__field_types_help_0_6,
  libs__print_help_old__libs__print_help_old__field_names_help_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_7[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_7[4] = {
  (MR_String) "psh_short_name",
  (MR_String) "psh_long_name",
  (MR_String) "psh_alt_long_names",
  (MR_String) "psh_description"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_7 = {
  (MR_String) "priv_short_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  libs__print_help_old__libs__print_help_old__field_types_help_0_7,
  libs__print_help_old__libs__print_help_old__field_names_help_0_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_8[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_8[4] = {
  (MR_String) "sah_short_name",
  (MR_String) "sah_long_name",
  (MR_String) "sah_alt_long_names",
  (MR_String) "sah_description"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_8 = {
  (MR_String) "short_arg_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  libs__print_help_old__libs__print_help_old__field_types_help_0_8,
  libs__print_help_old__libs__print_help_old__field_names_help_0_8,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_9[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_9[4] = {
  (MR_String) "psah_short_name",
  (MR_String) "psah_long_name",
  (MR_String) "psah_alt_long_names",
  (MR_String) "psah_description"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_9 = {
  (MR_String) "priv_short_arg_help",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  libs__print_help_old__libs__print_help_old__field_types_help_0_9,
  libs__print_help_old__libs__print_help_old__field_names_help_0_9,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_0_10[1] = { (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0) };

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_0_10[1] = { (MR_String) "uh_description" };

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_10 = {
  (MR_String) "unnamed_help",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  libs__print_help_old__libs__print_help_old__field_types_help_0_10,
  libs__print_help_old__libs__print_help_old__field_names_help_0_10,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_0[1] = { &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_0 };

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_1[1] = { &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_1 };

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_2[1] = { &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_2 };

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_3[8] = {
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_3,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_4,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_5,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_6,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_7,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_8,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_9,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_10
};

static const MR_DuPtagLayout libs__print_help_old__libs__print_help_old__du_ptag_ordered_help_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_help_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_name_ordered_help_0[11] = {
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_4,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_1,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_2,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_0,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_5,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_3,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_9,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_7,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_8,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_6,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_0_10
};

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_help_0[11] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 9,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 10
};

const MR_TypeCtorInfo_Struct libs__print_help_old__libs__print_help_old__type_ctor_info_help_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help_old____Unify____help_0_0_10001)),
  ((MR_Box) (libs__print_help_old____Compare____help_0_0_10001)),
  (MR_String) "libs.print_help_old",
  (MR_String) "help",
  { libs__print_help_old__libs__print_help_old__du_name_ordered_help_0 },
  { libs__print_help_old__libs__print_help_old__du_ptag_ordered_help_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  libs__print_help_old__libs__print_help_old__functor_number_map_help_0,

};

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_0 = {
  (MR_String) "help_public",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_1 = {
  (MR_String) "help_private",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_help_public_or_private_0[2] = {
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_0,
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_name_ordered_help_public_or_private_0[2] = {
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_1,
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_help_public_or_private_0_0
};

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_help_public_or_private_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help_old__libs__print_help_old__type_ctor_info_help_public_or_private_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help_old____Unify____help_public_or_private_0_0_10001)),
  ((MR_Box) (libs__print_help_old____Compare____help_public_or_private_0_0_10001)),
  (MR_String) "libs.print_help_old",
  (MR_String) "help_public_or_private",
  { libs__print_help_old__libs__print_help_old__enum_name_ordered_help_public_or_private_0 },
  { libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_help_public_or_private_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help_old__libs__print_help_old__functor_number_map_help_public_or_private_0,

};

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1libs__print_help_old__type_ctor_info_help_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_0) }
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_section_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1libs__print_help_old__type_ctor_info_help_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_section_0_0[3] = {
  (MR_String) "hs_section_name",
  (MR_String) "hs_section_comment_lines",
  (MR_String) "hs_help_structs"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_0 = {
  (MR_String) "help_section",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help_old__libs__print_help_old__field_types_help_section_0_0,
  libs__print_help_old__libs__print_help_old__field_names_help_section_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_help_section_0_1[1] = { (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1libs__print_help_old__type_ctor_info_help_0) };

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_help_section_0_1[1] = { (MR_String) "uhs_help_structs" };

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_1 = {
  (MR_String) "unnamed_help_section",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help_old__libs__print_help_old__field_types_help_section_0_1,
  libs__print_help_old__libs__print_help_old__field_names_help_section_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_section_0_0[1] = { &libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_0 };

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_help_section_0_1[1] = { &libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_1 };

static const MR_DuPtagLayout libs__print_help_old__libs__print_help_old__du_ptag_ordered_help_section_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_help_section_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_help_section_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_name_ordered_help_section_0[2] = {
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_0,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_help_section_0_1
};

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_help_section_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help_old__libs__print_help_old__type_ctor_info_help_section_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help_old____Unify____help_section_0_0_10001)),
  ((MR_Box) (libs__print_help_old____Compare____help_section_0_0_10001)),
  (MR_String) "libs.print_help_old",
  (MR_String) "help_section",
  { libs__print_help_old__libs__print_help_old__du_name_ordered_help_section_0 },
  { libs__print_help_old__libs__print_help_old__du_ptag_ordered_help_section_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help_old__libs__print_help_old__functor_number_map_help_section_0,

};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_maybe_nested_help_section_0_0[1] = { (MR_PseudoTypeInfo) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_section_0) };

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_0 = {
  (MR_String) "std_help_section",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help_old__libs__print_help_old__field_types_maybe_nested_help_section_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__print_help_old__list__ti_list_1libs__print_help_old__type_ctor_info_help_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_section_0) }
};

static const MR_PseudoTypeInfo libs__print_help_old__libs__print_help_old__field_types_maybe_nested_help_section_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help_old__list__ti_list_1libs__print_help_old__type_ctor_info_help_section_0)
};

static const MR_ConstString libs__print_help_old__libs__print_help_old__field_names_maybe_nested_help_section_0_1[3] = {
  (MR_String) "nhs_overall_name",
  (MR_String) "nhs_overall_comment_lines",
  (MR_String) "nhs_subsections"
};

static const MR_DuFunctorDesc libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_1 = {
  (MR_String) "nested_help_section",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help_old__libs__print_help_old__field_types_maybe_nested_help_section_0_1,
  libs__print_help_old__libs__print_help_old__field_names_maybe_nested_help_section_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_maybe_nested_help_section_0_0[1] = { &libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_0 };

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_stag_ordered_maybe_nested_help_section_0_1[1] = { &libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_1 };

static const MR_DuPtagLayout libs__print_help_old__libs__print_help_old__du_ptag_ordered_maybe_nested_help_section_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_maybe_nested_help_section_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help_old__libs__print_help_old__du_stag_ordered_maybe_nested_help_section_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help_old__libs__print_help_old__du_name_ordered_maybe_nested_help_section_0[2] = {
  &libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_1,
  &libs__print_help_old__libs__print_help_old__du_functor_desc_maybe_nested_help_section_0_0
};

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_maybe_nested_help_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help_old__libs__print_help_old__type_ctor_info_maybe_nested_help_section_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help_old____Unify____maybe_nested_help_section_0_0_10001)),
  ((MR_Box) (libs__print_help_old____Compare____maybe_nested_help_section_0_0_10001)),
  (MR_String) "libs.print_help_old",
  (MR_String) "maybe_nested_help_section",
  { libs__print_help_old__libs__print_help_old__du_name_ordered_maybe_nested_help_section_0 },
  { libs__print_help_old__libs__print_help_old__du_ptag_ordered_maybe_nested_help_section_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help_old__libs__print_help_old__functor_number_map_maybe_nested_help_section_0,

};

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_0 = {
  (MR_String) "print_public_help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_1 = {
  (MR_String) "print_public_and_private_help",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_print_what_help_0[2] = {
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_0,
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help_old__libs__print_help_old__enum_name_ordered_print_what_help_0[2] = {
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_1,
  &libs__print_help_old__libs__print_help_old__enum_functor_desc_print_what_help_0_0
};

static const MR_Integer libs__print_help_old__libs__print_help_old__functor_number_map_print_what_help_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help_old__libs__print_help_old__type_ctor_info_print_what_help_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help_old____Unify____print_what_help_0_0_10001)),
  ((MR_Box) (libs__print_help_old____Compare____print_what_help_0_0_10001)),
  (MR_String) "libs.print_help_old",
  (MR_String) "print_what_help",
  { libs__print_help_old__libs__print_help_old__enum_name_ordered_print_what_help_0 },
  { libs__print_help_old__libs__print_help_old__enum_ordinal_ordered_print_what_help_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help_old__libs__print_help_old__functor_number_map_print_what_help_0,

};

void MR_CALL 
libs__print_help_old____Compare____print_what_help_0_0(
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
libs__print_help_old____Unify____print_what_help_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__print_help_old____Compare____maybe_nested_help_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word SubResult1_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Word SubResult2_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
        succeeded = (SubResult2_11 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_11;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    libs__print_help_old____Compare____help_section_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
libs__print_help_old____Unify____maybe_nested_help_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&libs__print_help_old_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = libs__print_help_old____Unify____help_section_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
libs__print_help_old____Compare____help_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
  }
}

MR_bool MR_CALL 
libs__print_help_old____Unify____help_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&libs__print_help_old_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_15_15 = (MR_Word) (&libs__print_help_old_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
    }
  }
  return succeeded;
}

void MR_CALL 
libs__print_help_old____Compare____help_public_or_private_0_0(
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
libs__print_help_old____Unify____help_public_or_private_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__print_help_old____Compare____help_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_99 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_100 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_99 == CastY_100);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))) & (MR_Integer) 1);
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
              MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 4))) & (MR_Integer) 1);
              MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 4))) & (MR_Integer) 1);
              MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 5))));
              MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 5))));
              MR_Word SubResult1_6;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;
                MR_Integer Var_140 = (MR_Integer) (ArgX2_7);
                MR_Integer Var_141 = (MR_Integer) (ArgY2_8);

                succeeded = (Var_140 < Var_141);
                if (succeeded)
                {
                  SubResult2_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_140 > Var_141);
                  if (succeeded)
                  {
                    SubResult2_9 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult2_9 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                {
                  MR_Word SubResult3_12;

                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
                  succeeded = (SubResult3_12 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                  {
                    MR_Word SubResult4_15;

                    mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                    succeeded = (SubResult4_15 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_15;
                    else
                    {
                      MR_Word SubResult5_18;
                      MR_Integer Var_142 = (MR_Integer) (ArgX5_16);
                      MR_Integer Var_143 = (MR_Integer) (ArgY5_17);

                      succeeded = (Var_142 < Var_143);
                      if (succeeded)
                      {
                        SubResult5_18 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_142 > Var_143);
                        if (succeeded)
                        {
                          SubResult5_18 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult5_18 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult5_18;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_22 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_23;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_23, ArgX1_21, ArgY1_22);
              succeeded = (SubResult1_23 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_23;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_24)), ((MR_Box) (ArgY2_25)));
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ArgX1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_27 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_28;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_28, ArgX1_26, ArgY1_27);
                      succeeded = (SubResult1_28 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_28;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_29)), ((MR_Box) (ArgY2_30)));
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String ArgX1_31 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_32 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_33;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_33, ArgX1_31, ArgY1_32);
                      succeeded = (SubResult1_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_33;
                      else
                      {
                        MR_Word SubResult2_36;
                        MR_Integer Var_138 = (MR_Integer) (ArgX2_34);
                        MR_Integer Var_139 = (MR_Integer) (ArgY2_35);

                        succeeded = (Var_138 < Var_139);
                        if (succeeded)
                        {
                          SubResult2_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_138 > Var_139);
                          if (succeeded)
                          {
                            SubResult2_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult2_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_36;
                        else
                        {
                          MR_Word SubResult3_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult3_39, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
                          succeeded = (SubResult3_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_39;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_40)), ((MR_Box) (ArgY4_41)));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String ArgX1_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_43 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_Word ArgX3_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_44;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_44, ArgX1_42, ArgY1_43);
                      succeeded = (SubResult1_44 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_44;
                      else
                      {
                        MR_Word SubResult2_47;
                        MR_Integer Var_136 = (MR_Integer) (ArgX2_45);
                        MR_Integer Var_137 = (MR_Integer) (ArgY2_46);

                        succeeded = (Var_136 < Var_137);
                        if (succeeded)
                        {
                          SubResult2_47 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_136 > Var_137);
                          if (succeeded)
                          {
                            SubResult2_47 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult2_47 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_47;
                        else
                        {
                          MR_Word SubResult3_50;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult3_50, ((MR_Box) (ArgX3_48)), ((MR_Box) (ArgY3_49)));
                          succeeded = (SubResult3_50 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_50;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_51)), ((MR_Box) (ArgY4_52)));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Char ArgX1_53 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      MR_Char ArgY1_54 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                      MR_String ArgX2_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_57 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_55;

                      mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_55, ArgX1_53, ArgY1_54);
                      succeeded = (SubResult1_55 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_55;
                      else
                      {
                        MR_Word SubResult2_58;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_58, ArgX2_56, ArgY2_57);
                        succeeded = (SubResult2_58 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_58;
                        else
                        {
                          MR_Word SubResult3_61;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult3_61, ((MR_Box) (ArgX3_59)), ((MR_Box) (ArgY3_60)));
                          succeeded = (SubResult3_61 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_61;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_62)), ((MR_Box) (ArgY4_63)));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Char ArgX1_64 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      MR_Char ArgY1_65 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));
                      MR_String ArgX2_67 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_68 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_66;

                      mercury__private_builtin__builtin_compare_character_3_p_0(&SubResult1_66, ArgX1_64, ArgY1_65);
                      succeeded = (SubResult1_66 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_66;
                      else
                      {
                        MR_Word SubResult2_69;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_69, ArgX2_67, ArgY2_68);
                        succeeded = (SubResult2_69 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_69;
                        else
                        {
                          MR_Word SubResult3_72;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult3_72, ((MR_Box) (ArgX3_70)), ((MR_Box) (ArgY3_71)));
                          succeeded = (SubResult3_72 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_72;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_73)), ((MR_Box) (ArgY4_74)));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_String ArgX1_75 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_76 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_String ArgX2_78 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_79 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_82 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_77;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_77, ArgX1_75, ArgY1_76);
                      succeeded = (SubResult1_77 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_77;
                      else
                      {
                        MR_Word SubResult2_80;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_80, ArgX2_78, ArgY2_79);
                        succeeded = (SubResult2_80 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_80;
                        else
                        {
                          MR_Word SubResult3_83;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult3_83, ((MR_Box) (ArgX3_81)), ((MR_Box) (ArgY3_82)));
                          succeeded = (SubResult3_83 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_83;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_84)), ((MR_Box) (ArgY4_85)));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_String ArgX1_86 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_87 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_String ArgX2_89 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_90 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_96 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_88;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_88, ArgX1_86, ArgY1_87);
                      succeeded = (SubResult1_88 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_88;
                      else
                      {
                        MR_Word SubResult2_91;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_91, ArgX2_89, ArgY2_90);
                        succeeded = (SubResult2_91 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_91;
                        else
                        {
                          MR_Word SubResult3_94;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), &SubResult3_94, ((MR_Box) (ArgX3_92)), ((MR_Box) (ArgY3_93)));
                          succeeded = (SubResult3_94 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_94;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_95)), ((MR_Box) (ArgY4_96)));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 7:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ArgX1_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_98 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_97)), ((MR_Box) (ArgY1_98)));
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
libs__print_help_old____Unify____help_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_75 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_76 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_75 == CastY_76);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_73 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_74 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_74 == CastX_73);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_79_79;
          MR_Word TypeInfo_80_80;
          MR_Word TypeInfo_81_81;
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
                TypeInfo_79_79 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                {
                  TypeInfo_80_80 = (MR_Word) (&libs__print_help_old_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
                  if (succeeded)
                  {
                    succeeded = (ArgX5_11 == ArgY5_12);
                    if (succeeded)
                    {
                      TypeInfo_81_81 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
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
          MR_Word TypeInfo_82_82;
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
              TypeInfo_82_82 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_85_85;
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
                if (succeeded)
                {
                  TypeInfo_85_85 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX2_21)), ((MR_Box) (ArgY2_22)));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_77_77;
              MR_Word TypeInfo_78_78;
              MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_26;
              MR_Word ArgX3_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_28;
              MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_23, ArgY1_24) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_25 == ArgY2_26);
                  if (succeeded)
                  {
                    TypeInfo_77_77 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ArgX3_27)), ((MR_Box) (ArgY3_28)));
                    if (succeeded)
                    {
                      TypeInfo_78_78 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgX4_29)), ((MR_Box) (ArgY4_30)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_83_83;
              MR_Word TypeInfo_84_84;
              MR_String ArgX1_31 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_34;
              MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_36;
              MR_Word ArgX4_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_31, ArgY1_32) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_33 == ArgY2_34);
                  if (succeeded)
                  {
                    TypeInfo_83_83 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_83_83, ((MR_Box) (ArgX3_35)), ((MR_Box) (ArgY3_36)));
                    if (succeeded)
                    {
                      TypeInfo_84_84 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_84_84, ((MR_Box) (ArgX4_37)), ((MR_Box) (ArgY4_38)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_92_92;
              MR_Word TypeInfo_93_93;
              MR_Char ArgX1_39 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_40;
              MR_String ArgX2_41 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_42;
              MR_Word ArgX3_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_44;
              MR_Word ArgX4_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_39 == ArgY1_40);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_41, ArgY2_42) == 0);
                  if (succeeded)
                  {
                    TypeInfo_92_92 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX3_43)), ((MR_Box) (ArgY3_44)));
                    if (succeeded)
                    {
                      TypeInfo_93_93 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_93_93, ((MR_Box) (ArgX4_45)), ((MR_Box) (ArgY4_46)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_88_88;
              MR_Word TypeInfo_89_89;
              MR_Char ArgX1_47 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_48;
              MR_String ArgX2_49 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_50;
              MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_52;
              MR_Word ArgX4_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                ArgY2_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_47 == ArgY1_48);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_49, ArgY2_50) == 0);
                  if (succeeded)
                  {
                    TypeInfo_88_88 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX3_51)), ((MR_Box) (ArgY3_52)));
                    if (succeeded)
                    {
                      TypeInfo_89_89 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX4_53)), ((MR_Box) (ArgY4_54)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_90_90;
              MR_Word TypeInfo_91_91;
              MR_String ArgX1_55 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_56;
              MR_String ArgX2_57 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_58;
              MR_Word ArgX3_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_60;
              MR_Word ArgX4_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_55, ArgY1_56) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_57, ArgY2_58) == 0);
                  if (succeeded)
                  {
                    TypeInfo_90_90 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_90_90, ((MR_Box) (ArgX3_59)), ((MR_Box) (ArgY3_60)));
                    if (succeeded)
                    {
                      TypeInfo_91_91 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX4_61)), ((MR_Box) (ArgY4_62)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeInfo_86_86;
              MR_Word TypeInfo_87_87;
              MR_String ArgX1_63 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_64;
              MR_String ArgX2_65 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_66;
              MR_Word ArgX3_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_68;
              MR_Word ArgX4_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (strcmp(ArgX1_63, ArgY1_64) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_65, ArgY2_66) == 0);
                  if (succeeded)
                  {
                    TypeInfo_86_86 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (ArgX3_67)), ((MR_Box) (ArgY3_68)));
                    if (succeeded)
                    {
                      TypeInfo_87_87 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_87_87, ((MR_Box) (ArgX4_69)), ((MR_Box) (ArgY4_70)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_94_94;
              MR_Word ArgX1_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_72;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_94_94 = (MR_Word) (&libs__print_help_old_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) (ArgX1_71)), ((MR_Box) (ArgY1_72)));
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__print_help_old____Compare____alt_name_pos_0_0(
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
libs__print_help_old____Unify____alt_name_pos_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__print_help_old__output_maybe_nested_help_section_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__print_help_old__output_help_section_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
libs__print_help_old__output_maybe_nested_help_section_5_p_0(
  MR_Word Stream_6,
  MR_Word What_7,
  MR_Word MaybeNestedSection_8)
{
  if (((MR_tag((MR_Word) MaybeNestedSection_8)) == (MR_Integer) 1))
  {
    MR_String OverallName_11 = ((MR_String) ((MR_hl_field(1, MaybeNestedSection_8, 0))));
    MR_Word OverallCommentLines_12 = ((MR_Word) ((MR_hl_field(1, MaybeNestedSection_8, 1))));
    MR_Word Subsections_13 = ((MR_Word) ((MR_hl_field(1, MaybeNestedSection_8, 2))));
    MR_Word Var_28;
    MR_Box conv0_STATE_VARIABLE_IO_17;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_6, OverallName_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":\n");
    if (!((OverallCommentLines_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_6);
      mercury__io__write_prefixed_lines_5_p_0(Stream_6, (MR_String) "\t", OverallCommentLines_12);
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&libs__print_help_old_scalar_common_5[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (libs__print_help_old__output_maybe_nested_help_section_5_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (What_7));
      MR_hl_field(0, Var_28, 5) = ((MR_Box) ((MR_String) "\t"));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&libs__print_help_old__libs__print_help_old__type_ctor_info_help_section_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, Subsections_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
  else
  {
    MR_Word Section_10 = ((MR_Word) ((MR_hl_field(0, MaybeNestedSection_8, 0))));

    libs__print_help_old__output_help_section_6_p_0(Stream_6, What_7, (MR_String) "", Section_10);
  }
}

static void MR_CALL 
libs__print_help_old__output_help_section_6_p_0(
  MR_Word Stream_7,
  MR_Word What_8,
  MR_String SectionNameIndent_9,
  MR_Word Section_10)
{
  MR_Word HelpStructs_14;

  if (((MR_tag((MR_Word) Section_10)) == (MR_Integer) 0))
  {
    MR_Word SectionCommentLines_13 = ((MR_Word) ((MR_hl_field(0, Section_10, 1))));
    MR_String SectionName_16 = ((MR_String) ((MR_hl_field(0, Section_10, 0))));

    HelpStructs_14 = ((MR_Word) ((MR_hl_field(0, Section_10, 2))));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_7, SectionNameIndent_9);
    mercury__io__write_string_4_p_0(Stream_7, SectionName_16);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":\n\n");
    if (!((SectionCommentLines_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_prefixed_lines_5_p_0(Stream_7, (MR_String) "\t", SectionCommentLines_13);
      mercury__io__nl_3_p_0(Stream_7);
    }
  }
  else
  {
    HelpStructs_14 = ((MR_Word) ((MR_hl_field(1, Section_10, 0))));
    mercury__io__nl_3_p_0(Stream_7);
  }
  libs__print_help_old__output_help_messages_5_p_0(Stream_7, What_8, HelpStructs_14);
}

static void MR_CALL 
libs__print_help_old__output_help_messages_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word OptHelp_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word OptHelps_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word next_value_of_HeadVar__3_3;

      libs__print_help_old__output_help_message_5_p_0(HeadVar__1_1, HeadVar__2_2, OptHelp_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = OptHelps_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = libs__print_help_old__long_name_to_str_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = libs__print_help_old__long_name_to_str_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = libs__print_help_old__long_name_to_str_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = libs__print_help_old__long_name_to_str_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = libs__print_help_old__long_name_to_str_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = libs__print_help_old__long_name_to_str_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = libs__print_help_old__short_name_to_str_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help_old__output_help_message_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__print_help_old__long_name_to_str_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__print_help_old__output_help_message_5_p_0(
  MR_Word Stream_6,
  MR_Word What_7,
  MR_Word OptHelp_8)
{
  MR_bool succeeded;
  MR_Word PublicOrPrivate_11;
  MR_Word OptNameLines_12;
  MR_Word DescLines_13;

  switch (MR_tag((MR_Word) OptHelp_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        PublicOrPrivate_11 = (MR_Integer) 1;
        OptNameLines_12 = (MR_Word) ((MR_Unsigned) 0U);
        DescLines_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LongName_14 = ((MR_String) ((MR_hl_field(1, OptHelp_8, 0))));
        MR_Word AltNamePos_15 = ((MR_Unsigned) ((MR_hl_field(1, OptHelp_8, 1))) & (MR_Integer) 1);
        MR_Word AltLongNames_16 = ((MR_Word) ((MR_hl_field(1, OptHelp_8, 2))));
        MR_Word ShortNames_17 = ((MR_Word) ((MR_hl_field(1, OptHelp_8, 3))));
        MR_Word LongNames_18;
        MR_Word ShortNameStrs_19;
        MR_Word LongNameStrs_20;
        MR_Word Var_32;

        PublicOrPrivate_11 = ((MR_Unsigned) ((MR_hl_field(1, OptHelp_8, 4))) & (MR_Integer) 1);
        DescLines_13 = ((MR_Word) ((MR_hl_field(1, OptHelp_8, 5))));
        {
          LongNames_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LongNames_18, 0) = ((MR_Box) (LongName_14));
          MR_hl_field(1, LongNames_18, 1) = ((MR_Box) (AltLongNames_16));
        }
        ShortNameStrs_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[1]), ShortNames_17);
        LongNameStrs_20 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[2]), LongNames_18);
        Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ShortNameStrs_19, LongNameStrs_20);
        OptNameLines_12 = libs__print_help_old__join_options_3_f_0(AltNamePos_15, (MR_Integer) 71, Var_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_33;
        MR_String LongName_44 = ((MR_String) ((MR_hl_field(2, OptHelp_8, 0))));

        DescLines_13 = ((MR_Word) ((MR_hl_field(2, OptHelp_8, 1))));
        PublicOrPrivate_11 = (MR_Integer) 0;
        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_44);
        {
          OptNameLines_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, OptNameLines_12, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, OptNameLines_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OptHelp_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_76;
            MR_String LongName_79 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 1))));

            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 2))));
            PublicOrPrivate_11 = (MR_Integer) 1;
            Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_79);
            {
              OptNameLines_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, OptNameLines_12, 0) = ((MR_Box) (Var_76));
              MR_hl_field(1, OptNameLines_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LongName_45 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 1))));
            MR_Word AltNamePos_46 = ((MR_Unsigned) ((MR_hl_field(3, OptHelp_8, 2))) & (MR_Integer) 1);
            MR_Word AltLongNames_47 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 3))));
            MR_Word LongNames_48;
            MR_Word LongNameStrs_49;

            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 4))));
            PublicOrPrivate_11 = (MR_Integer) 0;
            {
              LongNames_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LongNames_48, 0) = ((MR_Box) (LongName_45));
              MR_hl_field(1, LongNames_48, 1) = ((MR_Box) (AltLongNames_47));
            }
            LongNameStrs_49 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[0]), LongNames_48);
            OptNameLines_12 = libs__print_help_old__join_options_3_f_0(AltNamePos_46, (MR_Integer) 71, LongNameStrs_49);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String LongName_70 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 1))));
            MR_Word AltNamePos_71 = ((MR_Unsigned) ((MR_hl_field(3, OptHelp_8, 2))) & (MR_Integer) 1);
            MR_Word AltLongNames_72 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 3))));
            MR_Word LongNames_73;
            MR_Word LongNameStrs_74;

            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 4))));
            PublicOrPrivate_11 = (MR_Integer) 1;
            {
              LongNames_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LongNames_73, 0) = ((MR_Box) (LongName_70));
              MR_hl_field(1, LongNames_73, 1) = ((MR_Box) (AltLongNames_72));
            }
            LongNameStrs_74 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[3]), LongNames_73);
            OptNameLines_12 = libs__print_help_old__join_options_3_f_0(AltNamePos_71, (MR_Integer) 71, LongNameStrs_74);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Char ShortName_21 = ((MR_Char) (MR_Word) (MR_hl_field(3, OptHelp_8, 1)));
            MR_String ShortNameStr_110;
            MR_String LongNameStr_111;
            MR_Word AltLongNameStrs_112;
            MR_Word OptNameLines0_113;
            MR_Word Var_116;
            MR_Word Var_117;
            MR_String LongName_119 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 2))));
            MR_Word AltLongNames_120 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 3))));

            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 4))));
            ShortNameStr_110 = libs__print_help_old__short_name_to_str_1_f_0(ShortName_21);
            PublicOrPrivate_11 = (MR_Integer) 0;
            LongNameStr_111 = libs__print_help_old__long_name_to_str_1_f_0(LongName_119);
            AltLongNameStrs_112 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[7]), AltLongNames_120);
            {
              Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_117, 0) = ((MR_Box) (LongNameStr_111));
              MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_116, 0) = ((MR_Box) (ShortNameStr_110));
              MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
            }
            OptNameLines0_113 = libs__print_help_old__join_options_3_f_0((MR_Integer) 0, (MR_Integer) 71, Var_116);
            OptNameLines_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptNameLines0_113, AltLongNameStrs_112);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Char ShortName_51 = ((MR_Char) (MR_Word) (MR_hl_field(3, OptHelp_8, 1)));
            MR_String ShortNameStr_82;
            MR_String LongNameStr_83;
            MR_Word AltLongNameStrs_84;
            MR_Word OptNameLines0_85;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_String LongName_91 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 2))));
            MR_Word AltLongNames_92 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 3))));

            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 4))));
            ShortNameStr_82 = libs__print_help_old__short_name_to_str_1_f_0(ShortName_51);
            PublicOrPrivate_11 = (MR_Integer) 1;
            LongNameStr_83 = libs__print_help_old__long_name_to_str_1_f_0(LongName_91);
            AltLongNameStrs_84 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[5]), AltLongNames_92);
            {
              Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_89, 0) = ((MR_Box) (LongNameStr_83));
              MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_88, 0) = ((MR_Box) (ShortNameStr_82));
              MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
            }
            OptNameLines0_85 = libs__print_help_old__join_options_3_f_0((MR_Integer) 0, (MR_Integer) 71, Var_88);
            OptNameLines_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptNameLines0_85, AltLongNameStrs_84);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String ShortName_50 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 1))));
            MR_String ShortNameStr_96;
            MR_String LongNameStr_97;
            MR_Word AltLongNameStrs_98;
            MR_Word OptNameLines0_99;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_String LongName_105 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 2))));
            MR_Word AltLongNames_106 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 3))));

            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 4))));
            ShortNameStr_96 = libs__print_help_old__short_name_with_arg_to_str_1_f_0(ShortName_50);
            PublicOrPrivate_11 = (MR_Integer) 0;
            LongNameStr_97 = libs__print_help_old__long_name_to_str_1_f_0(LongName_105);
            AltLongNameStrs_98 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[6]), AltLongNames_106);
            {
              Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_103, 0) = ((MR_Box) (LongNameStr_97));
              MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_102, 0) = ((MR_Box) (ShortNameStr_96));
              MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
            }
            OptNameLines0_99 = libs__print_help_old__join_options_3_f_0((MR_Integer) 0, (MR_Integer) 71, Var_102);
            OptNameLines_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptNameLines0_99, AltLongNameStrs_98);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String ShortNameStr_22;
            MR_String LongNameStr_23;
            MR_Word AltLongNameStrs_24;
            MR_Word OptNameLines0_25;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_String ShortName_52 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 1))));
            MR_String LongName_53 = ((MR_String) ((MR_hl_field(3, OptHelp_8, 2))));
            MR_Word AltLongNames_54 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 3))));

            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 4))));
            ShortNameStr_22 = libs__print_help_old__short_name_with_arg_to_str_1_f_0(ShortName_52);
            PublicOrPrivate_11 = (MR_Integer) 1;
            LongNameStr_23 = libs__print_help_old__long_name_to_str_1_f_0(LongName_53);
            AltLongNameStrs_24 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_old_scalar_common_4[4]), AltLongNames_54);
            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (LongNameStr_23));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (ShortNameStr_22));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
            }
            OptNameLines0_25 = libs__print_help_old__join_options_3_f_0((MR_Integer) 0, (MR_Integer) 71, Var_39);
            OptNameLines_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptNameLines0_25, AltLongNameStrs_24);
          }
          break;
        case (MR_Integer) 7:
          {
            DescLines_13 = ((MR_Word) ((MR_hl_field(3, OptHelp_8, 1))));
            PublicOrPrivate_11 = (MR_Integer) 1;
            OptNameLines_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
  switch (PublicOrPrivate_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = (What_7 == (MR_Integer) 1);
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
    mercury__io__write_prefixed_lines_5_p_0(Stream_6, (MR_String) "\t", OptNameLines_12);
    mercury__io__write_prefixed_lines_5_p_0(Stream_6, (MR_String) "\t\t", DescLines_13);
  }
}

static MR_Word MR_CALL 
libs__print_help_old__join_options_3_f_0(
  MR_Word AltNamePos_5,
  MR_Integer OptNameLineMaxLen_6,
  MR_Word OptionStrs_7)
{
  MR_bool succeeded;
  MR_Word Lines_8;
  MR_String OneLine_9;

  OneLine_9 = mercury__string__join_list_2_f_0((MR_String) ", ", OptionStrs_7);
  switch (AltNamePos_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_11;

        Var_11 = mercury__string__count_code_points_1_f_0(OneLine_9);
        succeeded = (Var_11 > OptNameLineMaxLen_6);
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
    Lines_8 = OptionStrs_7;
  else
    {
      Lines_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Lines_8, 0) = ((MR_Box) (OneLine_9));
      MR_hl_field(1, Lines_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  return Lines_8;
}

static MR_String MR_CALL 
libs__print_help_old__short_name_with_arg_to_str_1_f_0(
  MR_String ShortName_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortName_3);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
libs__print_help_old__short_name_to_str_1_f_0(
  MR_Char ShortName_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_8;

  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_old_scalar_common_2[0]), ShortName_3, &Var_8);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_8);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
libs__print_help_old__long_name_to_str_1_f_0(
  MR_String LongName_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_3);
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
libs__print_help_old____Unify____alt_name_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help_old____Unify____alt_name_pos_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help_old____Compare____alt_name_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help_old____Compare____alt_name_pos_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help_old____Unify____help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help_old____Unify____help_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help_old____Compare____help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help_old____Compare____help_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help_old____Unify____help_public_or_private_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help_old____Unify____help_public_or_private_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help_old____Compare____help_public_or_private_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help_old____Compare____help_public_or_private_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help_old____Unify____help_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help_old____Unify____help_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help_old____Compare____help_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help_old____Compare____help_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help_old____Unify____maybe_nested_help_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help_old____Unify____maybe_nested_help_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help_old____Compare____maybe_nested_help_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help_old____Compare____maybe_nested_help_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help_old____Unify____print_what_help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help_old____Unify____print_what_help_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help_old____Compare____print_what_help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help_old____Compare____print_what_help_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__print_help_old__init(void)
{
}

void mercury__libs__print_help_old__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__print_help_old__libs__print_help_old__type_ctor_info_alt_name_pos_0);
  MR_register_type_ctor_info(&libs__print_help_old__libs__print_help_old__type_ctor_info_help_0);
  MR_register_type_ctor_info(&libs__print_help_old__libs__print_help_old__type_ctor_info_help_public_or_private_0);
  MR_register_type_ctor_info(&libs__print_help_old__libs__print_help_old__type_ctor_info_help_section_0);
  MR_register_type_ctor_info(&libs__print_help_old__libs__print_help_old__type_ctor_info_maybe_nested_help_section_0);
  MR_register_type_ctor_info(&libs__print_help_old__libs__print_help_old__type_ctor_info_print_what_help_0);
}

void mercury__libs__print_help_old__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__print_help_old__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.print_help_old.
