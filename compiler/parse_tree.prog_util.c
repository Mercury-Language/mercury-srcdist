/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module parse_tree.prog_util. */
/* :- implementation. */

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
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "int.mih"
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
#include "require.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
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
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__Catch0_7,
  MR_Word * parse_tree__prog_util__Catch_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__TMV0_7,
  MR_Word * parse_tree__prog_util__TMV_8);

static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
  MR_Word parse_tree__prog_util__Context_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__HeadVar__3_3);

static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
  MR_Word parse_tree__prog_util__Qualifier_5,
  MR_Word parse_tree__prog_util__InnerTerm_6,
  MR_Word parse_tree__prog_util__Context_7);

static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_22,
  MR_String parse_tree__prog_util__BaseName_7,
  MR_Integer parse_tree__prog_util__Cur_8,
  MR_Integer parse_tree__prog_util__Max_9,
  MR_Word * parse_tree__prog_util__Vars_10,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_15,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_16);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__MaybeVar0_7,
  MR_Word * parse_tree__prog_util__MaybeVar_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__Var0_7,
  MR_Word * parse_tree__prog_util__Var_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_1,
  MR_Word parse_tree__prog_util__NewVar_2,
  MR_Word parse_tree__prog_util__HeadVar__3_3,
  MR_Word * parse_tree__prog_util__HeadVar__4_4);

static void MR_CALL 
parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__PODVar0_7,
  MR_Word * parse_tree__prog_util__PODVar_8);

static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__Comp0_7,
  MR_Word * parse_tree__prog_util__Comp_8);

static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
  MR_Word * parse_tree__prog_util__Result_5);

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
  MR_Word parse_tree__prog_util__Var_14,
  MR_Word parse_tree__prog_util__List_5,
  MR_String * parse_tree__prog_util__String_6);

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_util__Var_23,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__583__1_3_p_0(
  MR_Word parse_tree__prog_util__VarSet_18,
  MR_Word parse_tree__prog_util__LambdaHeadVar__1_37,
  MR_String * parse_tree__prog_util__LambdaHeadVar__2_38);

static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
  MR_Word parse_tree__prog_util__List_5,
  MR_String * parse_tree__prog_util__String_6);

static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2,
  MR_Box parse_tree__prog_util__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2,
  MR_Box parse_tree__prog_util__wrapper_arg_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_util____Unify____maybe_modes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____maybe_modes_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "maybe_modes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0 = {
  (MR_String) "newpred_counter",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1 = {
  (MR_String) "newpred_type_subst",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2 = {
  (MR_String) "newpred_unused_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3 = {
  (MR_String) "newpred_parallel_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4 = {
  (MR_String) "newpred_parallel_loop_control",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5 = {
  (MR_String) "newpred_structure_reuse",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6 = {
  (MR_String) "newpred_distance_granularity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_util____Unify____new_pred_id_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____new_pred_id_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "new_pred_id",
  {     parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0 },
  {     parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0
};

void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0(
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Integer parse_tree__prog_util__CastX_133 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_util__CastY_134 = (MR_Integer) parse_tree__prog_util__HeadVar__3_3;

    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_133 == parse_tree__prog_util__CastY_134);
    if (parse_tree__prog_util__succeeded)
      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer parse_tree__prog_util__Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer parse_tree__prog_util__Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer parse_tree__prog_util__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__prog_util__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_util__Var_8;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__Var_8, parse_tree__prog_util__Var_145, parse_tree__prog_util__ArgY1_5);
                  }
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__Var_8 == (MR_Integer) 0);
                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
                  if (parse_tree__prog_util__succeeded)
                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__Var_8;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__Var_144, parse_tree__prog_util__ArgY2_7);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_util__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__prog_util__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_util__ArgY1_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_util__ArgY2_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_util__Var_36;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[5], &parse_tree__prog_util__Var_36, ((MR_Box) (parse_tree__prog_util__Var_151)), ((MR_Box) (parse_tree__prog_util__ArgY1_33)));
                  }
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__Var_36 == (MR_Integer) 0);
                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
                  if (parse_tree__prog_util__succeeded)
                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__Var_36;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[6], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Var_150)), ((MR_Box) (parse_tree__prog_util__ArgY2_35)));
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_util__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__prog_util__ArgY1_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Var_152)), ((MR_Box) (parse_tree__prog_util__ArgY1_59)));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_util__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__prog_util__ArgY1_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Var_147)), ((MR_Box) (parse_tree__prog_util__ArgY1_77)));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__prog_util__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer parse_tree__prog_util__Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer parse_tree__prog_util__ArgY1_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__prog_util__ArgY2_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word parse_tree__prog_util__Var_113;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__Var_113, parse_tree__prog_util__Var_149, parse_tree__prog_util__ArgY1_110);
                          }
                          parse_tree__prog_util__succeeded = (parse_tree__prog_util__Var_113 == (MR_Integer) 0);
                          parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
                          if (parse_tree__prog_util__succeeded)
                            *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__Var_113;
                          else
                            {
                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Var_148)), ((MR_Box) (parse_tree__prog_util__ArgY2_112)));
                              }
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer parse_tree__prog_util__Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Integer parse_tree__prog_util__ArgY1_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__Var_146, parse_tree__prog_util__ArgY1_132);
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
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Integer parse_tree__prog_util__CastX_23 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
    MR_Integer parse_tree__prog_util__CastY_24 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_23 == parse_tree__prog_util__CastY_24);
    if (parse_tree__prog_util__succeeded)
      parse_tree__prog_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__prog_util__CastX_15 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
            MR_Integer parse_tree__prog_util__CastY_16 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

            parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastY_16 == parse_tree__prog_util__CastX_15);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer parse_tree__prog_util__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer parse_tree__prog_util__ArgY1_4;
            MR_Integer parse_tree__prog_util__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer parse_tree__prog_util__ArgY2_6;

            parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_util__succeeded)
              {
                parse_tree__prog_util__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_util__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__ArgX1_3 == parse_tree__prog_util__ArgY1_4);
                if (parse_tree__prog_util__succeeded)
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__ArgX2_5 == parse_tree__prog_util__ArgY2_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_util__TypeInfo_27_27;
            MR_Word parse_tree__prog_util__TypeInfo_28_28;
            MR_Word parse_tree__prog_util__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_util__ArgY1_8;
            MR_Word parse_tree__prog_util__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_util__ArgY2_10;

            parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_util__succeeded)
              {
                parse_tree__prog_util__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_util__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
                parse_tree__prog_util__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_util_scalar_common_1[5];
                {
                  parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_util__ArgX1_7)), ((MR_Box) (parse_tree__prog_util__ArgY1_8)));
                }
                if (parse_tree__prog_util__succeeded)
                  {
                    parse_tree__prog_util__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_util_scalar_common_1[6];
                    {
                      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_util__ArgX2_9)), ((MR_Box) (parse_tree__prog_util__ArgY2_10)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_util__TypeInfo_29_29;
                MR_Word parse_tree__prog_util__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_util__ArgY1_12;

                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__prog_util__succeeded)
                  {
                    parse_tree__prog_util__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_util__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
                    {
                      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_util__ArgX1_11)), ((MR_Box) (parse_tree__prog_util__ArgY1_12)));
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_util__TypeInfo_25_25;
                MR_Word parse_tree__prog_util__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_util__ArgY1_14;

                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_util__succeeded)
                  {
                    parse_tree__prog_util__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
                    {
                      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_25_25, ((MR_Box) (parse_tree__prog_util__ArgX1_13)), ((MR_Box) (parse_tree__prog_util__ArgY1_14)));
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__prog_util__TypeInfo_26_26;
                MR_Integer parse_tree__prog_util__ArgX1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer parse_tree__prog_util__ArgY1_18;
                MR_Word parse_tree__prog_util__ArgX2_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__prog_util__ArgY2_20;

                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (parse_tree__prog_util__succeeded)
                  {
                    parse_tree__prog_util__ArgY1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_util__ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__prog_util__succeeded = (parse_tree__prog_util__ArgX1_17 == parse_tree__prog_util__ArgY1_18);
                    if (parse_tree__prog_util__succeeded)
                      {
                        parse_tree__prog_util__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
                        {
                          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_util__ArgX2_19)), ((MR_Box) (parse_tree__prog_util__ArgY2_20)));
                        }
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer parse_tree__prog_util__ArgX1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer parse_tree__prog_util__ArgY1_22;

                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (parse_tree__prog_util__succeeded)
                  {
                    parse_tree__prog_util__ArgY1_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_util__succeeded = (parse_tree__prog_util__ArgX1_21 == parse_tree__prog_util__ArgY1_22);
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__prog_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0(
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Cast_HeadVar1_4 = parse_tree__prog_util__HeadVar__2_2;
    MR_Word parse_tree__prog_util__Cast_HeadVar2_5 = parse_tree__prog_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0(
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Cast_HeadVar1_3 = parse_tree__prog_util__HeadVar__1_1;
    MR_Word parse_tree__prog_util__Cast_HeadVar2_4 = parse_tree__prog_util__HeadVar__2_2;

    {
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__Catch0_7,
  MR_Word * parse_tree__prog_util__Catch_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 0)));
    MR_Word parse_tree__prog_util__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 1)));
    MR_Word parse_tree__prog_util__Term_11;
    MR_Word parse_tree__prog_util__Goal_12;

    {
      mercury__term__rename_var_in_term_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Term0_9, &parse_tree__prog_util__Term_11);
    }
    {
      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_10, &parse_tree__prog_util__Goal_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_util__Catch_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Term_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_12));
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__TMV0_7,
  MR_Word * parse_tree__prog_util__TMV_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_String parse_tree__prog_util__MutableName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 0)));
    MR_Word parse_tree__prog_util__StateVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 1)));
    MR_Word parse_tree__prog_util__StateVar_11;

    {
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__StateVar0_10)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
    if (parse_tree__prog_util__succeeded)
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__NewVar_6;
    else
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__StateVar0_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_util__TMV_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__MutableName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__StateVar_11));
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_f_0(
  MR_Word parse_tree__prog_util__Context_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__HeadVar__3_3;

    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Context_1));
      }
    else
      {
        MR_Word parse_tree__prog_util__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__prog_util__HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal_6, parse_tree__prog_util__Goals_7);
        }
      }
    return parse_tree__prog_util__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
  MR_Word parse_tree__prog_util__Context_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__HeadVar__4_4;

    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__HeadVar__2_2;
    else
      {
        MR_Word parse_tree__prog_util__Goal1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_util__Var_11;

        {
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal1_9, parse_tree__prog_util__Goals_10);
        }
        {
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__Context_1));
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__HeadVar__2_2));
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Var_11));
        }
      }
    return parse_tree__prog_util__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_util__sym_name_and_args_to_term_3_f_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_15,
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__Xs_2,
  MR_Word parse_tree__prog_util__Context_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__HeadVar__4_4;

    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_util__ModuleNames_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_util__Var_13;
        MR_Word parse_tree__prog_util__Var_14;

        {
          parse_tree__prog_util__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_14, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
        }
        {
          parse_tree__prog_util__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_13, 0) = ((MR_Box) (parse_tree__prog_util__Var_14));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_13, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_13, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
        }
        {
          parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_9, parse_tree__prog_util__Var_13, parse_tree__prog_util__Context_3);
        }
      }
    else
      {
        MR_String parse_tree__prog_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Var_8;

        {
          parse_tree__prog_util__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_5));
        }
        {
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__Var_8));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
        }
      }
    return parse_tree__prog_util__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
  MR_Word parse_tree__prog_util__Qualifier_5,
  MR_Word parse_tree__prog_util__InnerTerm_6,
  MR_Word parse_tree__prog_util__Context_7)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Term_8;
    MR_Word parse_tree__prog_util__QualifierTerm_10;
    MR_Word parse_tree__prog_util__Var_19;
    MR_Word parse_tree__prog_util__Var_20;

    if (((MR_tag((MR_Word) parse_tree__prog_util__Qualifier_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_util__OuterQualifier_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Qualifier_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__InnerQualifierTerm_12;
        MR_Word parse_tree__prog_util__Var_13;
        MR_String parse_tree__prog_util__InnerQualifier_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Qualifier_5, (MR_Integer) 1)));

        {
          parse_tree__prog_util__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_13, 0) = ((MR_Box) (parse_tree__prog_util__InnerQualifier_22));
        }
        {
          parse_tree__prog_util__InnerQualifierTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
        }
        {
          parse_tree__prog_util__QualifierTerm_10 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__OuterQualifier_11, parse_tree__prog_util__InnerQualifierTerm_12, parse_tree__prog_util__Context_7);
        }
      }
    else
      {
        MR_String parse_tree__prog_util__InnerQualifier_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Qualifier_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Var_15;

        {
          parse_tree__prog_util__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_15, 0) = ((MR_Box) (parse_tree__prog_util__InnerQualifier_9));
        }
        {
          parse_tree__prog_util__QualifierTerm_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 0) = ((MR_Box) (parse_tree__prog_util__Var_15));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
        }
      }
    {
      parse_tree__prog_util__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_20, 0) = ((MR_Box) (parse_tree__prog_util__InnerTerm_6));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_util__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_19, 0) = ((MR_Box) (parse_tree__prog_util__QualifierTerm_10));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_19, 1) = ((MR_Box) (parse_tree__prog_util__Var_20));
    }
    {
      parse_tree__prog_util__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 1) = ((MR_Box) (parse_tree__prog_util__Var_19));
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
    }
    return parse_tree__prog_util__Term_8;
  }
}

