/*
** Automatically generated from `io_action.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module mdb.io_action. */
/* :- implementation. */

/*
INIT mercury__mdb__io_action__init
ENDINIT
*/

#include "mdb.io_action.mih"
#include "mdb.io_action.mh"


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
#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "mdb.browser_term.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"




#line 68 "mdb.io_action.c"
static const MR_FA_TypeInfo_Struct1 mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0;

#line 71 "mdb.io_action.c"
static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_0_0[3];

#line 74 "mdb.io_action.c"
static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_0_0[3];

#line 77 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0;

#line 80 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0[1];

#line 83 "mdb.io_action.c"
static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0[1];

#line 86 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_0[1];

#line 89 "mdb.io_action.c"
static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_0[1];

#line 92 "mdb.io_action.c"
static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_range_0_0[2];

#line 95 "mdb.io_action.c"
static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_range_0_0[2];

#line 98 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0;

#line 101 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0[1];

#line 104 "mdb.io_action.c"
static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0[1];

#line 107 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_range_0[1];

#line 110 "mdb.io_action.c"
static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_range_0[1];

#line 113 "mdb.io_action.c"
static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0[1];

#line 116 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0;

#line 119 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1;

#line 122 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0[1];

#line 125 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1[1];

#line 128 "mdb.io_action.c"
static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0[2];

#line 131 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_maybe_tabled_io_action_0[2];

#line 134 "mdb.io_action.c"
static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_maybe_tabled_io_action_0[2];

#line 137 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0_10001(
#line 140 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 142 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2);

#line 145 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____io_action_0_0_10001(
#line 148 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 150 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 152 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3);

#line 155 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0_10001(
#line 158 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 160 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2);

#line 163 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0_10001(
#line 166 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 168 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 170 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3);

#line 173 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0_10001(
#line 176 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 178 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2);

#line 181 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0_10001(
#line 184 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 186 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 188 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3);

#line 191 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001(
#line 194 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 196 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2);

#line 199 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001(
#line 202 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 204 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 206 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3);

#line 123 "io_action.m"
static MR_Word MR_CALL 
mdb__io_action__make_yes_io_action_3_f_0(
#line 123 "io_action.m"
  MR_String mdb__io_action__ProcName_1,
#line 123 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2,
#line 123 "io_action.m"
  MR_Word mdb__io_action__Args_3);

#line 117 "io_action.m"
static MR_Word MR_CALL 
mdb__io_action__make_no_io_action_0_f_0(void);

#line 85 "io_action.m"
static void MR_CALL 
mdb__io_action__pickup_io_action_4_p_0(
#line 85 "io_action.m"
  MR_Integer mdb__io_action__SeqNum_1,
#line 85 "io_action.m"
  MR_Word * mdb__io_action__MaybeIOAction_2);


static /* final */ const MR_Box mdb__io_action_scalar_common_1[1][2];




static /* final */ const MR_Box mdb__io_action_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};



#include "mdb.io_action.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"

#line 124 "io_action.m"
MR_Word 
MR_IO_ACTION_make_yes_io_action(
#line 124 "io_action.m"
  MR_String mdb__io_action__ProcName_1,
#line 124 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2,
#line 124 "io_action.m"
  MR_Word mdb__io_action__Args_3)
#line 124 "io_action.m"
{
#line 124 "io_action.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__io_action__make_yes_io_action_3_f_0((MR_String) mdb__io_action__ProcName_1, (MR_Word) mdb__io_action__HeadVar__2_2, (MR_Word) mdb__io_action__Args_3);
	return ret_value;
}

#line 118 "io_action.m"
MR_Word 
MR_IO_ACTION_make_no_io_action(void)
#line 118 "io_action.m"
{
#line 118 "io_action.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__io_action__make_no_io_action_0_f_0();
	return ret_value;
}


#line 287 "mdb.io_action.c"
static const MR_FA_TypeInfo_Struct1 mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 295 "mdb.io_action.c"
static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0
};

#line 302 "mdb.io_action.c"
static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_0_0[3] = {
  (MR_String) "io_action_proc_name",
  (MR_String) "io_action_pf",
  (MR_String) "io_action_args"
};

#line 309 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0 = {
  (MR_String) "io_action",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__io_action__mdb__io_action__field_types_io_action_0_0,
  mdb__io_action__mdb__io_action__field_names_io_action_0_0,
  NULL,
  NULL
};

#line 324 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0
};

#line 329 "mdb.io_action.c"
static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0
  }
};

#line 338 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0
};

#line 343 "mdb.io_action.c"
static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_0[1] = {
  (MR_Integer) 0
};

#line 348 "mdb.io_action.c"
const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_io_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____io_action_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_action_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_action",
  {
    mdb__io_action__mdb__io_action__du_name_ordered_io_action_0
  },
  {
    mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__io_action__mdb__io_action__functor_number_map_io_action_0
};

