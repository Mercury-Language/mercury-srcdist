/*
** Automatically generated from `maybe_error.m'
** by the Mercury compiler,
** version DEV
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


/* :- module parse_tree.maybe_error. */
/* :- implementation. */

/*
INIT mercury__parse_tree__maybe_error__init
ENDINIT
*/

#include "parse_tree.maybe_error.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box * parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box * parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box * parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
  MR_Box parse_tree__maybe_error__wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
  MR_Box parse_tree__maybe_error__wrapper_arg_6);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box * parse_tree__maybe_error__wrapper_arg_5,
  MR_Box parse_tree__maybe_error__wrapper_arg_6,
  MR_Box parse_tree__maybe_error__wrapper_arg_7);

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2);

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
  MR_Box * parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__maybe_error_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__maybe_error_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0 = {
  (MR_String) "error1",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1 = {
  (MR_String) "ok1",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe1_1_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe1_1_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe1",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0 = {
  (MR_String) "error2",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1 = {
  (MR_String) "ok2",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe2_2_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe2_2_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe2",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0 = {
  (MR_String) "error3",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1 = {
  (MR_String) "ok3",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe3_3_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe3_3_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe3",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0 = {
  (MR_String) "error4",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1 = {
  (MR_String) "ok4",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0
};

static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1
};

static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe4_4_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe4_4_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe4",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4
};

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0 = {
  (MR_String) "safe_to_continue",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1 = {
  (MR_String) "unsafe_to_continue",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe_safe_to_continue",
  {     parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0
};

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;

    {
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe1_1_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3));
    }
    return parse_tree__maybe_error__succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box * parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4)
{
  {
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

    {
      parse_tree__maybe_error____Compare____maybe1_1_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4));
    }
    *parse_tree__maybe_error__wrapper_arg_2 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;

    {
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4));
    }
    return parse_tree__maybe_error__succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box * parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5)
{
  {
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

    {
      parse_tree__maybe_error____Compare____maybe2_2_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5));
    }
    *parse_tree__maybe_error__wrapper_arg_3 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;

    {
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe3_3_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5));
    }
    return parse_tree__maybe_error__succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box * parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
  MR_Box parse_tree__maybe_error__wrapper_arg_6)
{
  {
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

    {
      parse_tree__maybe_error____Compare____maybe3_3_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_5), ((MR_Word) parse_tree__maybe_error__wrapper_arg_6));
    }
    *parse_tree__maybe_error__wrapper_arg_4 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
  MR_Box parse_tree__maybe_error__wrapper_arg_6)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;

    {
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe4_4_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5), ((MR_Word) parse_tree__maybe_error__wrapper_arg_6));
    }
    return parse_tree__maybe_error__succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
  MR_Box * parse_tree__maybe_error__wrapper_arg_5,
  MR_Box parse_tree__maybe_error__wrapper_arg_6,
  MR_Box parse_tree__maybe_error__wrapper_arg_7)
{
  {
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

    {
      parse_tree__maybe_error____Compare____maybe4_4_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_6), ((MR_Word) parse_tree__maybe_error__wrapper_arg_7));
    }
    *parse_tree__maybe_error__wrapper_arg_5 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;

    {
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2));
    }
    return parse_tree__maybe_error__succeeded;
  }
}