void MR_CALL 
parse_tree__prog_util__get_new_tvars_8_p_0(
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__VarSet_2,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarSet_4,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_util__succeeded;

        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
            *parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
            *parse_tree__prog_util__STATE_VARIABLE_TVarSet_4 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
          }
        else
          {
            MR_Word parse_tree__prog_util__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_util__TVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
            MR_Word parse_tree__prog_util__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

            {
              parse_tree__prog_util__succeeded = mercury__map__contains_2_p_0(parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (parse_tree__prog_util__TVar_19)));
            }
            if (parse_tree__prog_util__succeeded)
              {
                parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
                parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
                parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
              }
            else
              {
                MR_String parse_tree__prog_util__TVarName_25;

                {
                  parse_tree__prog_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_2, parse_tree__prog_util__TVar_19, &parse_tree__prog_util__TVarName_25);
                }
                if (parse_tree__prog_util__succeeded)
                  {
                    MR_Word parse_tree__prog_util__TVarSetVar_26;
                    MR_Box parse_tree__prog_util__conv0_TVarSetVar_26;

                    {
                      parse_tree__prog_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_util_scalar_common_1[0], parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (parse_tree__prog_util__TVarName_25)), &parse_tree__prog_util__conv0_TVarSetVar_26);
                    }
                    if (parse_tree__prog_util__succeeded)
                      {
                        parse_tree__prog_util__TVarSetVar_26 = ((MR_Word) parse_tree__prog_util__conv0_TVarSetVar_26);
                        parse_tree__prog_util__succeeded = MR_TRUE;
                      }
                    if (parse_tree__prog_util__succeeded)
                      {
                        MR_Word parse_tree__prog_util__TypeInfo_49_49 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

                        {
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_49_49, parse_tree__prog_util__TypeInfo_49_49, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__TVarSetVar_26)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
                        parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
                        parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
                      }
                    else
                      {
                        MR_Word parse_tree__prog_util__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
                        MR_Word parse_tree__prog_util__TypeInfo_52_52;
                        MR_Word parse_tree__prog_util__NewTVar_27;
                        MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35;

                        {
                          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, &parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35);
                        }
                        {
                          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__TVarName_25, parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                        }
                        parse_tree__prog_util__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
                        {
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVarName_25)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, &parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37);
                        }
                        {
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_52_52, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
                      }
                  }
                else
                  {
                    MR_Word parse_tree__prog_util__TypeInfo_54_54;
                    MR_Word parse_tree__prog_util__NewTVar_44;

                    {
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__prog_util__NewTVar_44, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                    }
                    parse_tree__prog_util__TypeInfo_54_54 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
                    {
                      mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_54_54, parse_tree__prog_util__TypeInfo_54_54, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_44)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                    }
                    parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_util__next_value_of_HeadVar__1_1 = parse_tree__prog_util__TVars_20;
              MR_Word parse_tree__prog_util__next_value_of_STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
              MR_Word parse_tree__prog_util__next_value_of_STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
              MR_Word parse_tree__prog_util__next_value_of_STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;

              parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__next_value_of_STATE_VARIABLE_TVarRenaming_0_7;
              parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__next_value_of_STATE_VARIABLE_TVarNameMap_0_5;
              parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__next_value_of_STATE_VARIABLE_TVarSet_0_3;
              parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__prog_util__get_state_args_det_4_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_15,
  MR_Word parse_tree__prog_util__Args0_5,
  MR_Word * parse_tree__prog_util__Args_6,
  MR_Box * parse_tree__prog_util__State0_7,
  MR_Box * parse_tree__prog_util__State_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__ArgsPrime_9;
    MR_Box parse_tree__prog_util__State0Prime_10;
    MR_Box parse_tree__prog_util__StatePrime_11;
    MR_Word parse_tree__prog_util__RevArgs0_20;
    MR_Word parse_tree__prog_util__RevArgs_21;
    MR_Word parse_tree__prog_util__Var_22;

    {
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_15, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_20);
    }
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_20)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_util__succeeded)
      {
        parse_tree__prog_util__StatePrime_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_20, (MR_Integer) 0));
        parse_tree__prog_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_20, (MR_Integer) 1)));
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__Var_22)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_util__succeeded)
          {
            parse_tree__prog_util__State0Prime_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_22, (MR_Integer) 0));
            parse_tree__prog_util__RevArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_22, (MR_Integer) 1)));
            {
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_15, parse_tree__prog_util__RevArgs_21, &parse_tree__prog_util__ArgsPrime_9);
            }
            parse_tree__prog_util__succeeded = MR_TRUE;
          }
      }
    if (parse_tree__prog_util__succeeded)
      {
        *parse_tree__prog_util__Args_6 = parse_tree__prog_util__ArgsPrime_9;
        *parse_tree__prog_util__State0_7 = parse_tree__prog_util__State0Prime_10;
        *parse_tree__prog_util__State_8 = parse_tree__prog_util__StatePrime_11;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4", (MR_String) "get_state_args failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_util__get_state_args_4_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
  MR_Word parse_tree__prog_util__Args0_5,
  MR_Word * parse_tree__prog_util__Args_6,
  MR_Box * parse_tree__prog_util__State0_7,
  MR_Box * parse_tree__prog_util__State_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__RevArgs0_9;
    MR_Word parse_tree__prog_util__RevArgs_10;
    MR_Word parse_tree__prog_util__Var_11;

    {
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_9);
    }
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_9)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_util__succeeded)
      {
        *parse_tree__prog_util__State_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 0));
        parse_tree__prog_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 1)));
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__Var_11)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_util__succeeded)
          {
            *parse_tree__prog_util__State0_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_11, (MR_Integer) 0));
            parse_tree__prog_util__RevArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_11, (MR_Integer) 1)));
            {
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__RevArgs_10, parse_tree__prog_util__Args_6);
            }
            parse_tree__prog_util__succeeded = MR_TRUE;
          }
      }
    return parse_tree__prog_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_util__pred_args_to_func_args_3_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_17,
  MR_Word parse_tree__prog_util__PredArgs_4,
  MR_Word * parse_tree__prog_util__FuncArgs_5,
  MR_Box * parse_tree__prog_util__FuncReturn_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Integer parse_tree__prog_util__NumPredArgs_7;
    MR_Integer parse_tree__prog_util__NumFuncArgs_8;
    MR_Word parse_tree__prog_util__FuncArgs0_9;
    MR_Box parse_tree__prog_util__FuncReturn0_10;
    MR_Word parse_tree__prog_util__Var_12;
    MR_Word parse_tree__prog_util__Var_18;

    {
      mercury__list__length_2_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__NumPredArgs_7);
    }
    parse_tree__prog_util__NumFuncArgs_8 = (parse_tree__prog_util__NumPredArgs_7 - (MR_Integer) 1);
    {
      parse_tree__prog_util__succeeded = mercury__list__split_list_4_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__NumFuncArgs_8, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__FuncArgs0_9, &parse_tree__prog_util__Var_12);
    }
    if (parse_tree__prog_util__succeeded)
      {
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__Var_12)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_util__succeeded)
          {
            parse_tree__prog_util__FuncReturn0_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_12, (MR_Integer) 0));
            parse_tree__prog_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_12, (MR_Integer) 1)));
            {
              parse_tree__prog_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_util__TypeInfo_for_T_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__Var_18);
            }
          }
      }
    if (parse_tree__prog_util__succeeded)
      {
        *parse_tree__prog_util__FuncArgs_5 = parse_tree__prog_util__FuncArgs0_9;
        *parse_tree__prog_util__FuncReturn_6 = parse_tree__prog_util__FuncReturn0_10;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
          return;
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_5_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
  MR_String parse_tree__prog_util__BaseName_6,
  MR_Integer parse_tree__prog_util__N_7,
  MR_Word * parse_tree__prog_util__Vars_8,
  MR_Word parse_tree__prog_util__VarSet0_9,
  MR_Word * parse_tree__prog_util__VarSet_10)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    {
      parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__BaseName_6, (MR_Integer) 1, parse_tree__prog_util__N_7, parse_tree__prog_util__Vars_8, parse_tree__prog_util__VarSet0_9, parse_tree__prog_util__VarSet_10);
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_22,
  MR_String parse_tree__prog_util__BaseName_7,
  MR_Integer parse_tree__prog_util__Cur_8,
  MR_Integer parse_tree__prog_util__Max_9,
  MR_Word * parse_tree__prog_util__Vars_10,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_15,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_16)
{
  {
    MR_bool parse_tree__prog_util__succeeded = (parse_tree__prog_util__Cur_8 > parse_tree__prog_util__Max_9);

    if (parse_tree__prog_util__succeeded)
      {
        *parse_tree__prog_util__Vars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__prog_util__STATE_VARIABLE_VarSet_16 = parse_tree__prog_util__STATE_VARIABLE_VarSet_0_15;
      }
    else
      {
        MR_String parse_tree__prog_util__VarName_12;
        MR_Word parse_tree__prog_util__HeadVar_13;
        MR_Word parse_tree__prog_util__TailVars_14;
        MR_String parse_tree__prog_util__Var_17;
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_18_18;
        MR_Integer parse_tree__prog_util__Var_19;

        {
          parse_tree__prog_util__Var_17 = mercury__string__int_to_string_1_f_0(parse_tree__prog_util__Cur_8);
        }
        {
          parse_tree__prog_util__VarName_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Var_17);
        }
        {
          mercury__varset__new_named_var_4_p_0(parse_tree__prog_util__TypeInfo_for_T_22, parse_tree__prog_util__VarName_12, &parse_tree__prog_util__HeadVar_13, parse_tree__prog_util__STATE_VARIABLE_VarSet_0_15, &parse_tree__prog_util__STATE_VARIABLE_VarSet_18_18);
        }
        parse_tree__prog_util__Var_19 = (parse_tree__prog_util__Cur_8 + (MR_Integer) 1);
        {
          parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(parse_tree__prog_util__TypeInfo_for_T_22, parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Var_19, parse_tree__prog_util__Max_9, &parse_tree__prog_util__TailVars_14, parse_tree__prog_util__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_util__STATE_VARIABLE_VarSet_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__Vars_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__HeadVar_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__TailVars_14));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(
  MR_Word parse_tree__prog_util__SymName0_3,
  MR_Word * parse_tree__prog_util__SymName_4)
{
  {
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__SymName0_3)) == (MR_mktag((MR_Integer) 1)));
    MR_String parse_tree__prog_util__Name_6;
    MR_Word parse_tree__prog_util__Module_5;
    MR_Word parse_tree__prog_util__Var_7;

    if (parse_tree__prog_util__succeeded)
      {
        parse_tree__prog_util__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 0)));
        parse_tree__prog_util__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 1)));
        {
          parse_tree__prog_util__Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_5, parse_tree__prog_util__Var_7);
        }
      }
    if (parse_tree__prog_util__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__prog_util__SymName_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Name_6));
      }
    else
      *parse_tree__prog_util__SymName_4 = parse_tree__prog_util__SymName0_3;
  }
}

