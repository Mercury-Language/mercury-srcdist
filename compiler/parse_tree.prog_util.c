/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

#line 597 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 597 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 590 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 590 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 590 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 590 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 838 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 838 "prog_util.m"
  MR_Word parse_tree__prog_util__Qualifier_5,
#line 838 "prog_util.m"
  MR_Word parse_tree__prog_util__InnerTerm_6,
#line 838 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_7);

#line 597 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 597 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 590 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 590 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 590 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 561 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__561__1_3_p_0(
#line 561 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 561 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 561 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38);

#line 861 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 861 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 861 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 861 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3);

#line 757 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 757 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 757 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 757 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 757 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 757 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 757 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 757 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18);

#line 531 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 531 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 531 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 531 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 531 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8);

#line 518 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 518 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 518 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 518 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 518 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8);

#line 508 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 508 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8);

#line 500 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 500 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 500 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 500 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 500 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4);

#line 492 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 492 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 492 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 492 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 492 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8);

#line 477 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 477 "prog_util.m"
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

#line 430 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
#line 430 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 430 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 430 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 393 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
#line 393 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 393 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 393 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 413 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 413 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 413 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 413 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 408 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
#line 408 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 408 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 408 "prog_util.m"
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

#line 597 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 597 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 597 "prog_util.m"
{
#line 600 "prog_util.m"
  {
#line 600 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 600 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 600 "prog_util.m"
    else
#line 601 "prog_util.m"
      {
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 601 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 604 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 604 "prog_util.m"
        else
#line 605 "prog_util.m"
          {
#line 605 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 605 "prog_util.m"
            MR_Word parse_tree__prog_util__T_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 605 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 605 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 605 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 604 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 604 "prog_util.m"
            else
#line 605 "prog_util.m"
              {
#line 605 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 606 "prog_util.m"
                {
#line 606 "prog_util.m"
                  parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 607 "prog_util.m"
                {
#line 607 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 607 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 607 "prog_util.m"
                }
#line 605 "prog_util.m"
              }
#line 609 "prog_util.m"
            {
#line 609 "prog_util.m"
              parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__561__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 610 "prog_util.m"
            {
#line 610 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 610 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 610 "prog_util.m"
            }
#line 607 "prog_util.m"
            {
#line 607 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 607 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 607 "prog_util.m"
            }
#line 605 "prog_util.m"
          }
#line 609 "prog_util.m"
        {
#line 609 "prog_util.m"
          parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__561__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 610 "prog_util.m"
        {
#line 610 "prog_util.m"
          MR_Word base;
#line 610 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 610 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 610 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 610 "prog_util.m"
        }
#line 601 "prog_util.m"
      }
#line 600 "prog_util.m"
  }
#line 597 "prog_util.m"
}

#line 590 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 590 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 590 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 590 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 590 "prog_util.m"
{
#line 593 "prog_util.m"
  {
#line 593 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 593 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 593 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 594 "prog_util.m"
    {
#line 594 "prog_util.m"
      parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_14_14, parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 595 "prog_util.m"
    {
#line 595 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 595 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 595 "prog_util.m"
    }
#line 595 "prog_util.m"
    {
#line 595 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 595 "prog_util.m"
      return;
    }
#line 593 "prog_util.m"
  }
#line 590 "prog_util.m"
}

#line 838 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 838 "prog_util.m"
  MR_Word parse_tree__prog_util__Qualifier_5,
#line 838 "prog_util.m"
  MR_Word parse_tree__prog_util__InnerTerm_6,
#line 838 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_7)
#line 838 "prog_util.m"
{
#line 841 "prog_util.m"
  {
#line 841 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 841 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_8;
#line 841 "prog_util.m"
    MR_Word parse_tree__prog_util__QualifierTerm_10;
#line 841 "prog_util.m"
    MR_Word parse_tree__prog_util__V_19_19;
#line 841 "prog_util.m"
    MR_Word parse_tree__prog_util__V_20_20;

#line 846 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Qualifier_5)) == (MR_mktag((MR_Integer) 1))))
#line 847 "prog_util.m"
      {
#line 847 "prog_util.m"
        MR_Word parse_tree__prog_util__OuterQualifier_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Qualifier_5, (MR_Integer) 0)));
#line 847 "prog_util.m"
        MR_Word parse_tree__prog_util__InnerQualifierTerm_12;
#line 847 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 847 "prog_util.m"
        MR_String parse_tree__prog_util__InnerQualifier_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Qualifier_5, (MR_Integer) 1)));

#line 849 "prog_util.m"
        {
#line 849 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 849 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__InnerQualifier_22));
#line 849 "prog_util.m"
        }
#line 849 "prog_util.m"
        {
#line 849 "prog_util.m"
          parse_tree__prog_util__InnerQualifierTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 849 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 849 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__InnerQualifierTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 849 "prog_util.m"
        }
#line 850 "prog_util.m"
        {
#line 850 "prog_util.m"
          parse_tree__prog_util__QualifierTerm_10 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__OuterQualifier_11, parse_tree__prog_util__InnerQualifierTerm_12, parse_tree__prog_util__Context_7);
        }
#line 847 "prog_util.m"
      }
#line 846 "prog_util.m"
    else
#line 843 "prog_util.m"
      {
#line 843 "prog_util.m"
        MR_String parse_tree__prog_util__InnerQualifier_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Qualifier_5, (MR_Integer) 0)));
#line 843 "prog_util.m"
        MR_Word parse_tree__prog_util__V_15_15;

#line 845 "prog_util.m"
        {
#line 845 "prog_util.m"
          parse_tree__prog_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__InnerQualifier_9));
#line 845 "prog_util.m"
        }
#line 845 "prog_util.m"
        {
#line 845 "prog_util.m"
          parse_tree__prog_util__QualifierTerm_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 0) = ((MR_Box) (parse_tree__prog_util__V_15_15));
#line 845 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__QualifierTerm_10, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 845 "prog_util.m"
        }
#line 843 "prog_util.m"
      }
#line 853 "prog_util.m"
    {
#line 853 "prog_util.m"
      parse_tree__prog_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_util__InnerTerm_6));
#line 853 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "prog_util.m"
    }
#line 853 "prog_util.m"
    {
#line 853 "prog_util.m"
      parse_tree__prog_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_util__QualifierTerm_10));
#line 853 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_util__V_20_20));
#line 853 "prog_util.m"
    }
#line 853 "prog_util.m"
    {
#line 853 "prog_util.m"
      parse_tree__prog_util__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 853 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 853 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 1) = ((MR_Box) (parse_tree__prog_util__V_19_19));
#line 853 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Term_8, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 853 "prog_util.m"
    }
#line 841 "prog_util.m"
    return parse_tree__prog_util__Term_8;
#line 841 "prog_util.m"
  }
#line 838 "prog_util.m"
}

#line 597 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 597 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 597 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 597 "prog_util.m"
{
#line 600 "prog_util.m"
  {
#line 600 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 600 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 600 "prog_util.m"
    else
#line 601 "prog_util.m"
      {
#line 601 "prog_util.m"
        MR_Integer parse_tree__prog_util__T_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 601 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 604 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 604 "prog_util.m"
        else
#line 605 "prog_util.m"
          {
#line 605 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 605 "prog_util.m"
            MR_Integer parse_tree__prog_util__T_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 605 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 605 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 605 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 604 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 604 "prog_util.m"
            else
#line 605 "prog_util.m"
              {
#line 605 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 606 "prog_util.m"
                {
#line 606 "prog_util.m"
                  parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 607 "prog_util.m"
                {
#line 607 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 607 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 607 "prog_util.m"
                }
#line 605 "prog_util.m"
              }
#line 609 "prog_util.m"
            {
#line 609 "prog_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 610 "prog_util.m"
            {
#line 610 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 610 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 610 "prog_util.m"
            }
#line 607 "prog_util.m"
            {
#line 607 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 607 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 607 "prog_util.m"
            }
#line 605 "prog_util.m"
          }
#line 609 "prog_util.m"
        {
#line 609 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 610 "prog_util.m"
        {
#line 610 "prog_util.m"
          MR_Word base;
#line 610 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 610 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 610 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 610 "prog_util.m"
        }
#line 601 "prog_util.m"
      }
#line 600 "prog_util.m"
  }
#line 597 "prog_util.m"
}

#line 590 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 590 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 590 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 590 "prog_util.m"
{
#line 593 "prog_util.m"
  {
#line 593 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 593 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 593 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 594 "prog_util.m"
    {
#line 594 "prog_util.m"
      parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 595 "prog_util.m"
    {
#line 595 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 595 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 595 "prog_util.m"
    }
#line 595 "prog_util.m"
    {
#line 595 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 595 "prog_util.m"
      return;
    }
#line 593 "prog_util.m"
  }
#line 590 "prog_util.m"
}

#line 561 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__561__1_3_p_0(
#line 561 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 561 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 561 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38)
#line 561 "prog_util.m"
{
#line 561 "prog_util.m"
  {
#line 561 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 561 "prog_util.m"
    MR_Word parse_tree__prog_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 0)));
#line 561 "prog_util.m"
    MR_Word parse_tree__prog_util__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 1)));
#line 561 "prog_util.m"
    MR_String parse_tree__prog_util__VarName_25;
#line 561 "prog_util.m"
    MR_String parse_tree__prog_util__TypeString_26;
#line 561 "prog_util.m"
    MR_Word parse_tree__prog_util__V_40_40;
#line 561 "prog_util.m"
    MR_Word parse_tree__prog_util__V_41_41;
#line 561 "prog_util.m"
    MR_Word parse_tree__prog_util__V_43_43;

#line 563 "prog_util.m"
    {
#line 563 "prog_util.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_18, parse_tree__prog_util__Var_23, &parse_tree__prog_util__VarName_25);
    }
#line 564 "prog_util.m"
    {
#line 564 "prog_util.m"
      parse_tree__prog_util__TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_util__VarSet_18, (MR_Integer) 0, parse_tree__prog_util__Type_24);
    }
#line 565 "prog_util.m"
    {
#line 565 "prog_util.m"
      parse_tree__prog_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_util__TypeString_26));
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "prog_util.m"
    }
#line 565 "prog_util.m"
    {
#line 565 "prog_util.m"
      parse_tree__prog_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 0) = ((MR_Box) ((MR_String) " = "));
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 1) = ((MR_Box) (parse_tree__prog_util__V_43_43));
#line 565 "prog_util.m"
    }
#line 565 "prog_util.m"
    {
#line 565 "prog_util.m"
      parse_tree__prog_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_util__VarName_25));
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_util__V_41_41));
#line 565 "prog_util.m"
    }
#line 565 "prog_util.m"
    {
#line 565 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_40_40, parse_tree__prog_util__HeadVar__3_38);
#line 565 "prog_util.m"
      return;
    }
#line 561 "prog_util.m"
  }
#line 561 "prog_util.m"
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
#line 1596 "parse_tree.prog_util.c"
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
#line 1620 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
              break;
#line 75 "prog_util.m"
            case (MR_Integer) 2:
#line 1626 "parse_tree.prog_util.c"
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
#line 1639 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                  break;
#line 75 "prog_util.m"
                case (MR_Integer) 1:
#line 1645 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                  break;
#line 75 "prog_util.m"
                case (MR_Integer) 2:
#line 1651 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                  break;
#line 75 "prog_util.m"
                case (MR_Integer) 3:
#line 1657 "parse_tree.prog_util.c"
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
#line 1685 "parse_tree.prog_util.c"
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
#line 1705 "parse_tree.prog_util.c"
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
#line 75 "prog_util.m"
                      return;
                    }
#line 75 "prog_util.m"
                }
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 2:
#line 1728 "parse_tree.prog_util.c"
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
#line 1741 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1747 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1753 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 1759 "parse_tree.prog_util.c"
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
#line 1789 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                break;
#line 75 "prog_util.m"
              case (MR_Integer) 1:
#line 1795 "parse_tree.prog_util.c"
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
#line 1815 "parse_tree.prog_util.c"
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
#line 75 "prog_util.m"
                        return;
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
#line 1849 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1855 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1861 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 3:
#line 1867 "parse_tree.prog_util.c"
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
#line 1902 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1908 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1914 "parse_tree.prog_util.c"
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
#line 75 "prog_util.m"
                            return;
                          }
#line 75 "prog_util.m"
                        }
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 1:
#line 1945 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 2:
#line 1951 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 3:
#line 1957 "parse_tree.prog_util.c"
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
#line 1985 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 1991 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 1997 "parse_tree.prog_util.c"
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
#line 2010 "parse_tree.prog_util.c"
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
#line 75 "prog_util.m"
                            return;
                          }
