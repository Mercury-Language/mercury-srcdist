/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version 20.01.1-beta-2020-02-11
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


// :- module parse_tree.prog_util.
// :- implementation.

/*
INIT mercury__parse_tree__prog_util__init
ENDINIT
*/

#include "parse_tree.prog_util.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2];

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1];

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2;

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1];

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3;

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4;

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2];

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5;

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1];

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6;

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4];

static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4];

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7];

static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7];

static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Catch0_7,
  MR_Word * Catch_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word TMV0_7,
  MR_Word * TMV_8);

static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
  MR_Word Context_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_String BaseName_7,
  MR_Integer Cur_8,
  MR_Integer Max_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word MaybeVar0_7,
  MR_Word * MaybeVar_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Var0_7,
  MR_Word * Var_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
  MR_Word OldVar_1,
  MR_Word NewVar_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word PODVar0_7,
  MR_Word * PODVar_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Comp0_7,
  MR_Word * Comp_8);

static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * Result_5);

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
  MR_Word Var_14,
  MR_Word List_5,
  MR_String * String_6);

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strings_0_3,
  MR_Word * STATE_VARIABLE_Strings_4);

static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__279__1_3_p_0(
  MR_Word VarSet_18,
  MR_Word LambdaHeadVar__1_37,
  MR_String * LambdaHeadVar__2_38);

static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
  MR_Word List_5,
  MR_String * String_6);

static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strings_0_3,
  MR_Word * STATE_VARIABLE_Strings_4);

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_4[4][7];




static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_util_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_util_scalar_common_2[0]))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_4[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_util____Unify____maybe_modes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____maybe_modes_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "maybe_modes",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0 = {
  (MR_String) "newpred_counter",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1 = {
  (MR_String) "newpred_type_subst",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2 = {
  (MR_String) "newpred_unused_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3 = {
  (MR_String) "newpred_parallel_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4 = {
  (MR_String) "newpred_parallel_loop_control",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5 = {
  (MR_String) "newpred_structure_reuse",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6 = {
  (MR_String) "newpred_distance_granularity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4
};

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6
};

static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2
};

static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_new_pred_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_util____Unify____new_pred_id_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____new_pred_id_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "new_pred_id",
  {     parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0 },
  {     parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0 },
  (MR_Integer) 7,
  UINT16_C(4),
  parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0
};

void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_133 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_134 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_133 == CastY_134);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
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
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  succeeded = (Var_145 < ArgY1_5);
                  if (succeeded)
                  {
                    SubResult1_6 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_145 > ArgY1_5);
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
                    succeeded = (Var_144 < ArgY2_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_144 > ArgY2_8);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_34;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[5]), &SubResult1_34, ((MR_Box) (Var_151)), ((MR_Box) (ArgY1_33)));
                  succeeded = (SubResult1_34 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_34;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_150)), ((MR_Box) (ArgY2_36)));
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
                MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
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
                          MR_Word ArgY1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_152)), ((MR_Box) (ArgY1_59)));
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
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
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
                          MR_Word ArgY1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_147)), ((MR_Box) (ArgY1_77)));
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Integer ArgY1_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_111;

                          succeeded = (Var_149 < ArgY1_110);
                          if (succeeded)
                          {
                            SubResult1_111 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_149 > ArgY1_110);
                            if (succeeded)
                            {
                              SubResult1_111 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_111 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_111;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_148)), ((MR_Box) (ArgY2_113)));
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Integer ArgY1_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          succeeded = (Var_146 < ArgY1_132);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_146 > ArgY1_132);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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
parse_tree__prog_util____Unify____new_pred_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_16 == CastX_15);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;
            MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_27_27;
            MR_Word TypeInfo_28_28;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_27_27 = (MR_Word) (&parse_tree__prog_util_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&parse_tree__prog_util_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_29_29;
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_29_29 = (MR_Word) (&parse_tree__prog_util_scalar_common_1[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_25_25;
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_25_25 = (MR_Word) (&parse_tree__prog_util_scalar_common_1[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_26_26;
                MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_18;
                MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_17 == ArgY1_18);
                  if (succeeded)
                  {
                    TypeInfo_26_26 = (MR_Word) (&parse_tree__prog_util_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_19)), ((MR_Box) (ArgY2_20)));
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer ArgX1_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_21 == ArgY1_22);
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
parse_tree__prog_util____Compare____maybe_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Catch0_7,
  MR_Word * Catch_8)
{
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch0_7, (MR_Integer) 0))));
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch0_7, (MR_Integer) 1))));
    MR_Word Term_11;
    MR_Word Goal_12;

    mercury__term__rename_var_in_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, Term0_9, &Term_11);
    parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Goal0_10, &Goal_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Catch_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_12));
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word TMV0_7,
  MR_Word * TMV_8)
{
  {
    MR_bool succeeded;
    MR_String MutableName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), TMV0_7, (MR_Integer) 0))));
    MR_Word StateVar0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TMV0_7, (MR_Integer) 1))));
    MR_Word StateVar_11;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (StateVar0_10)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      StateVar_11 = NewVar_6;
    else
      StateVar_11 = StateVar0_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TMV_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MutableName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StateVar_11));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_f_0(
  MR_Word Context_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Context_1));
      }
    else
    {
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(Context_1, Goal_6, Goals_7);
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
  MR_Word Context_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__2_2;
    else
    {
      MR_Word Goal1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_11;

      Var_11 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(Context_1, Goal1_9, Goals_10);
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), HeadVar__4_4, 0) = ((MR_Box) (Context_1));
        MR_hl_field(MR_mktag(2), HeadVar__4_4, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(2), HeadVar__4_4, 2) = ((MR_Box) (Var_11));
      }
    }
    return HeadVar__4_4;
  }
}