void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(
  MR_Word parse_tree__prog_util__ConsId0_3,
  MR_Word * parse_tree__prog_util__ConsId_4)
{
  {
    MR_bool parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__ConsId0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word parse_tree__prog_util__Name0_5;
    MR_Integer parse_tree__prog_util__Arity_6;
    MR_Word parse_tree__prog_util__TypeCtor_7;

    if (parse_tree__prog_util__succeeded)
      {
        parse_tree__prog_util__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 1)));
        parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 2)));
        parse_tree__prog_util__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 3)));
        {
          MR_Word parse_tree__prog_util__Name_8;
          MR_String parse_tree__prog_util__Name_12;
          MR_Word parse_tree__prog_util__Module_11;
          MR_Word parse_tree__prog_util__Var_13;

          parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__Name0_5)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__prog_util__succeeded)
            {
              parse_tree__prog_util__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 0)));
              parse_tree__prog_util__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 1)));
              {
                parse_tree__prog_util__Var_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_11, parse_tree__prog_util__Var_13);
              }
            }
          if (parse_tree__prog_util__succeeded)
            {
              parse_tree__prog_util__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__Name_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_12));
            }
          else
            parse_tree__prog_util__Name_8 = parse_tree__prog_util__Name0_5;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_util__ConsId_4 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_8));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_6));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TypeCtor_7));
          }
        }
      }
    else
      *parse_tree__prog_util__ConsId_4 = parse_tree__prog_util__ConsId0_3;
  }
}

void MR_CALL 
parse_tree__prog_util__strip_module_qualifier_from_sym_name_2_p_0(
  MR_Word parse_tree__prog_util__SymName0_3,
  MR_Word * parse_tree__prog_util__SymName_4)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_util__SymName0_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__prog_util__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_util___Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_util__SymName_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Name_6));
        }
      }
    else
      *parse_tree__prog_util__SymName_4 = parse_tree__prog_util__SymName0_3;
  }
}

