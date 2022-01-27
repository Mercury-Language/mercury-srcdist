/*
** Automatically generated from `output_prof_info.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


/* :- module output_prof_info. */
/* :- implementation. */

/*
INIT mercury__output_prof_info__init
ENDINIT
*/

#include "output_prof_info.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




#line 62 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6];

#line 65 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_child_0_0;

#line 68 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1];

#line 71 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1];

#line 74 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1];

#line 77 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1];

#line 80 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0;

#line 83 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0;

#line 86 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_0_0[3];

#line 89 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_0_0;

#line 92 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_0_0[1];

#line 95 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_0[1];

#line 98 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_0[1];

#line 101 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_0[1];

#line 104 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0;

#line 107 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0;

#line 110 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_0[12];

#line 113 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0;

#line 116 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_1[9];

#line 119 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1;

#line 122 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1];

#line 125 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1];

#line 128 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0[2];

#line 131 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2];

#line 134 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2];

#line 137 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5];

#line 140 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_parent_0_0;

#line 143 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1];

#line 146 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1];

#line 149 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1];

#line 152 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1];

#line 155 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
#line 158 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 160 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 163 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
#line 166 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 168 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 170 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 173 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_0_0_10001(
#line 176 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 178 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 181 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_0_0_10001(
#line 184 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 186 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 188 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 191 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
#line 194 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 196 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 199 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
#line 202 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 204 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 206 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 209 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
#line 212 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 214 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 217 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
#line 220 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 222 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 224 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);


static /* final */ const MR_Box output_prof_info_scalar_common_1[1][3];

static /* final */ const MR_Box output_prof_info_scalar_common_2[3][2];




static /* final */ const MR_Box output_prof_info_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0))
  },
};

static /* final */ const MR_Box output_prof_info_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_parent_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_child_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 275 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 285 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_child_0_0 = {
  (MR_String) "child",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_child_0_0,
  NULL,
  NULL,
  NULL
};

#line 300 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

#line 305 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_child_0_0
  }
};

#line 314 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

#line 319 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1] = {
  (MR_Integer) 0
};

#line 324 "output_prof_info.c"
const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_child_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____child_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____child_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "child",
  {
    output_prof_info__output_prof_info__du_name_ordered_child_0
  },
  {
    output_prof_info__output_prof_info__du_ptag_ordered_child_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_child_0
};

#line 345 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0
  }
};

#line 354 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 362 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_0_0[3] = {
  (MR_PseudoTypeInfo) &output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 369 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_0_0 = {
  (MR_String) "output",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_output_0_0,
  NULL,
  NULL,
  NULL
};

#line 384 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_0_0
};

#line 389 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_0_0
  }
};

#line 398 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_0_0
};

#line 403 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_0[1] = {
  (MR_Integer) 0
};

#line 408 "output_prof_info.c"
const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_output_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____output_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____output_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "output",
  {
    output_prof_info__output_prof_info__du_name_ordered_output_0
  },
  {
    output_prof_info__output_prof_info__du_ptag_ordered_output_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_output_0
};

#line 429 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_parent_0
  }
};

#line 437 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_child_0
  }
};

#line 445 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_0[12] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0
};

#line 461 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0 = {
  (MR_String) "output_prof",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_output_prof_0_0,
  NULL,
  NULL,
  NULL
};

#line 476 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_1[9] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0
};

#line 489 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1 = {
  (MR_String) "output_cycle_prof",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  output_prof_info__output_prof_info__field_types_output_prof_0_1,
  NULL,
  NULL,
  NULL
};

#line 504 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

#line 509 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1
};

#line 514 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1
  }
};

#line 528 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1,
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

#line 534 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 540 "output_prof_info.c"
const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_output_prof_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____output_prof_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____output_prof_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "output_prof",
  {
    output_prof_info__output_prof_info__du_name_ordered_output_prof_0
  },
  {
    output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_output_prof_0
};

#line 561 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 570 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_parent_0_0 = {
  (MR_String) "parent",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_parent_0_0,
  NULL,
  NULL,
  NULL
};

#line 585 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

#line 590 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_parent_0_0
  }
};

#line 599 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

#line 604 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1] = {
  (MR_Integer) 0
};

#line 609 "output_prof_info.c"
const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_parent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____parent_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____parent_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "parent",
  {
    output_prof_info__output_prof_info__du_name_ordered_parent_0
  },
  {
    output_prof_info__output_prof_info__du_ptag_ordered_parent_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_parent_0
};