void MR_CALL 
parse_tree__prog_util__get_new_tvars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word STATE_VARIABLE_TVarSet_0_3,
  MR_Word * STATE_VARIABLE_TVarSet_4,
  MR_Word STATE_VARIABLE_TVarNameMap_0_5,
  MR_Word * STATE_VARIABLE_TVarNameMap_6,
  MR_Word STATE_VARIABLE_TVarRenaming_0_7,
  MR_Word * STATE_VARIABLE_TVarRenaming_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TVarRenaming_8 = STATE_VARIABLE_TVarRenaming_0_7;
      *STATE_VARIABLE_TVarNameMap_6 = STATE_VARIABLE_TVarNameMap_0_5;
      *STATE_VARIABLE_TVarSet_4 = STATE_VARIABLE_TVarSet_0_3;
    }
    else
    {
      MR_Word TVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TVarRenaming_34_34;
      MR_Word STATE_VARIABLE_TVarSet_36_36;
      MR_Word STATE_VARIABLE_TVarNameMap_37_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TVarSet_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TVarNameMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_TVarRenaming_0_7;

      succeeded = mercury__map__contains_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (TVar_19)));
      if (succeeded)
      {
        STATE_VARIABLE_TVarRenaming_34_34 = STATE_VARIABLE_TVarRenaming_0_7;
        STATE_VARIABLE_TVarNameMap_37_37 = STATE_VARIABLE_TVarNameMap_0_5;
        STATE_VARIABLE_TVarSet_36_36 = STATE_VARIABLE_TVarSet_0_3;
      }
      else
      {
        MR_String TVarName_25;

        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, TVar_19, &TVarName_25);
        if (succeeded)
        {
          MR_Word TVarSetVar_26;
          MR_Box conv0_TVarSetVar_26;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (TVarName_25)), &conv0_TVarSetVar_26);
          if (succeeded)
          {
            TVarSetVar_26 = ((MR_Word) (conv0_TVarSetVar_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (TVar_19)), ((MR_Box) (TVarSetVar_26)), STATE_VARIABLE_TVarRenaming_0_7, &STATE_VARIABLE_TVarRenaming_34_34);
            STATE_VARIABLE_TVarNameMap_37_37 = STATE_VARIABLE_TVarNameMap_0_5;
            STATE_VARIABLE_TVarSet_36_36 = STATE_VARIABLE_TVarSet_0_3;
          }
          else
          {
            MR_Word NewTVar_27;
            MR_Word STATE_VARIABLE_TVarSet_35_35;

            mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &NewTVar_27, STATE_VARIABLE_TVarSet_0_3, &STATE_VARIABLE_TVarSet_35_35);
            mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NewTVar_27, TVarName_25, STATE_VARIABLE_TVarSet_35_35, &STATE_VARIABLE_TVarSet_36_36);
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (TVarName_25)), ((MR_Box) (NewTVar_27)), STATE_VARIABLE_TVarNameMap_0_5, &STATE_VARIABLE_TVarNameMap_37_37);
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (TVar_19)), ((MR_Box) (NewTVar_27)), STATE_VARIABLE_TVarRenaming_0_7, &STATE_VARIABLE_TVarRenaming_34_34);
          }
        }
        else
        {
          MR_Word NewTVar_44;

          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &NewTVar_44, STATE_VARIABLE_TVarSet_0_3, &STATE_VARIABLE_TVarSet_36_36);
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (TVar_19)), ((MR_Box) (NewTVar_44)), STATE_VARIABLE_TVarRenaming_0_7, &STATE_VARIABLE_TVarRenaming_34_34);
          STATE_VARIABLE_TVarNameMap_37_37 = STATE_VARIABLE_TVarNameMap_0_5;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TVars_20;
      next_value_of_STATE_VARIABLE_TVarSet_0_3 = STATE_VARIABLE_TVarSet_36_36;
      next_value_of_STATE_VARIABLE_TVarNameMap_0_5 = STATE_VARIABLE_TVarNameMap_37_37;
      next_value_of_STATE_VARIABLE_TVarRenaming_0_7 = STATE_VARIABLE_TVarRenaming_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TVarSet_0_3 = next_value_of_STATE_VARIABLE_TVarSet_0_3;
      STATE_VARIABLE_TVarNameMap_0_5 = next_value_of_STATE_VARIABLE_TVarNameMap_0_5;
      STATE_VARIABLE_TVarRenaming_0_7 = next_value_of_STATE_VARIABLE_TVarRenaming_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__prog_util__get_state_args_det_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Args0_5,
  MR_Word * Args_6,
  MR_Box * State0_7,
  MR_Box * State_8)
{
  {
    MR_bool succeeded;
    MR_Word ArgsPrime_9;
    MR_Box State0Prime_10;
    MR_Box StatePrime_11;
    MR_Word RevArgs0_19;
    MR_Word RevArgs_20;
    MR_Word Var_21;

    mercury__list__reverse_2_p_0(TypeInfo_for_T_14, Args0_5, &RevArgs0_19);
    succeeded = (RevArgs0_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      StatePrime_11 = (MR_hl_field(MR_mktag(1), RevArgs0_19, (MR_Integer) 0));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevArgs0_19, (MR_Integer) 1))));
      succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        State0Prime_10 = (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0));
        RevArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
        mercury__list__reverse_2_p_0(TypeInfo_for_T_14, RevArgs_20, &ArgsPrime_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      *Args_6 = ArgsPrime_9;
      *State0_7 = State0Prime_10;
      *State_8 = StatePrime_11;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4", (MR_String) "get_state_args failed");
        return;
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_util__get_state_args_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Args0_5,
  MR_Word * Args_6,
  MR_Box * State0_7,
  MR_Box * State_8)
{
  {
    MR_bool succeeded;
    MR_Word RevArgs0_9;
    MR_Word RevArgs_10;
    MR_Word Var_11;

    mercury__list__reverse_2_p_0(TypeInfo_for_T_12, Args0_5, &RevArgs0_9);
    succeeded = (RevArgs0_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *State_8 = (MR_hl_field(MR_mktag(1), RevArgs0_9, (MR_Integer) 0));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevArgs0_9, (MR_Integer) 1))));
      succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *State0_7 = (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0));
        RevArgs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
        mercury__list__reverse_2_p_0(TypeInfo_for_T_12, RevArgs_10, Args_6);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_util__pred_args_to_func_args_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word PredArgs_4,
  MR_Word * FuncArgs_5,
  MR_Box * FuncReturn_6)
{
  {
    MR_bool succeeded;
    MR_Word FuncArgsPrime_7;
    MR_Box FuncReturnPrime_8;

    succeeded = mercury__list__split_last_3_p_0(TypeInfo_for_T_11, PredArgs_4, &FuncArgsPrime_7, &FuncReturnPrime_8);
    if (succeeded)
    {
      *FuncArgs_5 = FuncArgsPrime_7;
      *FuncReturn_6 = FuncReturnPrime_8;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
        return;
      }
  }
}