void MR_CALL 
parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(
  MR_Word parse_tree__prog_util__ConsId0_3,
  MR_Word * parse_tree__prog_util__ConsId_4)
{
  {
    MR_bool parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__ConsId0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word parse_tree__prog_util__Name0_5;
    MR_Integer parse_tree__prog_util__Arity_6;
    MR_Word parse_tree__prog_util__TypeCtor_7;

    if (parse_tree__prog_util__succeeded)
      {
        parse_tree__prog_util__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 1)));
        parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 2)));
        parse_tree__prog_util__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 3)));
        {
          MR_Word parse_tree__prog_util__Name_8;

          if (((MR_tag((MR_Word) parse_tree__prog_util__Name0_5)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String parse_tree__prog_util__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util___Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 0)));

              {
                parse_tree__prog_util__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Name_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_12));
              }
            }
          else
            parse_tree__prog_util__Name_8 = parse_tree__prog_util__Name0_5;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_util__ConsId_4 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_8));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_6));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TypeCtor_7));
          }
        }
      }
    else
      *parse_tree__prog_util__ConsId_4 = parse_tree__prog_util__ConsId0_3;
  }
}

void MR_CALL 
parse_tree__prog_util__det_make_functor_cons_id_3_p_0(
  MR_Word parse_tree__prog_util__Functor_4,
  MR_Integer parse_tree__prog_util__Arity_5,
  MR_Word * parse_tree__prog_util__ConsId_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__ConsIdPrime_7;

    {
      parse_tree__prog_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_util__Functor_4, parse_tree__prog_util__Arity_5, &parse_tree__prog_util__ConsIdPrime_7);
    }
    if (parse_tree__prog_util__succeeded)
      *parse_tree__prog_util__ConsId_6 = parse_tree__prog_util__ConsIdPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.det_make_functor_cons_id\'/3", (MR_String) "make_functor_cons_id failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_util__make_functor_cons_id_3_p_0(
  MR_Word parse_tree__prog_util__Functor_4,
  MR_Integer parse_tree__prog_util__Arity_5,
  MR_Word * parse_tree__prog_util__ConsId_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_util__Functor_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String parse_tree__prog_util__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));
          MR_Word parse_tree__prog_util__Var_16;
          MR_Word parse_tree__prog_util__Var_17;

          {
            parse_tree__prog_util__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_16, 0) = ((MR_Box) (parse_tree__prog_util__Name_7));
          }
          {
            parse_tree__prog_util__Var_17 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_util__ConsId_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Var_16));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_5));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Var_17));
          }
          parse_tree__prog_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_util__Base_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));
          MR_Word parse_tree__prog_util__Integer_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));
          MR_Word parse_tree__prog_util__Signedness_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Functor_4, (MR_Integer) 2)));
          MR_Word parse_tree__prog_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Functor_4, (MR_Integer) 3)));

          parse_tree__prog_util__succeeded = (parse_tree__prog_util__Var_15 == (MR_Integer) 0);
          if (parse_tree__prog_util__succeeded)
            switch (parse_tree__prog_util__Signedness_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer parse_tree__prog_util__Int_11;

                  {
                    parse_tree__prog_util__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(parse_tree__prog_util__Base_8, parse_tree__prog_util__Integer_9, &parse_tree__prog_util__Int_11);
                  }
                  if (parse_tree__prog_util__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_util__ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Int_11));
                      }
                      parse_tree__prog_util__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned parse_tree__prog_util__UInt_12;

                  {
                    parse_tree__prog_util__succeeded = mercury__integer__to_uint_2_p_0(parse_tree__prog_util__Integer_9, &parse_tree__prog_util__UInt_12);
                  }
                  if (parse_tree__prog_util__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_util__ConsId_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__UInt_12));
                      }
                      parse_tree__prog_util__succeeded = MR_TRUE;
                    }
                }
                break;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String parse_tree__prog_util__String_13 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_util__ConsId_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__String_13));
          }
          parse_tree__prog_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float parse_tree__prog_util__Float_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__ConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(parse_tree__prog_util__Float_14);
              }
              parse_tree__prog_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String parse_tree__prog_util__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__ConsId_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_18));
              }
              parse_tree__prog_util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return parse_tree__prog_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_util__source_integer_to_int_3_p_0(
  MR_Word parse_tree__prog_util__Base_4,
  MR_Word parse_tree__prog_util__Integer_5,
  MR_Integer * parse_tree__prog_util__Int_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    switch (parse_tree__prog_util__Base_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Int_6);
        }
        break;
      case (MR_Integer) 3:
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_util__Var_8;
          MR_Integer parse_tree__prog_util__Var_9;

          {
            parse_tree__prog_util__Var_9 = mercury__int__max_int_0_f_0();
          }
          {
            parse_tree__prog_util__Var_8 = mercury__integer__integer_1_f_0(parse_tree__prog_util__Var_9);
          }
          {
            parse_tree__prog_util__succeeded = mercury__integer__f_greater_than_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Var_8);
          }
          if (parse_tree__prog_util__succeeded)
            {
              MR_Word parse_tree__prog_util__NegInteger_7;
              MR_Word parse_tree__prog_util__Var_10;
              MR_Word parse_tree__prog_util__Var_11;
              MR_Integer parse_tree__prog_util__Var_12;
              MR_Word parse_tree__prog_util__Var_13;
              MR_Integer parse_tree__prog_util__Var_14;
              MR_Integer parse_tree__prog_util__Var_15;

              {
                parse_tree__prog_util__Var_12 = mercury__int__min_int_0_f_0();
              }
              {
                parse_tree__prog_util__Var_11 = mercury__integer__integer_1_f_0(parse_tree__prog_util__Var_12);
              }
              {
                parse_tree__prog_util__Var_10 = mercury__integer__f_plus_2_f_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Var_11);
              }
              {
                parse_tree__prog_util__Var_14 = mercury__int__min_int_0_f_0();
              }
              {
                parse_tree__prog_util__Var_13 = mercury__integer__integer_1_f_0(parse_tree__prog_util__Var_14);
              }
              {
                parse_tree__prog_util__NegInteger_7 = mercury__integer__f_plus_2_f_0(parse_tree__prog_util__Var_10, parse_tree__prog_util__Var_13);
              }
              {
                parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__NegInteger_7, parse_tree__prog_util__Int_6);
              }
              if (parse_tree__prog_util__succeeded)
                {
                  parse_tree__prog_util__Var_15 = (MR_Integer) 0;
                  parse_tree__prog_util__succeeded = (*parse_tree__prog_util__Int_6 < parse_tree__prog_util__Var_15);
                }
            }
          else
            {
              parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Int_6);
            }
        }
        break;
    }
    return parse_tree__prog_util__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_util__cons_id_maybe_arity_1_f_0(
  MR_Word parse_tree__prog_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_util__succeeded;
        MR_Word parse_tree__prog_util__HeadVar__2_2;

        switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

                  {
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_4));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_6));
                  }
                }
                break;
              case (MR_Integer) 4:
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 5:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 6:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 7:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 8:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 9:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 10:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 11:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 12:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 13:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 14:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 15:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 16:
                {
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
                }
                break;
              case (MR_Integer) 17:
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 18:
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 19:
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 20:
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 21:
                {
                  MR_Word parse_tree__prog_util__ConsId_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Integer parse_tree__prog_util__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_util__next_value_of_HeadVar__1_1 = parse_tree__prog_util__ConsId_44;

                    parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return parse_tree__prog_util__HeadVar__2_2;
      }
      break;
    }
}

MR_Integer MR_CALL 
parse_tree__prog_util__cons_id_arity_1_f_0(
  MR_Word parse_tree__prog_util__ConsId_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_util__succeeded;
        MR_Integer parse_tree__prog_util__Arity_4;

        switch (MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 4:
              case (MR_Integer) 17:
              case (MR_Integer) 18:
              case (MR_Integer) 19:
              case (MR_Integer) 20:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_util__Var_6;

                  parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
                  parse_tree__prog_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 3)));
                }
                break;
              case (MR_Integer) 3:
                parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
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
                parse_tree__prog_util__Arity_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 21:
                {
                  MR_Word parse_tree__prog_util__SubConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
                  MR_Integer parse_tree__prog_util__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_util__next_value_of_ConsId_3 = parse_tree__prog_util__SubConsId_8;

                    parse_tree__prog_util__ConsId_3 = parse_tree__prog_util__next_value_of_ConsId_3;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return parse_tree__prog_util__Arity_4;
      }
      break;
    }
}

MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_35,
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_util__Term_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
      default:
        parse_tree__prog_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            parse_tree__prog_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_util__SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__Context_43;
              MR_Integer parse_tree__prog_util___Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util___TypeCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

              {
                mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_43);
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_35, parse_tree__prog_util__SymName_30, parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_43, parse_tree__prog_util__Term_3);
              }
              parse_tree__prog_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_util__Context_47;

              {
                mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_47);
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_35, (MR_Word) &parse_tree__prog_util_scalar_common_3[2], parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_47, parse_tree__prog_util__Term_3);
              }
              parse_tree__prog_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer parse_tree__prog_util__Int_4;
              MR_Word parse_tree__prog_util__Context_6;

              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__prog_util__succeeded)
                {
                  parse_tree__prog_util__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_6);
                  }
                  {
                    *parse_tree__prog_util__Term_3 = mercury__term__int_to_decimal_term_2_f_0(parse_tree__prog_util__TypeInfo_for_T_35, parse_tree__prog_util__Int_4, parse_tree__prog_util__Context_6);
                  }
                  parse_tree__prog_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned parse_tree__prog_util__UInt_7;
              MR_Word parse_tree__prog_util__Context_9;

              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__prog_util__succeeded)
                {
                  parse_tree__prog_util__UInt_7 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_9);
                  }
                  {
                    *parse_tree__prog_util__Term_3 = mercury__term__uint_to_decimal_term_2_f_0(parse_tree__prog_util__TypeInfo_for_T_35, parse_tree__prog_util__UInt_7, parse_tree__prog_util__Context_9);
                  }
                  parse_tree__prog_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Float parse_tree__prog_util__Float_10;
              MR_Word parse_tree__prog_util__Context_12;
              MR_Word parse_tree__prog_util__Var_13;
              MR_Word parse_tree__prog_util__Var_14;

              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__prog_util__succeeded)
                {
                  parse_tree__prog_util__Float_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_12);
                  }
                  parse_tree__prog_util__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    parse_tree__prog_util__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__Var_13, 1) = MR_box_float(parse_tree__prog_util__Float_10);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_util__Term_3 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Var_14));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_12));
                  }
                  parse_tree__prog_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Char parse_tree__prog_util__Char_15;
              MR_Word parse_tree__prog_util__SymName_17;
              MR_String parse_tree__prog_util__Var_18;
              MR_Word parse_tree__prog_util__Var_19;
              MR_Word parse_tree__prog_util__Context_39;

              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__prog_util__succeeded)
                {
                  parse_tree__prog_util__Char_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    parse_tree__prog_util__Var_18 = mercury__string__from_char_1_f_0(parse_tree__prog_util__Char_15);
                  }
                  parse_tree__prog_util__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    parse_tree__prog_util__SymName_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_17, 0) = ((MR_Box) (parse_tree__prog_util__Var_18));
                  }
                  {
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_39);
                  }
                  {
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_35, parse_tree__prog_util__SymName_17, parse_tree__prog_util__Var_19, parse_tree__prog_util__Context_39, parse_tree__prog_util__Term_3);
                  }
                  parse_tree__prog_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String parse_tree__prog_util__String_20;
              MR_Word parse_tree__prog_util__Context_22;
              MR_Word parse_tree__prog_util__Var_23;
              MR_Word parse_tree__prog_util__Var_24;

              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__prog_util__succeeded)
                {
                  parse_tree__prog_util__String_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_22);
                  }
                  parse_tree__prog_util__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    parse_tree__prog_util__Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__prog_util__Var_23, 0) = ((MR_Box) (parse_tree__prog_util__String_20));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_util__Term_3 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_23));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Var_24));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_22));
                  }
                  parse_tree__prog_util__succeeded = MR_TRUE;
                }
            }
            break;
        }
        break;
    }
    return parse_tree__prog_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
    MR_Word parse_tree__prog_util__conv3_Catch_8;

    {
      parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv3_Catch_8);
    }
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv3_Catch_8));
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
    MR_Word parse_tree__prog_util__conv2_TMV_8;

    {
      parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv2_TMV_8);
    }
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv2_TMV_8));
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
    MR_Word parse_tree__prog_util__conv1_Goal_8;

    {
      parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv1_Goal_8);
    }
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv1_Goal_8));
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
  MR_Box parse_tree__prog_util__closure_arg,
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
    MR_Word parse_tree__prog_util__conv0_Var_8;

    {
      parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv0_Var_8);
    }
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv0_Var_8));
  }
}

