/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 104 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 107 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 110 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 113 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2];

#line 116 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0;

#line 119 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 122 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 125 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 128 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 131 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2];

#line 134 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1;

#line 137 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 140 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1];

#line 143 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2;

#line 146 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1];

#line 149 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3;

#line 152 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4;

#line 155 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2];

#line 158 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5;

#line 161 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1];

#line 164 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6;

#line 167 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1];

#line 170 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1];

#line 173 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1];

#line 176 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4];

#line 179 "parse_tree.prog_util.c"
static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4];

#line 182 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7];

#line 185 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7];

#line 188 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 191 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 193 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 196 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 199 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 201 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 203 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 206 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 209 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 211 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 214 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 217 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 219 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 221 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 582 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 582 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 575 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 575 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 575 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 575 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 825 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 825 "prog_util.m"
  MR_Word parse_tree__prog_util__Qualifier_5,
#line 825 "prog_util.m"
  MR_Word parse_tree__prog_util__InnerTerm_6,
#line 825 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_7);

#line 582 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 582 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 575 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 575 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 575 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 546 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__546__1_3_p_0(
#line 546 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 546 "prog_util.m"
  MR_Word parse_tree__prog_util__LambdaHeadVar__1_37,
#line 546 "prog_util.m"
  MR_String * parse_tree__prog_util__LambdaHeadVar__2_38);

#line 848 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 848 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 848 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 848 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3);

#line 742 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 742 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 742 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 742 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 742 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 742 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 742 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 742 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18);

#line 516 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 516 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 516 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 516 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 516 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8);

#line 503 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 503 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 503 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 503 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 503 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8);

#line 493 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 493 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 493 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 493 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 493 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8);

#line 485 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 485 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4);

#line 477 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 477 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8);

#line 462 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 462 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 462 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 462 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 462 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8);

#line 262 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 262 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 262 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 262 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 262 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 262 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5);

#line 415 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
#line 415 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 415 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 415 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 378 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
#line 378 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 378 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 378 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 398 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 398 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 398 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 398 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 393 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
#line 393 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 393 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 393 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[5][1];

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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "]")),
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

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[5][1] = {
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
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "true"))
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



#line 582 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 590 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 598 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 606 "parse_tree.prog_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 623 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 629 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0 = {
  (MR_String) "newpred_counter",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 644 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 652 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 660 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 669 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 677 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 683 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1 = {
  (MR_String) "newpred_type_subst",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1,
  NULL,
  NULL,
  NULL
};

#line 698 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 706 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 711 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2 = {
  (MR_String) "newpred_unused_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2,
  NULL,
  NULL,
  NULL
};

#line 726 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 731 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3 = {
  (MR_String) "newpred_parallel_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3,
  NULL,
  NULL,
  NULL
};

#line 746 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4 = {
  (MR_String) "newpred_parallel_loop_control",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 761 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 767 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5 = {
  (MR_String) "newpred_structure_reuse",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5,
  NULL,
  NULL,
  NULL
};

#line 782 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 787 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6 = {
  (MR_String) "newpred_distance_granularity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6,
  NULL,
  NULL,
  NULL
};

#line 802 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4
};

#line 807 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0
};

#line 812 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1
};

#line 817 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6
};

#line 825 "parse_tree.prog_util.c"
static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3
  }
};

#line 849 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2
};

#line 860 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 871 "parse_tree.prog_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_new_pred_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 888 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 891 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 893 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 895 "parse_tree.prog_util.c"
{
#line 897 "parse_tree.prog_util.c"
  {
#line 899 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 902 "parse_tree.prog_util.c"
    {
#line 904 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____maybe_modes_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 907 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 909 "parse_tree.prog_util.c"
  }
#line 911 "parse_tree.prog_util.c"
}

#line 914 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 917 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 919 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 921 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 923 "parse_tree.prog_util.c"
{
#line 925 "parse_tree.prog_util.c"
  {
#line 927 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 930 "parse_tree.prog_util.c"
    {
#line 932 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____maybe_modes_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 935 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 937 "parse_tree.prog_util.c"
  }
#line 939 "parse_tree.prog_util.c"
}

#line 942 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 945 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 947 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 949 "parse_tree.prog_util.c"
{
#line 951 "parse_tree.prog_util.c"
  {
#line 953 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 956 "parse_tree.prog_util.c"
    {
#line 958 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____new_pred_id_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 961 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 963 "parse_tree.prog_util.c"
  }
#line 965 "parse_tree.prog_util.c"
}

#line 968 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 971 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 973 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 975 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 977 "parse_tree.prog_util.c"
{
#line 979 "parse_tree.prog_util.c"
  {
#line 981 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 984 "parse_tree.prog_util.c"
    {
#line 986 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____new_pred_id_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 989 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 991 "parse_tree.prog_util.c"
  }
#line 993 "parse_tree.prog_util.c"
}

#line 582 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 582 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 582 "prog_util.m"
{
#line 585 "prog_util.m"
  {
#line 585 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 585 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 585 "prog_util.m"
    else
#line 586 "prog_util.m"
      {
#line 586 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 586 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 586 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 586 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 589 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 589 "prog_util.m"
        else
#line 590 "prog_util.m"
          {
#line 590 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 590 "prog_util.m"
            MR_Word parse_tree__prog_util__T_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 590 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 590 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 590 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 589 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 589 "prog_util.m"
            else
#line 590 "prog_util.m"
              {
#line 590 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 591 "prog_util.m"
                {
#line 591 "prog_util.m"
                  parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 592 "prog_util.m"
                {
#line 592 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 592 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 592 "prog_util.m"
                }
#line 590 "prog_util.m"
              }
#line 594 "prog_util.m"
            {
#line 594 "prog_util.m"
              parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__546__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 595 "prog_util.m"
            {
#line 595 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 595 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 595 "prog_util.m"
            }
#line 592 "prog_util.m"
            {
#line 592 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 592 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 592 "prog_util.m"
            }
#line 590 "prog_util.m"
          }
#line 594 "prog_util.m"
        {
#line 594 "prog_util.m"
          parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__546__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 595 "prog_util.m"
        {
#line 595 "prog_util.m"
          MR_Word base;
#line 595 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 595 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 595 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 595 "prog_util.m"
        }
#line 586 "prog_util.m"
      }
#line 585 "prog_util.m"
  }
#line 582 "prog_util.m"
}

#line 575 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 575 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 575 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 575 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 575 "prog_util.m"
{
#line 578 "prog_util.m"
  {
#line 578 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 578 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 578 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 579 "prog_util.m"
    {
#line 579 "prog_util.m"
      parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_14_14, parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 580 "prog_util.m"
    {
#line 580 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 580 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 580 "prog_util.m"
    }
#line 580 "prog_util.m"
    {
#line 580 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
    }
#line 578 "prog_util.m"
  }
#line 575 "prog_util.m"
}

#line 825 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 825 "prog_util.m"
  MR_Word parse_tree__prog_util__Qualifier_5,
#line 825 "prog_util.m"
  MR_Word parse_tree__prog_util__InnerTerm_6,
#line 825 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_7)
#line 825 "prog_util.m"
{
#line 828 "prog_util.m"
  {
#line 828 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 828 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_8;
#line 828 "prog_util.m"
    MR_Word parse_tree__prog_util__QualifierTerm_10;
#line 828 "prog_util.m"
    MR_Word parse_tree__prog_util__V_19_19;
#line 828 "prog_util.m"
    MR_Word parse_tree__prog_util__V_20_20;

#line 833 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Qualifier_5)) == (MR_mktag((MR_Integer) 1))))
#line 834 "prog_util.m"
      {
#line 834 "prog_util.m"
        MR_Word parse_tree__prog_util__OuterQualifier_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Qualifier_5, (MR_Integer) 0)));
#line 834 "prog_util.m"
        MR_Word parse_tree__prog_util__InnerQualifierTerm_12;
#line 834 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 834 "prog_util.m"
        MR_String parse_tree__prog_util__InnerQualifier_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Qualifier_5, (MR_Integer) 1)));

#line 836 "prog_util.m"
        {
#line 836 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__InnerQualifier_22));
#line 836 "prog_util.m"
        }
#line 836 "prog_util.m"
        {
#line 836 "prog_util.m"
          parse_tree__prog_util__InnerQualifierTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 836 "prog_util.m"
        }
#line 837 "prog_util.m"
        {
#line 837 "prog_util.m"
          parse_tree__prog_util__QualifierTerm_10 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__OuterQualifier_11, parse_tree__prog_util__InnerQualifierTerm_12, parse_tree__prog_util__Context_7);
        }
#line 834 "prog_util.m"
      }
#line 833 "prog_util.m"
    else
#line 830 "prog_util.m"
      {
#line 830 "prog_util.m"
        MR_String parse_tree__prog_util__InnerQualifier_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Qualifier_5, (MR_Integer) 0)));
#line 830 "prog_util.m"
        MR_Word parse_tree__prog_util__V_15_15;

#line 832 "prog_util.m"
        {
#line 832 "prog_util.m"
          parse_tree__prog_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__InnerQualifier_9));
#line 832 "prog_util.m"
        }
#line 832 "prog_util.m"
        {
#line 832 "prog_util.m"
          parse_tree__prog_util__QualifierTerm_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 0) = ((MR_Box) (parse_tree__prog_util__V_15_15));
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 832 "prog_util.m"
        }
#line 830 "prog_util.m"
      }
#line 840 "prog_util.m"
    {
#line 840 "prog_util.m"
      parse_tree__prog_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_util__InnerTerm_6));
#line 840 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "prog_util.m"
    }
#line 840 "prog_util.m"
    {
#line 840 "prog_util.m"
      parse_tree__prog_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_util__QualifierTerm_10));
#line 840 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_util__V_20_20));
#line 840 "prog_util.m"
    }
#line 840 "prog_util.m"
    {
#line 840 "prog_util.m"
      parse_tree__prog_util__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 840 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 840 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 1) = ((MR_Box) (parse_tree__prog_util__V_19_19));
#line 840 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 840 "prog_util.m"
    }
#line 828 "prog_util.m"
    return parse_tree__prog_util__Term_8;
#line 828 "prog_util.m"
  }
#line 825 "prog_util.m"
}

#line 582 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 582 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 582 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 582 "prog_util.m"
{
#line 585 "prog_util.m"
  {
#line 585 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 585 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 585 "prog_util.m"
    else
#line 586 "prog_util.m"
      {
#line 586 "prog_util.m"
        MR_Integer parse_tree__prog_util__T_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 586 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 586 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 586 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 589 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 589 "prog_util.m"
        else
#line 590 "prog_util.m"
          {
#line 590 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 590 "prog_util.m"
            MR_Integer parse_tree__prog_util__T_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 590 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 590 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 590 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 589 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 589 "prog_util.m"
            else
#line 590 "prog_util.m"
              {
#line 590 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 591 "prog_util.m"
                {
#line 591 "prog_util.m"
                  parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 592 "prog_util.m"
                {
#line 592 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 592 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 592 "prog_util.m"
                }
#line 590 "prog_util.m"
              }
#line 594 "prog_util.m"
            {
#line 594 "prog_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 595 "prog_util.m"
            {
#line 595 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 595 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 595 "prog_util.m"
            }
#line 592 "prog_util.m"
            {
#line 592 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 592 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 592 "prog_util.m"
            }
#line 590 "prog_util.m"
          }
#line 594 "prog_util.m"
        {
#line 594 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 595 "prog_util.m"
        {
#line 595 "prog_util.m"
          MR_Word base;
#line 595 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 595 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 595 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 595 "prog_util.m"
        }
#line 586 "prog_util.m"
      }
#line 585 "prog_util.m"
  }
#line 582 "prog_util.m"
}

#line 575 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 575 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 575 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 575 "prog_util.m"
{
#line 578 "prog_util.m"
  {
#line 578 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 578 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 578 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 579 "prog_util.m"
    {
#line 579 "prog_util.m"
      parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 580 "prog_util.m"
    {
#line 580 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 580 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 580 "prog_util.m"
    }
#line 580 "prog_util.m"
    {
#line 580 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
    }
#line 578 "prog_util.m"
  }
#line 575 "prog_util.m"
}

#line 546 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__546__1_3_p_0(
#line 546 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 546 "prog_util.m"
  MR_Word parse_tree__prog_util__LambdaHeadVar__1_37,
#line 546 "prog_util.m"
  MR_String * parse_tree__prog_util__LambdaHeadVar__2_38)
#line 546 "prog_util.m"
{
#line 546 "prog_util.m"
  {
#line 546 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 546 "prog_util.m"
    MR_Word parse_tree__prog_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__LambdaHeadVar__1_37, (MR_Integer) 0)));
#line 546 "prog_util.m"
    MR_Word parse_tree__prog_util__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__LambdaHeadVar__1_37, (MR_Integer) 1)));
#line 546 "prog_util.m"
    MR_String parse_tree__prog_util__VarName_25;
#line 546 "prog_util.m"
    MR_String parse_tree__prog_util__TypeString_26;
#line 546 "prog_util.m"
    MR_Word parse_tree__prog_util__V_40_40;
#line 546 "prog_util.m"
    MR_Word parse_tree__prog_util__V_41_41;
#line 546 "prog_util.m"
    MR_Word parse_tree__prog_util__V_43_43;

#line 548 "prog_util.m"
    {
#line 548 "prog_util.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_18, parse_tree__prog_util__Var_23, &parse_tree__prog_util__VarName_25);
    }
#line 549 "prog_util.m"
    {
#line 549 "prog_util.m"
      parse_tree__prog_util__TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_util__VarSet_18, (MR_Integer) 0, parse_tree__prog_util__Type_24);
    }
#line 550 "prog_util.m"
    {
#line 550 "prog_util.m"
      parse_tree__prog_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_util__TypeString_26));
#line 550 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "prog_util.m"
    }
#line 550 "prog_util.m"
    {
#line 550 "prog_util.m"
      parse_tree__prog_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 0) = ((MR_Box) ((MR_String) " = "));
#line 550 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 1) = ((MR_Box) (parse_tree__prog_util__V_43_43));
#line 550 "prog_util.m"
    }
#line 550 "prog_util.m"
    {
#line 550 "prog_util.m"
      parse_tree__prog_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_util__VarName_25));
#line 550 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_util__V_41_41));
#line 550 "prog_util.m"
    }
#line 550 "prog_util.m"
    {
#line 550 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_40_40, parse_tree__prog_util__LambdaHeadVar__2_38);
    }
#line 546 "prog_util.m"
  }
#line 546 "prog_util.m"
}

