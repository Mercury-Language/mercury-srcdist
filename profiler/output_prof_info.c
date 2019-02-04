/*
** Automatically generated from `output_prof_info.m'
** by the Mercury compiler,
** version rotd-2018-06-03
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


// :- module output_prof_info.
// :- implementation.

/*
INIT mercury__output_prof_info__init
ENDINIT
*/

#include "output_prof_info.mih"


#include "array.mih"
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
#include "random.mih"
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




static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6];

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_child_0_0;

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1];

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1];

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1];

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1];

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0;

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0;

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_0[12];

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0;

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_1[9];

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1;

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1];

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1];

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0[2];

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2];

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2];

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5];

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_parent_0_0;

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1];

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1];

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1];

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1];

static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0;

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_profiler_output_0_0[3];

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_profiler_output_0_0;

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_profiler_output_0_0[1];

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_profiler_output_0[1];

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_profiler_output_0[1];

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_profiler_output_0[1];

static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
output_prof_info____Unify____profiler_output_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
output_prof_info____Compare____profiler_output_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box output_prof_info_scalar_common_1[3][2];

static /* final */ const MR_Box output_prof_info_scalar_common_2[1][3];




static /* final */ const MR_Box output_prof_info_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_parent_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_child_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box output_prof_info_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_child_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_child_0_0 = {
  (MR_String) "child",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_child_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_child_0_0
  }
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_child_0_0
};

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_child_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____child_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____child_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "child",
  {     output_prof_info__output_prof_info__du_name_ordered_child_0 },
  {     output_prof_info__output_prof_info__du_ptag_ordered_child_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_child_0
};

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&output_prof_info__output_prof_info__type_ctor_info_parent_0)
  }
};

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&output_prof_info__output_prof_info__type_ctor_info_child_0)
  }
};

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_0[12] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0)
};

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0 = {
  (MR_String) "output_prof",
  (MR_Integer) 12,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_output_prof_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_output_prof_0_1[9] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0)
};

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1 = {
  (MR_String) "output_cycle_prof",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  output_prof_info__output_prof_info__field_types_output_prof_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1
};

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1
  }
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_output_prof_0[2] = {
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1,
  &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0
};

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_output_prof_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_output_prof_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____output_prof_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____output_prof_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "output_prof",
  {     output_prof_info__output_prof_info__du_name_ordered_output_prof_0 },
  {     output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_output_prof_0
};

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_parent_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_parent_0_0 = {
  (MR_String) "parent",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_parent_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_parent_0_0
  }
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_parent_0_0
};

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_parent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____parent_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____parent_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "parent",
  {     output_prof_info__output_prof_info__du_name_ordered_parent_0 },
  {     output_prof_info__output_prof_info__du_ptag_ordered_parent_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_parent_0
};