void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_String BaseName_6,
  MR_Integer N_7,
  MR_Word * Vars_8,
  MR_Word VarSet0_9,
  MR_Word * VarSet_10)
{
  parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(TypeInfo_for_T_12, BaseName_6, (MR_Integer) 1, N_7, Vars_8, VarSet0_9, VarSet_10);
}

static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_String BaseName_7,
  MR_Integer Cur_8,
  MR_Integer Max_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16)
{
  {
    MR_bool succeeded = (Cur_8 > Max_9);

    if (succeeded)
    {
      *Vars_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarSet_16 = STATE_VARIABLE_VarSet_0_15;
    }
    else
    {
      MR_String VarName_12;
      MR_Word HeadVar_13;
      MR_Word TailVars_14;
      MR_String Var_17;
      MR_Word STATE_VARIABLE_VarSet_18_18;
      MR_Integer Var_19;

      Var_17 = mercury__string__int_to_string_1_f_0(Cur_8);
      VarName_12 = mercury__string__f_43_43_2_f_0(BaseName_7, Var_17);
      mercury__varset__new_named_var_4_p_0(TypeInfo_for_T_22, VarName_12, &HeadVar_13, STATE_VARIABLE_VarSet_0_15, &STATE_VARIABLE_VarSet_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) Cur_8 + (MR_Unsigned) 1);
      parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(TypeInfo_for_T_22, BaseName_7, Var_19, Max_9, &TailVars_14, STATE_VARIABLE_VarSet_18_18, STATE_VARIABLE_VarSet_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Vars_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVars_14));
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(
  MR_Word SymName0_3,
  MR_Word * SymName_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) SymName0_3)) == (MR_Integer) 1);
    MR_String Name_6;
    MR_Word Module_5;
    MR_Word Var_7;

    if (succeeded)
    {
      Module_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName0_3, (MR_Integer) 0))));
      Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName0_3, (MR_Integer) 1))));
      Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_5, Var_7);
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *SymName_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_6));
      }
    else
      *SymName_4 = SymName0_3;
  }
}

void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(
  MR_Word ConsId0_3,
  MR_Word * ConsId_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word Name0_5;
    MR_Integer Arity_6;
    MR_Word TypeCtor_7;

    if (succeeded)
    {
      Name0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 1))));
      Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 2))));
      TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 3))));
      {
        MR_Word Name_8;
        MR_String Name_12;
        MR_Word Module_11;
        MR_Word Var_13;

        succeeded = ((MR_tag((MR_Word) Name0_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Module_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name0_5, (MR_Integer) 0))));
          Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Name0_5, (MR_Integer) 1))));
          Var_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_11, Var_13);
        }
        if (succeeded)
          {
            Name_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Name_8, 0) = ((MR_Box) (Name_12));
          }
        else
          Name_8 = Name0_5;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_4 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_8));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_6));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_7));
        }
      }
    }
    else
      *ConsId_4 = ConsId0_3;
  }
}

void MR_CALL 
parse_tree__prog_util__strip_module_qualifier_from_sym_name_2_p_0(
  MR_Word SymName0_3,
  MR_Word * SymName_4)
{
  if (((MR_tag((MR_Word) SymName0_3)) == (MR_Integer) 1))
  {
    MR_String Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName0_3, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *SymName_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_6));
    }
  }
  else
    *SymName_4 = SymName0_3;
}

void MR_CALL 
parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(
  MR_Word ConsId0_3,
  MR_Word * ConsId_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word Name0_5;
    MR_Integer Arity_6;
    MR_Word TypeCtor_7;

    if (succeeded)
    {
      Name0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 1))));
      Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 2))));
      TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_3, (MR_Integer) 3))));
      {
        MR_Word Name_8;

        if (((MR_tag((MR_Word) Name0_5)) == (MR_Integer) 1))
        {
          MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Name0_5, (MR_Integer) 1))));

          {
            Name_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Name_8, 0) = ((MR_Box) (Name_12));
          }
        }
        else
          Name_8 = Name0_5;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_4 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_8));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_6));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_7));
        }
      }
    }
    else
      *ConsId_4 = ConsId0_3;
  }
}