#line 75 "prog_util.m"
                        }
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 2:
#line 2034 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 3:
#line 2040 "parse_tree.prog_util.c"
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
#line 2070 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 2076 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 2082 "parse_tree.prog_util.c"
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
#line 2095 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 1:
#line 2101 "parse_tree.prog_util.c"
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
#line 2121 "parse_tree.prog_util.c"
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
#line 75 "prog_util.m"
                                return;
                              }
#line 75 "prog_util.m"
                            }
#line 75 "prog_util.m"
                        }
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 3:
#line 2148 "parse_tree.prog_util.c"
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
#line 2176 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 1:
#line 2182 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                    break;
#line 75 "prog_util.m"
                  case (MR_Integer) 2:
#line 2188 "parse_tree.prog_util.c"
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
#line 2201 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 1:
#line 2207 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "prog_util.m"
                        break;
#line 75 "prog_util.m"
                      case (MR_Integer) 2:
#line 2213 "parse_tree.prog_util.c"
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
#line 75 "prog_util.m"
                            return;
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
#line 2325 "parse_tree.prog_util.c"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_3_3 == parse_tree__prog_util__V_5_5);
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 2329 "parse_tree.prog_util.c"
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
#line 2364 "parse_tree.prog_util.c"
                parse_tree__prog_util__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_util_scalar_common_1[5];
#line 2366 "parse_tree.prog_util.c"
                {
#line 2368 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_util__V_7_7)), ((MR_Box) (parse_tree__prog_util__V_9_9)));
                }
#line 75 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                  {
#line 2375 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_util_scalar_common_1[6];
#line 2377 "parse_tree.prog_util.c"
                    {
#line 2379 "parse_tree.prog_util.c"
                      return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_util__V_8_8)), ((MR_Box) (parse_tree__prog_util__V_10_10)));
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
#line 2416 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2418 "parse_tree.prog_util.c"
                    {
#line 2420 "parse_tree.prog_util.c"
                      return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_util__V_11_11)), ((MR_Box) (parse_tree__prog_util__V_12_12)));
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
#line 2448 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2450 "parse_tree.prog_util.c"
                    {
#line 2452 "parse_tree.prog_util.c"
                      return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_25_25, ((MR_Box) (parse_tree__prog_util__V_13_13)), ((MR_Box) (parse_tree__prog_util__V_14_14)));
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
#line 2486 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_17_17 == parse_tree__prog_util__V_19_19);
#line 75 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 75 "prog_util.m"
                      {
#line 2492 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2494 "parse_tree.prog_util.c"
                        {
#line 2496 "parse_tree.prog_util.c"
                          return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_util__V_18_18)), ((MR_Box) (parse_tree__prog_util__V_20_20)));
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
#line 2524 "parse_tree.prog_util.c"
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
#line 95 "prog_util.m"
      return;
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
      return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_4)));
    }
#line 95 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 95 "prog_util.m"
  }
#line 95 "prog_util.m"
}

#line 861 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 861 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 861 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 861 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 861 "prog_util.m"
{
#line 863 "prog_util.m"
  {
#line 863 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 863 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 863 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "prog_util.m"
      parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__HeadVar__2_2;
#line 863 "prog_util.m"
    else
#line 864 "prog_util.m"
      {
#line 864 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 864 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 864 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;

#line 865 "prog_util.m"
        {
#line 865 "prog_util.m"
          parse_tree__prog_util__V_11_11 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal1_9, parse_tree__prog_util__Goals_10);
        }
#line 865 "prog_util.m"
        {
#line 865 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 865 "prog_util.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 865 "prog_util.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__HeadVar__2_2));
#line 865 "prog_util.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 865 "prog_util.m"
        }
#line 864 "prog_util.m"
      }
#line 863 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 863 "prog_util.m"
  }
#line 861 "prog_util.m"
}

#line 757 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 757 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 757 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 757 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 757 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 757 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 757 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 757 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18)
#line 757 "prog_util.m"
{
#line 763 "prog_util.m"
  {
#line 763 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = (parse_tree__prog_util__N_8 == parse_tree__prog_util__Max_9);

#line 763 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 762 "prog_util.m"
      {
#line 762 "prog_util.m"
        *parse_tree__prog_util__Vars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "prog_util.m"
        *parse_tree__prog_util__STATE_VARIABLE_VarSet_18 = parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17;
#line 762 "prog_util.m"
      }
#line 763 "prog_util.m"
    else
#line 764 "prog_util.m"
      {
#line 764 "prog_util.m"
        MR_Integer parse_tree__prog_util__N1_12 = (parse_tree__prog_util__N_8 + (MR_Integer) 1);
#line 764 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_13;
#line 764 "prog_util.m"
        MR_String parse_tree__prog_util__Num_14;
#line 764 "prog_util.m"
        MR_String parse_tree__prog_util__VarName_15;
#line 764 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars1_16;
#line 764 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20;
#line 764 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21;

#line 765 "prog_util.m"
        {
#line 765 "prog_util.m"
          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeInfo_for_T_23, &parse_tree__prog_util__Var_13, parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17, &parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20);
        }
#line 766 "prog_util.m"
        {
#line 766 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__N1_12, &parse_tree__prog_util__Num_14);
        }
#line 767 "prog_util.m"
        {
#line 767 "prog_util.m"
          mercury__string__append_3_p_2(parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Num_14, &parse_tree__prog_util__VarName_15);
        }
#line 768 "prog_util.m"
        {
#line 768 "prog_util.m"
          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__Var_13, parse_tree__prog_util__VarName_15, parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20, &parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21);
        }
#line 770 "prog_util.m"
        {
#line 770 "prog_util.m"
          parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__BaseName_7, parse_tree__prog_util__N1_12, parse_tree__prog_util__Max_9, &parse_tree__prog_util__Vars1_16, parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21, parse_tree__prog_util__STATE_VARIABLE_VarSet_18);
        }
#line 769 "prog_util.m"
        {
#line 769 "prog_util.m"
          MR_Word base;
#line 769 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_util.m"
          *parse_tree__prog_util__Vars_10 = base;
#line 769 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
#line 769 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars1_16));
#line 769 "prog_util.m"
        }
#line 764 "prog_util.m"
      }
#line 763 "prog_util.m"
  }
#line 757 "prog_util.m"
}

#line 531 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 531 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 531 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 531 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 531 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8)
#line 531 "prog_util.m"
{
#line 534 "prog_util.m"
  {
#line 534 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 534 "prog_util.m"
    MR_Word parse_tree__prog_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 0)));
#line 534 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 1)));
#line 534 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_11;
#line 534 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_12;

#line 536 "prog_util.m"
    {
#line 536 "prog_util.m"
      mercury__term__rename_var_in_term_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Term0_9, &parse_tree__prog_util__Term_11);
    }
#line 537 "prog_util.m"
    {
#line 537 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_10, &parse_tree__prog_util__Goal_12);
    }
#line 538 "prog_util.m"
    {
#line 538 "prog_util.m"
      MR_Word base;
#line 538 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "prog_util.m"
      *parse_tree__prog_util__Catch_8 = base;
#line 538 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Term_11));
#line 538 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_12));
#line 538 "prog_util.m"
    }
#line 534 "prog_util.m"
  }
#line 531 "prog_util.m"
}