#line 369 "mdb.io_action.c"
static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_range_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 375 "mdb.io_action.c"
static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_range_0_0[2] = {
  (MR_String) "from_io_action",
  (MR_String) "to_io_action"
};

#line 381 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0 = {
  (MR_String) "io_action_range",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__io_action__mdb__io_action__field_types_io_action_range_0_0,
  mdb__io_action__mdb__io_action__field_names_io_action_range_0_0,
  NULL,
  NULL
};

#line 396 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0
};

#line 401 "mdb.io_action.c"
static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0
  }
};

#line 410 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_range_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0
};

#line 415 "mdb.io_action.c"
static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_range_0[1] = {
  (MR_Integer) 0
};

#line 420 "mdb.io_action.c"
const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____io_action_range_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_action_range_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_action_range",
  {
    mdb__io_action__mdb__io_action__du_name_ordered_io_action_range_0
  },
  {
    mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__io_action__mdb__io_action__functor_number_map_io_action_range_0
};

#line 441 "mdb.io_action.c"
const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_io_seq_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__io_action____Unify____io_seq_num_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_seq_num_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_seq_num",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 462 "mdb.io_action.c"
static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__io_action__mdb__io_action__type_ctor_info_io_action_0
};

#line 467 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0 = {
  (MR_String) "tabled",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0,
  NULL,
  NULL,
  NULL
};

#line 482 "mdb.io_action.c"
static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1 = {
  (MR_String) "untabled",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 497 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1
};

#line 502 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0
};

#line 507 "mdb.io_action.c"
static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1
  }
};

#line 521 "mdb.io_action.c"
static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_maybe_tabled_io_action_0[2] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0,
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1
};

#line 527 "mdb.io_action.c"
static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_maybe_tabled_io_action_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 533 "mdb.io_action.c"
const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_maybe_tabled_io_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "maybe_tabled_io_action",
  {
    mdb__io_action__mdb__io_action__du_name_ordered_maybe_tabled_io_action_0
  },
  {
    mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__io_action__mdb__io_action__functor_number_map_maybe_tabled_io_action_0
};

#line 554 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0_10001(
#line 557 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 559 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2)
#line 561 "mdb.io_action.c"
{
#line 563 "mdb.io_action.c"
  {
#line 565 "mdb.io_action.c"
    MR_bool mdb__io_action__succeeded;

#line 568 "mdb.io_action.c"
    {
#line 570 "mdb.io_action.c"
      mdb__io_action__succeeded = mdb__io_action____Unify____io_action_0_0(((MR_Word) mdb__io_action__wrapper_arg_1), ((MR_Word) mdb__io_action__wrapper_arg_2));
    }
#line 573 "mdb.io_action.c"
    return mdb__io_action__succeeded;
#line 575 "mdb.io_action.c"
  }
#line 577 "mdb.io_action.c"
}

#line 580 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____io_action_0_0_10001(
#line 583 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 585 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 587 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3)
#line 589 "mdb.io_action.c"
{
#line 591 "mdb.io_action.c"
  {
#line 593 "mdb.io_action.c"
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

#line 596 "mdb.io_action.c"
    {
#line 598 "mdb.io_action.c"
      mdb__io_action____Compare____io_action_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Word) mdb__io_action__wrapper_arg_2), ((MR_Word) mdb__io_action__wrapper_arg_3));
    }
#line 601 "mdb.io_action.c"
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
#line 603 "mdb.io_action.c"
  }
#line 605 "mdb.io_action.c"
}

#line 608 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0_10001(
#line 611 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 613 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2)
#line 615 "mdb.io_action.c"
{
#line 617 "mdb.io_action.c"
  {
#line 619 "mdb.io_action.c"
    MR_bool mdb__io_action__succeeded;

#line 622 "mdb.io_action.c"
    {
#line 624 "mdb.io_action.c"
      mdb__io_action__succeeded = mdb__io_action____Unify____io_action_range_0_0(((MR_Word) mdb__io_action__wrapper_arg_1), ((MR_Word) mdb__io_action__wrapper_arg_2));
    }
#line 627 "mdb.io_action.c"
    return mdb__io_action__succeeded;
#line 629 "mdb.io_action.c"
  }
#line 631 "mdb.io_action.c"
}

#line 634 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0_10001(
#line 637 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 639 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 641 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3)
#line 643 "mdb.io_action.c"
{
#line 645 "mdb.io_action.c"
  {
#line 647 "mdb.io_action.c"
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

#line 650 "mdb.io_action.c"
    {
#line 652 "mdb.io_action.c"
      mdb__io_action____Compare____io_action_range_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Word) mdb__io_action__wrapper_arg_2), ((MR_Word) mdb__io_action__wrapper_arg_3));
    }
#line 655 "mdb.io_action.c"
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
#line 657 "mdb.io_action.c"
  }
#line 659 "mdb.io_action.c"
}