void MR_CALL 
parse_tree__prog_util__det_make_functor_cons_id_3_p_0(
  MR_Word Functor_4,
  MR_Integer Arity_5,
  MR_Word * ConsId_6)
{
  {
    MR_bool succeeded;
    MR_Word ConsIdPrime_7;

    succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(Functor_4, Arity_5, &ConsIdPrime_7);
    if (succeeded)
      *ConsId_6 = ConsIdPrime_7;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_util.det_make_functor_cons_id\'/3", (MR_String) "make_functor_cons_id failed");
        return;
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_util__make_functor_cons_id_3_p_0(
  MR_Word Functor_4,
  MR_Integer Arity_5,
  MR_Word * ConsId_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Functor_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 0))));
          MR_Word Var_24;
          MR_Word Var_25;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Name_7));
          }
          Var_25 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *ConsId_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_5));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_25));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Base_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_4, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word Integer_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Functor_4, (MR_Integer) 1))));
          MR_Word Signedness_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_4, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          MR_Word Size_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Functor_4, (MR_Integer) 2))) & (MR_Integer) 7);

          switch (Signedness_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (Size_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    int16_t Int16_14;

                    succeeded = mercury__integer__to_int16_2_p_0(Integer_9, &Int16_14);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int16_14));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    int32_t Int32_15;

                    succeeded = mercury__integer__to_int32_2_p_0(Integer_9, &Int32_15);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int32_15));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    int64_t Int64_16;

                    succeeded = mercury__integer__to_int64_2_p_0(Integer_9, &Int64_16);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                        MR_hl_field(MR_mktag(3), base, 1) = MR_box_int64(Int64_16);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int8_t Int8_13;

                    succeeded = mercury__integer__to_int8_2_p_0(Integer_9, &Int8_13);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int8_13));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_12;

                    succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Base_8, Integer_9, &Int_12);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Int_12));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (Size_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    uint16_t UInt16_19;

                    succeeded = mercury__integer__to_uint16_2_p_0(Integer_9, &UInt16_19);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt16_19));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    uint32_t UInt32_20;

                    succeeded = mercury__integer__to_uint32_2_p_0(Integer_9, &UInt32_20);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt32_20));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    uint64_t UInt64_21;

                    succeeded = mercury__integer__to_uint64_2_p_0(Integer_9, &UInt64_21);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                        MR_hl_field(MR_mktag(3), base, 1) = MR_box_uint64(UInt64_21);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    uint8_t UInt8_18;

                    succeeded = mercury__integer__to_uint8_2_p_0(Integer_9, &UInt8_18);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt8_18));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Unsigned UInt_17;

                    succeeded = mercury__integer__to_uint_2_p_0(Integer_9, &UInt_17);
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UInt_17));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String String_22 = ((MR_String) ((MR_hl_field(MR_mktag(2), Functor_4, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConsId_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (String_22));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float Float_23 = MR_unbox_float((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(Float_23);
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Name_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_26));
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_util__source_integer_to_int_3_p_0(
  MR_Word Base_4,
  MR_Word Integer_5,
  MR_Integer * Int_6)
{
  {
    MR_bool succeeded;

    switch (Base_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        succeeded = mercury__integer__to_int_2_p_0(Integer_5, Int_6);
        break;
      case (MR_Integer) 3:
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word Var_8;
          MR_Integer Var_9;

          Var_9 = mercury__int__max_int_0_f_0();
          Var_8 = mercury__integer__integer_1_f_0(Var_9);
          succeeded = mercury__integer__f_greater_than_2_p_0(Integer_5, Var_8);
          if (succeeded)
          {
            MR_Word NegInteger_7;
            MR_Word Var_10;
            MR_Word Var_11;
            MR_Integer Var_12;
            MR_Word Var_13;
            MR_Integer Var_14;
            MR_Integer Var_15;

            Var_12 = mercury__int__min_int_0_f_0();
            Var_11 = mercury__integer__integer_1_f_0(Var_12);
            Var_10 = mercury__integer__f_plus_2_f_0(Integer_5, Var_11);
            Var_14 = mercury__int__min_int_0_f_0();
            Var_13 = mercury__integer__integer_1_f_0(Var_14);
            NegInteger_7 = mercury__integer__f_plus_2_f_0(Var_10, Var_13);
            succeeded = mercury__integer__to_int_2_p_0(NegInteger_7, Int_6);
            if (succeeded)
            {
              Var_15 = (MR_Integer) 0;
              succeeded = (*Int_6 < Var_15);
            }
          }
          else
            succeeded = mercury__integer__to_int_2_p_0(Integer_5, Int_6);
        }
        break;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_util__cons_id_maybe_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Arity_4));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Arity_6));
              }
            }
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 12:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 13:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 14:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 15:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 16:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 17:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 18:
            HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]));
            break;
          case (MR_Integer) 19:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 20:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 21:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 22:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 23:
            {
              MR_Word ConsId_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__1_1 = ConsId_48;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
        }
        break;
    }
    return HeadVar__2_2;
    break;
  }
}

MR_Integer MR_CALL 
parse_tree__prog_util__cons_id_arity_1_f_0(
  MR_Word ConsId_3)
{
  while (MR_TRUE)
  {
    MR_Integer Arity_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) ConsId_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
            break;
          case (MR_Integer) 2:
            Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 2))));
            break;
          case (MR_Integer) 3:
            Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 1))));
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
            Arity_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 23:
            {
              MR_Word SubConsId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 2))));
              MR_Word next_value_of_ConsId_3 = SubConsId_8;

              // direct tailcall eliminated
              ;
              ConsId_3 = next_value_of_ConsId_3;
              continue;
            }
            break;
        }
        break;
    }
    return Arity_4;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Context_43;

              mercury__term__context_init_1_p_0(&Context_43);
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_35, SymName_30, HeadVar__2_2, Context_43, Term_3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_47;

              mercury__term__context_init_1_p_0(&Context_47);
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_35, (MR_Word) (&parse_tree__prog_util_scalar_common_3[2]), HeadVar__2_2, Context_47, Term_3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_4;
              MR_Word Context_6;

              succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Int_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                mercury__term__context_init_1_p_0(&Context_6);
                *Term_3 = mercury__term__int_to_decimal_term_2_f_0(TypeInfo_for_T_35, Int_4, Context_6);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_7;
              MR_Word Context_9;

              succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                UInt_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                mercury__term__context_init_1_p_0(&Context_9);
                *Term_3 = mercury__term__uint_to_decimal_term_2_f_0(TypeInfo_for_T_35, UInt_7, Context_9);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_10;
              MR_Word Context_12;
              MR_Word Var_13;
              MR_Word Var_14;

              succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Float_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                mercury__term__context_init_1_p_0(&Context_12);
                Var_14 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_13, 1) = MR_box_float(Float_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *Term_3 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char Char_15;
              MR_Word SymName_17;
              MR_String Var_18;
              MR_Word Var_19;
              MR_Word Context_39;

              succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Char_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                Var_18 = mercury__string__from_char_1_f_0(Char_15);
                Var_19 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  SymName_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SymName_17, 0) = ((MR_Box) (Var_18));
                }
                mercury__term__context_init_1_p_0(&Context_39);
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_35, SymName_17, Var_19, Context_39, Term_3);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String String_20;
              MR_Word Context_22;
              MR_Word Var_23;
              MR_Word Var_24;

              succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                String_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                mercury__term__context_init_1_p_0(&Context_22);
                Var_24 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (String_20));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *Term_3 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_22));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Catch_8;

    parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Catch_8);
    *wrapper_arg_2 = ((MR_Box) (conv3_Catch_8));
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_TMV_8;

    parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_TMV_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_TMV_8));
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_8;

    parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_8));
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Var_8;

    parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Var_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Var_8));
  }
}

