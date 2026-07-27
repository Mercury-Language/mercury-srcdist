/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2026-07-27
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


#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "term_subst.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_ordinal_ordered_maybe_set_default_func_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_name_ordered_maybe_set_default_func_0[2];

static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_maybe_set_default_func_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_ordinal_ordered_strip_what_module_names_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_name_ordered_strip_what_module_names_0[2];

static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_strip_what_module_names_0[2];

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__8_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_98);

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__7_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_82);

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__6_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_66);

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__5_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_48);

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__4_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_98);

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__3_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_82);

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__2_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_66);

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__1_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_48);

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

static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_String BaseName_7,
  MR_Integer Cur_8,
  MR_Integer Max_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__prog_util__rename_in_goals_4_p_0(
  MR_Word OldVar_1,
  MR_Word NewVar_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_set_default_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util____Compare____maybe_set_default_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____strip_what_module_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_util____Compare____strip_what_module_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[3][7];

static /* final */ const MR_Integer parse_tree__prog_util_scalar_common_4[1][2];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_5[1][6];




static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) ".")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0))
  },
  /* row   2 */
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

static /* final */ const MR_Integer parse_tree__prog_util_scalar_common_4[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__prog_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_util__term__pti_term_1__pseudo_1) }
};

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_0 = {
  (MR_String) "do_not_set_default_func",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_1 = {
  (MR_String) "set_default_func",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_ordinal_ordered_maybe_set_default_func_0[2] = {
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_name_ordered_maybe_set_default_func_0[2] = {
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_maybe_set_default_func_0_1
};

static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_maybe_set_default_func_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_set_default_func_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_util____Unify____maybe_set_default_func_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____maybe_set_default_func_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "maybe_set_default_func",
  { parse_tree__prog_util__parse_tree__prog_util__enum_name_ordered_maybe_set_default_func_0 },
  { parse_tree__prog_util__parse_tree__prog_util__enum_ordinal_ordered_maybe_set_default_func_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_util__parse_tree__prog_util__functor_number_map_maybe_set_default_func_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_0 = {
  (MR_String) "strip_builtin_module_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_1 = {
  (MR_String) "strip_all_module_names",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_ordinal_ordered_strip_what_module_names_0[2] = {
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__enum_name_ordered_strip_what_module_names_0[2] = {
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_1,
  &parse_tree__prog_util__parse_tree__prog_util__enum_functor_desc_strip_what_module_names_0_0
};

static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_strip_what_module_names_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_strip_what_module_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_util____Unify____strip_what_module_names_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____strip_what_module_names_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "strip_what_module_names",
  { parse_tree__prog_util__parse_tree__prog_util__enum_name_ordered_strip_what_module_names_0 },
  { parse_tree__prog_util__parse_tree__prog_util__enum_ordinal_ordered_strip_what_module_names_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_util__parse_tree__prog_util__functor_number_map_strip_what_module_names_0,

};

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__8_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_98)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_88;

  {
    TypeInfo_52_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_88, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_88, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_88, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_98));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__7_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_82)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_72;

  {
    TypeInfo_52_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_72, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_72, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_72, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_82));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__6_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_66)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_56;

  {
    TypeInfo_52_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_56, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_56, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_56, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_66));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__5_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_48)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_52;

  {
    TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_52, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_48));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__4_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_98)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_88;

  {
    TypeInfo_52_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_88, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_88, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_88, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_98));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__3_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_82)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_72;

  {
    TypeInfo_52_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_72, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_72, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_72, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_82));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__2_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_66)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_56;

  {
    TypeInfo_52_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_56, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_56, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_56, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_66));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__1_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ArgTerms_5,
  MR_Word HeadVar__3_48)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_52;

  {
    TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_50));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_52_52, (MR_Word) (ArgTerms_5), (MR_Word) (HeadVar__3_48));
  return succeeded;
}

void MR_CALL 
parse_tree__prog_util____Compare____strip_what_module_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__prog_util____Unify____strip_what_module_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_util____Compare____maybe_set_default_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_set_default_func_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word Catch0_7,
  MR_Word * Catch_8)
{
  MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(0, Catch0_7, 0))));
  MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(0, Catch0_7, 1))));
  MR_Word Term_11;
  MR_Word Goal_12;

  mercury__term_subst__rename_var_in_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, Term0_9, &Term_11);
  parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Goal0_10, &Goal_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Catch_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Term_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_12));
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word NewVar_6,
  MR_Word TMV0_7,
  MR_Word * TMV_8)
{
  MR_bool succeeded;
  MR_String MutableName_9 = ((MR_String) ((MR_hl_field(0, TMV0_7, 0))));
  MR_Word StateVar0_10 = ((MR_Word) ((MR_hl_field(0, TMV0_7, 1))));
  MR_Word StateVar_11;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (StateVar0_10)), ((MR_Box) (OldVar_5)));
  if (succeeded)
    StateVar_11 = NewVar_6;
  else
    StateVar_11 = StateVar0_10;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TMV_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MutableName_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (StateVar_11));
  }
}

MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_f_0(
  MR_Word Context_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Context_1));
    }
  else
  {
    MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (Context_1));
      MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (Goal_6));
      MR_hl_field(2, HeadVar__3_3, 2) = ((MR_Box) (Goals_7));
    }
  }
  return HeadVar__3_3;
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
      MR_Word TVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TVars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TVarRenaming_1_34;
      MR_Word STATE_VARIABLE_TVarSet_2_36;
      MR_Word STATE_VARIABLE_TVarNameMap_1_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TVarSet_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TVarNameMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_TVarRenaming_0_7;

      succeeded = mercury__map__contains_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (TVar_19)));
      if (succeeded)
      {
        STATE_VARIABLE_TVarRenaming_1_34 = STATE_VARIABLE_TVarRenaming_0_7;
        STATE_VARIABLE_TVarNameMap_1_37 = STATE_VARIABLE_TVarNameMap_0_5;
        STATE_VARIABLE_TVarSet_2_36 = STATE_VARIABLE_TVarSet_0_3;
      }
      else
      {
        MR_String TVarName_25;

        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, TVar_19, &TVarName_25);
        if (succeeded)
        {
          MR_Word TVarSetVar_26;
          MR_Box conv0_TVarSetVar_26;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (TVarName_25)), &conv0_TVarSetVar_26);
          if (succeeded)
          {
            TVarSetVar_26 = ((MR_Word) (conv0_TVarSetVar_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (TVar_19)), ((MR_Box) (TVarSetVar_26)), STATE_VARIABLE_TVarRenaming_0_7, &STATE_VARIABLE_TVarRenaming_1_34);
            STATE_VARIABLE_TVarNameMap_1_37 = STATE_VARIABLE_TVarNameMap_0_5;
            STATE_VARIABLE_TVarSet_2_36 = STATE_VARIABLE_TVarSet_0_3;
          }
          else
          {
            MR_Word NewTVar_27;
            MR_Word STATE_VARIABLE_TVarSet_1_35;

            mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &NewTVar_27, STATE_VARIABLE_TVarSet_0_3, &STATE_VARIABLE_TVarSet_1_35);
            mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NewTVar_27, TVarName_25, STATE_VARIABLE_TVarSet_1_35, &STATE_VARIABLE_TVarSet_2_36);
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (TVarName_25)), ((MR_Box) (NewTVar_27)), STATE_VARIABLE_TVarNameMap_0_5, &STATE_VARIABLE_TVarNameMap_1_37);
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (TVar_19)), ((MR_Box) (NewTVar_27)), STATE_VARIABLE_TVarRenaming_0_7, &STATE_VARIABLE_TVarRenaming_1_34);
          }
        }
        else
        {
          MR_Word NewTVar_44;

          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &NewTVar_44, STATE_VARIABLE_TVarSet_0_3, &STATE_VARIABLE_TVarSet_2_36);
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[1]), ((MR_Box) (TVar_19)), ((MR_Box) (NewTVar_44)), STATE_VARIABLE_TVarRenaming_0_7, &STATE_VARIABLE_TVarRenaming_1_34);
          STATE_VARIABLE_TVarNameMap_1_37 = STATE_VARIABLE_TVarNameMap_0_5;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TVars_20;
      next_value_of_STATE_VARIABLE_TVarSet_0_3 = STATE_VARIABLE_TVarSet_2_36;
      next_value_of_STATE_VARIABLE_TVarNameMap_0_5 = STATE_VARIABLE_TVarNameMap_1_37;
      next_value_of_STATE_VARIABLE_TVarRenaming_0_7 = STATE_VARIABLE_TVarRenaming_1_34;
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
  MR_bool succeeded;
  MR_Word ArgsPrime_9;
  MR_Box State0Prime_10;
  MR_Box StatePrime_11;
  MR_Word RevArgs0_15;
  MR_Word RevArgs_16;
  MR_Word Var_17;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_14, Args0_5, &RevArgs0_15);
  succeeded = (RevArgs0_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    StatePrime_11 = (MR_hl_field(1, RevArgs0_15, 0));
    Var_17 = ((MR_Word) ((MR_hl_field(1, RevArgs0_15, 1))));
    succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      State0Prime_10 = (MR_hl_field(1, Var_17, 0));
      RevArgs_16 = ((MR_Word) ((MR_hl_field(1, Var_17, 1))));
      mercury__list__reverse_2_p_0(TypeInfo_for_T_14, RevArgs_16, &ArgsPrime_9);
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

MR_bool MR_CALL 
parse_tree__prog_util__get_state_args_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Args0_5,
  MR_Word * Args_6,
  MR_Box * State0_7,
  MR_Box * State_8)
{
  MR_bool succeeded;
  MR_Word RevArgs0_9;
  MR_Word RevArgs_10;
  MR_Word Var_11;

  mercury__list__reverse_2_p_0(TypeInfo_for_T_12, Args0_5, &RevArgs0_9);
  succeeded = (RevArgs0_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *State_8 = (MR_hl_field(1, RevArgs0_9, 0));
    Var_11 = ((MR_Word) ((MR_hl_field(1, RevArgs0_9, 1))));
    succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *State0_7 = (MR_hl_field(1, Var_11, 0));
      RevArgs_10 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
      mercury__list__reverse_2_p_0(TypeInfo_for_T_12, RevArgs_10, Args_6);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_util__pred_args_to_func_args_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word PredArgs_4,
  MR_Word * FuncArgs_5,
  MR_Box * FuncReturn_6)
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

void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_String BaseName_6,
  MR_Integer N_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_VarSet_0_10,
  MR_Word * STATE_VARIABLE_VarSet_11)
{
  parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(TypeInfo_for_T_13, BaseName_6, (MR_Integer) 1, N_7, Vars_8, STATE_VARIABLE_VarSet_0_10, STATE_VARIABLE_VarSet_11);
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
    MR_Word STATE_VARIABLE_VarSet_1_18;
    MR_Integer Var_19;

    Var_17 = mercury__string__int_to_string_1_f_0(Cur_8);
    VarName_12 = mercury__string__f_43_43_2_f_0(BaseName_7, Var_17);
    mercury__varset__new_named_var_4_p_0(TypeInfo_for_T_22, VarName_12, &HeadVar_13, STATE_VARIABLE_VarSet_0_15, &STATE_VARIABLE_VarSet_1_18);
    Var_19 = (MR_Integer) ((MR_Unsigned) Cur_8 + (MR_Unsigned) 1);
    parse_tree__prog_util__make_n_fresh_vars_loop_6_p_0(TypeInfo_for_T_22, BaseName_7, Var_19, Max_9, &TailVars_14, STATE_VARIABLE_VarSet_1_18, STATE_VARIABLE_VarSet_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Vars_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailVars_14));
    }
  }
}

