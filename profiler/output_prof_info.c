/*
** Automatically generated from `output_prof_info.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "integer.mih"
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




#line 63 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6];

#line 66 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_child_0_0;

#line 69 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1];

#line 72 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1];

#line 75 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1];

#line 78 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1];

#line 81 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0;

#line 84 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0;

#line 87 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_0_0[3];

#line 90 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_0_0;

#line 93 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_0_0[1];

#line 96 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_0[1];

#line 99 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_0[1];

#line 102 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_0[1];

#line 105 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0;

#line 108 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0;

#line 111 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_0[12];

#line 114 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0;

#line 117 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_1[9];

#line 120 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1;

#line 123 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1];

#line 126 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1];

#line 129 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0[2];

#line 132 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2];

#line 135 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2];

#line 138 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5];

#line 141 "output_prof_info.c"
static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_parent_0_0;

#line 144 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1];

#line 147 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1];

#line 150 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1];

#line 153 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1];

#line 156 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
#line 159 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 161 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 164 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
#line 167 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 169 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 171 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 174 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_0_0_10001(
#line 177 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 179 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 182 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_0_0_10001(
#line 185 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 187 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 189 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 192 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
#line 195 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 197 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 200 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
#line 203 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 205 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 207 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3);

#line 210 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
#line 213 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 215 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2);

#line 218 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
#line 221 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 223 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 225 "output_prof_info.c"
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



#line 276 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 286 "output_prof_info.c"
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

#line 301 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

#line 306 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_child_0_0
  }
};

#line 315 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

#line 320 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1] = {
  (MR_Integer) 0
};

#line 325 "output_prof_info.c"
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

#line 346 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0
  }
};

#line 355 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 363 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_0_0[3] = {
  (MR_PseudoTypeInfo) &output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 370 "output_prof_info.c"
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

#line 385 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_0_0
};

#line 390 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_0_0
  }
};

#line 399 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_0_0
};

#line 404 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_0[1] = {
  (MR_Integer) 0
};

#line 409 "output_prof_info.c"
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

#line 430 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_parent_0
  }
};

#line 438 "output_prof_info.c"
static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_child_0
  }
};

#line 446 "output_prof_info.c"
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

#line 462 "output_prof_info.c"
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

#line 477 "output_prof_info.c"
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

#line 490 "output_prof_info.c"
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

#line 505 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

#line 510 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1
};

#line 515 "output_prof_info.c"
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

#line 529 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1,
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

#line 535 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 541 "output_prof_info.c"
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

#line 562 "output_prof_info.c"
static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 571 "output_prof_info.c"
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

#line 586 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

#line 591 "output_prof_info.c"
static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_parent_0_0
  }
};

#line 600 "output_prof_info.c"
static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

#line 605 "output_prof_info.c"
static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1] = {
  (MR_Integer) 0
};

#line 610 "output_prof_info.c"
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

#line 631 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
#line 634 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 636 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 638 "output_prof_info.c"
{
#line 640 "output_prof_info.c"
  {
#line 642 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 645 "output_prof_info.c"
    {
#line 647 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____child_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 650 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 652 "output_prof_info.c"
  }
#line 654 "output_prof_info.c"
}

#line 657 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
#line 660 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 662 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 664 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 666 "output_prof_info.c"
{
#line 668 "output_prof_info.c"
  {
#line 670 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 673 "output_prof_info.c"
    {
#line 675 "output_prof_info.c"
      output_prof_info____Compare____child_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 678 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 680 "output_prof_info.c"
  }
#line 682 "output_prof_info.c"
}

#line 685 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_0_0_10001(
#line 688 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 690 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 692 "output_prof_info.c"
{
#line 694 "output_prof_info.c"
  {
#line 696 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 699 "output_prof_info.c"
    {
#line 701 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____output_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 704 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 706 "output_prof_info.c"
  }
#line 708 "output_prof_info.c"
}

#line 711 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_0_0_10001(
#line 714 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 716 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 718 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 720 "output_prof_info.c"
{
#line 722 "output_prof_info.c"
  {
#line 724 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 727 "output_prof_info.c"
    {
#line 729 "output_prof_info.c"
      output_prof_info____Compare____output_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 732 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 734 "output_prof_info.c"
  }
#line 736 "output_prof_info.c"
}

#line 739 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
#line 742 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 744 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 746 "output_prof_info.c"
{
#line 748 "output_prof_info.c"
  {
#line 750 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 753 "output_prof_info.c"
    {
#line 755 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____output_prof_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 758 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 760 "output_prof_info.c"
  }
#line 762 "output_prof_info.c"
}

#line 765 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
#line 768 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 770 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 772 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 774 "output_prof_info.c"
{
#line 776 "output_prof_info.c"
  {
#line 778 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 781 "output_prof_info.c"
    {
#line 783 "output_prof_info.c"
      output_prof_info____Compare____output_prof_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 786 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 788 "output_prof_info.c"
  }
#line 790 "output_prof_info.c"
}

#line 793 "output_prof_info.c"
static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
#line 796 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_1,
#line 798 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2)
#line 800 "output_prof_info.c"
{
#line 802 "output_prof_info.c"
  {
#line 804 "output_prof_info.c"
    MR_bool output_prof_info__succeeded;

#line 807 "output_prof_info.c"
    {
#line 809 "output_prof_info.c"
      output_prof_info__succeeded = output_prof_info____Unify____parent_0_0(((MR_Word) output_prof_info__wrapper_arg_1), ((MR_Word) output_prof_info__wrapper_arg_2));
    }
#line 812 "output_prof_info.c"
    return output_prof_info__succeeded;
#line 814 "output_prof_info.c"
  }
#line 816 "output_prof_info.c"
}

#line 819 "output_prof_info.c"
static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
#line 822 "output_prof_info.c"
  MR_Box * output_prof_info__wrapper_arg_1,
#line 824 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_2,
#line 826 "output_prof_info.c"
  MR_Box output_prof_info__wrapper_arg_3)
#line 828 "output_prof_info.c"
{
#line 830 "output_prof_info.c"
  {
#line 832 "output_prof_info.c"
    MR_Word output_prof_info__conv0_HeadVar__1_1;

#line 835 "output_prof_info.c"
    {
#line 837 "output_prof_info.c"
      output_prof_info____Compare____parent_0_0(&output_prof_info__conv0_HeadVar__1_1, ((MR_Word) output_prof_info__wrapper_arg_2), ((MR_Word) output_prof_info__wrapper_arg_3));
    }
#line 840 "output_prof_info.c"
    *output_prof_info__wrapper_arg_1 = ((MR_Box) (output_prof_info__conv0_HeadVar__1_1));
#line 842 "output_prof_info.c"
  }
#line 844 "output_prof_info.c"
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
#line 871 "output_prof_info.c"
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
#line 905 "output_prof_info.c"
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
#line 925 "output_prof_info.c"
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
#line 945 "output_prof_info.c"
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
#line 965 "output_prof_info.c"
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

#line 1044 "output_prof_info.c"
        output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_8_8) == 0);
#line 76 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
          {
#line 1050 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_9_9);
#line 76 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
              {
#line 1056 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_10_10);
#line 76 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 76 "output_prof_info.m"
                  {
#line 1062 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_11_11);
#line 76 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 1066 "output_prof_info.c"
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
#line 1107 "output_prof_info.c"
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
#line 1164 "output_prof_info.c"
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
#line 1184 "output_prof_info.c"
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
#line 1204 "output_prof_info.c"
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
#line 1224 "output_prof_info.c"
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
#line 1244 "output_prof_info.c"
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
#line 1264 "output_prof_info.c"
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
#line 1284 "output_prof_info.c"
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
#line 1304 "output_prof_info.c"
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
#line 1343 "output_prof_info.c"
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
#line 1378 "output_prof_info.c"
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
#line 1416 "output_prof_info.c"
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
#line 1436 "output_prof_info.c"
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
#line 1456 "output_prof_info.c"
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
#line 1476 "output_prof_info.c"
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
#line 1496 "output_prof_info.c"
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
#line 1516 "output_prof_info.c"
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
#line 1536 "output_prof_info.c"
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
#line 1556 "output_prof_info.c"
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
#line 1576 "output_prof_info.c"
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
#line 1596 "output_prof_info.c"
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
#line 1616 "output_prof_info.c"
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
#line 1761 "output_prof_info.c"
              output_prof_info__succeeded = (strcmp(output_prof_info__V_27_27, output_prof_info__V_36_36) == 0);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                {
#line 1767 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_28_28 == output_prof_info__V_37_37);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    {
#line 1773 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_29_29 == output_prof_info__V_38_38);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        {
#line 1779 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_30_30 == output_prof_info__V_39_39);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            {
#line 1785 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_31_31 == output_prof_info__V_40_40);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                {
#line 1791 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_32_32 == output_prof_info__V_41_41);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    {
#line 1797 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_33_33 == output_prof_info__V_42_42);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        {
#line 1803 "output_prof_info.c"
                                          output_prof_info__TypeInfo_47_47 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 1805 "output_prof_info.c"
                                          {
#line 1807 "output_prof_info.c"
                                            output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_47_47, ((MR_Box) (output_prof_info__V_34_34)), ((MR_Box) (output_prof_info__V_43_43)));
                                          }
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            {
#line 1814 "output_prof_info.c"
                                              output_prof_info__TypeInfo_48_48 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 1816 "output_prof_info.c"
                                              {
#line 1818 "output_prof_info.c"
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
#line 1932 "output_prof_info.c"
              output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_15_15) == 0);
#line 45 "output_prof_info.m"
              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                {
#line 1938 "output_prof_info.c"
                  output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_16_16);
#line 45 "output_prof_info.m"
                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                    {
#line 1944 "output_prof_info.c"
                      output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_17_17);
#line 45 "output_prof_info.m"
                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                        {
#line 1950 "output_prof_info.c"
                          output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_18_18);
#line 45 "output_prof_info.m"
                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                            {
#line 1956 "output_prof_info.c"
                              output_prof_info__succeeded = (output_prof_info__V_7_7 == output_prof_info__V_19_19);
#line 45 "output_prof_info.m"
                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                {
#line 1962 "output_prof_info.c"
                                  output_prof_info__succeeded = (output_prof_info__V_8_8 == output_prof_info__V_20_20);
#line 45 "output_prof_info.m"
                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                    {
#line 1968 "output_prof_info.c"
                                      output_prof_info__succeeded = (output_prof_info__V_9_9 == output_prof_info__V_21_21);
#line 45 "output_prof_info.m"
                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                        {
#line 1974 "output_prof_info.c"
                                          output_prof_info__succeeded = (output_prof_info__V_10_10 == output_prof_info__V_22_22);
#line 45 "output_prof_info.m"
                                          if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                            {
#line 1980 "output_prof_info.c"
                                              output_prof_info__TypeInfo_49_49 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 1982 "output_prof_info.c"
                                              {
#line 1984 "output_prof_info.c"
                                                output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_49_49, ((MR_Box) (output_prof_info__V_11_11)), ((MR_Box) (output_prof_info__V_23_23)));
                                              }
#line 45 "output_prof_info.m"
                                              if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                {
#line 1991 "output_prof_info.c"
                                                  output_prof_info__TypeInfo_50_50 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 1993 "output_prof_info.c"
                                                  {
#line 1995 "output_prof_info.c"
                                                    output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_50_50, ((MR_Box) (output_prof_info__V_12_12)), ((MR_Box) (output_prof_info__V_24_24)));
                                                  }
#line 45 "output_prof_info.m"
                                                  if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                    {
#line 2002 "output_prof_info.c"
                                                      output_prof_info__TypeInfo_51_51 = (MR_Word) &output_prof_info_scalar_common_2[1];
#line 2004 "output_prof_info.c"
                                                      {
#line 2006 "output_prof_info.c"
                                                        output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_51_51, ((MR_Box) (output_prof_info__V_13_13)), ((MR_Box) (output_prof_info__V_25_25)));
                                                      }
#line 45 "output_prof_info.m"
                                                      if (output_prof_info__succeeded)
#line 45 "output_prof_info.m"
                                                        {
#line 2013 "output_prof_info.c"
                                                          output_prof_info__TypeInfo_52_52 = (MR_Word) &output_prof_info_scalar_common_2[2];
#line 2015 "output_prof_info.c"
                                                          {
#line 2017 "output_prof_info.c"
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
#line 2077 "output_prof_info.c"
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
#line 2103 "output_prof_info.c"
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
#line 2123 "output_prof_info.c"
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

#line 2198 "output_prof_info.c"
        {
#line 2200 "output_prof_info.c"
          output_prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &output_prof_info_scalar_common_1[0], ((MR_Box) (output_prof_info__V_3_3)), ((MR_Box) (output_prof_info__V_6_6)));
        }
#line 30 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
          {
#line 2207 "output_prof_info.c"
            output_prof_info__TypeInfo_12_12 = (MR_Word) &output_prof_info_scalar_common_2[0];
#line 2209 "output_prof_info.c"
            {
#line 2211 "output_prof_info.c"
              output_prof_info__succeeded = mercury__builtin__unify_2_p_0(output_prof_info__TypeInfo_12_12, ((MR_Box) (output_prof_info__V_4_4)), ((MR_Box) (output_prof_info__V_7_7)));
            }
#line 30 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 30 "output_prof_info.m"
              {
#line 2218 "output_prof_info.c"
                output_prof_info__TypeInfo_13_13 = (MR_Word) &output_prof_info_scalar_common_2[0];
#line 2220 "output_prof_info.c"
                {
#line 2222 "output_prof_info.c"
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
#line 2262 "output_prof_info.c"
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
#line 2300 "output_prof_info.c"
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
#line 2320 "output_prof_info.c"
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
#line 2340 "output_prof_info.c"
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
#line 2360 "output_prof_info.c"
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
#line 2380 "output_prof_info.c"
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

#line 2465 "output_prof_info.c"
        output_prof_info__succeeded = (strcmp(output_prof_info__V_3_3, output_prof_info__V_9_9) == 0);
#line 87 "output_prof_info.m"
        if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
          {
#line 2471 "output_prof_info.c"
            output_prof_info__succeeded = (output_prof_info__V_4_4 == output_prof_info__V_10_10);
#line 87 "output_prof_info.m"
            if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
              {
#line 2477 "output_prof_info.c"
                output_prof_info__succeeded = (output_prof_info__V_5_5 == output_prof_info__V_11_11);
#line 87 "output_prof_info.m"
                if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                  {
#line 2483 "output_prof_info.c"
                    output_prof_info__succeeded = (output_prof_info__V_6_6 == output_prof_info__V_12_12);
#line 87 "output_prof_info.m"
                    if (output_prof_info__succeeded)
#line 87 "output_prof_info.m"
                      {
#line 2489 "output_prof_info.c"
                        output_prof_info__succeeded = (output_prof_info__V_7_7 == output_prof_info__V_13_13);
#line 87 "output_prof_info.m"
                        if (output_prof_info__succeeded)
#line 2493 "output_prof_info.c"
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