#line 630 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
#line 633 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 635 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 637 "output_prof_info.c"
{
#line 639 "output_prof_info.c"
  {
#line 641 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 644 "output_prof_info.c"
    {
#line 646 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____child_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 649 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 651 "output_prof_info.c"
  }
#line 653 "output_prof_info.c"
}

#line 656 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
#line 659 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 661 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 663 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 665 "output_prof_info.c"
{
#line 667 "output_prof_info.c"
  {
#line 669 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 672 "output_prof_info.c"
    {
#line 674 "output_prof_info.c"
      output_prof_info____Compare____child_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 677 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 679 "output_prof_info.c"
  }
#line 681 "output_prof_info.c"
}

#line 684 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_0_0_10001(
#line 687 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 689 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 691 "output_prof_info.c"
{
#line 693 "output_prof_info.c"
  {
#line 695 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 698 "output_prof_info.c"
    {
#line 700 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____output_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 703 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 705 "output_prof_info.c"
  }
#line 707 "output_prof_info.c"
}

#line 710 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_0_0_10001(
#line 713 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 715 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 717 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 719 "output_prof_info.c"
{
#line 721 "output_prof_info.c"
  {
#line 723 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 726 "output_prof_info.c"
    {
#line 728 "output_prof_info.c"
      output_prof_info____Compare____output_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 731 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 733 "output_prof_info.c"
  }
#line 735 "output_prof_info.c"
}

#line 738 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
#line 741 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 743 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 745 "output_prof_info.c"
{
#line 747 "output_prof_info.c"
  {
#line 749 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 752 "output_prof_info.c"
    {
#line 754 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____output_prof_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 757 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 759 "output_prof_info.c"
  }
#line 761 "output_prof_info.c"
}

#line 764 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
#line 767 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 769 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 771 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 773 "output_prof_info.c"
{
#line 775 "output_prof_info.c"
  {
#line 777 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 780 "output_prof_info.c"
    {
#line 782 "output_prof_info.c"
      output_prof_info____Compare____output_prof_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 785 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 787 "output_prof_info.c"
  }
#line 789 "output_prof_info.c"
}

#line 792 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
#line 795 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 797 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 799 "output_prof_info.c"
{
#line 801 "output_prof_info.c"
  {
#line 803 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 806 "output_prof_info.c"
    {
#line 808 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____parent_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 811 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 813 "output_prof_info.c"
  }
#line 815 "output_prof_info.c"
}

#line 818 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
#line 821 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 823 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 825 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 827 "output_prof_info.c"
{
#line 829 "output_prof_info.c"
  {
#line 831 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 834 "output_prof_info.c"
    {
#line 836 "output_prof_info.c"
      output_prof_info____Compare____parent_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 839 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 841 "output_prof_info.c"
  }
#line 843 "output_prof_info.c"
}

#line 76 "output_prof_info.m"
void MR_CALL 
output_prof_info____Compare____parent_0_0(
#line 76 "output_prof_info.m"
  MR_Word * output_prof_info__HeadVar__1_1,
#line 76 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2,
#line 76 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__3_3)
#line 76 "output_prof_info.m"
{
#line 76 "output_prof_info.m"
  {
#line 76 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 76 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_18 = (MR_Integer) output_prof_info__HeadVar__2_2;
#line 76 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_19 = (MR_Integer) output_prof_info__HeadVar__3_3;

#line 76 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_18 == output_prof_info__CastY_19);
#line 76 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 870 "output_prof_info.c"
      *output_prof_info__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "output_prof_info.m"
    else
#line 76 "output_prof_info.m"
      {
#line 76 "output_prof_info.m"
        MR_String output_prof_info__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 76 "output_prof_info.m"
        MR_String output_prof_info__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 76 "output_prof_info.m"
        MR_Word output_prof_info__V_14_14;

#line 76 "output_prof_info.m"
        {
#line 76 "output_prof_info.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&output_prof_info__V_14_14, output_prof_info__V_4_4, output_prof_info__V_9_9);
        }
#line 904 "output_prof_info.c"
        output_prof_info__succeeded = (output_prof_info__V_14_14 == (MR_Integer) 0);
#line 76 "output_prof_info.m"
        output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 76 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
          *output_prof_info__HeadVar__1_1 = output_prof_info__V_14_14;
#line 76 "output_prof_info.m"
        else
#line 76 "output_prof_info.m"
          {
#line 76 "output_prof_info.m"
            MR_Word output_prof_info__V_15_15;

#line 76 "output_prof_info.m"
            {
#line 76 "output_prof_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_15_15, output_prof_info__V_5_5, output_prof_info__V_10_10);
            }
#line 924 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_15_15 == (MR_Integer) 0);
#line 76 "output_prof_info.m"
            output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 76 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
              *output_prof_info__HeadVar__1_1 = output_prof_info__V_15_15;
#line 76 "output_prof_info.m"
            else
#line 76 "output_prof_info.m"
              {
#line 76 "output_prof_info.m"
                MR_Word output_prof_info__V_16_16;

#line 76 "output_prof_info.m"
                {
#line 76 "output_prof_info.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_16_16, output_prof_info__V_6_6, output_prof_info__V_11_11);
                }
#line 944 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_16_16 == (MR_Integer) 0);
#line 76 "output_prof_info.m"
                output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 76 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
                  *output_prof_info__HeadVar__1_1 = output_prof_info__V_16_16;
#line 76 "output_prof_info.m"
                else
#line 76 "output_prof_info.m"
                  {
#line 76 "output_prof_info.m"
                    MR_Word output_prof_info__V_17_17;

#line 76 "output_prof_info.m"
                    {
#line 76 "output_prof_info.m"
                      mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_17_17, output_prof_info__V_7_7, output_prof_info__V_12_12);
                    }
#line 964 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_17_17 == (MR_Integer) 0);
#line 76 "output_prof_info.m"
                    output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 76 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
                      *output_prof_info__HeadVar__1_1 = output_prof_info__V_17_17;
#line 76 "output_prof_info.m"
                    else
#line 76 "output_prof_info.m"
                      {
#line 76 "output_prof_info.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(output_prof_info__HeadVar__1_1, output_prof_info__V_8_8, output_prof_info__V_13_13);
#line 76 "output_prof_info.m"
                        return;
                      }
#line 76 "output_prof_info.m"
                  }
#line 76 "output_prof_info.m"
              }
#line 76 "output_prof_info.m"
          }
#line 76 "output_prof_info.m"
      }
#line 76 "output_prof_info.m"
  }
#line 76 "output_prof_info.m"
}

#line 76 "output_prof_info.m"
MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0(
#line 76 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__1_1,
#line 76 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2)
#line 76 "output_prof_info.m"
{
#line 76 "output_prof_info.m"
  {
#line 76 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 76 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_13 = (MR_Integer) output_prof_info__HeadVar__1_1;
#line 76 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_14 = (MR_Integer) output_prof_info__HeadVar__2_2;

#line 76 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_13 == output_prof_info__CastY_14);
#line 76 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
      output_prof_info__succeeded = MR_TRUE;
#line 76 "output_prof_info.m"
    else
#line 76 "output_prof_info.m"
      {
#line 76 "output_prof_info.m"
        MR_String output_prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 76 "output_prof_info.m"
        MR_String output_prof_info__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "output_prof_info.m"
        MR_Float output_prof_info__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "output_prof_info.m"
        MR_Integer output_prof_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));

#line 1043 "output_prof_info.c"
        output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_8_8) == 0);
#line 76 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
          {
#line 1049 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_9_9);
#line 76 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
              {
#line 1055 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_10_10);
#line 76 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
                  {
#line 1061 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_11_11);
#line 76 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 1065 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_7_7 == output_prof_info__V_12_12);
#line 76 "output_prof_info.m"
                  }
#line 76 "output_prof_info.m"
              }
#line 76 "output_prof_info.m"
          }
#line 76 "output_prof_info.m"
      }
#line 76 "output_prof_info.m"
    return output_prof_info__succeeded;
#line 76 "output_prof_info.m"
  }
#line 76 "output_prof_info.m"
}

#line 45 "output_prof_info.m"
void MR_CALL 
output_prof_info____Compare____output_prof_0_0(
#line 45 "output_prof_info.m"
  MR_Word * output_prof_info__HeadVar__1_1,
#line 45 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2,
#line 45 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__3_3)
#line 45 "output_prof_info.m"
{
#line 45 "output_prof_info.m"
  {
#line 45 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 45 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_107 = (MR_Integer) output_prof_info__HeadVar__2_2;
#line 45 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_108 = (MR_Integer) output_prof_info__HeadVar__3_3;

#line 45 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_107 == output_prof_info__CastY_108);
#line 45 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 1106 "output_prof_info.c"
      *output_prof_info__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "output_prof_info.m"
    else
#line 45 "output_prof_info.m"
      if (((MR_tag((MR_Word) output_prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 45 "output_prof_info.m"
        {
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_134_134 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_135_135 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_136_136 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
          MR_String output_prof_info__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));

#line 45 "output_prof_info.m"
          if (((MR_tag((MR_Word) output_prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 45 "output_prof_info.m"
            {
#line 45 "output_prof_info.m"
              MR_String output_prof_info__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 45 "output_prof_info.m"
              MR_Integer output_prof_info__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
              MR_Float output_prof_info__V_92_92 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
              MR_Float output_prof_info__V_93_93 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
              MR_Float output_prof_info__V_94_94 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
              MR_Integer output_prof_info__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
              MR_Integer output_prof_info__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__3_3, (MR_Integer) 8)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_99_99;

#line 45 "output_prof_info.m"
              {
#line 45 "output_prof_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&output_prof_info__V_99_99, output_prof_info__V_138_138, output_prof_info__V_90_90);
              }
#line 1163 "output_prof_info.c"
              output_prof_info__succeeded = (output_prof_info__V_99_99 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
              output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                *output_prof_info__HeadVar__1_1 = output_prof_info__V_99_99;
#line 45 "output_prof_info.m"
              else
#line 45 "output_prof_info.m"
                {
#line 45 "output_prof_info.m"
                  MR_Word output_prof_info__V_100_100;

#line 45 "output_prof_info.m"
                  {
#line 45 "output_prof_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_100_100, output_prof_info__V_137_137, output_prof_info__V_91_91);
                  }
#line 1183 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_100_100 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                  output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    *output_prof_info__HeadVar__1_1 = output_prof_info__V_100_100;
#line 45 "output_prof_info.m"
                  else
#line 45 "output_prof_info.m"
                    {
#line 45 "output_prof_info.m"
                      MR_Word output_prof_info__V_101_101;

#line 45 "output_prof_info.m"
                      {
#line 45 "output_prof_info.m"
                        mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_101_101, output_prof_info__V_136_136, output_prof_info__V_92_92);
                      }
#line 1203 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_101_101 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                      output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        *output_prof_info__HeadVar__1_1 = output_prof_info__V_101_101;
#line 45 "output_prof_info.m"
                      else
#line 45 "output_prof_info.m"
                        {
#line 45 "output_prof_info.m"
                          MR_Word output_prof_info__V_102_102;

#line 45 "output_prof_info.m"
                          {
#line 45 "output_prof_info.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_102_102, output_prof_info__V_135_135, output_prof_info__V_93_93);
                          }
#line 1223 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_102_102 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                          output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            *output_prof_info__HeadVar__1_1 = output_prof_info__V_102_102;
#line 45 "output_prof_info.m"
                          else
#line 45 "output_prof_info.m"
                            {
#line 45 "output_prof_info.m"
                              MR_Word output_prof_info__V_103_103;

#line 45 "output_prof_info.m"
                              {
#line 45 "output_prof_info.m"
                                mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_103_103, output_prof_info__V_134_134, output_prof_info__V_94_94);
                              }
#line 1243 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_103_103 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                              output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                *output_prof_info__HeadVar__1_1 = output_prof_info__V_103_103;
#line 45 "output_prof_info.m"
                              else
#line 45 "output_prof_info.m"
                                {
#line 45 "output_prof_info.m"
                                  MR_Word output_prof_info__V_104_104;

#line 45 "output_prof_info.m"
                                  {
#line 45 "output_prof_info.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_104_104, output_prof_info__V_133_133, output_prof_info__V_95_95);
                                  }
#line 1263 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_104_104 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                  output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    *output_prof_info__HeadVar__1_1 = output_prof_info__V_104_104;
#line 45 "output_prof_info.m"
                                  else
#line 45 "output_prof_info.m"
                                    {
#line 45 "output_prof_info.m"
                                      MR_Word output_prof_info__V_105_105;

#line 45 "output_prof_info.m"
                                      {
#line 45 "output_prof_info.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_105_105, output_prof_info__V_132_132, output_prof_info__V_96_96);
                                      }
#line 1283 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_105_105 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                      output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        *output_prof_info__HeadVar__1_1 = output_prof_info__V_105_105;
#line 45 "output_prof_info.m"
                                      else
#line 45 "output_prof_info.m"
                                        {
#line 45 "output_prof_info.m"
                                          MR_Word output_prof_info__V_106_106;

#line 45 "output_prof_info.m"
                                          {
#line 45 "output_prof_info.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[1], &output_prof_info__V_106_106, ((MR_Box) (output_prof_info__V_131_131)), ((MR_Box) (output_prof_info__V_97_97)));
                                          }
#line 1303 "output_prof_info.c"
                                          output_prof_info__succeeded = (output_prof_info__V_106_106 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                          output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            *output_prof_info__HeadVar__1_1 = output_prof_info__V_106_106;
#line 45 "output_prof_info.m"
                                          else
#line 45 "output_prof_info.m"
                                            {
#line 45 "output_prof_info.m"
                                              {
#line 45 "output_prof_info.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[2], output_prof_info__HeadVar__1_1, ((MR_Box) (output_prof_info__V_130_130)), ((MR_Box) (output_prof_info__V_98_98)));
#line 45 "output_prof_info.m"
                                                return;
                                              }
#line 45 "output_prof_info.m"
                                            }
#line 45 "output_prof_info.m"
                                        }
#line 45 "output_prof_info.m"
                                    }
#line 45 "output_prof_info.m"
                                }
#line 45 "output_prof_info.m"
                            }
#line 45 "output_prof_info.m"
                        }
#line 45 "output_prof_info.m"
                    }
#line 45 "output_prof_info.m"
                }
#line 45 "output_prof_info.m"
            }
#line 45 "output_prof_info.m"
          else
#line 1342 "output_prof_info.c"
            *output_prof_info__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "output_prof_info.m"
        }
#line 45 "output_prof_info.m"
      else
#line 45 "output_prof_info.m"
        {
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 11)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 10)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 9)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_145_145 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_146_146 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_147_147 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_148_148 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
          MR_String output_prof_info__V_150_150 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));

#line 45 "output_prof_info.m"
          if (((MR_tag((MR_Word) output_prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1377 "output_prof_info.c"
            *output_prof_info__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "output_prof_info.m"
          else
#line 45 "output_prof_info.m"
            {
#line 45 "output_prof_info.m"
              MR_String output_prof_info__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 45 "output_prof_info.m"
              MR_Integer output_prof_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
              MR_Float output_prof_info__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
              MR_Float output_prof_info__V_19_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
              MR_Float output_prof_info__V_20_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
              MR_Float output_prof_info__V_21_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
              MR_Integer output_prof_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
              MR_Integer output_prof_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 8)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 9)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 10)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 11)));
#line 45 "output_prof_info.m"
              MR_Word output_prof_info__V_28_28;

#line 45 "output_prof_info.m"
              {
#line 45 "output_prof_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&output_prof_info__V_28_28, output_prof_info__V_150_150, output_prof_info__V_16_16);
              }
#line 1415 "output_prof_info.c"
              output_prof_info__succeeded = (output_prof_info__V_28_28 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
              output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                *output_prof_info__HeadVar__1_1 = output_prof_info__V_28_28;
#line 45 "output_prof_info.m"
              else
#line 45 "output_prof_info.m"
                {
#line 45 "output_prof_info.m"
                  MR_Word output_prof_info__V_29_29;

#line 45 "output_prof_info.m"
                  {
#line 45 "output_prof_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_29_29, output_prof_info__V_149_149, output_prof_info__V_17_17);
                  }
#line 1435 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_29_29 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                  output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    *output_prof_info__HeadVar__1_1 = output_prof_info__V_29_29;
#line 45 "output_prof_info.m"
                  else
#line 45 "output_prof_info.m"
                    {
#line 45 "output_prof_info.m"
                      MR_Word output_prof_info__V_30_30;

#line 45 "output_prof_info.m"
                      {
#line 45 "output_prof_info.m"
                        mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_30_30, output_prof_info__V_148_148, output_prof_info__V_18_18);
                      }
#line 1455 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_30_30 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                      output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        *output_prof_info__HeadVar__1_1 = output_prof_info__V_30_30;
#line 45 "output_prof_info.m"
                      else
#line 45 "output_prof_info.m"
                        {
#line 45 "output_prof_info.m"
                          MR_Word output_prof_info__V_31_31;

#line 45 "output_prof_info.m"
                          {
#line 45 "output_prof_info.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_31_31, output_prof_info__V_147_147, output_prof_info__V_19_19);
                          }
#line 1475 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_31_31 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                          output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            *output_prof_info__HeadVar__1_1 = output_prof_info__V_31_31;
#line 45 "output_prof_info.m"
                          else
#line 45 "output_prof_info.m"
                            {
#line 45 "output_prof_info.m"
                              MR_Word output_prof_info__V_32_32;

#line 45 "output_prof_info.m"
                              {
#line 45 "output_prof_info.m"
                                mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_32_32, output_prof_info__V_146_146, output_prof_info__V_20_20);
                              }
#line 1495 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_32_32 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                              output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                *output_prof_info__HeadVar__1_1 = output_prof_info__V_32_32;
#line 45 "output_prof_info.m"
                              else
#line 45 "output_prof_info.m"
                                {
#line 45 "output_prof_info.m"
                                  MR_Word output_prof_info__V_33_33;

#line 45 "output_prof_info.m"
                                  {
#line 45 "output_prof_info.m"
                                    mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_33_33, output_prof_info__V_145_145, output_prof_info__V_21_21);
                                  }
#line 1515 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_33_33 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                  output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    *output_prof_info__HeadVar__1_1 = output_prof_info__V_33_33;
#line 45 "output_prof_info.m"
                                  else
#line 45 "output_prof_info.m"
                                    {
#line 45 "output_prof_info.m"
                                      MR_Word output_prof_info__V_34_34;

#line 45 "output_prof_info.m"
                                      {
#line 45 "output_prof_info.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_34_34, output_prof_info__V_144_144, output_prof_info__V_22_22);
                                      }
#line 1535 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_34_34 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                      output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        *output_prof_info__HeadVar__1_1 = output_prof_info__V_34_34;
#line 45 "output_prof_info.m"
                                      else
#line 45 "output_prof_info.m"
                                        {
#line 45 "output_prof_info.m"
                                          MR_Word output_prof_info__V_35_35;

#line 45 "output_prof_info.m"
                                          {
#line 45 "output_prof_info.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_35_35, output_prof_info__V_143_143, output_prof_info__V_23_23);
                                          }
#line 1555 "output_prof_info.c"
                                          output_prof_info__succeeded = (output_prof_info__V_35_35 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                          output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            *output_prof_info__HeadVar__1_1 = output_prof_info__V_35_35;
#line 45 "output_prof_info.m"
                                          else
#line 45 "output_prof_info.m"
                                            {
#line 45 "output_prof_info.m"
                                              MR_Word output_prof_info__V_36_36;

#line 45 "output_prof_info.m"
                                              {
#line 45 "output_prof_info.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[1], &output_prof_info__V_36_36, ((MR_Box) (output_prof_info__V_142_142)), ((MR_Box) (output_prof_info__V_24_24)));
                                              }
#line 1575 "output_prof_info.c"
                                              output_prof_info__succeeded = (output_prof_info__V_36_36 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                              output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                *output_prof_info__HeadVar__1_1 = output_prof_info__V_36_36;
#line 45 "output_prof_info.m"
                                              else
#line 45 "output_prof_info.m"
                                                {
#line 45 "output_prof_info.m"
                                                  MR_Word output_prof_info__V_37_37;

#line 45 "output_prof_info.m"
                                                  {
#line 45 "output_prof_info.m"
                                                    mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[2], &output_prof_info__V_37_37, ((MR_Box) (output_prof_info__V_141_141)), ((MR_Box) (output_prof_info__V_25_25)));
                                                  }
#line 1595 "output_prof_info.c"
                                                  output_prof_info__succeeded = (output_prof_info__V_37_37 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                                  output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                    *output_prof_info__HeadVar__1_1 = output_prof_info__V_37_37;
#line 45 "output_prof_info.m"
                                                  else
#line 45 "output_prof_info.m"
                                                    {
#line 45 "output_prof_info.m"
                                                      MR_Word output_prof_info__V_38_38;

#line 45 "output_prof_info.m"
                                                      {
#line 45 "output_prof_info.m"
                                                        mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[1], &output_prof_info__V_38_38, ((MR_Box) (output_prof_info__V_140_140)), ((MR_Box) (output_prof_info__V_26_26)));
                                                      }
#line 1615 "output_prof_info.c"
                                                      output_prof_info__succeeded = (output_prof_info__V_38_38 == (MR_Integer) 0);
#line 45 "output_prof_info.m"
                                                      output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 45 "output_prof_info.m"
                                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                        *output_prof_info__HeadVar__1_1 = output_prof_info__V_38_38;
#line 45 "output_prof_info.m"
                                                      else
#line 45 "output_prof_info.m"
                                                        {
#line 45 "output_prof_info.m"
                                                          {
#line 45 "output_prof_info.m"
                                                            mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[2], output_prof_info__HeadVar__1_1, ((MR_Box) (output_prof_info__V_139_139)), ((MR_Box) (output_prof_info__V_27_27)));
#line 45 "output_prof_info.m"
                                                            return;
                                                          }
#line 45 "output_prof_info.m"
                                                        }
#line 45 "output_prof_info.m"
                                                    }
#line 45 "output_prof_info.m"
                                                }
#line 45 "output_prof_info.m"
                                            }
#line 45 "output_prof_info.m"
                                        }
#line 45 "output_prof_info.m"
                                    }
#line 45 "output_prof_info.m"
                                }
#line 45 "output_prof_info.m"
                            }
#line 45 "output_prof_info.m"
                        }
#line 45 "output_prof_info.m"
                    }
#line 45 "output_prof_info.m"
                }
#line 45 "output_prof_info.m"
            }
#line 45 "output_prof_info.m"
        }
#line 45 "output_prof_info.m"
  }
#line 45 "output_prof_info.m"
}

#line 45 "output_prof_info.m"
MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0(
#line 45 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__1_1,
#line 45 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2)
#line 45 "output_prof_info.m"
{
#line 45 "output_prof_info.m"
  {
#line 45 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 45 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_45 = (MR_Integer) output_prof_info__HeadVar__1_1;
#line 45 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_46 = (MR_Integer) output_prof_info__HeadVar__2_2;

#line 45 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_45 == output_prof_info__CastY_46);
#line 45 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
      output_prof_info__succeeded = MR_TRUE;
#line 45 "output_prof_info.m"
    else
#line 45 "output_prof_info.m"
      if (((MR_tag((MR_Word) output_prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 45 "output_prof_info.m"
        {
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__TypeInfo_47_47;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__TypeInfo_48_48;
#line 45 "output_prof_info.m"
          MR_String output_prof_info__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_30_30 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_31_31 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 45 "output_prof_info.m"
          MR_String output_prof_info__V_36_36;
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_37_37;
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_38_38;
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_39_39;
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_40_40;
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_41_41;
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_42_42;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_43_43;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_44_44;

#line 45 "output_prof_info.m"
          output_prof_info__succeeded = ((MR_tag((MR_Word) output_prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 45 "output_prof_info.m"
          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
            {
#line 45 "output_prof_info.m"
              output_prof_info__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "output_prof_info.m"
              output_prof_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
              output_prof_info__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
              output_prof_info__V_39_39 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
              output_prof_info__V_40_40 = MR_unbox_float((MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
              output_prof_info__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
              output_prof_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
              output_prof_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
              output_prof_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), output_prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 1760 "output_prof_info.c"
              output_prof_info__succeeded = (strcmp(output_prof_info__V_27_27, output_prof_info__V_36_36) == 0);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                {
#line 1766 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_28_28 == output_prof_info__V_37_37);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    {
#line 1772 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_29_29 == output_prof_info__V_38_38);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        {
#line 1778 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_30_30 == output_prof_info__V_39_39);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            {
#line 1784 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_31_31 == output_prof_info__V_40_40);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                {
#line 1790 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_32_32 == output_prof_info__V_41_41);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    {
#line 1796 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_33_33 == output_prof_info__V_42_42);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        {
#line 1802 "output_prof_info.c"
                                          output_prof_info__TypeInfo_47_47 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 1804 "output_prof_info.c"
                                          {
#line 1806 "output_prof_info.c"
                                            output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_47_47, ((MR_Box) (output_prof_info__V_34_34)), ((MR_Box) (output_prof_info__V_43_43)));
                                          }
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            {
#line 1813 "output_prof_info.c"
                                              output_prof_info__TypeInfo_48_48 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 1815 "output_prof_info.c"
                                              {
#line 1817 "output_prof_info.c"
                                                return output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_48_48, ((MR_Box) (output_prof_info__V_35_35)), ((MR_Box) (output_prof_info__V_44_44)));
                                              }
#line 45 "output_prof_info.m"
                                            }
#line 45 "output_prof_info.m"
                                        }
#line 45 "output_prof_info.m"
                                    }
#line 45 "output_prof_info.m"
                                }
#line 45 "output_prof_info.m"
                            }
#line 45 "output_prof_info.m"
                        }
#line 45 "output_prof_info.m"
                    }
#line 45 "output_prof_info.m"
                }
#line 45 "output_prof_info.m"
            }
#line 45 "output_prof_info.m"
        }
#line 45 "output_prof_info.m"
      else
#line 45 "output_prof_info.m"
        {
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__TypeInfo_49_49;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__TypeInfo_50_50;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__TypeInfo_51_51;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__TypeInfo_52_52;
#line 45 "output_prof_info.m"
          MR_String output_prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 9)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 10)));
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 11)));
#line 45 "output_prof_info.m"
          MR_String output_prof_info__V_15_15;
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_16_16;
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_17_17;
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_18_18;
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_19_19;
#line 45 "output_prof_info.m"
          MR_Float output_prof_info__V_20_20;
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_21_21;
#line 45 "output_prof_info.m"
          MR_Integer output_prof_info__V_22_22;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_23_23;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_24_24;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_25_25;