#line 662 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0_10001(
#line 665 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 667 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2)
#line 669 "mdb.io_action.c"
{
#line 671 "mdb.io_action.c"
  {
#line 673 "mdb.io_action.c"
    MR_bool mdb__io_action__succeeded;

#line 676 "mdb.io_action.c"
    {
#line 678 "mdb.io_action.c"
      mdb__io_action__succeeded = mdb__io_action____Unify____io_seq_num_0_0(((MR_Integer) mdb__io_action__wrapper_arg_1), ((MR_Integer) mdb__io_action__wrapper_arg_2));
    }
#line 681 "mdb.io_action.c"
    return mdb__io_action__succeeded;
#line 683 "mdb.io_action.c"
  }
#line 685 "mdb.io_action.c"
}

#line 688 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0_10001(
#line 691 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 693 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 695 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3)
#line 697 "mdb.io_action.c"
{
#line 699 "mdb.io_action.c"
  {
#line 701 "mdb.io_action.c"
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

#line 704 "mdb.io_action.c"
    {
#line 706 "mdb.io_action.c"
      mdb__io_action____Compare____io_seq_num_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Integer) mdb__io_action__wrapper_arg_2), ((MR_Integer) mdb__io_action__wrapper_arg_3));
    }
#line 709 "mdb.io_action.c"
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
#line 711 "mdb.io_action.c"
  }
#line 713 "mdb.io_action.c"
}

#line 716 "mdb.io_action.c"
static MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001(
#line 719 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_1,
#line 721 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2)
#line 723 "mdb.io_action.c"
{
#line 725 "mdb.io_action.c"
  {
#line 727 "mdb.io_action.c"
    MR_bool mdb__io_action__succeeded;

#line 730 "mdb.io_action.c"
    {
#line 732 "mdb.io_action.c"
      mdb__io_action__succeeded = mdb__io_action____Unify____maybe_tabled_io_action_0_0(((MR_Word) mdb__io_action__wrapper_arg_1), ((MR_Word) mdb__io_action__wrapper_arg_2));
    }
#line 735 "mdb.io_action.c"
    return mdb__io_action__succeeded;
#line 737 "mdb.io_action.c"
  }
#line 739 "mdb.io_action.c"
}

#line 742 "mdb.io_action.c"
static void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001(
#line 745 "mdb.io_action.c"
  MR_Box * mdb__io_action__wrapper_arg_1,
#line 747 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_2,
#line 749 "mdb.io_action.c"
  MR_Box mdb__io_action__wrapper_arg_3)
#line 751 "mdb.io_action.c"
{
#line 753 "mdb.io_action.c"
  {
#line 755 "mdb.io_action.c"
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

#line 758 "mdb.io_action.c"
    {
#line 760 "mdb.io_action.c"
      mdb__io_action____Compare____maybe_tabled_io_action_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Word) mdb__io_action__wrapper_arg_2), ((MR_Word) mdb__io_action__wrapper_arg_3));
    }
#line 763 "mdb.io_action.c"
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
#line 765 "mdb.io_action.c"
  }
#line 767 "mdb.io_action.c"
}

#line 37 "io_action.m"
void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0(
#line 37 "io_action.m"
  MR_Word * mdb__io_action__HeadVar__1_1,
#line 37 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2,
#line 37 "io_action.m"
  MR_Word mdb__io_action__HeadVar__3_3)
