/*
** Automatically generated from `prog_data_event.m'
** by the Mercury compiler,
** version rotd-2025-05-06
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


// :- module parse_tree.prog_data_event.
// :- implementation.

/*
INIT mercury__parse_tree__prog_data_event__init
ENDINIT
*/

#include "parse_tree.prog_data_event.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_FA_TypeInfo_Struct2 parse_tree__prog_data_event__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attr_synth_call_0_0[3];

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attr_synth_call_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attr_synth_call_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attr_synth_call_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attr_synth_call_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attr_synth_call_0[1];

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attr_synth_call_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__maybe__ti_maybe_1parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attribute_0_0[5];

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attribute_0_0[5];

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attribute_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attribute_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attribute_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attribute_0[1];

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attribute_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_data_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_0_0[2];

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_0[1];

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_spec_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_data_0_0[4];

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_data_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_data_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_data_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_data_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_data_0[1];

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_data_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_attribute_0;

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_spec_0_0[5];

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_spec_0_0[5];

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_spec_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_spec_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_spec_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_spec_0[1];

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_spec_0[1];

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_2[5][2];




static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_2[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_event_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0))
  },
};





static const MR_FA_TypeInfo_Struct2 parse_tree__prog_data_event__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_event__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attr_synth_call_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attr_synth_call_0_0[3] = {
  (MR_String) "synth_func_attr_name_num",
  (MR_String) "synth_arg_attr_name_nums",
  (MR_String) "synth_eval_order"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attr_synth_call_0_0 = {
  (MR_String) "event_attr_synth_call",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attr_synth_call_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attr_synth_call_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attr_synth_call_0_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attr_synth_call_0_0 };

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attr_synth_call_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attr_synth_call_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attr_synth_call_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attr_synth_call_0_0 };

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attr_synth_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_attr_synth_call",
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attr_synth_call_0 },
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attr_synth_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attr_synth_call_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__maybe__ti_maybe_1parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attribute_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__maybe__ti_maybe_1parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0)
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attribute_0_0[5] = {
  (MR_String) "attr_num",
  (MR_String) "attr_name",
  (MR_String) "attr_type",
  (MR_String) "attr_mode",
  (MR_String) "attr_maybe_synth_call"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attribute_0_0 = {
  (MR_String) "event_attribute",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attribute_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attribute_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attribute_0_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attribute_0_0 };

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attribute_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attribute_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attribute_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attribute_0_0 };

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attribute_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_attribute_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_attribute",
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attribute_0 },
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attribute_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attribute_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_data_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0)
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_0_0[2] = {
  (MR_String) "event_set_name",
  (MR_String) "event_set_spec_map"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_0_0 = {
  (MR_String) "event_set",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_0_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_0_0 };

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_0_0 };

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_set_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_set_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_set",
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_0 },
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_data_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_spec_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_data_0_0[4] = {
  (MR_String) "event_set_data_name",
  (MR_String) "event_set_data_description",
  (MR_String) "event_set_data_specs",
  (MR_String) "event_set_data_max_num_attr"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_data_0_0 = {
  (MR_String) "event_set_data",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_data_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_data_0_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_data_0_0 };

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_data_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_data_0_0 };

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_data_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_set_data_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_set_data_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_set_data",
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_data_0 },
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_data_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_spec_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_attribute_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_spec_0_0[5] = {
  (MR_String) "event_spec_num",
  (MR_String) "event_spec_name",
  (MR_String) "event_spec_linenum",
  (MR_String) "event_spec_attrs",
  (MR_String) "event_spec_synth_order"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_spec_0_0 = {
  (MR_String) "event_spec",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_spec_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_spec_0_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_spec_0_0 };

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_spec_0[1] = { &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_spec_0_0 };

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_spec_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_spec_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_spec",
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_spec_0 },
  { parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_spec_0,

};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_spec_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_spec_map_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_spec_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_2[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_0_0(
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
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&parse_tree__prog_data_event_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&parse_tree__prog_data_event_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_data_0_0(
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
  {
    MR_Word TypeInfo_13_13;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__prog_data_event_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&parse_tree__prog_data_event_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_attribute_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_data____Compare____mer_mode_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attribute_0_0(
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
    MR_Word TypeInfo_17_17;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) (&parse_tree__prog_data_event_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_data_event_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&parse_tree__prog_data_event_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__prog_data_event_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_event____Unify____event_attribute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_event____Compare____event_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_event____Unify____event_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_event____Compare____event_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_event____Unify____event_set_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_event____Compare____event_set_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_event____Unify____event_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_event____Compare____event_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_event____Unify____event_spec_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_event____Compare____event_spec_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_data_event__init(void)
{
}

void mercury__parse_tree__prog_data_event__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_data_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_map_0);
}

void mercury__parse_tree__prog_data_event__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_data_event__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_data_event.
