/*
** Automatically generated from `prog_data_event.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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


/* :- module parse_tree.prog_data_event. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_data_event__init
ENDINIT
*/

#include "parse_tree.prog_data_event.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attribute_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attribute_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_data_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_data_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_map_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_map_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_2[5][2];




static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_data_event_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_event_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 parse_tree__prog_data_event__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_event__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attr_synth_call_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attr_synth_call_0_0[3] = {
  (MR_String) "synth_func_attr_name_num",
  (MR_String) "synth_arg_attr_name_nums",
  (MR_String) "synth_eval_order"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attr_synth_call_0_0 = {
  (MR_String) "event_attr_synth_call",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attr_synth_call_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attr_synth_call_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attr_synth_call_0_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attr_synth_call_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attr_synth_call_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attr_synth_call_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attr_synth_call_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attr_synth_call_0_0
};

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attr_synth_call_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_attr_synth_call",
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attr_synth_call_0 },
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attr_synth_call_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attr_synth_call_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__maybe__ti_maybe_1parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attribute_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__maybe__ti_maybe_1parse_tree__prog_data_event__type_ctor_info_event_attr_synth_call_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_attribute_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_attribute_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attribute_0_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attribute_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attribute_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_attribute_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attribute_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_attribute_0_0
};

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attribute_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_attribute_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_attribute",
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_attribute_0 },
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_attribute_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_attribute_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_data_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_0_0[2] = {
  (MR_String) "event_set_name",
  (MR_String) "event_set_spec_map"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_0_0 = {
  (MR_String) "event_set",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_0_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_0_0
};

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_set_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_set_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_set",
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_0 },
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_data_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_data_0_0[4] = {
  (MR_String) "event_set_data_name",
  (MR_String) "event_set_data_description",
  (MR_String) "event_set_data_specs",
  (MR_String) "event_set_data_max_num_attr"
};

static const MR_DuFunctorDesc parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_data_0_0 = {
  (MR_String) "event_set_data",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_set_data_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_set_data_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_data_0_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_data_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_set_data_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_data_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_set_data_0_0
};

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_set_data_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_set_data_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_set_data",
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_set_data_0 },
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_set_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_set_data_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_spec_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__list__ti_list_1parse_tree__prog_data_event__type_ctor_info_event_attribute_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_event__list__ti_list_1builtin__type_ctor_info_int_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_types_event_spec_0_0,
  parse_tree__prog_data_event__parse_tree__prog_data_event__field_names_event_spec_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_spec_0_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_spec_0_0
};

static const MR_DuPtagLayout parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_data_event__parse_tree__prog_data_event__du_stag_ordered_event_spec_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_spec_0[1] = {
  &parse_tree__prog_data_event__parse_tree__prog_data_event__du_functor_desc_event_spec_0_0
};