#line 37 "io_action.m"
{
#line 37 "io_action.m"
  {
#line 37 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 37 "io_action.m"
    MR_Integer mdb__io_action__CastX_8 = (MR_Integer) mdb__io_action__HeadVar__2_2;
#line 37 "io_action.m"
    MR_Integer mdb__io_action__CastY_9 = (MR_Integer) mdb__io_action__HeadVar__3_3;

#line 37 "io_action.m"
    mdb__io_action__succeeded = (mdb__io_action__CastX_8 == mdb__io_action__CastY_9);
#line 37 "io_action.m"
    if (mdb__io_action__succeeded)
#line 794 "mdb.io_action.c"
      *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "io_action.m"
    else
#line 37 "io_action.m"
      if ((mdb__io_action__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "io_action.m"
        if ((mdb__io_action__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "io_action.m"
          *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "io_action.m"
        else
#line 806 "mdb.io_action.c"
          *mdb__io_action__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "io_action.m"
      else
#line 37 "io_action.m"
        {
#line 37 "io_action.m"
          MR_Word mdb__io_action__V_11_11 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__2_2), (MR_Integer) 1);

#line 37 "io_action.m"
          if ((mdb__io_action__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "mdb.io_action.c"
            *mdb__io_action__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "io_action.m"
          else
#line 37 "io_action.m"
            {
#line 37 "io_action.m"
              MR_Word mdb__io_action__V_5_5 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__3_3), (MR_Integer) 1);

#line 37 "io_action.m"
              {
#line 37 "io_action.m"
                mdb__io_action____Compare____io_action_0_0(mdb__io_action__HeadVar__1_1, mdb__io_action__V_11_11, mdb__io_action__V_5_5);
#line 37 "io_action.m"
                return;
              }
#line 37 "io_action.m"
            }
#line 37 "io_action.m"
        }
#line 37 "io_action.m"
  }
#line 37 "io_action.m"
}

#line 37 "io_action.m"
MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0(
#line 37 "io_action.m"
  MR_Word mdb__io_action__HeadVar__1_1,
#line 37 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2)
#line 37 "io_action.m"
{
#line 37 "io_action.m"
  {
#line 37 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 37 "io_action.m"
    MR_Integer mdb__io_action__CastX_7 = (MR_Integer) mdb__io_action__HeadVar__1_1;
#line 37 "io_action.m"
    MR_Integer mdb__io_action__CastY_8 = (MR_Integer) mdb__io_action__HeadVar__2_2;

#line 37 "io_action.m"
    mdb__io_action__succeeded = (mdb__io_action__CastX_7 == mdb__io_action__CastY_8);
#line 37 "io_action.m"
    if (mdb__io_action__succeeded)
#line 37 "io_action.m"
      mdb__io_action__succeeded = MR_TRUE;
#line 37 "io_action.m"
    else
#line 37 "io_action.m"
      if ((mdb__io_action__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "io_action.m"
        {
#line 37 "io_action.m"
          MR_Integer mdb__io_action__CastX_5 = (MR_Integer) mdb__io_action__HeadVar__1_1;
#line 37 "io_action.m"
          MR_Integer mdb__io_action__CastY_6 = (MR_Integer) mdb__io_action__HeadVar__2_2;

#line 37 "io_action.m"
          mdb__io_action__succeeded = (mdb__io_action__CastY_6 == mdb__io_action__CastX_5);
#line 37 "io_action.m"
        }
#line 37 "io_action.m"
      else
#line 37 "io_action.m"
        {
#line 37 "io_action.m"
          MR_Word mdb__io_action__V_3_3 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__1_1), (MR_Integer) 1);
#line 37 "io_action.m"
          MR_Word mdb__io_action__V_4_4;

#line 37 "io_action.m"
          mdb__io_action__succeeded = ((MR_tag((MR_Word) mdb__io_action__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 37 "io_action.m"
          if (mdb__io_action__succeeded)
#line 37 "io_action.m"
            {
#line 37 "io_action.m"
              mdb__io_action__V_4_4 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__2_2), (MR_Integer) 1);
#line 898 "mdb.io_action.c"
              {
#line 900 "mdb.io_action.c"
                return mdb__io_action__succeeded = mdb__io_action____Unify____io_action_0_0(mdb__io_action__V_3_3, mdb__io_action__V_4_4);
              }
#line 37 "io_action.m"
            }
#line 37 "io_action.m"
        }
#line 37 "io_action.m"
    return mdb__io_action__succeeded;
#line 37 "io_action.m"
  }
#line 37 "io_action.m"
}

#line 41 "io_action.m"
void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0(
#line 41 "io_action.m"
  MR_Word * mdb__io_action__HeadVar__1_1,
#line 41 "io_action.m"
  MR_Integer mdb__io_action__HeadVar__2_2,
#line 41 "io_action.m"
  MR_Integer mdb__io_action__HeadVar__3_3)
#line 41 "io_action.m"
{
#line 41 "io_action.m"
  {
#line 41 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 41 "io_action.m"
    MR_Integer mdb__io_action__Cast_HeadVar1_4 = mdb__io_action__HeadVar__2_2;
#line 41 "io_action.m"
    MR_Integer mdb__io_action__Cast_HeadVar2_5 = mdb__io_action__HeadVar__3_3;

#line 41 "io_action.m"
    {
#line 41 "io_action.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__io_action__HeadVar__1_1, mdb__io_action__Cast_HeadVar1_4, mdb__io_action__Cast_HeadVar2_5);
#line 41 "io_action.m"
      return;
    }
#line 41 "io_action.m"
  }
#line 41 "io_action.m"
}

#line 41 "io_action.m"
MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0(
#line 41 "io_action.m"
  MR_Integer mdb__io_action__HeadVar__1_1,
#line 41 "io_action.m"
  MR_Integer mdb__io_action__HeadVar__2_2)
#line 41 "io_action.m"
{
#line 41 "io_action.m"
  {
#line 41 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 41 "io_action.m"
    MR_Integer mdb__io_action__Cast_HeadVar1_3 = mdb__io_action__HeadVar__1_1;
#line 41 "io_action.m"
    MR_Integer mdb__io_action__Cast_HeadVar2_4 = mdb__io_action__HeadVar__2_2;

#line 41 "io_action.m"
    mdb__io_action__succeeded = (mdb__io_action__Cast_HeadVar1_3 == mdb__io_action__Cast_HeadVar2_4);
#line 41 "io_action.m"
    return mdb__io_action__succeeded;
#line 41 "io_action.m"
  }
#line 41 "io_action.m"
}

#line 43 "io_action.m"
void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0(
#line 43 "io_action.m"
  MR_Word * mdb__io_action__HeadVar__1_1,
#line 43 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2,
#line 43 "io_action.m"
  MR_Word mdb__io_action__HeadVar__3_3)
#line 43 "io_action.m"
{
#line 43 "io_action.m"
  {
#line 43 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 43 "io_action.m"
    MR_Integer mdb__io_action__CastX_9 = (MR_Integer) mdb__io_action__HeadVar__2_2;
#line 43 "io_action.m"
    MR_Integer mdb__io_action__CastY_10 = (MR_Integer) mdb__io_action__HeadVar__3_3;

#line 43 "io_action.m"
    mdb__io_action__succeeded = (mdb__io_action__CastX_9 == mdb__io_action__CastY_10);
#line 43 "io_action.m"
    if (mdb__io_action__succeeded)
#line 997 "mdb.io_action.c"
      *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "io_action.m"
    else
#line 43 "io_action.m"
      {
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "io_action.m"
        MR_Word mdb__io_action__V_8_8;

#line 43 "io_action.m"
        {
#line 43 "io_action.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__io_action__V_8_8, mdb__io_action__V_4_4, mdb__io_action__V_6_6);
        }
#line 1019 "mdb.io_action.c"
        mdb__io_action__succeeded = (mdb__io_action__V_8_8 == (MR_Integer) 0);
#line 43 "io_action.m"
        mdb__io_action__succeeded = !(mdb__io_action__succeeded);
#line 43 "io_action.m"
        if (mdb__io_action__succeeded)
#line 43 "io_action.m"
          *mdb__io_action__HeadVar__1_1 = mdb__io_action__V_8_8;
#line 43 "io_action.m"
        else
#line 43 "io_action.m"
          {
#line 43 "io_action.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__io_action__HeadVar__1_1, mdb__io_action__V_5_5, mdb__io_action__V_7_7);
#line 43 "io_action.m"
            return;
          }
#line 43 "io_action.m"
      }
#line 43 "io_action.m"
  }
#line 43 "io_action.m"
}

#line 43 "io_action.m"
MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0(
#line 43 "io_action.m"
  MR_Word mdb__io_action__HeadVar__1_1,
#line 43 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2)
#line 43 "io_action.m"
{
#line 43 "io_action.m"
  {
#line 43 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 43 "io_action.m"
    MR_Integer mdb__io_action__CastX_7 = (MR_Integer) mdb__io_action__HeadVar__1_1;
#line 43 "io_action.m"
    MR_Integer mdb__io_action__CastY_8 = (MR_Integer) mdb__io_action__HeadVar__2_2;

#line 43 "io_action.m"
    mdb__io_action__succeeded = (mdb__io_action__CastX_7 == mdb__io_action__CastY_8);
#line 43 "io_action.m"
    if (mdb__io_action__succeeded)
#line 43 "io_action.m"
      mdb__io_action__succeeded = MR_TRUE;
#line 43 "io_action.m"
    else
#line 43 "io_action.m"
      {
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "io_action.m"
        MR_Integer mdb__io_action__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));

#line 1080 "mdb.io_action.c"
        mdb__io_action__succeeded = (mdb__io_action__V_3_3 == mdb__io_action__V_5_5);
#line 43 "io_action.m"
        if (mdb__io_action__succeeded)
#line 1084 "mdb.io_action.c"
          mdb__io_action__succeeded = (mdb__io_action__V_4_4 == mdb__io_action__V_6_6);
#line 43 "io_action.m"
      }
#line 43 "io_action.m"
    return mdb__io_action__succeeded;
#line 43 "io_action.m"
  }
#line 43 "io_action.m"
}

#line 30 "io_action.m"
void MR_CALL 
mdb__io_action____Compare____io_action_0_0(
#line 30 "io_action.m"
  MR_Word * mdb__io_action__HeadVar__1_1,
#line 30 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2,
#line 30 "io_action.m"
  MR_Word mdb__io_action__HeadVar__3_3)
#line 30 "io_action.m"
{
#line 30 "io_action.m"
  {
#line 30 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 30 "io_action.m"
    MR_Integer mdb__io_action__CastX_12 = (MR_Integer) mdb__io_action__HeadVar__2_2;
#line 30 "io_action.m"
    MR_Integer mdb__io_action__CastY_13 = (MR_Integer) mdb__io_action__HeadVar__3_3;

#line 30 "io_action.m"
    mdb__io_action__succeeded = (mdb__io_action__CastX_12 == mdb__io_action__CastY_13);
#line 30 "io_action.m"
    if (mdb__io_action__succeeded)
#line 1119 "mdb.io_action.c"
      *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "io_action.m"
    else
#line 30 "io_action.m"
      {
#line 30 "io_action.m"
        MR_String mdb__io_action__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "io_action.m"
        MR_String mdb__io_action__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 0)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_10_10;

#line 30 "io_action.m"
        {
#line 30 "io_action.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__io_action__V_10_10, mdb__io_action__V_4_4, mdb__io_action__V_7_7);
        }
#line 1145 "mdb.io_action.c"
        mdb__io_action__succeeded = (mdb__io_action__V_10_10 == (MR_Integer) 0);
#line 30 "io_action.m"
        mdb__io_action__succeeded = !(mdb__io_action__succeeded);
#line 30 "io_action.m"
        if (mdb__io_action__succeeded)
#line 30 "io_action.m"
          *mdb__io_action__HeadVar__1_1 = mdb__io_action__V_10_10;
#line 30 "io_action.m"
        else
#line 30 "io_action.m"
          {
#line 30 "io_action.m"
            MR_Word mdb__io_action__V_11_11;
#line 30 "io_action.m"
            MR_Integer mdb__io_action__V_17_17 = (MR_Integer) mdb__io_action__V_5_5;
#line 30 "io_action.m"
            MR_Integer mdb__io_action__V_18_18 = (MR_Integer) mdb__io_action__V_8_8;

#line 30 "io_action.m"
            {
#line 30 "io_action.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__io_action__V_11_11, mdb__io_action__V_17_17, mdb__io_action__V_18_18);
            }
#line 1169 "mdb.io_action.c"
            mdb__io_action__succeeded = (mdb__io_action__V_11_11 == (MR_Integer) 0);
#line 30 "io_action.m"
            mdb__io_action__succeeded = !(mdb__io_action__succeeded);
#line 30 "io_action.m"
            if (mdb__io_action__succeeded)
#line 30 "io_action.m"
              *mdb__io_action__HeadVar__1_1 = mdb__io_action__V_11_11;
#line 30 "io_action.m"
            else
#line 30 "io_action.m"
              {
#line 30 "io_action.m"
                {
#line 30 "io_action.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__io_action_scalar_common_1[0], mdb__io_action__HeadVar__1_1, ((MR_Box) (mdb__io_action__V_6_6)), ((MR_Box) (mdb__io_action__V_9_9)));
#line 30 "io_action.m"
                  return;
                }
#line 30 "io_action.m"
              }
#line 30 "io_action.m"
          }
#line 30 "io_action.m"
      }
#line 30 "io_action.m"
  }
#line 30 "io_action.m"
}

#line 30 "io_action.m"
MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0(
#line 30 "io_action.m"
  MR_Word mdb__io_action__HeadVar__1_1,
#line 30 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2)
#line 30 "io_action.m"
{
#line 30 "io_action.m"
  {
#line 30 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 30 "io_action.m"
    MR_Integer mdb__io_action__CastX_9 = (MR_Integer) mdb__io_action__HeadVar__1_1;
#line 30 "io_action.m"
    MR_Integer mdb__io_action__CastY_10 = (MR_Integer) mdb__io_action__HeadVar__2_2;

#line 30 "io_action.m"
    mdb__io_action__succeeded = (mdb__io_action__CastX_9 == mdb__io_action__CastY_10);
#line 30 "io_action.m"
    if (mdb__io_action__succeeded)
#line 30 "io_action.m"
      mdb__io_action__succeeded = MR_TRUE;
#line 30 "io_action.m"
    else
#line 30 "io_action.m"
      {
#line 30 "io_action.m"
        MR_Word mdb__io_action__TypeInfo_11_11;
#line 30 "io_action.m"
        MR_String mdb__io_action__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "io_action.m"
        MR_String mdb__io_action__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "io_action.m"
        MR_Word mdb__io_action__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 2)));

#line 1242 "mdb.io_action.c"
        mdb__io_action__succeeded = (strcmp(mdb__io_action__V_3_3, mdb__io_action__V_6_6) == 0);
#line 30 "io_action.m"
        if (mdb__io_action__succeeded)
#line 30 "io_action.m"
          {
#line 1248 "mdb.io_action.c"
            mdb__io_action__succeeded = (mdb__io_action__V_4_4 == mdb__io_action__V_7_7);
#line 30 "io_action.m"
            if (mdb__io_action__succeeded)
#line 30 "io_action.m"
              {
#line 1254 "mdb.io_action.c"
                mdb__io_action__TypeInfo_11_11 = (MR_Word) &mdb__io_action_scalar_common_1[0];
#line 1256 "mdb.io_action.c"
                {
#line 1258 "mdb.io_action.c"
                  return mdb__io_action__succeeded = mercury__builtin__unify_2_p_0(mdb__io_action__TypeInfo_11_11, ((MR_Box) (mdb__io_action__V_5_5)), ((MR_Box) (mdb__io_action__V_8_8)));
                }
#line 30 "io_action.m"
              }
#line 30 "io_action.m"
          }
#line 30 "io_action.m"
      }
#line 30 "io_action.m"
    return mdb__io_action__succeeded;
#line 30 "io_action.m"
  }
#line 30 "io_action.m"
}