static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
  MR_Box * parse_tree__maybe_error__wrapper_arg_1,
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
  MR_Box parse_tree__maybe_error__wrapper_arg_3)
{
  {
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

    {
      parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(&parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3));
    }
    *parse_tree__maybe_error__wrapper_arg_1 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__Cast_HeadVar1_4 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
    MR_Integer parse_tree__maybe_error__Cast_HeadVar2_5 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__Cast_HeadVar1_4, parse_tree__maybe_error__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(
  MR_Word parse_tree__maybe_error__HeadVar__2_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
{
  {
    MR_bool parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__HeadVar__2_1 == parse_tree__maybe_error__HeadVar__2_2);

    return parse_tree__maybe_error__succeeded;
  }
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_29,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_30,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_31,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T4_32,
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_27 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
    MR_Integer parse_tree__maybe_error__CastY_28 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_27 == parse_tree__maybe_error__CastY_28);
    if (parse_tree__maybe_error__succeeded)
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_34_34)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
            }
          }
        else
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_35_35 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 3));
        MR_Box parse_tree__maybe_error__V_36_36 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
        MR_Box parse_tree__maybe_error__V_37_37 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
        MR_Box parse_tree__maybe_error__V_38_38 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Box parse_tree__maybe_error__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));
            MR_Box parse_tree__maybe_error__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 1));
            MR_Box parse_tree__maybe_error__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 2));
            MR_Box parse_tree__maybe_error__V_23_23 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 3));
            MR_Word parse_tree__maybe_error__V_24_24;

            {
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_29, &parse_tree__maybe_error__V_24_24, parse_tree__maybe_error__V_38_38, parse_tree__maybe_error__V_20_20);
            }
            parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_24_24 == (MR_Integer) 0);
            parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
            if (parse_tree__maybe_error__succeeded)
              *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_24_24;
            else
              {
                MR_Word parse_tree__maybe_error__V_25_25;

                {
                  mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T2_30, &parse_tree__maybe_error__V_25_25, parse_tree__maybe_error__V_37_37, parse_tree__maybe_error__V_21_21);
                }
                parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_25_25 == (MR_Integer) 0);
                parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
                if (parse_tree__maybe_error__succeeded)
                  *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_25_25;
                else
                  {
                    MR_Word parse_tree__maybe_error__V_26_26;

                    {
                      mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T3_31, &parse_tree__maybe_error__V_26_26, parse_tree__maybe_error__V_36_36, parse_tree__maybe_error__V_22_22);
                    }
                    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_26_26 == (MR_Integer) 0);
                    parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
                    if (parse_tree__maybe_error__succeeded)
                      *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_26_26;
                    else
                      {
                        mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T4_32, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_35_35, parse_tree__maybe_error__V_23_23);
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_15,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_16,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_17,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T4_18,
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_13 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
    MR_Integer parse_tree__maybe_error__CastY_14 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_13 == parse_tree__maybe_error__CastY_14);
    if (parse_tree__maybe_error__succeeded)
      parse_tree__maybe_error__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__TypeInfo_19_19;
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__maybe_error__V_4_4;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__maybe_error__TypeInfo_19_19 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_19_19, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
          }
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
        MR_Box parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 1));
        MR_Box parse_tree__maybe_error__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 2));
        MR_Box parse_tree__maybe_error__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 3));
        MR_Box parse_tree__maybe_error__V_9_9;
        MR_Box parse_tree__maybe_error__V_10_10;
        MR_Box parse_tree__maybe_error__V_11_11;
        MR_Box parse_tree__maybe_error__V_12_12;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
            parse_tree__maybe_error__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
            parse_tree__maybe_error__V_11_11 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
            parse_tree__maybe_error__V_12_12 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 3));
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_15, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_9_9);
            }
            if (parse_tree__maybe_error__succeeded)
              {
                {
                  parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_16, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_10_10);
                }
                if (parse_tree__maybe_error__succeeded)
                  {
                    {
                      parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T3_17, parse_tree__maybe_error__V_7_7, parse_tree__maybe_error__V_11_11);
                    }
                    if (parse_tree__maybe_error__succeeded)
                      {
                        parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T4_18, parse_tree__maybe_error__V_8_8, parse_tree__maybe_error__V_12_12);
                      }
                  }
              }
          }
      }
    return parse_tree__maybe_error__succeeded;
  }
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_24,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_25,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_26,
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_22 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
    MR_Integer parse_tree__maybe_error__CastY_23 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_22 == parse_tree__maybe_error__CastY_23);
    if (parse_tree__maybe_error__succeeded)
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_28_28)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
            }
          }
        else
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
        MR_Box parse_tree__maybe_error__V_30_30 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
        MR_Box parse_tree__maybe_error__V_31_31 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Box parse_tree__maybe_error__V_17_17 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));
            MR_Box parse_tree__maybe_error__V_18_18 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 1));
            MR_Box parse_tree__maybe_error__V_19_19 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 2));
            MR_Word parse_tree__maybe_error__V_20_20;

            {
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_24, &parse_tree__maybe_error__V_20_20, parse_tree__maybe_error__V_31_31, parse_tree__maybe_error__V_17_17);
            }
            parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_20_20 == (MR_Integer) 0);
            parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
            if (parse_tree__maybe_error__succeeded)
              *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_20_20;
            else
              {
                MR_Word parse_tree__maybe_error__V_21_21;

                {
                  mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T2_25, &parse_tree__maybe_error__V_21_21, parse_tree__maybe_error__V_30_30, parse_tree__maybe_error__V_18_18);
                }
                parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_21_21 == (MR_Integer) 0);
                parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
                if (parse_tree__maybe_error__succeeded)
                  *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_21_21;
                else
                  {
                    mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T3_26, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_29_29, parse_tree__maybe_error__V_19_19);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_13,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_14,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_15,
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_11 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
    MR_Integer parse_tree__maybe_error__CastY_12 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_11 == parse_tree__maybe_error__CastY_12);
    if (parse_tree__maybe_error__succeeded)
      parse_tree__maybe_error__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__TypeInfo_16_16;
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__maybe_error__V_4_4;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__maybe_error__TypeInfo_16_16 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_16_16, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
          }
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
        MR_Box parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 1));
        MR_Box parse_tree__maybe_error__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 2));
        MR_Box parse_tree__maybe_error__V_8_8;
        MR_Box parse_tree__maybe_error__V_9_9;
        MR_Box parse_tree__maybe_error__V_10_10;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
            parse_tree__maybe_error__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
            parse_tree__maybe_error__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_13, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_8_8);
            }
            if (parse_tree__maybe_error__succeeded)
              {
                {
                  parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_14, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_9_9);
                }
                if (parse_tree__maybe_error__succeeded)
                  {
                    parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T3_15, parse_tree__maybe_error__V_7_7, parse_tree__maybe_error__V_10_10);
                  }
              }
          }
      }
    return parse_tree__maybe_error__succeeded;
  }
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_19,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_20,
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_17 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
    MR_Integer parse_tree__maybe_error__CastY_18 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_17 == parse_tree__maybe_error__CastY_18);
    if (parse_tree__maybe_error__succeeded)
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_22_22)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
            }
          }
        else
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_23_23 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
        MR_Box parse_tree__maybe_error__V_24_24 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Box parse_tree__maybe_error__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));
            MR_Box parse_tree__maybe_error__V_15_15 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 1));
            MR_Word parse_tree__maybe_error__V_16_16;

            {
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_19, &parse_tree__maybe_error__V_16_16, parse_tree__maybe_error__V_24_24, parse_tree__maybe_error__V_14_14);
            }
            parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_16_16 == (MR_Integer) 0);
            parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
            if (parse_tree__maybe_error__succeeded)
              *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_16_16;
            else
              {
                mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T2_20, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_23_23, parse_tree__maybe_error__V_15_15);
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_11,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_12,
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_9 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
    MR_Integer parse_tree__maybe_error__CastY_10 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_9 == parse_tree__maybe_error__CastY_10);
    if (parse_tree__maybe_error__succeeded)
      parse_tree__maybe_error__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__TypeInfo_13_13;
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__maybe_error__V_4_4;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__maybe_error__TypeInfo_13_13 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_13_13, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
          }
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
        MR_Box parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 1));
        MR_Box parse_tree__maybe_error__V_7_7;
        MR_Box parse_tree__maybe_error__V_8_8;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
            parse_tree__maybe_error__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_11, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_7_7);
            }
            if (parse_tree__maybe_error__succeeded)
              {
                parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_12, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_8_8);
              }
          }
      }
    return parse_tree__maybe_error__succeeded;
  }
}