void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  switch (MR_tag((MR_Word) Goal0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TermA0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
        MR_Word TermB0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 2))));
        MR_Word TermA_75;
        MR_Word TermB_76;
        MR_Word Context_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
        MR_Word Purity_177 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 3))) & (MR_Integer) 3);

        mercury__term__rename_var_in_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, TermA0_73, &TermA_75);
        mercury__term__rename_var_in_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, TermB0_74, &TermB_76);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_176));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TermA_75));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TermB_76));
          MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Purity_177));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_7, (MR_Integer) 1))));
        MR_Word Context_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_7, (MR_Integer) 0))));
        MR_Word Purity_173 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal0_7, (MR_Integer) 3))) & (MR_Integer) 3);
        MR_Word Terms0_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_7, (MR_Integer) 2))));
        MR_Word Terms_175;

        mercury__term__rename_var_in_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, Terms0_174, &Terms_175);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Goal_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_172));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SymName_72));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Terms_175));
          MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) (Purity_173));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal0_7, (MR_Integer) 0))));
        MR_Word SubGoalA0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal0_7, (MR_Integer) 1))));
        MR_Word SubGoalB0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal0_7, (MR_Integer) 2))));
        MR_Word SubGoalA_13;
        MR_Word SubGoalB_14;

        parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_11, &SubGoalA_13);
        parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_12, &SubGoalB_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Goal_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (SubGoalA_13));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (SubGoalB_14));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 4:
          *Goal_8 = Goal0_7;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Cond0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word Cond_68;
            MR_Word Context_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word Vars0_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word Vars_164;
            MR_Word StateVars0_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word StateVars_166;
            MR_Word Then0_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 5))));
            MR_Word Then_168;
            MR_Word Else0_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 6))));
            MR_Word Else_170;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_163, &Vars_164);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_165, &StateVars_166);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Cond0_67, &Cond_68);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Then0_167, &Then_168);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Else0_169, &Else_170);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_162));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Vars_164));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StateVars_166));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cond_68));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Then_168));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Else_170));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Context_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoalA0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word SubGoalB0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoalA_92;
            MR_Word SubGoalB_93;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_90, &SubGoalA_92);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_91, &SubGoalB_93);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_89));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoalA_92));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoalB_93));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word SubGoal_16;
            MR_Word Context_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_15, &SubGoal_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_94));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_16));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Context_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoalA0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word SubGoalB0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoalA_87;
            MR_Word SubGoalB_88;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_85, &SubGoalA_87);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_86, &SubGoalB_88);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_84));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoalA_87));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoalB_88));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word Vars_20;
            MR_Word Context_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word SubGoal0_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word SubGoal_97;
            MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1)));

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_19, &Vars_20);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_96, &SubGoal_97);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (packed_word_3);
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_95));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Vars_20));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SubGoal_97));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Purity_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Context_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoal_100;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_99, &SubGoal_100);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_98));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Purity_21));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoal_100));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word StateVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word DotSVars0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word ColonSVars0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 5))));
            MR_Word StateVars_25;
            MR_Word DotSVars_26;
            MR_Word ColonSVars_27;
            MR_Word Context_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 6))));
            MR_Word SubGoal_103;
            MR_Word Vars0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word Vars_105;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_104, &Vars_105);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_22, &StateVars_25);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, DotSVars0_23, &DotSVars_26);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, ColonSVars0_24, &ColonSVars_27);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_102, &SubGoal_103);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_101));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Vars_105));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StateVars_25));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (DotSVars_26));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ColonSVars_27));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (SubGoal_103));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Context_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 6))));
            MR_Word SubGoal_108;
            MR_Word Vars0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word Vars_110;
            MR_Word StateVars0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word DotSVars0_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word ColonSVars0_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 5))));
            MR_Word StateVars_114;
            MR_Word DotSVars_115;
            MR_Word ColonSVars_116;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_109, &Vars_110);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_111, &StateVars_114);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, DotSVars0_112, &DotSVars_115);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, ColonSVars0_113, &ColonSVars_116);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_107, &SubGoal_108);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_106));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Vars_110));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StateVars_114));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (DotSVars_115));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ColonSVars_116));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (SubGoal_108));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Context_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 6))));
            MR_Word SubGoal_119;
            MR_Word Vars0_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word Vars_121;
            MR_Word StateVars0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word DotSVars0_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word ColonSVars0_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 5))));
            MR_Word StateVars_125;
            MR_Word DotSVars_126;
            MR_Word ColonSVars_127;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_120, &Vars_121);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_122, &StateVars_125);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, DotSVars0_123, &DotSVars_126);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, ColonSVars0_124, &ColonSVars_127);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_118, &SubGoal_119);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_117));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Vars_121));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StateVars_125));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (DotSVars_126));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ColonSVars_127));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (SubGoal_119));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Detism_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word Context_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoal_133;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_132, &SubGoal_133);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_131));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Detism_30));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoal_133));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Var0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word Var_32;
            MR_Word Context_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoal_136;

            parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(OldVar_5, NewVar_6, Var0_31, &Var_32);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_135, &SubGoal_136);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_134));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoal_136));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Context_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word SubGoal_139;
            MR_Word Detism_140 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Var0_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word Var_142;

            parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(OldVar_5, NewVar_6, Var0_141, &Var_142);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_138, &SubGoal_139);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_137));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_142));
              MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) (Detism_140));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SubGoal_139));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word HeadWarnings_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word TailWarnings_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word Context_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word SubGoal_130;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_129, &SubGoal_130);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_128));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (HeadWarnings_28));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TailWarnings_29));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SubGoal_130));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CompileTime_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word RunTime_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word MaybeIO0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word Mutables0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 5))));
            MR_Word MaybeIO_37;
            MR_Word Mutables_40;
            MR_Word Var_82;
            MR_Word Context_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 6))));
            MR_Word SubGoal_145;

            if ((MaybeIO0_35 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeIO_37 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word IOStateVar0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_35, (MR_Integer) 0))));
              MR_Word IOStateVar_39;

              parse_tree__prog_util__rename_in_var_4_p_0(OldVar_5, NewVar_6, IOStateVar0_38, &IOStateVar_39);
              {
                MaybeIO_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeIO_37, 0) = ((MR_Box) (IOStateVar_39));
              }
            }
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_3));
              MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (OldVar_5));
              MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (NewVar_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), Var_82, Mutables0_36, &Mutables_40);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_144, &SubGoal_145);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_143));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CompileTime_33));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (RunTime_34));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MaybeIO_37));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Mutables_40));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (SubGoal_145));
            }
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word InVars0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word OutVars0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word MaybeVars0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word MainGoal0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 5))));
            MR_Word OrElseGoal0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 6))));
            MR_Word InVars_46;
            MR_Word OutVars_47;
            MR_Word MaybeVars_48;
            MR_Word MainGoal_51;
            MR_Word OrElseGoal_52;
            MR_Word Var_81;
            MR_Word Context_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));

            parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(OldVar_5, NewVar_6, InVars0_41, &InVars_46);
            parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(OldVar_5, NewVar_6, OutVars0_42, &OutVars_47);
            if ((MaybeVars0_43 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeVars_48 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word TransVars0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars0_43, (MR_Integer) 0))));
              MR_Word TransVars_50;
              MR_Word Var_80;

              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (OldVar_5));
                MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (NewVar_6));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), Var_80, TransVars0_49, &TransVars_50);
              {
                MaybeVars_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeVars_48, 0) = ((MR_Box) (TransVars_50));
              }
            }
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, MainGoal0_44, &MainGoal_51);
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_2));
              MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (OldVar_5));
              MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (NewVar_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_81, OrElseGoal0_45, &OrElseGoal_52);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_146));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InVars_46));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (OutVars_47));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MaybeVars_48));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MainGoal_51));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (OrElseGoal_52));
            }
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word Then0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 4))));
            MR_Word MaybeElse0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 5))));
            MR_Word Catches0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 6))));
            MR_Word MaybeCatchAny0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 7))));
            MR_Word Then_57;
            MR_Word MaybeElse_60;
            MR_Word Catches_61;
            MR_Word MaybeCatchAny_66;
            MR_Word Var_77;
            MR_Word Context_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoal_149;
            MR_Word MaybeIO0_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word MaybeIO_151;

            parse_tree__prog_util__rename_in_maybe_var_4_p_0(OldVar_5, NewVar_6, MaybeIO0_150, &MaybeIO_151);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_148, &SubGoal_149);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Then0_53, &Then_57);
            if ((MaybeElse0_54 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeElse_60 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Else0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse0_54, (MR_Integer) 0))));
              MR_Word Else_59;

              parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Else0_58, &Else_59);
              {
                MaybeElse_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeElse_60, 0) = ((MR_Box) (Else_59));
              }
            }
            {
              Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
              MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_4));
              MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (OldVar_5));
              MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (NewVar_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), Var_77, Catches0_55, &Catches_61);
            if ((MaybeCatchAny0_56 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeCatchAny_66 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word CatchAnyVar0_62;
              MR_Word CatchAnyGoal0_63;
              MR_Word CatchAnyVar_64;
              MR_Word CatchAnyGoal_65;
              MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny0_56, (MR_Integer) 0))));
              MR_Word Var_79;

              CatchAnyVar0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))));
              CatchAnyGoal0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 1))));
              parse_tree__prog_util__rename_in_var_4_p_0(OldVar_5, NewVar_6, CatchAnyVar0_62, &CatchAnyVar_64);
              parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, CatchAnyGoal0_63, &CatchAnyGoal_65);
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (CatchAnyVar_64));
                MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (CatchAnyGoal_65));
              }
              {
                MaybeCatchAny_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCatchAny_66, 0) = ((MR_Box) (Var_79));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_147));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeIO_151));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoal_149));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Then_57));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MaybeElse_60));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Catches_61));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (MaybeCatchAny_66));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word Context_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoalA0_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word SubGoalB0_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoalA_155;
            MR_Word SubGoalB_156;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_153, &SubGoalA_155);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_154, &SubGoalB_156);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_152));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoalA_155));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoalB_156));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word Context_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));
            MR_Word SubGoalA0_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word SubGoalB0_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word SubGoalA_160;
            MR_Word SubGoalB_161;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_158, &SubGoalA_160);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_159, &SubGoalB_161);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_157));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoalA_160));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubGoalB_161));
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_String Name_69 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 2))));
            MR_Word Terms0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 3))));
            MR_Word Terms_71;
            MR_Word Context_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0_7, (MR_Integer) 1))));

            mercury__term__rename_var_in_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, Terms0_70, &Terms_71);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Context_171));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Name_69));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Terms_71));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word MaybeVar0_7,
  MR_Word * MaybeVar_8)
{
  {
    MR_bool succeeded;

    if ((MaybeVar0_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeVar_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVar0_7, (MR_Integer) 0))));
      MR_Word Var_10;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (Var0_9)), ((MR_Box) (OldVar_5)));
      if (succeeded)
        Var_10 = NewVar_6;
      else
        Var_10 = Var0_9;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVar_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Var0_7,
  MR_Word * Var_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (Var0_7)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      *Var_8 = NewVar_6;
    else
      *Var_8 = Var0_7;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
  MR_Word OldVar_1,
  MR_Word NewVar_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Vars0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Vars_12;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (Var0_9)), ((MR_Box) (OldVar_1)));
      if (succeeded)
        Var_11 = NewVar_2;
      else
        Var_11 = Var0_9;
      parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_1, NewVar_2, Vars0_10, &Vars_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_12));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word PODVar0_7,
  MR_Word * PODVar_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) PODVar0_7)) == (MR_Integer) 1))
    {
      MR_Word DotVar0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PODVar0_7, (MR_Integer) 0))));
      MR_Word DotVar_12;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (DotVar0_11)), ((MR_Box) (OldVar_5)));
      if (succeeded)
        DotVar_12 = NewVar_6;
      else
        DotVar_12 = DotVar0_11;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *PODVar_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DotVar_12));
      }
    }
    else
    {
      MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PODVar0_7, (MR_Integer) 0))));
      MR_Word Var_10;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (Var0_9)), ((MR_Box) (OldVar_5)));
      if (succeeded)
        Var_10 = NewVar_6;
      else
        Var_10 = Var0_9;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *PODVar_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Comp0_7,
  MR_Word * Comp_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Comp0_7)) == (MR_Integer) 0))
    {
      MR_Word SVar0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Comp0_7, (MR_Integer) 0))));
      MR_Word SVar_10;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (SVar0_9)), ((MR_Box) (OldVar_5)));
      if (succeeded)
        SVar_10 = NewVar_6;
      else
        SVar_10 = SVar0_9;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Comp_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SVar_10));
      }
    }
    else
    {
      MR_Word IVar0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Comp0_7, (MR_Integer) 0))));
      MR_Word OVar0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Comp0_7, (MR_Integer) 1))));
      MR_Word IVar_13;
      MR_Word OVar_14;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (IVar0_11)), ((MR_Box) (OldVar_5)));
      if (succeeded)
        IVar_13 = NewVar_6;
      else
        IVar_13 = IVar0_11;
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (OVar0_12)), ((MR_Box) (OldVar_5)));
      if (succeeded)
        OVar_14 = NewVar_6;
      else
        OVar_14 = OVar0_12;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Comp_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IVar_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OVar_14));
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_util__split_type_and_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * T_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word M_6;

    *T_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    M_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (M_6));
    }
  }
  else
  {
    *T_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
parse_tree__prog_util__split_types_and_modes_3_p_0(
  MR_Word TypesAndModes_4,
  MR_Word * Types_5,
  MR_Word * MaybeModes_6)
{
  {
    MR_Word Modes_7;
    MR_Word Result_8;

    parse_tree__prog_util__split_types_and_modes_2_5_p_0(TypesAndModes_4, (MR_Integer) 1, Types_5, &Modes_7, &Result_8);
    switch (Result_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeModes_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModes_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Modes_7));
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * Result_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_5 = HeadVar__2_2;
  }
  else
  {
    MR_Word TM_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TMs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word T_10;
    MR_Word Ts_11;
    MR_Word M_12;
    MR_Word Ms_13;
    MR_Word Result1_15;

    if (((MR_tag((MR_Word) TM_7)) == (MR_Integer) 1))
    {
      T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TM_7, (MR_Integer) 0))));
      M_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TM_7, (MR_Integer) 1))));
      Result1_15 = HeadVar__2_2;
    }
    else
    {
      T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TM_7, (MR_Integer) 0))));
      M_12 = (MR_Word) (&parse_tree__prog_util_scalar_common_1[8]);
      Result1_15 = (MR_Integer) 0;
    }
    parse_tree__prog_util__split_types_and_modes_2_5_p_0(TMs_8, Result1_15, &Ts_11, &Ms_13, Result_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (T_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ts_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (M_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ms_13));
    }
  }
}