void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__Goal0_7,
  MR_Word * parse_tree__prog_util__Goal_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_util__TypeCtorInfo_192_192 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word parse_tree__prog_util__TermA0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
          MR_Word parse_tree__prog_util__TermB0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
          MR_Word parse_tree__prog_util__TermA_75;
          MR_Word parse_tree__prog_util__TermB_76;
          MR_Word parse_tree__prog_util__Context_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
          MR_Word parse_tree__prog_util__Purity_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));

          {
            mercury__term__rename_var_in_term_4_p_0(parse_tree__prog_util__TypeCtorInfo_192_192, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__TermA0_73, &parse_tree__prog_util__TermA_75);
          }
          {
            mercury__term__rename_var_in_term_4_p_0(parse_tree__prog_util__TypeCtorInfo_192_192, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__TermB0_74, &parse_tree__prog_util__TermB_76);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_util__Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_176));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__TermA_75));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__TermB_76));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_177));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_util__SymName_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
          MR_Word parse_tree__prog_util__Context_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
          MR_Word parse_tree__prog_util__Purity_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
          MR_Word parse_tree__prog_util__Terms0_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
          MR_Word parse_tree__prog_util__Terms_175;

          {
            mercury__term__rename_var_in_terms_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Terms0_174, &parse_tree__prog_util__Terms_175);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_util__Goal_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_172));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__SymName_72));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_util__Terms_175));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_173));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_util__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
          MR_Word parse_tree__prog_util__SubGoalA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
          MR_Word parse_tree__prog_util__SubGoalB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
          MR_Word parse_tree__prog_util__SubGoalA_13;
          MR_Word parse_tree__prog_util__SubGoalB_14;

          {
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_11, &parse_tree__prog_util__SubGoalA_13);
          }
          {
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_12, &parse_tree__prog_util__SubGoalB_14);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_util__Goal_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_10));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_util__SubGoalA_13));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalB_14));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
            *parse_tree__prog_util__Goal_8 = parse_tree__prog_util__Goal0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_util__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__Cond_68;
              MR_Word parse_tree__prog_util__Context_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__Vars0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Vars_164;
              MR_Word parse_tree__prog_util__StateVars0_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__StateVars_166;
              MR_Word parse_tree__prog_util__Then0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
              MR_Word parse_tree__prog_util__Then_168;
              MR_Word parse_tree__prog_util__Else0_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
              MR_Word parse_tree__prog_util__Else_170;

              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_163, &parse_tree__prog_util__Vars_164);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_165, &parse_tree__prog_util__StateVars_166);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Cond0_67, &parse_tree__prog_util__Cond_68);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_167, &parse_tree__prog_util__Then_168);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_169, &parse_tree__prog_util__Else_170);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_162));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_164));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_166));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Cond_68));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Then_168));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Else_170));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_util__Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoalA0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__SubGoalB0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoalA_92;
              MR_Word parse_tree__prog_util__SubGoalB_93;

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_90, &parse_tree__prog_util__SubGoalA_92);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_91, &parse_tree__prog_util__SubGoalB_93);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_89));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_92));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_93));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_util__SubGoal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__SubGoal_16;
              MR_Word parse_tree__prog_util__Context_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_15, &parse_tree__prog_util__SubGoal_16);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_94));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoal_16));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__prog_util__Context_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoalA0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__SubGoalB0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoalA_87;
              MR_Word parse_tree__prog_util__SubGoalB_88;

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_85, &parse_tree__prog_util__SubGoalA_87);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_86, &parse_tree__prog_util__SubGoalB_88);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_84));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_87));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_88));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word parse_tree__prog_util__QuantType_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word parse_tree__prog_util__QuantVarsKind_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word parse_tree__prog_util__Vars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__Vars_20;
              MR_Word parse_tree__prog_util__Context_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__SubGoal0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__SubGoal_97;

              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_19, &parse_tree__prog_util__Vars_20);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_96, &parse_tree__prog_util__SubGoal_97);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((parse_tree__prog_util__QuantType_17 | ((parse_tree__prog_util__QuantVarsKind_18 << (MR_Integer) 1)))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_95));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Vars_20));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_97));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word parse_tree__prog_util__Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Context_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoal_100;

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_99, &parse_tree__prog_util__SubGoal_100);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_98));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Purity_21));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_100));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word parse_tree__prog_util__StateVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__DotSVars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__ColonSVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
              MR_Word parse_tree__prog_util__StateVars_25;
              MR_Word parse_tree__prog_util__DotSVars_26;
              MR_Word parse_tree__prog_util__ColonSVars_27;
              MR_Word parse_tree__prog_util__Context_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
              MR_Word parse_tree__prog_util__SubGoal_103;
              MR_Word parse_tree__prog_util__Vars0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Vars_105;

              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_104, &parse_tree__prog_util__Vars_105);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_22, &parse_tree__prog_util__StateVars_25);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_23, &parse_tree__prog_util__DotSVars_26);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_24, &parse_tree__prog_util__ColonSVars_27);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_102, &parse_tree__prog_util__SubGoal_103);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_101));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_105));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_25));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_26));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_27));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_103));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word parse_tree__prog_util__Context_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
              MR_Word parse_tree__prog_util__SubGoal_108;
              MR_Word parse_tree__prog_util__Vars0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Vars_110;
              MR_Word parse_tree__prog_util__StateVars0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__DotSVars0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__ColonSVars0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
              MR_Word parse_tree__prog_util__StateVars_114;
              MR_Word parse_tree__prog_util__DotSVars_115;
              MR_Word parse_tree__prog_util__ColonSVars_116;

              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_109, &parse_tree__prog_util__Vars_110);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_111, &parse_tree__prog_util__StateVars_114);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_112, &parse_tree__prog_util__DotSVars_115);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_113, &parse_tree__prog_util__ColonSVars_116);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_107, &parse_tree__prog_util__SubGoal_108);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_106));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_110));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_114));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_115));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_116));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_108));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word parse_tree__prog_util__Context_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
              MR_Word parse_tree__prog_util__SubGoal_119;
              MR_Word parse_tree__prog_util__Vars0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Vars_121;
              MR_Word parse_tree__prog_util__StateVars0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__DotSVars0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__ColonSVars0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
              MR_Word parse_tree__prog_util__StateVars_125;
              MR_Word parse_tree__prog_util__DotSVars_126;
              MR_Word parse_tree__prog_util__ColonSVars_127;

              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_120, &parse_tree__prog_util__Vars_121);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_122, &parse_tree__prog_util__StateVars_125);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_123, &parse_tree__prog_util__DotSVars_126);
              }
              {
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_124, &parse_tree__prog_util__ColonSVars_127);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_118, &parse_tree__prog_util__SubGoal_119);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_117));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_121));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_125));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_126));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_127));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_119));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word parse_tree__prog_util__Detism_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Context_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoal_133;

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_132, &parse_tree__prog_util__SubGoal_133);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_131));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Detism_30));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_133));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word parse_tree__prog_util__Var0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Var_32;
              MR_Word parse_tree__prog_util__Context_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoal_136;

              {
                parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_31, &parse_tree__prog_util__Var_32);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_135, &parse_tree__prog_util__SubGoal_136);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_134));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_32));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_136));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word parse_tree__prog_util__Context_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__SubGoal_139;
              MR_Word parse_tree__prog_util__Detism_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__Var0_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Var_142;

              {
                parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_141, &parse_tree__prog_util__Var_142);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_138, &parse_tree__prog_util__SubGoal_139);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_137));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_142));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Detism_140));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_139));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word parse_tree__prog_util__HeadWarnings_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__TailWarnings_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__Context_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__SubGoal_130;

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_129, &parse_tree__prog_util__SubGoal_130);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_128));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__HeadWarnings_28));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TailWarnings_29));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_130));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word parse_tree__prog_util__TypeCtorInfo_180_180;
              MR_Word parse_tree__prog_util__CompileTime_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__RunTime_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__MaybeIO0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__Mutables0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
              MR_Word parse_tree__prog_util__MaybeIO_37;
              MR_Word parse_tree__prog_util__Mutables_40;
              MR_Word parse_tree__prog_util__Var_82;
              MR_Word parse_tree__prog_util__Context_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
              MR_Word parse_tree__prog_util__SubGoal_145;

              if ((parse_tree__prog_util__MaybeIO0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__prog_util__MaybeIO_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word parse_tree__prog_util__IOStateVar0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO0_35, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_util__IOStateVar_39;

                  {
                    parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__IOStateVar0_38, &parse_tree__prog_util__IOStateVar_39);
                  }
                  {
                    parse_tree__prog_util__MaybeIO_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO_37, 0) = ((MR_Box) (parse_tree__prog_util__IOStateVar_39));
                  }
                }
              {
                parse_tree__prog_util__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_82, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_82, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_3));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_82, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_82, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
              }
              parse_tree__prog_util__TypeCtorInfo_180_180 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_180_180, parse_tree__prog_util__TypeCtorInfo_180_180, parse_tree__prog_util__Var_82, parse_tree__prog_util__Mutables0_36, &parse_tree__prog_util__Mutables_40);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_144, &parse_tree__prog_util__SubGoal_145);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_143));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__CompileTime_33));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__RunTime_34));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeIO_37));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Mutables_40));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_145));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word parse_tree__prog_util__TypeCtorInfo_186_186;
              MR_Word parse_tree__prog_util__InVars0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__OutVars0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__MaybeVars0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__MainGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
              MR_Word parse_tree__prog_util__OrElseGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
              MR_Word parse_tree__prog_util__InVars_46;
              MR_Word parse_tree__prog_util__OutVars_47;
              MR_Word parse_tree__prog_util__MaybeVars_48;
              MR_Word parse_tree__prog_util__MainGoal_51;
              MR_Word parse_tree__prog_util__OrElseGoal_52;
              MR_Word parse_tree__prog_util__Var_81;
              MR_Word parse_tree__prog_util__Context_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

              {
                parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__InVars0_41, &parse_tree__prog_util__InVars_46);
              }
              {
                parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__OutVars0_42, &parse_tree__prog_util__OutVars_47);
              }
              if ((parse_tree__prog_util__MaybeVars0_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__prog_util__MaybeVars_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word parse_tree__prog_util__TypeInfo_183_183;
                  MR_Word parse_tree__prog_util__TransVars0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars0_43, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_util__TransVars_50;
                  MR_Word parse_tree__prog_util__Var_80;

                  {
                    parse_tree__prog_util__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_80, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_80, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_1));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_80, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_80, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
                  }
                  parse_tree__prog_util__TypeInfo_183_183 = (MR_Word) &parse_tree__prog_util_scalar_common_1[1];
                  {
                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_183_183, parse_tree__prog_util__TypeInfo_183_183, parse_tree__prog_util__Var_80, parse_tree__prog_util__TransVars0_49, &parse_tree__prog_util__TransVars_50);
                  }
                  {
                    parse_tree__prog_util__MaybeVars_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars_48, 0) = ((MR_Box) (parse_tree__prog_util__TransVars_50));
                  }
                }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MainGoal0_44, &parse_tree__prog_util__MainGoal_51);
              }
              {
                parse_tree__prog_util__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_81, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_81, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_2));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_81, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_81, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
              }
              parse_tree__prog_util__TypeCtorInfo_186_186 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_186_186, parse_tree__prog_util__TypeCtorInfo_186_186, parse_tree__prog_util__Var_81, parse_tree__prog_util__OrElseGoal0_45, &parse_tree__prog_util__OrElseGoal_52);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_146));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__InVars_46));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__OutVars_47));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeVars_48));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MainGoal_51));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__OrElseGoal_52));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word parse_tree__prog_util__TypeCtorInfo_189_189;
              MR_Word parse_tree__prog_util__Then0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
              MR_Word parse_tree__prog_util__MaybeElse0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
              MR_Word parse_tree__prog_util__Catches0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
              MR_Word parse_tree__prog_util__MaybeCatchAny0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 7)));
              MR_Word parse_tree__prog_util__Then_57;
              MR_Word parse_tree__prog_util__MaybeElse_60;
              MR_Word parse_tree__prog_util__Catches_61;
              MR_Word parse_tree__prog_util__MaybeCatchAny_66;
              MR_Word parse_tree__prog_util__Var_77;
              MR_Word parse_tree__prog_util__Context_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoal0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoal_149;
              MR_Word parse_tree__prog_util__MaybeIO0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__MaybeIO_151;

              {
                parse_tree__prog_util__rename_in_maybe_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MaybeIO0_150, &parse_tree__prog_util__MaybeIO_151);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_148, &parse_tree__prog_util__SubGoal_149);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_53, &parse_tree__prog_util__Then_57);
              }
              if ((parse_tree__prog_util__MaybeElse0_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__prog_util__MaybeElse_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word parse_tree__prog_util__Else0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse0_54, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_util__Else_59;

                  {
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_58, &parse_tree__prog_util__Else_59);
                  }
                  {
                    parse_tree__prog_util__MaybeElse_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse_60, 0) = ((MR_Box) (parse_tree__prog_util__Else_59));
                  }
                }
              {
                parse_tree__prog_util__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_77, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_77, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_4));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_77, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_77, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
              }
              parse_tree__prog_util__TypeCtorInfo_189_189 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0;
              {
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_189_189, parse_tree__prog_util__TypeCtorInfo_189_189, parse_tree__prog_util__Var_77, parse_tree__prog_util__Catches0_55, &parse_tree__prog_util__Catches_61);
              }
              if ((parse_tree__prog_util__MaybeCatchAny0_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                parse_tree__prog_util__MaybeCatchAny_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word parse_tree__prog_util__CatchAnyVar0_62;
                  MR_Word parse_tree__prog_util__CatchAnyGoal0_63;
                  MR_Word parse_tree__prog_util__CatchAnyVar_64;
                  MR_Word parse_tree__prog_util__CatchAnyGoal_65;
                  MR_Word parse_tree__prog_util__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny0_56, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_util__Var_79;

                  parse_tree__prog_util__CatchAnyVar0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_78, (MR_Integer) 0)));
                  parse_tree__prog_util__CatchAnyGoal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_78, (MR_Integer) 1)));
                  {
                    parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyVar0_62, &parse_tree__prog_util__CatchAnyVar_64);
                  }
                  {
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyGoal0_63, &parse_tree__prog_util__CatchAnyGoal_65);
                  }
                  {
                    parse_tree__prog_util__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_79, 0) = ((MR_Box) (parse_tree__prog_util__CatchAnyVar_64));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_79, 1) = ((MR_Box) (parse_tree__prog_util__CatchAnyGoal_65));
                  }
                  {
                    parse_tree__prog_util__MaybeCatchAny_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny_66, 0) = ((MR_Box) (parse_tree__prog_util__Var_79));
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_147));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__MaybeIO_151));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_149));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Then_57));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MaybeElse_60));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Catches_61));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (parse_tree__prog_util__MaybeCatchAny_66));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word parse_tree__prog_util__Context_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoalA0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__SubGoalB0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoalA_155;
              MR_Word parse_tree__prog_util__SubGoalB_156;

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_153, &parse_tree__prog_util__SubGoalA_155);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_154, &parse_tree__prog_util__SubGoalB_156);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_152));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_155));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_156));
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word parse_tree__prog_util__Context_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_util__SubGoalA0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__SubGoalB0_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__SubGoalA_160;
              MR_Word parse_tree__prog_util__SubGoalB_161;

              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_158, &parse_tree__prog_util__SubGoalA_160);
              }
              {
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_159, &parse_tree__prog_util__SubGoalB_161);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_157));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_160));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_161));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String parse_tree__prog_util__Name_69 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_util__Terms0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
              MR_Word parse_tree__prog_util__Terms_71;
              MR_Word parse_tree__prog_util__Context_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

              {
                mercury__term__rename_var_in_terms_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Terms0_70, &parse_tree__prog_util__Terms_71);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_util__Goal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_171));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Name_69));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Terms_71));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__MaybeVar0_7,
  MR_Word * parse_tree__prog_util__MaybeVar_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if ((parse_tree__prog_util__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_util__MaybeVar_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVar0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Var_10;

        {
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
        if (parse_tree__prog_util__succeeded)
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
        else
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__MaybeVar_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__Var0_7,
  MR_Word * parse_tree__prog_util__Var_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    {
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_7)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
    if (parse_tree__prog_util__succeeded)
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__NewVar_6;
    else
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__Var0_7;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_1,
  MR_Word parse_tree__prog_util__NewVar_2,
  MR_Word parse_tree__prog_util__HeadVar__3_3,
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_util__Var_11;
        MR_Word parse_tree__prog_util__Vars_12;

        {
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_1)));
        }
        if (parse_tree__prog_util__succeeded)
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__NewVar_2;
        else
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__Var0_9;
        {
          parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_1, parse_tree__prog_util__NewVar_2, parse_tree__prog_util__Vars0_10, &parse_tree__prog_util__Vars_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_12));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__PODVar0_7,
  MR_Word * parse_tree__prog_util__PODVar_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_util__PODVar0_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_util__DotVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__PODVar0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__DotVar_12;

        {
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__DotVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
        if (parse_tree__prog_util__succeeded)
          parse_tree__prog_util__DotVar_12 = parse_tree__prog_util__NewVar_6;
        else
          parse_tree__prog_util__DotVar_12 = parse_tree__prog_util__DotVar0_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__PODVar_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__DotVar_12));
        }
      }
    else
      {
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__PODVar0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Var_10;

        {
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
        if (parse_tree__prog_util__succeeded)
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
        else
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_util__PODVar_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
  MR_Word parse_tree__prog_util__OldVar_5,
  MR_Word parse_tree__prog_util__NewVar_6,
  MR_Word parse_tree__prog_util__Comp0_7,
  MR_Word * parse_tree__prog_util__Comp_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_util__Comp0_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_util__SVar0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__SVar_10;

        {
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__SVar0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
        if (parse_tree__prog_util__succeeded)
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__NewVar_6;
        else
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__SVar0_9;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_util__Comp_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__SVar_10));
        }
      }
    else
      {
        MR_Word parse_tree__prog_util__IVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__OVar0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_util__IVar_13;
        MR_Word parse_tree__prog_util__OVar_14;

        {
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__IVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
        if (parse_tree__prog_util__succeeded)
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__NewVar_6;
        else
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__IVar0_11;
        {
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__OVar0_12)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
        if (parse_tree__prog_util__succeeded)
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__NewVar_6;
        else
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__OVar0_12;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__Comp_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__IVar_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__OVar_14));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_util__split_type_and_mode_3_p_0(
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word * parse_tree__prog_util__T_2,
  MR_Word * parse_tree__prog_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_util__M_6;

        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
        parse_tree__prog_util__M_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_6));
        }
      }
    else
      {
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
parse_tree__prog_util__split_types_and_modes_3_p_0(
  MR_Word parse_tree__prog_util__TypesAndModes_4,
  MR_Word * parse_tree__prog_util__Types_5,
  MR_Word * parse_tree__prog_util__MaybeModes_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Modes_7;
    MR_Word parse_tree__prog_util__Result_8;

    {
      parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TypesAndModes_4, (MR_Integer) 1, parse_tree__prog_util__Types_5, &parse_tree__prog_util__Modes_7, &parse_tree__prog_util__Result_8);
    }
    switch (parse_tree__prog_util__Result_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__prog_util__MaybeModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__MaybeModes_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Modes_7));
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
  MR_Word * parse_tree__prog_util__Result_5)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__prog_util__Result_5 = parse_tree__prog_util__HeadVar__2_2;
      }
    else
      {
        MR_Word parse_tree__prog_util__TM_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__TMs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_util__T_10;
        MR_Word parse_tree__prog_util__Ts_11;
        MR_Word parse_tree__prog_util__M_12;
        MR_Word parse_tree__prog_util__Ms_13;
        MR_Word parse_tree__prog_util__Result1_15;

        if (((MR_tag((MR_Word) parse_tree__prog_util__TM_7)) == (MR_mktag((MR_Integer) 1))))
          {
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
            parse_tree__prog_util__M_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 1)));
            parse_tree__prog_util__Result1_15 = parse_tree__prog_util__HeadVar__2_2;
          }
        else
          {
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
            parse_tree__prog_util__M_12 = (MR_Word) &parse_tree__prog_util_scalar_common_1[8];
            parse_tree__prog_util__Result1_15 = (MR_Integer) 0;
          }
        {
          parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TMs_8, parse_tree__prog_util__Result1_15, &parse_tree__prog_util__Ts_11, &parse_tree__prog_util__Ms_13, parse_tree__prog_util__Result_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__T_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ts_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ms_13));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_util__make_pred_name_with_context_7_p_0(
  MR_Word parse_tree__prog_util__ModuleName_8,
  MR_String parse_tree__prog_util__Prefix_9,
  MR_Word parse_tree__prog_util__PredOrFunc_10,
  MR_String parse_tree__prog_util__PredName_11,
  MR_Integer parse_tree__prog_util__Line_12,
  MR_Integer parse_tree__prog_util__Counter_13,
  MR_Word * parse_tree__prog_util__SymName_14)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Var_15;
    MR_Word parse_tree__prog_util__Var_16;

    {
      parse_tree__prog_util__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_15, 0) = ((MR_Box) (parse_tree__prog_util__PredOrFunc_10));
    }
    {
      parse_tree__prog_util__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_16, 0) = ((MR_Box) (parse_tree__prog_util__Line_12));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_16, 1) = ((MR_Box) (parse_tree__prog_util__Counter_13));
    }
    {
      parse_tree__prog_util__make_pred_name_6_p_0(parse_tree__prog_util__ModuleName_8, parse_tree__prog_util__Prefix_9, parse_tree__prog_util__Var_15, parse_tree__prog_util__PredName_11, parse_tree__prog_util__Var_16, parse_tree__prog_util__SymName_14);
    }
  }
}