#line 75 "prog_util.m"
void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0(
#line 75 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
#line 75 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 75 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 75 "prog_util.m"
{
#line 75 "prog_util.m"
  {
#line 75 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 75 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastX_133 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;
#line 75 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastY_134 = (MR_Integer) parse_tree__prog_util__HeadVar__3_3;

#line 75 "prog_util.m"
    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_133 == parse_tree__prog_util__CastY_134);
#line 75 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 1590 "parse_tree.prog_util.c"
      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "prog_util.m"
    else
#line 75 "prog_util.m"
#line 75 "prog_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) {
#line 75 "prog_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
        case (MR_Integer) 0:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
#line 75 "prog_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
            case (MR_Integer) 0:
#line 75 "prog_util.m"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 1:
#line 1614 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 2:
#line 1620 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                case (MR_Integer) 0:
#line 1633 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                  break;
#line 75 "prog_util.m"
                case (MR_Integer) 1:
#line 1639 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                  break;
#line 75 "prog_util.m"
                case (MR_Integer) 2:
#line 1645 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                  break;
#line 75 "prog_util.m"
                case (MR_Integer) 3:
#line 1651 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                  break;
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
        case (MR_Integer) 1:
#line 75 "prog_util.m"
          {
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "prog_util.m"
#line 75 "prog_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
#line 75 "prog_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
              case (MR_Integer) 0:
#line 1679 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 1:
#line 75 "prog_util.m"
                {
#line 75 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_8_8;

#line 75 "prog_util.m"
                  {
#line 75 "prog_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__V_8_8, parse_tree__prog_util__V_145_145, parse_tree__prog_util__V_6_6);
                  }
#line 1699 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_8_8 == (MR_Integer) 0);
#line 75 "prog_util.m"
                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 75 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_8_8;
#line 75 "prog_util.m"
                  else
#line 75 "prog_util.m"
                    {
#line 75 "prog_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__V_144_144, parse_tree__prog_util__V_7_7);
                    }
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 2:
#line 1720 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                  case (MR_Integer) 0:
#line 1733 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1739 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1745 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 1751 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
            }
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
        case (MR_Integer) 2:
#line 75 "prog_util.m"
          {
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "prog_util.m"
#line 75 "prog_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
#line 75 "prog_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
              case (MR_Integer) 0:
#line 1781 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 1:
#line 1787 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 2:
#line 75 "prog_util.m"
                {
#line 75 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_36_36;

#line 75 "prog_util.m"
                  {
#line 75 "prog_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[5], &parse_tree__prog_util__V_36_36, ((MR_Box) (parse_tree__prog_util__V_151_151)), ((MR_Box) (parse_tree__prog_util__V_34_34)));
                  }
#line 1807 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_36_36 == (MR_Integer) 0);
#line 75 "prog_util.m"
                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 75 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_36_36;
#line 75 "prog_util.m"
                  else
#line 75 "prog_util.m"
                    {
#line 75 "prog_util.m"
                      {
#line 75 "prog_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[6], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_150_150)), ((MR_Box) (parse_tree__prog_util__V_35_35)));
                      }
#line 75 "prog_util.m"
                    }
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                  case (MR_Integer) 0:
#line 1839 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1845 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1851 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 1857 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
            }
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
        case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
            case (MR_Integer) 0:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "prog_util.m"
#line 75 "prog_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
#line 75 "prog_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                  case (MR_Integer) 0:
#line 1892 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1898 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1904 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                      case (MR_Integer) 0:
#line 75 "prog_util.m"
                        {
#line 75 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "prog_util.m"
                          {
#line 75 "prog_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_152_152)), ((MR_Box) (parse_tree__prog_util__V_59_59)));
                          }
#line 75 "prog_util.m"
                        }
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 1:
#line 1933 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 2:
#line 1939 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 3:
#line 1945 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                    }
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 1:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "prog_util.m"
#line 75 "prog_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
#line 75 "prog_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                  case (MR_Integer) 0:
#line 1973 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1979 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1985 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                      case (MR_Integer) 0:
#line 1998 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 1:
#line 75 "prog_util.m"
                        {
#line 75 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "prog_util.m"
                          {
#line 75 "prog_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_147_147)), ((MR_Box) (parse_tree__prog_util__V_77_77)));
                          }
#line 75 "prog_util.m"
                        }
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 2:
#line 2020 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 3:
#line 2026 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                    }
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 2:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "prog_util.m"
#line 75 "prog_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
#line 75 "prog_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                  case (MR_Integer) 0:
#line 2056 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 2062 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 2068 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                      case (MR_Integer) 0:
#line 2081 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 1:
#line 2087 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 2:
#line 75 "prog_util.m"
                        {
#line 75 "prog_util.m"
                          MR_Integer parse_tree__prog_util__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_113_113;

#line 75 "prog_util.m"
                          {
#line 75 "prog_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__V_113_113, parse_tree__prog_util__V_149_149, parse_tree__prog_util__V_111_111);
                          }
#line 2107 "parse_tree.prog_util.c"
                          parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_113_113 == (MR_Integer) 0);
#line 75 "prog_util.m"
                          parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 75 "prog_util.m"
                          if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                            *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_113_113;
#line 75 "prog_util.m"
                          else
#line 75 "prog_util.m"
                            {
#line 75 "prog_util.m"
                              {
#line 75 "prog_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_148_148)), ((MR_Box) (parse_tree__prog_util__V_112_112)));
                              }
#line 75 "prog_util.m"
                            }
#line 75 "prog_util.m"
                        }
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 3:
#line 2132 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                    }
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 3:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "prog_util.m"
#line 75 "prog_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) {
#line 75 "prog_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                  case (MR_Integer) 0:
#line 2160 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 2166 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 2172 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
                      case (MR_Integer) 0:
#line 2185 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 1:
#line 2191 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 2:
#line 2197 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 3:
#line 75 "prog_util.m"
                        {
#line 75 "prog_util.m"
                          MR_Integer parse_tree__prog_util__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 75 "prog_util.m"
                          {
#line 75 "prog_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__V_146_146, parse_tree__prog_util__V_132_132);
                          }
#line 75 "prog_util.m"
                        }
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                    }
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
      }
#line 75 "prog_util.m"
  }
#line 75 "prog_util.m"
}

#line 75 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0(
#line 75 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 75 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 75 "prog_util.m"
{
#line 75 "prog_util.m"
  {
#line 75 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 75 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastX_23 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
#line 75 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastY_24 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

#line 75 "prog_util.m"
    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_23 == parse_tree__prog_util__CastY_24);
#line 75 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
      parse_tree__prog_util__succeeded = MR_TRUE;
#line 75 "prog_util.m"
    else
#line 75 "prog_util.m"
#line 75 "prog_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
#line 75 "prog_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
        case (MR_Integer) 0:
#line 75 "prog_util.m"
          {
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__CastX_15 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__CastY_16 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

#line 75 "prog_util.m"
            parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastY_16 == parse_tree__prog_util__CastX_15);
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
        case (MR_Integer) 1:
#line 75 "prog_util.m"
          {
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_5_5;
#line 75 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_6_6;

#line 75 "prog_util.m"
            parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 75 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                parse_tree__prog_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "prog_util.m"
                parse_tree__prog_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2307 "parse_tree.prog_util.c"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_3_3 == parse_tree__prog_util__V_5_5);
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 2311 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_4_4 == parse_tree__prog_util__V_6_6);
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
        case (MR_Integer) 2:
#line 75 "prog_util.m"
          {
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_27_27;
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_28_28;
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__V_9_9;
#line 75 "prog_util.m"
            MR_Word parse_tree__prog_util__V_10_10;

#line 75 "prog_util.m"
            parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 75 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                parse_tree__prog_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "prog_util.m"
                parse_tree__prog_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2346 "parse_tree.prog_util.c"
                parse_tree__prog_util__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_util_scalar_common_1[5];
#line 2348 "parse_tree.prog_util.c"
                {
#line 2350 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_util__V_7_7)), ((MR_Box) (parse_tree__prog_util__V_9_9)));
                }
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                  {
#line 2357 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_util_scalar_common_1[6];
#line 2359 "parse_tree.prog_util.c"
                    {
#line 2361 "parse_tree.prog_util.c"
                      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_util__V_8_8)), ((MR_Box) (parse_tree__prog_util__V_10_10)));
                    }
#line 75 "prog_util.m"
                  }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
        case (MR_Integer) 3:
#line 75 "prog_util.m"
#line 75 "prog_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 75 "prog_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "prog_util.m"
            case (MR_Integer) 0:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__TypeInfo_29_29;
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_12_12;

#line 75 "prog_util.m"
                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                  {
#line 75 "prog_util.m"
                    parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2398 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2400 "parse_tree.prog_util.c"
                    {
#line 2402 "parse_tree.prog_util.c"
                      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_util__V_11_11)), ((MR_Box) (parse_tree__prog_util__V_12_12)));
                    }
#line 75 "prog_util.m"
                  }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 1:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__TypeInfo_25_25;
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_14_14;

#line 75 "prog_util.m"
                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                  {
#line 75 "prog_util.m"
                    parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2430 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2432 "parse_tree.prog_util.c"
                    {
#line 2434 "parse_tree.prog_util.c"
                      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_25_25, ((MR_Box) (parse_tree__prog_util__V_13_13)), ((MR_Box) (parse_tree__prog_util__V_14_14)));
                    }
#line 75 "prog_util.m"
                  }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 2:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__TypeInfo_26_26;
#line 75 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_19_19;
#line 75 "prog_util.m"
                MR_Word parse_tree__prog_util__V_20_20;

#line 75 "prog_util.m"
                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                  {
#line 75 "prog_util.m"
                    parse_tree__prog_util__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "prog_util.m"
                    parse_tree__prog_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
#line 2468 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_17_17 == parse_tree__prog_util__V_19_19);
#line 75 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                      {
#line 2474 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2476 "parse_tree.prog_util.c"
                        {
#line 2478 "parse_tree.prog_util.c"
                          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_util__V_18_18)), ((MR_Box) (parse_tree__prog_util__V_20_20)));
                        }
#line 75 "prog_util.m"
                      }
#line 75 "prog_util.m"
                  }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 3:
#line 75 "prog_util.m"
              {
#line 75 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_22_22;

#line 75 "prog_util.m"
                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                  {
#line 75 "prog_util.m"
                    parse_tree__prog_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2506 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_21_21 == parse_tree__prog_util__V_22_22);
#line 75 "prog_util.m"
                  }
#line 75 "prog_util.m"
              }
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
          }
#line 75 "prog_util.m"
          break;
#line 75 "prog_util.m"
      }
#line 75 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 75 "prog_util.m"
  }
#line 75 "prog_util.m"
}

#line 95 "prog_util.m"
void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0(
#line 95 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
#line 95 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 95 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 95 "prog_util.m"
{
#line 95 "prog_util.m"
  {
#line 95 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 95 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar1_4 = parse_tree__prog_util__HeadVar__2_2;
#line 95 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar2_5 = parse_tree__prog_util__HeadVar__3_3;

#line 95 "prog_util.m"
    {
#line 95 "prog_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_5)));
    }
#line 95 "prog_util.m"
  }
#line 95 "prog_util.m"
}

#line 95 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0(
#line 95 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 95 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 95 "prog_util.m"
{
#line 95 "prog_util.m"
  {
#line 95 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 95 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar1_3 = parse_tree__prog_util__HeadVar__1_1;
#line 95 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar2_4 = parse_tree__prog_util__HeadVar__2_2;

#line 95 "prog_util.m"
    {
#line 95 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_4)));
    }
#line 95 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 95 "prog_util.m"
  }
#line 95 "prog_util.m"
}

#line 848 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 848 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 848 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 848 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 848 "prog_util.m"
{
#line 850 "prog_util.m"
  {
#line 850 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 850 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 850 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "prog_util.m"
      parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__HeadVar__2_2;
#line 850 "prog_util.m"
    else
#line 851 "prog_util.m"
      {
#line 851 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 851 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 851 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;

#line 852 "prog_util.m"
        {
#line 852 "prog_util.m"
          parse_tree__prog_util__V_11_11 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal1_9, parse_tree__prog_util__Goals_10);
        }
#line 852 "prog_util.m"
        {
#line 852 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 852 "prog_util.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 852 "prog_util.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__HeadVar__2_2));
#line 852 "prog_util.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 852 "prog_util.m"
        }
#line 851 "prog_util.m"
      }
#line 850 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 850 "prog_util.m"
  }
#line 848 "prog_util.m"
}

#line 742 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 742 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 742 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 742 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 742 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 742 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 742 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 742 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18)
#line 742 "prog_util.m"
{
#line 746 "prog_util.m"
  {
#line 746 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = (parse_tree__prog_util__N_8 == parse_tree__prog_util__Max_9);

#line 746 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 747 "prog_util.m"
      {
#line 747 "prog_util.m"
        *parse_tree__prog_util__Vars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 747 "prog_util.m"
        *parse_tree__prog_util__STATE_VARIABLE_VarSet_18 = parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17;
#line 747 "prog_util.m"
      }
#line 746 "prog_util.m"
    else
#line 749 "prog_util.m"
      {
#line 749 "prog_util.m"
        MR_Integer parse_tree__prog_util__N1_12 = (parse_tree__prog_util__N_8 + (MR_Integer) 1);
#line 749 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_13;
#line 749 "prog_util.m"
        MR_String parse_tree__prog_util__Num_14;
#line 749 "prog_util.m"
        MR_String parse_tree__prog_util__VarName_15;
#line 749 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars1_16;
#line 749 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20;
#line 749 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21;

#line 750 "prog_util.m"
        {
#line 750 "prog_util.m"
          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeInfo_for_T_23, &parse_tree__prog_util__Var_13, parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17, &parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20);
        }
#line 751 "prog_util.m"
        {
#line 751 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__N1_12, &parse_tree__prog_util__Num_14);
        }
#line 752 "prog_util.m"
        {
#line 752 "prog_util.m"
          mercury__string__append_3_p_2(parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Num_14, &parse_tree__prog_util__VarName_15);
        }
#line 753 "prog_util.m"
        {
#line 753 "prog_util.m"
          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__Var_13, parse_tree__prog_util__VarName_15, parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20, &parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21);
        }
#line 755 "prog_util.m"
        {
#line 755 "prog_util.m"
          parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__BaseName_7, parse_tree__prog_util__N1_12, parse_tree__prog_util__Max_9, &parse_tree__prog_util__Vars1_16, parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21, parse_tree__prog_util__STATE_VARIABLE_VarSet_18);
        }
#line 754 "prog_util.m"
        {
#line 754 "prog_util.m"
          MR_Word base;
#line 754 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "prog_util.m"
          *parse_tree__prog_util__Vars_10 = base;
#line 754 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
#line 754 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars1_16));
#line 754 "prog_util.m"
        }
#line 749 "prog_util.m"
      }
#line 746 "prog_util.m"
  }
#line 742 "prog_util.m"
}

#line 516 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 516 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 516 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 516 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 516 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8)
#line 516 "prog_util.m"
{
#line 519 "prog_util.m"
  {
#line 519 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 519 "prog_util.m"
    MR_Word parse_tree__prog_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 0)));
#line 519 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 1)));
#line 519 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_11;
#line 519 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_12;

#line 521 "prog_util.m"
    {
#line 521 "prog_util.m"
      mercury__term__rename_var_in_term_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Term0_9, &parse_tree__prog_util__Term_11);
    }
#line 522 "prog_util.m"
    {
#line 522 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_10, &parse_tree__prog_util__Goal_12);
    }
#line 523 "prog_util.m"
    {
#line 523 "prog_util.m"
      MR_Word base;
#line 523 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_util.m"
      *parse_tree__prog_util__Catch_8 = base;
#line 523 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Term_11));
#line 523 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_12));
#line 523 "prog_util.m"
    }
#line 519 "prog_util.m"
  }
#line 516 "prog_util.m"
}

