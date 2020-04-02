/*
** Automatically generated from `term_constr_main_types.m'
** by the Mercury compiler,
** version rotd-2020-04-02
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


// :- module transform_hlds.term_constr_main_types.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_main_types__init
ENDINIT
*/

#include "transform_hlds.term_constr_main_types.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.compiler_util.mih"
#include "libs.lp_rational.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data_pragma__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0;

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2];

static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2];

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0;

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1;

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2;

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3;

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4;

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5];

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5];

static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0[9];

static const MR_ConstString transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0[9];

static const MR_DuFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1];

static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1];

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_1[10][2];

static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_2[2][3];




static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_2[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[1]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_arg_size_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "constr_arg_size_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data_pragma__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0),
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_termination_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "constr_termination_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__parse_tree__prog_data_pragma__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0
};

static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "intermod_status",
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0 },
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  INT32_C(2)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  INT32_C(3)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4
};

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1
};

static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "term_reason",
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0 },
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__parse_tree__prog_data_pragma__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)
};

static const MR_ConstString transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0[9] = {
  (MR_String) "t2i_size_var_map",
  (MR_String) "t2i_head_vars",
  (MR_String) "t2i_import_success",
  (MR_String) "t2i_import_failure",
  (MR_String) "t2i_success_constrs",
  (MR_String) "t2i_failure_constrs",
  (MR_String) "t2i_term_status",
  (MR_String) "t2i_intermod_status",
  (MR_String) "t2i_abstract_rep"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0 = {
  (MR_String) "term2_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0,
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_termination2_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "termination2_info",
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0 },
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0
};

void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[6]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[7]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[8]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_24_24 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_25_25 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_26_26 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_29_29 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_30_30 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[8]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_31_31 = (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[9]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
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
transform_hlds__term_constr_main_types____Compare____term_reason_0_0(
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
transform_hlds__term_constr_main_types____Unify____term_reason_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0(
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
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    libs__polyhedron____Compare____polyhedron_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = libs__polyhedron____Unify____polyhedron_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_abstract_rep_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (X_4));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_failure_constrs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Term2Info_0_6,
  MR_Word * STATE_VARIABLE_Term2Info_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Term2Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 1))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_intermod_status_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 7))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 6))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 8))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 5))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 4))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_import_failure_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 3))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 2))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_size_var_map_1_f_0(
  MR_Word Term2Info_3)
{
  {
    MR_Word X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info_3, (MR_Integer) 0))));

    return X_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;

    Var_2 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_main_types_scalar_common_1[1]));
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_main_types____Unify____intermod_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_main_types____Compare____intermod_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_main_types____Unify____term_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_main_types____Compare____term_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_main_types____Unify____termination2_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_main_types____Compare____termination2_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__term_constr_main_types__init(void)
{
}

void mercury__transform_hlds__term_constr_main_types__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_arg_size_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_termination_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_termination2_info_0);
}

void mercury__transform_hlds__term_constr_main_types__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_main_types__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_main_types.