void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_14,
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_12 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
    MR_Integer parse_tree__maybe_error__CastY_13 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_12 == parse_tree__maybe_error__CastY_13);
    if (parse_tree__maybe_error__succeeded)
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_16_16)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
            }
          }
        else
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_17_17 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Box parse_tree__maybe_error__V_11_11 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_14, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_17_17, parse_tree__maybe_error__V_11_11);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_9,
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Integer parse_tree__maybe_error__CastX_7 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
    MR_Integer parse_tree__maybe_error__CastY_8 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_7 == parse_tree__maybe_error__CastY_8);
    if (parse_tree__maybe_error__succeeded)
      parse_tree__maybe_error__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__maybe_error__TypeInfo_10_10;
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__maybe_error__V_4_4;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__maybe_error__TypeInfo_10_10 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_10_10, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
          }
      }
    else
      {
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
        MR_Box parse_tree__maybe_error__V_6_6;

        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__maybe_error__succeeded)
          {
            parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
            {
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_9, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_6_6);
            }
          }
      }
    return parse_tree__maybe_error__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors4_1_f_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_8,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_9,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_10,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T4_11,
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
    else
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return parse_tree__maybe_error__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors3_1_f_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_7,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_8,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_9,
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
    else
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return parse_tree__maybe_error__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors2_1_f_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_6,
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_7,
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
    else
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return parse_tree__maybe_error__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors1_1_f_0(
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_5,
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
{
  {
    MR_bool parse_tree__maybe_error__succeeded;
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
    else
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return parse_tree__maybe_error__HeadVar__2_2;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.maybe_error. */