#line 503 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 503 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 503 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 503 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 503 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8)
#line 503 "prog_util.m"
{
#line 508 "prog_util.m"
  {
#line 508 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 508 "prog_util.m"
    if ((parse_tree__prog_util__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "prog_util.m"
      *parse_tree__prog_util__MaybeVar_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "prog_util.m"
    else
#line 508 "prog_util.m"
      {
#line 508 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVar0_7, (MR_Integer) 0)));
#line 508 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_10;

#line 497 "prog_util.m"
        {
#line 497 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 498 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 500 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
#line 510 "prog_util.m"
        {
#line 510 "prog_util.m"
          MR_Word base;
#line 510 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_util.m"
          *parse_tree__prog_util__MaybeVar_8 = base;
#line 510 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
#line 510 "prog_util.m"
        }
#line 508 "prog_util.m"
      }
#line 508 "prog_util.m"
  }
#line 503 "prog_util.m"
}

#line 493 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 493 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 493 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 493 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 493 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8)
#line 493 "prog_util.m"
{
#line 497 "prog_util.m"
  {
#line 497 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 497 "prog_util.m"
    {
#line 497 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_7)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 497 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 498 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
    else
#line 500 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__Var0_7;
#line 497 "prog_util.m"
  }
#line 493 "prog_util.m"
}

#line 485 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 485 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 485 "prog_util.m"
{
#line 488 "prog_util.m"
  {
#line 488 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 488 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "prog_util.m"
    else
#line 489 "prog_util.m"
      {
#line 489 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 489 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 489 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_11;
#line 489 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars_12;

#line 497 "prog_util.m"
        {
#line 497 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_1)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 498 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__NewVar_2;
#line 497 "prog_util.m"
        else
#line 500 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__Var0_9;
#line 491 "prog_util.m"
        {
#line 491 "prog_util.m"
          parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_1, parse_tree__prog_util__NewVar_2, parse_tree__prog_util__Vars0_10, &parse_tree__prog_util__Vars_12);
        }
#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          MR_Word base;
#line 489 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 489 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_11));
#line 489 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_12));
#line 489 "prog_util.m"
        }
#line 489 "prog_util.m"
      }
#line 488 "prog_util.m"
  }
#line 485 "prog_util.m"
}

#line 477 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 477 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8)
#line 477 "prog_util.m"
{
#line 480 "prog_util.m"
  {
#line 480 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 480 "prog_util.m"
    MR_String parse_tree__prog_util__MutableName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 0)));
#line 480 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 1)));
#line 480 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar_11;

#line 497 "prog_util.m"
    {
#line 497 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__StateVar0_10)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 497 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 498 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
    else
#line 500 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__StateVar0_10;
#line 483 "prog_util.m"
    {
#line 483 "prog_util.m"
      MR_Word base;
#line 483 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "prog_util.m"
      *parse_tree__prog_util__TMV_8 = base;
#line 483 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__MutableName_9));
#line 483 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__StateVar_11));
#line 483 "prog_util.m"
    }
#line 480 "prog_util.m"
  }
#line 477 "prog_util.m"
}

#line 462 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 462 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 462 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 462 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 462 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8)
#line 462 "prog_util.m"
{
#line 467 "prog_util.m"
  {
#line 467 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 467 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Comp0_7)) == (MR_mktag((MR_Integer) 0))))
#line 467 "prog_util.m"
      {
#line 467 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 467 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar_10;

#line 497 "prog_util.m"
        {
#line 497 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__SVar0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 498 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 500 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__SVar0_9;
#line 469 "prog_util.m"
        {
#line 469 "prog_util.m"
          MR_Word base;
#line 469 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 469 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__SVar_10));
#line 469 "prog_util.m"
        }
#line 467 "prog_util.m"
      }
#line 467 "prog_util.m"
    else
#line 471 "prog_util.m"
      {
#line 471 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 471 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 1)));
#line 471 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar_13;
#line 471 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar_14;

#line 497 "prog_util.m"
        {
#line 497 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__IVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 498 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 500 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__IVar0_11;
#line 497 "prog_util.m"
        {
#line 497 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__OVar0_12)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 498 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 500 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__OVar0_12;
#line 474 "prog_util.m"
        {
#line 474 "prog_util.m"
          MR_Word base;
#line 474 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 474 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__IVar_13));
#line 474 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__OVar_14));
#line 474 "prog_util.m"
        }
#line 471 "prog_util.m"
      }
#line 467 "prog_util.m"
  }
#line 462 "prog_util.m"
}

#line 262 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 262 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 262 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 262 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 262 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 262 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5)
#line 262 "prog_util.m"
{
#line 266 "prog_util.m"
  {
#line 266 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 266 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "prog_util.m"
      {
#line 266 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "prog_util.m"
        *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "prog_util.m"
        *parse_tree__prog_util__Result_5 = parse_tree__prog_util__HeadVar__2_2;
#line 266 "prog_util.m"
      }
#line 266 "prog_util.m"
    else
#line 267 "prog_util.m"
      {
#line 267 "prog_util.m"
        MR_Word parse_tree__prog_util__TM_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "prog_util.m"
        MR_Word parse_tree__prog_util__TMs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10;
#line 267 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11;
#line 267 "prog_util.m"
        MR_Word parse_tree__prog_util__M_12;
#line 267 "prog_util.m"
        MR_Word parse_tree__prog_util__Ms_13;
#line 267 "prog_util.m"
        MR_Word parse_tree__prog_util__Result1_15;

#line 278 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__TM_7)) == (MR_mktag((MR_Integer) 1))))
#line 279 "prog_util.m"
          {
#line 279 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 279 "prog_util.m"
            parse_tree__prog_util__M_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 1)));
#line 279 "prog_util.m"
            parse_tree__prog_util__Result1_15 = parse_tree__prog_util__HeadVar__2_2;
#line 279 "prog_util.m"
          }
#line 278 "prog_util.m"
        else
#line 278 "prog_util.m"
          {
#line 278 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 278 "prog_util.m"
            parse_tree__prog_util__M_12 = (MR_Word) &parse_tree__prog_util_scalar_common_1[7];
#line 278 "prog_util.m"
            parse_tree__prog_util__Result1_15 = (MR_Integer) 0;
#line 278 "prog_util.m"
          }
#line 269 "prog_util.m"
        {
#line 269 "prog_util.m"
          parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TMs_8, parse_tree__prog_util__Result1_15, &parse_tree__prog_util__Ts_11, &parse_tree__prog_util__Ms_13, parse_tree__prog_util__Result_5);
        }
#line 267 "prog_util.m"
        {
#line 267 "prog_util.m"
          MR_Word base;
#line 267 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 267 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__T_10));
#line 267 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ts_11));
#line 267 "prog_util.m"
        }
#line 267 "prog_util.m"
        {
#line 267 "prog_util.m"
          MR_Word base;
#line 267 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 267 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_12));
#line 267 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ms_13));
#line 267 "prog_util.m"
        }
#line 267 "prog_util.m"
      }
#line 266 "prog_util.m"
  }
#line 262 "prog_util.m"
}

#line 206 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_f_0(
#line 206 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 206 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 206 "prog_util.m"
{
#line 844 "prog_util.m"
  {
#line 844 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 844 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 844 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "prog_util.m"
      {
#line 844 "prog_util.m"
        parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_util.m"
        MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 844 "prog_util.m"
        MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 844 "prog_util.m"
      }
#line 844 "prog_util.m"
    else
#line 845 "prog_util.m"
      {
#line 845 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 845 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 846 "prog_util.m"
        {
#line 846 "prog_util.m"
          parse_tree__prog_util__HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal_6, parse_tree__prog_util__Goals_7);
        }
#line 845 "prog_util.m"
      }
#line 844 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 844 "prog_util.m"
  }
#line 206 "prog_util.m"
}

#line 199 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__sym_name_and_args_to_term_3_f_0(
#line 199 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_15,
#line 199 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 199 "prog_util.m"
  MR_Word parse_tree__prog_util__Xs_2,
#line 199 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 199 "prog_util.m"
{
#line 818 "prog_util.m"
  {
#line 818 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 818 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 818 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 821 "prog_util.m"
      {
#line 821 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 821 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 821 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 821 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 823 "prog_util.m"
        {
#line 823 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 823 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 823 "prog_util.m"
        }
#line 823 "prog_util.m"
        {
#line 823 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 823 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 823 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 823 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 823 "prog_util.m"
        }
#line 822 "prog_util.m"
        {
#line 822 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_9, parse_tree__prog_util__V_13_13, parse_tree__prog_util__Context_3);
        }
#line 821 "prog_util.m"
      }
#line 818 "prog_util.m"
    else
#line 818 "prog_util.m"
      {
#line 818 "prog_util.m"
        MR_String parse_tree__prog_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 818 "prog_util.m"
        MR_Word parse_tree__prog_util__V_8_8;

#line 819 "prog_util.m"
        {
#line 819 "prog_util.m"
          parse_tree__prog_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 819 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_5));
#line 819 "prog_util.m"
        }
#line 819 "prog_util.m"
        {
#line 819 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 819 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 819 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 819 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 819 "prog_util.m"
        }
#line 818 "prog_util.m"
      }
#line 818 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 818 "prog_util.m"
  }
#line 199 "prog_util.m"
}

#line 190 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_new_tvars_8_p_0(
#line 190 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 190 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_2,
#line 190 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3,
#line 190 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarSet_4,
#line 190 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5,
#line 190 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6,
#line 190 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7,
#line 190 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8)
#line 190 "prog_util.m"
{
#line 795 "prog_util.m"
  while (MR_TRUE)
#line 795 "prog_util.m"
    {
#line 795 "prog_util.m"
      /* tailcall optimized into a loop */
#line 795 "prog_util.m"
      {
#line 795 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;

#line 795 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "prog_util.m"
          {
#line 795 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 795 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 795 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarSet_4 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 795 "prog_util.m"
          }
#line 795 "prog_util.m"
        else
#line 796 "prog_util.m"
          {
#line 796 "prog_util.m"
            MR_Word parse_tree__prog_util__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 796 "prog_util.m"
            MR_Word parse_tree__prog_util__TVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 796 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;
#line 796 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 796 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 797 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 797 "prog_util.m"
            {
#line 797 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__map__contains_2_p_0(parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (parse_tree__prog_util__TVar_19)));
            }
#line 797 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 798 "prog_util.m"
              {
#line 798 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 798 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 798 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 798 "prog_util.m"
              }
#line 797 "prog_util.m"
            else
#line 800 "prog_util.m"
              {
#line 800 "prog_util.m"
                MR_String parse_tree__prog_util__TVarName_25;

#line 800 "prog_util.m"
                {
#line 800 "prog_util.m"
                  parse_tree__prog_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_2, parse_tree__prog_util__TVar_19, &parse_tree__prog_util__TVarName_25);
                }
#line 800 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 801 "prog_util.m"
                  {
#line 801 "prog_util.m"
                    MR_Word parse_tree__prog_util__TVarSetVar_26;
#line 801 "prog_util.m"
                    MR_Box parse_tree__prog_util__conv0_TVarSetVar_26;

#line 801 "prog_util.m"
                    {
#line 801 "prog_util.m"
                      parse_tree__prog_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_util_scalar_common_1[0], parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (parse_tree__prog_util__TVarName_25)), &parse_tree__prog_util__conv0_TVarSetVar_26);
                    }
#line 801 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 801 "prog_util.m"
                      {
#line 801 "prog_util.m"
                        parse_tree__prog_util__TVarSetVar_26 = ((MR_Word) parse_tree__prog_util__conv0_TVarSetVar_26);
#line 801 "prog_util.m"
                        parse_tree__prog_util__succeeded = MR_TRUE;
#line 801 "prog_util.m"
                      }
#line 801 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 802 "prog_util.m"
                      {
#line 802 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_49_49 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 802 "prog_util.m"
                        {
#line 802 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_49_49, parse_tree__prog_util__TypeInfo_49_49, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__TVarSetVar_26)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 802 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 802 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 802 "prog_util.m"
                      }
#line 801 "prog_util.m"
                    else
#line 804 "prog_util.m"
                      {
#line 804 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 804 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_52_52;
#line 804 "prog_util.m"
                        MR_Word parse_tree__prog_util__NewTVar_27;
#line 804 "prog_util.m"
                        MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35;

#line 804 "prog_util.m"
                        {
#line 804 "prog_util.m"
                          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, &parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35);
                        }
#line 805 "prog_util.m"
                        {
#line 805 "prog_util.m"
                          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__TVarName_25, parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                        }
#line 3562 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 806 "prog_util.m"
                        {
#line 806 "prog_util.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVarName_25)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, &parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37);
                        }
#line 807 "prog_util.m"
                        {
#line 807 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_52_52, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 804 "prog_util.m"
                      }
#line 801 "prog_util.m"
                  }
#line 800 "prog_util.m"
                else
#line 810 "prog_util.m"
                  {
#line 810 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_54_54;
#line 810 "prog_util.m"
                    MR_Word parse_tree__prog_util__NewTVar_44;

#line 810 "prog_util.m"
                    {
#line 810 "prog_util.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__prog_util__NewTVar_44, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                    }
#line 3592 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_54_54 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 811 "prog_util.m"
                    {
#line 811 "prog_util.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_54_54, parse_tree__prog_util__TypeInfo_54_54, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_44)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                    }
#line 810 "prog_util.m"
                    parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 810 "prog_util.m"
                  }
#line 800 "prog_util.m"
              }
#line 814 "prog_util.m"
            /* direct tailcall eliminated */
#line 814 "prog_util.m"
            {
#line 814 "prog_util.m"
              MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__TVars_20;
#line 814 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 814 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 814 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;

#line 814 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7;
#line 814 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5;
#line 814 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3;
#line 814 "prog_util.m"
              parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 814 "prog_util.m"
            }
#line 814 "prog_util.m"
            continue;
#line 796 "prog_util.m"
          }
#line 795 "prog_util.m"
      }
#line 795 "prog_util.m"
      break;
#line 795 "prog_util.m"
    }
#line 190 "prog_util.m"
}

#line 183 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__parse_rule_term_4_p_0(
#line 183 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_20,
#line 183 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_5,
#line 183 "prog_util.m"
  MR_Word parse_tree__prog_util__RuleTerm_6,
#line 183 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadTerm_7,
#line 183 "prog_util.m"
  MR_Word * parse_tree__prog_util__GoalTerm_8)
#line 183 "prog_util.m"
{
#line 785 "prog_util.m"
  {
#line 785 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RuleTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 785 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadTerm0_9;
#line 785 "prog_util.m"
    MR_Word parse_tree__prog_util__GoalTerm0_10;
#line 786 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 786 "prog_util.m"
    MR_String parse_tree__prog_util__V_13_13;
#line 786 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 786 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 786 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;
#line 786 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 786 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 786 "prog_util.m"
      {
#line 786 "prog_util.m"
        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 0)));
#line 786 "prog_util.m"
        parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 1)));
#line 786 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 2)));
#line 786 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 786 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 786 "prog_util.m"
          {
#line 786 "prog_util.m"
            parse_tree__prog_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, (MR_Integer) 0)));
#line 786 "prog_util.m"
            parse_tree__prog_util__succeeded = (strcmp(parse_tree__prog_util__V_13_13, (MR_String) ":-") == 0);
#line 786 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 786 "prog_util.m"
              {
#line 786 "prog_util.m"
                parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 786 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 786 "prog_util.m"
                  {
#line 786 "prog_util.m"
                    parse_tree__prog_util__HeadTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 0)));
#line 786 "prog_util.m"
                    parse_tree__prog_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 1)));
#line 786 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 786 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 786 "prog_util.m"
                      {
#line 786 "prog_util.m"
                        parse_tree__prog_util__GoalTerm0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 0)));
#line 786 "prog_util.m"
                        parse_tree__prog_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 1)));
#line 786 "prog_util.m"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 786 "prog_util.m"
                      }
#line 786 "prog_util.m"
                  }
#line 786 "prog_util.m"
              }
#line 786 "prog_util.m"
          }
#line 786 "prog_util.m"
      }
#line 785 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 788 "prog_util.m"
      {
#line 788 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__HeadTerm0_9;
#line 789 "prog_util.m"
        *parse_tree__prog_util__GoalTerm_8 = parse_tree__prog_util__GoalTerm0_10;
#line 788 "prog_util.m"
      }
#line 785 "prog_util.m"
    else
#line 791 "prog_util.m"
      {
#line 791 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__RuleTerm_6;
#line 792 "prog_util.m"
        {
#line 792 "prog_util.m"
          MR_Word base;
#line 792 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_util.m"
          *parse_tree__prog_util__GoalTerm_8 = base;
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[4]));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_5));
#line 792 "prog_util.m"
        }
#line 791 "prog_util.m"
      }
#line 785 "prog_util.m"
  }
#line 183 "prog_util.m"
}

#line 178 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_state_args_det_4_p_0(
#line 178 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_15,
#line 178 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 178 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 178 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 178 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 178 "prog_util.m"
{
#line 774 "prog_util.m"
  {
#line 774 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 774 "prog_util.m"
    MR_Word parse_tree__prog_util__ArgsPrime_9;
#line 774 "prog_util.m"
    MR_Box parse_tree__prog_util__State0Prime_10;
#line 774 "prog_util.m"
    MR_Box parse_tree__prog_util__StatePrime_11;
#line 768 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_20;
#line 768 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_21;
#line 768 "prog_util.m"
    MR_Word parse_tree__prog_util__V_22_22;

#line 769 "prog_util.m"
    {
#line 769 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_15, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_20);
    }
#line 770 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_20)) == (MR_mktag((MR_Integer) 1)));
#line 770 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 770 "prog_util.m"
      {
#line 770 "prog_util.m"
        parse_tree__prog_util__StatePrime_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_20, (MR_Integer) 0));
#line 770 "prog_util.m"
        parse_tree__prog_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_20, (MR_Integer) 1)));