#line 45 "output_prof_info.m"
          MR_Word output_prof_info__V_26_26;

#line 45 "output_prof_info.m"
          output_prof_info__succeeded = ((MR_tag((MR_Word) output_prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 45 "output_prof_info.m"
          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
            {
#line 45 "output_prof_info.m"
              output_prof_info__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "output_prof_info.m"
              output_prof_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "output_prof_info.m"
              output_prof_info__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "output_prof_info.m"
              output_prof_info__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "output_prof_info.m"
              output_prof_info__V_19_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "output_prof_info.m"
              output_prof_info__V_20_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "output_prof_info.m"
              output_prof_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "output_prof_info.m"
              output_prof_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "output_prof_info.m"
              output_prof_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 45 "output_prof_info.m"
              output_prof_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 9)));
#line 45 "output_prof_info.m"
              output_prof_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 10)));
#line 45 "output_prof_info.m"
              output_prof_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 11)));
#line 1931 "output_prof_info.c"
              output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_15_15) == 0);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                {
#line 1937 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_16_16);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    {
#line 1943 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_17_17);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        {
#line 1949 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_18_18);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            {
#line 1955 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_7_7 == output_prof_info__V_19_19);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                {
#line 1961 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_8_8 == output_prof_info__V_20_20);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    {
#line 1967 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_9_9 == output_prof_info__V_21_21);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        {
#line 1973 "output_prof_info.c"
                                          output_prof_info__succeeded = (output_prof_info__V_10_10 == output_prof_info__V_22_22);
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            {
#line 1979 "output_prof_info.c"
                                              output_prof_info__TypeInfo_49_49 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 1981 "output_prof_info.c"
                                              {
#line 1983 "output_prof_info.c"
                                                output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_49_49, ((MR_Box) (output_prof_info__V_11_11)), ((MR_Box) (output_prof_info__V_23_23)));
                                              }
#line 45 "output_prof_info.m"
                                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                {
#line 1990 "output_prof_info.c"
                                                  output_prof_info__TypeInfo_50_50 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 1992 "output_prof_info.c"
                                                  {
#line 1994 "output_prof_info.c"
                                                    output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_50_50, ((MR_Box) (output_prof_info__V_12_12)), ((MR_Box) (output_prof_info__V_24_24)));
                                                  }
#line 45 "output_prof_info.m"
                                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                    {
#line 2001 "output_prof_info.c"
                                                      output_prof_info__TypeInfo_51_51 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 2003 "output_prof_info.c"
                                                      {
#line 2005 "output_prof_info.c"
                                                        output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_51_51, ((MR_Box) (output_prof_info__V_13_13)), ((MR_Box) (output_prof_info__V_25_25)));
                                                      }
#line 45 "output_prof_info.m"
                                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                        {
#line 2012 "output_prof_info.c"
                                                          output_prof_info__TypeInfo_52_52 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 2014 "output_prof_info.c"
                                                          {
#line 2016 "output_prof_info.c"
                                                            return output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_52_52, ((MR_Box) (output_prof_info__V_14_14)), ((MR_Box) (output_prof_info__V_26_26)));
                                                          }
#line 45 "output_prof_info.m"
                                                        }