#line 123 "io_action.m"
static MR_Word MR_CALL 
mdb__io_action__make_yes_io_action_3_f_0(
#line 123 "io_action.m"
  MR_String mdb__io_action__ProcName_1,
#line 123 "io_action.m"
  MR_Word mdb__io_action__HeadVar__2_2,
#line 123 "io_action.m"
  MR_Word mdb__io_action__Args_3)
#line 123 "io_action.m"
{
#line 127 "io_action.m"
  {
#line 127 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 127 "io_action.m"
    MR_Word mdb__io_action__HeadVar__4_4;

#line 127 "io_action.m"
    if ((mdb__io_action__HeadVar__2_2 == (MR_Integer) 0))
#line 129 "io_action.m"
      {
#line 129 "io_action.m"
        MR_Word mdb__io_action__V_11_11;

#line 130 "io_action.m"
        {
#line 130 "io_action.m"
          mdb__io_action__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 130 "io_action.m"
          MR_hl_field(MR_mktag(0), mdb__io_action__V_11_11, 0) = ((MR_Box) (mdb__io_action__ProcName_1));
#line 130 "io_action.m"
          MR_hl_field(MR_mktag(0), mdb__io_action__V_11_11, 1) = ((MR_Box) ((MR_Integer) 0));
#line 130 "io_action.m"
          MR_hl_field(MR_mktag(0), mdb__io_action__V_11_11, 2) = ((MR_Box) (mdb__io_action__Args_3));
#line 130 "io_action.m"
        }
#line 130 "io_action.m"
        {
#line 130 "io_action.m"
          mdb__io_action__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 130 "io_action.m"
          MR_hl_field(MR_mktag(1), mdb__io_action__HeadVar__4_4, 0) = ((MR_Box) (mdb__io_action__V_11_11));
#line 130 "io_action.m"
        }
#line 129 "io_action.m"
      }
#line 127 "io_action.m"
    else
#line 127 "io_action.m"
      {
#line 127 "io_action.m"
        MR_Word mdb__io_action__V_7_7;

#line 128 "io_action.m"
        {
#line 128 "io_action.m"
          mdb__io_action__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 128 "io_action.m"
          MR_hl_field(MR_mktag(0), mdb__io_action__V_7_7, 0) = ((MR_Box) (mdb__io_action__ProcName_1));
#line 128 "io_action.m"
          MR_hl_field(MR_mktag(0), mdb__io_action__V_7_7, 1) = ((MR_Box) ((MR_Integer) 1));
#line 128 "io_action.m"
          MR_hl_field(MR_mktag(0), mdb__io_action__V_7_7, 2) = ((MR_Box) (mdb__io_action__Args_3));
#line 128 "io_action.m"
        }
#line 128 "io_action.m"
        {
#line 128 "io_action.m"
          mdb__io_action__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "io_action.m"
          MR_hl_field(MR_mktag(1), mdb__io_action__HeadVar__4_4, 0) = ((MR_Box) (mdb__io_action__V_7_7));
#line 128 "io_action.m"
        }
#line 127 "io_action.m"
      }
#line 127 "io_action.m"
    return mdb__io_action__HeadVar__4_4;
#line 127 "io_action.m"
  }
#line 123 "io_action.m"
}

