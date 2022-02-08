/*
** Automatically generated from `pred_name.m'
** by the Mercury compiler,
** version rotd-2022-02-08
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

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_2[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_2[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_5[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_5[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_6[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_8[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_8[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11;

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3[9];

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0[4];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0[12];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0[12];

static MR_String MR_CALL 
parse_tree__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2);

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

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_2[2][3];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_5[1][5];




static /* final */ const MR_Box parse_tree__pred_name_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__pred_name_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__pred_name_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__pred_name_scalar_common_5[0])),
    ((MR_Box) (parse_tree__pred_name__ints_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
  {     parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_line_number_and_counter_0 },
  {     parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_line_number_and_counter_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_line_number_and_counter_0,

};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
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
  (MR_String) "tn_accumulator",
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

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1[2] = {
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

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1 = {
  (MR_String) "tn_deforestation",
  INT16_C(2),
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
  (MR_String) "tn_lambda",
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

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3[3] = {
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

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3 = {
  (MR_String) "tn_loop_inv",
  INT16_C(3),
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

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4[3] = {
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

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4 = {
  (MR_String) "tn_tupling",
  INT16_C(3),
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
  (MR_String) "tn_untupling",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
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
  (MR_String) "tn_dep_par_conj",
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

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7[2] = {
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

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7 = {
  (MR_String) "tn_par_distance_granularity",
  INT16_C(2),
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
  (MR_String) "tn_par_loop_control",
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

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9[3] = {
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

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9 = {
  (MR_String) "tn_structure_reuse",
  INT16_C(3),
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

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10 = {
  (MR_String) "tn_type_spec",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11[3] = {
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

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11 = {
  (MR_String) "tn_unused_args",
  INT16_C(3),
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

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3[9] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11
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
    UINT32_C(9),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0[12] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0[12] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 11
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
  {     parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0 },
  {     parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0,

};

void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_767 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_768 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_767 == CastY_768);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_800 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_801 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;
                  MR_Integer Var_831 = (MR_Integer) (Var_801);
                  MR_Integer Var_832 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_831 < Var_832);
                  if (succeeded)
                  {
                    SubResult1_6 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_831 > Var_832);
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
                    parse_tree__pred_name____Compare____line_number_and_counter_0_0(HeadVar__1_1, Var_800, ArgY2_8);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_802 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_803 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word ArgY2_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_66;
                  MR_Integer Var_833 = (MR_Integer) (Var_803);
                  MR_Integer Var_834 = (MR_Integer) (ArgY1_65);

                  succeeded = (Var_833 < Var_834);
                  if (succeeded)
                  {
                    SubResult1_66 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_833 > Var_834);
                    if (succeeded)
                    {
                      SubResult1_66 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_66 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_66;
                  else
                    parse_tree__pred_name____Compare____line_number_and_counter_0_0(HeadVar__1_1, Var_802, ArgY2_68);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_807 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_808 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word ArgY2_128 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_126;
                  MR_Integer Var_837 = (MR_Integer) (Var_808);
                  MR_Integer Var_838 = (MR_Integer) (ArgY1_125);

                  succeeded = (Var_837 < Var_838);
                  if (succeeded)
                  {
                    SubResult1_126 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_837 > Var_838);
                    if (succeeded)
                    {
                      SubResult1_126 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_126 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_126;
                  else
                    parse_tree__pred_name____Compare____line_number_and_counter_0_0(HeadVar__1_1, Var_807, ArgY2_128);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_809 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer Var_810 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_811 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_188 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_191 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_189;
                          MR_Integer Var_839 = (MR_Integer) (Var_811);
                          MR_Integer Var_840 = (MR_Integer) (ArgY1_188);

                          succeeded = (Var_839 < Var_840);
                          if (succeeded)
                          {
                            SubResult1_189 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_839 > Var_840);
                            if (succeeded)
                            {
                              SubResult1_189 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_189 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_189;
                          else
                          {
                            MR_Word SubResult2_192;

                            succeeded = (Var_810 < ArgY2_191);
                            if (succeeded)
                            {
                              SubResult2_192 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_810 > ArgY2_191);
                              if (succeeded)
                              {
                                SubResult2_192 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_192 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_192;
                            else
                              parse_tree__pred_name____Compare____line_number_and_counter_0_0(HeadVar__1_1, Var_809, ArgY3_194);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_819 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer Var_820 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_821 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_263 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_266 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_269 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_264;
                          MR_Integer Var_847 = (MR_Integer) (Var_821);
                          MR_Integer Var_848 = (MR_Integer) (ArgY1_263);

                          succeeded = (Var_847 < Var_848);
                          if (succeeded)
                          {
                            SubResult1_264 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_847 > Var_848);
                            if (succeeded)
                            {
                              SubResult1_264 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_264 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_264;
                          else
                          {
                            MR_Word SubResult2_267;

                            succeeded = (Var_820 < ArgY2_266);
                            if (succeeded)
                            {
                              SubResult2_267 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_820 > ArgY2_266);
                              if (succeeded)
                              {
                                SubResult2_267 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_267 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_267;
                            else
                              parse_tree__pred_name____Compare____line_number_and_counter_0_0(HeadVar__1_1, Var_819, ArgY3_269);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_825 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer Var_826 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_827 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_338 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_341 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_344 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_339;
                          MR_Integer Var_849 = (MR_Integer) (Var_827);
                          MR_Integer Var_850 = (MR_Integer) (ArgY1_338);

                          succeeded = (Var_849 < Var_850);
                          if (succeeded)
                          {
                            SubResult1_339 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_849 > Var_850);
                            if (succeeded)
                            {
                              SubResult1_339 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_339 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_339;
                          else
                          {
                            MR_Word SubResult2_342;

                            succeeded = (Var_826 < ArgY2_341);
                            if (succeeded)
                            {
                              SubResult2_342 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_826 > ArgY2_341);
                              if (succeeded)
                              {
                                SubResult2_342 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_342 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_342;
                            else
                              parse_tree__pred_name____Compare____line_number_and_counter_0_0(HeadVar__1_1, Var_825, ArgY3_344);
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_804 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer Var_805 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_806 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ArgY1_413 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_416 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_419 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_414;
                          MR_Integer Var_835 = (MR_Integer) (Var_806);
                          MR_Integer Var_836 = (MR_Integer) (ArgY1_413);

                          succeeded = (Var_835 < Var_836);
                          if (succeeded)
                          {
                            SubResult1_414 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_835 > Var_836);
                            if (succeeded)
                            {
                              SubResult1_414 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_414 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_414;
                          else
                          {
                            MR_Word SubResult2_417;

                            succeeded = (Var_805 < ArgY2_416);
                            if (succeeded)
                            {
                              SubResult2_417 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_805 > ArgY2_416);
                              if (succeeded)
                              {
                                SubResult2_417 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_417 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_417;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_804)), ((MR_Box) (ArgY3_419)));
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer Var_812 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_813 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ArgY1_481 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_484 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_482;
                          MR_Integer Var_841 = (MR_Integer) (Var_813);
                          MR_Integer Var_842 = (MR_Integer) (ArgY1_481);

                          succeeded = (Var_841 < Var_842);
                          if (succeeded)
                          {
                            SubResult1_482 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_841 > Var_842);
                            if (succeeded)
                            {
                              SubResult1_482 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_482 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_482;
                          else
                          {
                            succeeded = (Var_812 < ArgY2_484);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_812 > ArgY2_484);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer Var_814 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_815 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word ArgY1_541 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_544 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_542;
                          MR_Integer Var_843 = (MR_Integer) (Var_815);
                          MR_Integer Var_844 = (MR_Integer) (ArgY1_541);

                          succeeded = (Var_843 < Var_844);
                          if (succeeded)
                          {
                            SubResult1_542 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_843 > Var_844);
                            if (succeeded)
                            {
                              SubResult1_542 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_542 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_542;
                          else
                          {
                            succeeded = (Var_814 < ArgY2_544);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_814 > ArgY2_544);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_816 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer Var_817 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_818 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word ArgY1_610 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_613 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_616 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_611;
                          MR_Integer Var_845 = (MR_Integer) (Var_818);
                          MR_Integer Var_846 = (MR_Integer) (ArgY1_610);

                          succeeded = (Var_845 < Var_846);
                          if (succeeded)
                          {
                            SubResult1_611 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_845 > Var_846);
                            if (succeeded)
                            {
                              SubResult1_611 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_611 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_611;
                          else
                          {
                            MR_Word SubResult2_614;

                            succeeded = (Var_817 < ArgY2_613);
                            if (succeeded)
                            {
                              SubResult2_614 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_817 > ArgY2_613);
                              if (succeeded)
                              {
                                SubResult2_614 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_614 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_614;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_816)), ((MR_Box) (ArgY3_616)));
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Var_822 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_823 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_824 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word ArgY1_685 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_688 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_691 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_686;

                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[2]), &SubResult1_686, ((MR_Box) (Var_824)), ((MR_Box) (ArgY1_685)));
                          succeeded = (SubResult1_686 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_686;
                          else
                          {
                            MR_Word SubResult2_689;

                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[3]), &SubResult2_689, ((MR_Box) (Var_823)), ((MR_Box) (ArgY2_688)));
                            succeeded = (SubResult2_689 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_689;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_822)), ((MR_Box) (ArgY3_691)));
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Var_828 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer Var_829 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_830 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word ArgY1_760 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                          MR_Integer ArgY2_763 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_766 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word SubResult1_761;
                          MR_Integer Var_851 = (MR_Integer) (Var_830);
                          MR_Integer Var_852 = (MR_Integer) (ArgY1_760);

                          succeeded = (Var_851 < Var_852);
                          if (succeeded)
                          {
                            SubResult1_761 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_851 > Var_852);
                            if (succeeded)
                            {
                              SubResult1_761 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_761 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_761;
                          else
                          {
                            MR_Word SubResult2_764;

                            succeeded = (Var_829 < ArgY2_763);
                            if (succeeded)
                            {
                              SubResult2_764 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_829 > ArgY2_763);
                              if (succeeded)
                              {
                                SubResult2_764 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_764 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_764;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_828)), ((MR_Box) (ArgY3_766)));
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_65 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_66 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_65 == CastY_66);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
                succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_7 == ArgY1_8);
              if (succeeded)
                succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_11 == ArgY1_12);
              if (succeeded)
                succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_13, ArgY2_14);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_16;
                MR_Integer ArgX2_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_18;
                MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_15 == ArgY1_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_17 == ArgY2_18);
                    if (succeeded)
                      succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_19, ArgY3_20);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_22;
                MR_Integer ArgX2_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_24;
                MR_Word ArgX3_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_21 == ArgY1_22);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_23 == ArgY2_24);
                    if (succeeded)
                      succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_25, ArgY3_26);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_28;
                MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_30;
                MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_32;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_27 == ArgY1_28);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_29 == ArgY2_30);
                    if (succeeded)
                      succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_31, ArgY3_32);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_67_67;
                MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_34;
                MR_Integer ArgX2_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_36;
                MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_38;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_33 == ArgY1_34);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_35 == ArgY2_36);
                    if (succeeded)
                    {
                      TypeInfo_67_67 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ArgX1_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_40;
                MR_Integer ArgX2_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_42;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_39 == ArgY1_40);
                  if (succeeded)
                    succeeded = (ArgX2_41 == ArgY2_42);
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
                MR_Word TypeInfo_68_68;
                MR_Word ArgX1_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_48;
                MR_Integer ArgX2_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_50;
                MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_52;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_47 == ArgY1_48);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_49 == ArgY2_50);
                    if (succeeded)
                    {
                      TypeInfo_68_68 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX3_51)), ((MR_Box) (ArgY3_52)));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word TypeInfo_69_69;
                MR_Word TypeInfo_70_70;
                MR_Word TypeInfo_71_71;
                MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_54;
                MR_Word ArgX2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_56;
                MR_Word ArgX3_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_58;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  TypeInfo_69_69 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX1_53)), ((MR_Box) (ArgY1_54)));
                  if (succeeded)
                  {
                    TypeInfo_70_70 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_70_70, ((MR_Box) (ArgX2_55)), ((MR_Box) (ArgY2_56)));
                    if (succeeded)
                    {
                      TypeInfo_71_71 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgX3_57)), ((MR_Box) (ArgY3_58)));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word TypeInfo_72_72;
                MR_Word ArgX1_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_60;
                MR_Integer ArgX2_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_62;
                MR_Word ArgX3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_64;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  succeeded = (ArgX1_59 == ArgY1_60);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_61 == ArgY2_62);
                    if (succeeded)
                    {
                      TypeInfo_72_72 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_72_72, ((MR_Box) (ArgX3_63)), ((MR_Box) (ArgY3_64)));
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
}

