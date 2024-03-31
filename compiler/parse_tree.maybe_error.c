/*
** Automatically generated from `maybe_error.m'
** by the Mercury compiler,
** version rotd-2024-03-31
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


// :- module parse_tree.maybe_error.
// :- implementation.

/*
INIT mercury__parse_tree__maybe_error__init
ENDINIT
*/

#include "parse_tree.maybe_error.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_2_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_2_1[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_2_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_2_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_2[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_2[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_2[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_3_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_3_1[2];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_3_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_3_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_3[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_3[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_3[2];

static const MR_FA_PseudoTypeInfo_Struct3 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe2_3__pseudo_1__pseudo_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_4_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_4_1[3];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_4_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_4_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_4[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_4[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_4[2];

static const MR_FA_PseudoTypeInfo_Struct4 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe3_4__pseudo_1__pseudo_2__pseudo_3__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_5_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_5_1[4];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_5_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_5_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_5[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_5[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_5[2];

static const MR_FA_PseudoTypeInfo_Struct5 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe4_5__pseudo_1__pseudo_2__pseudo_3__pseudo_4__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe5_6_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe5_6_1[5];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe5_6_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe5_6_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe5_6[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe5_6[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe5_6[2];

static const MR_FA_PseudoTypeInfo_Struct6 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe5_6__pseudo_1__pseudo_2__pseudo_3__pseudo_4__pseudo_5__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe6_7_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe6_7_1[6];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe6_7_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe6_7_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe6_7[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe6_7[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe6_7[2];

static const MR_FA_PseudoTypeInfo_Struct7 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe6_7__pseudo_1__pseudo_2__pseudo_3__pseudo_4__pseudo_5__pseudo_6__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0;

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1;

static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_ordinal_ordered_maybe_safe_to_continue_0[2];

static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0[2];

static void MR_CALL 
parse_tree__maybe_error__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_97_114_97_116_101_95_111_107_49_95_101_114_114_111_114_49_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevOKs_0_2,
  MR_Word * STATE_VARIABLE_RevOKs_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe5_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe5_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe5_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe5_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe6_7_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe6_7_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box wrapper_arg_10);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe6_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe6_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__maybe_error_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__maybe_error_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_2_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 2) };

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_0 = {
  (MR_String) "error1",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_2_1[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_1 = {
  (MR_String) "ok1",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_2_0[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_0 };

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_2_1[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_1 };

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_2[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_2_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe1_2_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe1_2_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe1",
  { parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_2 },
  { parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_2,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe1_1_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe1_1_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe1",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_3_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 3) };

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_0 = {
  (MR_String) "error2",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_3_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_3_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_1 = {
  (MR_String) "ok2",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_3_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_3_0[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_0 };

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_3_1[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_1 };

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_3[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_3_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_3_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_3[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_3_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3 = {
  (MR_Integer) 3,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe2_3_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe2_3_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe2",
  { parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_3 },
  { parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_3 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_3,

};

static const MR_FA_PseudoTypeInfo_Struct3 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe2_3__pseudo_1__pseudo_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe2_2_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe2_2_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe2",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe2_3__pseudo_1__pseudo_2__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_4_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 4) };

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_0 = {
  (MR_String) "error3",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_4_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_4_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 3)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_1 = {
  (MR_String) "ok3",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_4_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_4_0[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_0 };

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_4_1[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_1 };

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_4[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_4_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_4_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_4[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_4_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4 = {
  (MR_Integer) 4,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe3_4_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe3_4_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe3",
  { parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_4 },
  { parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_4 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_4,

};

static const MR_FA_PseudoTypeInfo_Struct4 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe3_4__pseudo_1__pseudo_2__pseudo_3__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3 = {
  (MR_Integer) 3,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe3_3_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe3_3_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe3",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe3_4__pseudo_1__pseudo_2__pseudo_3__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_5_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 5) };

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_0 = {
  (MR_String) "error4",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_5_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_5_1[4] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 3),
  (MR_PseudoTypeInfo) ((MR_Integer) 4)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_1 = {
  (MR_String) "ok4",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_5_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_5_0[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_0 };

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_5_1[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_1 };

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_5[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_5_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_5_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_5[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_5_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_5[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_5 = {
  (MR_Integer) 5,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe4_5_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe4_5_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe4",
  { parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_5 },
  { parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_5 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_5,

};

static const MR_FA_PseudoTypeInfo_Struct5 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe4_5__pseudo_1__pseudo_2__pseudo_3__pseudo_4__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_5,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 4),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_4 = {
  (MR_Integer) 4,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe4_4_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe4_4_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe4",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe4_5__pseudo_1__pseudo_2__pseudo_3__pseudo_4__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe5_6_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 6) };

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_0 = {
  (MR_String) "error5",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe5_6_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe5_6_1[5] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 3),
  (MR_PseudoTypeInfo) ((MR_Integer) 4),
  (MR_PseudoTypeInfo) ((MR_Integer) 5)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_1 = {
  (MR_String) "ok5",
  INT16_C(5),
  UINT16_C(31),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe5_6_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe5_6_0[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_0 };

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe5_6_1[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_1 };

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe5_6[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe5_6_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe5_6_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe5_6[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe5_6_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe5_6[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe5_6 = {
  (MR_Integer) 6,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe5_6_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe5_6_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe5",
  { parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe5_6 },
  { parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe5_6 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe5_6,

};

static const MR_FA_PseudoTypeInfo_Struct6 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe5_6__pseudo_1__pseudo_2__pseudo_3__pseudo_4__pseudo_5__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe5_6,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 4),
    (MR_PseudoTypeInfo) ((MR_Integer) 5),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe5_5 = {
  (MR_Integer) 5,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe5_5_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe5_5_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe5",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe5_6__pseudo_1__pseudo_2__pseudo_3__pseudo_4__pseudo_5__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe6_7_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 7) };

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_0 = {
  (MR_String) "error6",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe6_7_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe6_7_1[6] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 3),
  (MR_PseudoTypeInfo) ((MR_Integer) 4),
  (MR_PseudoTypeInfo) ((MR_Integer) 5),
  (MR_PseudoTypeInfo) ((MR_Integer) 6)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_1 = {
  (MR_String) "ok6",
  INT16_C(6),
  UINT16_C(63),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe6_7_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe6_7_0[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_0 };

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe6_7_1[1] = { &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_1 };

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe6_7[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe6_7_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe6_7_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe6_7[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe6_7_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe6_7[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe6_7 = {
  (MR_Integer) 7,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe6_7_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe6_7_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe6",
  { parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe6_7 },
  { parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe6_7 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe6_7,

};

static const MR_FA_PseudoTypeInfo_Struct7 parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe6_7__pseudo_1__pseudo_2__pseudo_3__pseudo_4__pseudo_5__pseudo_6__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe6_7,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 4),
    (MR_PseudoTypeInfo) ((MR_Integer) 5),
    (MR_PseudoTypeInfo) ((MR_Integer) 6),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe6_6 = {
  (MR_Integer) 6,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe6_6_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe6_6_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe6",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__pti_maybe6_7__pseudo_1__pseudo_2__pseudo_3__pseudo_4__pseudo_5__pseudo_6__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0 = {
  (MR_String) "safe_to_continue",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1 = {
  (MR_String) "unsafe_to_continue",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_ordinal_ordered_maybe_safe_to_continue_0[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe_safe_to_continue",
  { parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0 },
  { parse_tree__maybe_error__parse_tree__maybe_error__enum_ordinal_ordered_maybe_safe_to_continue_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0,

};

void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(
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
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe6_6_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word TypeInfo_for_T3_8,
  MR_Word TypeInfo_for_T4_9,
  MR_Word TypeInfo_for_T5_10,
  MR_Word TypeInfo_for_T6_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__maybe_error____Compare____maybe6_7_0(TypeInfo_for_T1_6, TypeInfo_for_T2_7, TypeInfo_for_T3_8, TypeInfo_for_T4_9, TypeInfo_for_T5_10, TypeInfo_for_T6_11, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe6_6_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word TypeInfo_for_T3_7,
  MR_Word TypeInfo_for_T4_8,
  MR_Word TypeInfo_for_T5_9,
  MR_Word TypeInfo_for_T6_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__maybe_error____Unify____maybe6_7_0(TypeInfo_for_T1_5, TypeInfo_for_T2_6, TypeInfo_for_T3_7, TypeInfo_for_T4_8, TypeInfo_for_T5_9, TypeInfo_for_T6_10, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe6_7_0(
  MR_Word TypeInfo_for_T1_25,
  MR_Word TypeInfo_for_T2_26,
  MR_Word TypeInfo_for_T3_27,
  MR_Word TypeInfo_for_T4_28,
  MR_Word TypeInfo_for_T5_29,
  MR_Word TypeInfo_for_T6_30,
  MR_Word TypeInfo_for_E_31,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_31, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_10 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
    MR_Box ArgX3_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
    MR_Box ArgY3_13 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2));
    MR_Box ArgX4_15 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3));
    MR_Box ArgY4_16 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3));
    MR_Box ArgX5_18 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4));
    MR_Box ArgY5_19 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4));
    MR_Box ArgX6_21 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5));
    MR_Box ArgY6_22 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 5));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_25, &SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_26, &SubResult2_11, ArgX2_9, ArgY2_10);
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
      {
        MR_Word SubResult3_14;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T3_27, &SubResult3_14, ArgX3_12, ArgY3_13);
        succeeded = (SubResult3_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_14;
        else
        {
          MR_Word SubResult4_17;

          mercury__builtin__compare_3_p_0(TypeInfo_for_T4_28, &SubResult4_17, ArgX4_15, ArgY4_16);
          succeeded = (SubResult4_17 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_17;
          else
          {
            MR_Word SubResult5_20;

            mercury__builtin__compare_3_p_0(TypeInfo_for_T5_29, &SubResult5_20, ArgX5_18, ArgY5_19);
            succeeded = (SubResult5_20 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_20;
            else
              mercury__builtin__compare_3_p_0(TypeInfo_for_T6_30, HeadVar__1_1, ArgX6_21, ArgY6_22);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe6_7_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word TypeInfo_for_T3_21,
  MR_Word TypeInfo_for_T4_22,
  MR_Word TypeInfo_for_T5_23,
  MR_Word TypeInfo_for_T6_24,
  MR_Word TypeInfo_for_E_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_25, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_8;
    MR_Box ArgX3_9 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY3_10;
    MR_Box ArgX4_11 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3));
    MR_Box ArgY4_12;
    MR_Box ArgX5_13 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4));
    MR_Box ArgY5_14;
    MR_Box ArgX6_15 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 5));
    MR_Box ArgY6_16;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      ArgY3_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
      ArgY4_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3));
      ArgY5_14 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4));
      ArgY6_16 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_19, ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_20, ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T3_21, ArgX3_9, ArgY3_10);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T4_22, ArgX4_11, ArgY4_12);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T5_23, ArgX5_13, ArgY5_14);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T6_24, ArgX6_15, ArgY6_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe5_5_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word TypeInfo_for_T3_8,
  MR_Word TypeInfo_for_T4_9,
  MR_Word TypeInfo_for_T5_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__maybe_error____Compare____maybe5_6_0(TypeInfo_for_T1_6, TypeInfo_for_T2_7, TypeInfo_for_T3_8, TypeInfo_for_T4_9, TypeInfo_for_T5_10, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe5_5_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word TypeInfo_for_T3_7,
  MR_Word TypeInfo_for_T4_8,
  MR_Word TypeInfo_for_T5_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__maybe_error____Unify____maybe5_6_0(TypeInfo_for_T1_5, TypeInfo_for_T2_6, TypeInfo_for_T3_7, TypeInfo_for_T4_8, TypeInfo_for_T5_9, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe5_6_0(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word TypeInfo_for_T5_26,
  MR_Word TypeInfo_for_E_27,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_20 == CastY_21);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_10 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
    MR_Box ArgX3_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
    MR_Box ArgY3_13 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2));
    MR_Box ArgX4_15 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3));
    MR_Box ArgY4_16 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3));
    MR_Box ArgX5_18 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4));
    MR_Box ArgY5_19 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_22, &SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_23, &SubResult2_11, ArgX2_9, ArgY2_10);
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
      {
        MR_Word SubResult3_14;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T3_24, &SubResult3_14, ArgX3_12, ArgY3_13);
        succeeded = (SubResult3_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_14;
        else
        {
          MR_Word SubResult4_17;

          mercury__builtin__compare_3_p_0(TypeInfo_for_T4_25, &SubResult4_17, ArgX4_15, ArgY4_16);
          succeeded = (SubResult4_17 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_17;
          else
            mercury__builtin__compare_3_p_0(TypeInfo_for_T5_26, HeadVar__1_1, ArgX5_18, ArgY5_19);
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe5_6_0(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word TypeInfo_for_T4_20,
  MR_Word TypeInfo_for_T5_21,
  MR_Word TypeInfo_for_E_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_22, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_8;
    MR_Box ArgX3_9 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY3_10;
    MR_Box ArgX4_11 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3));
    MR_Box ArgY4_12;
    MR_Box ArgX5_13 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4));
    MR_Box ArgY5_14;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      ArgY3_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
      ArgY4_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3));
      ArgY5_14 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_17, ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_18, ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T3_19, ArgX3_9, ArgY3_10);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T4_20, ArgX4_11, ArgY4_12);
            if (succeeded)
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T5_21, ArgX5_13, ArgY5_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word TypeInfo_for_T3_8,
  MR_Word TypeInfo_for_T4_9,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__maybe_error____Compare____maybe4_5_0(TypeInfo_for_T1_6, TypeInfo_for_T2_7, TypeInfo_for_T3_8, TypeInfo_for_T4_9, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word TypeInfo_for_T3_7,
  MR_Word TypeInfo_for_T4_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__maybe_error____Unify____maybe4_5_0(TypeInfo_for_T1_5, TypeInfo_for_T2_6, TypeInfo_for_T3_7, TypeInfo_for_T4_8, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_5_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word TypeInfo_for_T3_21,
  MR_Word TypeInfo_for_T4_22,
  MR_Word TypeInfo_for_E_23,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_23, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_10 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
    MR_Box ArgX3_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
    MR_Box ArgY3_13 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2));
    MR_Box ArgX4_15 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3));
    MR_Box ArgY4_16 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_19, &SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_20, &SubResult2_11, ArgX2_9, ArgY2_10);
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
      {
        MR_Word SubResult3_14;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T3_21, &SubResult3_14, ArgX3_12, ArgY3_13);
        succeeded = (SubResult3_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_14;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_T4_22, HeadVar__1_1, ArgX4_15, ArgY4_16);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_5_0(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word TypeInfo_for_T4_18,
  MR_Word TypeInfo_for_E_19,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_19, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_8;
    MR_Box ArgX3_9 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY3_10;
    MR_Box ArgX4_11 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3));
    MR_Box ArgY4_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      ArgY3_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
      ArgY4_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_15, ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_16, ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T3_17, ArgX3_9, ArgY3_10);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T4_18, ArgX4_11, ArgY4_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word TypeInfo_for_T3_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__maybe_error____Compare____maybe3_4_0(TypeInfo_for_T1_6, TypeInfo_for_T2_7, TypeInfo_for_T3_8, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word TypeInfo_for_T3_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__maybe_error____Unify____maybe3_4_0(TypeInfo_for_T1_5, TypeInfo_for_T2_6, TypeInfo_for_T3_7, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_4_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_T3_18,
  MR_Word TypeInfo_for_E_19,
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
      MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_19, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_10 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
    MR_Box ArgX3_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
    MR_Box ArgY3_13 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_16, &SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_17, &SubResult2_11, ArgX2_9, ArgY2_10);
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_T3_18, HeadVar__1_1, ArgX3_12, ArgY3_13);
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_4_0(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word TypeInfo_for_E_16,
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
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_16, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_8;
    MR_Box ArgX3_9 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      ArgY3_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_13, ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_14, ArgX2_7, ArgY2_8);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T3_15, ArgX3_9, ArgY3_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__maybe_error____Compare____maybe2_3_0(TypeInfo_for_T1_6, TypeInfo_for_T2_7, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__maybe_error____Unify____maybe2_3_0(TypeInfo_for_T1_5, TypeInfo_for_T2_6, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_3_0(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_E_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_15, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_10 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_13, &SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_14, HeadVar__1_1, ArgX2_9, ArgY2_10);
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_3_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word TypeInfo_for_E_13,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_13, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_11, ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_12, ArgX2_7, ArgY2_8);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__maybe_error____Compare____maybe1_2_0(TypeInfo_for_T1_6, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__maybe_error____Unify____maybe1_2_0(TypeInfo_for_T1_5, (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_2_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_E_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_11, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_10, HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_2_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_E_10,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_10, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_9, ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__maybe_error__separate_ok1_error1_3_p_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word Maybes_4,
  MR_Word * OKs_5,
  MR_Word * Specs_6)
{
  MR_Word RevOKs_7;

  parse_tree__maybe_error__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_97_114_97_116_101_95_111_107_49_95_101_114_114_111_114_49_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(Maybes_4, (MR_Word) ((MR_Unsigned) 0U), &RevOKs_7, (MR_Word) ((MR_Unsigned) 0U), Specs_6);
  mercury__list__reverse_2_p_0(TypeInfo_for_T1_10, RevOKs_7, OKs_5);
}

static void MR_CALL 
parse_tree__maybe_error__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_97_114_97_116_101_95_111_107_49_95_101_114_114_111_114_49_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevOKs_0_2,
  MR_Word * STATE_VARIABLE_RevOKs_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_RevOKs_3 = STATE_VARIABLE_RevOKs_0_2;
    }
    else
    {
      MR_Word Maybe_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Maybes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevOKs_22_22;
      MR_Word STATE_VARIABLE_Specs_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevOKs_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      if (((MR_tag((MR_Word) Maybe_12)) == (MR_Integer) 0))
      {
        MR_Word CurSpecs_17 = ((MR_Word) ((MR_hl_field(0, Maybe_12, (MR_Integer) 0))));

        STATE_VARIABLE_Specs_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CurSpecs_17, STATE_VARIABLE_Specs_0_4);
        STATE_VARIABLE_RevOKs_22_22 = STATE_VARIABLE_RevOKs_0_2;
      }
      else
      {
        MR_Box OK_16 = (MR_hl_field(1, Maybe_12, (MR_Integer) 0));

        {
          STATE_VARIABLE_RevOKs_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevOKs_22_22, 0) = OK_16;
          MR_hl_field(1, STATE_VARIABLE_RevOKs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevOKs_0_2));
        }
        STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Maybes_13;
      next_value_of_STATE_VARIABLE_RevOKs_0_2 = STATE_VARIABLE_RevOKs_22_22;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevOKs_0_2 = next_value_of_STATE_VARIABLE_RevOKs_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__maybe_error__det_project_ok1_2_p_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word Maybe1_3,
  MR_Box * Item_4)
{
  if (((MR_tag((MR_Word) Maybe1_3)) == (MR_Integer) 0))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.maybe_error.det_project_ok1\'/2", (MR_String) "error1");
      return;
    }
  else
    *Item_4 = (MR_hl_field(1, Maybe1_3, (MR_Integer) 0));
}

MR_bool MR_CALL 
parse_tree__maybe_error__project_ok1_2_p_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word Maybe1_3,
  MR_Box * Item_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Maybe1_3)) == (MR_Integer) 1);

  if (succeeded)
    *Item_4 = (MR_hl_field(1, Maybe1_3, (MR_Integer) 0));
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors_warnings6_1_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word TypeInfo_for_T3_12,
  MR_Word TypeInfo_for_T4_13,
  MR_Word TypeInfo_for_T5_14,
  MR_Word HeadVar__1_1)
{
  MR_Word Specs_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    Specs_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    Specs_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 5))));
  return Specs_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors_warnings5_1_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word TypeInfo_for_T3_11,
  MR_Word TypeInfo_for_T4_12,
  MR_Word HeadVar__1_1)
{
  MR_Word Specs_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    Specs_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    Specs_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
  return Specs_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors_warnings4_1_f_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Word TypeInfo_for_T3_10,
  MR_Word HeadVar__1_1)
{
  MR_Word Specs_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    Specs_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    Specs_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
  return Specs_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors_warnings3_1_f_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word TypeInfo_for_T2_8,
  MR_Word HeadVar__1_1)
{
  MR_Word Specs_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    Specs_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    Specs_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
  return Specs_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors_warnings2_1_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word HeadVar__1_1)
{
  MR_Word Specs_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    Specs_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    Specs_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
  return Specs_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors6_1_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word TypeInfo_for_T3_12,
  MR_Word TypeInfo_for_T4_13,
  MR_Word TypeInfo_for_T5_14,
  MR_Word TypeInfo_for_T6_15,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors5_1_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word TypeInfo_for_T3_11,
  MR_Word TypeInfo_for_T4_12,
  MR_Word TypeInfo_for_T5_13,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors4_1_f_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Word TypeInfo_for_T3_10,
  MR_Word TypeInfo_for_T4_11,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors3_1_f_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word TypeInfo_for_T2_8,
  MR_Word TypeInfo_for_T3_9,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors2_1_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors1_1_f_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  else
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe1_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe1_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe1_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe1_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe2_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe2_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe3_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe3_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe3_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe3_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe4_5_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe4_5_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe4_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe4_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe5_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe5_6_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe5_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe5_6_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_8)), ((MR_Word) (wrapper_arg_9)));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe5_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe5_5_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe5_5_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe5_5_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe6_7_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe6_7_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)), ((MR_Word) (wrapper_arg_9)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe6_7_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box wrapper_arg_10)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe6_7_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_9)), ((MR_Word) (wrapper_arg_10)));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe6_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box wrapper_arg_8)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe6_6_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), ((MR_Word) (wrapper_arg_8)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe6_6_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box wrapper_arg_9)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe6_6_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_8)), ((MR_Word) (wrapper_arg_9)));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__maybe_error__init(void)
{
}

void mercury__parse_tree__maybe_error__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_5);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_4);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe5_6);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe5_5);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe6_7);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe6_6);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0);
}

void mercury__parse_tree__maybe_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__maybe_error__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.maybe_error.