#line 518 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 518 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 518 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 518 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 518 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8)
#line 518 "prog_util.m"
{
#line 523 "prog_util.m"
  {
#line 523 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 523 "prog_util.m"
    if ((parse_tree__prog_util__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "prog_util.m"
      *parse_tree__prog_util__MaybeVar_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "prog_util.m"
    else
#line 523 "prog_util.m"
      {
#line 523 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVar0_7, (MR_Integer) 0)));
#line 523 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_10;

#line 512 "prog_util.m"
        {
#line 512 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 514 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 513 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
#line 514 "prog_util.m"
        else
#line 515 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
#line 525 "prog_util.m"
        {
#line 525 "prog_util.m"
          MR_Word base;
#line 525 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_util.m"
          *parse_tree__prog_util__MaybeVar_8 = base;
#line 525 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
#line 525 "prog_util.m"
        }
#line 523 "prog_util.m"
      }
#line 523 "prog_util.m"
  }
#line 518 "prog_util.m"
}

#line 508 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 508 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8)
#line 508 "prog_util.m"
{
#line 514 "prog_util.m"
  {
#line 514 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 512 "prog_util.m"
    {
#line 512 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_7)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 514 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 513 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__NewVar_6;
#line 514 "prog_util.m"
    else
#line 515 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__Var0_7;
#line 514 "prog_util.m"
  }
#line 508 "prog_util.m"
}

#line 500 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 500 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 500 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 500 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 500 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 500 "prog_util.m"
{
#line 503 "prog_util.m"
  {
#line 503 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 503 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "prog_util.m"
    else
#line 504 "prog_util.m"
      {
#line 504 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 504 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 504 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_11;
#line 504 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars_12;

#line 512 "prog_util.m"
        {
#line 512 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_1)));
        }
#line 514 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 513 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__NewVar_2;
#line 514 "prog_util.m"
        else
#line 515 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__Var0_9;
#line 506 "prog_util.m"
        {
#line 506 "prog_util.m"
          parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_1, parse_tree__prog_util__NewVar_2, parse_tree__prog_util__Vars0_10, &parse_tree__prog_util__Vars_12);
        }
#line 504 "prog_util.m"
        {
#line 504 "prog_util.m"
          MR_Word base;
#line 504 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 504 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_11));
#line 504 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_12));
#line 504 "prog_util.m"
        }
#line 504 "prog_util.m"
      }
#line 503 "prog_util.m"
  }
#line 500 "prog_util.m"
}

#line 492 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 492 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 492 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 492 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 492 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8)
#line 492 "prog_util.m"
{
#line 495 "prog_util.m"
  {
#line 495 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 495 "prog_util.m"
    MR_String parse_tree__prog_util__MutableName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 0)));
#line 495 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 1)));
#line 495 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar_11;

#line 512 "prog_util.m"
    {
#line 512 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__StateVar0_10)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 514 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 513 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__NewVar_6;
#line 514 "prog_util.m"
    else
#line 515 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__StateVar0_10;
#line 498 "prog_util.m"
    {
#line 498 "prog_util.m"
      MR_Word base;
#line 498 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 498 "prog_util.m"
      *parse_tree__prog_util__TMV_8 = base;
#line 498 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__MutableName_9));
#line 498 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__StateVar_11));
#line 498 "prog_util.m"
    }
#line 495 "prog_util.m"
  }
#line 492 "prog_util.m"
}

#line 477 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 477 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8)
#line 477 "prog_util.m"
{
#line 482 "prog_util.m"
  {
#line 482 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 482 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Comp0_7)) == (MR_mktag((MR_Integer) 0))))
#line 482 "prog_util.m"
      {
#line 482 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 482 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar_10;

#line 512 "prog_util.m"
        {
#line 512 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__SVar0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 514 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 513 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__NewVar_6;
#line 514 "prog_util.m"
        else
#line 515 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__SVar0_9;
#line 484 "prog_util.m"
        {
#line 484 "prog_util.m"
          MR_Word base;
#line 484 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 484 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 484 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__SVar_10));
#line 484 "prog_util.m"
        }
#line 482 "prog_util.m"
      }
#line 482 "prog_util.m"
    else
#line 486 "prog_util.m"
      {
#line 486 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 486 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 1)));
#line 486 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar_13;
#line 486 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar_14;

#line 512 "prog_util.m"
        {
#line 512 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__IVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 514 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 513 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__NewVar_6;
#line 514 "prog_util.m"
        else
#line 515 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__IVar0_11;
#line 512 "prog_util.m"
        {
#line 512 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__OVar0_12)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 514 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 513 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__NewVar_6;
#line 514 "prog_util.m"
        else
#line 515 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__OVar0_12;
#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          MR_Word base;
#line 489 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 489 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__IVar_13));
#line 489 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__OVar_14));
#line 489 "prog_util.m"
        }
#line 486 "prog_util.m"
      }
#line 482 "prog_util.m"
  }
#line 477 "prog_util.m"
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
#line 857 "prog_util.m"
  {
#line 857 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 857 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 857 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "prog_util.m"
      {
#line 857 "prog_util.m"
        parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_util.m"
        MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 857 "prog_util.m"
        MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 857 "prog_util.m"
      }
#line 857 "prog_util.m"
    else
#line 858 "prog_util.m"
      {
#line 858 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 858 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 859 "prog_util.m"
        {
#line 859 "prog_util.m"
          return parse_tree__prog_util__HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal_6, parse_tree__prog_util__Goals_7);
        }
#line 858 "prog_util.m"
      }
#line 857 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 857 "prog_util.m"
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
#line 831 "prog_util.m"
  {
#line 831 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 831 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 831 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 834 "prog_util.m"
      {
#line 834 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 834 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 834 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 836 "prog_util.m"
        {
#line 836 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 836 "prog_util.m"
        }
#line 836 "prog_util.m"
        {
#line 836 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 836 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 836 "prog_util.m"
        }
#line 835 "prog_util.m"
        {
#line 835 "prog_util.m"
          return parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_9, parse_tree__prog_util__V_13_13, parse_tree__prog_util__Context_3);
        }
#line 834 "prog_util.m"
      }
#line 831 "prog_util.m"
    else
#line 831 "prog_util.m"
      {
#line 831 "prog_util.m"
        MR_String parse_tree__prog_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 831 "prog_util.m"
        MR_Word parse_tree__prog_util__V_8_8;

#line 832 "prog_util.m"
        {
#line 832 "prog_util.m"
          parse_tree__prog_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_5));
#line 832 "prog_util.m"
        }
#line 832 "prog_util.m"
        {
#line 832 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 832 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 832 "prog_util.m"
        }
#line 831 "prog_util.m"
      }
#line 831 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 831 "prog_util.m"
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
#line 808 "prog_util.m"
  while (MR_TRUE)
#line 808 "prog_util.m"
    {
#line 808 "prog_util.m"
      /* tailcall optimized into a loop */
#line 808 "prog_util.m"
      {
#line 808 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;

#line 808 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "prog_util.m"
          {
#line 808 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 808 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 808 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarSet_4 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 808 "prog_util.m"
          }
#line 808 "prog_util.m"
        else
#line 809 "prog_util.m"
          {
#line 809 "prog_util.m"
            MR_Word parse_tree__prog_util__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 809 "prog_util.m"
            MR_Word parse_tree__prog_util__TVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 809 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;
#line 809 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 809 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 810 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 810 "prog_util.m"
            {
#line 810 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__map__contains_2_p_0(parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (parse_tree__prog_util__TVar_19)));
            }
#line 812 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 811 "prog_util.m"
              {
#line 811 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 811 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 811 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 811 "prog_util.m"
              }
#line 812 "prog_util.m"
            else
#line 822 "prog_util.m"
              {
#line 822 "prog_util.m"
                MR_String parse_tree__prog_util__TVarName_25;

#line 813 "prog_util.m"
                {
#line 813 "prog_util.m"
                  parse_tree__prog_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_2, parse_tree__prog_util__TVar_19, &parse_tree__prog_util__TVarName_25);
                }
#line 822 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 816 "prog_util.m"
                  {
#line 816 "prog_util.m"
                    MR_Word parse_tree__prog_util__TVarSetVar_26;
#line 814 "prog_util.m"
                    MR_Box parse_tree__prog_util__conv0_TVarSetVar_26;

#line 814 "prog_util.m"
                    {
#line 814 "prog_util.m"
                      parse_tree__prog_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_util_scalar_common_1[0], parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (parse_tree__prog_util__TVarName_25)), &parse_tree__prog_util__conv0_TVarSetVar_26);
                    }
#line 814 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 814 "prog_util.m"
                      {
#line 814 "prog_util.m"
                        parse_tree__prog_util__TVarSetVar_26 = ((MR_Word) parse_tree__prog_util__conv0_TVarSetVar_26);
#line 814 "prog_util.m"
                        parse_tree__prog_util__succeeded = MR_TRUE;
#line 814 "prog_util.m"
                      }
#line 816 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 815 "prog_util.m"
                      {
#line 815 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_49_49 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 815 "prog_util.m"
                        {
#line 815 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_49_49, parse_tree__prog_util__TypeInfo_49_49, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__TVarSetVar_26)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 815 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 815 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 815 "prog_util.m"
                      }
#line 816 "prog_util.m"
                    else
#line 817 "prog_util.m"
                      {
#line 817 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 817 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_52_52;
#line 817 "prog_util.m"
                        MR_Word parse_tree__prog_util__NewTVar_27;
#line 817 "prog_util.m"
                        MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35;

#line 817 "prog_util.m"
                        {
#line 817 "prog_util.m"
                          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, &parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35);
                        }
#line 818 "prog_util.m"
                        {
#line 818 "prog_util.m"
                          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__TVarName_25, parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                        }
#line 3582 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 819 "prog_util.m"
                        {
#line 819 "prog_util.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVarName_25)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, &parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37);
                        }
#line 820 "prog_util.m"
                        {
#line 820 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_52_52, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 817 "prog_util.m"
                      }
#line 816 "prog_util.m"
                  }
#line 822 "prog_util.m"
                else
#line 823 "prog_util.m"
                  {
#line 823 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_54_54;
#line 823 "prog_util.m"
                    MR_Word parse_tree__prog_util__NewTVar_44;

#line 823 "prog_util.m"
                    {
#line 823 "prog_util.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__prog_util__NewTVar_44, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                    }
#line 3612 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_54_54 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 824 "prog_util.m"
                    {
#line 824 "prog_util.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_54_54, parse_tree__prog_util__TypeInfo_54_54, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_44)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                    }
#line 823 "prog_util.m"
                    parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 823 "prog_util.m"
                  }
#line 822 "prog_util.m"
              }
#line 827 "prog_util.m"
            /* direct tailcall eliminated */
#line 827 "prog_util.m"
            {
#line 827 "prog_util.m"
              MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__TVars_20;
#line 827 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 827 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 827 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;

#line 827 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7;
#line 827 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5;
#line 827 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3;
#line 827 "prog_util.m"
              parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 827 "prog_util.m"
            }
#line 827 "prog_util.m"
            continue;
#line 809 "prog_util.m"
          }
#line 808 "prog_util.m"
      }
#line 808 "prog_util.m"
      break;
#line 808 "prog_util.m"
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
#line 803 "prog_util.m"
  {
#line 803 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RuleTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 803 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadTerm0_9;
#line 803 "prog_util.m"
    MR_Word parse_tree__prog_util__GoalTerm0_10;
#line 800 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 800 "prog_util.m"
    MR_String parse_tree__prog_util__V_13_13;
#line 800 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 800 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 800 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;
#line 800 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 800 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 800 "prog_util.m"
      {
#line 800 "prog_util.m"
        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 0)));
#line 800 "prog_util.m"
        parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 1)));
#line 800 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 2)));
#line 800 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 800 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 800 "prog_util.m"
          {
#line 800 "prog_util.m"
            parse_tree__prog_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, (MR_Integer) 0)));
#line 800 "prog_util.m"
            parse_tree__prog_util__succeeded = (strcmp(parse_tree__prog_util__V_13_13, (MR_String) ":-") == 0);
#line 800 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 800 "prog_util.m"
              {
#line 800 "prog_util.m"
                parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 800 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 800 "prog_util.m"
                  {
#line 800 "prog_util.m"
                    parse_tree__prog_util__HeadTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 0)));
#line 800 "prog_util.m"
                    parse_tree__prog_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 1)));
#line 800 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 800 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 800 "prog_util.m"
                      {
#line 800 "prog_util.m"
                        parse_tree__prog_util__GoalTerm0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 0)));
#line 800 "prog_util.m"
                        parse_tree__prog_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 1)));
#line 800 "prog_util.m"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "prog_util.m"
                      }
#line 800 "prog_util.m"
                  }
#line 800 "prog_util.m"
              }
#line 800 "prog_util.m"
          }
#line 800 "prog_util.m"
      }
#line 803 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 801 "prog_util.m"
      {
#line 801 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__HeadTerm0_9;
#line 802 "prog_util.m"
        *parse_tree__prog_util__GoalTerm_8 = parse_tree__prog_util__GoalTerm0_10;
#line 801 "prog_util.m"
      }
#line 803 "prog_util.m"
    else
#line 804 "prog_util.m"
      {
#line 804 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__RuleTerm_6;
#line 805 "prog_util.m"
        {
#line 805 "prog_util.m"
          MR_Word base;
#line 805 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 805 "prog_util.m"
          *parse_tree__prog_util__GoalTerm_8 = base;
#line 805 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[4]));
#line 805 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_5));
#line 805 "prog_util.m"
        }
#line 804 "prog_util.m"
      }
#line 803 "prog_util.m"
  }
#line 183 "prog_util.m"
}

#line 178 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_state_args_det_4_p_0(
#line 178 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_14,
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
#line 793 "prog_util.m"
  {
#line 793 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 793 "prog_util.m"
    MR_Word parse_tree__prog_util__Args1_9;
#line 793 "prog_util.m"
    MR_Box parse_tree__prog_util__State0A_10;
#line 793 "prog_util.m"
    MR_Box parse_tree__prog_util__StateA_11;
#line 783 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_19;
#line 783 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_20;
#line 783 "prog_util.m"
    MR_Word parse_tree__prog_util__V_21_21;

#line 784 "prog_util.m"
    {
#line 784 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_19);
    }
#line 785 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_19)) == (MR_mktag((MR_Integer) 1)));
#line 785 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 785 "prog_util.m"
      {
#line 785 "prog_util.m"
        parse_tree__prog_util__StateA_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 0));
#line 785 "prog_util.m"
        parse_tree__prog_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 1)));
#line 785 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 785 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 785 "prog_util.m"
          {
#line 785 "prog_util.m"
            parse_tree__prog_util__State0A_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 0));
#line 785 "prog_util.m"
            parse_tree__prog_util__RevArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 1)));
#line 786 "prog_util.m"
            {
#line 786 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__RevArgs_20, &parse_tree__prog_util__Args1_9);
            }
#line 786 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 785 "prog_util.m"
          }
#line 785 "prog_util.m"
      }
#line 793 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 790 "prog_util.m"
      {
#line 790 "prog_util.m"
        *parse_tree__prog_util__Args_6 = parse_tree__prog_util__Args1_9;
#line 791 "prog_util.m"
        *parse_tree__prog_util__State0_7 = parse_tree__prog_util__State0A_10;
#line 792 "prog_util.m"
        *parse_tree__prog_util__State_8 = parse_tree__prog_util__StateA_11;
#line 790 "prog_util.m"
      }
#line 793 "prog_util.m"
    else
#line 794 "prog_util.m"
      {
#line 794 "prog_util.m"
        {
#line 794 "prog_util.m"
          mercury__require__unexpected_2_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4");
#line 794 "prog_util.m"
          return;
        }
#line 794 "prog_util.m"
      }
#line 793 "prog_util.m"
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
#line 783 "prog_util.m"
  {
#line 783 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 783 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_9;
#line 783 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_10;
#line 783 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 784 "prog_util.m"
    {
#line 784 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_9);
    }
#line 785 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_9)) == (MR_mktag((MR_Integer) 1)));
#line 785 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 785 "prog_util.m"
      {
#line 785 "prog_util.m"
        *parse_tree__prog_util__State_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 0));
#line 785 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 1)));
#line 785 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 785 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 785 "prog_util.m"
          {
#line 785 "prog_util.m"
            *parse_tree__prog_util__State0_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 0));
#line 785 "prog_util.m"
            parse_tree__prog_util__RevArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 1)));
#line 786 "prog_util.m"
            {
#line 786 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__RevArgs_10, parse_tree__prog_util__Args_6);
            }
#line 786 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 785 "prog_util.m"
          }
#line 785 "prog_util.m"
      }
#line 783 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 783 "prog_util.m"
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
#line 773 "prog_util.m"
  {
#line 773 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 773 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumPredArgs_7;
#line 773 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumFuncArgs_8;
#line 779 "prog_util.m"
    MR_Word parse_tree__prog_util__FuncArgs0_9;
#line 779 "prog_util.m"
    MR_Box parse_tree__prog_util__FuncReturn0_10;
#line 776 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 776 "prog_util.m"
    MR_Word parse_tree__prog_util__V_18_18;

#line 774 "prog_util.m"
    {
#line 774 "prog_util.m"
      mercury__list__length_2_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__NumPredArgs_7);
    }
#line 775 "prog_util.m"
    parse_tree__prog_util__NumFuncArgs_8 = (parse_tree__prog_util__NumPredArgs_7 - (MR_Integer) 1);
#line 776 "prog_util.m"
    {
#line 776 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__list__split_list_4_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__NumFuncArgs_8, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__FuncArgs0_9, &parse_tree__prog_util__V_12_12);
    }
#line 776 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 776 "prog_util.m"
      {
#line 776 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 776 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 776 "prog_util.m"
          {
#line 776 "prog_util.m"
            parse_tree__prog_util__FuncReturn0_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 0));
#line 776 "prog_util.m"
            parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 1)));
#line 776 "prog_util.m"
            {
#line 776 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_util__TypeInfo_for_T_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__V_18_18);
            }
#line 776 "prog_util.m"
          }
#line 776 "prog_util.m"
      }