void MR_CALL 
parse_tree__prog_util__make_pred_name_with_context_7_p_0(
  MR_Word ModuleName_8,
  MR_String Prefix_9,
  MR_Word PredOrFunc_10,
  MR_String PredName_11,
  MR_Integer Line_12,
  MR_Integer Counter_13,
  MR_Word * SymName_14)
{
  {
    MR_Word Var_15;
    MR_Word Var_16;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (PredOrFunc_10));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Line_12));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Counter_13));
    }
    parse_tree__prog_util__make_pred_name_6_p_0(ModuleName_8, Prefix_9, Var_15, PredName_11, Var_16, SymName_14);
  }
}

void MR_CALL 
parse_tree__prog_util__make_pred_name_6_p_0(
  MR_Word ModuleName_7,
  MR_String Prefix_8,
  MR_Word MaybePredOrFunc_9,
  MR_String PredName_10,
  MR_Word NewPredId_11,
  MR_Word * SymName_12)
{
  {
    MR_String PFS_14;
    MR_String PredIdStr_17;
    MR_String Name_32;
    MR_String Var_94;
    MR_String Var_95;
    MR_String Var_97;
    MR_String Var_98;
    MR_String Var_100;

    if ((MaybePredOrFunc_9 == (MR_Word) ((MR_Unsigned) 0U)))
      PFS_14 = (MR_String) "pred_or_func";
    else
    {
      MR_Word PredOrFunc_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_9, (MR_Integer) 0))));

      PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_13);
    }
    switch (MR_tag((MR_Word) NewPredId_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PredIdStr_17 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Line_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), NewPredId_11, (MR_Integer) 0))));
          MR_Integer Counter_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), NewPredId_11, (MR_Integer) 1))));
          MR_String Var_77;
          MR_String Var_85;
          MR_String Var_86;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_3[1]), Counter_16, &Var_77);
          Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_77);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_3[1]), Line_15, &Var_86);
          PredIdStr_17 = mercury__string__f_43_43_2_f_0(Var_86, Var_85);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewPredId_11, (MR_Integer) 0))));
          MR_Word TypeSubst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewPredId_11, (MR_Integer) 1))));

          parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(VarSet_18, TypeSubst_19, &PredIdStr_17);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NewPredId_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewPredId_11, (MR_Integer) 1))));

              parse_tree__prog_util__list_to_string__ho1_3_p_0(Args_74, &PredIdStr_17);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewPredId_11, (MR_Integer) 1))));

              parse_tree__prog_util__list_to_string__ho1_3_p_0(Args_27, &PredIdStr_17);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ModeNum_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), NewPredId_11, (MR_Integer) 1))));
              MR_String ModeStr_29;
              MR_String ArgsStr_30;
              MR_String Var_34;
              MR_Word Args_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NewPredId_11, (MR_Integer) 2))));

              mercury__string__int_to_string_2_p_0(ModeNum_28, &ModeStr_29);
              parse_tree__prog_util__list_to_string__ho1_3_p_0(Args_63, &ArgsStr_30);
              Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", ArgsStr_30);
              PredIdStr_17 = mercury__string__f_43_43_2_f_0(ModeStr_29, Var_34);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Distance_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), NewPredId_11, (MR_Integer) 1))));

              mercury__string__int_to_string_2_p_0(Distance_31, &PredIdStr_17);
            }
            break;
        }
        break;
    }
    Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "__", PredIdStr_17);
    Var_95 = mercury__string__f_43_43_2_f_0(PredName_10, Var_94);
    Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_95);
    Var_98 = mercury__string__f_43_43_2_f_0(PFS_14, Var_97);
    Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_98);
    Name_32 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_100);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SymName_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_32));
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
  MR_Word Var_14,
  MR_Word List_5,
  MR_String * String_6)
{
  {
    MR_Word Strings_7;
    MR_Word Var_11;

    parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(Var_14, List_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[7])), &Strings_7);
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Strings_7));
    }
    mercury__string__append_list_2_p_0(Var_11, String_6);
  }
}

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
  MR_Word Var_23,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strings_0_3,
  MR_Word * STATE_VARIABLE_Strings_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Strings_4 = STATE_VARIABLE_Strings_0_3;
  else
  {
    MR_Word T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Ts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_String String_15;
    MR_Word STATE_VARIABLE_Strings_19_19;

    if ((Ts_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Strings_19_19 = STATE_VARIABLE_Strings_0_3;
    else
    {
      MR_Word STATE_VARIABLE_Strings_18_18;
      MR_Word T_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ts_11, (MR_Integer) 0))));
      MR_Word Ts_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ts_11, (MR_Integer) 1))));
      MR_String String_34;
      MR_Word STATE_VARIABLE_Strings_19_38;

      if ((Ts_30 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Strings_19_38 = STATE_VARIABLE_Strings_0_3;
      else
      {
        MR_Word STATE_VARIABLE_Strings_18_37;

        parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(Var_23, Ts_30, STATE_VARIABLE_Strings_0_3, &STATE_VARIABLE_Strings_18_37);
        {
          STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (STATE_VARIABLE_Strings_18_37));
        }
      }
      parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__279__1_3_p_0(Var_23, T_29, &String_34);
      {
        STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (String_34));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Strings_19_38));
      }
      {
        STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Strings_18_18));
      }
    }
    parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__279__1_3_p_0(Var_23, T_10, &String_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Strings_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Strings_19_19));
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__279__1_3_p_0(
  MR_Word VarSet_18,
  MR_Word LambdaHeadVar__1_37,
  MR_String * LambdaHeadVar__2_38)
{
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_37, (MR_Integer) 0))));
    MR_Word Type_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_37, (MR_Integer) 1))));
    MR_String VarName_25;
    MR_String TypeString_26;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_18, Var_23, &VarName_25);
    TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(VarSet_18, (MR_Integer) 0, Type_24);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (TypeString_26));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) " = "));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (VarName_25));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    mercury__string__append_list_2_p_0(Var_40, LambdaHeadVar__2_38);
  }
}