void MR_CALL 
parse_tree__prog_util__make_pred_name_6_p_0(
  MR_Word parse_tree__prog_util__ModuleName_7,
  MR_String parse_tree__prog_util__Prefix_8,
  MR_Word parse_tree__prog_util__MaybePredOrFunc_9,
  MR_String parse_tree__prog_util__PredName_10,
  MR_Word parse_tree__prog_util__NewPredId_11,
  MR_Word * parse_tree__prog_util__SymName_12)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_String parse_tree__prog_util__PFS_14;
    MR_String parse_tree__prog_util__PredIdStr_17;
    MR_String parse_tree__prog_util__Name_32;
    MR_String parse_tree__prog_util__Var_94;
    MR_String parse_tree__prog_util__Var_95;
    MR_String parse_tree__prog_util__Var_97;
    MR_String parse_tree__prog_util__Var_98;
    MR_String parse_tree__prog_util__Var_100;

    if ((parse_tree__prog_util__MaybePredOrFunc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_util__PFS_14 = (MR_String) "pred_or_func";
    else
      {
        MR_Word parse_tree__prog_util__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybePredOrFunc_9, (MR_Integer) 0)));

        {
          parse_tree__prog_util__PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_util__PredOrFunc_13);
        }
      }
    switch (MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_util__PredIdStr_17 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Integer parse_tree__prog_util__Line_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_util__Counter_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
          MR_String parse_tree__prog_util__Var_77;
          MR_Word parse_tree__prog_util__Var_83 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
          MR_String parse_tree__prog_util__Var_85;
          MR_String parse_tree__prog_util__Var_86;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__Var_83, parse_tree__prog_util__Counter_16, &parse_tree__prog_util__Var_77);
          }
          {
            parse_tree__prog_util__Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__Var_77);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__Var_83, parse_tree__prog_util__Line_15, &parse_tree__prog_util__Var_86);
          }
          {
            parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__Var_86, parse_tree__prog_util__Var_85);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_util__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
          MR_Word parse_tree__prog_util__TypeSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

          {
            parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(parse_tree__prog_util__VarSet_18, parse_tree__prog_util__TypeSubst_19, &parse_tree__prog_util__PredIdStr_17);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

              {
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_74, &parse_tree__prog_util__PredIdStr_17);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

              {
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_27, &parse_tree__prog_util__PredIdStr_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer parse_tree__prog_util__ModeNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
              MR_String parse_tree__prog_util__ModeStr_29;
              MR_String parse_tree__prog_util__ArgsStr_30;
              MR_String parse_tree__prog_util__Var_34;
              MR_Word parse_tree__prog_util__Args_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 2)));

              {
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__ModeNum_28, &parse_tree__prog_util__ModeStr_29);
              }
              {
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_63, &parse_tree__prog_util__ArgsStr_30);
              }
              {
                parse_tree__prog_util__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__ArgsStr_30);
              }
              {
                parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__ModeStr_29, parse_tree__prog_util__Var_34);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer parse_tree__prog_util__Distance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

              {
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__Distance_31, &parse_tree__prog_util__PredIdStr_17);
              }
            }
            break;
        }
        break;
    }
    {
      parse_tree__prog_util__Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__PredIdStr_17);
    }
    {
      parse_tree__prog_util__Var_95 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__PredName_10, parse_tree__prog_util__Var_94);
    }
    {
      parse_tree__prog_util__Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__Var_95);
    }
    {
      parse_tree__prog_util__Var_98 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__PFS_14, parse_tree__prog_util__Var_97);
    }
    {
      parse_tree__prog_util__Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__Var_98);
    }
    {
      parse_tree__prog_util__Name_32 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__Prefix_8, parse_tree__prog_util__Var_100);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_util__SymName_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_32));
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
  MR_Word parse_tree__prog_util__Var_14,
  MR_Word parse_tree__prog_util__List_5,
  MR_String * parse_tree__prog_util__String_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Strings_7;
    MR_Word parse_tree__prog_util__Var_11;

    {
      parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__Var_14, parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[7]), &parse_tree__prog_util__Strings_7);
    }
    {
      parse_tree__prog_util__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_11, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__prog_util__Var_11, parse_tree__prog_util__String_6);
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_util__Var_23,
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
    else
      {
        MR_Word parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_util__String_15;
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
        else
          {
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
            MR_Word parse_tree__prog_util__T_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
            MR_String parse_tree__prog_util__String_34;
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
            else
              {
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

                {
                  parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__Var_23, parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
                {
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
                }
              }
            {
              parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__583__1_3_p_0(parse_tree__prog_util__Var_23, parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
            {
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
            }
            {
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
            }
          }
        {
          parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__583__1_3_p_0(parse_tree__prog_util__Var_23, parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__583__1_3_p_0(
  MR_Word parse_tree__prog_util__VarSet_18,
  MR_Word parse_tree__prog_util__LambdaHeadVar__1_37,
  MR_String * parse_tree__prog_util__LambdaHeadVar__2_38)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__LambdaHeadVar__1_37, (MR_Integer) 0)));
    MR_Word parse_tree__prog_util__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__LambdaHeadVar__1_37, (MR_Integer) 1)));
    MR_String parse_tree__prog_util__VarName_25;
    MR_String parse_tree__prog_util__TypeString_26;
    MR_Word parse_tree__prog_util__Var_40;
    MR_Word parse_tree__prog_util__Var_41;
    MR_Word parse_tree__prog_util__Var_43;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_18, parse_tree__prog_util__Var_23, &parse_tree__prog_util__VarName_25);
    }
    {
      parse_tree__prog_util__TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_util__VarSet_18, (MR_Integer) 0, parse_tree__prog_util__Type_24);
    }
    {
      parse_tree__prog_util__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_43, 0) = ((MR_Box) (parse_tree__prog_util__TypeString_26));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_util__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_41, 0) = ((MR_Box) ((MR_String) " = "));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_41, 1) = ((MR_Box) (parse_tree__prog_util__Var_43));
    }
    {
      parse_tree__prog_util__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_40, 0) = ((MR_Box) (parse_tree__prog_util__VarName_25));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_40, 1) = ((MR_Box) (parse_tree__prog_util__Var_41));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__prog_util__Var_40, parse_tree__prog_util__LambdaHeadVar__2_38);
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
  MR_Word parse_tree__prog_util__List_5,
  MR_String * parse_tree__prog_util__String_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Strings_7;
    MR_Word parse_tree__prog_util__Var_11;

    {
      parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[7]), &parse_tree__prog_util__Strings_7);
    }
    {
      parse_tree__prog_util__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_11, 0) = ((MR_Box) ((MR_String) "["));
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__prog_util__Var_11, parse_tree__prog_util__String_6);
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
  MR_Word parse_tree__prog_util__HeadVar__2_2,
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
    else
      {
        MR_Integer parse_tree__prog_util__T_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_util__String_15;
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
        else
          {
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
            MR_Integer parse_tree__prog_util__T_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
            MR_String parse_tree__prog_util__String_34;
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
            else
              {
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

                {
                  parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
                {
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
                }
              }
            {
              mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
            {
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
            }
            {
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
            }
          }
        {
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_1(
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Integer * parse_tree__prog_util__HeadVar__2_2,
  MR_Integer parse_tree__prog_util__Arity_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    switch (parse_tree__prog_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *parse_tree__prog_util__HeadVar__2_2 = (parse_tree__prog_util__Arity_3 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        *parse_tree__prog_util__HeadVar__2_2 = parse_tree__prog_util__Arity_3;
        break;
    }
  }
}

void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_0(
  MR_Word parse_tree__prog_util__HeadVar__1_1,
  MR_Integer parse_tree__prog_util__HeadVar__2_2,
  MR_Integer * parse_tree__prog_util__Arity_3)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    switch (parse_tree__prog_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *parse_tree__prog_util__Arity_3 = ((MR_Integer) 1 + parse_tree__prog_util__HeadVar__2_2);
        }
        break;
      case (MR_Integer) 0:
        *parse_tree__prog_util__Arity_3 = parse_tree__prog_util__HeadVar__2_2;
        break;
    }
  }
}

void MR_CALL 
parse_tree__prog_util__construct_qualified_term_3_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_8,
  MR_Word parse_tree__prog_util__SymName_4,
  MR_Word parse_tree__prog_util__Args_5,
  MR_Word * parse_tree__prog_util__Term_6)
{
  {
    MR_bool parse_tree__prog_util__succeeded;
    MR_Word parse_tree__prog_util__Context_7;

    {
      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_7);
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_8, parse_tree__prog_util__SymName_4, parse_tree__prog_util__Args_5, parse_tree__prog_util__Context_7, parse_tree__prog_util__Term_6);
    }
  }
}