#line 779 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 777 "prog_util.m"
      {
#line 777 "prog_util.m"
        *parse_tree__prog_util__FuncArgs_5 = parse_tree__prog_util__FuncArgs0_9;
#line 778 "prog_util.m"
        *parse_tree__prog_util__FuncReturn_6 = parse_tree__prog_util__FuncReturn0_10;
#line 777 "prog_util.m"
      }
#line 779 "prog_util.m"
    else
#line 780 "prog_util.m"
      {
#line 780 "prog_util.m"
        {
#line 780 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
#line 780 "prog_util.m"
          return;
        }
#line 780 "prog_util.m"
      }
#line 773 "prog_util.m"
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
#line 754 "prog_util.m"
  {
#line 754 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 755 "prog_util.m"
    {
#line 755 "prog_util.m"
      parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__BaseName_6, (MR_Integer) 0, parse_tree__prog_util__N_7, parse_tree__prog_util__Vars_8, parse_tree__prog_util__VarSet0_9, parse_tree__prog_util__VarSet_10);
#line 755 "prog_util.m"
      return;
    }
#line 754 "prog_util.m"
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
#line 748 "prog_util.m"
  {
#line 748 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__SymName0_3)) == (MR_mktag((MR_Integer) 1)));
#line 748 "prog_util.m"
    MR_String parse_tree__prog_util__Name_6;
#line 744 "prog_util.m"
    MR_Word parse_tree__prog_util__Module_5;
#line 744 "prog_util.m"
    MR_Word parse_tree__prog_util__V_7_7;

#line 744 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 744 "prog_util.m"
      {
#line 744 "prog_util.m"
        parse_tree__prog_util__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 0)));
#line 744 "prog_util.m"
        parse_tree__prog_util__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 1)));
#line 745 "prog_util.m"
        {
#line 745 "prog_util.m"
          parse_tree__prog_util__V_7_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 745 "prog_util.m"
        {
#line 745 "prog_util.m"
          parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_5, parse_tree__prog_util__V_7_7);
        }
#line 744 "prog_util.m"
      }
#line 748 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 747 "prog_util.m"
      {
#line 747 "prog_util.m"
        MR_Word base;
#line 747 "prog_util.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "prog_util.m"
        *parse_tree__prog_util__SymName_4 = base;
#line 747 "prog_util.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Name_6));
#line 747 "prog_util.m"
      }
#line 748 "prog_util.m"
    else
#line 749 "prog_util.m"
      *parse_tree__prog_util__SymName_4 = parse_tree__prog_util__SymName0_3;
#line 748 "prog_util.m"
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
#line 738 "prog_util.m"
  {
#line 738 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__ConsId0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 738 "prog_util.m"
    MR_Word parse_tree__prog_util__Name0_5;
#line 738 "prog_util.m"
    MR_Integer parse_tree__prog_util__Arity_6;
#line 738 "prog_util.m"
    MR_Word parse_tree__prog_util__TypeCtor_7;

#line 735 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 735 "prog_util.m"
      {
#line 735 "prog_util.m"
        parse_tree__prog_util__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 1)));
#line 735 "prog_util.m"
        parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 2)));
#line 735 "prog_util.m"
        parse_tree__prog_util__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 3)));
#line 736 "prog_util.m"
        {
#line 736 "prog_util.m"
          MR_Word parse_tree__prog_util__Name_8;
#line 748 "prog_util.m"
          MR_String parse_tree__prog_util__Name_12;
#line 744 "prog_util.m"
          MR_Word parse_tree__prog_util__Module_11;
#line 744 "prog_util.m"
          MR_Word parse_tree__prog_util__V_13_13;

#line 744 "prog_util.m"
          parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 744 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 744 "prog_util.m"
            {
#line 744 "prog_util.m"
              parse_tree__prog_util__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 0)));
#line 744 "prog_util.m"
              parse_tree__prog_util__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 1)));
#line 745 "prog_util.m"
              {
#line 745 "prog_util.m"
                parse_tree__prog_util__V_13_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 745 "prog_util.m"
              {
#line 745 "prog_util.m"
                parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_11, parse_tree__prog_util__V_13_13);
              }
#line 744 "prog_util.m"
            }
#line 748 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 747 "prog_util.m"
            {
#line 747 "prog_util.m"
              parse_tree__prog_util__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "prog_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__Name_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_12));
#line 747 "prog_util.m"
            }
#line 748 "prog_util.m"
          else
#line 749 "prog_util.m"
            parse_tree__prog_util__Name_8 = parse_tree__prog_util__Name0_5;
#line 737 "prog_util.m"
          {
#line 737 "prog_util.m"
            MR_Word base;
#line 737 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 737 "prog_util.m"
            *parse_tree__prog_util__ConsId_4 = base;
#line 737 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_8));
#line 737 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 737 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TypeCtor_7));
#line 737 "prog_util.m"
          }
#line 736 "prog_util.m"
        }
#line 735 "prog_util.m"
      }
#line 735 "prog_util.m"
    else
#line 739 "prog_util.m"
      *parse_tree__prog_util__ConsId_4 = parse_tree__prog_util__ConsId0_3;
#line 738 "prog_util.m"
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
#line 718 "prog_util.m"
  {
#line 718 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 718 "prog_util.m"
#line 718 "prog_util.m"
    switch (parse_tree__prog_util__Base_4) {
#line 718 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 718 "prog_util.m"
      case (MR_Integer) 2:
#line 717 "prog_util.m"
        {
#line 717 "prog_util.m"
          return parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Int_6);
        }
#line 718 "prog_util.m"
        break;
#line 718 "prog_util.m"
      case (MR_Integer) 3:
#line 718 "prog_util.m"
      case (MR_Integer) 0:
#line 718 "prog_util.m"
      case (MR_Integer) 1:
#line 727 "prog_util.m"
        {
#line 723 "prog_util.m"
          MR_Word parse_tree__prog_util__V_8_8;
#line 723 "prog_util.m"
          MR_Integer parse_tree__prog_util__V_9_9;

#line 723 "prog_util.m"
          {
#line 723 "prog_util.m"
            parse_tree__prog_util__V_9_9 = mercury__int__max_int_0_f_0();
          }
#line 723 "prog_util.m"
          {
#line 723 "prog_util.m"
            parse_tree__prog_util__V_8_8 = mercury__integer__integer_1_f_0(parse_tree__prog_util__V_9_9);
          }
#line 723 "prog_util.m"
          {
#line 723 "prog_util.m"
            parse_tree__prog_util__succeeded = mercury__integer__f_greater_than_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__V_8_8);
          }
#line 727 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 724 "prog_util.m"
            {
#line 724 "prog_util.m"
              MR_Word parse_tree__prog_util__NegInteger_7;
#line 724 "prog_util.m"
              MR_Word parse_tree__prog_util__V_10_10;
#line 724 "prog_util.m"
              MR_Word parse_tree__prog_util__V_11_11;
#line 724 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_12_12;
#line 724 "prog_util.m"
              MR_Word parse_tree__prog_util__V_13_13;
#line 724 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_14_14;
#line 724 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_15_15;

#line 724 "prog_util.m"
              {
#line 724 "prog_util.m"
                parse_tree__prog_util__V_12_12 = mercury__int__min_int_0_f_0();
              }
#line 724 "prog_util.m"
              {
#line 724 "prog_util.m"
                parse_tree__prog_util__V_11_11 = mercury__integer__integer_1_f_0(parse_tree__prog_util__V_12_12);
              }
#line 724 "prog_util.m"
              {
#line 724 "prog_util.m"
                parse_tree__prog_util__V_10_10 = mercury__integer__f_plus_2_f_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__V_11_11);
              }
#line 724 "prog_util.m"
              {
#line 724 "prog_util.m"
                parse_tree__prog_util__V_14_14 = mercury__int__min_int_0_f_0();
              }
#line 724 "prog_util.m"
              {
#line 724 "prog_util.m"
                parse_tree__prog_util__V_13_13 = mercury__integer__integer_1_f_0(parse_tree__prog_util__V_14_14);
              }
#line 724 "prog_util.m"
              {
#line 724 "prog_util.m"
                parse_tree__prog_util__NegInteger_7 = mercury__integer__f_plus_2_f_0(parse_tree__prog_util__V_10_10, parse_tree__prog_util__V_13_13);
              }
#line 725 "prog_util.m"
              {
#line 725 "prog_util.m"
                parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__NegInteger_7, parse_tree__prog_util__Int_6);
              }
#line 724 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 724 "prog_util.m"
                {
#line 726 "prog_util.m"
                  parse_tree__prog_util__V_15_15 = (MR_Integer) 0;
#line 726 "prog_util.m"
                  parse_tree__prog_util__succeeded = (*parse_tree__prog_util__Int_6 < parse_tree__prog_util__V_15_15);
#line 724 "prog_util.m"
                }
#line 724 "prog_util.m"
            }
#line 727 "prog_util.m"
          else
#line 728 "prog_util.m"
            {
#line 728 "prog_util.m"
              return parse_tree__prog_util__succeeded = mercury__integer__to_int_2_p_0(parse_tree__prog_util__Integer_5, parse_tree__prog_util__Int_6);
            }
#line 727 "prog_util.m"
        }
#line 718 "prog_util.m"
        break;
#line 718 "prog_util.m"
    }
#line 718 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 718 "prog_util.m"
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
#line 709 "prog_util.m"
  {
#line 709 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 709 "prog_util.m"
    MR_Word parse_tree__prog_util__ConsIdPrime_7;

#line 707 "prog_util.m"
    {
#line 707 "prog_util.m"
      parse_tree__prog_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_util__Functor_4, parse_tree__prog_util__Arity_5, &parse_tree__prog_util__ConsIdPrime_7);
    }
#line 709 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 708 "prog_util.m"
      *parse_tree__prog_util__ConsId_6 = parse_tree__prog_util__ConsIdPrime_7;
#line 709 "prog_util.m"
    else
#line 710 "prog_util.m"
      {
#line 710 "prog_util.m"
        {
#line 710 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.det_make_functor_cons_id\'/3", (MR_String) "make_functor_cons_id failed");
#line 710 "prog_util.m"
          return;
        }
#line 710 "prog_util.m"
      }
#line 709 "prog_util.m"
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
#line 688 "prog_util.m"
  {
#line 688 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 688 "prog_util.m"
#line 688 "prog_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_util__Functor_4)) {
#line 688 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 688 "prog_util.m"
      case (MR_Integer) 0:
#line 686 "prog_util.m"
        {
#line 686 "prog_util.m"
          MR_String parse_tree__prog_util__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));
#line 686 "prog_util.m"
          MR_Word parse_tree__prog_util__V_13_13;
#line 686 "prog_util.m"
          MR_Word parse_tree__prog_util__V_14_14;

#line 687 "prog_util.m"
          {
#line 687 "prog_util.m"
            parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 687 "prog_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__Name_7));
#line 687 "prog_util.m"
          }
#line 687 "prog_util.m"
          {
#line 687 "prog_util.m"
            parse_tree__prog_util__V_14_14 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 687 "prog_util.m"
          {
#line 687 "prog_util.m"
            MR_Word base;
#line 687 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 687 "prog_util.m"
            *parse_tree__prog_util__ConsId_6 = base;
#line 687 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 687 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 687 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_5));
#line 687 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 687 "prog_util.m"
          }
#line 686 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 686 "prog_util.m"
        }
#line 688 "prog_util.m"
        break;
#line 688 "prog_util.m"
      case (MR_Integer) 1:
#line 689 "prog_util.m"
        {
#line 689 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));

#line 690 "prog_util.m"
          {
#line 690 "prog_util.m"
            MR_Word base;
#line 690 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "prog_util.m"
            *parse_tree__prog_util__ConsId_6 = base;
#line 690 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 690 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Int_8));
#line 690 "prog_util.m"
          }
#line 689 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 689 "prog_util.m"
        }
#line 688 "prog_util.m"
        break;
#line 688 "prog_util.m"
      case (MR_Integer) 2:
#line 692 "prog_util.m"
        {
#line 692 "prog_util.m"
          MR_Word parse_tree__prog_util__Base_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Functor_4, (MR_Integer) 0)));
#line 692 "prog_util.m"
          MR_Word parse_tree__prog_util__Integer_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));
#line 692 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_15;

#line 693 "prog_util.m"
          {
#line 693 "prog_util.m"
            parse_tree__prog_util__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(parse_tree__prog_util__Base_9, parse_tree__prog_util__Integer_10, &parse_tree__prog_util__Int_15);
          }
#line 692 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 692 "prog_util.m"
            {
#line 694 "prog_util.m"
              {
#line 694 "prog_util.m"
                MR_Word base;
#line 694 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 694 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 694 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Int_15));
#line 694 "prog_util.m"
              }
#line 694 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 692 "prog_util.m"
            }