#line 117 "io_action.m"
static MR_Word MR_CALL 
mdb__io_action__make_no_io_action_0_f_0(void)
#line 117 "io_action.m"
{
#line 121 "io_action.m"
  {
#line 121 "io_action.m"
    MR_bool mdb__io_action__succeeded;

#line 121 "io_action.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "io_action.m"
  }
#line 117 "io_action.m"
}

#line 85 "io_action.m"
static void MR_CALL 
mdb__io_action__pickup_io_action_4_p_0(
#line 85 "io_action.m"
  MR_Integer mdb__io_action__SeqNum_1,
#line 85 "io_action.m"
  MR_Word * mdb__io_action__MaybeIOAction_2)
#line 85 "io_action.m"
{
#line 88 "io_action.m"
  {
#line 88 "io_action.m"
    MR_bool mdb__io_action__succeeded;

#line 91 "io_action.m"
{
#define MR_PROC_LABEL mdb__io_action__pickup_io_action_4_p_0

	MR_Integer SeqNum;
	MR_Word MaybeIOAction;
	MR_Word S0;
	MR_Word S;

	SeqNum =  mdb__io_action__SeqNum_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 91 "io_action.m"
{
    const char  *problem;
    const char  *proc_name;
    MR_bool     io_action_tabled;
    MR_Word     is_func;
    MR_bool     have_arg_infos;
    MR_Word     args;
    MR_String   ProcName;

    MR_save_transient_hp();
    io_action_tabled = MR_trace_get_action(SeqNum, &proc_name, &is_func,
        &have_arg_infos, &args);
    MR_restore_transient_hp();

    /* cast away const */
    ProcName = (MR_String) (MR_Integer) proc_name;
    if (io_action_tabled && have_arg_infos) {
        MaybeIOAction = MR_IO_ACTION_make_yes_io_action(ProcName, is_func,
            args);
    } else {
        MaybeIOAction = MR_IO_ACTION_make_no_io_action();
    }

    S = S0;
}
#line 1426 "mdb.io_action.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__io_action__MaybeIOAction_2  = MaybeIOAction;
#line 91 "io_action.m"
}
#line 88 "io_action.m"
  }
#line 85 "io_action.m"
}