void MR_CALL 
parse_tree__prog_util__strip_module_names_from_sym_name_3_p_0(
  MR_Word StripWhat_4,
  MR_Word SymName0_5,
  MR_Word * SymName_6)
{
  MR_bool succeeded;

  switch (StripWhat_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if (((MR_tag((MR_Word) SymName0_5)) == (MR_Integer) 1))
      {
        MR_String Name_8 = ((MR_String) ((MR_hl_field(1, SymName0_5, 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *SymName_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Name_8));
        }
      }
      else
        *SymName_6 = SymName0_5;
      break;
    case (MR_Integer) 0:
      {
        MR_String Name_11;
        MR_Word Module_10;
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) SymName0_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Module_10 = ((MR_Word) ((MR_hl_field(1, SymName0_5, 0))));
          Name_11 = ((MR_String) ((MR_hl_field(1, SymName0_5, 1))));
          Var_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_12);
        }
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *SymName_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Name_11));
          }
        else
          *SymName_6 = SymName0_5;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_util__strip_module_names_from_cons_id_3_p_0(
  MR_Word StripWhat_4,
  MR_Word ConsId0_5,
  MR_Word * ConsId_6)
{
  switch (StripWhat_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(ConsId0_5, ConsId_6);
      break;
    case (MR_Integer) 0:
      parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(ConsId0_5, ConsId_6);
      break;
  }
}

void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(
  MR_Word SymName0_3,
  MR_Word * SymName_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) SymName0_3)) == (MR_Integer) 1);
  MR_String Name_6;
  MR_Word Module_5;
  MR_Word Var_7;

  if (succeeded)
  {
    Module_5 = ((MR_Word) ((MR_hl_field(1, SymName0_3, 0))));
    Name_6 = ((MR_String) ((MR_hl_field(1, SymName0_3, 1))));
    Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_5, Var_7);
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *SymName_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_6));
    }
  else
    *SymName_4 = SymName0_3;
}

void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(
  MR_Word ConsId0_3,
  MR_Word * ConsId_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId0_3)) == (MR_Integer) 1);
  MR_Word DuCtor0_5;

  if (succeeded)
  {
    DuCtor0_5 = (MR_Word) (MR_body((MR_Word) (ConsId0_3), (MR_Integer) 1));
    {
      MR_Word SymName0_6 = ((MR_Word) ((MR_hl_field(0, DuCtor0_5, 0))));
      MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, DuCtor0_5, 1))));
      MR_Word TypeCtor_8 = ((MR_Word) ((MR_hl_field(0, DuCtor0_5, 2))));
      MR_Word SymName_9;
      MR_Word DuCtor_10;
      MR_String Name_12;
      MR_Word Module_11;
      MR_Word Var_13;

      succeeded = ((MR_tag((MR_Word) SymName0_6)) == (MR_Integer) 1);
      if (succeeded)
      {
        Module_11 = ((MR_Word) ((MR_hl_field(1, SymName0_6, 0))));
        Name_12 = ((MR_String) ((MR_hl_field(1, SymName0_6, 1))));
        Var_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_11, Var_13);
      }
      if (succeeded)
        {
          SymName_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SymName_9, 0) = ((MR_Box) (Name_12));
        }
      else
        SymName_9 = SymName0_6;
      {
        DuCtor_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DuCtor_10, 0) = ((MR_Box) (SymName_9));
        MR_hl_field(0, DuCtor_10, 1) = ((MR_Box) (Arity_7));
        MR_hl_field(0, DuCtor_10, 2) = ((MR_Box) (TypeCtor_8));
      }
      *ConsId_4 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_10)));
    }
  }
  else
    *ConsId_4 = ConsId0_3;
}

void MR_CALL 
parse_tree__prog_util__strip_module_qualifier_from_sym_name_2_p_0(
  MR_Word SymName0_3,
  MR_Word * SymName_4)
{
  if (((MR_tag((MR_Word) SymName0_3)) == (MR_Integer) 1))
  {
    MR_String Name_6 = ((MR_String) ((MR_hl_field(1, SymName0_3, 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *SymName_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_6));
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
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId0_3)) == (MR_Integer) 1);
  MR_Word Name0_5;
  MR_Integer Arity_6;
  MR_Word TypeCtor_7;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_9 = (MR_Word) (MR_body((MR_Word) (ConsId0_3), (MR_Integer) 1));
    Name0_5 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
    Arity_6 = ((MR_Integer) ((MR_hl_field(0, Var_9, 1))));
    TypeCtor_7 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Name_8;
    MR_Word Var_10;

    if (((MR_tag((MR_Word) Name0_5)) == (MR_Integer) 1))
    {
      MR_String Name_12 = ((MR_String) ((MR_hl_field(1, Name0_5, 1))));

      {
        Name_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Name_8, 0) = ((MR_Box) (Name_12));
      }
    }
    else
      Name_8 = Name0_5;
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (Name_8));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (Arity_6));
      MR_hl_field(0, Var_10, 2) = ((MR_Box) (TypeCtor_7));
    }
    *ConsId_4 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_10)));
  }
  else
    *ConsId_4 = ConsId0_3;
}