static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
  MR_Word List_5,
  MR_String * String_6)
{
  {
    MR_Word Strings_7;
    MR_Word Var_11;

    parse_tree__prog_util__list_to_string_2__ho4_4_p_0(List_5, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[7])), &Strings_7);
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Strings_7));
    }
    mercury__string__append_list_2_p_0(Var_11, String_6);
  }
}

static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Strings_0_3,
  MR_Word * STATE_VARIABLE_Strings_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Strings_4 = STATE_VARIABLE_Strings_0_3;
  else
  {
    MR_Integer T_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Ts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_String String_15;
    MR_Word STATE_VARIABLE_Strings_19_19;

    if ((Ts_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Strings_19_19 = STATE_VARIABLE_Strings_0_3;
    else
    {
      MR_Word STATE_VARIABLE_Strings_18_18;
      MR_Integer T_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ts_11, (MR_Integer) 0))));
      MR_Word Ts_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ts_11, (MR_Integer) 1))));
      MR_String String_34;
      MR_Word STATE_VARIABLE_Strings_19_38;

      if ((Ts_30 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Strings_19_38 = STATE_VARIABLE_Strings_0_3;
      else
      {
        MR_Word STATE_VARIABLE_Strings_18_37;

        parse_tree__prog_util__list_to_string_2__ho4_4_p_0(Ts_30, STATE_VARIABLE_Strings_0_3, &STATE_VARIABLE_Strings_18_37);
        {
          STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (STATE_VARIABLE_Strings_18_37));
        }
      }
      mercury__string__int_to_string_2_p_0(T_29, &String_34);
      {
        STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (String_34));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Strings_19_38));
      }
      {
        STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Strings_18_18));
      }
    }
    mercury__string__int_to_string_2_p_0(T_10, &String_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Strings_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Strings_19_19));
    }
  }
}