#line 45 "output_prof_info.m"
                                                    }
#line 45 "output_prof_info.m"
                                                }
#line 45 "output_prof_info.m"
                                            }
#line 45 "output_prof_info.m"
                                        }
#line 45 "output_prof_info.m"
                                    }
#line 45 "output_prof_info.m"
                                }
#line 45 "output_prof_info.m"
                            }
#line 45 "output_prof_info.m"
                        }
#line 45 "output_prof_info.m"
                    }
#line 45 "output_prof_info.m"
                }
#line 45 "output_prof_info.m"
            }
#line 45 "output_prof_info.m"
        }
#line 45 "output_prof_info.m"
    return output_prof_info__succeeded;
#line 45 "output_prof_info.m"
  }
#line 45 "output_prof_info.m"
}

#line 30 "output_prof_info.m"
void MR_CALL 
output_prof_info____Compare____output_0_0(
#line 30 "output_prof_info.m"
  MR_Word * output_prof_info__HeadVar__1_1,
#line 30 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2,
#line 30 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__3_3)
#line 30 "output_prof_info.m"
{
#line 30 "output_prof_info.m"
  {
#line 30 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 30 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_12 = (MR_Integer) output_prof_info__HeadVar__2_2;
#line 30 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_13 = (MR_Integer) output_prof_info__HeadVar__3_3;

#line 30 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_12 == output_prof_info__CastY_13);
#line 30 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 2076 "output_prof_info.c"
      *output_prof_info__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "output_prof_info.m"
    else
#line 30 "output_prof_info.m"
      {
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_10_10;

#line 30 "output_prof_info.m"
        {
#line 30 "output_prof_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_1[0], &output_prof_info__V_10_10, ((MR_Box) (output_prof_info__V_4_4)), ((MR_Box) (output_prof_info__V_7_7)));
        }
#line 2102 "output_prof_info.c"
        output_prof_info__succeeded = (output_prof_info__V_10_10 == (MR_Integer) 0);
#line 30 "output_prof_info.m"
        output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 30 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
          *output_prof_info__HeadVar__1_1 = output_prof_info__V_10_10;
#line 30 "output_prof_info.m"
        else
#line 30 "output_prof_info.m"
          {
#line 30 "output_prof_info.m"
            MR_Word output_prof_info__V_11_11;

#line 30 "output_prof_info.m"
            {
#line 30 "output_prof_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[0], &output_prof_info__V_11_11, ((MR_Box) (output_prof_info__V_5_5)), ((MR_Box) (output_prof_info__V_8_8)));
            }
#line 2122 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_11_11 == (MR_Integer) 0);
#line 30 "output_prof_info.m"
            output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 30 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
              *output_prof_info__HeadVar__1_1 = output_prof_info__V_11_11;
#line 30 "output_prof_info.m"
            else
#line 30 "output_prof_info.m"
              {
#line 30 "output_prof_info.m"
                {
#line 30 "output_prof_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &output_prof_info_scalar_common_2[0], output_prof_info__HeadVar__1_1, ((MR_Box) (output_prof_info__V_6_6)), ((MR_Box) (output_prof_info__V_9_9)));
#line 30 "output_prof_info.m"
                  return;
                }
#line 30 "output_prof_info.m"
              }
#line 30 "output_prof_info.m"
          }
#line 30 "output_prof_info.m"
      }
#line 30 "output_prof_info.m"
  }
#line 30 "output_prof_info.m"
}

#line 30 "output_prof_info.m"
MR_bool MR_CALL 
output_prof_info____Unify____output_0_0(
#line 30 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__1_1,
#line 30 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2)
#line 30 "output_prof_info.m"
{
#line 30 "output_prof_info.m"
  {
#line 30 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 30 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_9 = (MR_Integer) output_prof_info__HeadVar__1_1;
#line 30 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_10 = (MR_Integer) output_prof_info__HeadVar__2_2;

#line 30 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_9 == output_prof_info__CastY_10);
#line 30 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
      output_prof_info__succeeded = MR_TRUE;
#line 30 "output_prof_info.m"
    else
#line 30 "output_prof_info.m"
      {
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__TypeInfo_12_12;
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__TypeInfo_13_13;
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "output_prof_info.m"
        MR_Word output_prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));

#line 2197 "output_prof_info.c"
        {
#line 2199 "output_prof_info.c"
          output_prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &output_prof_info_scalar_common_1[0], ((MR_Box) (output_prof_info__V_3_3)), ((MR_Box) (output_prof_info__V_6_6)));
        }
#line 30 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
          {
#line 2206 "output_prof_info.c"
            output_prof_info__TypeInfo_12_12 = (MR_Word) &output_prof_info_scalar_common_2[0];
#line 2208 "output_prof_info.c"
            {
#line 2210 "output_prof_info.c"
              output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_12_12, ((MR_Box) (output_prof_info__V_4_4)), ((MR_Box) (output_prof_info__V_7_7)));
            }
#line 30 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
              {
#line 2217 "output_prof_info.c"
                output_prof_info__TypeInfo_13_13 = (MR_Word) &output_prof_info_scalar_common_2[0];
#line 2219 "output_prof_info.c"
                {
#line 2221 "output_prof_info.c"
                  return output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_13_13, ((MR_Box) (output_prof_info__V_5_5)), ((MR_Box) (output_prof_info__V_8_8)));
                }
#line 30 "output_prof_info.m"
              }
#line 30 "output_prof_info.m"
          }