#line 770 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 770 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 770 "prog_util.m"
          {
#line 770 "prog_util.m"
            parse_tree__prog_util__State0Prime_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, (MR_Integer) 0));
#line 770 "prog_util.m"
            parse_tree__prog_util__RevArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, (MR_Integer) 1)));
#line 771 "prog_util.m"
            {
#line 771 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_15, parse_tree__prog_util__RevArgs_21, &parse_tree__prog_util__ArgsPrime_9);
            }
#line 771 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 770 "prog_util.m"
          }
#line 770 "prog_util.m"
      }
#line 774 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 775 "prog_util.m"
      {
#line 775 "prog_util.m"
        *parse_tree__prog_util__Args_6 = parse_tree__prog_util__ArgsPrime_9;
#line 776 "prog_util.m"
        *parse_tree__prog_util__State0_7 = parse_tree__prog_util__State0Prime_10;
#line 777 "prog_util.m"
        *parse_tree__prog_util__State_8 = parse_tree__prog_util__StatePrime_11;
#line 775 "prog_util.m"
      }
#line 774 "prog_util.m"
    else
#line 779 "prog_util.m"
      {
#line 779 "prog_util.m"
        {
#line 779 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4", (MR_String) "get_state_args failed");
#line 779 "prog_util.m"
          return;
        }
#line 779 "prog_util.m"
      }
#line 774 "prog_util.m"
  }
#line 178 "prog_util.m"
}

#line 173 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__get_state_args_4_p_0(
#line 173 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 173 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 173 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 173 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 173 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 173 "prog_util.m"
{
#line 768 "prog_util.m"
  {
#line 768 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 768 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_9;
#line 768 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_10;
#line 768 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 769 "prog_util.m"
    {
#line 769 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_9);
    }
#line 770 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_9)) == (MR_mktag((MR_Integer) 1)));
#line 770 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 770 "prog_util.m"
      {
#line 770 "prog_util.m"
        *parse_tree__prog_util__State_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 0));
#line 770 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 1)));
#line 770 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 770 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 770 "prog_util.m"
          {
#line 770 "prog_util.m"
            *parse_tree__prog_util__State0_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 0));
#line 770 "prog_util.m"
            parse_tree__prog_util__RevArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 1)));
#line 771 "prog_util.m"
            {
#line 771 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__RevArgs_10, parse_tree__prog_util__Args_6);
            }
#line 771 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 770 "prog_util.m"
          }
#line 770 "prog_util.m"
      }
#line 768 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 768 "prog_util.m"
  }
#line 173 "prog_util.m"
}

#line 168 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__pred_args_to_func_args_3_p_0(
#line 168 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_17,
#line 168 "prog_util.m"
  MR_Word parse_tree__prog_util__PredArgs_4,
#line 168 "prog_util.m"
  MR_Word * parse_tree__prog_util__FuncArgs_5,
#line 168 "prog_util.m"
  MR_Box * parse_tree__prog_util__FuncReturn_6)
#line 168 "prog_util.m"
{
#line 758 "prog_util.m"
  {
#line 758 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 758 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumPredArgs_7;
#line 758 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumFuncArgs_8;
#line 761 "prog_util.m"
    MR_Word parse_tree__prog_util__FuncArgs0_9;
#line 761 "prog_util.m"
    MR_Box parse_tree__prog_util__FuncReturn0_10;
#line 761 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 761 "prog_util.m"
    MR_Word parse_tree__prog_util__V_18_18;

#line 759 "prog_util.m"
    {
#line 759 "prog_util.m"
      mercury__list__length_2_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__NumPredArgs_7);
    }
#line 760 "prog_util.m"
    parse_tree__prog_util__NumFuncArgs_8 = (parse_tree__prog_util__NumPredArgs_7 - (MR_Integer) 1);
#line 761 "prog_util.m"
    {
#line 761 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__list__split_list_4_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__NumFuncArgs_8, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__FuncArgs0_9, &parse_tree__prog_util__V_12_12);
    }
#line 761 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 761 "prog_util.m"
      {
#line 761 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 761 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 761 "prog_util.m"
          {
#line 761 "prog_util.m"
            parse_tree__prog_util__FuncReturn0_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 0));
#line 761 "prog_util.m"
            parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 1)));
#line 761 "prog_util.m"
            {
#line 761 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_util__TypeInfo_for_T_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__V_18_18);
            }
#line 761 "prog_util.m"
          }
#line 761 "prog_util.m"
      }
#line 761 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 762 "prog_util.m"
      {
#line 762 "prog_util.m"
        *parse_tree__prog_util__FuncArgs_5 = parse_tree__prog_util__FuncArgs0_9;
#line 763 "prog_util.m"
        *parse_tree__prog_util__FuncReturn_6 = parse_tree__prog_util__FuncReturn0_10;
#line 762 "prog_util.m"
      }
#line 761 "prog_util.m"
    else
#line 765 "prog_util.m"
      {
#line 765 "prog_util.m"
        {
#line 765 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
#line 765 "prog_util.m"
          return;
        }
#line 765 "prog_util.m"
      }
#line 758 "prog_util.m"
  }
#line 168 "prog_util.m"
}

#line 161 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_5_p_0(
#line 161 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 161 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_6,
#line 161 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_7,
#line 161 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_8,
#line 161 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet0_9,
#line 161 "prog_util.m"
  MR_Word * parse_tree__prog_util__VarSet_10)
#line 161 "prog_util.m"
{
#line 739 "prog_util.m"
  {
#line 739 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 740 "prog_util.m"
    {
#line 740 "prog_util.m"
      parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__BaseName_6, (MR_Integer) 0, parse_tree__prog_util__N_7, parse_tree__prog_util__Vars_8, parse_tree__prog_util__VarSet0_9, parse_tree__prog_util__VarSet_10);
    }
#line 739 "prog_util.m"
  }
#line 161 "prog_util.m"
}

#line 150 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(
#line 150 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName0_3,
#line 150 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_4)
#line 150 "prog_util.m"
{
#line 728 "prog_util.m"
  {
#line 728 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__SymName0_3)) == (MR_mktag((MR_Integer) 1)));
#line 728 "prog_util.m"
    MR_String parse_tree__prog_util__Name_6;
#line 729 "prog_util.m"
    MR_Word parse_tree__prog_util__Module_5;
#line 729 "prog_util.m"
    MR_Word parse_tree__prog_util__V_7_7;

#line 729 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 729 "prog_util.m"
      {
#line 729 "prog_util.m"
        parse_tree__prog_util__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 0)));
#line 729 "prog_util.m"
        parse_tree__prog_util__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 1)));
#line 730 "prog_util.m"
        {
#line 730 "prog_util.m"
          parse_tree__prog_util__V_7_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 730 "prog_util.m"
        {
#line 730 "prog_util.m"
          parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_5, parse_tree__prog_util__V_7_7);
        }
#line 729 "prog_util.m"
      }
#line 728 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 732 "prog_util.m"
      {
#line 732 "prog_util.m"
        MR_Word base;
#line 732 "prog_util.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 732 "prog_util.m"
        *parse_tree__prog_util__SymName_4 = base;
#line 732 "prog_util.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Name_6));
#line 732 "prog_util.m"
      }
#line 728 "prog_util.m"
    else
#line 734 "prog_util.m"
      *parse_tree__prog_util__SymName_4 = parse_tree__prog_util__SymName0_3;
#line 728 "prog_util.m"
  }
#line 150 "prog_util.m"
}

#line 149 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(
#line 149 "prog_util.m"
  MR_Word parse_tree__prog_util__ConsId0_3,
#line 149 "prog_util.m"
  MR_Word * parse_tree__prog_util__ConsId_4)
#line 149 "prog_util.m"
{
#line 720 "prog_util.m"
  {
#line 720 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__ConsId0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 720 "prog_util.m"
    MR_Word parse_tree__prog_util__Name0_5;
#line 720 "prog_util.m"
    MR_Integer parse_tree__prog_util__Arity_6;
#line 720 "prog_util.m"
    MR_Word parse_tree__prog_util__TypeCtor_7;

#line 720 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 720 "prog_util.m"
      {
#line 720 "prog_util.m"
        parse_tree__prog_util__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 1)));
#line 720 "prog_util.m"
        parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 2)));
#line 720 "prog_util.m"
        parse_tree__prog_util__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 3)));
#line 721 "prog_util.m"
        {
#line 721 "prog_util.m"
          MR_Word parse_tree__prog_util__Name_8;
#line 728 "prog_util.m"
          MR_String parse_tree__prog_util__Name_12;
#line 729 "prog_util.m"
          MR_Word parse_tree__prog_util__Module_11;
#line 729 "prog_util.m"
          MR_Word parse_tree__prog_util__V_13_13;

#line 729 "prog_util.m"
          parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 729 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 729 "prog_util.m"
            {
#line 729 "prog_util.m"
              parse_tree__prog_util__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 0)));
#line 729 "prog_util.m"
              parse_tree__prog_util__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 1)));
#line 730 "prog_util.m"
              {
#line 730 "prog_util.m"
                parse_tree__prog_util__V_13_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 730 "prog_util.m"
              {
#line 730 "prog_util.m"
                parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_11, parse_tree__prog_util__V_13_13);
              }
#line 729 "prog_util.m"
            }
#line 728 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 732 "prog_util.m"
            {
#line 732 "prog_util.m"
              parse_tree__prog_util__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 732 "prog_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__Name_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_12));
#line 732 "prog_util.m"
            }
#line 728 "prog_util.m"
          else
#line 734 "prog_util.m"
            parse_tree__prog_util__Name_8 = parse_tree__prog_util__Name0_5;
#line 722 "prog_util.m"
          {
#line 722 "prog_util.m"
            MR_Word base;
#line 722 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 722 "prog_util.m"
            *parse_tree__prog_util__ConsId_4 = base;
#line 722 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 722 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_8));
#line 722 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 722 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TypeCtor_7));
#line 722 "prog_util.m"
          }
#line 721 "prog_util.m"
        }
#line 720 "prog_util.m"
      }
#line 720 "prog_util.m"
    else
#line 724 "prog_util.m"
      *parse_tree__prog_util__ConsId_4 = parse_tree__prog_util__ConsId0_3;
#line 720 "prog_util.m"
  }
#line 149 "prog_util.m"
}

#line 144 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__source_integer_to_int_3_p_0(
#line 144 "prog_util.m"
  MR_Word parse_tree__prog_util__Base_4,
#line 144 "prog_util.m"
  MR_Word parse_tree__prog_util__Integer_5,
#line 144 "prog_util.m"
  MR_Integer * parse_tree__prog_util__Int_6)
#line 144 "prog_util.m"
{
#line 703 "prog_util.m"
  {
#line 703 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 703 "prog_util.m"
#line 703 "prog_util.m"
    switch (parse_tree__prog_util__Base_4) {
#line 703 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 703 "prog_util.m"
      case (MR_Integer) 2:
#line 702 "prog_util.m"
        {
#line 702 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Int_6);
        }
#line 703 "prog_util.m"
        break;
#line 703 "prog_util.m"
      case (MR_Integer) 3:
#line 703 "prog_util.m"
      case (MR_Integer) 0:
#line 703 "prog_util.m"
      case (MR_Integer) 1:
#line 708 "prog_util.m"
        {
#line 708 "prog_util.m"
          MR_Word parse_tree__prog_util__V_8_8;
#line 708 "prog_util.m"
          MR_Integer parse_tree__prog_util__V_9_9;

#line 708 "prog_util.m"
          {
#line 708 "prog_util.m"
            parse_tree__prog_util__V_9_9 = mercury__int__max_int_0_f_0();
          }
#line 708 "prog_util.m"
          {
#line 708 "prog_util.m"
            parse_tree__prog_util__V_8_8 = mercury__integer__integer_1_f_0(parse_tree__prog_util__V_9_9);
          }
#line 708 "prog_util.m"
          {
#line 708 "prog_util.m"
            parse_tree__prog_util__succeeded = mercury__integer__f_greater_than_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__V_8_8);
          }
#line 708 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 709 "prog_util.m"
            {
#line 709 "prog_util.m"
              MR_Word parse_tree__prog_util__NegInteger_7;
#line 709 "prog_util.m"
              MR_Word parse_tree__prog_util__V_10_10;
#line 709 "prog_util.m"
              MR_Word parse_tree__prog_util__V_11_11;
#line 709 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_12_12;
#line 709 "prog_util.m"
              MR_Word parse_tree__prog_util__V_13_13;
#line 709 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_14_14;
#line 709 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_15_15;

#line 709 "prog_util.m"
              {
#line 709 "prog_util.m"
                parse_tree__prog_util__V_12_12 = mercury__int__min_int_0_f_0();
              }
#line 709 "prog_util.m"
              {
#line 709 "prog_util.m"
                parse_tree__prog_util__V_11_11 = mercury__integer__integer_1_f_0(parse_tree__prog_util__V_12_12);
              }
#line 709 "prog_util.m"
              {
#line 709 "prog_util.m"
                parse_tree__prog_util__V_10_10 = mercury__integer__f_plus_2_f_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__V_11_11);
              }
#line 709 "prog_util.m"
              {
#line 709 "prog_util.m"
                parse_tree__prog_util__V_14_14 = mercury__int__min_int_0_f_0();
              }
#line 709 "prog_util.m"
              {
#line 709 "prog_util.m"
                parse_tree__prog_util__V_13_13 = mercury__integer__integer_1_f_0(parse_tree__prog_util__V_14_14);
              }
#line 709 "prog_util.m"
              {
#line 709 "prog_util.m"
                parse_tree__prog_util__NegInteger_7 = mercury__integer__f_plus_2_f_0(parse_tree__prog_util__V_10_10, parse_tree__prog_util__V_13_13);
              }
#line 710 "prog_util.m"
              {
#line 710 "prog_util.m"
                parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__NegInteger_7, parse_tree__prog_util__Int_6);
              }
#line 709 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 709 "prog_util.m"
                {
#line 711 "prog_util.m"
                  parse_tree__prog_util__V_15_15 = (MR_Integer) 0;
#line 711 "prog_util.m"
                  parse_tree__prog_util__succeeded = (*parse_tree__prog_util__Int_6 < parse_tree__prog_util__V_15_15);
#line 709 "prog_util.m"
                }
#line 709 "prog_util.m"
            }
#line 708 "prog_util.m"
          else
#line 713 "prog_util.m"
            {
#line 713 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Int_6);
            }
#line 708 "prog_util.m"
        }
#line 703 "prog_util.m"
        break;
#line 703 "prog_util.m"
    }
#line 703 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 703 "prog_util.m"
  }
#line 144 "prog_util.m"
}

#line 134 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__det_make_functor_cons_id_3_p_0(
#line 134 "prog_util.m"
  MR_Word parse_tree__prog_util__Functor_4,
#line 134 "prog_util.m"
  MR_Integer parse_tree__prog_util__Arity_5,
#line 134 "prog_util.m"
  MR_Word * parse_tree__prog_util__ConsId_6)
#line 134 "prog_util.m"
{
#line 692 "prog_util.m"
  {
#line 692 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 692 "prog_util.m"
    MR_Word parse_tree__prog_util__ConsIdPrime_7;

#line 692 "prog_util.m"
    {
#line 692 "prog_util.m"
      parse_tree__prog_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_util__Functor_4, parse_tree__prog_util__Arity_5, &parse_tree__prog_util__ConsIdPrime_7);
    }
#line 692 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 693 "prog_util.m"
      *parse_tree__prog_util__ConsId_6 = parse_tree__prog_util__ConsIdPrime_7;
#line 692 "prog_util.m"
    else
#line 695 "prog_util.m"
      {
#line 695 "prog_util.m"
        {
#line 695 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.det_make_functor_cons_id\'/3", (MR_String) "make_functor_cons_id failed");
#line 695 "prog_util.m"
          return;
        }
#line 695 "prog_util.m"
      }
#line 692 "prog_util.m"
  }
#line 134 "prog_util.m"
}

#line 133 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__make_functor_cons_id_3_p_0(
#line 133 "prog_util.m"
  MR_Word parse_tree__prog_util__Functor_4,
