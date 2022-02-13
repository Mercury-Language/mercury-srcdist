/*
** Automatically generated from `pred_name.m'
** by the Mercury compiler,
** version rotd-2022-02-13
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


// :- module parse_tree.pred_name.
// :- implementation.

/*
INIT mercury__parse_tree__pred_name__init
ENDINIT
*/

#include "parse_tree.pred_name.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_line_number_and_counter_0_0[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0;

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_line_number_and_counter_0_0[1];

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_line_number_and_counter_0[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_line_number_and_counter_0[1];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_line_number_and_counter_0[1];

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_0[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_0[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_2[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_2[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_5[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_5[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_6[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_8[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_8[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9[1];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9[1];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_10[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_12[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_12[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_13[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_13[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_14[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_15[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_15[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_16[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_16[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16;

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3[14];

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0[4];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0[17];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0[17];

static MR_String MR_CALL 
parse_tree__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * Str_4);

static void MR_CALL 
parse_tree__pred_name__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name__make_instance_method_pred_sym_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0(
  MR_Word Ints_3);

static MR_Box MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word TypeSubst_5);

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__pred_name_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_5[2][5];




static /* final */ const MR_Box parse_tree__pred_name_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__pred_name_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__pred_name_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__pred_name_scalar_common_5[0])),
    ((MR_Box) (parse_tree__pred_name__ints_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__pred_name_scalar_common_5[1])),
    ((MR_Box) (parse_tree__pred_name__make_instance_method_pred_sym_name_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__pred_name_scalar_common_5[1])),
    ((MR_Box) (parse_tree__pred_name__make_instance_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_line_number_and_counter_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0 = {
  (MR_String) "lnc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__pred_name__parse_tree__pred_name__field_types_line_number_and_counter_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_line_number_and_counter_0_0[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0
};

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_line_number_and_counter_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_line_number_and_counter_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_line_number_and_counter_0[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_line_number_and_counter_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__pred_name____Unify____line_number_and_counter_0_0_10001)),
  ((MR_Box) (parse_tree__pred_name____Compare____line_number_and_counter_0_0_10001)),
  (MR_String) "parse_tree.pred_name",
  (MR_String) "line_number_and_counter",
  { parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_line_number_and_counter_0 },
  { parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_line_number_and_counter_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_line_number_and_counter_0,

};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0 = {
  (MR_String) "tn_higher_order",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_0,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1 = {
  (MR_String) "tn_higher_order_type_spec",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_2[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2 = {
  (MR_String) "tn_accumulator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_2,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3 = {
  (MR_String) "tn_deforestation",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4 = {
  (MR_String) "tn_lambda",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_5[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_5[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5 = {
  (MR_String) "tn_loop_inv",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_5,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_6[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6 = {
  (MR_String) "tn_tupling",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7 = {
  (MR_String) "tn_untupling",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_8[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_8[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8 = {
  (MR_String) "tn_last_call_modulo_cons",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_8,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9 = {
  (MR_String) "tn_ssdb_stdlib_proxy",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_10[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10 = {
  (MR_String) "tn_dep_par_conj",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_10,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11 = {
  (MR_String) "tn_par_distance_granularity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_12[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_12[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12 = {
  (MR_String) "tn_par_loop_control",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_12,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_12,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_13[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_13[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13 = {
  (MR_String) "tn_structure_reuse",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_13,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_13,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_14[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14 = {
  (MR_String) "tn_pragma_type_spec",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_15[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_15[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15 = {
  (MR_String) "tn_minimal_model_generator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_15,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_15,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_16[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_16[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16 = {
  (MR_String) "tn_unused_args",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_16,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_16,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3[14] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16
};

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(14),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0[17] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0[17] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 2,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 13,
  (MR_Integer) 11,
  (MR_Integer) 8,
  (MR_Integer) 16
};

const MR_TypeCtorInfo_Struct parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_transform_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__pred_name____Unify____transform_name_0_0_10001)),
  ((MR_Box) (parse_tree__pred_name____Compare____transform_name_0_0_10001)),
  (MR_String) "parse_tree.pred_name",
  (MR_String) "transform_name",
  { parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0 },
  { parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0 },
  (MR_Integer) 17,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0,

};

void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_113 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_114 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_113 == CastY_114);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer Var_4;
    MR_Integer Var_5;

    parse_tree__pred_name____Index____transform_name_0_0(HeadVar__2_2, &Var_4);
    parse_tree__pred_name____Index____transform_name_0_0(HeadVar__3_3, &Var_5);
    succeeded = (Var_4 < Var_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_4 > Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word Var_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_11;
              MR_Word SubResult1_9;
              MR_Integer Var_162;
              MR_Integer Var_163;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                Var_162 = (MR_Integer) (ArgX1_7);
                Var_163 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_162 < Var_163);
                if (succeeded)
                {
                  SubResult1_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_162 > Var_163);
                  if (succeeded)
                  {
                    SubResult1_9 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_9 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  Var_6 = SubResult1_9;
                else
                {
                  succeeded = (ArgX2_10 < ArgY2_11);
                  if (succeeded)
                    Var_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX2_10 > ArgY2_11);
                    if (succeeded)
                      Var_6 = (MR_Integer) 2;
                    else
                      Var_6 = (MR_Integer) 0;
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_13;
              MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_16;
              MR_Integer ArgX3_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer ArgY3_19;
              MR_Word SubResult1_14;
              MR_Integer Var_164;
              MR_Integer Var_165;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                Var_164 = (MR_Integer) (ArgX1_12);
                Var_165 = (MR_Integer) (ArgY1_13);
                succeeded = (Var_164 < Var_165);
                if (succeeded)
                {
                  SubResult1_14 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_164 > Var_165);
                  if (succeeded)
                  {
                    SubResult1_14 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_14 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  Var_6 = SubResult1_14;
                else
                {
                  MR_Word SubResult2_17;

                  succeeded = (ArgX2_15 < ArgY2_16);
                  if (succeeded)
                  {
                    SubResult2_17 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX2_15 > ArgY2_16);
                    if (succeeded)
                    {
                      SubResult2_17 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_17 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    Var_6 = SubResult2_17;
                  else
                  {
                    succeeded = (ArgX3_18 < ArgY3_19);
                    if (succeeded)
                      Var_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX3_18 > ArgY3_19);
                      if (succeeded)
                        Var_6 = (MR_Integer) 2;
                      else
                        Var_6 = (MR_Integer) 0;
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_21;
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_24;
              MR_Word SubResult1_22;
              MR_Integer Var_156;
              MR_Integer Var_157;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                Var_156 = (MR_Integer) (ArgX1_20);
                Var_157 = (MR_Integer) (ArgY1_21);
                succeeded = (Var_156 < Var_157);
                if (succeeded)
                {
                  SubResult1_22 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_156 > Var_157);
                  if (succeeded)
                  {
                    SubResult1_22 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_22 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  Var_6 = SubResult1_22;
                else
                  parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX2_23, ArgY2_24);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_26;
                  MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_29;
                  MR_Word SubResult1_27;
                  MR_Integer Var_158;
                  MR_Integer Var_159;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_158 = (MR_Integer) (ArgX1_25);
                    Var_159 = (MR_Integer) (ArgY1_26);
                    succeeded = (Var_158 < Var_159);
                    if (succeeded)
                    {
                      SubResult1_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_158 > Var_159);
                      if (succeeded)
                      {
                        SubResult1_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_27;
                    else
                      parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX2_28, ArgY2_29);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_31;
                  MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_34;
                  MR_Word SubResult1_32;
                  MR_Integer Var_166;
                  MR_Integer Var_167;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_166 = (MR_Integer) (ArgX1_30);
                    Var_167 = (MR_Integer) (ArgY1_31);
                    succeeded = (Var_166 < Var_167);
                    if (succeeded)
                    {
                      SubResult1_32 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_166 > Var_167);
                      if (succeeded)
                      {
                        SubResult1_32 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_32 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_32;
                    else
                      parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX2_33, ArgY2_34);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_36;
                  MR_Integer ArgX2_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_39;
                  MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_42;
                  MR_Word SubResult1_37;
                  MR_Integer Var_170;
                  MR_Integer Var_171;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_170 = (MR_Integer) (ArgX1_35);
                    Var_171 = (MR_Integer) (ArgY1_36);
                    succeeded = (Var_170 < Var_171);
                    if (succeeded)
                    {
                      SubResult1_37 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_170 > Var_171);
                      if (succeeded)
                      {
                        SubResult1_37 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_37 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_37;
                    else
                    {
                      MR_Word SubResult2_40;

                      succeeded = (ArgX2_38 < ArgY2_39);
                      if (succeeded)
                      {
                        SubResult2_40 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_38 > ArgY2_39);
                        if (succeeded)
                        {
                          SubResult2_40 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_40 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_40;
                      else
                        parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX3_41, ArgY3_42);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_44;
                  MR_Integer ArgX2_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_47;
                  MR_Word ArgX3_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_50;
                  MR_Word SubResult1_45;
                  MR_Integer Var_182;
                  MR_Integer Var_183;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_182 = (MR_Integer) (ArgX1_43);
                    Var_183 = (MR_Integer) (ArgY1_44);
                    succeeded = (Var_182 < Var_183);
                    if (succeeded)
                    {
                      SubResult1_45 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_182 > Var_183);
                      if (succeeded)
                      {
                        SubResult1_45 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_45 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_45;
                    else
                    {
                      MR_Word SubResult2_48;

                      succeeded = (ArgX2_46 < ArgY2_47);
                      if (succeeded)
                      {
                        SubResult2_48 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_46 > ArgY2_47);
                        if (succeeded)
                        {
                          SubResult2_48 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_48 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_48;
                      else
                        parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX3_49, ArgY3_50);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_52;
                  MR_Integer ArgX2_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_55;
                  MR_Word ArgX3_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_58;
                  MR_Word SubResult1_53;
                  MR_Integer Var_184;
                  MR_Integer Var_185;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_184 = (MR_Integer) (ArgX1_51);
                    Var_185 = (MR_Integer) (ArgY1_52);
                    succeeded = (Var_184 < Var_185);
                    if (succeeded)
                    {
                      SubResult1_53 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_184 > Var_185);
                      if (succeeded)
                      {
                        SubResult1_53 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_53 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_53;
                    else
                    {
                      MR_Word SubResult2_56;

                      succeeded = (ArgX2_54 < ArgY2_55);
                      if (succeeded)
                      {
                        SubResult2_56 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_54 > ArgY2_55);
                        if (succeeded)
                        {
                          SubResult2_56 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_56 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_56;
                      else
                        parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX3_57, ArgY3_58);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_60;
                  MR_Integer ArgX2_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_63;
                  MR_Word SubResult1_61;
                  MR_Integer Var_168;
                  MR_Integer Var_169;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_168 = (MR_Integer) (ArgX1_59);
                    Var_169 = (MR_Integer) (ArgY1_60);
                    succeeded = (Var_168 < Var_169);
                    if (succeeded)
                    {
                      SubResult1_61 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_168 > Var_169);
                      if (succeeded)
                      {
                        SubResult1_61 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_61 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_61;
                    else
                    {
                      succeeded = (ArgX2_62 < ArgY2_63);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_62 > ArgY2_63);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_65;
                  MR_Integer Var_178;
                  MR_Integer Var_179;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_178 = (MR_Integer) (ArgX1_64);
                    Var_179 = (MR_Integer) (ArgY1_65);
                    succeeded = (Var_178 < Var_179);
                    if (succeeded)
                      Var_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_178 > Var_179);
                      if (succeeded)
                        Var_6 = (MR_Integer) 2;
                      else
                        Var_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_67;
                  MR_Integer ArgX2_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_70;
                  MR_Word ArgX3_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_73;
                  MR_Word SubResult1_68;
                  MR_Integer Var_160;
                  MR_Integer Var_161;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_160 = (MR_Integer) (ArgX1_66);
                    Var_161 = (MR_Integer) (ArgY1_67);
                    succeeded = (Var_160 < Var_161);
                    if (succeeded)
                    {
                      SubResult1_68 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_160 > Var_161);
                      if (succeeded)
                      {
                        SubResult1_68 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_68 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_68;
                    else
                    {
                      MR_Word SubResult2_71;

                      succeeded = (ArgX2_69 < ArgY2_70);
                      if (succeeded)
                      {
                        SubResult2_71 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_69 > ArgY2_70);
                        if (succeeded)
                        {
                          SubResult2_71 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_71 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_71;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX3_72)), ((MR_Box) (ArgY3_73)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_75;
                  MR_Integer ArgX2_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_78;
                  MR_Word SubResult1_76;
                  MR_Integer Var_174;
                  MR_Integer Var_175;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_174 = (MR_Integer) (ArgX1_74);
                    Var_175 = (MR_Integer) (ArgY1_75);
                    succeeded = (Var_174 < Var_175);
                    if (succeeded)
                    {
                      SubResult1_76 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_174 > Var_175);
                      if (succeeded)
                      {
                        SubResult1_76 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_76 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_76;
                    else
                    {
                      succeeded = (ArgX2_77 < ArgY2_78);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_77 > ArgY2_78);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_80;
                  MR_Integer ArgX2_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_83;
                  MR_Word SubResult1_81;
                  MR_Integer Var_176;
                  MR_Integer Var_177;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_176 = (MR_Integer) (ArgX1_79);
                    Var_177 = (MR_Integer) (ArgY1_80);
                    succeeded = (Var_176 < Var_177);
                    if (succeeded)
                    {
                      SubResult1_81 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_176 > Var_177);
                      if (succeeded)
                      {
                        SubResult1_81 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_81 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_81;
                    else
                    {
                      succeeded = (ArgX2_82 < ArgY2_83);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_82 > ArgY2_83);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_85;
                  MR_Integer ArgX2_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_88;
                  MR_Word ArgX3_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_91;
                  MR_Word SubResult1_86;
                  MR_Integer Var_180;
                  MR_Integer Var_181;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_180 = (MR_Integer) (ArgX1_84);
                    Var_181 = (MR_Integer) (ArgY1_85);
                    succeeded = (Var_180 < Var_181);
                    if (succeeded)
                    {
                      SubResult1_86 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_180 > Var_181);
                      if (succeeded)
                      {
                        SubResult1_86 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_86 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_86;
                    else
                    {
                      MR_Word SubResult2_89;

                      succeeded = (ArgX2_87 < ArgY2_88);
                      if (succeeded)
                      {
                        SubResult2_89 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_87 > ArgY2_88);
                        if (succeeded)
                        {
                          SubResult2_89 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_89 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_89;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX3_90)), ((MR_Box) (ArgY3_91)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_93;
                  MR_Word ArgX2_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_96;
                  MR_Word ArgX3_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_99;
                  MR_Word SubResult1_94;
                  MR_Word TypeInfo_148_148;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    TypeInfo_148_148 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[2]);
                    mercury__builtin__compare_3_p_0(TypeInfo_148_148, &SubResult1_94, ((MR_Box) (ArgX1_92)), ((MR_Box) (ArgY1_93)));
                    succeeded = (SubResult1_94 != (MR_Integer) 0);
                    if (succeeded)
                      Var_6 = SubResult1_94;
                    else
                    {
                      MR_Word SubResult2_97;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[3]), &SubResult2_97, ((MR_Box) (ArgX2_95)), ((MR_Box) (ArgY2_96)));
                      succeeded = (SubResult2_97 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult2_97;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[4]), &Var_6, ((MR_Box) (ArgX3_98)), ((MR_Box) (ArgY3_99)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_101;
                  MR_Integer ArgX2_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_104;
                  MR_Word SubResult1_102;
                  MR_Integer Var_172;
                  MR_Integer Var_173;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_172 = (MR_Integer) (ArgX1_100);
                    Var_173 = (MR_Integer) (ArgY1_101);
                    succeeded = (Var_172 < Var_173);
                    if (succeeded)
                    {
                      SubResult1_102 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_172 > Var_173);
                      if (succeeded)
                      {
                        SubResult1_102 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_102 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_102;
                    else
                    {
                      succeeded = (ArgX2_103 < ArgY2_104);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_103 > ArgY2_104);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_105 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_106;
                  MR_Integer ArgX2_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_109;
                  MR_Word ArgX3_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_112;
                  MR_Word SubResult1_107;
                  MR_Integer Var_186;
                  MR_Integer Var_187;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_106 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_186 = (MR_Integer) (ArgX1_105);
                    Var_187 = (MR_Integer) (ArgY1_106);
                    succeeded = (Var_186 < Var_187);
                    if (succeeded)
                    {
                      SubResult1_107 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_186 > Var_187);
                      if (succeeded)
                      {
                        SubResult1_107 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_107 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_107;
                    else
                    {
                      MR_Word SubResult2_110;

                      succeeded = (ArgX2_108 < ArgY2_109);
                      if (succeeded)
                      {
                        SubResult2_110 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_108 > ArgY2_109);
                        if (succeeded)
                        {
                          SubResult2_110 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_110 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_110;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX3_111)), ((MR_Box) (ArgY3_112)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = Var_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
parse_tree__pred_name____Index____transform_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_85 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_86 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_85 == CastY_86);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;
          MR_Integer ArgX3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
            {
              succeeded = (ArgX2_9 == ArgY2_10);
              if (succeeded)
                succeeded = (ArgX3_11 == ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_13 == ArgY1_14);
            if (succeeded)
              succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_15, ArgY2_16);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_17 == ArgY1_18);
                if (succeeded)
                  succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_19, ArgY2_20);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_22;
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_21 == ArgY1_22);
                if (succeeded)
                  succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_23, ArgY2_24);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_26;
              MR_Integer ArgX2_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_28;
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_25 == ArgY1_26);
                if (succeeded)
                {
                  succeeded = (ArgX2_27 == ArgY2_28);
                  if (succeeded)
                    succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_29, ArgY3_30);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_32;
              MR_Integer ArgX2_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_34;
              MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_31 == ArgY1_32);
                if (succeeded)
                {
                  succeeded = (ArgX2_33 == ArgY2_34);
                  if (succeeded)
                    succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_35, ArgY3_36);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_38;
              MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_40;
              MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_37 == ArgY1_38);
                if (succeeded)
                {
                  succeeded = (ArgX2_39 == ArgY2_40);
                  if (succeeded)
                    succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_41, ArgY3_42);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_44;
              MR_Integer ArgX2_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_43 == ArgY1_44);
                if (succeeded)
                  succeeded = (ArgX2_45 == ArgY2_46);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_47 == ArgY1_48);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_87_87;
              MR_Word ArgX1_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_50;
              MR_Integer ArgX2_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_52;
              MR_Word ArgX3_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_49 == ArgY1_50);
                if (succeeded)
                {
                  succeeded = (ArgX2_51 == ArgY2_52);
                  if (succeeded)
                  {
                    TypeInfo_87_87 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_87_87, ((MR_Box) (ArgX3_53)), ((MR_Box) (ArgY3_54)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_56;
              MR_Integer ArgX2_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_55 == ArgY1_56);
                if (succeeded)
                  succeeded = (ArgX2_57 == ArgY2_58);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_60;
              MR_Integer ArgX2_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_59 == ArgY1_60);
                if (succeeded)
                  succeeded = (ArgX2_61 == ArgY2_62);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word TypeInfo_91_91;
              MR_Word ArgX1_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_64;
              MR_Integer ArgX2_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_66;
              MR_Word ArgX3_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_63 == ArgY1_64);
                if (succeeded)
                {
                  succeeded = (ArgX2_65 == ArgY2_66);
                  if (succeeded)
                  {
                    TypeInfo_91_91 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX3_67)), ((MR_Box) (ArgY3_68)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_88_88;
              MR_Word TypeInfo_89_89;
              MR_Word TypeInfo_90_90;
              MR_Word ArgX1_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_70;
              MR_Word ArgX2_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_72;
              MR_Word ArgX3_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                TypeInfo_88_88 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX1_69)), ((MR_Box) (ArgY1_70)));
                if (succeeded)
                {
                  TypeInfo_89_89 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX2_71)), ((MR_Box) (ArgY2_72)));
                  if (succeeded)
                  {
                    TypeInfo_90_90 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_90_90, ((MR_Box) (ArgX3_73)), ((MR_Box) (ArgY3_74)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgX1_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_76;
              MR_Integer ArgX2_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_75 == ArgY1_76);
                if (succeeded)
                  succeeded = (ArgX2_77 == ArgY2_78);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word TypeInfo_92_92;
              MR_Word ArgX1_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_80;
              MR_Integer ArgX2_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_82;
              MR_Word ArgX3_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_84;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_79 == ArgY1_80);
                if (succeeded)
                {
                  succeeded = (ArgX2_81 == ArgY2_82);
                  if (succeeded)
                  {
                    TypeInfo_92_92 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX3_83)), ((MR_Box) (ArgY3_84)));
                  }
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static MR_String MR_CALL 
parse_tree__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2)
{
  MR_String Str_7;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_String VarName_8;
  MR_String TypeStr_9;
  MR_String Var_19;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_4, Var_5, &VarName_8);
  TypeStr_9 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(VarSet_4, (MR_Integer) 0, Type_6);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " = ", TypeStr_9);
  Str_7 = mercury__string__f_43_43_2_f_0(VarName_8, Var_19);
  return Str_7;
}

static void MR_CALL 
parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * Str_4)
{
  MR_Word TypeCtor_5;
  MR_Word TypeName_6;
  MR_Integer TypeArity_7;
  MR_String TypeNameStr_8;
  MR_String Var_17;
  MR_String Var_24;
  MR_String Var_26;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_3, &TypeCtor_5);
  TypeName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
  TypeArity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
  TypeNameStr_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeName_6, (MR_String) "__");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), TypeArity_7, &Var_17);
  Var_24 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "__");
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", Var_24);
  *Str_4 = mercury__string__f_43_43_2_f_0(TypeNameStr_8, Var_26);
}

void MR_CALL 
parse_tree__pred_name__make_uci_pred_sym_name_3_p_0(
  MR_Word SpecialPredId_4,
  MR_Word TypeCtor_5,
  MR_Word * PredSymName_6)
{
  MR_String PredName_7;

  PredName_7 = parse_tree__pred_name__uci_pred_name_2_f_0(SpecialPredId_4, TypeCtor_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *PredSymName_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredName_7));
  }
}

MR_String MR_CALL 
parse_tree__pred_name__uci_pred_name_2_f_0(
  MR_Word SpecialPred_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Name_7;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_String BaseName_8;

  BaseName_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(SpecialPred_4);
  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
    Var_13 = mercury__string__int_to_string_1_f_0(Arity_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_13);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
    Name_7 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_9);
  }
  else
    Name_7 = BaseName_8;
  return Name_7;
}

static void MR_CALL 
parse_tree__pred_name__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
}

void MR_CALL 
parse_tree__pred_name__make_instance_string_2_p_0(
  MR_Word InstanceTypes_3,
  MR_String * InstanceStr_4)
{
  MR_Word InstanceStrs_5;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__pred_name_scalar_common_2[3]), InstanceTypes_3, &InstanceStrs_5);
  mercury__string__append_list_2_p_0(InstanceStrs_5, InstanceStr_4);
}

static void MR_CALL 
parse_tree__pred_name__make_instance_method_pred_sym_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
}

void MR_CALL 
parse_tree__pred_name__make_instance_method_pred_sym_name_5_p_0(
  MR_Word ClassId_6,
  MR_Word MethodName_7,
  MR_Integer Arity_8,
  MR_Word InstanceTypes_9,
  MR_Word * PredSymName_10)
{
  MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0))));
  MR_String ClassNameStr_13;
  MR_String MethodNameStr_14;
  MR_String InstanceStr_15;
  MR_String PredName_16;
  MR_String Var_29;
  MR_String Var_37;
  MR_String Var_38;
  MR_String Var_40;
  MR_String Var_41;
  MR_String Var_43;
  MR_String Var_44;
  MR_Word InstanceStrs_48;

  ClassNameStr_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ClassName_11, (MR_String) "__");
  MethodNameStr_14 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MethodName_7, (MR_String) "__");
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__pred_name_scalar_common_2[2]), InstanceTypes_9, &InstanceStrs_48);
  mercury__string__append_list_2_p_0(InstanceStrs_48, &InstanceStr_15);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Arity_8, &Var_29);
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_29);
  Var_38 = mercury__string__f_43_43_2_f_0(MethodNameStr_14, Var_37);
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "____", Var_38);
  Var_41 = mercury__string__f_43_43_2_f_0(InstanceStr_15, Var_40);
  Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "____", Var_41);
  Var_44 = mercury__string__f_43_43_2_f_0(ClassNameStr_13, Var_43);
  PredName_16 = mercury__string__f_43_43_2_f_0((MR_String) "ClassMethod_for_", Var_44);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *PredSymName_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredName_16));
  }
}

void MR_CALL 
parse_tree__pred_name__make_transformed_pred_sym_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String OrigName_6,
  MR_Word Transform_7,
  MR_Word * TransformedSymName_8)
{
  MR_String TransformedName_9;

  parse_tree__pred_name__make_transformed_pred_name_3_p_0(OrigName_6, Transform_7, &TransformedName_9);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TransformedSymName_8 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TransformedName_9));
  }
}

void MR_CALL 
parse_tree__pred_name__make_transformed_pred_name_3_p_0(
  MR_String OrigName_4,
  MR_Word Transform_5,
  MR_String * TransformedName_6)
{
  switch (MR_tag((MR_Word) Transform_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Counter_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Transform_5, (MR_Integer) 1))));
        MR_String Var_319;
        MR_String Var_327;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_8, &Var_319);
        Var_327 = mercury__string__f_43_43_2_f_0((MR_String) "__ho", Var_319);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_327);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ProcNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 1))));
        MR_Integer Version_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 2))));
        MR_String Var_300;
        MR_String Var_308;
        MR_String Var_309;
        MR_String Var_316;
        MR_String Var_318;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Version_10, &Var_300);
        Var_308 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_300);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_9, &Var_309);
        Var_316 = mercury__string__f_43_43_2_f_0(Var_309, Var_308);
        Var_318 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_316);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_318);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Prefix_50;
        MR_String Suffix_52;
        MR_String Var_529;
        MR_String Var_530;
        MR_String Var_532;

        switch (MR_tag((MR_Word) Transform_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word LNC_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 1))));
              MR_Integer Line_51;
              MR_String Var_161;
              MR_Integer Counter_193;
              MR_String Var_511;
              MR_String Var_512;
              MR_String Var_520;
              MR_String Var_521;

              Var_161 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_47);
              Var_511 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_161);
              Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "AccFrom", Var_511);
              Line_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_48, (MR_Integer) 0))));
              Counter_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_48, (MR_Integer) 1))));
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_193, &Var_512);
              Var_520 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_512);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_51, &Var_521);
              Suffix_52 = mercury__string__f_43_43_2_f_0(Var_521, Var_520);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredOrFunc_222 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_223 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_225;
                  MR_String Var_231;
                  MR_Integer Counter_239;
                  MR_String Var_493;
                  MR_String Var_494;
                  MR_String Var_502;
                  MR_String Var_503;

                  Var_231 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_222);
                  Var_493 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_231);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "DeforestationIn", Var_493);
                  Line_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_223, (MR_Integer) 0))));
                  Counter_239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_223, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_239, &Var_494);
                  Var_502 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_494);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_225, &Var_503);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_503, Var_502);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredOrFunc_240 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_243;
                  MR_String Var_249;
                  MR_Integer Counter_257;
                  MR_String Var_465;
                  MR_String Var_466;
                  MR_String Var_474;
                  MR_String Var_475;

                  Var_249 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_240);
                  Var_465 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_249);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "IntroducedFrom", Var_465);
                  Line_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_241, (MR_Integer) 0))));
                  Counter_257 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_241, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_257, &Var_466);
                  Var_474 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_466);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_243, &Var_475);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_475, Var_474);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_146;
                  MR_Integer Counter_194;
                  MR_Integer ProcNum_195 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_196 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_199;
                  MR_String Var_430;
                  MR_String Var_431;
                  MR_String Var_439;
                  MR_String Var_440;
                  MR_String Var_447;
                  MR_String Var_449;
                  MR_String Var_450;

                  Var_146 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_196);
                  Var_430 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_146);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "loop_inv", Var_430);
                  Line_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_197, (MR_Integer) 0))));
                  Counter_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_197, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_195, &Var_431);
                  Var_439 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_431);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_194, &Var_440);
                  Var_447 = mercury__string__f_43_43_2_f_0(Var_440, Var_439);
                  Var_449 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_447);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_199, &Var_450);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_450, Var_449);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_263;
                  MR_Integer Counter_273;
                  MR_Integer ProcNum_274 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_275 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_276 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_278;
                  MR_String Var_367;
                  MR_String Var_368;
                  MR_String Var_376;
                  MR_String Var_377;
                  MR_String Var_384;
                  MR_String Var_386;
                  MR_String Var_387;

                  Var_263 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_275);
                  Var_367 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_263);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "tupling", Var_367);
                  Line_278 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_276, (MR_Integer) 0))));
                  Counter_273 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_276, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_274, &Var_368);
                  Var_376 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_368);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_273, &Var_377);
                  Var_384 = mercury__string__f_43_43_2_f_0(Var_377, Var_376);
                  Var_386 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_384);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_278, &Var_387);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_387, Var_386);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String Var_284;
                  MR_Integer Counter_294;
                  MR_Integer ProcNum_295 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_296 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_297 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_299;
                  MR_String Var_339;
                  MR_String Var_340;
                  MR_String Var_348;
                  MR_String Var_349;
                  MR_String Var_356;
                  MR_String Var_358;
                  MR_String Var_359;

                  Var_284 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_296);
                  Var_339 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_284);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "untupling", Var_339);
                  Line_299 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_297, (MR_Integer) 0))));
                  Counter_294 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_297, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_295, &Var_340);
                  Var_348 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_340);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_294, &Var_349);
                  Var_356 = mercury__string__f_43_43_2_f_0(Var_349, Var_348);
                  Var_358 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_356);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_299, &Var_359);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_359, Var_358);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Integer VariantNum_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_135;
                  MR_Word PredOrFunc_200 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_135 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_200);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "LCMC__", Var_135);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), VariantNum_53, &Suffix_52);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String Var_130;
                  MR_Word PredOrFunc_201 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_130 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_201);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "SSDB__", Var_130);
                  Suffix_52 = (MR_String) "";
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgNums_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_118;
                  MR_String Var_123;
                  MR_Integer ProcNum_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_203 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_483;
                  MR_String Var_491;

                  Var_118 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_203);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "Parallel__", Var_118);
                  Var_123 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_54);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_202, &Var_483);
                  Var_491 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_483);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_123, Var_491);
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer Distance_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_109;
                  MR_Word PredOrFunc_204 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_109 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_204);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor__", Var_109);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Distance_55, &Suffix_52);
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String Var_100;
                  MR_Integer ProcNum_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_206 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_407;

                  Var_100 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_206);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "LoopControl__", Var_100);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_205, &Var_407);
                  Suffix_52 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_407);
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String Var_88;
                  MR_String Var_95;
                  MR_Integer ProcNum_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_208 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_396;
                  MR_String Var_397;

                  Var_88 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_208);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "ctgc__", Var_88);
                  Var_95 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_209);
                  Var_396 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_95);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_207, &Var_397);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_397, Var_396);
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word MaybePredOrFunc_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))));
                  MR_Word VarSet_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word TypeSubst_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String PredOrFuncStr_59;

                  if ((MaybePredOrFunc_56 == (MR_Word) ((MR_Unsigned) 0U)))
                    PredOrFuncStr_59 = (MR_String) "pred_or_func";
                  else
                  {
                    MR_Word PredOrFunc_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_56, (MR_Integer) 0))));

                    PredOrFuncStr_59 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_210);
                  }
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "TypeSpecOf__", PredOrFuncStr_59);
                  Suffix_52 = parse_tree__pred_name__type_subst_to_string_2_f_0(VarSet_57, TypeSubst_58);
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_String Var_75;
                  MR_Integer ProcNum_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_214 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_75 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_214);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "GeneratorFor_", Var_75);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_213, &Suffix_52);
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_String Var_63;
                  MR_String Var_68;
                  MR_Integer ProcNum_215 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_216 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_329;
                  MR_String Var_337;

                  Var_63 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_216);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "UnusedArgs__", Var_63);
                  Var_68 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_217);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_215, &Var_329);
                  Var_337 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_329);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_68, Var_337);
                }
                break;
            }
            break;
        }
        Var_529 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_52);
        Var_530 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_529);
        Var_532 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_530);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_50, Var_532);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String Prefix_50;
        MR_String Suffix_52;
        MR_String Var_529;
        MR_String Var_530;
        MR_String Var_532;

        switch (MR_tag((MR_Word) Transform_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word LNC_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 1))));
              MR_Integer Line_51;
              MR_String Var_161;
              MR_Integer Counter_193;
              MR_String Var_511;
              MR_String Var_512;
              MR_String Var_520;
              MR_String Var_521;

              Var_161 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_47);
              Var_511 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_161);
              Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "AccFrom", Var_511);
              Line_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_48, (MR_Integer) 0))));
              Counter_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_48, (MR_Integer) 1))));
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_193, &Var_512);
              Var_520 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_512);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_51, &Var_521);
              Suffix_52 = mercury__string__f_43_43_2_f_0(Var_521, Var_520);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredOrFunc_222 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_223 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_225;
                  MR_String Var_231;
                  MR_Integer Counter_239;
                  MR_String Var_493;
                  MR_String Var_494;
                  MR_String Var_502;
                  MR_String Var_503;

                  Var_231 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_222);
                  Var_493 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_231);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "DeforestationIn", Var_493);
                  Line_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_223, (MR_Integer) 0))));
                  Counter_239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_223, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_239, &Var_494);
                  Var_502 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_494);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_225, &Var_503);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_503, Var_502);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredOrFunc_240 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_243;
                  MR_String Var_249;
                  MR_Integer Counter_257;
                  MR_String Var_465;
                  MR_String Var_466;
                  MR_String Var_474;
                  MR_String Var_475;

                  Var_249 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_240);
                  Var_465 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_249);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "IntroducedFrom", Var_465);
                  Line_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_241, (MR_Integer) 0))));
                  Counter_257 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_241, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_257, &Var_466);
                  Var_474 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_466);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_243, &Var_475);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_475, Var_474);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_146;
                  MR_Integer Counter_194;
                  MR_Integer ProcNum_195 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_196 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_199;
                  MR_String Var_430;
                  MR_String Var_431;
                  MR_String Var_439;
                  MR_String Var_440;
                  MR_String Var_447;
                  MR_String Var_449;
                  MR_String Var_450;

                  Var_146 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_196);
                  Var_430 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_146);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "loop_inv", Var_430);
                  Line_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_197, (MR_Integer) 0))));
                  Counter_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_197, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_195, &Var_431);
                  Var_439 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_431);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_194, &Var_440);
                  Var_447 = mercury__string__f_43_43_2_f_0(Var_440, Var_439);
                  Var_449 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_447);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_199, &Var_450);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_450, Var_449);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_263;
                  MR_Integer Counter_273;
                  MR_Integer ProcNum_274 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_275 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_276 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_278;
                  MR_String Var_367;
                  MR_String Var_368;
                  MR_String Var_376;
                  MR_String Var_377;
                  MR_String Var_384;
                  MR_String Var_386;
                  MR_String Var_387;

                  Var_263 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_275);
                  Var_367 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_263);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "tupling", Var_367);
                  Line_278 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_276, (MR_Integer) 0))));
                  Counter_273 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_276, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_274, &Var_368);
                  Var_376 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_368);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_273, &Var_377);
                  Var_384 = mercury__string__f_43_43_2_f_0(Var_377, Var_376);
                  Var_386 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_384);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_278, &Var_387);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_387, Var_386);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String Var_284;
                  MR_Integer Counter_294;
                  MR_Integer ProcNum_295 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_296 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_297 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_299;
                  MR_String Var_339;
                  MR_String Var_340;
                  MR_String Var_348;
                  MR_String Var_349;
                  MR_String Var_356;
                  MR_String Var_358;
                  MR_String Var_359;

                  Var_284 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_296);
                  Var_339 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_284);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "untupling", Var_339);
                  Line_299 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_297, (MR_Integer) 0))));
                  Counter_294 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_297, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_295, &Var_340);
                  Var_348 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_340);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_294, &Var_349);
                  Var_356 = mercury__string__f_43_43_2_f_0(Var_349, Var_348);
                  Var_358 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_356);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_299, &Var_359);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_359, Var_358);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Integer VariantNum_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_135;
                  MR_Word PredOrFunc_200 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_135 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_200);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "LCMC__", Var_135);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), VariantNum_53, &Suffix_52);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String Var_130;
                  MR_Word PredOrFunc_201 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_130 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_201);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "SSDB__", Var_130);
                  Suffix_52 = (MR_String) "";
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgNums_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_118;
                  MR_String Var_123;
                  MR_Integer ProcNum_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_203 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_483;
                  MR_String Var_491;

                  Var_118 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_203);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "Parallel__", Var_118);
                  Var_123 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_54);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_202, &Var_483);
                  Var_491 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_483);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_123, Var_491);
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer Distance_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_109;
                  MR_Word PredOrFunc_204 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_109 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_204);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor__", Var_109);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Distance_55, &Suffix_52);
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String Var_100;
                  MR_Integer ProcNum_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_206 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_407;

                  Var_100 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_206);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "LoopControl__", Var_100);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_205, &Var_407);
                  Suffix_52 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_407);
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String Var_88;
                  MR_String Var_95;
                  MR_Integer ProcNum_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_208 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_396;
                  MR_String Var_397;

                  Var_88 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_208);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "ctgc__", Var_88);
                  Var_95 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_209);
                  Var_396 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_95);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_207, &Var_397);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_397, Var_396);
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word MaybePredOrFunc_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))));
                  MR_Word VarSet_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word TypeSubst_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String PredOrFuncStr_59;

                  if ((MaybePredOrFunc_56 == (MR_Word) ((MR_Unsigned) 0U)))
                    PredOrFuncStr_59 = (MR_String) "pred_or_func";
                  else
                  {
                    MR_Word PredOrFunc_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_56, (MR_Integer) 0))));

                    PredOrFuncStr_59 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_210);
                  }
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "TypeSpecOf__", PredOrFuncStr_59);
                  Suffix_52 = parse_tree__pred_name__type_subst_to_string_2_f_0(VarSet_57, TypeSubst_58);
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_String Var_75;
                  MR_Integer ProcNum_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_214 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_75 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_214);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "GeneratorFor_", Var_75);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_213, &Suffix_52);
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_String Var_63;
                  MR_String Var_68;
                  MR_Integer ProcNum_215 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_216 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_329;
                  MR_String Var_337;

                  Var_63 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_216);
                  Prefix_50 = mercury__string__f_43_43_2_f_0((MR_String) "UnusedArgs__", Var_63);
                  Var_68 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_217);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_215, &Var_329);
                  Var_337 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_329);
                  Suffix_52 = mercury__string__f_43_43_2_f_0(Var_68, Var_337);
                }
                break;
            }
            break;
        }
        Var_529 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_52);
        Var_530 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_529);
        Var_532 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_530);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_50, Var_532);
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0(
  MR_Word Ints_3)
{
  MR_String Str_4;
  MR_Word IntStrs_5;
  MR_String IntsStr_6;
  MR_String Var_18;

  IntStrs_5 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__pred_name_scalar_common_2[1]), Ints_3);
  IntsStr_6 = mercury__string__join_list_2_f_0((MR_String) ", ", IntStrs_5);
  Var_18 = mercury__string__f_43_43_2_f_0(IntsStr_6, (MR_String) "]");
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_18);
  return Str_4;
}

static MR_Box MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_7;

  conv0_Str_7 = parse_tree__pred_name__type_var_subst_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_7));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word TypeSubst_5)
{
  MR_String Str_6;
  MR_Word TVarStrs_7;
  MR_String TVarsStr_8;
  MR_Word Var_9;
  MR_String Var_20;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&parse_tree__pred_name_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (parse_tree__pred_name__type_subst_to_string_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (VarSet_4));
  }
  TVarStrs_7 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__pred_name_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, TypeSubst_5);
  TVarsStr_8 = mercury__string__join_list_2_f_0((MR_String) ", ", TVarStrs_7);
  Var_20 = mercury__string__f_43_43_2_f_0(TVarsStr_8, (MR_String) "]");
  Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_20);
  return Str_6;
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__pred_name____Compare____line_number_and_counter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__pred_name____Unify____transform_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__pred_name____Compare____transform_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__pred_name__init(void)
{
}

void mercury__parse_tree__pred_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0);
	MR_register_type_ctor_info(&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_transform_name_0);
}

void mercury__parse_tree__pred_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__pred_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.pred_name.