static const MR_FA_TypeInfo_Struct2 output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0)
  }
};

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_profiler_output_0_0[3] = {
  (MR_PseudoTypeInfo) (&output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_profiler_output_0_0 = {
  (MR_String) "profiler_output",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  output_prof_info__output_prof_info__field_types_profiler_output_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_profiler_output_0_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_profiler_output_0_0
};

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_profiler_output_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_profiler_output_0_0
  }
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_profiler_output_0[1] = {
  &output_prof_info__output_prof_info__du_functor_desc_profiler_output_0_0
};

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_profiler_output_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_profiler_output_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____profiler_output_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____profiler_output_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "profiler_output",
  {     output_prof_info__output_prof_info__du_name_ordered_profiler_output_0 },
  {     output_prof_info__output_prof_info__du_ptag_ordered_profiler_output_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  output_prof_info__output_prof_info__functor_number_map_profiler_output_0
};

void MR_CALL 
output_prof_info____Compare____profiler_output_0_0(
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
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_2[0]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[2]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
output_prof_info____Unify____profiler_output_0_0(
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
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&output_prof_info_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&output_prof_info_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&output_prof_info_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
output_prof_info____Compare____parent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Float ArgX3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Float ArgX4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Float ArgY4_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer ArgX5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word Var_14;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__private_builtin__builtin_compare_float_3_p_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__private_builtin__builtin_compare_float_3_p_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0(
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
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
output_prof_info____Compare____output_prof_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_107 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_108 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_107 == CastY_108);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer Var_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer Var_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
      MR_Float Var_134 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
      MR_Float Var_135 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      MR_Float Var_136 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_138 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String ArgY1_82 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Float ArgY3_86 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
        MR_Float ArgY4_88 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
        MR_Float ArgY5_90 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer ArgY6_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 5))));
        MR_Integer ArgY7_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 6))));
        MR_Word ArgY8_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 7))));
        MR_Word ArgY9_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 8))));
        MR_Word Var_99;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_99, Var_138, ArgY1_82);
        succeeded = (Var_99 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_99;
        else
        {
          MR_Word Var_100;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_100, Var_137, ArgY2_84);
          succeeded = (Var_100 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_100;
          else
          {
            MR_Word Var_101;

            mercury__private_builtin__builtin_compare_float_3_p_0(&Var_101, Var_136, ArgY3_86);
            succeeded = (Var_101 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_101;
            else
            {
              MR_Word Var_102;

              mercury__private_builtin__builtin_compare_float_3_p_0(&Var_102, Var_135, ArgY4_88);
              succeeded = (Var_102 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_102;
              else
              {
                MR_Word Var_103;

                mercury__private_builtin__builtin_compare_float_3_p_0(&Var_103, Var_134, ArgY5_90);
                succeeded = (Var_103 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_103;
                else
                {
                  MR_Word Var_104;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_104, Var_133, ArgY6_92);
                  succeeded = (Var_104 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_104;
                  else
                  {
                    MR_Word Var_105;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_105, Var_132, ArgY7_94);
                    succeeded = (Var_105 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_105;
                    else
                    {
                      MR_Word Var_106;

                      mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[0]), &Var_106, ((MR_Box) (Var_131)), ((MR_Box) (ArgY8_96)));
                      succeeded = (Var_106 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_106;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_130)), ((MR_Box) (ArgY9_98)));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Float Var_145 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Float Var_146 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Float Var_147 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Float Var_148 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_150 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Float ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
        MR_Float ArgY4_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
        MR_Float ArgY5_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
        MR_Float ArgY6_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer ArgY7_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
        MR_Integer ArgY8_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
        MR_Word ArgY9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
        MR_Word ArgY10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
        MR_Word ArgY11_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
        MR_Word ArgY12_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
        MR_Word Var_28;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_28, Var_150, ArgY1_5);
        succeeded = (Var_28 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_28;
        else
        {
          MR_Word Var_29;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_29, Var_149, ArgY2_7);
          succeeded = (Var_29 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_29;
          else
          {
            MR_Word Var_30;

            mercury__private_builtin__builtin_compare_float_3_p_0(&Var_30, Var_148, ArgY3_9);
            succeeded = (Var_30 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_30;
            else
            {
              MR_Word Var_31;

              mercury__private_builtin__builtin_compare_float_3_p_0(&Var_31, Var_147, ArgY4_11);
              succeeded = (Var_31 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_31;
              else
              {
                MR_Word Var_32;

                mercury__private_builtin__builtin_compare_float_3_p_0(&Var_32, Var_146, ArgY5_13);
                succeeded = (Var_32 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_32;
                else
                {
                  MR_Word Var_33;

                  mercury__private_builtin__builtin_compare_float_3_p_0(&Var_33, Var_145, ArgY6_15);
                  succeeded = (Var_33 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_33;
                  else
                  {
                    MR_Word Var_34;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, Var_144, ArgY7_17);
                    succeeded = (Var_34 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_34;
                    else
                    {
                      MR_Word Var_35;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, Var_143, ArgY8_19);
                      succeeded = (Var_35 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_35;
                      else
                      {
                        MR_Word Var_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[0]), &Var_36, ((MR_Box) (Var_142)), ((MR_Box) (ArgY9_21)));
                        succeeded = (Var_36 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_36;
                        else
                        {
                          MR_Word Var_37;

                          mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[1]), &Var_37, ((MR_Box) (Var_141)), ((MR_Box) (ArgY10_23)));
                          succeeded = (Var_37 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_37;
                          else
                          {
                            MR_Word Var_38;

                            mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[0]), &Var_38, ((MR_Box) (Var_140)), ((MR_Box) (ArgY11_25)));
                            succeeded = (Var_38 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_38;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_139)), ((MR_Box) (ArgY12_27)));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_45 == CastY_46);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_47_47;
      MR_Word TypeInfo_48_48;
      MR_String ArgX1_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_28;
      MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_30;
      MR_Float ArgX3_31 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Float ArgY3_32;
      MR_Float ArgX4_33 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Float ArgY4_34;
      MR_Float ArgX5_35 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4)));
      MR_Float ArgY5_36;
      MR_Integer ArgX6_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5))));
      MR_Integer ArgY6_38;
      MR_Integer ArgX7_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_40;
      MR_Word ArgX8_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_42;
      MR_Word ArgX9_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_44;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_32 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
        ArgY4_34 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
        ArgY5_36 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
        ArgY6_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
        ArgY7_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 6))));
        ArgY8_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 7))));
        ArgY9_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 8))));
        succeeded = (strcmp(ArgX1_27, ArgY1_28) == 0);
        if (succeeded)
        {
          succeeded = (ArgX2_29 == ArgY2_30);
          if (succeeded)
          {
            succeeded = (ArgX3_31 == ArgY3_32);
            if (succeeded)
            {
              succeeded = (ArgX4_33 == ArgY4_34);
              if (succeeded)
              {
                succeeded = (ArgX5_35 == ArgY5_36);
                if (succeeded)
                {
                  succeeded = (ArgX6_37 == ArgY6_38);
                  if (succeeded)
                  {
                    succeeded = (ArgX7_39 == ArgY7_40);
                    if (succeeded)
                    {
                      TypeInfo_47_47 = (MR_Word) (&output_prof_info_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX8_41)), ((MR_Box) (ArgY8_42)));
                      if (succeeded)
                      {
                        TypeInfo_48_48 = (MR_Word) (&output_prof_info_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX9_43)), ((MR_Box) (ArgY9_44)));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word TypeInfo_49_49;
      MR_Word TypeInfo_50_50;
      MR_Word TypeInfo_51_51;
      MR_Word TypeInfo_52_52;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6;
      MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Float ArgY3_8;
      MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Float ArgY4_10;
      MR_Float ArgX5_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Float ArgY5_12;
      MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Float ArgY6_14;
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16;
      MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Integer ArgY8_18;
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20;
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22;
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24;
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
        ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
        ArgY5_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
        ArgY6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
        ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
        ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
        ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
        ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
        ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
        ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
        {
          succeeded = (ArgX2_5 == ArgY2_6);
          if (succeeded)
          {
            succeeded = (ArgX3_7 == ArgY3_8);
            if (succeeded)
            {
              succeeded = (ArgX4_9 == ArgY4_10);
              if (succeeded)
              {
                succeeded = (ArgX5_11 == ArgY5_12);
                if (succeeded)
                {
                  succeeded = (ArgX6_13 == ArgY6_14);
                  if (succeeded)
                  {
                    succeeded = (ArgX7_15 == ArgY7_16);
                    if (succeeded)
                    {
                      succeeded = (ArgX8_17 == ArgY8_18);
                      if (succeeded)
                      {
                        TypeInfo_49_49 = (MR_Word) (&output_prof_info_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                        if (succeeded)
                        {
                          TypeInfo_50_50 = (MR_Word) (&output_prof_info_scalar_common_1[1]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                          if (succeeded)
                          {
                            TypeInfo_51_51 = (MR_Word) (&output_prof_info_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                            if (succeeded)
                            {
                              TypeInfo_52_52 = (MR_Word) (&output_prof_info_scalar_common_1[1]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
output_prof_info____Compare____child_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Float ArgX3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Float ArgX4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Float ArgY4_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer ArgX5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer ArgX6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgY6_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word Var_16;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, ArgX2_6, ArgY2_7);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__private_builtin__builtin_compare_float_3_p_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__private_builtin__builtin_compare_float_3_p_0(&Var_19, ArgX4_10, ArgY4_11);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
                mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX6_14, ArgY6_15);
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
output_prof_info____Unify____child_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
                succeeded = (ArgX6_13 == ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = output_prof_info____Unify____child_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    output_prof_info____Compare____child_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = output_prof_info____Unify____output_prof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    output_prof_info____Compare____output_prof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = output_prof_info____Unify____parent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    output_prof_info____Compare____parent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
output_prof_info____Unify____profiler_output_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = output_prof_info____Unify____profiler_output_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
output_prof_info____Compare____profiler_output_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    output_prof_info____Compare____profiler_output_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&output_prof_info__output_prof_info__type_ctor_info_output_prof_0);
	MR_register_type_ctor_info(&output_prof_info__output_prof_info__type_ctor_info_parent_0);
	MR_register_type_ctor_info(&output_prof_info__output_prof_info__type_ctor_info_profiler_output_0);
}

void mercury__output_prof_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__output_prof_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module output_prof_info.