#line 133 "prog_util.m"
  MR_Integer parse_tree__prog_util__Arity_5,
#line 133 "prog_util.m"
  MR_Word * parse_tree__prog_util__ConsId_6)
#line 133 "prog_util.m"
{
#line 673 "prog_util.m"
  {
#line 673 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 673 "prog_util.m"
#line 673 "prog_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_util__Functor_4)) {
#line 673 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 673 "prog_util.m"
      case (MR_Integer) 0:
#line 671 "prog_util.m"
        {
#line 671 "prog_util.m"
          MR_String parse_tree__prog_util__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));
#line 671 "prog_util.m"
          MR_Word parse_tree__prog_util__V_13_13;
#line 671 "prog_util.m"
          MR_Word parse_tree__prog_util__V_14_14;

#line 672 "prog_util.m"
          {
#line 672 "prog_util.m"
            parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 672 "prog_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__Name_7));
#line 672 "prog_util.m"
          }
#line 672 "prog_util.m"
          {
#line 672 "prog_util.m"
            parse_tree__prog_util__V_14_14 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 672 "prog_util.m"
          {
#line 672 "prog_util.m"
            MR_Word base;
#line 672 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 672 "prog_util.m"
            *parse_tree__prog_util__ConsId_6 = base;
#line 672 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 672 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 672 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_5));
#line 672 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 672 "prog_util.m"
          }
#line 671 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 671 "prog_util.m"
        }
#line 673 "prog_util.m"
        break;
#line 673 "prog_util.m"
      case (MR_Integer) 1:
#line 674 "prog_util.m"
        {
#line 674 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));

#line 675 "prog_util.m"
          {
#line 675 "prog_util.m"
            MR_Word base;
#line 675 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "prog_util.m"
            *parse_tree__prog_util__ConsId_6 = base;
#line 675 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 675 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Int_8));
#line 675 "prog_util.m"
          }
#line 674 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 674 "prog_util.m"
        }
#line 673 "prog_util.m"
        break;
#line 673 "prog_util.m"
      case (MR_Integer) 2:
#line 677 "prog_util.m"
        {
#line 677 "prog_util.m"
          MR_Word parse_tree__prog_util__Base_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));
#line 677 "prog_util.m"
          MR_Word parse_tree__prog_util__Integer_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));
#line 677 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_15;

#line 678 "prog_util.m"
          {
#line 678 "prog_util.m"
            parse_tree__prog_util__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(parse_tree__prog_util__Base_9, parse_tree__prog_util__Integer_10, &parse_tree__prog_util__Int_15);
          }
#line 677 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 677 "prog_util.m"
            {
#line 679 "prog_util.m"
              {
#line 679 "prog_util.m"
                MR_Word base;
#line 679 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 679 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 679 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Int_15));
#line 679 "prog_util.m"
              }
#line 679 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 677 "prog_util.m"
            }
#line 677 "prog_util.m"
        }
#line 673 "prog_util.m"
        break;
#line 673 "prog_util.m"
      case (MR_Integer) 3:
#line 673 "prog_util.m"
#line 673 "prog_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 0)))) {
#line 673 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 673 "prog_util.m"
          case (MR_Integer) 0:
#line 681 "prog_util.m"
            {
#line 681 "prog_util.m"
              MR_String parse_tree__prog_util__String_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

#line 682 "prog_util.m"
              {
#line 682 "prog_util.m"
                MR_Word base;
#line 682 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 682 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 682 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__String_11));
#line 682 "prog_util.m"
              }
#line 681 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 681 "prog_util.m"
            }
#line 673 "prog_util.m"
            break;
#line 673 "prog_util.m"
          case (MR_Integer) 1:
#line 684 "prog_util.m"
            {
#line 684 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

#line 685 "prog_util.m"
              {
#line 685 "prog_util.m"
                MR_Word base;
#line 685 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 685 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 685 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(parse_tree__prog_util__Float_12);
#line 685 "prog_util.m"
              }
#line 684 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 684 "prog_util.m"
            }
#line 673 "prog_util.m"
            break;
#line 673 "prog_util.m"
          case (MR_Integer) 2:
#line 687 "prog_util.m"
            {
#line 687 "prog_util.m"
              MR_String parse_tree__prog_util__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

#line 688 "prog_util.m"
              {
#line 688 "prog_util.m"
                MR_Word base;
#line 688 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 688 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 688 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_16));
#line 688 "prog_util.m"
              }
#line 687 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 687 "prog_util.m"
            }
#line 673 "prog_util.m"
            break;
#line 673 "prog_util.m"
        }
#line 673 "prog_util.m"
        break;
#line 673 "prog_util.m"
    }
#line 673 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 673 "prog_util.m"
  }
#line 133 "prog_util.m"
}

#line 128 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__cons_id_maybe_arity_1_f_0(
#line 128 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1)
#line 128 "prog_util.m"
{
#line 648 "prog_util.m"
  while (MR_TRUE)
#line 648 "prog_util.m"
    {
#line 648 "prog_util.m"
      /* tailcall optimized into a loop */
#line 648 "prog_util.m"
      {
#line 648 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 648 "prog_util.m"
        MR_Word parse_tree__prog_util__HeadVar__2_2;

#line 648 "prog_util.m"
#line 648 "prog_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
#line 648 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 648 "prog_util.m"
          case (MR_Integer) 0:
#line 659 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
            break;
#line 648 "prog_util.m"
          case (MR_Integer) 1:
#line 658 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
            break;
#line 648 "prog_util.m"
          case (MR_Integer) 2:
#line 664 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
            break;
#line 648 "prog_util.m"
          case (MR_Integer) 3:
#line 648 "prog_util.m"
#line 648 "prog_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 648 "prog_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 648 "prog_util.m"
              case (MR_Integer) 0:
#line 666 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 1:
#line 665 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 2:
#line 648 "prog_util.m"
                {
#line 648 "prog_util.m"
                  MR_Integer parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 648 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 648 "prog_util.m"
                  {
#line 648 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 648 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_4));
#line 648 "prog_util.m"
                  }
#line 648 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 3:
#line 649 "prog_util.m"
                {
#line 649 "prog_util.m"
                  MR_Integer parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 649 "prog_util.m"
                  {
#line 649 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 649 "prog_util.m"
                  }
#line 649 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 4:
#line 655 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 5:
#line 650 "prog_util.m"
                {
#line 650 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 650 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 6:
#line 651 "prog_util.m"
                {
#line 651 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 651 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 7:
#line 652 "prog_util.m"
                {
#line 652 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 652 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 8:
#line 653 "prog_util.m"
                {
#line 653 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 653 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 9:
#line 654 "prog_util.m"
                {
#line 654 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 654 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 10:
#line 656 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 11:
#line 657 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 12:
#line 660 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 13:
#line 661 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
              case (MR_Integer) 14:
#line 662 "prog_util.m"
                {
#line 662 "prog_util.m"
                  MR_Word parse_tree__prog_util__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 662 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 663 "prog_util.m"
                  /* direct tailcall eliminated */
#line 663 "prog_util.m"
                  {
#line 663 "prog_util.m"
                    MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__ConsId_30;

#line 663 "prog_util.m"
                    parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 663 "prog_util.m"
                  }
#line 663 "prog_util.m"
                  continue;
#line 662 "prog_util.m"
                }
#line 648 "prog_util.m"
                break;
#line 648 "prog_util.m"
            }
#line 648 "prog_util.m"
            break;
#line 648 "prog_util.m"
        }
#line 648 "prog_util.m"
        return parse_tree__prog_util__HeadVar__2_2;
#line 648 "prog_util.m"
      }
#line 648 "prog_util.m"
      break;
#line 648 "prog_util.m"
    }
#line 128 "prog_util.m"
}

#line 123 "prog_util.m"
MR_Integer MR_CALL 
parse_tree__prog_util__cons_id_arity_1_f_0(
#line 123 "prog_util.m"
  MR_Word parse_tree__prog_util__ConsId_3)
#line 123 "prog_util.m"
{
#line 619 "prog_util.m"
  while (MR_TRUE)
#line 619 "prog_util.m"
    {
#line 619 "prog_util.m"
      /* tailcall optimized into a loop */
#line 619 "prog_util.m"
      {
#line 619 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 619 "prog_util.m"
        MR_Integer parse_tree__prog_util__Arity_4;

#line 619 "prog_util.m"
#line 619 "prog_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) {
#line 619 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 619 "prog_util.m"
          case (MR_Integer) 0:
#line 644 "prog_util.m"
            {
#line 645 "prog_util.m"
              {
#line 645 "prog_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
#line 644 "prog_util.m"
            }
#line 619 "prog_util.m"
            break;
#line 619 "prog_util.m"
          case (MR_Integer) 1:
#line 644 "prog_util.m"
            {
#line 645 "prog_util.m"
              {
#line 645 "prog_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
#line 644 "prog_util.m"
            }
#line 619 "prog_util.m"
            break;
#line 619 "prog_util.m"
          case (MR_Integer) 2:
#line 644 "prog_util.m"
            {
#line 645 "prog_util.m"
              {
#line 645 "prog_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
#line 644 "prog_util.m"
            }
#line 619 "prog_util.m"
            break;
#line 619 "prog_util.m"
          case (MR_Integer) 3:
#line 619 "prog_util.m"
#line 619 "prog_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) {
#line 619 "prog_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 619 "prog_util.m"
              case (MR_Integer) 0:
#line 619 "prog_util.m"
              case (MR_Integer) 1:
#line 619 "prog_util.m"
              case (MR_Integer) 4:
#line 619 "prog_util.m"
              case (MR_Integer) 10:
#line 619 "prog_util.m"
              case (MR_Integer) 11:
#line 619 "prog_util.m"
              case (MR_Integer) 12:
#line 619 "prog_util.m"
              case (MR_Integer) 13:
#line 644 "prog_util.m"
                {
#line 645 "prog_util.m"
                  {
#line 645 "prog_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
                  }
#line 644 "prog_util.m"
                }
#line 619 "prog_util.m"
                break;
#line 619 "prog_util.m"
              case (MR_Integer) 2:
#line 619 "prog_util.m"
                {
#line 619 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 619 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_6_6;

#line 619 "prog_util.m"
                  parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 619 "prog_util.m"
                  parse_tree__prog_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 3)));
#line 619 "prog_util.m"
                }
#line 619 "prog_util.m"
                break;
#line 619 "prog_util.m"
              case (MR_Integer) 3:
#line 621 "prog_util.m"
                parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 619 "prog_util.m"
                break;
#line 619 "prog_util.m"
              case (MR_Integer) 5:
#line 619 "prog_util.m"
              case (MR_Integer) 6:
#line 619 "prog_util.m"
              case (MR_Integer) 7:
#line 619 "prog_util.m"
              case (MR_Integer) 8:
#line 619 "prog_util.m"
              case (MR_Integer) 9:
#line 632 "prog_util.m"
                parse_tree__prog_util__Arity_4 = (MR_Integer) 0;
#line 619 "prog_util.m"
                break;
#line 619 "prog_util.m"
              case (MR_Integer) 14:
#line 623 "prog_util.m"
                {
#line 623 "prog_util.m"
                  MR_Word parse_tree__prog_util__SubConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 623 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));

#line 624 "prog_util.m"
                  /* direct tailcall eliminated */
#line 624 "prog_util.m"
                  {
#line 624 "prog_util.m"
                    MR_Word parse_tree__prog_util__ConsId__tmp_copy_3 = parse_tree__prog_util__SubConsId_8;

#line 624 "prog_util.m"
                    parse_tree__prog_util__ConsId_3 = parse_tree__prog_util__ConsId__tmp_copy_3;
#line 624 "prog_util.m"
                  }
#line 624 "prog_util.m"
                  continue;
#line 623 "prog_util.m"
                }
#line 619 "prog_util.m"
                break;
#line 619 "prog_util.m"
            }
#line 619 "prog_util.m"
            break;
#line 619 "prog_util.m"
        }
#line 619 "prog_util.m"
        return parse_tree__prog_util__Arity_4;
#line 619 "prog_util.m"
      }
#line 619 "prog_util.m"
      break;
#line 619 "prog_util.m"
    }
#line 123 "prog_util.m"
}

#line 117 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(
#line 117 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_34,
#line 117 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 117 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 117 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_3)
#line 117 "prog_util.m"
{
#line 599 "prog_util.m"
  {
#line 599 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 599 "prog_util.m"
#line 599 "prog_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
#line 599 "prog_util.m"
      default:
#line 599 "prog_util.m"
        parse_tree__prog_util__succeeded = MR_FALSE;
#line 599 "prog_util.m"
        break;
#line 599 "prog_util.m"
      case (MR_Integer) 3:
#line 599 "prog_util.m"
#line 599 "prog_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 599 "prog_util.m"
          default:
#line 599 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_FALSE;
#line 599 "prog_util.m"
            break;
#line 599 "prog_util.m"
          case (MR_Integer) 2:
#line 614 "prog_util.m"
            {
#line 614 "prog_util.m"
              MR_Word parse_tree__prog_util__SymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 614 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_42;
#line 614 "prog_util.m"
              MR_Integer parse_tree__prog_util___Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 614 "prog_util.m"
              MR_Word parse_tree__prog_util___TypeCtor_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 229 "prog_util.m"
              {
#line 229 "prog_util.m"
                mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_42);
              }
#line 230 "prog_util.m"
              {
#line 230 "prog_util.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_29, parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_42, parse_tree__prog_util__Term_3);
              }
#line 614 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 614 "prog_util.m"
            }
#line 599 "prog_util.m"
            break;
#line 599 "prog_util.m"
          case (MR_Integer) 3:
#line 611 "prog_util.m"
            {
#line 611 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_46;

#line 229 "prog_util.m"
              {
#line 229 "prog_util.m"
                mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_46);
              }
#line 230 "prog_util.m"
              {
#line 230 "prog_util.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, (MR_Word) &parse_tree__prog_util_scalar_common_3[2], parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_46, parse_tree__prog_util__Term_3);
              }
#line 611 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 611 "prog_util.m"
            }
#line 599 "prog_util.m"
            break;
#line 599 "prog_util.m"
          case (MR_Integer) 5:
#line 599 "prog_util.m"
            {
#line 599 "prog_util.m"
              MR_Integer parse_tree__prog_util__Int_4;
#line 599 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_6;
#line 599 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7;
#line 599 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8;

#line 599 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 599 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 599 "prog_util.m"
                {
#line 599 "prog_util.m"
                  parse_tree__prog_util__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 600 "prog_util.m"
                  {
#line 600 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_6);
                  }
#line 601 "prog_util.m"
                  parse_tree__prog_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "prog_util.m"
                  {
#line 601 "prog_util.m"
                    parse_tree__prog_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_7_7, 0) = ((MR_Box) (parse_tree__prog_util__Int_4));
#line 601 "prog_util.m"
                  }
#line 601 "prog_util.m"
                  {
#line 601 "prog_util.m"
                    MR_Word base;
#line 601 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 601 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 601 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 601 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 601 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_6));
#line 601 "prog_util.m"
                  }
#line 601 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 599 "prog_util.m"
                }
#line 599 "prog_util.m"
            }
#line 599 "prog_util.m"
            break;
#line 599 "prog_util.m"
          case (MR_Integer) 6:
#line 602 "prog_util.m"
            {
#line 602 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_9;
#line 602 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_11;
#line 602 "prog_util.m"
              MR_Word parse_tree__prog_util__V_12_12;
#line 602 "prog_util.m"
              MR_Word parse_tree__prog_util__V_13_13;

#line 602 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 602 "prog_util.m"
                {
#line 602 "prog_util.m"
                  parse_tree__prog_util__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 603 "prog_util.m"
                  {
#line 603 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_11);
                  }
#line 604 "prog_util.m"
                  parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "prog_util.m"
                  {
#line 604 "prog_util.m"
                    parse_tree__prog_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 604 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 1) = MR_box_float(parse_tree__prog_util__Float_9);
#line 604 "prog_util.m"
                  }
#line 604 "prog_util.m"
                  {
#line 604 "prog_util.m"
                    MR_Word base;
#line 604 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 604 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 604 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 604 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 604 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_11));
#line 604 "prog_util.m"
                  }
#line 604 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 602 "prog_util.m"
                }