void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

static MR_String MR_CALL 
parse_tree__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
parse_tree__pred_name__make_pred_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String OrigName_6,
  MR_Word Transform_7,
  MR_Word * TransformedSymName_8)
{
  {
    MR_String Prefix_12;
    MR_String Suffix_15;
    MR_String TransformedName_23;
    MR_String Var_401;
    MR_String Var_402;
    MR_String Var_404;

    switch (MR_tag((MR_Word) Transform_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Transform_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word LNC_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Transform_7, (MR_Integer) 1))));
          MR_Integer Line_13;
          MR_Integer Counter_14;
          MR_String Var_102;
          MR_String Var_383;
          MR_String Var_384;
          MR_String Var_392;
          MR_String Var_393;

          Var_102 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_9);
          Var_383 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_102);
          Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "AccFrom", Var_383);
          Line_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_10, (MR_Integer) 0))));
          Counter_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_10, (MR_Integer) 1))));
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_14, &Var_384);
          Var_392 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_384);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_13, &Var_393);
          Suffix_15 = mercury__string__f_43_43_2_f_0(Var_393, Var_392);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredOrFunc_137 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Transform_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word LNC_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Transform_7, (MR_Integer) 1))));
          MR_Integer Line_140;
          MR_Integer Counter_141;
          MR_String Var_147;
          MR_String Var_365;
          MR_String Var_366;
          MR_String Var_374;
          MR_String Var_375;

          Var_147 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_137);
          Var_365 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_147);
          Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "DeforestationIn", Var_365);
          Line_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_138, (MR_Integer) 0))));
          Counter_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_138, (MR_Integer) 1))));
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_141, &Var_366);
          Var_374 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_366);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_140, &Var_375);
          Suffix_15 = mercury__string__f_43_43_2_f_0(Var_375, Var_374);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredOrFunc_155 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word LNC_156 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Transform_7, (MR_Integer) 1))));
          MR_Integer Line_158;
          MR_Integer Counter_159;
          MR_String Var_165;
          MR_String Var_337;
          MR_String Var_338;
          MR_String Var_346;
          MR_String Var_347;

          Var_165 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_155);
          Var_337 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_165);
          Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "IntroducedFrom", Var_337);
          Line_158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_156, (MR_Integer) 0))));
          Counter_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_156, (MR_Integer) 1))));
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_159, &Var_338);
          Var_346 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_338);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_158, &Var_347);
          Suffix_15 = mercury__string__f_43_43_2_f_0(Var_347, Var_346);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ProcNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_String Var_87;
              MR_Word PredOrFunc_118 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word LNC_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 3))));
              MR_Integer Line_121;
              MR_Integer Counter_122;
              MR_String Var_309;
              MR_String Var_310;
              MR_String Var_318;
              MR_String Var_319;
              MR_String Var_326;
              MR_String Var_328;
              MR_String Var_329;

              Var_87 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_118);
              Var_309 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_87);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "loop_inv", Var_309);
              Line_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_119, (MR_Integer) 0))));
              Counter_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_119, (MR_Integer) 1))));
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_16, &Var_310);
              Var_318 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_310);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_122, &Var_319);
              Var_326 = mercury__string__f_43_43_2_f_0(Var_319, Var_318);
              Var_328 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_326);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_121, &Var_329);
              Suffix_15 = mercury__string__f_43_43_2_f_0(Var_329, Var_328);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ProcNum_173 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_String Var_179;
              MR_Word PredOrFunc_189 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word LNC_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 3))));
              MR_Integer Line_192;
              MR_Integer Counter_193;
              MR_String Var_255;
              MR_String Var_256;
              MR_String Var_264;
              MR_String Var_265;
              MR_String Var_272;
              MR_String Var_274;
              MR_String Var_275;

              Var_179 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_189);
              Var_255 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_179);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "tupling", Var_255);
              Line_192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_190, (MR_Integer) 0))));
              Counter_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_190, (MR_Integer) 1))));
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_173, &Var_256);
              Var_264 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_256);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_193, &Var_265);
              Var_272 = mercury__string__f_43_43_2_f_0(Var_265, Var_264);
              Var_274 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_272);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_192, &Var_275);
              Suffix_15 = mercury__string__f_43_43_2_f_0(Var_275, Var_274);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ProcNum_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_String Var_200;
              MR_Word PredOrFunc_210 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word LNC_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 3))));
              MR_Integer Line_213;
              MR_Integer Counter_214;
              MR_String Var_226;
              MR_String Var_227;
              MR_String Var_235;
              MR_String Var_236;
              MR_String Var_243;
              MR_String Var_245;
              MR_String Var_246;

              Var_200 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_210);
              Var_226 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_200);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "untupling", Var_226);
              Line_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_211, (MR_Integer) 0))));
              Counter_214 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_211, (MR_Integer) 1))));
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_194, &Var_227);
              Var_235 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_227);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_214, &Var_236);
              Var_243 = mercury__string__f_43_43_2_f_0(Var_236, Var_235);
              Var_245 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_243);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_213, &Var_246);
              Suffix_15 = mercury__string__f_43_43_2_f_0(Var_246, Var_245);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgNums_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 3))));
              MR_String Var_73;
              MR_String Var_78;
              MR_Word PredOrFunc_123 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer ProcNum_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_String Var_355;
              MR_String Var_363;

              Var_73 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_123);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "Parallel__", Var_73);
              Var_78 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_17);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_124, &Var_355);
              Var_363 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_355);
              Suffix_15 = mercury__string__f_43_43_2_f_0(Var_78, Var_363);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Distance_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_String Var_64;
              MR_Word PredOrFunc_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);

              Var_64 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_125);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor__", Var_64);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Distance_18, &Suffix_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String Var_55;
              MR_Word PredOrFunc_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer ProcNum_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_String Var_293;

              Var_55 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_126);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "LoopControl__", Var_55);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_127, &Var_293);
              Suffix_15 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_293);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String Var_43;
              MR_String Var_50;
              MR_Word PredOrFunc_128 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer ProcNum_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_Word ArgNums_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 3))));
              MR_String Var_284;
              MR_String Var_285;

              Var_43 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_128);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "ctgc__", Var_43);
              Var_50 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_130);
              Var_284 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_50);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_129, &Var_285);
              Suffix_15 = mercury__string__f_43_43_2_f_0(Var_285, Var_284);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word MaybePredOrFunc_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))));
              MR_Word VarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_Word TypeSubst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 3))));
              MR_String PredOrFuncStr_22;

              if ((MaybePredOrFunc_19 == (MR_Word) ((MR_Unsigned) 0U)))
                PredOrFuncStr_22 = (MR_String) "pred_or_func";
              else
              {
                MR_Word PredOrFunc_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_19, (MR_Integer) 0))));

                PredOrFuncStr_22 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_131);
              }
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "TypeSpecOf__", PredOrFuncStr_22);
              Suffix_15 = parse_tree__pred_name__type_subst_to_string_2_f_0(VarSet_20, TypeSubst_21);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String Var_27;
              MR_String Var_32;
              MR_Word PredOrFunc_134 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer ProcNum_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 2))));
              MR_Word ArgNums_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_7, (MR_Integer) 3))));
              MR_String Var_216;
              MR_String Var_224;

              Var_27 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_134);
              Prefix_12 = mercury__string__f_43_43_2_f_0((MR_String) "UnusedArgs__", Var_27);
              Var_32 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_136);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_135, &Var_216);
              Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_216);
              Suffix_15 = mercury__string__f_43_43_2_f_0(Var_32, Var_224);
            }
            break;
        }
        break;
    }
    Var_401 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_15);
    Var_402 = mercury__string__f_43_43_2_f_0(OrigName_6, Var_401);
    Var_404 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_402);
    TransformedName_23 = mercury__string__f_43_43_2_f_0(Prefix_12, Var_404);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TransformedSymName_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TransformedName_23));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0(
  MR_Word Ints_3)
{
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
}

static MR_Box MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_Str_7;

    conv0_Str_7 = parse_tree__pred_name__type_var_subst_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Str_7));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word TypeSubst_5)
{
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
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__pred_name____Compare____line_number_and_counter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__pred_name____Unify____transform_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__pred_name____Compare____transform_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