void MR_CALL 
parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(
  MR_Word parse_tree__prog_util__TypeInfo_for_T_22,
  MR_Word parse_tree__prog_util__SymName_5,
  MR_Word parse_tree__prog_util__Args_6,
  MR_Word parse_tree__prog_util__Context_7,
  MR_Word * parse_tree__prog_util__Term_8)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_util__SymName_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_util__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 1)));
        MR_Word parse_tree__prog_util__ModuleTerm_11;
        MR_Word parse_tree__prog_util__UnqualifiedTerm_12;
        MR_Word parse_tree__prog_util__Var_15;
        MR_Word parse_tree__prog_util__Var_18;
        MR_Word parse_tree__prog_util__Var_19;

        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_22, parse_tree__prog_util__Module_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__Context_7, &parse_tree__prog_util__ModuleTerm_11);
        }
        {
          parse_tree__prog_util__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_15, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
        }
        {
          parse_tree__prog_util__UnqualifiedTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__Var_15));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
        }
        {
          parse_tree__prog_util__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_19, 0) = ((MR_Box) (parse_tree__prog_util__UnqualifiedTerm_12));
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_util__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_18, 0) = ((MR_Box) (parse_tree__prog_util__ModuleTerm_11));
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__Var_18, 1) = ((MR_Box) (parse_tree__prog_util__Var_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_util__Term_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Var_18));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
        }
      }
    else
      {
        MR_Word parse_tree__prog_util__Var_13;
        MR_String parse_tree__prog_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));

        {
          parse_tree__prog_util__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__Var_13, 0) = ((MR_Box) (parse_tree__prog_util__Name_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_util__Term_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
        }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    {
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____maybe_modes_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
    return parse_tree__prog_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2,
  MR_Box parse_tree__prog_util__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_util____Compare____maybe_modes_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
  MR_Box parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_util__succeeded;

    {
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____new_pred_id_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
    return parse_tree__prog_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
  MR_Box parse_tree__prog_util__wrapper_arg_2,
  MR_Box parse_tree__prog_util__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_util____Compare____new_pred_id_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
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

/* :- end_module parse_tree.prog_util. */