#line 602 "prog_util.m"
            }
#line 599 "prog_util.m"
            break;
#line 599 "prog_util.m"
          case (MR_Integer) 7:
#line 605 "prog_util.m"
            {
#line 605 "prog_util.m"
              MR_Char parse_tree__prog_util__Char_14;
#line 605 "prog_util.m"
              MR_Word parse_tree__prog_util__SymName_16;
#line 605 "prog_util.m"
              MR_String parse_tree__prog_util__V_17_17;
#line 605 "prog_util.m"
              MR_Word parse_tree__prog_util__V_18_18;
#line 605 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_38;

#line 605 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 605 "prog_util.m"
                {
#line 605 "prog_util.m"
                  parse_tree__prog_util__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "prog_util.m"
                  {
#line 606 "prog_util.m"
                    parse_tree__prog_util__V_17_17 = mercury__string__from_char_1_f_0(parse_tree__prog_util__Char_14);
                  }
#line 607 "prog_util.m"
                  parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "prog_util.m"
                  {
#line 606 "prog_util.m"
                    parse_tree__prog_util__SymName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 606 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_16, 0) = ((MR_Box) (parse_tree__prog_util__V_17_17));
#line 606 "prog_util.m"
                  }
#line 229 "prog_util.m"
                  {
#line 229 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_38);
                  }
#line 230 "prog_util.m"
                  {
#line 230 "prog_util.m"
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_16, parse_tree__prog_util__V_18_18, parse_tree__prog_util__Context_38, parse_tree__prog_util__Term_3);
                  }
#line 230 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 605 "prog_util.m"
                }
#line 605 "prog_util.m"
            }
#line 599 "prog_util.m"
            break;
#line 599 "prog_util.m"
          case (MR_Integer) 8:
#line 608 "prog_util.m"
            {
#line 608 "prog_util.m"
              MR_String parse_tree__prog_util__String_19;
#line 608 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_21;
#line 608 "prog_util.m"
              MR_Word parse_tree__prog_util__V_22_22;
#line 608 "prog_util.m"
              MR_Word parse_tree__prog_util__V_23_23;

#line 608 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 608 "prog_util.m"
                {
#line 608 "prog_util.m"
                  parse_tree__prog_util__String_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 609 "prog_util.m"
                  {
#line 609 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_21);
                  }
#line 610 "prog_util.m"
                  parse_tree__prog_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "prog_util.m"
                  {
#line 610 "prog_util.m"
                    parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 610 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_util__String_19));
#line 610 "prog_util.m"
                  }
#line 610 "prog_util.m"
                  {
#line 610 "prog_util.m"
                    MR_Word base;
#line 610 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 610 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 610 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 610 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 610 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_21));
#line 610 "prog_util.m"
                  }
#line 610 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 608 "prog_util.m"
                }
#line 608 "prog_util.m"
            }
#line 599 "prog_util.m"
            break;
#line 599 "prog_util.m"
        }
#line 599 "prog_util.m"
        break;
#line 599 "prog_util.m"
    }
#line 599 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 599 "prog_util.m"
  }
#line 117 "prog_util.m"
}

#line 415 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
#line 415 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 415 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 415 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 415 "prog_util.m"
{
#line 415 "prog_util.m"
  {
#line 415 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 415 "prog_util.m"
    MR_Word parse_tree__prog_util__conv3_Catch_8;

#line 415 "prog_util.m"
    {
#line 415 "prog_util.m"
      parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv3_Catch_8);
    }
#line 415 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv3_Catch_8));
#line 415 "prog_util.m"
  }
#line 415 "prog_util.m"
}

#line 378 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
#line 378 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 378 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 378 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 378 "prog_util.m"
{
#line 378 "prog_util.m"
  {
#line 378 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 378 "prog_util.m"
    MR_Word parse_tree__prog_util__conv2_TMV_8;

#line 378 "prog_util.m"
    {
#line 378 "prog_util.m"
      parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv2_TMV_8);
    }
#line 378 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv2_TMV_8));
#line 378 "prog_util.m"
  }
#line 378 "prog_util.m"
}

#line 398 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 398 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 398 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 398 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 398 "prog_util.m"
{
#line 398 "prog_util.m"
  {
#line 398 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 398 "prog_util.m"
    MR_Word parse_tree__prog_util__conv1_Goal_8;

#line 398 "prog_util.m"
    {
#line 398 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv1_Goal_8);
    }
#line 398 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv1_Goal_8));
#line 398 "prog_util.m"
  }
#line 398 "prog_util.m"
}

#line 393 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
#line 393 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 393 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 393 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 393 "prog_util.m"
{
#line 393 "prog_util.m"
  {
#line 393 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 393 "prog_util.m"
    MR_Word parse_tree__prog_util__conv0_Var_8;

#line 393 "prog_util.m"
    {
#line 393 "prog_util.m"
      parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv0_Var_8);
    }
#line 393 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv0_Var_8));
#line 393 "prog_util.m"
  }
#line 393 "prog_util.m"
}

#line 107 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0(
#line 107 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 107 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 107 "prog_util.m"
  MR_Word parse_tree__prog_util__Goal0_7,
#line 107 "prog_util.m"
  MR_Word * parse_tree__prog_util__Goal_8)
#line 107 "prog_util.m"
{
#line 290 "prog_util.m"
  {
#line 290 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 290 "prog_util.m"
#line 290 "prog_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) {
#line 290 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 290 "prog_util.m"
      case (MR_Integer) 0:
#line 456 "prog_util.m"
        {
#line 456 "prog_util.m"
          MR_Word parse_tree__prog_util__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 456 "prog_util.m"
          MR_Word parse_tree__prog_util__TermA0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 456 "prog_util.m"
          MR_Word parse_tree__prog_util__TermB0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 456 "prog_util.m"
          MR_Word parse_tree__prog_util__TermA_73;
#line 456 "prog_util.m"
          MR_Word parse_tree__prog_util__TermB_74;
#line 456 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 456 "prog_util.m"
          MR_Word parse_tree__prog_util__Purity_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));

#line 457 "prog_util.m"
          {
#line 457 "prog_util.m"
            mercury__term__rename_var_in_term_4_p_0(parse_tree__prog_util__TypeCtorInfo_187_187, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__TermA0_71, &parse_tree__prog_util__TermA_73);
          }
#line 458 "prog_util.m"
          {
#line 458 "prog_util.m"
            mercury__term__rename_var_in_term_4_p_0(parse_tree__prog_util__TypeCtorInfo_187_187, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__TermB0_72, &parse_tree__prog_util__TermB_74);
          }
#line 459 "prog_util.m"
          {
#line 459 "prog_util.m"
            MR_Word base;
#line 459 "prog_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = base;
#line 459 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_171));
#line 459 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__TermA_73));
#line 459 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__TermB_74));
#line 459 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_172));
#line 459 "prog_util.m"
          }
#line 456 "prog_util.m"
        }
#line 290 "prog_util.m"
        break;
#line 290 "prog_util.m"
      case (MR_Integer) 1:
#line 452 "prog_util.m"
        {
#line 452 "prog_util.m"
          MR_Word parse_tree__prog_util__SymName_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 452 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 452 "prog_util.m"
          MR_Word parse_tree__prog_util__Purity_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 452 "prog_util.m"
          MR_Word parse_tree__prog_util__Terms0_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 452 "prog_util.m"
          MR_Word parse_tree__prog_util__Terms_170;

#line 453 "prog_util.m"
          {
#line 453 "prog_util.m"
            mercury__term__rename_var_in_terms_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Terms0_169, &parse_tree__prog_util__Terms_170);
          }
#line 454 "prog_util.m"
          {
#line 454 "prog_util.m"
            MR_Word base;
#line 454 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 454 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = base;
#line 454 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_167));
#line 454 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__SymName_70));
#line 454 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_util__Terms_170));
#line 454 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_168));
#line 454 "prog_util.m"
          }
#line 452 "prog_util.m"
        }
#line 290 "prog_util.m"
        break;
#line 290 "prog_util.m"
      case (MR_Integer) 2:
#line 293 "prog_util.m"
        {
#line 293 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 293 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 293 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 293 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalA_13;
#line 293 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalB_14;

#line 294 "prog_util.m"
          {
#line 294 "prog_util.m"
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_11, &parse_tree__prog_util__SubGoalA_13);
          }
#line 295 "prog_util.m"
          {
#line 295 "prog_util.m"
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_12, &parse_tree__prog_util__SubGoalB_14);
          }
#line 296 "prog_util.m"
          {
#line 296 "prog_util.m"
            MR_Word base;
#line 296 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = base;
#line 296 "prog_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_10));
#line 296 "prog_util.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_util__SubGoalA_13));
#line 296 "prog_util.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalB_14));
#line 296 "prog_util.m"
          }
#line 293 "prog_util.m"
        }
#line 290 "prog_util.m"
        break;
#line 290 "prog_util.m"
      case (MR_Integer) 3:
#line 290 "prog_util.m"
#line 290 "prog_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) {
#line 290 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 290 "prog_util.m"
          case (MR_Integer) 0:
#line 290 "prog_util.m"
          case (MR_Integer) 4:
#line 291 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = parse_tree__prog_util__Goal0_7;
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 1:
#line 439 "prog_util.m"
            {
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Cond0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Cond_66;
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_159;
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_161;
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Then0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Then_163;
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Else0_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 439 "prog_util.m"
              MR_Word parse_tree__prog_util__Else_165;

#line 440 "prog_util.m"
              {
#line 440 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_158, &parse_tree__prog_util__Vars_159);
              }
#line 441 "prog_util.m"
              {
#line 441 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_160, &parse_tree__prog_util__StateVars_161);
              }
#line 442 "prog_util.m"
              {
#line 442 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Cond0_65, &parse_tree__prog_util__Cond_66);
              }
#line 443 "prog_util.m"
              {
#line 443 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_162, &parse_tree__prog_util__Then_163);
              }
#line 444 "prog_util.m"
              {
#line 444 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_164, &parse_tree__prog_util__Else_165);
              }
#line 445 "prog_util.m"
              {
#line 445 "prog_util.m"
                MR_Word base;
#line 445 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 445 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 445 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_157));
#line 445 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_159));
#line 445 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_161));
#line 445 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Cond_66));
#line 445 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Then_163));
#line 445 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Else_165));
#line 445 "prog_util.m"
              }
#line 439 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 2:
#line 303 "prog_util.m"
            {
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_90;
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_91;

#line 304 "prog_util.m"
              {
#line 304 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_88, &parse_tree__prog_util__SubGoalA_90);
              }
#line 305 "prog_util.m"
              {
#line 305 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_89, &parse_tree__prog_util__SubGoalB_91);
              }
#line 306 "prog_util.m"
              {
#line 306 "prog_util.m"
                MR_Word base;
#line 306 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 306 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 306 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 306 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_87));
#line 306 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_90));
#line 306 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_91));
#line 306 "prog_util.m"
              }
#line 303 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 3:
#line 308 "prog_util.m"
            {
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_16;
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 309 "prog_util.m"
              {
#line 309 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_15, &parse_tree__prog_util__SubGoal_16);
              }
#line 310 "prog_util.m"
              {
#line 310 "prog_util.m"
                MR_Word base;
#line 310 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 310 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 310 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_92));
#line 310 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoal_16));
#line 310 "prog_util.m"
              }
#line 308 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 5:
#line 298 "prog_util.m"
            {
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_85;
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_86;

#line 299 "prog_util.m"
              {
#line 299 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_83, &parse_tree__prog_util__SubGoalA_85);
              }
#line 300 "prog_util.m"
              {
#line 300 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_84, &parse_tree__prog_util__SubGoalB_86);
              }
#line 301 "prog_util.m"
              {
#line 301 "prog_util.m"
                MR_Word base;
#line 301 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 301 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 301 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_82));
#line 301 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_85));
#line 301 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_86));
#line 301 "prog_util.m"
              }
#line 298 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 6:
#line 312 "prog_util.m"
            {
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__QuantType_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__QuantVarsKind_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_20;
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_95;

#line 313 "prog_util.m"
              {
#line 313 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_19, &parse_tree__prog_util__Vars_20);
              }
#line 314 "prog_util.m"
              {
#line 314 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_94, &parse_tree__prog_util__SubGoal_95);
              }
#line 315 "prog_util.m"
              {
#line 315 "prog_util.m"
                MR_Word base;
#line 315 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((parse_tree__prog_util__QuantType_17 | ((parse_tree__prog_util__QuantVarsKind_18 << (MR_Integer) 1)))));
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_93));
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Vars_20));
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_95));
#line 315 "prog_util.m"
              }
#line 312 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 7:
#line 317 "prog_util.m"
            {
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_98;

#line 318 "prog_util.m"
              {
#line 318 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_97, &parse_tree__prog_util__SubGoal_98);
              }
#line 319 "prog_util.m"
              {
#line 319 "prog_util.m"
                MR_Word base;
#line 319 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_96));
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Purity_21));
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_98));
#line 319 "prog_util.m"
              }