#line 692 "prog_util.m"
        }
#line 688 "prog_util.m"
        break;
#line 688 "prog_util.m"
      case (MR_Integer) 3:
#line 688 "prog_util.m"
#line 688 "prog_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 0)))) {
#line 688 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 688 "prog_util.m"
          case (MR_Integer) 0:
#line 696 "prog_util.m"
            {
#line 696 "prog_util.m"
              MR_String parse_tree__prog_util__String_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

#line 697 "prog_util.m"
              {
#line 697 "prog_util.m"
                MR_Word base;
#line 697 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 697 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 697 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__String_11));
#line 697 "prog_util.m"
              }
#line 696 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 696 "prog_util.m"
            }
#line 688 "prog_util.m"
            break;
#line 688 "prog_util.m"
          case (MR_Integer) 1:
#line 699 "prog_util.m"
            {
#line 699 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

#line 700 "prog_util.m"
              {
#line 700 "prog_util.m"
                MR_Word base;
#line 700 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 700 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 700 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(parse_tree__prog_util__Float_12);
#line 700 "prog_util.m"
              }
#line 699 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 699 "prog_util.m"
            }
#line 688 "prog_util.m"
            break;
#line 688 "prog_util.m"
          case (MR_Integer) 2:
#line 702 "prog_util.m"
            {
#line 702 "prog_util.m"
              MR_String parse_tree__prog_util__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Functor_4, (MR_Integer) 1)));

#line 703 "prog_util.m"
              {
#line 703 "prog_util.m"
                MR_Word base;
#line 703 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "prog_util.m"
                *parse_tree__prog_util__ConsId_6 = base;
#line 703 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 703 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_16));
#line 703 "prog_util.m"
              }
#line 702 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 702 "prog_util.m"
            }
#line 688 "prog_util.m"
            break;
#line 688 "prog_util.m"
        }
#line 688 "prog_util.m"
        break;
#line 688 "prog_util.m"
    }
#line 688 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 688 "prog_util.m"
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
#line 663 "prog_util.m"
  while (MR_TRUE)
#line 663 "prog_util.m"
    {
#line 663 "prog_util.m"
      /* tailcall optimized into a loop */
#line 663 "prog_util.m"
      {
#line 663 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 663 "prog_util.m"
        MR_Word parse_tree__prog_util__HeadVar__2_2;

#line 663 "prog_util.m"
#line 663 "prog_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
#line 663 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 663 "prog_util.m"
          case (MR_Integer) 0:
#line 674 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
            break;
#line 663 "prog_util.m"
          case (MR_Integer) 1:
#line 673 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
            break;
#line 663 "prog_util.m"
          case (MR_Integer) 2:
#line 679 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
            break;
#line 663 "prog_util.m"
          case (MR_Integer) 3:
#line 663 "prog_util.m"
#line 663 "prog_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 663 "prog_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 663 "prog_util.m"
              case (MR_Integer) 0:
#line 681 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 1:
#line 680 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 2:
#line 663 "prog_util.m"
                {
#line 663 "prog_util.m"
                  MR_Integer parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 663 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 663 "prog_util.m"
                  {
#line 663 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_4));
#line 663 "prog_util.m"
                  }
#line 663 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 3:
#line 664 "prog_util.m"
                {
#line 664 "prog_util.m"
                  MR_Integer parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 664 "prog_util.m"
                  {
#line 664 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 664 "prog_util.m"
                  }
#line 664 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 4:
#line 670 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 5:
#line 665 "prog_util.m"
                {
#line 665 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 665 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 6:
#line 666 "prog_util.m"
                {
#line 666 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 666 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 7:
#line 667 "prog_util.m"
                {
#line 667 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 667 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 8:
#line 668 "prog_util.m"
                {
#line 668 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 668 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 9:
#line 669 "prog_util.m"
                {
#line 669 "prog_util.m"
                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 669 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 10:
#line 671 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 11:
#line 672 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 12:
#line 675 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 13:
#line 676 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
              case (MR_Integer) 14:
#line 677 "prog_util.m"
                {
#line 677 "prog_util.m"
                  MR_Word parse_tree__prog_util__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 677 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 678 "prog_util.m"
                  /* direct tailcall eliminated */
#line 678 "prog_util.m"
                  {
#line 678 "prog_util.m"
                    MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__ConsId_30;

#line 678 "prog_util.m"
                    parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 678 "prog_util.m"
                  }
#line 678 "prog_util.m"
                  continue;
#line 677 "prog_util.m"
                }
#line 663 "prog_util.m"
                break;
#line 663 "prog_util.m"
            }
#line 663 "prog_util.m"
            break;
#line 663 "prog_util.m"
        }
#line 663 "prog_util.m"
        return parse_tree__prog_util__HeadVar__2_2;
#line 663 "prog_util.m"
      }
#line 663 "prog_util.m"
      break;
#line 663 "prog_util.m"
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
#line 634 "prog_util.m"
  while (MR_TRUE)
#line 634 "prog_util.m"
    {
#line 634 "prog_util.m"
      /* tailcall optimized into a loop */
#line 634 "prog_util.m"
      {
#line 634 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 634 "prog_util.m"
        MR_Integer parse_tree__prog_util__Arity_4;

#line 634 "prog_util.m"
#line 634 "prog_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) {
#line 634 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 634 "prog_util.m"
          case (MR_Integer) 0:
#line 659 "prog_util.m"
            {
#line 660 "prog_util.m"
              {
#line 660 "prog_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
#line 659 "prog_util.m"
            }
#line 634 "prog_util.m"
            break;
#line 634 "prog_util.m"
          case (MR_Integer) 1:
#line 659 "prog_util.m"
            {
#line 660 "prog_util.m"
              {
#line 660 "prog_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
#line 659 "prog_util.m"
            }
#line 634 "prog_util.m"
            break;
#line 634 "prog_util.m"
          case (MR_Integer) 2:
#line 659 "prog_util.m"
            {
#line 660 "prog_util.m"
              {
#line 660 "prog_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
              }
#line 659 "prog_util.m"
            }
#line 634 "prog_util.m"
            break;
#line 634 "prog_util.m"
          case (MR_Integer) 3:
#line 634 "prog_util.m"
#line 634 "prog_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) {
#line 634 "prog_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 634 "prog_util.m"
              case (MR_Integer) 0:
#line 634 "prog_util.m"
              case (MR_Integer) 1:
#line 634 "prog_util.m"
              case (MR_Integer) 4:
#line 634 "prog_util.m"
              case (MR_Integer) 10:
#line 634 "prog_util.m"
              case (MR_Integer) 11:
#line 634 "prog_util.m"
              case (MR_Integer) 12:
#line 634 "prog_util.m"
              case (MR_Integer) 13:
#line 659 "prog_util.m"
                {
#line 660 "prog_util.m"
                  {
#line 660 "prog_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
                  }
#line 659 "prog_util.m"
                }
#line 634 "prog_util.m"
                break;
#line 634 "prog_util.m"
              case (MR_Integer) 2:
#line 634 "prog_util.m"
                {
#line 634 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 634 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_6_6;

#line 634 "prog_util.m"
                  parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 634 "prog_util.m"
                  parse_tree__prog_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 3)));
#line 634 "prog_util.m"
                }
#line 634 "prog_util.m"
                break;
#line 634 "prog_util.m"
              case (MR_Integer) 3:
#line 636 "prog_util.m"
                parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 634 "prog_util.m"
                break;
#line 634 "prog_util.m"
              case (MR_Integer) 5:
#line 634 "prog_util.m"
              case (MR_Integer) 6:
#line 634 "prog_util.m"
              case (MR_Integer) 7:
#line 634 "prog_util.m"
              case (MR_Integer) 8:
#line 634 "prog_util.m"
              case (MR_Integer) 9:
#line 647 "prog_util.m"
                parse_tree__prog_util__Arity_4 = (MR_Integer) 0;
#line 634 "prog_util.m"
                break;
#line 634 "prog_util.m"
              case (MR_Integer) 14:
#line 638 "prog_util.m"
                {
#line 638 "prog_util.m"
                  MR_Word parse_tree__prog_util__SubConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 638 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));

#line 639 "prog_util.m"
                  /* direct tailcall eliminated */
#line 639 "prog_util.m"
                  {
#line 639 "prog_util.m"
                    MR_Word parse_tree__prog_util__ConsId__tmp_copy_3 = parse_tree__prog_util__SubConsId_8;

#line 639 "prog_util.m"
                    parse_tree__prog_util__ConsId_3 = parse_tree__prog_util__ConsId__tmp_copy_3;
#line 639 "prog_util.m"
                  }
#line 639 "prog_util.m"
                  continue;
#line 638 "prog_util.m"
                }
#line 634 "prog_util.m"
                break;
#line 634 "prog_util.m"
            }
#line 634 "prog_util.m"
            break;
#line 634 "prog_util.m"
        }
#line 634 "prog_util.m"
        return parse_tree__prog_util__Arity_4;
#line 634 "prog_util.m"
      }
#line 634 "prog_util.m"
      break;
#line 634 "prog_util.m"
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
#line 614 "prog_util.m"
  {
#line 614 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 614 "prog_util.m"
#line 614 "prog_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) {
#line 614 "prog_util.m"
      default:
#line 614 "prog_util.m"
        parse_tree__prog_util__succeeded = MR_FALSE;
#line 614 "prog_util.m"
        break;
#line 614 "prog_util.m"
      case (MR_Integer) 3:
#line 614 "prog_util.m"
#line 614 "prog_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 614 "prog_util.m"
          default:
#line 614 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_FALSE;
#line 614 "prog_util.m"
            break;
#line 614 "prog_util.m"
          case (MR_Integer) 2:
#line 629 "prog_util.m"
            {
#line 629 "prog_util.m"
              MR_Word parse_tree__prog_util__SymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 629 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_42;
#line 629 "prog_util.m"
              MR_Integer parse_tree__prog_util___Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 629 "prog_util.m"
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
#line 629 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 629 "prog_util.m"
            }
#line 614 "prog_util.m"
            break;
#line 614 "prog_util.m"
          case (MR_Integer) 3:
#line 626 "prog_util.m"
            {
#line 626 "prog_util.m"
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
#line 626 "prog_util.m"
              parse_tree__prog_util__succeeded = MR_TRUE;
#line 626 "prog_util.m"
            }
#line 614 "prog_util.m"
            break;
#line 614 "prog_util.m"
          case (MR_Integer) 5:
#line 614 "prog_util.m"
            {
#line 614 "prog_util.m"
              MR_Integer parse_tree__prog_util__Int_4;
#line 614 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_6;
#line 614 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7;
#line 614 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8;

#line 614 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 614 "prog_util.m"
                {
#line 614 "prog_util.m"
                  parse_tree__prog_util__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 615 "prog_util.m"
                  {
#line 615 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_6);
                  }
#line 616 "prog_util.m"
                  parse_tree__prog_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "prog_util.m"
                  {
#line 616 "prog_util.m"
                    parse_tree__prog_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 616 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_7_7, 0) = ((MR_Box) (parse_tree__prog_util__Int_4));
#line 616 "prog_util.m"
                  }
#line 616 "prog_util.m"
                  {
#line 616 "prog_util.m"
                    MR_Word base;
#line 616 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 616 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 616 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 616 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 616 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_6));
#line 616 "prog_util.m"
                  }
#line 616 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 614 "prog_util.m"
                }
#line 614 "prog_util.m"
            }
#line 614 "prog_util.m"
            break;
#line 614 "prog_util.m"
          case (MR_Integer) 6:
#line 617 "prog_util.m"
            {
#line 617 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_9;
#line 617 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_11;
#line 617 "prog_util.m"
              MR_Word parse_tree__prog_util__V_12_12;
#line 617 "prog_util.m"
              MR_Word parse_tree__prog_util__V_13_13;

#line 617 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 617 "prog_util.m"
                {
#line 617 "prog_util.m"
                  parse_tree__prog_util__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "prog_util.m"
                  {
#line 618 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_11);
                  }
#line 619 "prog_util.m"
                  parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "prog_util.m"
                  {
#line 619 "prog_util.m"
                    parse_tree__prog_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 619 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 1) = MR_box_float(parse_tree__prog_util__Float_9);
#line 619 "prog_util.m"
                  }
#line 619 "prog_util.m"
                  {
#line 619 "prog_util.m"
                    MR_Word base;
#line 619 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 619 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 619 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 619 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 619 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_11));
#line 619 "prog_util.m"
                  }
#line 619 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 617 "prog_util.m"
                }
#line 617 "prog_util.m"
            }
#line 614 "prog_util.m"
            break;
#line 614 "prog_util.m"
          case (MR_Integer) 7:
#line 620 "prog_util.m"
            {
#line 620 "prog_util.m"
              MR_Char parse_tree__prog_util__Char_14;
#line 620 "prog_util.m"
              MR_Word parse_tree__prog_util__SymName_16;
#line 620 "prog_util.m"
              MR_String parse_tree__prog_util__V_17_17;
#line 620 "prog_util.m"
              MR_Word parse_tree__prog_util__V_18_18;
#line 620 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_38;

#line 620 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 620 "prog_util.m"
                {
#line 620 "prog_util.m"
                  parse_tree__prog_util__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 621 "prog_util.m"
                  {
#line 621 "prog_util.m"
                    parse_tree__prog_util__V_17_17 = mercury__string__from_char_1_f_0(parse_tree__prog_util__Char_14);
                  }
#line 622 "prog_util.m"
                  parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 621 "prog_util.m"
                  {
#line 621 "prog_util.m"
                    parse_tree__prog_util__SymName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 621 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_16, 0) = ((MR_Box) (parse_tree__prog_util__V_17_17));
#line 621 "prog_util.m"
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
#line 620 "prog_util.m"
                }
#line 620 "prog_util.m"
            }
#line 614 "prog_util.m"
            break;
#line 614 "prog_util.m"
          case (MR_Integer) 8:
#line 623 "prog_util.m"
            {
#line 623 "prog_util.m"
              MR_String parse_tree__prog_util__String_19;
#line 623 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_21;
#line 623 "prog_util.m"
              MR_Word parse_tree__prog_util__V_22_22;
#line 623 "prog_util.m"
              MR_Word parse_tree__prog_util__V_23_23;

#line 623 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 623 "prog_util.m"
                {
#line 623 "prog_util.m"
                  parse_tree__prog_util__String_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "prog_util.m"
                  {
#line 624 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_21);
                  }
#line 625 "prog_util.m"
                  parse_tree__prog_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "prog_util.m"
                  {
#line 625 "prog_util.m"
                    parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 625 "prog_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_util__String_19));
#line 625 "prog_util.m"
                  }
#line 625 "prog_util.m"
                  {
#line 625 "prog_util.m"
                    MR_Word base;
#line 625 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 625 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 625 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 625 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_21));
#line 625 "prog_util.m"
                  }
#line 625 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 623 "prog_util.m"
                }
#line 623 "prog_util.m"
            }
#line 614 "prog_util.m"
            break;
#line 614 "prog_util.m"
        }