MR_bool MR_CALL 
parse_tree__prog_util__source_integer_to_int_3_p_0(
  MR_Word Base_4,
  MR_Word Integer_5,
  MR_Integer * Int_6)
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
        {
          MR_Integer Arity_4;
          MR_Word Var_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));

          Arity_4 = ((MR_Integer) ((MR_hl_field(0, Var_6, 1))));
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Arity_4));
          }
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));

              {
                HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Arity_7));
              }
            }
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__prog_util_scalar_common_2[2]));
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__prog_util_scalar_common_2[2]));
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__prog_util_scalar_common_2[2]));
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__prog_util_scalar_common_2[2]));
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__prog_util_scalar_common_2[2]));
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 12:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 13:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 14:
            {
              MR_Word ConsId_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_HeadVar__1_1 = ConsId_30;

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
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_28 = (MR_Word) (MR_body((MR_Word) (ConsId_3), (MR_Integer) 1));

          Arity_4 = ((MR_Integer) ((MR_hl_field(0, Var_28, 1))));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsId_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
            break;
          case (MR_Integer) 4:
            Arity_4 = ((MR_Integer) ((MR_hl_field(3, ConsId_3, 1))));
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            Arity_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 14:
            {
              MR_Word SubConsId_8 = ((MR_Word) ((MR_hl_field(3, ConsId_3, 2))));
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

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__8_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__7_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__6_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__5_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_1(
  MR_Word TypeInfo_for_T_50,
  MR_Word ConsId_4,
  MR_Word ArgTerms_5,
  MR_Word * Term_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_4)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_8;
        MR_Word DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_4), (MR_Integer) 1));
        MR_Word Context_105;

        SymName_8 = ((MR_Word) ((MR_hl_field(0, DuCtor_9, 0))));
        Context_105 = mercury__term_context__dummy_context_0_f_0();
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_50, SymName_8, ArgTerms_5, Context_105, Term_6);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_4, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 4:
          {
            MR_Word Context_106;

            Context_106 = mercury__term_context__dummy_context_0_f_0();
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_50, (MR_Word) (&parse_tree__prog_util_scalar_common_2[1]), ArgTerms_5, Context_106, Term_6);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_12 = ((MR_Word) ((MR_hl_field(3, ConsId_4, 1))));
            MR_Word Var_79;

            switch (MR_tag((MR_Word) IntConst_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_13 = ((MR_Integer) ((MR_hl_field(0, IntConst_12, 0))));
                  MR_Word Var_27;

                  Var_27 = mercury__term_context__dummy_context_0_f_0();
                  *Term_6 = mercury__term_int__int_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int_13, Var_27);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned UInt_18 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_12, 0))));
                  MR_Word Var_32;

                  Var_32 = mercury__term_context__dummy_context_0_f_0();
                  *Term_6 = mercury__term_int__uint_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt_18, Var_32);
                }
                break;
              case (MR_Integer) 2:
                {
                  int8_t Int8_14 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_12, 0)));
                  MR_Word Var_28;

                  Var_28 = mercury__term_context__dummy_context_0_f_0();
                  *Term_6 = mercury__term_int__int8_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int8_14, Var_28);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IntConst_12, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t UInt8_19 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_33;

                      Var_33 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint8_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt8_19, Var_33);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t Int16_15 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_29;

                      Var_29 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__int16_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int16_15, Var_29);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_20 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_34;

                      Var_34 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint16_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt16_20, Var_34);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_30;

                      Var_30 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__int32_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int32_16, Var_30);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t UInt32_21 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_35;

                      Var_35 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint32_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt32_21, Var_35);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t Int64_17 = MR_unbox_int64((MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_31;

                      Var_31 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__int64_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int64_17, Var_31);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t UInt64_22 = MR_unbox_uint64((MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_36;

                      Var_36 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint64_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt64_22, Var_36);
                    }
                    break;
                }
                break;
            }
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_79, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_79, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_3));
              MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_79, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_79, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_79, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_23 = MR_unbox_float((MR_hl_field(3, ConsId_4, 1)));
            MR_Word Var_37;
            MR_Word Var_39;
            MR_Word Var_63;

            {
              Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_37, 1) = MR_box_float(Float_23);
            }
            Var_39 = mercury__term_context__dummy_context_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
            }
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_2));
              MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_63, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_63, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_63, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_24 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_4, 1)));
            MR_String Var_40;
            MR_Word Var_45;
            MR_Word SymName_49;
            MR_Word Context_104;
            MR_Word Var_118;
            MR_String Name_119;

            Var_40 = mercury__string__from_char_1_f_0(Char_24);
            {
              SymName_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SymName_49, 0) = ((MR_Box) (Var_40));
            }
            Context_104 = mercury__term_context__dummy_context_0_f_0();
            Name_119 = ((MR_String) ((MR_hl_field(0, SymName_49, 0))));
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_118, 0) = ((MR_Box) (Name_119));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_118));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_104));
            }
            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_1));
              MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_45, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_45, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_45, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String String_25 = ((MR_String) ((MR_hl_field(3, ConsId_4, 1))));
            MR_Word Var_42;
            MR_Word Var_44;
            MR_Word Var_95;

            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = ((MR_Box) (String_25));
            }
            Var_44 = mercury__term_context__dummy_context_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
            }
            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_95, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_95, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_1_4));
              MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_95, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_95, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_95, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__4_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__3_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__2_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_util__IntroducedFrom__pred__cons_id_and_args_to_term__567__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
  return succeeded;
}

void MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ConsId_4,
  MR_Word ArgTerms_5,
  MR_Word * Term_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word SymName_8;
        MR_Word DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_4), (MR_Integer) 1));
        MR_Word Context_105;

        SymName_8 = ((MR_Word) ((MR_hl_field(0, DuCtor_9, 0))));
        Context_105 = mercury__term_context__dummy_context_0_f_0();
        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_50, SymName_8, ArgTerms_5, Context_105, Term_6);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
          {
            MR_Word Context_106;

            Context_106 = mercury__term_context__dummy_context_0_f_0();
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_50, (MR_Word) (&parse_tree__prog_util_scalar_common_2[1]), ArgTerms_5, Context_106, Term_6);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_12 = ((MR_Word) ((MR_hl_field(3, ConsId_4, 1))));
            MR_Word Var_79;

            switch (MR_tag((MR_Word) IntConst_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_13 = ((MR_Integer) ((MR_hl_field(0, IntConst_12, 0))));
                  MR_Word Var_27;

                  Var_27 = mercury__term_context__dummy_context_0_f_0();
                  *Term_6 = mercury__term_int__int_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int_13, Var_27);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned UInt_18 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_12, 0))));
                  MR_Word Var_32;

                  Var_32 = mercury__term_context__dummy_context_0_f_0();
                  *Term_6 = mercury__term_int__uint_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt_18, Var_32);
                }
                break;
              case (MR_Integer) 2:
                {
                  int8_t Int8_14 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_12, 0)));
                  MR_Word Var_28;

                  Var_28 = mercury__term_context__dummy_context_0_f_0();
                  *Term_6 = mercury__term_int__int8_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int8_14, Var_28);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IntConst_12, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t UInt8_19 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_33;

                      Var_33 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint8_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt8_19, Var_33);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t Int16_15 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_29;

                      Var_29 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__int16_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int16_15, Var_29);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_20 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_34;

                      Var_34 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint16_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt16_20, Var_34);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_30;

                      Var_30 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__int32_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int32_16, Var_30);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t UInt32_21 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_35;

                      Var_35 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint32_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt32_21, Var_35);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t Int64_17 = MR_unbox_int64((MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_31;

                      Var_31 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__int64_to_decimal_term_2_f_0(TypeInfo_for_T_50, Int64_17, Var_31);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t UInt64_22 = MR_unbox_uint64((MR_hl_field(3, IntConst_12, 1)));
                      MR_Word Var_36;

                      Var_36 = mercury__term_context__dummy_context_0_f_0();
                      *Term_6 = mercury__term_int__uint64_to_decimal_term_2_f_0(TypeInfo_for_T_50, UInt64_22, Var_36);
                    }
                    break;
                }
                break;
            }
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_79, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_79, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_3));
              MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_79, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_79, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_79, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_23 = MR_unbox_float((MR_hl_field(3, ConsId_4, 1)));
            MR_Word Var_37;
            MR_Word Var_39;
            MR_Word Var_63;

            {
              Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_37, 1) = MR_box_float(Float_23);
            }
            Var_39 = mercury__term_context__dummy_context_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
            }
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_2));
              MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_63, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_63, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_63, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_24 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_4, 1)));
            MR_String Var_40;
            MR_Word Var_45;
            MR_Word SymName_49;
            MR_Word Context_104;
            MR_Word Var_118;
            MR_String Name_119;

            Var_40 = mercury__string__from_char_1_f_0(Char_24);
            {
              SymName_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SymName_49, 0) = ((MR_Box) (Var_40));
            }
            Context_104 = mercury__term_context__dummy_context_0_f_0();
            Name_119 = ((MR_String) ((MR_hl_field(0, SymName_49, 0))));
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_118, 0) = ((MR_Box) (Name_119));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_118));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Context_104));
            }
            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_1));
              MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_45, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_45, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_45, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String String_25 = ((MR_String) ((MR_hl_field(3, ConsId_4, 1))));
            MR_Word Var_42;
            MR_Word Var_44;
            MR_Word Var_95;

            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = ((MR_Box) (String_25));
            }
            Var_44 = mercury__term_context__dummy_context_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
            }
            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_95, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_5[0]));
              MR_hl_field(0, Var_95, 1) = ((MR_Box) (parse_tree__prog_util__cons_id_and_args_to_term_3_p_0_4));
              MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_95, 3) = ((MR_Box) (TypeInfo_for_T_50));
              MR_hl_field(0, Var_95, 4) = ((MR_Box) (ArgTerms_5));
              MR_hl_field(0, Var_95, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140parse_tree.prog_util.cons_id_and_args_to_term\'/3", (MR_String) "ArgTerms != [] for constant");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goals_4_p_0(
  MR_Word OldVar_1,
  MR_Word NewVar_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;

    parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_1, NewVar_2, Goal0_9, &Goal_11);
    parse_tree__prog_util__rename_in_goals_4_p_0(OldVar_1, NewVar_2, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
    }
  }
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Catch_8;

  parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Catch_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_Catch_8));
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TMV_8;

  parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TMV_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_TMV_8));
}