void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_1(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer Arity_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Arity_3 - (MR_Unsigned) 1);
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = Arity_3;
      break;
  }
}

void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * Arity_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Arity_3 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) HeadVar__2_2);
      break;
    case (MR_Integer) 0:
      *Arity_3 = HeadVar__2_2;
      break;
  }
}

void MR_CALL 
parse_tree__prog_util__construct_qualified_term_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word SymName_4,
  MR_Word ArgTerms_5,
  MR_Word * Term_6)
{
  {
    MR_Word Context_7;

    mercury__term__context_init_1_p_0(&Context_7);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_8, SymName_4, ArgTerms_5, Context_7, Term_6);
  }
}

void MR_CALL 
parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word SymName_5,
  MR_Word ArgTerms_6,
  MR_Word Context_7,
  MR_Word * Term_8)
{
  if (((MR_tag((MR_Word) SymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleSymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_5, (MR_Integer) 0))));
    MR_String Name_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_5, (MR_Integer) 1))));
    MR_Word ModuleTerm_11;
    MR_Word UnqualifiedTerm_12;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;

    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_22, ModuleSymName_9, (MR_Word) ((MR_Unsigned) 0U), Context_7, &ModuleTerm_11);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Name_10));
    }
    {
      UnqualifiedTerm_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualifiedTerm_12, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), UnqualifiedTerm_12, 1) = ((MR_Box) (ArgTerms_6));
      MR_hl_field(MR_mktag(0), UnqualifiedTerm_12, 2) = ((MR_Box) (Context_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (UnqualifiedTerm_12));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (ModuleTerm_11));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_7));
    }
  }
  else
  {
    MR_Word Var_13;
    MR_String Name_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_5, (MR_Integer) 0))));

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Name_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_7));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_util____Unify____maybe_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_util____Compare____maybe_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_util____Unify____new_pred_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_util____Compare____new_pred_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__prog_util__init(void)
{
}

void mercury__parse_tree__prog_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_modes_0);
	MR_register_type_ctor_info(&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_new_pred_id_0);
}

void mercury__parse_tree__prog_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_util.