#line 51 "io_action.m"
void MR_CALL 
mdb__io_action__get_maybe_io_action_4_p_0(
#line 51 "io_action.m"
  MR_Integer mdb__io_action__IoActionNum_5,
#line 51 "io_action.m"
  MR_Word * mdb__io_action__MaybeTabledIoAction_6)
#line 51 "io_action.m"
{
#line 64 "io_action.m"
  {
#line 64 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 64 "io_action.m"
    MR_Word mdb__io_action__MaybeIoAction_8;

#line 91 "io_action.m"
{
#define MR_PROC_LABEL mdb__io_action__get_maybe_io_action_4_p_0

	MR_Integer SeqNum;
	MR_Word MaybeIOAction;
	MR_Word S0;
	MR_Word S;

	SeqNum =  mdb__io_action__IoActionNum_5 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 91 "io_action.m"
{
    const char  *problem;
    const char  *proc_name;
    MR_bool     io_action_tabled;
    MR_Word     is_func;
    MR_bool     have_arg_infos;
    MR_Word     args;
    MR_String   ProcName;

    MR_save_transient_hp();
    io_action_tabled = MR_trace_get_action(SeqNum, &proc_name, &is_func,
        &have_arg_infos, &args);
    MR_restore_transient_hp();

    /* cast away const */
    ProcName = (MR_String) (MR_Integer) proc_name;
    if (io_action_tabled && have_arg_infos) {
        MaybeIOAction = MR_IO_ACTION_make_yes_io_action(ProcName, is_func,
            args);
    } else {
        MaybeIOAction = MR_IO_ACTION_make_no_io_action();
    }

    S = S0;
}
#line 1492 "mdb.io_action.c"

		;}
#undef MR_PROC_LABEL
	 mdb__io_action__MaybeIoAction_8  = MaybeIOAction;
#line 91 "io_action.m"
}
#line 69 "io_action.m"
    if ((mdb__io_action__MaybeIoAction_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "io_action.m"
      *mdb__io_action__MaybeTabledIoAction_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 69 "io_action.m"
    else
#line 67 "io_action.m"
      {
#line 67 "io_action.m"
        MR_Word mdb__io_action__IoAction_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__io_action__MaybeIoAction_8, (MR_Integer) 0)));

#line 68 "io_action.m"
        *mdb__io_action__MaybeTabledIoAction_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) mdb__io_action__IoAction_9);