static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Var_8;

  parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Var_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Var_8));
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
        MR_Word TermA0_77 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));
        MR_Word TermB0_78 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 2))));
        MR_Word TermA_79;
        MR_Word TermB_80;
        MR_Word Context_177 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
        MR_Word Purity_178 = ((MR_Unsigned) ((MR_hl_field(0, Goal0_7, 3))) & (MR_Integer) 3);

        mercury__term_subst__rename_var_in_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, TermA0_77, &TermA_79);
        mercury__term_subst__rename_var_in_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, TermB0_78, &TermB_80);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Context_177));
          MR_hl_field(0, base, 1) = ((MR_Box) (TermA_79));
          MR_hl_field(0, base, 2) = ((MR_Box) (TermB_80));
          MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Purity_178));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_76 = ((MR_Word) ((MR_hl_field(1, Goal0_7, 1))));
        MR_Word Context_173 = ((MR_Word) ((MR_hl_field(1, Goal0_7, 0))));
        MR_Word Purity_174 = ((MR_Unsigned) ((MR_hl_field(1, Goal0_7, 3))) & (MR_Integer) 3);
        MR_Word Terms0_175 = ((MR_Word) ((MR_hl_field(1, Goal0_7, 2))));
        MR_Word Terms_176;

        mercury__term_subst__rename_var_in_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, Terms0_175, &Terms_176);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Goal_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Context_173));
          MR_hl_field(1, base, 1) = ((MR_Box) (SymName_76));
          MR_hl_field(1, base, 2) = ((MR_Box) (Terms_176));
          MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) (Purity_174));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_10 = ((MR_Word) ((MR_hl_field(2, Goal0_7, 0))));
        MR_Word SubGoalA0_11 = ((MR_Word) ((MR_hl_field(2, Goal0_7, 1))));
        MR_Word SubGoalsB0_12 = ((MR_Word) ((MR_hl_field(2, Goal0_7, 2))));
        MR_Word SubGoalA_13;
        MR_Word SubGoalsB_14;

        parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_11, &SubGoalA_13);
        parse_tree__prog_util__rename_in_goals_4_p_0(OldVar_5, NewVar_6, SubGoalsB0_12, &SubGoalsB_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Goal_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Context_10));
          MR_hl_field(2, base, 1) = ((MR_Box) (SubGoalA_13));
          MR_hl_field(2, base, 2) = ((MR_Box) (SubGoalsB_14));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Goal0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 4:
          *Goal_8 = Goal0_7;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Cond0_71 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word Cond_72;
            MR_Word Context_163 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word Vars0_164 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word Vars_165;
            MR_Word StateVars0_166 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word StateVars_167;
            MR_Word Then0_168 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 5))));
            MR_Word Then_169;
            MR_Word Else0_170 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 6))));
            MR_Word Else_171;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_164, &Vars_165);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_166, &StateVars_167);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Cond0_71, &Cond_72);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Then0_168, &Then_169);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Else0_170, &Else_171);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_163));
              MR_hl_field(3, base, 2) = ((MR_Box) (Vars_165));
              MR_hl_field(3, base, 3) = ((MR_Box) (StateVars_167));
              MR_hl_field(3, base, 4) = ((MR_Box) (Cond_72));
              MR_hl_field(3, base, 5) = ((MR_Box) (Then_169));
              MR_hl_field(3, base, 6) = ((MR_Box) (Else_171));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoalB0_15 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoals0_16 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word SubGoalB_17;
            MR_Word SubGoals_18;
            MR_Word Context_92 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoalA0_93 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word SubGoalA_94;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_93, &SubGoalA_94);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_15, &SubGoalB_17);
            parse_tree__prog_util__rename_in_goals_4_p_0(OldVar_5, NewVar_6, SubGoals0_16, &SubGoals_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_92));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoalA_94));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoalB_17));
              MR_hl_field(3, base, 4) = ((MR_Box) (SubGoals_18));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoal0_19 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word SubGoal_20;
            MR_Word Context_95 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_19, &SubGoal_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_95));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_20));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Context_87 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoalA0_88 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word SubGoalsB0_89 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoalA_90;
            MR_Word SubGoalsB_91;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_88, &SubGoalA_90);
            parse_tree__prog_util__rename_in_goals_4_p_0(OldVar_5, NewVar_6, SubGoalsB0_89, &SubGoalsB_91);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_87));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoalA_90));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoalsB_91));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_23 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word Vars_24;
            MR_Word Context_96 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word SubGoal0_97 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word SubGoal_98;
            MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(3, Goal0_7, 1)));

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_23, &Vars_24);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_97, &SubGoal_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = (MR_Box) (packed_word_3);
              MR_hl_field(3, base, 2) = ((MR_Box) (Context_96));
              MR_hl_field(3, base, 3) = ((MR_Box) (Vars_24));
              MR_hl_field(3, base, 4) = ((MR_Box) (SubGoal_98));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Purity_25 = ((MR_Unsigned) ((MR_hl_field(3, Goal0_7, 2))) & (MR_Integer) 3);
            MR_Word Context_99 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_100 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoal_101;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_100, &SubGoal_101);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_99));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Purity_25));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoal_101));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word StateVars0_26 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word DotSVars0_27 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word ColonSVars0_28 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 5))));
            MR_Word StateVars_29;
            MR_Word DotSVars_30;
            MR_Word ColonSVars_31;
            MR_Word Context_102 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_103 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 6))));
            MR_Word SubGoal_104;
            MR_Word Vars0_105 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word Vars_106;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_105, &Vars_106);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_26, &StateVars_29);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, DotSVars0_27, &DotSVars_30);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, ColonSVars0_28, &ColonSVars_31);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_103, &SubGoal_104);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_102));
              MR_hl_field(3, base, 2) = ((MR_Box) (Vars_106));
              MR_hl_field(3, base, 3) = ((MR_Box) (StateVars_29));
              MR_hl_field(3, base, 4) = ((MR_Box) (DotSVars_30));
              MR_hl_field(3, base, 5) = ((MR_Box) (ColonSVars_31));
              MR_hl_field(3, base, 6) = ((MR_Box) (SubGoal_104));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Context_107 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_108 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 6))));
            MR_Word SubGoal_109;
            MR_Word Vars0_110 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word Vars_111;
            MR_Word StateVars0_112 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word DotSVars0_113 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word ColonSVars0_114 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 5))));
            MR_Word StateVars_115;
            MR_Word DotSVars_116;
            MR_Word ColonSVars_117;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_110, &Vars_111);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_112, &StateVars_115);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, DotSVars0_113, &DotSVars_116);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, ColonSVars0_114, &ColonSVars_117);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_108, &SubGoal_109);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_107));
              MR_hl_field(3, base, 2) = ((MR_Box) (Vars_111));
              MR_hl_field(3, base, 3) = ((MR_Box) (StateVars_115));
              MR_hl_field(3, base, 4) = ((MR_Box) (DotSVars_116));
              MR_hl_field(3, base, 5) = ((MR_Box) (ColonSVars_117));
              MR_hl_field(3, base, 6) = ((MR_Box) (SubGoal_109));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Context_118 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_119 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 6))));
            MR_Word SubGoal_120;
            MR_Word Vars0_121 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word Vars_122;
            MR_Word StateVars0_123 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word DotSVars0_124 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word ColonSVars0_125 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 5))));
            MR_Word StateVars_126;
            MR_Word DotSVars_127;
            MR_Word ColonSVars_128;

            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, Vars0_121, &Vars_122);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, StateVars0_123, &StateVars_126);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, DotSVars0_124, &DotSVars_127);
            parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_5, NewVar_6, ColonSVars0_125, &ColonSVars_128);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_119, &SubGoal_120);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_118));
              MR_hl_field(3, base, 2) = ((MR_Box) (Vars_122));
              MR_hl_field(3, base, 3) = ((MR_Box) (StateVars_126));
              MR_hl_field(3, base, 4) = ((MR_Box) (DotSVars_127));
              MR_hl_field(3, base, 5) = ((MR_Box) (ColonSVars_128));
              MR_hl_field(3, base, 6) = ((MR_Box) (SubGoal_120));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Detism_34 = ((MR_Unsigned) ((MR_hl_field(3, Goal0_7, 2))) & (MR_Integer) 7);
            MR_Word Context_132 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_133 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoal_134;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_133, &SubGoal_134);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_132));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Detism_34));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoal_134));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Var0_35 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word Var_36;
            MR_Word Context_135 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_136 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoal_137;

            parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(OldVar_5, NewVar_6, Var0_35, &Var_36);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_136, &SubGoal_137);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_135));
              MR_hl_field(3, base, 2) = ((MR_Box) (Var_36));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoal_137));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Context_138 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_139 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word SubGoal_140;
            MR_Word Detism_141 = ((MR_Unsigned) ((MR_hl_field(3, Goal0_7, 3))) & (MR_Integer) 7);
            MR_Word Var0_142 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word Var_143;

            parse_tree__prog_util__rename_in_plain_or_dot_var_4_p_0(OldVar_5, NewVar_6, Var0_142, &Var_143);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_139, &SubGoal_140);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_138));
              MR_hl_field(3, base, 2) = ((MR_Box) (Var_143));
              MR_hl_field(3, base, 3) = (MR_Box) ((MR_Unsigned) (Detism_141));
              MR_hl_field(3, base, 4) = ((MR_Box) (SubGoal_140));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word HeadWarnings_32 = ((MR_Unsigned) ((MR_hl_field(3, Goal0_7, 2))) & (MR_Integer) 7);
            MR_Word TailWarnings_33 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word Context_129 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_130 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word SubGoal_131;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_130, &SubGoal_131);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_129));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (HeadWarnings_32));
              MR_hl_field(3, base, 3) = ((MR_Box) (TailWarnings_33));
              MR_hl_field(3, base, 4) = ((MR_Box) (SubGoal_131));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CompileTime_37 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word RunTime_38 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word MaybeIO0_39 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word Mutables0_40 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 5))));
            MR_Word MaybeIO_41;
            MR_Word Mutables_44;
            MR_Word Var_81;
            MR_Word Context_144 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_145 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 6))));
            MR_Word SubGoal_146;

            if ((MaybeIO0_39 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeIO_41 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word IOStateVar0_42 = ((MR_Word) ((MR_hl_field(1, MaybeIO0_39, 0))));
              MR_Word IOStateVar_43;

              parse_tree__prog_util__rename_in_var_4_p_0(OldVar_5, NewVar_6, IOStateVar0_42, &IOStateVar_43);
              {
                MaybeIO_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeIO_41, 0) = ((MR_Box) (IOStateVar_43));
              }
            }
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[1]));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_2));
              MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_81, 3) = ((MR_Box) (OldVar_5));
              MR_hl_field(0, Var_81, 4) = ((MR_Box) (NewVar_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), Var_81, Mutables0_40, &Mutables_44);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_145, &SubGoal_146);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_144));
              MR_hl_field(3, base, 2) = ((MR_Box) (CompileTime_37));
              MR_hl_field(3, base, 3) = ((MR_Box) (RunTime_38));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybeIO_41));
              MR_hl_field(3, base, 5) = ((MR_Box) (Mutables_44));
              MR_hl_field(3, base, 6) = ((MR_Box) (SubGoal_146));
            }
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word InVars0_45 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word OutVars0_46 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word MaybeVars0_47 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word MainGoal0_48 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 5))));
            MR_Word OrElseGoal0_49 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 6))));
            MR_Word InVars_50;
            MR_Word OutVars_51;
            MR_Word MaybeVars_52;
            MR_Word MainGoal_55;
            MR_Word OrElseGoal_56;
            MR_Word Context_147 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));

            parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(OldVar_5, NewVar_6, InVars0_45, &InVars_50);
            parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(OldVar_5, NewVar_6, OutVars0_46, &OutVars_51);
            if ((MaybeVars0_47 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeVars_52 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word TransVars0_53 = ((MR_Word) ((MR_hl_field(1, MaybeVars0_47, 0))));
              MR_Word TransVars_54;
              MR_Word Var_82;

              {
                Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_82, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
                MR_hl_field(0, Var_82, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_1));
                MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_82, 3) = ((MR_Box) (OldVar_5));
                MR_hl_field(0, Var_82, 4) = ((MR_Box) (NewVar_6));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), Var_82, TransVars0_53, &TransVars_54);
              {
                MaybeVars_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeVars_52, 0) = ((MR_Box) (TransVars_54));
              }
            }
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, MainGoal0_48, &MainGoal_55);
            parse_tree__prog_util__rename_in_goals_4_p_0(OldVar_5, NewVar_6, OrElseGoal0_49, &OrElseGoal_56);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_147));
              MR_hl_field(3, base, 2) = ((MR_Box) (InVars_50));
              MR_hl_field(3, base, 3) = ((MR_Box) (OutVars_51));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybeVars_52));
              MR_hl_field(3, base, 5) = ((MR_Box) (MainGoal_55));
              MR_hl_field(3, base, 6) = ((MR_Box) (OrElseGoal_56));
            }
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word Then0_57 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 4))));
            MR_Word MaybeElse0_58 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 5))));
            MR_Word Catches0_59 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 6))));
            MR_Word MaybeCatchAny0_60 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 7))));
            MR_Word Then_61;
            MR_Word MaybeElse_64;
            MR_Word Catches_65;
            MR_Word MaybeCatchAny_70;
            MR_Word Var_83;
            MR_Word Context_148 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoal0_149 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoal_150;
            MR_Word MaybeIO0_151 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word MaybeIO_152;

            parse_tree__prog_util__rename_in_maybe_var_4_p_0(OldVar_5, NewVar_6, MaybeIO0_151, &MaybeIO_152);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoal0_149, &SubGoal_150);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Then0_57, &Then_61);
            if ((MaybeElse0_58 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeElse_64 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Else0_62 = ((MR_Word) ((MR_hl_field(1, MaybeElse0_58, 0))));
              MR_Word Else_63;

              parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, Else0_62, &Else_63);
              {
                MaybeElse_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeElse_64, 0) = ((MR_Box) (Else_63));
              }
            }
            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_83, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[2]));
              MR_hl_field(0, Var_83, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_3));
              MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_83, 3) = ((MR_Box) (OldVar_5));
              MR_hl_field(0, Var_83, 4) = ((MR_Box) (NewVar_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), Var_83, Catches0_59, &Catches_65);
            if ((MaybeCatchAny0_60 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeCatchAny_70 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word CatchAnyVar0_66;
              MR_Word CatchAnyGoal0_67;
              MR_Word CatchAnyVar_68;
              MR_Word CatchAnyGoal_69;
              MR_Word Var_84 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny0_60, 0))));
              MR_Word Var_85;

              CatchAnyVar0_66 = ((MR_Word) ((MR_hl_field(0, Var_84, 0))));
              CatchAnyGoal0_67 = ((MR_Word) ((MR_hl_field(0, Var_84, 1))));
              parse_tree__prog_util__rename_in_var_4_p_0(OldVar_5, NewVar_6, CatchAnyVar0_66, &CatchAnyVar_68);
              parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, CatchAnyGoal0_67, &CatchAnyGoal_69);
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_85, 0) = ((MR_Box) (CatchAnyVar_68));
                MR_hl_field(0, Var_85, 1) = ((MR_Box) (CatchAnyGoal_69));
              }
              {
                MaybeCatchAny_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeCatchAny_70, 0) = ((MR_Box) (Var_85));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_148));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeIO_152));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoal_150));
              MR_hl_field(3, base, 4) = ((MR_Box) (Then_61));
              MR_hl_field(3, base, 5) = ((MR_Box) (MaybeElse_64));
              MR_hl_field(3, base, 6) = ((MR_Box) (Catches_65));
              MR_hl_field(3, base, 7) = ((MR_Box) (MaybeCatchAny_70));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word Context_153 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoalA0_154 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word SubGoalA_155;
            MR_Word SubGoalB0_156 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoalB_157;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_154, &SubGoalA_155);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_156, &SubGoalB_157);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_153));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoalA_155));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoalB_157));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word Context_158 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));
            MR_Word SubGoalA0_159 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word SubGoalA_160;
            MR_Word SubGoalB0_161 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word SubGoalB_162;

            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalA0_159, &SubGoalA_160);
            parse_tree__prog_util__rename_in_goal_4_p_0(OldVar_5, NewVar_6, SubGoalB0_161, &SubGoalB_162);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_158));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoalA_160));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubGoalB_162));
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_String Name_73 = ((MR_String) ((MR_hl_field(3, Goal0_7, 2))));
            MR_Word Terms0_74 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 3))));
            MR_Word Terms_75;
            MR_Word Context_172 = ((MR_Word) ((MR_hl_field(3, Goal0_7, 1))));

            mercury__term_subst__rename_var_in_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldVar_5, NewVar_6, Terms0_74, &Terms_75);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Goal_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Context_172));
              MR_hl_field(3, base, 2) = ((MR_Box) (Name_73));
              MR_hl_field(3, base, 3) = ((MR_Box) (Terms_75));
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
  MR_bool succeeded;

  if ((MaybeVar0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeVar_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, MaybeVar0_7, 0))));
    MR_Word Var_10;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (Var0_9)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      Var_10 = NewVar_6;
    else
      Var_10 = Var0_9;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVar_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
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
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (Var0_7)), ((MR_Box) (OldVar_5)));
  if (succeeded)
    *Var_8 = NewVar_6;
  else
    *Var_8 = Var0_7;
}