#line 317 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 8:
#line 322 "prog_util.m"
            {
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_25;
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars_26;
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars_27;
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_101;
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_103;

#line 323 "prog_util.m"
              {
#line 323 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_102, &parse_tree__prog_util__Vars_103);
              }
#line 324 "prog_util.m"
              {
#line 324 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_22, &parse_tree__prog_util__StateVars_25);
              }
#line 325 "prog_util.m"
              {
#line 325 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_23, &parse_tree__prog_util__DotSVars_26);
              }
#line 326 "prog_util.m"
              {
#line 326 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_24, &parse_tree__prog_util__ColonSVars_27);
              }
#line 327 "prog_util.m"
              {
#line 327 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_100, &parse_tree__prog_util__SubGoal_101);
              }
#line 328 "prog_util.m"
              {
#line 328 "prog_util.m"
                MR_Word base;
#line 328 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 328 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 328 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_99));
#line 328 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_103));
#line 328 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_25));
#line 328 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_26));
#line 328 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_27));
#line 328 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_101));
#line 328 "prog_util.m"
              }
#line 322 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 9:
#line 332 "prog_util.m"
            {
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_106;
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_108;
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_112;
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars_113;
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars_114;

#line 333 "prog_util.m"
              {
#line 333 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_107, &parse_tree__prog_util__Vars_108);
              }
#line 334 "prog_util.m"
              {
#line 334 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_109, &parse_tree__prog_util__StateVars_112);
              }
#line 335 "prog_util.m"
              {
#line 335 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_110, &parse_tree__prog_util__DotSVars_113);
              }
#line 336 "prog_util.m"
              {
#line 336 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_111, &parse_tree__prog_util__ColonSVars_114);
              }
#line 337 "prog_util.m"
              {
#line 337 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_105, &parse_tree__prog_util__SubGoal_106);
              }
#line 338 "prog_util.m"
              {
#line 338 "prog_util.m"
                MR_Word base;
#line 338 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 338 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 338 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_104));
#line 338 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_108));
#line 338 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_112));
#line 338 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_113));
#line 338 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_114));
#line 338 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_106));
#line 338 "prog_util.m"
              }
#line 332 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 10:
#line 342 "prog_util.m"
            {
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_117;
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_119;
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_123;
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars_124;
#line 342 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars_125;

#line 343 "prog_util.m"
              {
#line 343 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_118, &parse_tree__prog_util__Vars_119);
              }
#line 344 "prog_util.m"
              {
#line 344 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_120, &parse_tree__prog_util__StateVars_123);
              }
#line 345 "prog_util.m"
              {
#line 345 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_121, &parse_tree__prog_util__DotSVars_124);
              }
#line 346 "prog_util.m"
              {
#line 346 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_122, &parse_tree__prog_util__ColonSVars_125);
              }
#line 347 "prog_util.m"
              {
#line 347 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_116, &parse_tree__prog_util__SubGoal_117);
              }
#line 348 "prog_util.m"
              {
#line 348 "prog_util.m"
                MR_Word base;
#line 348 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 348 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 348 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 348 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_115));
#line 348 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_119));
#line 348 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_123));
#line 348 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_124));
#line 348 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_125));
#line 348 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_117));
#line 348 "prog_util.m"
              }
#line 342 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 11:
#line 352 "prog_util.m"
            {
#line 352 "prog_util.m"
              MR_Word parse_tree__prog_util__Detism_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 352 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 352 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 352 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_128;

#line 353 "prog_util.m"
              {
#line 353 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_127, &parse_tree__prog_util__SubGoal_128);
              }
#line 354 "prog_util.m"
              {
#line 354 "prog_util.m"
                MR_Word base;
#line 354 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 354 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 354 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 354 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_126));
#line 354 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Detism_28));
#line 354 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_128));
#line 354 "prog_util.m"
              }
#line 352 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 12:
#line 356 "prog_util.m"
            {
#line 356 "prog_util.m"
              MR_Word parse_tree__prog_util__Var0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 356 "prog_util.m"
              MR_Word parse_tree__prog_util__Var_30;
#line 356 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 356 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 356 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_131;

#line 357 "prog_util.m"
              {
#line 357 "prog_util.m"
                parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_29, &parse_tree__prog_util__Var_30);
              }
#line 358 "prog_util.m"
              {
#line 358 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_130, &parse_tree__prog_util__SubGoal_131);
              }
#line 359 "prog_util.m"
              {
#line 359 "prog_util.m"
                MR_Word base;
#line 359 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 359 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 359 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_129));
#line 359 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_30));
#line 359 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_131));
#line 359 "prog_util.m"
              }
#line 356 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 13:
#line 362 "prog_util.m"
            {
#line 362 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 362 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 362 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_134;
#line 362 "prog_util.m"
              MR_Word parse_tree__prog_util__Detism_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 362 "prog_util.m"
              MR_Word parse_tree__prog_util__Var0_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 362 "prog_util.m"
              MR_Word parse_tree__prog_util__Var_137;

#line 363 "prog_util.m"
              {
#line 363 "prog_util.m"
                parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_136, &parse_tree__prog_util__Var_137);
              }
#line 364 "prog_util.m"
              {
#line 364 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_133, &parse_tree__prog_util__SubGoal_134);
              }
#line 365 "prog_util.m"
              {
#line 365 "prog_util.m"
                MR_Word base;
#line 365 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 365 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 365 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_132));
#line 365 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_137));
#line 365 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Detism_135));
#line 365 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_134));
#line 365 "prog_util.m"
              }
#line 362 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 14:
#line 369 "prog_util.m"
            {
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeCtorInfo_175_175;
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__CompileTime_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__RunTime_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__Mutables0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO_35;
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__Mutables_38;
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__V_80_80;
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 369 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_140;

#line 373 "prog_util.m"
              if ((parse_tree__prog_util__MaybeIO0_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "prog_util.m"
                parse_tree__prog_util__MaybeIO_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "prog_util.m"
              else
#line 374 "prog_util.m"
                {
#line 374 "prog_util.m"
                  MR_Word parse_tree__prog_util__IOStateVar0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO0_33, (MR_Integer) 0)));
#line 374 "prog_util.m"
                  MR_Word parse_tree__prog_util__IOStateVar_37;

#line 375 "prog_util.m"
                  {
#line 375 "prog_util.m"
                    parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__IOStateVar0_36, &parse_tree__prog_util__IOStateVar_37);
                  }
#line 376 "prog_util.m"
                  {
#line 376 "prog_util.m"
                    parse_tree__prog_util__MaybeIO_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO_35, 0) = ((MR_Box) (parse_tree__prog_util__IOStateVar_37));
#line 376 "prog_util.m"
                  }
#line 374 "prog_util.m"
                }
#line 378 "prog_util.m"
              {
#line 378 "prog_util.m"
                parse_tree__prog_util__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 378 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_80_80, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
#line 378 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_80_80, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_3));
#line 378 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 378 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_80_80, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 378 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_80_80, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 378 "prog_util.m"
              }
#line 6457 "parse_tree.prog_util.c"
              parse_tree__prog_util__TypeCtorInfo_175_175 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
#line 378 "prog_util.m"
              {
#line 378 "prog_util.m"
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_175_175, parse_tree__prog_util__TypeCtorInfo_175_175, parse_tree__prog_util__V_80_80, parse_tree__prog_util__Mutables0_34, &parse_tree__prog_util__Mutables_38);
              }
#line 380 "prog_util.m"
              {
#line 380 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_139, &parse_tree__prog_util__SubGoal_140);
              }
#line 381 "prog_util.m"
              {
#line 381 "prog_util.m"
                MR_Word base;
#line 381 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 381 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 381 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_138));
#line 381 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__CompileTime_31));
#line 381 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__RunTime_32));
#line 381 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeIO_35));
#line 381 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Mutables_38));
#line 381 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_140));
#line 381 "prog_util.m"
              }
#line 369 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 15:
#line 385 "prog_util.m"
            {
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeCtorInfo_181_181;
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__InVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__OutVars0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeVars0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__MainGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__OrElseGoal0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__InVars_44;
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__OutVars_45;
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeVars_46;
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__MainGoal_49;
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__OrElseGoal_50;
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__V_79_79;
#line 385 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 386 "prog_util.m"
              {
#line 386 "prog_util.m"
                parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__InVars0_39, &parse_tree__prog_util__InVars_44);
              }
#line 387 "prog_util.m"
              {
#line 387 "prog_util.m"
                parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__OutVars0_40, &parse_tree__prog_util__OutVars_45);
              }
#line 391 "prog_util.m"
              if ((parse_tree__prog_util__MaybeVars0_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "prog_util.m"
                parse_tree__prog_util__MaybeVars_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "prog_util.m"
              else
#line 392 "prog_util.m"
                {
#line 392 "prog_util.m"
                  MR_Word parse_tree__prog_util__TypeInfo_178_178;
#line 392 "prog_util.m"
                  MR_Word parse_tree__prog_util__TransVars0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars0_41, (MR_Integer) 0)));
#line 392 "prog_util.m"
                  MR_Word parse_tree__prog_util__TransVars_48;
#line 392 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_78_78;

#line 393 "prog_util.m"
                  {
#line 393 "prog_util.m"
                    parse_tree__prog_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
#line 393 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_1));
#line 393 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 393 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 393 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 393 "prog_util.m"
                  }
#line 6571 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_178_178 = (MR_Word) &parse_tree__prog_util_scalar_common_1[1];
#line 393 "prog_util.m"
                  {
#line 393 "prog_util.m"
                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_178_178, parse_tree__prog_util__TypeInfo_178_178, parse_tree__prog_util__V_78_78, parse_tree__prog_util__TransVars0_47, &parse_tree__prog_util__TransVars_48);
                  }
#line 395 "prog_util.m"
                  {
#line 395 "prog_util.m"
                    parse_tree__prog_util__MaybeVars_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars_46, 0) = ((MR_Box) (parse_tree__prog_util__TransVars_48));
#line 395 "prog_util.m"
                  }
#line 392 "prog_util.m"
                }
#line 397 "prog_util.m"
              {
#line 397 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MainGoal0_42, &parse_tree__prog_util__MainGoal_49);
              }
#line 398 "prog_util.m"
              {
#line 398 "prog_util.m"
                parse_tree__prog_util__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 398 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_79_79, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
#line 398 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_79_79, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_2));
#line 398 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 398 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_79_79, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 398 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_79_79, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 398 "prog_util.m"
              }
#line 6609 "parse_tree.prog_util.c"
              parse_tree__prog_util__TypeCtorInfo_181_181 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 398 "prog_util.m"
              {
#line 398 "prog_util.m"
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_181_181, parse_tree__prog_util__TypeCtorInfo_181_181, parse_tree__prog_util__V_79_79, parse_tree__prog_util__OrElseGoal0_43, &parse_tree__prog_util__OrElseGoal_50);
              }
#line 399 "prog_util.m"
              {
#line 399 "prog_util.m"
                MR_Word base;
#line 399 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 399 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 399 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 399 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_141));
#line 399 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__InVars_44));
#line 399 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__OutVars_45));
#line 399 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeVars_46));
#line 399 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MainGoal_49));
#line 399 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__OrElseGoal_50));
#line 399 "prog_util.m"
              }
#line 385 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 16:
#line 403 "prog_util.m"
            {
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeCtorInfo_184_184;
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__Then0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeElse0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__Catches0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeCatchAny0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 7)));
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__Then_55;
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeElse_58;
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__Catches_59;
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeCatchAny_64;
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__V_75_75;
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_144;
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO0_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 403 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO_146;

#line 404 "prog_util.m"
              {
#line 404 "prog_util.m"
                parse_tree__prog_util__rename_in_maybe_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MaybeIO0_145, &parse_tree__prog_util__MaybeIO_146);
              }
#line 405 "prog_util.m"
              {
#line 405 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_143, &parse_tree__prog_util__SubGoal_144);
              }
#line 406 "prog_util.m"
              {
#line 406 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_51, &parse_tree__prog_util__Then_55);
              }
#line 411 "prog_util.m"
              if ((parse_tree__prog_util__MaybeElse0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "prog_util.m"
                parse_tree__prog_util__MaybeElse_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "prog_util.m"
              else
#line 408 "prog_util.m"
                {
#line 408 "prog_util.m"
                  MR_Word parse_tree__prog_util__Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse0_52, (MR_Integer) 0)));
#line 408 "prog_util.m"
                  MR_Word parse_tree__prog_util__Else_57;

#line 409 "prog_util.m"
                  {
#line 409 "prog_util.m"
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_56, &parse_tree__prog_util__Else_57);
                  }
#line 410 "prog_util.m"
                  {
#line 410 "prog_util.m"
                    parse_tree__prog_util__MaybeElse_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse_58, 0) = ((MR_Box) (parse_tree__prog_util__Else_57));
#line 410 "prog_util.m"
                  }
#line 408 "prog_util.m"
                }
#line 415 "prog_util.m"
              {
#line 415 "prog_util.m"
                parse_tree__prog_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
#line 415 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_4));
#line 415 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 415 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 415 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 415 "prog_util.m"
              }
#line 6738 "parse_tree.prog_util.c"
              parse_tree__prog_util__TypeCtorInfo_184_184 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0;
#line 415 "prog_util.m"
              {
#line 415 "prog_util.m"
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_184_184, parse_tree__prog_util__TypeCtorInfo_184_184, parse_tree__prog_util__V_75_75, parse_tree__prog_util__Catches0_53, &parse_tree__prog_util__Catches_59);
              }
#line 421 "prog_util.m"
              if ((parse_tree__prog_util__MaybeCatchAny0_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "prog_util.m"
                parse_tree__prog_util__MaybeCatchAny_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 421 "prog_util.m"
              else
#line 417 "prog_util.m"
                {
#line 417 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyVar0_60;
#line 417 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyGoal0_61;
#line 417 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyVar_62;
#line 417 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyGoal_63;
#line 417 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny0_54, (MR_Integer) 0)));
#line 417 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_77_77;

#line 417 "prog_util.m"
                  parse_tree__prog_util__CatchAnyVar0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, (MR_Integer) 0)));
#line 417 "prog_util.m"
                  parse_tree__prog_util__CatchAnyGoal0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, (MR_Integer) 1)));
#line 418 "prog_util.m"
                  {
#line 418 "prog_util.m"
                    parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyVar0_60, &parse_tree__prog_util__CatchAnyVar_62);
                  }
#line 419 "prog_util.m"
                  {
#line 419 "prog_util.m"
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyGoal0_61, &parse_tree__prog_util__CatchAnyGoal_63);
                  }
#line 420 "prog_util.m"
                  {
#line 420 "prog_util.m"
                    parse_tree__prog_util__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 0) = ((MR_Box) (parse_tree__prog_util__CatchAnyVar_62));
#line 420 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 1) = ((MR_Box) (parse_tree__prog_util__CatchAnyGoal_63));
#line 420 "prog_util.m"
                  }
#line 420 "prog_util.m"
                  {
#line 420 "prog_util.m"
                    parse_tree__prog_util__MaybeCatchAny_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny_64, 0) = ((MR_Box) (parse_tree__prog_util__V_77_77));
#line 420 "prog_util.m"
                  }
#line 417 "prog_util.m"
                }
#line 425 "prog_util.m"
              {
#line 425 "prog_util.m"
                MR_Word base;
#line 425 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_142));
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__MaybeIO_146));
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_144));
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Then_55));
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MaybeElse_58));
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Catches_59));
#line 425 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (parse_tree__prog_util__MaybeCatchAny_64));
#line 425 "prog_util.m"
              }
#line 403 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 17:
#line 428 "prog_util.m"
            {
#line 428 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 428 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 428 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 428 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_150;
#line 428 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_151;

#line 429 "prog_util.m"
              {
#line 429 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_148, &parse_tree__prog_util__SubGoalA_150);
              }
#line 430 "prog_util.m"
              {
#line 430 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_149, &parse_tree__prog_util__SubGoalB_151);
              }
#line 431 "prog_util.m"
              {
#line 431 "prog_util.m"
                MR_Word base;
#line 431 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 431 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 431 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 431 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_147));
#line 431 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_150));
#line 431 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_151));
#line 431 "prog_util.m"
              }
#line 428 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 18:
#line 433 "prog_util.m"
            {
#line 433 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 433 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 433 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 433 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_155;
#line 433 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_156;

#line 434 "prog_util.m"
              {
#line 434 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_153, &parse_tree__prog_util__SubGoalA_155);
              }
#line 435 "prog_util.m"
              {
#line 435 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_154, &parse_tree__prog_util__SubGoalB_156);
              }
#line 436 "prog_util.m"
              {
#line 436 "prog_util.m"
                MR_Word base;
#line 436 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 436 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 436 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_152));
#line 436 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_155));
#line 436 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_156));
#line 436 "prog_util.m"
              }
#line 433 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 19:
#line 448 "prog_util.m"
            {
#line 448 "prog_util.m"
              MR_String parse_tree__prog_util__Name_67 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__Terms0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__Terms_69;
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 449 "prog_util.m"
              {
#line 449 "prog_util.m"
                mercury__term__rename_var_in_terms_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Terms0_68, &parse_tree__prog_util__Terms_69);
              }
#line 450 "prog_util.m"
              {
#line 450 "prog_util.m"
                MR_Word base;
#line 450 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 450 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 450 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 450 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_166));
#line 450 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Name_67));
#line 450 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Terms_69));
#line 450 "prog_util.m"
              }
#line 448 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
        }
#line 290 "prog_util.m"
        break;
#line 290 "prog_util.m"
    }
#line 290 "prog_util.m"
  }
#line 107 "prog_util.m"
}

#line 100 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__split_type_and_mode_3_p_0(
#line 100 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 100 "prog_util.m"
  MR_Word * parse_tree__prog_util__T_2,
#line 100 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3)
#line 100 "prog_util.m"
{
#line 281 "prog_util.m"
  {
#line 281 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 281 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 282 "prog_util.m"
      {
#line 282 "prog_util.m"
        MR_Word parse_tree__prog_util__M_6;

#line 282 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 282 "prog_util.m"
        parse_tree__prog_util__M_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 282 "prog_util.m"
        {
#line 282 "prog_util.m"
          MR_Word base;
#line 282 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 282 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_6));
#line 282 "prog_util.m"
        }
#line 282 "prog_util.m"
      }
#line 281 "prog_util.m"
    else
#line 281 "prog_util.m"
      {
#line 281 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 281 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "prog_util.m"
      }
#line 281 "prog_util.m"
  }
#line 100 "prog_util.m"
}

#line 97 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__split_types_and_modes_3_p_0(
#line 97 "prog_util.m"
  MR_Word parse_tree__prog_util__TypesAndModes_4,
#line 97 "prog_util.m"
  MR_Word * parse_tree__prog_util__Types_5,
