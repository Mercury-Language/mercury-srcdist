/*
** Automatically generated from `maybe_error.m'
** by the Mercury compiler,
** version rotd-2020-03-17
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
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




static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1[2];

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1[2];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2[2];

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1[3];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3[2];

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0[1];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0;

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1[4];

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1;

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0[1];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1[1];

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4[2];

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4[2];

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0;

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1;

static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0[2];

static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0[2];

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0[2];

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0 = {
  (MR_String) "error1",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1 = {
  (MR_String) "ok1",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe1_1_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe1_1_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe1",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0 = {
  (MR_String) "error2",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1 = {
  (MR_String) "ok2",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe2_2_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe2_2_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe2",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0 = {
  (MR_String) "error3",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 3)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1 = {
  (MR_String) "ok3",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3 = {
  (MR_Integer) 3,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe3_3_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe3_3_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe3",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0 = {
  (MR_String) "error4",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 3),
  (MR_PseudoTypeInfo) ((MR_Integer) 4)
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1 = {
  (MR_String) "ok4",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1
};

static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_4 = {
  (MR_Integer) 4,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe4_4_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe4_4_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe4",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4
};

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0 = {
  (MR_String) "safe_to_continue",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1 = {
  (MR_String) "unsafe_to_continue",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe_safe_to_continue",
  {     parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0
};

void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0(
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word TypeInfo_for_T3_31,
  MR_Word TypeInfo_for_T4_32,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_34)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Box Var_35 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3));
      MR_Box Var_36 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      MR_Box Var_37 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box Var_38 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_17 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box ArgY2_20 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Box ArgY3_23 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
        MR_Box ArgY4_26 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3));
        MR_Word SubResult1_18;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T1_29, &SubResult1_18, Var_38, ArgY1_17);
        succeeded = (SubResult1_18 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_18;
        else
        {
          MR_Word SubResult2_21;

          mercury__builtin__compare_3_p_0(TypeInfo_for_T2_30, &SubResult2_21, Var_37, ArgY2_20);
          succeeded = (SubResult2_21 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_21;
          else
          {
            MR_Word SubResult3_24;

            mercury__builtin__compare_3_p_0(TypeInfo_for_T3_31, &SubResult3_24, Var_36, ArgY3_23);
            succeeded = (SubResult3_24 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_24;
            else
              mercury__builtin__compare_3_p_0(TypeInfo_for_T4_32, HeadVar__1_1, Var_35, ArgY4_26);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
  MR_Word TypeInfo_for_T3_17,
  MR_Word TypeInfo_for_T4_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_19_19 = (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_8;
      MR_Box ArgX3_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_10;
      MR_Box ArgX4_11 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3));
      MR_Box ArgY4_12;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        ArgY3_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        ArgY4_12 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3));
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
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Box Var_29 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box Var_31 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box ArgY2_18 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Box ArgY3_21 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
        MR_Word SubResult1_16;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T1_24, &SubResult1_16, Var_31, ArgY1_15);
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;

          mercury__builtin__compare_3_p_0(TypeInfo_for_T2_25, &SubResult2_19, Var_30, ArgY2_18);
          succeeded = (SubResult2_19 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
            mercury__builtin__compare_3_p_0(TypeInfo_for_T3_26, HeadVar__1_1, Var_29, ArgY3_21);
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_16_16 = (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_8;
      MR_Box ArgX3_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        ArgY3_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
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
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Box Var_23 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box Var_24 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box ArgY2_16 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Word SubResult1_14;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T1_19, &SubResult1_14, Var_24, ArgY1_13);
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_T2_20, HeadVar__1_1, Var_23, ArgY2_16);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0(
  MR_Word TypeInfo_for_T1_11,
  MR_Word TypeInfo_for_T2_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_13_13 = (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_11, ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_12, ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Box Var_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T1_14, HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_10_10 = (MR_Word) (&parse_tree__maybe_error_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_9, ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors4_1_f_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Word TypeInfo_for_T3_10,
  MR_Word TypeInfo_for_T4_11,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    else
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors3_1_f_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word TypeInfo_for_T2_8,
  MR_Word TypeInfo_for_T3_9,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    else
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors2_1_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    else
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors1_1_f_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    else
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__maybe_error____Unify____maybe1_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__maybe_error____Compare____maybe1_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__maybe_error____Unify____maybe2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__maybe_error____Compare____maybe2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__maybe_error____Unify____maybe3_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    return succeeded;
  }
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
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__maybe_error____Compare____maybe3_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
  {
    MR_bool succeeded;

    succeeded = parse_tree__maybe_error____Unify____maybe4_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
    return succeeded;
  }
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
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__maybe_error____Compare____maybe4_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__maybe_error__init(void)
{
}

void mercury__parse_tree__maybe_error__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_4);
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
