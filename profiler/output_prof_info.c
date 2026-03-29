/*
** Automatically generated from `output_prof_info.m'
** by the Mercury compiler,
** version rotd-2026-03-29
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


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
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
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_parent_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_child_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box output_prof_info_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0))
  },
};





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
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  output_prof_info__output_prof_info__field_types_child_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_child_0_0[1] = { &output_prof_info__output_prof_info__du_functor_desc_child_0_0 };

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_child_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_child_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_child_0[1] = { &output_prof_info__output_prof_info__du_functor_desc_child_0_0 };

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_child_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_child_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____child_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____child_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "child",
  { output_prof_info__output_prof_info__du_name_ordered_child_0 },
  { output_prof_info__output_prof_info__du_ptag_ordered_child_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  output_prof_info__output_prof_info__functor_number_map_child_0,

};

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_parent_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&output_prof_info__output_prof_info__type_ctor_info_parent_0) }
};

static const MR_FA_TypeInfo_Struct1 output_prof_info__list__ti_list_1output_prof_info__type_ctor_info_child_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&output_prof_info__output_prof_info__type_ctor_info_child_0) }
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
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  output_prof_info__output_prof_info__field_types_output_prof_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  output_prof_info__output_prof_info__field_types_output_prof_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0[1] = { &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_0 };

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1[1] = { &output_prof_info__output_prof_info__du_functor_desc_output_prof_0_1 };

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_output_prof_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____output_prof_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____output_prof_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "output_prof",
  { output_prof_info__output_prof_info__du_name_ordered_output_prof_0 },
  { output_prof_info__output_prof_info__du_ptag_ordered_output_prof_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  output_prof_info__output_prof_info__functor_number_map_output_prof_0,

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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  output_prof_info__output_prof_info__field_types_parent_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_parent_0_0[1] = { &output_prof_info__output_prof_info__du_functor_desc_parent_0_0 };

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_parent_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_parent_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_parent_0[1] = { &output_prof_info__output_prof_info__du_functor_desc_parent_0_0 };

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_parent_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_parent_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____parent_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____parent_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "parent",
  { output_prof_info__output_prof_info__du_name_ordered_parent_0 },
  { output_prof_info__output_prof_info__du_ptag_ordered_parent_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  output_prof_info__output_prof_info__functor_number_map_parent_0,

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo output_prof_info__output_prof_info__field_types_profiler_output_0_0[3] = {
  (MR_PseudoTypeInfo) (&output_prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&output_prof_info__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc output_prof_info__output_prof_info__du_functor_desc_profiler_output_0_0 = {
  (MR_String) "profiler_output",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  output_prof_info__output_prof_info__field_types_profiler_output_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_stag_ordered_profiler_output_0_0[1] = { &output_prof_info__output_prof_info__du_functor_desc_profiler_output_0_0 };

static const MR_DuPtagLayout output_prof_info__output_prof_info__du_ptag_ordered_profiler_output_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    output_prof_info__output_prof_info__du_stag_ordered_profiler_output_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr output_prof_info__output_prof_info__du_name_ordered_profiler_output_0[1] = { &output_prof_info__output_prof_info__du_functor_desc_profiler_output_0_0 };

static const MR_Integer output_prof_info__output_prof_info__functor_number_map_profiler_output_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct output_prof_info__output_prof_info__type_ctor_info_profiler_output_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (output_prof_info____Unify____profiler_output_0_0_10001)),
  ((MR_Box) (output_prof_info____Compare____profiler_output_0_0_10001)),
  (MR_String) "output_prof_info",
  (MR_String) "profiler_output",
  { output_prof_info__output_prof_info__du_name_ordered_profiler_output_0 },
  { output_prof_info__output_prof_info__du_ptag_ordered_profiler_output_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  output_prof_info__output_prof_info__functor_number_map_profiler_output_0,

};

void MR_CALL 
output_prof_info____Compare____profiler_output_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
output_prof_info____Unify____profiler_output_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

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

void MR_CALL 
output_prof_info____Compare____parent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 2)));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 3)));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
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
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 3)));
    MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));

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

void MR_CALL 
output_prof_info____Compare____output_prof_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_65 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_66 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_65 == CastY_66);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgX1_39 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_String ArgY1_40 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer ArgX2_42 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer ArgY2_43 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Float ArgX3_45 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 2)));
      MR_Float ArgY3_46 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, 2)));
      MR_Float ArgX4_48 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
      MR_Float ArgY4_49 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, 3)));
      MR_Float ArgX5_51 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 4)));
      MR_Float ArgY5_52 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, 4)));
      MR_Integer ArgX6_54 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));
      MR_Integer ArgY6_55 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 5))));
      MR_Integer ArgX7_57 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));
      MR_Integer ArgY7_58 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 6))));
      MR_Word ArgX8_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 7))));
      MR_Word ArgY8_61 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 7))));
      MR_Word ArgX9_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 8))));
      MR_Word ArgY9_64 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 8))));
      MR_Word SubResult1_41;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_41, ArgX1_39, ArgY1_40);
      succeeded = (SubResult1_41 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_41;
      else
      {
        MR_Word SubResult2_44;

        succeeded = (ArgX2_42 < ArgY2_43);
        if (succeeded)
        {
          SubResult2_44 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_42 > ArgY2_43);
          if (succeeded)
          {
            SubResult2_44 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_44;
        else
        {
          MR_Word SubResult3_47;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_47, ArgX3_45, ArgY3_46);
          succeeded = (SubResult3_47 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_47;
          else
          {
            MR_Word SubResult4_50;

            mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_50, ArgX4_48, ArgY4_49);
            succeeded = (SubResult4_50 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_50;
            else
            {
              MR_Word SubResult5_53;

              mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult5_53, ArgX5_51, ArgY5_52);
              succeeded = (SubResult5_53 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_53;
              else
              {
                MR_Word SubResult6_56;

                succeeded = (ArgX6_54 < ArgY6_55);
                if (succeeded)
                {
                  SubResult6_56 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX6_54 > ArgY6_55);
                  if (succeeded)
                  {
                    SubResult6_56 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_56;
                else
                {
                  MR_Word SubResult7_59;

                  succeeded = (ArgX7_57 < ArgY7_58);
                  if (succeeded)
                  {
                    SubResult7_59 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX7_57 > ArgY7_58);
                    if (succeeded)
                    {
                      SubResult7_59 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_59;
                  else
                  {
                    MR_Word SubResult8_62;

                    mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[0]), &SubResult8_62, ((MR_Box) (ArgX8_60)), ((MR_Box) (ArgY8_61)));
                    succeeded = (SubResult8_62 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_62;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX9_63)), ((MR_Box) (ArgY9_64)));
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
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 2)));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 3)));
    MR_Float ArgX5_16 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 4)));
    MR_Float ArgY5_17 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 4)));
    MR_Float ArgX6_19 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 5)));
    MR_Float ArgY6_20 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 5)));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[0]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[1]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[0]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&output_prof_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
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
  MR_bool succeeded;
  MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_45 == CastY_46);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_47_47;
    MR_Word TypeInfo_48_48;
    MR_String ArgX1_27 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_28;
    MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer ArgY2_30;
    MR_Float ArgX3_31 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 2)));
    MR_Float ArgY3_32;
    MR_Float ArgX4_33 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 3)));
    MR_Float ArgY4_34;
    MR_Float ArgX5_35 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 4)));
    MR_Float ArgY5_36;
    MR_Integer ArgX6_37 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 5))));
    MR_Integer ArgY6_38;
    MR_Integer ArgX7_39 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 6))));
    MR_Integer ArgY7_40;
    MR_Word ArgX8_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 7))));
    MR_Word ArgY8_42;
    MR_Word ArgX9_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 8))));
    MR_Word ArgY9_44;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_28 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_32 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 2)));
      ArgY4_34 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
      ArgY5_36 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 4)));
      ArgY6_38 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));
      ArgY7_40 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));
      ArgY8_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 7))));
      ArgY9_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 8))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6;
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 2)));
    MR_Float ArgY3_8;
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 3)));
    MR_Float ArgY4_10;
    MR_Float ArgX5_11 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 4)));
    MR_Float ArgY5_12;
    MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 5)));
    MR_Float ArgY6_14;
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16;
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Integer ArgY8_18;
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20;
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22;
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24;
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
      ArgY3_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
      ArgY4_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
      ArgY5_12 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 4)));
      ArgY6_14 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 5)));
      ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
      ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
      ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
      ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
      ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
      ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
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

void MR_CALL 
output_prof_info____Compare____child_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 2)));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 3)));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
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
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 2)));
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 3)));
    MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));

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

static MR_bool MR_CALL 
output_prof_info____Unify____child_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = output_prof_info____Unify____child_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
output_prof_info____Compare____child_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  output_prof_info____Compare____child_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
output_prof_info____Unify____output_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = output_prof_info____Unify____output_prof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
output_prof_info____Compare____output_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  output_prof_info____Compare____output_prof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
output_prof_info____Unify____parent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = output_prof_info____Unify____parent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
output_prof_info____Compare____parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  output_prof_info____Compare____parent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
output_prof_info____Unify____profiler_output_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = output_prof_info____Unify____profiler_output_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
output_prof_info____Compare____profiler_output_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  output_prof_info____Compare____profiler_output_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