#line 97 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeModes_6)
#line 97 "prog_util.m"
{
#line 252 "prog_util.m"
  {
#line 252 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 252 "prog_util.m"
    MR_Word parse_tree__prog_util__Modes_7;
#line 252 "prog_util.m"
    MR_Word parse_tree__prog_util__Result_8;

#line 253 "prog_util.m"
    {
#line 253 "prog_util.m"
      parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TypesAndModes_4, (MR_Integer) 1, parse_tree__prog_util__Types_5, &parse_tree__prog_util__Modes_7, &parse_tree__prog_util__Result_8);
    }
#line 257 "prog_util.m"
#line 257 "prog_util.m"
    switch (parse_tree__prog_util__Result_8) {
#line 257 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 257 "prog_util.m"
      case (MR_Integer) 0:
#line 259 "prog_util.m"
        *parse_tree__prog_util__MaybeModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 257 "prog_util.m"
        break;
#line 257 "prog_util.m"
      case (MR_Integer) 1:
#line 256 "prog_util.m"
        {
#line 256 "prog_util.m"
          MR_Word base;
#line 256 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_util.m"
          *parse_tree__prog_util__MaybeModes_6 = base;
#line 256 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Modes_7));
#line 256 "prog_util.m"
        }
#line 257 "prog_util.m"
        break;
#line 257 "prog_util.m"
    }
#line 252 "prog_util.m"
  }
#line 97 "prog_util.m"
}

#line 72 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_pred_name_with_context_7_p_0(
#line 72 "prog_util.m"
  MR_Word parse_tree__prog_util__ModuleName_8,
#line 72 "prog_util.m"
  MR_String parse_tree__prog_util__Prefix_9,
#line 72 "prog_util.m"
  MR_Word parse_tree__prog_util__PredOrFunc_10,
#line 72 "prog_util.m"
  MR_String parse_tree__prog_util__PredName_11,
#line 72 "prog_util.m"
  MR_Integer parse_tree__prog_util__Line_12,
#line 72 "prog_util.m"
  MR_Integer parse_tree__prog_util__Counter_13,
#line 72 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_14)
#line 72 "prog_util.m"
{
#line 528 "prog_util.m"
  {
#line 528 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 528 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 528 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;

#line 529 "prog_util.m"
    {
#line 529 "prog_util.m"
      parse_tree__prog_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__PredOrFunc_10));
#line 529 "prog_util.m"
    }
#line 530 "prog_util.m"
    {
#line 530 "prog_util.m"
      parse_tree__prog_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_util__Line_12));
#line 530 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_util__Counter_13));
#line 530 "prog_util.m"
    }
#line 529 "prog_util.m"
    {
#line 529 "prog_util.m"
      parse_tree__prog_util__make_pred_name_6_p_0(parse_tree__prog_util__ModuleName_8, parse_tree__prog_util__Prefix_9, parse_tree__prog_util__V_15_15, parse_tree__prog_util__PredName_11, parse_tree__prog_util__V_16_16, parse_tree__prog_util__SymName_14);
    }
#line 528 "prog_util.m"
  }
#line 72 "prog_util.m"
}

#line 63 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_pred_name_6_p_0(
#line 63 "prog_util.m"
  MR_Word parse_tree__prog_util__ModuleName_7,
#line 63 "prog_util.m"
  MR_String parse_tree__prog_util__Prefix_8,
#line 63 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybePredOrFunc_9,
#line 63 "prog_util.m"
  MR_String parse_tree__prog_util__PredName_10,
#line 63 "prog_util.m"
  MR_Word parse_tree__prog_util__NewPredId_11,
#line 63 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_12)
#line 63 "prog_util.m"
{
#line 533 "prog_util.m"
  {
#line 533 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__PFS_14;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__PredIdStr_17;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__Name_32;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_93_93;
#line 533 "prog_util.m"
    MR_Word parse_tree__prog_util__V_99_99;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_101_101;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_102_102;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_109_109;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_111_111;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_112_112;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_119_119;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_121_121;
#line 533 "prog_util.m"
    MR_String parse_tree__prog_util__V_122_122;

#line 537 "prog_util.m"
    if ((parse_tree__prog_util__MaybePredOrFunc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "prog_util.m"
      parse_tree__prog_util__PFS_14 = (MR_String) "pred_or_func";
#line 537 "prog_util.m"
    else
#line 535 "prog_util.m"
      {
#line 535 "prog_util.m"
        MR_Word parse_tree__prog_util__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybePredOrFunc_9, (MR_Integer) 0)));

#line 536 "prog_util.m"
        {
#line 536 "prog_util.m"
          parse_tree__prog_util__PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_util__PredOrFunc_13);
        }
#line 535 "prog_util.m"
      }
#line 544 "prog_util.m"
#line 544 "prog_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) {
#line 544 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 544 "prog_util.m"
      case (MR_Integer) 0:
#line 568 "prog_util.m"
        parse_tree__prog_util__PredIdStr_17 = (MR_String) "";
#line 544 "prog_util.m"
        break;
#line 544 "prog_util.m"
      case (MR_Integer) 1:
#line 542 "prog_util.m"
        {
#line 542 "prog_util.m"
          MR_Integer parse_tree__prog_util__Line_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 542 "prog_util.m"
          MR_Integer parse_tree__prog_util__Counter_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 542 "prog_util.m"
          MR_String parse_tree__prog_util__V_77_77;
#line 542 "prog_util.m"
          MR_Word parse_tree__prog_util__V_83_83 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 542 "prog_util.m"
          MR_String parse_tree__prog_util__V_85_85;
#line 542 "prog_util.m"
          MR_String parse_tree__prog_util__V_86_86;

#line 543 "prog_util.m"
          {
#line 543 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Counter_16, &parse_tree__prog_util__V_77_77);
          }
#line 543 "prog_util.m"
          {
#line 543 "prog_util.m"
            parse_tree__prog_util__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_77_77);
          }
#line 543 "prog_util.m"
          {
#line 543 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Line_15, &parse_tree__prog_util__V_86_86);
          }
#line 543 "prog_util.m"
          {
#line 543 "prog_util.m"
            parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_86_86, parse_tree__prog_util__V_85_85);
          }
#line 542 "prog_util.m"
        }
#line 544 "prog_util.m"
        break;
#line 544 "prog_util.m"
      case (MR_Integer) 2:
#line 545 "prog_util.m"
        {
#line 545 "prog_util.m"
          MR_Word parse_tree__prog_util__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 545 "prog_util.m"
          MR_Word parse_tree__prog_util__TypeSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 552 "prog_util.m"
          {
#line 552 "prog_util.m"
            parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(parse_tree__prog_util__VarSet_18, parse_tree__prog_util__TypeSubst_19, &parse_tree__prog_util__PredIdStr_17);
          }
#line 545 "prog_util.m"
        }
#line 544 "prog_util.m"
        break;
#line 544 "prog_util.m"
      case (MR_Integer) 3:
#line 544 "prog_util.m"
#line 544 "prog_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) {
#line 544 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 544 "prog_util.m"
          case (MR_Integer) 0:
#line 556 "prog_util.m"
            {
#line 556 "prog_util.m"
              MR_Word parse_tree__prog_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 557 "prog_util.m"
              {
#line 557 "prog_util.m"
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_74, &parse_tree__prog_util__PredIdStr_17);
              }
#line 556 "prog_util.m"
            }
#line 544 "prog_util.m"
            break;
#line 544 "prog_util.m"
          case (MR_Integer) 1:
#line 556 "prog_util.m"
            {
#line 556 "prog_util.m"
              MR_Word parse_tree__prog_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 557 "prog_util.m"
              {
#line 557 "prog_util.m"
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_27, &parse_tree__prog_util__PredIdStr_17);
              }
#line 556 "prog_util.m"
            }
#line 544 "prog_util.m"
            break;
#line 544 "prog_util.m"
          case (MR_Integer) 2:
#line 559 "prog_util.m"
            {
#line 559 "prog_util.m"
              MR_Integer parse_tree__prog_util__ModeNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 559 "prog_util.m"
              MR_String parse_tree__prog_util__ModeStr_29;
#line 559 "prog_util.m"
              MR_String parse_tree__prog_util__ArgsStr_30;
#line 559 "prog_util.m"
              MR_String parse_tree__prog_util__V_34_34;
#line 559 "prog_util.m"
              MR_Word parse_tree__prog_util__Args_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 2)));

#line 560 "prog_util.m"
              {
#line 560 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__ModeNum_28, &parse_tree__prog_util__ModeStr_29);
              }
#line 561 "prog_util.m"
              {
#line 561 "prog_util.m"
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_63, &parse_tree__prog_util__ArgsStr_30);
              }
#line 562 "prog_util.m"
              {
#line 562 "prog_util.m"
                parse_tree__prog_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__ArgsStr_30);
              }
#line 562 "prog_util.m"
              {
#line 562 "prog_util.m"
                parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__ModeStr_29, parse_tree__prog_util__V_34_34);
              }
#line 559 "prog_util.m"
            }
#line 544 "prog_util.m"
            break;
#line 544 "prog_util.m"
          case (MR_Integer) 3:
#line 564 "prog_util.m"
            {
#line 564 "prog_util.m"
              MR_Integer parse_tree__prog_util__Distance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 565 "prog_util.m"
              {
#line 565 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__Distance_31, &parse_tree__prog_util__PredIdStr_17);
              }
#line 564 "prog_util.m"
            }
#line 544 "prog_util.m"
            break;
#line 544 "prog_util.m"
        }
#line 544 "prog_util.m"
        break;
#line 544 "prog_util.m"
    }
#line 7382 "parse_tree.prog_util.c"
    parse_tree__prog_util__V_99_99 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredIdStr_17, &parse_tree__prog_util__V_93_93);
    }
#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_93_93);
    }
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredName_10, &parse_tree__prog_util__V_102_102);
    }
#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__V_109_109 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_102_102, parse_tree__prog_util__V_101_101);
    }
#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_109_109);
    }
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PFS_14, &parse_tree__prog_util__V_112_112);
    }
#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__V_119_119 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_112_112, parse_tree__prog_util__V_111_111);
    }
#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_119_119);
    }
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__Prefix_8, &parse_tree__prog_util__V_122_122);
    }
#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__Name_32 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_122_122, parse_tree__prog_util__V_121_121);
    }
#line 573 "prog_util.m"
    {
#line 573 "prog_util.m"
      MR_Word base;
#line 573 "prog_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "prog_util.m"
      *parse_tree__prog_util__SymName_12 = base;
#line 573 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_7));
#line 573 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_32));
#line 573 "prog_util.m"
    }
#line 533 "prog_util.m"
  }
#line 63 "prog_util.m"
}

#line 53 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_1(
#line 53 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 53 "prog_util.m"
  MR_Integer * parse_tree__prog_util__HeadVar__2_2,
#line 53 "prog_util.m"
  MR_Integer parse_tree__prog_util__Arity_3)
#line 53 "prog_util.m"
{
#line 246 "prog_util.m"
  {
#line 246 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 246 "prog_util.m"
#line 246 "prog_util.m"
    switch (parse_tree__prog_util__HeadVar__1_1) {
#line 246 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 246 "prog_util.m"
      case (MR_Integer) 1:
#line 247 "prog_util.m"
        {
#line 247 "prog_util.m"
          *parse_tree__prog_util__HeadVar__2_2 = (parse_tree__prog_util__Arity_3 - (MR_Integer) 1);
#line 247 "prog_util.m"
        }
#line 246 "prog_util.m"
        break;
#line 246 "prog_util.m"
      case (MR_Integer) 0:
#line 246 "prog_util.m"
        *parse_tree__prog_util__HeadVar__2_2 = parse_tree__prog_util__Arity_3;
#line 246 "prog_util.m"
        break;
#line 246 "prog_util.m"
    }
#line 246 "prog_util.m"
  }
#line 53 "prog_util.m"
}

#line 52 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_0(
#line 52 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 52 "prog_util.m"
  MR_Integer parse_tree__prog_util__HeadVar__2_2,
#line 52 "prog_util.m"
  MR_Integer * parse_tree__prog_util__Arity_3)
#line 52 "prog_util.m"
{
#line 246 "prog_util.m"
  {
#line 246 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 246 "prog_util.m"
#line 246 "prog_util.m"
    switch (parse_tree__prog_util__HeadVar__1_1) {
#line 246 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 246 "prog_util.m"
      case (MR_Integer) 1:
#line 247 "prog_util.m"
        {
#line 247 "prog_util.m"
          *parse_tree__prog_util__Arity_3 = ((MR_Integer) 1 + parse_tree__prog_util__HeadVar__2_2);
#line 247 "prog_util.m"
        }
#line 246 "prog_util.m"
        break;
#line 246 "prog_util.m"
      case (MR_Integer) 0:
#line 246 "prog_util.m"
        *parse_tree__prog_util__Arity_3 = parse_tree__prog_util__HeadVar__2_2;
#line 246 "prog_util.m"
        break;
#line 246 "prog_util.m"
    }
#line 246 "prog_util.m"
  }
#line 52 "prog_util.m"
}

#line 40 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(
#line 40 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_22,
#line 40 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName_5,
#line 40 "prog_util.m"
  MR_Word parse_tree__prog_util__Args_6,
#line 40 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_7,
#line 40 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_8)
#line 40 "prog_util.m"
{
#line 239 "prog_util.m"
  {
#line 239 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 239 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__SymName_5)) == (MR_mktag((MR_Integer) 1))))
#line 234 "prog_util.m"
      {
#line 234 "prog_util.m"
        MR_Word parse_tree__prog_util__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));
#line 234 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 1)));
#line 234 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleTerm_11;
#line 234 "prog_util.m"
        MR_Word parse_tree__prog_util__UnqualifiedTerm_12;
#line 234 "prog_util.m"
        MR_Word parse_tree__prog_util__V_15_15;
#line 234 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 234 "prog_util.m"
        MR_Word parse_tree__prog_util__V_19_19;

#line 235 "prog_util.m"
        {
#line 235 "prog_util.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_22, parse_tree__prog_util__Module_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__Context_7, &parse_tree__prog_util__ModuleTerm_11);
        }
#line 236 "prog_util.m"
        {
#line 236 "prog_util.m"
          parse_tree__prog_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 236 "prog_util.m"
        }
#line 236 "prog_util.m"
        {
#line 236 "prog_util.m"
          parse_tree__prog_util__UnqualifiedTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__V_15_15));
#line 236 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 236 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 236 "prog_util.m"
        }
#line 238 "prog_util.m"
        {
#line 238 "prog_util.m"
          parse_tree__prog_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_util__UnqualifiedTerm_12));
#line 238 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_util.m"
        }
#line 238 "prog_util.m"
        {
#line 238 "prog_util.m"
          parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_util__ModuleTerm_11));
#line 238 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_util__V_19_19));
#line 238 "prog_util.m"
        }
#line 237 "prog_util.m"
        {
#line 237 "prog_util.m"
          MR_Word base;
#line 237 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 237 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 237 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_18_18));
#line 237 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 237 "prog_util.m"
        }
#line 234 "prog_util.m"
      }
#line 239 "prog_util.m"
    else
#line 240 "prog_util.m"
      {
#line 240 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 240 "prog_util.m"
        MR_String parse_tree__prog_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));

#line 241 "prog_util.m"
        {
#line 241 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__Name_21));
#line 241 "prog_util.m"
        }
#line 241 "prog_util.m"
        {
#line 241 "prog_util.m"
          MR_Word base;
#line 241 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 241 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 241 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 241 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 241 "prog_util.m"
        }
#line 240 "prog_util.m"
      }
#line 239 "prog_util.m"
  }
#line 40 "prog_util.m"
}

#line 37 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__construct_qualified_term_3_p_0(
#line 37 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_8,
#line 37 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName_4,
#line 37 "prog_util.m"
  MR_Word parse_tree__prog_util__Args_5,
#line 37 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_6)
#line 37 "prog_util.m"
{
#line 228 "prog_util.m"
  {
#line 228 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 228 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_7;

#line 229 "prog_util.m"
    {
#line 229 "prog_util.m"
      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_7);
    }
#line 230 "prog_util.m"
    {
#line 230 "prog_util.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_8, parse_tree__prog_util__SymName_4, parse_tree__prog_util__Args_5, parse_tree__prog_util__Context_7, parse_tree__prog_util__Term_6);
    }
#line 228 "prog_util.m"
  }
#line 37 "prog_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_util. */