#line 30 "output_prof_info.m"
      }
#line 30 "output_prof_info.m"
    return output_prof_info__succeeded;
#line 30 "output_prof_info.m"
  }
#line 30 "output_prof_info.m"
}

#line 87 "output_prof_info.m"
void MR_CALL 
output_prof_info____Compare____child_0_0(
#line 87 "output_prof_info.m"
  MR_Word * output_prof_info__HeadVar__1_1,
#line 87 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2,
#line 87 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__3_3)
#line 87 "output_prof_info.m"
{
#line 87 "output_prof_info.m"
  {
#line 87 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 87 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_21 = (MR_Integer) output_prof_info__HeadVar__2_2;
#line 87 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_22 = (MR_Integer) output_prof_info__HeadVar__3_3;

#line 87 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_21 == output_prof_info__CastY_22);
#line 87 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 2261 "output_prof_info.c"
      *output_prof_info__HeadVar__1_1 = (MR_Integer) 0;
#line 87 "output_prof_info.m"
    else
#line 87 "output_prof_info.m"
      {
#line 87 "output_prof_info.m"
        MR_String output_prof_info__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 87 "output_prof_info.m"
        MR_String output_prof_info__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 87 "output_prof_info.m"
        MR_Word output_prof_info__V_16_16;

#line 87 "output_prof_info.m"
        {
#line 87 "output_prof_info.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&output_prof_info__V_16_16, output_prof_info__V_4_4, output_prof_info__V_10_10);
        }
#line 2299 "output_prof_info.c"
        output_prof_info__succeeded = (output_prof_info__V_16_16 == (MR_Integer) 0);
#line 87 "output_prof_info.m"
        output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 87 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
          *output_prof_info__HeadVar__1_1 = output_prof_info__V_16_16;
#line 87 "output_prof_info.m"
        else
#line 87 "output_prof_info.m"
          {
#line 87 "output_prof_info.m"
            MR_Word output_prof_info__V_17_17;

#line 87 "output_prof_info.m"
            {
#line 87 "output_prof_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_17_17, output_prof_info__V_5_5, output_prof_info__V_11_11);
            }
#line 2319 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_17_17 == (MR_Integer) 0);
#line 87 "output_prof_info.m"
            output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 87 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
              *output_prof_info__HeadVar__1_1 = output_prof_info__V_17_17;
#line 87 "output_prof_info.m"
            else
#line 87 "output_prof_info.m"
              {
#line 87 "output_prof_info.m"
                MR_Word output_prof_info__V_18_18;

#line 87 "output_prof_info.m"
                {
#line 87 "output_prof_info.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_18_18, output_prof_info__V_6_6, output_prof_info__V_12_12);
                }
#line 2339 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_18_18 == (MR_Integer) 0);
#line 87 "output_prof_info.m"
                output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 87 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                  *output_prof_info__HeadVar__1_1 = output_prof_info__V_18_18;
#line 87 "output_prof_info.m"
                else
#line 87 "output_prof_info.m"
                  {
#line 87 "output_prof_info.m"
                    MR_Word output_prof_info__V_19_19;

#line 87 "output_prof_info.m"
                    {
#line 87 "output_prof_info.m"
                      mercury__private_builtin__builtin_compare_float_3_p_0(&output_prof_info__V_19_19, output_prof_info__V_7_7, output_prof_info__V_13_13);
                    }
#line 2359 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_19_19 == (MR_Integer) 0);
#line 87 "output_prof_info.m"
                    output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 87 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                      *output_prof_info__HeadVar__1_1 = output_prof_info__V_19_19;
#line 87 "output_prof_info.m"
                    else
#line 87 "output_prof_info.m"
                      {
#line 87 "output_prof_info.m"
                        MR_Word output_prof_info__V_20_20;

#line 87 "output_prof_info.m"
                        {
#line 87 "output_prof_info.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&output_prof_info__V_20_20, output_prof_info__V_8_8, output_prof_info__V_14_14);
                        }
#line 2379 "output_prof_info.c"
                        output_prof_info__succeeded = (output_prof_info__V_20_20 == (MR_Integer) 0);
#line 87 "output_prof_info.m"
                        output_prof_info__succeeded = !(output_prof_info__succeeded);
#line 87 "output_prof_info.m"
                        if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                          *output_prof_info__HeadVar__1_1 = output_prof_info__V_20_20;
#line 87 "output_prof_info.m"
                        else
#line 87 "output_prof_info.m"
                          {
#line 87 "output_prof_info.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(output_prof_info__HeadVar__1_1, output_prof_info__V_9_9, output_prof_info__V_15_15);
#line 87 "output_prof_info.m"
                            return;
                          }
#line 87 "output_prof_info.m"
                      }
#line 87 "output_prof_info.m"
                  }
#line 87 "output_prof_info.m"
              }
#line 87 "output_prof_info.m"
          }
#line 87 "output_prof_info.m"
      }
#line 87 "output_prof_info.m"
  }
#line 87 "output_prof_info.m"
}

#line 87 "output_prof_info.m"
MR_bool MR_CALL 
output_prof_info____Unify____child_0_0(
#line 87 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__1_1,
#line 87 "output_prof_info.m"
  MR_Word output_prof_info__HeadVar__2_2)
#line 87 "output_prof_info.m"
{
#line 87 "output_prof_info.m"
  {
#line 87 "output_prof_info.m"
    MR_bool output_prof_info__succeeded;
#line 87 "output_prof_info.m"
    MR_Integer output_prof_info__CastX_15 = (MR_Integer) output_prof_info__HeadVar__1_1;
#line 87 "output_prof_info.m"
    MR_Integer output_prof_info__CastY_16 = (MR_Integer) output_prof_info__HeadVar__2_2;

#line 87 "output_prof_info.m"
    output_prof_info__succeeded = (output_prof_info__CastX_15 == output_prof_info__CastY_16);
#line 87 "output_prof_info.m"
    if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
      output_prof_info__succeeded = MR_TRUE;
#line 87 "output_prof_info.m"
    else
#line 87 "output_prof_info.m"
      {
#line 87 "output_prof_info.m"
        MR_String output_prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 87 "output_prof_info.m"
        MR_String output_prof_info__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 87 "output_prof_info.m"
        MR_Float output_prof_info__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 87 "output_prof_info.m"
        MR_Integer output_prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), output_prof_info__HeadVar__2_2, (MR_Integer) 5)));