#line 614 "prog_util.m"
        break;
#line 614 "prog_util.m"
    }
#line 614 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 614 "prog_util.m"
  }
#line 117 "prog_util.m"
}

#line 430 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
#line 430 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 430 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 430 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 430 "prog_util.m"
{
#line 430 "prog_util.m"
  {
#line 430 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 430 "prog_util.m"
    MR_Word parse_tree__prog_util__conv3_Catch_8;

#line 430 "prog_util.m"
    {
#line 430 "prog_util.m"
      parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv3_Catch_8);
    }
#line 430 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv3_Catch_8));
#line 430 "prog_util.m"
  }
#line 430 "prog_util.m"
}

#line 393 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
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
    MR_Word parse_tree__prog_util__conv2_TMV_8;

#line 393 "prog_util.m"
    {
#line 393 "prog_util.m"
      parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv2_TMV_8);
    }
#line 393 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv2_TMV_8));
#line 393 "prog_util.m"
  }
#line 393 "prog_util.m"
}

#line 413 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 413 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 413 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 413 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 413 "prog_util.m"
{
#line 413 "prog_util.m"
  {
#line 413 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 413 "prog_util.m"
    MR_Word parse_tree__prog_util__conv1_Goal_8;

#line 413 "prog_util.m"
    {
#line 413 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv1_Goal_8);
    }
#line 413 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv1_Goal_8));
#line 413 "prog_util.m"
  }
#line 413 "prog_util.m"
}

#line 408 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
#line 408 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 408 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 408 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 408 "prog_util.m"
{
#line 408 "prog_util.m"
  {
#line 408 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 408 "prog_util.m"
    MR_Word parse_tree__prog_util__conv0_Var_8;

#line 408 "prog_util.m"
    {
#line 408 "prog_util.m"
      parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv0_Var_8);
    }
#line 408 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv0_Var_8));
#line 408 "prog_util.m"
  }
#line 408 "prog_util.m"
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
#line 471 "prog_util.m"
        {
#line 471 "prog_util.m"
          MR_Word parse_tree__prog_util__TypeCtorInfo_200_200 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 471 "prog_util.m"
          MR_Word parse_tree__prog_util__TermA0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 471 "prog_util.m"
          MR_Word parse_tree__prog_util__TermB0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 471 "prog_util.m"
          MR_Word parse_tree__prog_util__TermA_71;
#line 471 "prog_util.m"
          MR_Word parse_tree__prog_util__TermB_72;
#line 471 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 471 "prog_util.m"
          MR_Word parse_tree__prog_util__Purity_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));

#line 472 "prog_util.m"
          {
#line 472 "prog_util.m"
            mercury__term__rename_var_in_term_4_p_0(parse_tree__prog_util__TypeCtorInfo_200_200, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__TermA0_69, &parse_tree__prog_util__TermA_71);
          }
#line 473 "prog_util.m"
          {
#line 473 "prog_util.m"
            mercury__term__rename_var_in_term_4_p_0(parse_tree__prog_util__TypeCtorInfo_200_200, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__TermB0_70, &parse_tree__prog_util__TermB_72);
          }
#line 474 "prog_util.m"
          {
#line 474 "prog_util.m"
            MR_Word base;
#line 474 "prog_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = base;
#line 474 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_184));
#line 474 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__TermA_71));
#line 474 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__TermB_72));
#line 474 "prog_util.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_185));
#line 474 "prog_util.m"
          }
#line 471 "prog_util.m"
        }
#line 290 "prog_util.m"
        break;
#line 290 "prog_util.m"
      case (MR_Integer) 1:
#line 467 "prog_util.m"
        {
#line 467 "prog_util.m"
          MR_Word parse_tree__prog_util__SymName_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 467 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 467 "prog_util.m"
          MR_Word parse_tree__prog_util__Purity_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 467 "prog_util.m"
          MR_Word parse_tree__prog_util__Terms0_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 467 "prog_util.m"
          MR_Word parse_tree__prog_util__Terms_183;

#line 468 "prog_util.m"
          {
#line 468 "prog_util.m"
            mercury__term__rename_var_in_terms_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Terms0_182, &parse_tree__prog_util__Terms_183);
          }
#line 469 "prog_util.m"
          {
#line 469 "prog_util.m"
            MR_Word base;
#line 469 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = base;
#line 469 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_180));
#line 469 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__SymName_68));
#line 469 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_util__Terms_183));
#line 469 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_181));
#line 469 "prog_util.m"
          }
#line 467 "prog_util.m"
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
#line 454 "prog_util.m"
            {
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Cond0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Cond_64;
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_172;
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_174;
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Then0_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Then_176;
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Else0_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 454 "prog_util.m"
              MR_Word parse_tree__prog_util__Else_178;

#line 455 "prog_util.m"
              {
#line 455 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_171, &parse_tree__prog_util__Vars_172);
              }
#line 456 "prog_util.m"
              {
#line 456 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_173, &parse_tree__prog_util__StateVars_174);
              }
#line 457 "prog_util.m"
              {
#line 457 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Cond0_63, &parse_tree__prog_util__Cond_64);
              }
#line 458 "prog_util.m"
              {
#line 458 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_175, &parse_tree__prog_util__Then_176);
              }
#line 459 "prog_util.m"
              {
#line 459 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_177, &parse_tree__prog_util__Else_178);
              }
#line 460 "prog_util.m"
              {
#line 460 "prog_util.m"
                MR_Word base;
#line 460 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 460 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 460 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_170));
#line 460 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_172));
#line 460 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_174));
#line 460 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Cond_64));
#line 460 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Then_176));
#line 460 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Else_178));
#line 460 "prog_util.m"
              }
#line 454 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 2:
#line 303 "prog_util.m"
            {
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_88;
#line 303 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_89;

#line 304 "prog_util.m"
              {
#line 304 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_86, &parse_tree__prog_util__SubGoalA_88);
              }
#line 305 "prog_util.m"
              {
#line 305 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_87, &parse_tree__prog_util__SubGoalB_89);
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_85));
#line 306 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_88));
#line 306 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_89));
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
              MR_Word parse_tree__prog_util__Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_90));
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
              MR_Word parse_tree__prog_util__Context_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_83;
#line 298 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_84;

#line 299 "prog_util.m"
              {
#line 299 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_81, &parse_tree__prog_util__SubGoalA_83);
              }
#line 300 "prog_util.m"
              {
#line 300 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_82, &parse_tree__prog_util__SubGoalB_84);
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_80));
#line 301 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_83));
#line 301 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_84));
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
              MR_Word parse_tree__prog_util__Vars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_18;
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 312 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_93;

#line 313 "prog_util.m"
              {
#line 313 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_17, &parse_tree__prog_util__Vars_18);
              }
#line 314 "prog_util.m"
              {
#line 314 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_92, &parse_tree__prog_util__SubGoal_93);
              }
#line 315 "prog_util.m"
              {
#line 315 "prog_util.m"
                MR_Word base;
#line 315 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_91));
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_18));
#line 315 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_93));
#line 315 "prog_util.m"
              }
#line 312 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 7:
#line 322 "prog_util.m"
            {
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 322 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
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
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_100, &parse_tree__prog_util__SubGoal_101);
              }
#line 325 "prog_util.m"
              {
#line 325 "prog_util.m"
                MR_Word base;
#line 325 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 325 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 325 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 325 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_99));
#line 325 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_103));
#line 325 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_101));
#line 325 "prog_util.m"
              }