static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
  MR_Word OldVar_1,
  MR_Word NewVar_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Vars0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_11;
    MR_Word Vars_12;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (Var0_9)), ((MR_Box) (OldVar_1)));
    if (succeeded)
      Var_11 = NewVar_2;
    else
      Var_11 = Var0_9;
    parse_tree__prog_util__rename_in_vars_4_p_0(OldVar_1, NewVar_2, Vars0_10, &Vars_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_12));
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
  MR_bool succeeded;

  if (((MR_tag((MR_Word) PODVar0_7)) == (MR_Integer) 1))
  {
    MR_Word DotVar0_11 = ((MR_Word) ((MR_hl_field(1, PODVar0_7, 0))));
    MR_Word DotVar_12;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (DotVar0_11)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      DotVar_12 = NewVar_6;
    else
      DotVar_12 = DotVar0_11;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *PODVar_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (DotVar_12));
    }
  }
  else
  {
    MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(0, PODVar0_7, 0))));
    MR_Word Var_10;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (Var0_9)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      Var_10 = NewVar_6;
    else
      Var_10 = Var0_9;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *PODVar_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
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
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Comp0_7)) == (MR_Integer) 0))
  {
    MR_Word SVar0_9 = ((MR_Word) ((MR_hl_field(0, Comp0_7, 0))));
    MR_Word SVar_10;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (SVar0_9)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      SVar_10 = NewVar_6;
    else
      SVar_10 = SVar0_9;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Comp_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SVar_10));
    }
  }
  else
  {
    MR_Word IVar0_11 = ((MR_Word) ((MR_hl_field(1, Comp0_7, 0))));
    MR_Word OVar0_12 = ((MR_Word) ((MR_hl_field(1, Comp0_7, 1))));
    MR_Word IVar_13;
    MR_Word OVar_14;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (IVar0_11)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      IVar_13 = NewVar_6;
    else
      IVar_13 = IVar0_11;
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_util_scalar_common_1[0]), ((MR_Box) (OVar0_12)), ((MR_Box) (OldVar_5)));
    if (succeeded)
      OVar_14 = NewVar_6;
    else
      OVar_14 = OVar0_12;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Comp_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IVar_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (OVar_14));
    }
  }
}