#line 67 "io_action.m"
      }
#line 64 "io_action.m"
  }
#line 51 "io_action.m"
}

#line 49 "io_action.m"
MR_Word MR_CALL 
mdb__io_action__io_action_to_browser_term_1_f_0(
#line 49 "io_action.m"
  MR_Word mdb__io_action__IoAction_3)
#line 49 "io_action.m"
{
#line 74 "io_action.m"
  {
#line 74 "io_action.m"
    MR_bool mdb__io_action__succeeded;
#line 74 "io_action.m"
    MR_Word mdb__io_action__Term_4;
#line 74 "io_action.m"
    MR_String mdb__io_action__ProcName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__IoAction_3, (MR_Integer) 0)));
#line 74 "io_action.m"
    MR_Word mdb__io_action__PredFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__IoAction_3, (MR_Integer) 1)));
#line 74 "io_action.m"
    MR_Word mdb__io_action__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__IoAction_3, (MR_Integer) 2)));
#line 74 "io_action.m"
    MR_Word mdb__io_action__IsFunc_8;

#line 79 "io_action.m"
    if ((mdb__io_action__PredFunc_6 == (MR_Integer) 1))
#line 81 "io_action.m"
      mdb__io_action__IsFunc_8 = (MR_Integer) 1;
#line 79 "io_action.m"
    else
#line 78 "io_action.m"
      mdb__io_action__IsFunc_8 = (MR_Integer) 0;
#line 83 "io_action.m"
    {
#line 83 "io_action.m"
      return mdb__io_action__Term_4 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__io_action__ProcName_5, mdb__io_action__Args_7, mdb__io_action__IsFunc_8);
    }
#line 74 "io_action.m"
    return mdb__io_action__Term_4;
#line 74 "io_action.m"
  }
#line 49 "io_action.m"
}

void mercury__mdb__io_action__init(void)
{
}

void mercury__mdb__io_action__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_io_action_0);
	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0);
	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_io_seq_num_0);
	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_maybe_tabled_io_action_0);
}

void mercury__mdb__io_action__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.io_action. */