#line 322 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 8:
#line 317 "prog_util.m"
            {
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_96;
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 317 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_98;

#line 318 "prog_util.m"
              {
#line 318 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_97, &parse_tree__prog_util__Vars_98);
              }
#line 319 "prog_util.m"
              {
#line 319 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_95, &parse_tree__prog_util__SubGoal_96);
              }
#line 320 "prog_util.m"
              {
#line 320 "prog_util.m"
                MR_Word base;
#line 320 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 320 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 320 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_94));
#line 320 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_98));
#line 320 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_96));
#line 320 "prog_util.m"
              }
#line 317 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 9:
#line 327 "prog_util.m"
            {
#line 327 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 327 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 327 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_106;
#line 327 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 327 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_108;

#line 328 "prog_util.m"
              {
#line 328 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_107, &parse_tree__prog_util__Vars_108);
              }
#line 329 "prog_util.m"
              {
#line 329 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_105, &parse_tree__prog_util__SubGoal_106);
              }
#line 330 "prog_util.m"
              {
#line 330 "prog_util.m"
                MR_Word base;
#line 330 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 330 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 330 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_104));
#line 330 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_108));
#line 330 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_106));
#line 330 "prog_util.m"
              }
#line 327 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 10:
#line 332 "prog_util.m"
            {
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__Purity_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 332 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_111;

#line 333 "prog_util.m"
              {
#line 333 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_110, &parse_tree__prog_util__SubGoal_111);
              }
#line 334 "prog_util.m"
              {
#line 334 "prog_util.m"
                MR_Word base;
#line 334 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 334 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 334 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_109));
#line 334 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Purity_19));
#line 334 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_111));
#line 334 "prog_util.m"
              }
#line 332 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 11:
#line 337 "prog_util.m"
            {
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_23;
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars_24;
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars_25;
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_114;
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 337 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_116;

#line 338 "prog_util.m"
              {
#line 338 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_115, &parse_tree__prog_util__Vars_116);
              }
#line 339 "prog_util.m"
              {
#line 339 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_20, &parse_tree__prog_util__StateVars_23);
              }
#line 340 "prog_util.m"
              {
#line 340 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_21, &parse_tree__prog_util__DotSVars_24);
              }
#line 341 "prog_util.m"
              {
#line 341 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_22, &parse_tree__prog_util__ColonSVars_25);
              }
#line 342 "prog_util.m"
              {
#line 342 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_113, &parse_tree__prog_util__SubGoal_114);
              }
#line 343 "prog_util.m"
              {
#line 343 "prog_util.m"
                MR_Word base;
#line 343 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 343 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 343 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 343 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_112));
#line 343 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_116));
#line 343 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_23));
#line 343 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_24));
#line 343 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_25));
#line 343 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_114));
#line 343 "prog_util.m"
              }
#line 337 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 12:
#line 347 "prog_util.m"
            {
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_119;
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_121;
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_125;
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars_126;
#line 347 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars_127;

#line 348 "prog_util.m"
              {
#line 348 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_120, &parse_tree__prog_util__Vars_121);
              }
#line 349 "prog_util.m"
              {
#line 349 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_122, &parse_tree__prog_util__StateVars_125);
              }
#line 350 "prog_util.m"
              {
#line 350 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_123, &parse_tree__prog_util__DotSVars_126);
              }
#line 351 "prog_util.m"
              {
#line 351 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_124, &parse_tree__prog_util__ColonSVars_127);
              }
#line 352 "prog_util.m"
              {
#line 352 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_118, &parse_tree__prog_util__SubGoal_119);
              }
#line 353 "prog_util.m"
              {
#line 353 "prog_util.m"
                MR_Word base;
#line 353 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 353 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 353 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_117));
#line 353 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_121));
#line 353 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_125));
#line 353 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_126));
#line 353 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_127));
#line 353 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_119));
#line 353 "prog_util.m"
              }
#line 347 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 13:
#line 357 "prog_util.m"
            {
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_130;
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_132;
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__StateVars_136;
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__DotSVars_137;
#line 357 "prog_util.m"
              MR_Word parse_tree__prog_util__ColonSVars_138;

#line 358 "prog_util.m"
              {
#line 358 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_131, &parse_tree__prog_util__Vars_132);
              }
#line 359 "prog_util.m"
              {
#line 359 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_133, &parse_tree__prog_util__StateVars_136);
              }
#line 360 "prog_util.m"
              {
#line 360 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_134, &parse_tree__prog_util__DotSVars_137);
              }
#line 361 "prog_util.m"
              {
#line 361 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_135, &parse_tree__prog_util__ColonSVars_138);
              }
#line 362 "prog_util.m"
              {
#line 362 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_129, &parse_tree__prog_util__SubGoal_130);
              }
#line 363 "prog_util.m"
              {
#line 363 "prog_util.m"
                MR_Word base;
#line 363 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 363 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 363 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 363 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_128));
#line 363 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_132));
#line 363 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_136));
#line 363 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_137));
#line 363 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_138));
#line 363 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_130));
#line 363 "prog_util.m"
              }
#line 357 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 14:
#line 367 "prog_util.m"
            {
#line 367 "prog_util.m"
              MR_Word parse_tree__prog_util__Detism_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 367 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 367 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 367 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_141;

#line 368 "prog_util.m"
              {
#line 368 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_140, &parse_tree__prog_util__SubGoal_141);
              }
#line 369 "prog_util.m"
              {
#line 369 "prog_util.m"
                MR_Word base;
#line 369 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 369 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 369 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_139));
#line 369 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Detism_26));
#line 369 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_141));
#line 369 "prog_util.m"
              }
#line 367 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 15:
#line 371 "prog_util.m"
            {
#line 371 "prog_util.m"
              MR_Word parse_tree__prog_util__Var0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 371 "prog_util.m"
              MR_Word parse_tree__prog_util__Var_28;
#line 371 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 371 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 371 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_144;

#line 372 "prog_util.m"
              {
#line 372 "prog_util.m"
                parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_27, &parse_tree__prog_util__Var_28);
              }
#line 373 "prog_util.m"
              {
#line 373 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_143, &parse_tree__prog_util__SubGoal_144);
              }
#line 374 "prog_util.m"
              {
#line 374 "prog_util.m"
                MR_Word base;
#line 374 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 374 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 374 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 374 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_142));
#line 374 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_28));
#line 374 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_144));
#line 374 "prog_util.m"
              }
#line 371 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 16:
#line 377 "prog_util.m"
            {
#line 377 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 377 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 377 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_147;
#line 377 "prog_util.m"
              MR_Word parse_tree__prog_util__Detism_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 377 "prog_util.m"
              MR_Word parse_tree__prog_util__Var0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 377 "prog_util.m"
              MR_Word parse_tree__prog_util__Var_150;

#line 378 "prog_util.m"
              {
#line 378 "prog_util.m"
                parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_149, &parse_tree__prog_util__Var_150);
              }
#line 379 "prog_util.m"
              {
#line 379 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_146, &parse_tree__prog_util__SubGoal_147);
              }
#line 380 "prog_util.m"
              {
#line 380 "prog_util.m"
                MR_Word base;
#line 380 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 380 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 380 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 380 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_145));
#line 380 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_150));
#line 380 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Detism_148));
#line 380 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_147));
#line 380 "prog_util.m"
              }
#line 377 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 17:
#line 384 "prog_util.m"
            {
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeCtorInfo_188_188;
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__CompileTime_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__RunTime_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__Mutables0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO_33;
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__Mutables_36;
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__V_78_78;
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 384 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_153;

#line 388 "prog_util.m"
              if ((parse_tree__prog_util__MaybeIO0_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "prog_util.m"
                parse_tree__prog_util__MaybeIO_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "prog_util.m"
              else
#line 389 "prog_util.m"
                {
#line 389 "prog_util.m"
                  MR_Word parse_tree__prog_util__IOStateVar0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO0_31, (MR_Integer) 0)));
#line 389 "prog_util.m"
                  MR_Word parse_tree__prog_util__IOStateVar_35;

#line 390 "prog_util.m"
                  {
#line 390 "prog_util.m"
                    parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__IOStateVar0_34, &parse_tree__prog_util__IOStateVar_35);
                  }
#line 391 "prog_util.m"
                  {
#line 391 "prog_util.m"
                    parse_tree__prog_util__MaybeIO_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO_33, 0) = ((MR_Box) (parse_tree__prog_util__IOStateVar_35));
#line 391 "prog_util.m"
                  }
#line 389 "prog_util.m"
                }
#line 393 "prog_util.m"
              {
#line 393 "prog_util.m"
                parse_tree__prog_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
#line 393 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_3));
#line 393 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 393 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 393 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 393 "prog_util.m"
              }
#line 6614 "parse_tree.prog_util.c"
              parse_tree__prog_util__TypeCtorInfo_188_188 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
#line 393 "prog_util.m"
              {
#line 393 "prog_util.m"
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_188_188, parse_tree__prog_util__TypeCtorInfo_188_188, parse_tree__prog_util__V_78_78, parse_tree__prog_util__Mutables0_32, &parse_tree__prog_util__Mutables_36);
              }
#line 395 "prog_util.m"
              {
#line 395 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_152, &parse_tree__prog_util__SubGoal_153);
              }
#line 396 "prog_util.m"
              {
#line 396 "prog_util.m"
                MR_Word base;
#line 396 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 396 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 396 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 396 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_151));
#line 396 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__CompileTime_29));
#line 396 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__RunTime_30));
#line 396 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeIO_33));
#line 396 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Mutables_36));
#line 396 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_153));
#line 396 "prog_util.m"
              }
#line 384 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 18:
#line 400 "prog_util.m"
            {
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeCtorInfo_194_194;
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__InVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__OutVars0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__MainGoal0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__OrElseGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__InVars_42;
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__OutVars_43;
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeVars_44;
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__MainGoal_47;
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__OrElseGoal_48;
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__V_77_77;
#line 400 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 401 "prog_util.m"
              {
#line 401 "prog_util.m"
                parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__InVars0_37, &parse_tree__prog_util__InVars_42);
              }
#line 402 "prog_util.m"
              {
#line 402 "prog_util.m"
                parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__OutVars0_38, &parse_tree__prog_util__OutVars_43);
              }
#line 406 "prog_util.m"
              if ((parse_tree__prog_util__MaybeVars0_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "prog_util.m"
                parse_tree__prog_util__MaybeVars_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "prog_util.m"
              else
#line 407 "prog_util.m"
                {
#line 407 "prog_util.m"
                  MR_Word parse_tree__prog_util__TypeInfo_191_191;
#line 407 "prog_util.m"
                  MR_Word parse_tree__prog_util__TransVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars0_39, (MR_Integer) 0)));
#line 407 "prog_util.m"
                  MR_Word parse_tree__prog_util__TransVars_46;
#line 407 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_76_76;

#line 408 "prog_util.m"
                  {
#line 408 "prog_util.m"
                    parse_tree__prog_util__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 408 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
#line 408 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_1));
#line 408 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 408 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 408 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 408 "prog_util.m"
                  }
#line 6728 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_191_191 = (MR_Word) &parse_tree__prog_util_scalar_common_1[1];
#line 408 "prog_util.m"
                  {
#line 408 "prog_util.m"
                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_191_191, parse_tree__prog_util__TypeInfo_191_191, parse_tree__prog_util__V_76_76, parse_tree__prog_util__TransVars0_45, &parse_tree__prog_util__TransVars_46);
                  }
#line 410 "prog_util.m"
                  {
#line 410 "prog_util.m"
                    parse_tree__prog_util__MaybeVars_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars_44, 0) = ((MR_Box) (parse_tree__prog_util__TransVars_46));
#line 410 "prog_util.m"
                  }
#line 407 "prog_util.m"
                }
#line 412 "prog_util.m"
              {
#line 412 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MainGoal0_40, &parse_tree__prog_util__MainGoal_47);
              }
#line 413 "prog_util.m"
              {
#line 413 "prog_util.m"
                parse_tree__prog_util__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
#line 413 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_2));
#line 413 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 413 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 413 "prog_util.m"
              }
#line 6766 "parse_tree.prog_util.c"
              parse_tree__prog_util__TypeCtorInfo_194_194 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 413 "prog_util.m"
              {
#line 413 "prog_util.m"
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_194_194, parse_tree__prog_util__TypeCtorInfo_194_194, parse_tree__prog_util__V_77_77, parse_tree__prog_util__OrElseGoal0_41, &parse_tree__prog_util__OrElseGoal_48);
              }
#line 414 "prog_util.m"
              {
#line 414 "prog_util.m"
                MR_Word base;
#line 414 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 414 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 414 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_154));
#line 414 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__InVars_42));
#line 414 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__OutVars_43));
#line 414 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeVars_44));
#line 414 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MainGoal_47));
#line 414 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__OrElseGoal_48));
#line 414 "prog_util.m"
              }
#line 400 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 19:
#line 418 "prog_util.m"
            {
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeCtorInfo_197_197;
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeElse0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__Catches0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeCatchAny0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 7)));
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__Then_53;
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeElse_56;
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__Catches_57;
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeCatchAny_62;
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__V_73_73;
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_157;
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 418 "prog_util.m"
              MR_Word parse_tree__prog_util__MaybeIO_159;

#line 419 "prog_util.m"
              {
#line 419 "prog_util.m"
                parse_tree__prog_util__rename_in_maybe_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MaybeIO0_158, &parse_tree__prog_util__MaybeIO_159);
              }
#line 420 "prog_util.m"
              {
#line 420 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_156, &parse_tree__prog_util__SubGoal_157);
              }
#line 421 "prog_util.m"
              {
#line 421 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_49, &parse_tree__prog_util__Then_53);
              }
#line 426 "prog_util.m"
              if ((parse_tree__prog_util__MaybeElse0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "prog_util.m"
                parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "prog_util.m"
              else
#line 423 "prog_util.m"
                {
#line 423 "prog_util.m"
                  MR_Word parse_tree__prog_util__Else0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse0_50, (MR_Integer) 0)));
#line 423 "prog_util.m"
                  MR_Word parse_tree__prog_util__Else_55;

#line 424 "prog_util.m"
                  {
#line 424 "prog_util.m"
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_54, &parse_tree__prog_util__Else_55);
                  }
#line 425 "prog_util.m"
                  {
#line 425 "prog_util.m"
                    parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse_56, 0) = ((MR_Box) (parse_tree__prog_util__Else_55));
#line 425 "prog_util.m"
                  }
#line 423 "prog_util.m"
                }
#line 430 "prog_util.m"
              {
#line 430 "prog_util.m"
                parse_tree__prog_util__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
#line 430 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_4));
#line 430 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 430 "prog_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 430 "prog_util.m"
              }
#line 6895 "parse_tree.prog_util.c"
              parse_tree__prog_util__TypeCtorInfo_197_197 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0;
#line 430 "prog_util.m"
              {
#line 430 "prog_util.m"
                mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_197_197, parse_tree__prog_util__TypeCtorInfo_197_197, parse_tree__prog_util__V_73_73, parse_tree__prog_util__Catches0_51, &parse_tree__prog_util__Catches_57);
              }
#line 436 "prog_util.m"
              if ((parse_tree__prog_util__MaybeCatchAny0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "prog_util.m"
                parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "prog_util.m"
              else
#line 432 "prog_util.m"
                {
#line 432 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyVar0_58;
#line 432 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyGoal0_59;
#line 432 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyVar_60;
#line 432 "prog_util.m"
                  MR_Word parse_tree__prog_util__CatchAnyGoal_61;
#line 432 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny0_52, (MR_Integer) 0)));
#line 432 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_75_75;

#line 432 "prog_util.m"
                  parse_tree__prog_util__CatchAnyVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_74_74, (MR_Integer) 0)));