static const MR_Integer parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_spec_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_spec_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_spec_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_spec",
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_name_ordered_event_spec_0 },
  {     parse_tree__prog_data_event__parse_tree__prog_data_event__du_ptag_ordered_event_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_data_event__parse_tree__prog_data_event__functor_number_map_event_spec_0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_data_event____Unify____event_spec_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_event____Compare____event_spec_map_0_0_10001)),
  (MR_String) "parse_tree.prog_data_event",
  (MR_String) "event_spec_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_data_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;

    {
      parse_tree__prog_data_event__succeeded = parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0(((MR_Word) parse_tree__prog_data_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2));
    }
    return parse_tree__prog_data_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0(&parse_tree__prog_data_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_3));
    }
    *parse_tree__prog_data_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attribute_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;

    {
      parse_tree__prog_data_event__succeeded = parse_tree__prog_data_event____Unify____event_attribute_0_0(((MR_Word) parse_tree__prog_data_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2));
    }
    return parse_tree__prog_data_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_attribute_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_event____Compare____event_attribute_0_0(&parse_tree__prog_data_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_3));
    }
    *parse_tree__prog_data_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;

    {
      parse_tree__prog_data_event__succeeded = parse_tree__prog_data_event____Unify____event_set_0_0(((MR_Word) parse_tree__prog_data_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2));
    }
    return parse_tree__prog_data_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_event____Compare____event_set_0_0(&parse_tree__prog_data_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_3));
    }
    *parse_tree__prog_data_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_data_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;

    {
      parse_tree__prog_data_event__succeeded = parse_tree__prog_data_event____Unify____event_set_data_0_0(((MR_Word) parse_tree__prog_data_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2));
    }
    return parse_tree__prog_data_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_data_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_event____Compare____event_set_data_0_0(&parse_tree__prog_data_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_3));
    }
    *parse_tree__prog_data_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;

    {
      parse_tree__prog_data_event__succeeded = parse_tree__prog_data_event____Unify____event_spec_0_0(((MR_Word) parse_tree__prog_data_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2));
    }
    return parse_tree__prog_data_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_event____Compare____event_spec_0_0(&parse_tree__prog_data_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_3));
    }
    *parse_tree__prog_data_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_map_0_0_10001(
  MR_Box parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;

    {
      parse_tree__prog_data_event__succeeded = parse_tree__prog_data_event____Unify____event_spec_map_0_0(((MR_Word) parse_tree__prog_data_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2));
    }
    return parse_tree__prog_data_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_map_0_0_10001(
  MR_Box * parse_tree__prog_data_event__wrapper_arg_1,
  MR_Box parse_tree__prog_data_event__wrapper_arg_2,
  MR_Box parse_tree__prog_data_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_data_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_data_event____Compare____event_spec_map_0_0(&parse_tree__prog_data_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_data_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_data_event__wrapper_arg_3));
    }
    *parse_tree__prog_data_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_data_event__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_map_0_0(
  MR_Word * parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2,
  MR_Word parse_tree__prog_data_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Word parse_tree__prog_data_event__Cast_HeadVar1_4 = parse_tree__prog_data_event__HeadVar__2_2;
    MR_Word parse_tree__prog_data_event__Cast_HeadVar2_5 = parse_tree__prog_data_event__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_1[1], parse_tree__prog_data_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_data_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_data_event__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_map_0_0(
  MR_Word parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Word parse_tree__prog_data_event__Cast_HeadVar1_3 = parse_tree__prog_data_event__HeadVar__1_1;
    MR_Word parse_tree__prog_data_event__Cast_HeadVar2_4 = parse_tree__prog_data_event__HeadVar__2_2;

    {
      parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_1[1], ((MR_Box) (parse_tree__prog_data_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_data_event__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_data_event__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_spec_0_0(
  MR_Word * parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2,
  MR_Word parse_tree__prog_data_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_18 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_data_event__CastY_19 = (MR_Integer) parse_tree__prog_data_event__HeadVar__3_3;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_18 == parse_tree__prog_data_event__CastY_19);
    if (parse_tree__prog_data_event__succeeded)
      *parse_tree__prog_data_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer parse_tree__prog_data_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_data_event__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_data_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_data_event__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word parse_tree__prog_data_event__V_14_14;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_data_event__V_14_14, parse_tree__prog_data_event__V_4_4, parse_tree__prog_data_event__V_9_9);
        }
        parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_14_14 == (MR_Integer) 0);
        parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
        if (parse_tree__prog_data_event__succeeded)
          *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_14_14;
        else
          {
            MR_Word parse_tree__prog_data_event__V_15_15;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_data_event__V_15_15, parse_tree__prog_data_event__V_5_5, parse_tree__prog_data_event__V_10_10);
            }
            parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_15_15 == (MR_Integer) 0);
            parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
            if (parse_tree__prog_data_event__succeeded)
              *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_15_15;
            else
              {
                MR_Word parse_tree__prog_data_event__V_16_16;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_data_event__V_16_16, parse_tree__prog_data_event__V_6_6, parse_tree__prog_data_event__V_11_11);
                }
                parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_16_16 == (MR_Integer) 0);
                parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
                if (parse_tree__prog_data_event__succeeded)
                  *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_16_16;
                else
                  {
                    MR_Word parse_tree__prog_data_event__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_2[4], &parse_tree__prog_data_event__V_17_17, ((MR_Box) (parse_tree__prog_data_event__V_7_7)), ((MR_Box) (parse_tree__prog_data_event__V_12_12)));
                    }
                    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_17_17 == (MR_Integer) 0);
                    parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
                    if (parse_tree__prog_data_event__succeeded)
                      *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_2[1], parse_tree__prog_data_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_data_event__V_8_8)), ((MR_Box) (parse_tree__prog_data_event__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_spec_0_0(
  MR_Word parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_13 = (MR_Integer) parse_tree__prog_data_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_data_event__CastY_14 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_13 == parse_tree__prog_data_event__CastY_14);
    if (parse_tree__prog_data_event__succeeded)
      parse_tree__prog_data_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_data_event__TypeInfo_15_15;
        MR_Word parse_tree__prog_data_event__TypeInfo_16_16;
        MR_Integer parse_tree__prog_data_event__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_data_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_data_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_data_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 4)));

        parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_3_3 == parse_tree__prog_data_event__V_8_8);
        if (parse_tree__prog_data_event__succeeded)
          {
            parse_tree__prog_data_event__succeeded = (strcmp(parse_tree__prog_data_event__V_4_4, parse_tree__prog_data_event__V_9_9) == 0);
            if (parse_tree__prog_data_event__succeeded)
              {
                parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_5_5 == parse_tree__prog_data_event__V_10_10);
                if (parse_tree__prog_data_event__succeeded)
                  {
                    parse_tree__prog_data_event__TypeInfo_15_15 = (MR_Word) &parse_tree__prog_data_event_scalar_common_2[4];
                    {
                      parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_event__TypeInfo_15_15, ((MR_Box) (parse_tree__prog_data_event__V_6_6)), ((MR_Box) (parse_tree__prog_data_event__V_11_11)));
                    }
                    if (parse_tree__prog_data_event__succeeded)
                      {
                        parse_tree__prog_data_event__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_data_event_scalar_common_2[1];
                        {
                          parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_event__TypeInfo_16_16, ((MR_Box) (parse_tree__prog_data_event__V_7_7)), ((MR_Box) (parse_tree__prog_data_event__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_data_event__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_data_0_0(
  MR_Word * parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2,
  MR_Word parse_tree__prog_data_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_15 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_data_event__CastY_16 = (MR_Integer) parse_tree__prog_data_event__HeadVar__3_3;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_15 == parse_tree__prog_data_event__CastY_16);
    if (parse_tree__prog_data_event__succeeded)
      *parse_tree__prog_data_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_data_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_data_event__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 3)));
        MR_String parse_tree__prog_data_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_data_event__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_12_12;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_data_event__V_12_12, parse_tree__prog_data_event__V_4_4, parse_tree__prog_data_event__V_8_8);
        }
        parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_12_12 == (MR_Integer) 0);
        parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
        if (parse_tree__prog_data_event__succeeded)
          *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_12_12;
        else
          {
            MR_Word parse_tree__prog_data_event__V_13_13;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_data_event__V_13_13, parse_tree__prog_data_event__V_5_5, parse_tree__prog_data_event__V_9_9);
            }
            parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_13_13 == (MR_Integer) 0);
            parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
            if (parse_tree__prog_data_event__succeeded)
              *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_13_13;
            else
              {
                MR_Word parse_tree__prog_data_event__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_2[3], &parse_tree__prog_data_event__V_14_14, ((MR_Box) (parse_tree__prog_data_event__V_6_6)), ((MR_Box) (parse_tree__prog_data_event__V_10_10)));
                }
                parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_14_14 == (MR_Integer) 0);
                parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
                if (parse_tree__prog_data_event__succeeded)
                  *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_14_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_data_event__HeadVar__1_1, parse_tree__prog_data_event__V_7_7, parse_tree__prog_data_event__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_data_0_0(
  MR_Word parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_11 = (MR_Integer) parse_tree__prog_data_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_data_event__CastY_12 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_11 == parse_tree__prog_data_event__CastY_12);
    if (parse_tree__prog_data_event__succeeded)
      parse_tree__prog_data_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_data_event__TypeInfo_13_13;
        MR_String parse_tree__prog_data_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_data_event__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 3)));
        MR_String parse_tree__prog_data_event__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_data_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 3)));

        parse_tree__prog_data_event__succeeded = (strcmp(parse_tree__prog_data_event__V_3_3, parse_tree__prog_data_event__V_7_7) == 0);
        if (parse_tree__prog_data_event__succeeded)
          {
            parse_tree__prog_data_event__succeeded = (strcmp(parse_tree__prog_data_event__V_4_4, parse_tree__prog_data_event__V_8_8) == 0);
            if (parse_tree__prog_data_event__succeeded)
              {
                parse_tree__prog_data_event__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_data_event_scalar_common_2[3];
                {
                  parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_event__TypeInfo_13_13, ((MR_Box) (parse_tree__prog_data_event__V_5_5)), ((MR_Box) (parse_tree__prog_data_event__V_9_9)));
                }
                if (parse_tree__prog_data_event__succeeded)
                  parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_6_6 == parse_tree__prog_data_event__V_10_10);
              }
          }
      }
    return parse_tree__prog_data_event__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_set_0_0(
  MR_Word * parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2,
  MR_Word parse_tree__prog_data_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_9 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_data_event__CastY_10 = (MR_Integer) parse_tree__prog_data_event__HeadVar__3_3;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_9 == parse_tree__prog_data_event__CastY_10);
    if (parse_tree__prog_data_event__succeeded)
      *parse_tree__prog_data_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_data_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_data_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_data_event__V_8_8, parse_tree__prog_data_event__V_4_4, parse_tree__prog_data_event__V_6_6);
        }
        parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_8_8 == (MR_Integer) 0);
        parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
        if (parse_tree__prog_data_event__succeeded)
          *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_1[1], parse_tree__prog_data_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_data_event__V_5_5)), ((MR_Box) (parse_tree__prog_data_event__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_set_0_0(
  MR_Word parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_7 = (MR_Integer) parse_tree__prog_data_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_data_event__CastY_8 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_7 == parse_tree__prog_data_event__CastY_8);
    if (parse_tree__prog_data_event__succeeded)
      parse_tree__prog_data_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_data_event__TypeInfo_9_9;
        MR_String parse_tree__prog_data_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_data_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));

        parse_tree__prog_data_event__succeeded = (strcmp(parse_tree__prog_data_event__V_3_3, parse_tree__prog_data_event__V_5_5) == 0);
        if (parse_tree__prog_data_event__succeeded)
          {
            parse_tree__prog_data_event__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_data_event_scalar_common_1[1];
            {
              parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_event__TypeInfo_9_9, ((MR_Box) (parse_tree__prog_data_event__V_4_4)), ((MR_Box) (parse_tree__prog_data_event__V_6_6)));
            }
          }
      }
    return parse_tree__prog_data_event__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_attribute_0_0(
  MR_Word * parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2,
  MR_Word parse_tree__prog_data_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_18 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_data_event__CastY_19 = (MR_Integer) parse_tree__prog_data_event__HeadVar__3_3;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_18 == parse_tree__prog_data_event__CastY_19);
    if (parse_tree__prog_data_event__succeeded)
      *parse_tree__prog_data_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer parse_tree__prog_data_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_data_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word parse_tree__prog_data_event__V_14_14;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_data_event__V_14_14, parse_tree__prog_data_event__V_4_4, parse_tree__prog_data_event__V_9_9);
        }
        parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_14_14 == (MR_Integer) 0);
        parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
        if (parse_tree__prog_data_event__succeeded)
          *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_14_14;
        else
          {
            MR_Word parse_tree__prog_data_event__V_15_15;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_data_event__V_15_15, parse_tree__prog_data_event__V_5_5, parse_tree__prog_data_event__V_10_10);
            }
            parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_15_15 == (MR_Integer) 0);
            parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
            if (parse_tree__prog_data_event__succeeded)
              *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_15_15;
            else
              {
                MR_Word parse_tree__prog_data_event__V_16_16;

                {
                  parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__prog_data_event__V_16_16, parse_tree__prog_data_event__V_6_6, parse_tree__prog_data_event__V_11_11);
                }
                parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_16_16 == (MR_Integer) 0);
                parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
                if (parse_tree__prog_data_event__succeeded)
                  *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_16_16;
                else
                  {
                    MR_Word parse_tree__prog_data_event__V_17_17;

                    {
                      parse_tree__prog_data____Compare____mer_mode_0_0(&parse_tree__prog_data_event__V_17_17, parse_tree__prog_data_event__V_7_7, parse_tree__prog_data_event__V_12_12);
                    }
                    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_17_17 == (MR_Integer) 0);
                    parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
                    if (parse_tree__prog_data_event__succeeded)
                      *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_2[2], parse_tree__prog_data_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_data_event__V_8_8)), ((MR_Box) (parse_tree__prog_data_event__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attribute_0_0(
  MR_Word parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_13 = (MR_Integer) parse_tree__prog_data_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_data_event__CastY_14 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_13 == parse_tree__prog_data_event__CastY_14);
    if (parse_tree__prog_data_event__succeeded)
      parse_tree__prog_data_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_data_event__TypeInfo_17_17;
        MR_Integer parse_tree__prog_data_event__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_data_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_data_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_data_event__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 4)));

        parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_3_3 == parse_tree__prog_data_event__V_8_8);
        if (parse_tree__prog_data_event__succeeded)
          {
            parse_tree__prog_data_event__succeeded = (strcmp(parse_tree__prog_data_event__V_4_4, parse_tree__prog_data_event__V_9_9) == 0);
            if (parse_tree__prog_data_event__succeeded)
              {
                {
                  parse_tree__prog_data_event__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_data_event__V_5_5, parse_tree__prog_data_event__V_10_10);
                }
                if (parse_tree__prog_data_event__succeeded)
                  {
                    {
                      parse_tree__prog_data_event__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(parse_tree__prog_data_event__V_6_6, parse_tree__prog_data_event__V_11_11);
                    }
                    if (parse_tree__prog_data_event__succeeded)
                      {
                        parse_tree__prog_data_event__TypeInfo_17_17 = (MR_Word) &parse_tree__prog_data_event_scalar_common_2[2];
                        {
                          parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_event__TypeInfo_17_17, ((MR_Box) (parse_tree__prog_data_event__V_7_7)), ((MR_Box) (parse_tree__prog_data_event__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_data_event__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_data_event____Compare____event_attr_synth_call_0_0(
  MR_Word * parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2,
  MR_Word parse_tree__prog_data_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_12 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_data_event__CastY_13 = (MR_Integer) parse_tree__prog_data_event__HeadVar__3_3;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_12 == parse_tree__prog_data_event__CastY_13);
    if (parse_tree__prog_data_event__succeeded)
      *parse_tree__prog_data_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_data_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_1[0], &parse_tree__prog_data_event__V_10_10, ((MR_Box) (parse_tree__prog_data_event__V_4_4)), ((MR_Box) (parse_tree__prog_data_event__V_7_7)));
        }
        parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_10_10 == (MR_Integer) 0);
        parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
        if (parse_tree__prog_data_event__succeeded)
          *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_10_10;
        else
          {
            MR_Word parse_tree__prog_data_event__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_2[0], &parse_tree__prog_data_event__V_11_11, ((MR_Box) (parse_tree__prog_data_event__V_5_5)), ((MR_Box) (parse_tree__prog_data_event__V_8_8)));
            }
            parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__V_11_11 == (MR_Integer) 0);
            parse_tree__prog_data_event__succeeded = !(parse_tree__prog_data_event__succeeded);
            if (parse_tree__prog_data_event__succeeded)
              *parse_tree__prog_data_event__HeadVar__1_1 = parse_tree__prog_data_event__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_2[1], parse_tree__prog_data_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_data_event__V_6_6)), ((MR_Box) (parse_tree__prog_data_event__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_data_event____Unify____event_attr_synth_call_0_0(
  MR_Word parse_tree__prog_data_event__HeadVar__1_1,
  MR_Word parse_tree__prog_data_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_data_event__succeeded;
    MR_Integer parse_tree__prog_data_event__CastX_9 = (MR_Integer) parse_tree__prog_data_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_data_event__CastY_10 = (MR_Integer) parse_tree__prog_data_event__HeadVar__2_2;

    parse_tree__prog_data_event__succeeded = (parse_tree__prog_data_event__CastX_9 == parse_tree__prog_data_event__CastY_10);
    if (parse_tree__prog_data_event__succeeded)
      parse_tree__prog_data_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_data_event__TypeInfo_12_12;
        MR_Word parse_tree__prog_data_event__TypeInfo_13_13;
        MR_Word parse_tree__prog_data_event__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_data_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_data_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_data_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_data_event__HeadVar__2_2, (MR_Integer) 2)));

        {
          parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data_event_scalar_common_1[0], ((MR_Box) (parse_tree__prog_data_event__V_3_3)), ((MR_Box) (parse_tree__prog_data_event__V_6_6)));
        }
        if (parse_tree__prog_data_event__succeeded)
          {
            parse_tree__prog_data_event__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_data_event_scalar_common_2[0];
            {
              parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_event__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_data_event__V_4_4)), ((MR_Box) (parse_tree__prog_data_event__V_7_7)));
            }
            if (parse_tree__prog_data_event__succeeded)
              {
                parse_tree__prog_data_event__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_data_event_scalar_common_2[1];
                {
                  parse_tree__prog_data_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_data_event__TypeInfo_13_13, ((MR_Box) (parse_tree__prog_data_event__V_5_5)), ((MR_Box) (parse_tree__prog_data_event__V_8_8)));
                }
              }
          }
      }
    return parse_tree__prog_data_event__succeeded;
  }
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

/* :- end_module parse_tree.prog_data_event. */