void MR_CALL 
parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Integer Var_8 = (MR_Integer) (HeadVar__3_3);

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) Var_8 - (MR_Unsigned) 1);

        *HeadVar__2_2 = (MR_Word) (Var_6);
      }
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Word) (Var_8);
      break;
  }
}

void MR_CALL 
parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Integer Var_8 = (MR_Integer) (HeadVar__2_2);

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer A_5 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_8);

        *HeadVar__3_3 = (MR_Word) (A_5);
      }
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) (Var_8);
      break;
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
  MR_Word Context_7;

  Context_7 = mercury__term_context__dummy_context_0_f_0();
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_8, SymName_4, ArgTerms_5, Context_7, Term_6);
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
    MR_Word ModuleSymName_9 = ((MR_Word) ((MR_hl_field(1, SymName_5, 0))));
    MR_String Name_10 = ((MR_String) ((MR_hl_field(1, SymName_5, 1))));
    MR_Word ModuleTerm_11;
    MR_Word UnqualifiedTerm_12;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;

    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(TypeInfo_for_T_22, ModuleSymName_9, (MR_Word) ((MR_Unsigned) 0U), Context_7, &ModuleTerm_11);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (Name_10));
    }
    {
      UnqualifiedTerm_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnqualifiedTerm_12, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, UnqualifiedTerm_12, 1) = ((MR_Box) (ArgTerms_6));
      MR_hl_field(0, UnqualifiedTerm_12, 2) = ((MR_Box) (Context_7));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (UnqualifiedTerm_12));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (ModuleTerm_11));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_2[0]));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
    }
  }
  else
  {
    MR_Word Var_20;
    MR_String Name_21 = ((MR_String) ((MR_hl_field(0, SymName_5, 0))));

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (Name_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 1) = ((MR_Box) (ArgTerms_6));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_set_default_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_util____Unify____maybe_set_default_func_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_util____Compare____maybe_set_default_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_util____Compare____maybe_set_default_func_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_util____Unify____strip_what_module_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_util____Unify____strip_what_module_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_util____Compare____strip_what_module_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_util____Compare____strip_what_module_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_util__init(void)
{
}

void mercury__parse_tree__prog_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_set_default_func_0);
  MR_register_type_ctor_info(&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_strip_what_module_names_0);
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