#line 432 "prog_util.m"
                  parse_tree__prog_util__CatchAnyGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_74_74, (MR_Integer) 1)));
#line 433 "prog_util.m"
                  {
#line 433 "prog_util.m"
                    parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyVar0_58, &parse_tree__prog_util__CatchAnyVar_60);
                  }
#line 434 "prog_util.m"
                  {
#line 434 "prog_util.m"
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyGoal0_59, &parse_tree__prog_util__CatchAnyGoal_61);
                  }
#line 435 "prog_util.m"
                  {
#line 435 "prog_util.m"
                    parse_tree__prog_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_util__CatchAnyVar_60));
#line 435 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_util__CatchAnyGoal_61));
#line 435 "prog_util.m"
                  }
#line 435 "prog_util.m"
                  {
#line 435 "prog_util.m"
                    parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny_62, 0) = ((MR_Box) (parse_tree__prog_util__V_75_75));
#line 435 "prog_util.m"
                  }
#line 432 "prog_util.m"
                }
#line 440 "prog_util.m"
              {
#line 440 "prog_util.m"
                MR_Word base;
#line 440 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_155));
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__MaybeIO_159));
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_157));
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Then_53));
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MaybeElse_56));
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Catches_57));
#line 440 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (parse_tree__prog_util__MaybeCatchAny_62));
#line 440 "prog_util.m"
              }
#line 418 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 20:
#line 443 "prog_util.m"
            {
#line 443 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 443 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 443 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 443 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_163;
#line 443 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_164;

#line 444 "prog_util.m"
              {
#line 444 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_161, &parse_tree__prog_util__SubGoalA_163);
              }
#line 445 "prog_util.m"
              {
#line 445 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_162, &parse_tree__prog_util__SubGoalB_164);
              }
#line 446 "prog_util.m"
              {
#line 446 "prog_util.m"
                MR_Word base;
#line 446 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 446 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 446 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_160));
#line 446 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_163));
#line 446 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_164));
#line 446 "prog_util.m"
              }
#line 443 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 21:
#line 448 "prog_util.m"
            {
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalA_168;
#line 448 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoalB_169;

#line 449 "prog_util.m"
              {
#line 449 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_166, &parse_tree__prog_util__SubGoalA_168);
              }
#line 450 "prog_util.m"
              {
#line 450 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_167, &parse_tree__prog_util__SubGoalB_169);
              }
#line 451 "prog_util.m"
              {
#line 451 "prog_util.m"
                MR_Word base;
#line 451 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 451 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 451 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 451 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_165));
#line 451 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_168));
#line 451 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_169));
#line 451 "prog_util.m"
              }
#line 448 "prog_util.m"
            }
#line 290 "prog_util.m"
            break;
#line 290 "prog_util.m"
          case (MR_Integer) 22:
#line 463 "prog_util.m"
            {
#line 463 "prog_util.m"
              MR_String parse_tree__prog_util__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 463 "prog_util.m"
              MR_Word parse_tree__prog_util__Terms0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 463 "prog_util.m"
              MR_Word parse_tree__prog_util__Terms_67;
#line 463 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 464 "prog_util.m"
              {
#line 464 "prog_util.m"
                mercury__term__rename_var_in_terms_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Terms0_66, &parse_tree__prog_util__Terms_67);
              }
#line 465 "prog_util.m"
              {
#line 465 "prog_util.m"
                MR_Word base;
#line 465 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 465 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 465 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 465 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_179));
#line 465 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Name_65));
#line 465 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Terms_67));
#line 465 "prog_util.m"
              }
#line 463 "prog_util.m"
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
#line 543 "prog_util.m"
  {
#line 543 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 543 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 543 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;

#line 544 "prog_util.m"
    {
#line 544 "prog_util.m"
      parse_tree__prog_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__PredOrFunc_10));
#line 544 "prog_util.m"
    }
#line 545 "prog_util.m"
    {
#line 545 "prog_util.m"
      parse_tree__prog_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_util__Line_12));
#line 545 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_util__Counter_13));
#line 545 "prog_util.m"
    }
#line 544 "prog_util.m"
    {
#line 544 "prog_util.m"
      parse_tree__prog_util__make_pred_name_6_p_0(parse_tree__prog_util__ModuleName_8, parse_tree__prog_util__Prefix_9, parse_tree__prog_util__V_15_15, parse_tree__prog_util__PredName_11, parse_tree__prog_util__V_16_16, parse_tree__prog_util__SymName_14);
#line 544 "prog_util.m"
      return;
    }
#line 543 "prog_util.m"
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
#line 548 "prog_util.m"
  {
#line 548 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__PFS_14;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__PredIdStr_17;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__Name_32;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_93_93;
#line 548 "prog_util.m"
    MR_Word parse_tree__prog_util__V_99_99;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_101_101;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_102_102;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_109_109;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_111_111;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_112_112;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_119_119;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_121_121;
#line 548 "prog_util.m"
    MR_String parse_tree__prog_util__V_122_122;

#line 552 "prog_util.m"
    if ((parse_tree__prog_util__MaybePredOrFunc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "prog_util.m"
      parse_tree__prog_util__PFS_14 = (MR_String) "pred_or_func";
#line 552 "prog_util.m"
    else
#line 550 "prog_util.m"
      {
#line 550 "prog_util.m"
        MR_Word parse_tree__prog_util__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybePredOrFunc_9, (MR_Integer) 0)));

#line 551 "prog_util.m"
        {
#line 551 "prog_util.m"
          parse_tree__prog_util__PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_util__PredOrFunc_13);
        }
#line 550 "prog_util.m"
      }
#line 559 "prog_util.m"
#line 559 "prog_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) {
#line 559 "prog_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 559 "prog_util.m"
      case (MR_Integer) 0:
#line 583 "prog_util.m"
        parse_tree__prog_util__PredIdStr_17 = (MR_String) "";
#line 559 "prog_util.m"
        break;
#line 559 "prog_util.m"
      case (MR_Integer) 1:
#line 557 "prog_util.m"
        {
#line 557 "prog_util.m"
          MR_Integer parse_tree__prog_util__Line_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 557 "prog_util.m"
          MR_Integer parse_tree__prog_util__Counter_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 557 "prog_util.m"
          MR_String parse_tree__prog_util__V_77_77;
#line 557 "prog_util.m"
          MR_Word parse_tree__prog_util__V_83_83 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 557 "prog_util.m"
          MR_String parse_tree__prog_util__V_85_85;
#line 557 "prog_util.m"
          MR_String parse_tree__prog_util__V_86_86;

#line 558 "prog_util.m"
          {
#line 558 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Counter_16, &parse_tree__prog_util__V_77_77);
          }
#line 558 "prog_util.m"
          {
#line 558 "prog_util.m"
            parse_tree__prog_util__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_77_77);
          }
#line 558 "prog_util.m"
          {
#line 558 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Line_15, &parse_tree__prog_util__V_86_86);
          }
#line 558 "prog_util.m"
          {
#line 558 "prog_util.m"
            parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_86_86, parse_tree__prog_util__V_85_85);
          }
#line 557 "prog_util.m"
        }
#line 559 "prog_util.m"
        break;
#line 559 "prog_util.m"
      case (MR_Integer) 2:
#line 560 "prog_util.m"
        {
#line 560 "prog_util.m"
          MR_Word parse_tree__prog_util__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 560 "prog_util.m"
          MR_Word parse_tree__prog_util__TypeSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 567 "prog_util.m"
          {
#line 567 "prog_util.m"
            parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(parse_tree__prog_util__VarSet_18, parse_tree__prog_util__TypeSubst_19, &parse_tree__prog_util__PredIdStr_17);
          }
#line 560 "prog_util.m"
        }
#line 559 "prog_util.m"
        break;
#line 559 "prog_util.m"
      case (MR_Integer) 3:
#line 559 "prog_util.m"
#line 559 "prog_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) {
#line 559 "prog_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 559 "prog_util.m"
          case (MR_Integer) 0:
#line 571 "prog_util.m"
            {
#line 571 "prog_util.m"
              MR_Word parse_tree__prog_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 572 "prog_util.m"
              {
#line 572 "prog_util.m"
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_74, &parse_tree__prog_util__PredIdStr_17);
              }
#line 571 "prog_util.m"
            }
#line 559 "prog_util.m"
            break;
#line 559 "prog_util.m"
          case (MR_Integer) 1:
#line 571 "prog_util.m"
            {
#line 571 "prog_util.m"
              MR_Word parse_tree__prog_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 572 "prog_util.m"
              {
#line 572 "prog_util.m"
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_27, &parse_tree__prog_util__PredIdStr_17);
              }
#line 571 "prog_util.m"
            }
#line 559 "prog_util.m"
            break;
#line 559 "prog_util.m"
          case (MR_Integer) 2:
#line 574 "prog_util.m"
            {
#line 574 "prog_util.m"
              MR_Integer parse_tree__prog_util__ModeNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 574 "prog_util.m"
              MR_String parse_tree__prog_util__ModeStr_29;
#line 574 "prog_util.m"
              MR_String parse_tree__prog_util__ArgsStr_30;
#line 574 "prog_util.m"
              MR_String parse_tree__prog_util__V_34_34;
#line 574 "prog_util.m"
              MR_Word parse_tree__prog_util__Args_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 2)));

#line 575 "prog_util.m"
              {
#line 575 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__ModeNum_28, &parse_tree__prog_util__ModeStr_29);
              }
#line 576 "prog_util.m"
              {
#line 576 "prog_util.m"
                parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_63, &parse_tree__prog_util__ArgsStr_30);
              }
#line 577 "prog_util.m"
              {
#line 577 "prog_util.m"
                parse_tree__prog_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__ArgsStr_30);
              }
#line 577 "prog_util.m"
              {
#line 577 "prog_util.m"
                parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__ModeStr_29, parse_tree__prog_util__V_34_34);
              }
#line 574 "prog_util.m"
            }
#line 559 "prog_util.m"
            break;
#line 559 "prog_util.m"
          case (MR_Integer) 3:
#line 579 "prog_util.m"
            {
#line 579 "prog_util.m"
              MR_Integer parse_tree__prog_util__Distance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 580 "prog_util.m"
              {
#line 580 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__Distance_31, &parse_tree__prog_util__PredIdStr_17);
              }
#line 579 "prog_util.m"
            }
#line 559 "prog_util.m"
            break;
#line 559 "prog_util.m"
        }
#line 559 "prog_util.m"
        break;
#line 559 "prog_util.m"
    }
#line 7541 "parse_tree.prog_util.c"
    parse_tree__prog_util__V_99_99 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 587 "prog_util.m"
    {
#line 587 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredIdStr_17, &parse_tree__prog_util__V_93_93);
    }
#line 586 "prog_util.m"
    {
#line 586 "prog_util.m"
      parse_tree__prog_util__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_93_93);
    }
#line 587 "prog_util.m"
    {
#line 587 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredName_10, &parse_tree__prog_util__V_102_102);
    }
#line 586 "prog_util.m"
    {
#line 586 "prog_util.m"
      parse_tree__prog_util__V_109_109 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_102_102, parse_tree__prog_util__V_101_101);
    }
#line 586 "prog_util.m"
    {
#line 586 "prog_util.m"
      parse_tree__prog_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_109_109);
    }
#line 587 "prog_util.m"
    {
#line 587 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PFS_14, &parse_tree__prog_util__V_112_112);
    }
#line 586 "prog_util.m"
    {
#line 586 "prog_util.m"
      parse_tree__prog_util__V_119_119 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_112_112, parse_tree__prog_util__V_111_111);
    }
#line 586 "prog_util.m"
    {
#line 586 "prog_util.m"
      parse_tree__prog_util__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_119_119);
    }
#line 587 "prog_util.m"
    {
#line 587 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__Prefix_8, &parse_tree__prog_util__V_122_122);
    }
#line 586 "prog_util.m"
    {
#line 586 "prog_util.m"
      parse_tree__prog_util__Name_32 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_122_122, parse_tree__prog_util__V_121_121);
    }
#line 588 "prog_util.m"
    {
#line 588 "prog_util.m"
      MR_Word base;
#line 588 "prog_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_util.m"
      *parse_tree__prog_util__SymName_12 = base;
#line 588 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_7));
#line 588 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_32));
#line 588 "prog_util.m"
    }
#line 548 "prog_util.m"
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
#line 230 "prog_util.m"
      return;
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