#line 2464 "output_prof_info.c"
        output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_9_9) == 0);
#line 87 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
          {
#line 2470 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_10_10);
#line 87 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
              {
#line 2476 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_11_11);
#line 87 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                  {
#line 2482 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_12_12);
#line 87 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                      {
#line 2488 "output_prof_info.c"
                        output_prof_info__succeeded = (output_prof_info__V_7_7 == output_prof_info__V_13_13);
#line 87 "output_prof_info.m"
                        if (output_prof_info__succeeded)
#line 2492 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_8_8 == output_prof_info__V_14_14);
#line 87 "output_prof_info.m"
                      }
#line 87 "output_prof_info.m"
                  }
#line 87 "output_prof_info.m"
              }
#line 87 "output_prof_info.m"
          }
#line 87 "output_prof_info.m"
      }
#line 87 "output_prof_info.m"
    return output_prof_info__succeeded;
#line 87 "output_prof_info.m"
  }
#line 87 "output_prof_info.m"
}

void mercury__output_prof_info__init(void)
{
}

void mercury__output_prof_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&output_prof_info__output_prof_info__type_ctor_info_child_0);
	MR_register_type_ctor_info(&output_prof_info__output_prof_info__type_ctor_info_output_0);
	MR_register_type_ctor_info(&output_prof_info__output_prof_info__type_ctor_info_output_prof_0);
	MR_register_type_ctor_info(&output_prof_info__output_prof_info__type_ctor_info_parent_0);
}

void mercury__output_prof_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module output_prof_info. */
