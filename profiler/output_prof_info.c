/*
** Automatically generated from `output_prof_info.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 61 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6];

#line 64 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_child_0_0;

#line 67 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1];

#line 70 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1];

#line 73 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1];

#line 76 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1];

#line 79 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0;

#line 82 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0;

#line 85 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_0_0[3];

#line 88 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_0_0;

#line 91 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_0_0[1];

#line 94 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_0[1];

#line 97 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_0[1];

#line 100 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_0[1];

#line 103 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0;

#line 106 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0;

#line 109 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_0[12];

#line 112 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0;

#line 115 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_1[9];

#line 118 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1;

#line 121 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1];

#line 124 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1];

#line 127 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0[2];

#line 130 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2];

#line 133 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2];

#line 136 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5];

#line 139 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_parent_0_0;

#line 142 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1];

#line 145 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1];

#line 148 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1];

#line 151 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1];

#line 154 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
#line 157 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 159 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 162 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
#line 165 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 167 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 169 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 172 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_0_0_10001(
#line 175 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 177 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 180 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_0_0_10001(
#line 183 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 185 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 187 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 190 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
#line 193 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 195 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 198 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
#line 201 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 203 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 205 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 208 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
#line 211 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 213 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 216 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
#line 219 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 221 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 223 "output_prof_info.c"
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



#line 274 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 284 "output_prof_info.c"
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

#line 299 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

#line 304 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_child_0_0
  }
};

#line 313 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

#line 318 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1] = {
  (MR_Integer) 0
};

#line 323 "output_prof_info.c"
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

#line 344 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0
  }
};

#line 353 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 361 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_0_0[3] = {
  (MR_PseudoTypeInfo) &output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 368 "output_prof_info.c"
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

#line 383 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_0_0
};

#line 388 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_0_0
  }
};

#line 397 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_0_0
};

#line 402 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_0[1] = {
  (MR_Integer) 0
};

#line 407 "output_prof_info.c"
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

#line 428 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_parent_0
  }
};

#line 436 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_child_0
  }
};

#line 444 "output_prof_info.c"
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

#line 460 "output_prof_info.c"
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

#line 475 "output_prof_info.c"
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

#line 488 "output_prof_info.c"
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

#line 503 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

#line 508 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1
};

#line 513 "output_prof_info.c"
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

#line 527 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1,
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

#line 533 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 539 "output_prof_info.c"
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

#line 560 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 569 "output_prof_info.c"
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

#line 584 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

#line 589 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_parent_0_0
  }
};

#line 598 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

#line 603 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1] = {
  (MR_Integer) 0
};

#line 608 "output_prof_info.c"
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

#line 629 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
#line 632 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 634 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 636 "output_prof_info.c"
{
#line 638 "output_prof_info.c"
  {
#line 640 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 643 "output_prof_info.c"
    {
#line 645 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____child_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 648 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 650 "output_prof_info.c"
  }
#line 652 "output_prof_info.c"
}

#line 655 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
#line 658 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 660 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 662 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 664 "output_prof_info.c"
{
#line 666 "output_prof_info.c"
  {
#line 668 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 671 "output_prof_info.c"
    {
#line 673 "output_prof_info.c"
      output_prof_info____Compare____child_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 676 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 678 "output_prof_info.c"
  }
#line 680 "output_prof_info.c"
}

#line 683 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_0_0_10001(
#line 686 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 688 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 690 "output_prof_info.c"
{
#line 692 "output_prof_info.c"
  {
#line 694 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 697 "output_prof_info.c"
    {
#line 699 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____output_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 702 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 704 "output_prof_info.c"
  }
#line 706 "output_prof_info.c"
}

#line 709 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_0_0_10001(
#line 712 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 714 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 716 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 718 "output_prof_info.c"
{
#line 720 "output_prof_info.c"
  {
#line 722 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 725 "output_prof_info.c"
    {
#line 727 "output_prof_info.c"
      output_prof_info____Compare____output_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 730 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 732 "output_prof_info.c"
  }
#line 734 "output_prof_info.c"
}

#line 737 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
#line 740 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 742 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 744 "output_prof_info.c"
{
#line 746 "output_prof_info.c"
  {
#line 748 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 751 "output_prof_info.c"
    {
#line 753 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____output_prof_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 756 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 758 "output_prof_info.c"
  }
#line 760 "output_prof_info.c"
}

#line 763 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
#line 766 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 768 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 770 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 772 "output_prof_info.c"
{
#line 774 "output_prof_info.c"
  {
#line 776 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 779 "output_prof_info.c"
    {
#line 781 "output_prof_info.c"
      output_prof_info____Compare____output_prof_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 784 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 786 "output_prof_info.c"
  }
#line 788 "output_prof_info.c"
}

#line 791 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
#line 794 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 796 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 798 "output_prof_info.c"
{
#line 800 "output_prof_info.c"
  {
#line 802 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 805 "output_prof_info.c"
    {
#line 807 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____parent_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 810 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 812 "output_prof_info.c"
  }
#line 814 "output_prof_info.c"
}

#line 817 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
#line 820 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 822 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 824 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 826 "output_prof_info.c"
{
#line 828 "output_prof_info.c"
  {
#line 830 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 833 "output_prof_info.c"
    {
#line 835 "output_prof_info.c"
      output_prof_info____Compare____parent_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 838 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 840 "output_prof_info.c"
  }
#line 842 "output_prof_info.c"
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
#line 869 "output_prof_info.c"
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
#line 903 "output_prof_info.c"
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
#line 923 "output_prof_info.c"
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
#line 943 "output_prof_info.c"
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
#line 963 "output_prof_info.c"
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

#line 1042 "output_prof_info.c"
        output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_8_8) == 0);
#line 76 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
          {
#line 1048 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_9_9);
#line 76 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
              {
#line 1054 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_10_10);
#line 76 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
                  {
#line 1060 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_11_11);
#line 76 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 1064 "output_prof_info.c"
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
#line 1105 "output_prof_info.c"
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
#line 1162 "output_prof_info.c"
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
#line 1182 "output_prof_info.c"
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
#line 1202 "output_prof_info.c"
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
#line 1222 "output_prof_info.c"
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
#line 1242 "output_prof_info.c"
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
#line 1262 "output_prof_info.c"
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
#line 1282 "output_prof_info.c"
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
#line 1302 "output_prof_info.c"
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
#line 1341 "output_prof_info.c"
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
#line 1376 "output_prof_info.c"
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
#line 1414 "output_prof_info.c"
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
#line 1434 "output_prof_info.c"
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
#line 1454 "output_prof_info.c"
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
#line 1474 "output_prof_info.c"
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
#line 1494 "output_prof_info.c"
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
#line 1514 "output_prof_info.c"
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
#line 1534 "output_prof_info.c"
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
#line 1554 "output_prof_info.c"
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
#line 1574 "output_prof_info.c"
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
#line 1594 "output_prof_info.c"
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
#line 1614 "output_prof_info.c"
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
#line 1759 "output_prof_info.c"
              output_prof_info__succeeded = (strcmp(output_prof_info__V_27_27, output_prof_info__V_36_36) == 0);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                {
#line 1765 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_28_28 == output_prof_info__V_37_37);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    {
#line 1771 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_29_29 == output_prof_info__V_38_38);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        {
#line 1777 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_30_30 == output_prof_info__V_39_39);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            {
#line 1783 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_31_31 == output_prof_info__V_40_40);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                {
#line 1789 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_32_32 == output_prof_info__V_41_41);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    {
#line 1795 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_33_33 == output_prof_info__V_42_42);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        {
#line 1801 "output_prof_info.c"
                                          output_prof_info__TypeInfo_47_47 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 1803 "output_prof_info.c"
                                          {
#line 1805 "output_prof_info.c"
                                            output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_47_47, ((MR_Box) (output_prof_info__V_34_34)), ((MR_Box) (output_prof_info__V_43_43)));
                                          }
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            {
#line 1812 "output_prof_info.c"
                                              output_prof_info__TypeInfo_48_48 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 1814 "output_prof_info.c"
                                              {
#line 1816 "output_prof_info.c"
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
#line 1930 "output_prof_info.c"
              output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_15_15) == 0);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                {
#line 1936 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_16_16);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    {
#line 1942 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_17_17);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        {
#line 1948 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_18_18);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            {
#line 1954 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_7_7 == output_prof_info__V_19_19);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                {
#line 1960 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_8_8 == output_prof_info__V_20_20);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    {
#line 1966 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_9_9 == output_prof_info__V_21_21);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        {
#line 1972 "output_prof_info.c"
                                          output_prof_info__succeeded = (output_prof_info__V_10_10 == output_prof_info__V_22_22);
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            {
#line 1978 "output_prof_info.c"
                                              output_prof_info__TypeInfo_49_49 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 1980 "output_prof_info.c"
                                              {
#line 1982 "output_prof_info.c"
                                                output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_49_49, ((MR_Box) (output_prof_info__V_11_11)), ((MR_Box) (output_prof_info__V_23_23)));
                                              }
#line 45 "output_prof_info.m"
                                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                {
#line 1989 "output_prof_info.c"
                                                  output_prof_info__TypeInfo_50_50 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 1991 "output_prof_info.c"
                                                  {
#line 1993 "output_prof_info.c"
                                                    output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_50_50, ((MR_Box) (output_prof_info__V_12_12)), ((MR_Box) (output_prof_info__V_24_24)));
                                                  }
#line 45 "output_prof_info.m"
                                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                    {
#line 2000 "output_prof_info.c"
                                                      output_prof_info__TypeInfo_51_51 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 2002 "output_prof_info.c"
                                                      {
#line 2004 "output_prof_info.c"
                                                        output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_51_51, ((MR_Box) (output_prof_info__V_13_13)), ((MR_Box) (output_prof_info__V_25_25)));
                                                      }
#line 45 "output_prof_info.m"
                                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                        {
#line 2011 "output_prof_info.c"
                                                          output_prof_info__TypeInfo_52_52 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 2013 "output_prof_info.c"
                                                          {
#line 2015 "output_prof_info.c"
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
#line 2075 "output_prof_info.c"
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
#line 2101 "output_prof_info.c"
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
#line 2121 "output_prof_info.c"
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

#line 2196 "output_prof_info.c"
        {
#line 2198 "output_prof_info.c"
          output_prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &output_prof_info_scalar_common_1[0], ((MR_Box) (output_prof_info__V_3_3)), ((MR_Box) (output_prof_info__V_6_6)));
        }
#line 30 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
          {
#line 2205 "output_prof_info.c"
            output_prof_info__TypeInfo_12_12 = (MR_Word) &output_prof_info_scalar_common_2[0];
#line 2207 "output_prof_info.c"
            {
#line 2209 "output_prof_info.c"
              output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_12_12, ((MR_Box) (output_prof_info__V_4_4)), ((MR_Box) (output_prof_info__V_7_7)));
            }
#line 30 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
              {
#line 2216 "output_prof_info.c"
                output_prof_info__TypeInfo_13_13 = (MR_Word) &output_prof_info_scalar_common_2[0];
#line 2218 "output_prof_info.c"
                {
#line 2220 "output_prof_info.c"
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
#line 2260 "output_prof_info.c"
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
#line 2298 "output_prof_info.c"
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
#line 2318 "output_prof_info.c"
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
#line 2338 "output_prof_info.c"
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
#line 2358 "output_prof_info.c"
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
#line 2378 "output_prof_info.c"
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

#line 2463 "output_prof_info.c"
        output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_9_9) == 0);
#line 87 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
          {
#line 2469 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_10_10);
#line 87 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
              {
#line 2475 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_11_11);
#line 87 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                  {
#line 2481 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_12_12);
#line 87 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                      {
#line 2487 "output_prof_info.c"
                        output_prof_info__succeeded = (output_prof_info__V_7_7 == output_prof_info__V_13_13);
#line 87 "output_prof_info.m"
                        if (output_prof_info__succeeded)
#line 2491 "output_prof_info.c"
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
