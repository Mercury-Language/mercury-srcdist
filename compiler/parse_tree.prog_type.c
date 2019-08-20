/*
** Automatically generated from `prog_type.m'
** by the Mercury compiler,
** version rotd-2019-08-20
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


// :- module parse_tree.prog_type.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type__init
ENDINIT
*/

#include "parse_tree.prog_type.mih"


#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"



struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s {
  MR_bool parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
  jmp_buf parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28;
  MR_Box parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
};

struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s {
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3;
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4;
  MR_bool parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5;
};

struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s {
  MR_Word parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2;
  MR_bool parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0;
};

struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s {
  MR_Word parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2;
  MR_bool parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0;
};


static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_cat_builtin_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_cat_builtin_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_cat_builtin_0[4];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[5];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[5];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[5];

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_3[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_6[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_8[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9];

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
  MR_Word tscc_proc_2_input_1_VarX_6,
  MR_Word tscc_proc_2_input_2_TypeY_7,
  MR_Word tscc_proc_2_input_3_HeadTypeParams_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
  MR_Word tscc_proc_3_input_1_X_7,
  MR_Word tscc_proc_3_input_2_Y_8,
  MR_Word tscc_proc_3_input_3_Kind_9,
  MR_Word tscc_proc_3_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
  MR_Word tscc_proc_4_input_1_TypeY_7,
  MR_Word tscc_proc_4_input_2_VarX_8,
  MR_Word tscc_proc_4_input_3_ArgsX0_9,
  MR_Word tscc_proc_4_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * ArgsY_3,
  MR_Word HeadVar__4_4,
  MR_Word * KindY_5,
  MR_Word HeadTypeParams_6,
  MR_Word STATE_VARIABLE_Bindings_0_7,
  MR_Word * STATE_VARIABLE_Bindings_8);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
  MR_Word ArgsX_9,
  MR_Word ArgsY0_10,
  MR_Word * ArgsY_11,
  MR_Word KindY0_12,
  MR_Word * KindY_13,
  MR_Word HeadTypeParams_14,
  MR_Word STATE_VARIABLE_Bindings_0_19,
  MR_Word * STATE_VARIABLE_Bindings_20);

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
  MR_Word TypeX_4,
  MR_Word Y_5,
  MR_Word Bindings_6);

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Y_6,
  MR_Word Bindings_7);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
  MR_Word Var_7,
  MR_Word HeadVar_8,
  MR_Word Kind_9,
  MR_Word HeadTypeParams_10,
  MR_Word STATE_VARIABLE_Bindings_0_15,
  MR_Word * STATE_VARIABLE_Bindings_16);

static MR_bool MR_CALL 
parse_tree__prog_type__all_functors_are_enum_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumFunctors_0_2,
  MR_Integer * STATE_VARIABLE_NumFunctors_3);

static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_V_0_2,
  MR_Word * STATE_VARIABLE_V_3);

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[9][3];


/* sealed */ struct parse_tree__prog_type__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__prog_type__vector_common_type_5_0_s parse_tree__prog_type_vector_common_5[12];



static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_type_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "store"))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__prog_type__vector_common_type_5_0_s parse_tree__prog_type_vector_common_5[12] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
  /* row 4 */   {     (MR_String) "base_typeclass_info" },
  /* row 5 */   {     (MR_String) "type_ctor_info" },
  /* row 6 */   {     (MR_String) "type_info" },
  /* row 7 */   {     (MR_String) "typeclass_info" },
  /* row 8 */   {     (MR_String) "base_typeclass_info" },
  /* row 9 */   {     (MR_String) "type_ctor_info" },
  /* row 10 */   {     (MR_String) "type_info" },
  /* row 11 */   {     (MR_String) "typeclass_info" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
  (MR_String) "is_builtin_dummy_type_ctor",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
  (MR_String) "is_not_builtin_dummy_type_ctor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "is_builtin_dummy_type_ctor",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0 = {
  (MR_String) "type_info_cell",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1 = {
  (MR_String) "typeclass_info_cell",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0
};

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_polymorphism_cell_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "polymorphism_cell",
  {     parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0)
};

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_cat_builtin_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0 = {
  (MR_String) "cat_builtin_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_cat_builtin_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1 = {
  (MR_String) "cat_builtin_float",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2 = {
  (MR_String) "cat_builtin_char",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3 = {
  (MR_String) "cat_builtin_string",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0
};

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_cat_builtin_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_builtin",
  {     parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_cat_builtin_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_cat_builtin_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
  (MR_String) "cat_enum_mercury",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
  (MR_String) "cat_enum_foreign",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_enum",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
  (MR_String) "cat_system_type_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
  (MR_String) "cat_system_type_ctor_info",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
  (MR_String) "cat_system_typeclass_info",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
  (MR_String) "cat_system_base_typeclass_info",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_system",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
  (MR_String) "cat_user_direct_dummy",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
  (MR_String) "cat_user_abstract_dummy",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
  (MR_String) "cat_user_notag",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3 = {
  (MR_String) "cat_user_abstract_notag",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4 = {
  (MR_String) "cat_user_general",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_user",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0 = {
  (MR_String) "ctor_cat_builtin",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1 = {
  (MR_String) "ctor_cat_higher_order",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2 = {
  (MR_String) "ctor_cat_tuple",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0)
};

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3 = {
  (MR_String) "ctor_cat_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4 = {
  (MR_String) "ctor_cat_builtin_dummy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5 = {
  (MR_String) "ctor_cat_variable",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0)
};

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_6[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6 = {
  (MR_String) "ctor_cat_system",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(6),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7 = {
  (MR_String) "ctor_cat_void",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0)
};

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_8[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8 = {
  (MR_String) "ctor_cat_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(8),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8
};

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_category_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_category_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_category_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_category",
  {     parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0 },
  (MR_Integer) 9,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0
};

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_76 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_77 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_76 == CastY_77);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
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
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
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
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
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
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
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
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
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
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(HeadVar__1_1, Var_82, ArgY1_5);
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_86 = (MR_Integer) (Var_83);
                  MR_Integer Var_87 = (MR_Integer) (ArgY1_30);

                  succeeded = (Var_86 < Var_87);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_86 > Var_87);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
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
                MR_Word Var_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
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
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
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
                          MR_Word ArgY1_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                          MR_Integer Var_88 = (MR_Integer) (Var_84);
                          MR_Integer Var_89 = (MR_Integer) (ArgY1_55);

                          succeeded = (Var_88 < Var_89);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_88 > Var_89);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
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
                    }
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
                          MR_Word ArgY1_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Integer Var_90 = (MR_Integer) (Var_85);
                          MR_Integer Var_91 = (MR_Integer) (ArgY1_75);

                          succeeded = (Var_90 < Var_91);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_90 > Var_91);
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
parse_tree__prog_type____Unify____type_ctor_category_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_18 == CastX_17);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_9 == ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  succeeded = (ArgX1_15 == ArgY1_16);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                  succeeded = (ArgX1_19 == ArgY1_20);
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
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(
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
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(
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
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(
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
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
                  MR_Integer Var_16 = (MR_Integer) (Var_15);
                  MR_Integer Var_17 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_16 < Var_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_16 > Var_17);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_11, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(
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
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box X_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Xs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Y_8;
      MR_Word Ys_9;
      MR_Box Y0_10;

      succeeded = mercury__map__search_3_p_0(TypeInfo_for_T_11, TypeInfo_for_T_11, HeadVar__1_1, X_6, &Y0_10);
      if (succeeded)
        Y_8 = Y0_10;
      else
        Y_8 = X_6;
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_11, HeadVar__1_1, Xs_7, &Ys_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Y_8;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ys_9));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) ((env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28));
    parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_29;
      MR_Word Var_30;

      (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_Integer) 0);
      if ((env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1))));
      }
      (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
      if ((env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
        parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &(env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0(
  MR_Word TVarSet_9,
  MR_Word ExistQVars_10,
  MR_Word ActualArgTypes_11,
  MR_Word HeadTypeParams_12,
  MR_Word CalleeTVarSet_13,
  MR_Word PredKindMap_14,
  MR_Word PredExistQVars_15,
  MR_Word PredArgTypes_16)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s env;

    {
      MR_Word Renaming_18;
      MR_Word ParentKindMap_19;
      MR_Word ParentArgTypes_20;
      MR_Word ParentExistQVars_21;
      MR_Word ParentToActualSubst_22;
      MR_Word _TVarSet1_17;

      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_9, CalleeTVarSet_13, &_TVarSet1_17, &Renaming_18);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_18, PredKindMap_14, &ParentKindMap_19);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_18, PredArgTypes_16, &ParentArgTypes_20);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_18, PredExistQVars_15, &ParentExistQVars_21);
      if ((ExistQVars_10 == (MR_Word) ((MR_Unsigned) 0U)))
        (env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ParentArgTypes_20, ActualArgTypes_11, &ParentToActualSubst_22);
      else
      {
        MR_Word Var_31;

        Var_31 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        (env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ParentArgTypes_20, ActualArgTypes_11, HeadTypeParams_12, Var_31, &ParentToActualSubst_22);
      }
      if ((env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
      {
        if ((ParentExistQVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
          (env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
        else
        {
          parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_19, ParentToActualSubst_22, ParentExistQVars_21, &(env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
          parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(&env);
          (env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
        }
      }
      return (env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__type_list_subsumes_det_3_p_0(
  MR_Word TypesA_4,
  MR_Word TypesB_5,
  MR_Word * TypeSubst_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeSubstPrime_7;

    succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(TypesA_4, TypesB_5, &TypeSubstPrime_7);
    if (succeeded)
      *TypeSubst_6 = TypeSubstPrime_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_list_subsumes_3_p_0(
  MR_Word TypesA_4,
  MR_Word TypesB_5,
  MR_Word * TypeSubst_6)
{
  {
    MR_bool succeeded;
    MR_Word TypesBVars_7;
    MR_Word TypeSubst0_8;
    MR_Word RevTVars_13;
    MR_Word TVarsDups_14;

    parse_tree__prog_type__type_vars_list_2_3_p_0(TypesB_5, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_13);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), RevTVars_13, &TVarsDups_14);
    mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsDups_14, &TypesBVars_7);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_8);
    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(TypesA_4, TypesB_5, TypesBVars_7, TypeSubst0_8, TypeSubst_6);
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_subsumes_det_3_p_0(
  MR_Word TypeA_4,
  MR_Word TypeB_5,
  MR_Word * TypeSubst_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeSubstPrime_7;

    succeeded = parse_tree__prog_type__type_subsumes_3_p_0(TypeA_4, TypeB_5, &TypeSubstPrime_7);
    if (succeeded)
      *TypeSubst_6 = TypeSubstPrime_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type.type_subsumes_det\'/3", (MR_String) "type_subsumes failed");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_subsumes_3_p_0(
  MR_Word TypeA_4,
  MR_Word TypeB_5,
  MR_Word * TypeSubst_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeBVars_7;
    MR_Word TypeSubst0_8;
    MR_Word RevTVars_13;
    MR_Word TVarsDups_14;

    parse_tree__prog_type__type_vars_2_3_p_0(TypeB_5, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_13);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), RevTVars_13, &TVarsDups_14);
    mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsDups_14, &TypeBVars_7);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_8);
    succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeA_4, TypeB_5, TypeBVars_7, TypeSubst0_8, TypeSubst_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_unify_5_p_0(
  MR_Word tscc_proc_1_input_1_X_6,
  MR_Word tscc_proc_1_input_2_Y_7,
  MR_Word tscc_proc_1_input_3_HeadTypeParams_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  {
    MR_Word tscc_proc_2_input_1_VarX_6;
    MR_Word tscc_proc_2_input_2_TypeY_7;
    MR_Word tscc_proc_2_input_3_HeadTypeParams_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
    MR_Word tscc_proc_3_input_1_X_7;
    MR_Word tscc_proc_3_input_2_Y_8;
    MR_Word tscc_proc_3_input_3_Kind_9;
    MR_Word tscc_proc_3_input_4_HeadTypeParams_10;
    MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
    MR_Word tscc_proc_4_input_1_TypeY_7;
    MR_Word tscc_proc_4_input_2_VarX_8;
    MR_Word tscc_proc_4_input_3_ArgsX0_9;
    MR_Word tscc_proc_4_input_4_HeadTypeParams_10;
    MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

    // The code for TSCC PROC 1: pred parse_tree.prog_type.type_unify/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.prog_type.type_unify/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.prog_type.type_unify_var/5-0
    ;
    // proc 3 in TSCC: pred parse_tree.prog_type.type_unify_var_var/6-0
    ;
    // proc 4 in TSCC: pred parse_tree.prog_type.type_unify_apply/6-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word X_6 = tscc_proc_1_input_1_X_6;
      MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
      MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
      MR_Word STATE_VARIABLE_Bindings_15;
      MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
      MR_Word VarX_10;

      if (succeeded)
      {
        VarX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_6, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word VarY_12;

        succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_7, (MR_Integer) 0))));
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_Bindings_18_18;

          switch (MR_tag((MR_Word) X_6)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 0))));
                MR_Word ArgsX_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 1))));
                MR_Word ArgsY_29;
                MR_Word Var_46;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 0))));
                  ArgsY_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 1))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_26, Var_46);
                  if (succeeded)
                    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_27, ArgsY_29, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), X_6, (MR_Integer) 0))));
                MR_Word Var_47;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_7, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_31, Var_47);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ArgsX_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                    MR_Word ArgsY_45;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsY_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_44, ArgsY_45, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PorF_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word ArgsX_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
                    MR_Word ArgsY_43;
                    MR_Word Var_48;
                    MR_Word Var_49;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsY_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                      Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PorF_32 == Var_48);
                      if (succeeded)
                      {
                        succeeded = (Purity_34 == Var_49);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_42, ArgsY_43, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
          {
            STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word VarX_59;
            MR_Word ArgsX_60;

            succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarX_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
              ArgsX_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_59;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX_60;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word VarY_62;
              MR_Word ArgsY_63;

              succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                VarY_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                ArgsY_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                {
                  MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                  MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_62;
                  MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsY_63;
                  MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                  tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                  tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                  tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                  tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                  goto top_of_proc_4;
                }
              }
              else
              {
                MR_Word RawX_65;

                succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawX_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                  {
                    MR_Word RawY_67;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      RawY_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_67;
                        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                        goto top_of_proc_1;
                      }
                    }
                    else
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                }
                else
                {
                  MR_Word RawY_75;
                  MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                  MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                    next_value_of_tscc_proc_1_input_2_Y_7 = RawY_75;
                    next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
      MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
      MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
      MR_Word STATE_VARIABLE_Bindings_14;
      MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
      MR_Word VarY_10;
      MR_Word KindY_11;

      if (succeeded)
      {
        VarY_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 0))));
        KindY_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 1))));
        {
          MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
          MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
          MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
          tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
          tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
          tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
          tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
          goto top_of_proc_3;
        }
      }
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv0_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
          MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
          tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
          tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word TypeInfo_21_21;
          MR_Word TypeCtorInfo_22_22;
          MR_Word TypeInfo_20_20;

          succeeded = parse_tree__prog_type__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
            succeeded = mercury__list__member_2_p_0(TypeInfo_20_20, ((MR_Box) (VarX_6)), HeadTypeParams_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
              TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__map__det_insert_4_p_0(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word X_7 = tscc_proc_3_input_1_X_7;
      MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
      MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
      MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
      MR_Word STATE_VARIABLE_Bindings_19;
      MR_bool succeeded = MR_TRUE;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
        if (succeeded)
          succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
        else
        {
          MR_Word BindingOfX_12;
          MR_Box conv1_BindingOfX_12;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
          if (succeeded)
          {
            BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BindingOfY_13;
            MR_Box conv2_BindingOfY_13;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
            if (succeeded)
            {
              BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
              MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
              MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
              tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
              tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
              goto top_of_proc_1;
            }
            else
            {
              MR_Word SubstBindingOfX_14;
              MR_Word TypeInfo_44_44;
              MR_Word Var_42;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfX_14, (MR_Integer) 0))));
                TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_34_34;
                MR_Word TypeCtorInfo_35_35;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          else
          {
            MR_Word BindingOfY_27;
            MR_Box conv3_BindingOfY_27;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
            if (succeeded)
            {
              BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word SubstBindingOfY_16;
              MR_Word TypeInfo_45_45;
              MR_Word Var_43;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfY_16, (MR_Integer) 0))));
                TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_38_38;
                MR_Word TypeCtorInfo_39_39;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
            else
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
              if (succeeded)
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              else
              {
                MR_Word Var_25;

                {
                  Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Y_8));
                  MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Kind_9));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
      MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
      MR_Word ArgsX0_9 = tscc_proc_4_input_3_ArgsX0_9;
      MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
      MR_Word STATE_VARIABLE_Bindings_35;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) TypeY_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 0))));
            MR_Word ArgsY0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 1))));
            MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 2))));
            MR_Word ArgsY_15;
            MR_Word KindY_16;
            MR_Word STATE_VARIABLE_Bindings_50_50;
            MR_Word Var_51;
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_13, &ArgsY_15, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_50_50);
            if (succeeded)
            {
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (NameY_12));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (ArgsY_15));
                MR_hl_field(MR_mktag(1), Var_51, 2) = ((MR_Box) (KindY_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_51;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_50_50;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Bindings_45_45;
                MR_Word Var_46;
                MR_Word ArgsY0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));
                MR_Word ArgsY_55;
                MR_Word KindY_56;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_53, &ArgsY_55, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_45_45);
                if (succeeded)
                {
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (ArgsY_55));
                    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (KindY_56));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_46;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_45_45;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 3))));
                MR_Integer NArgsX0_25;
                MR_Integer NArgsY0_26;
                MR_Word ArgsY0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &NArgsX0_25);
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &NArgsY0_26);
                succeeded = (NArgsX0_25 < NArgsY0_26);
                if (succeeded)
                {
                  MR_Word Kind_28;
                  MR_Word STATE_VARIABLE_Bindings_42_42;
                  MR_Word Var_43;
                  MR_Word ArgsY_57;
                  MR_Word RevArgsX_75;
                  MR_Word RevArgsY0_76;
                  MR_Word RevArgsY_77;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &RevArgsX_75);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &RevArgsY0_76);
                  succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(RevArgsX_75, RevArgsY0_76, &RevArgsY_77, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_42_42);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgsY_77, &ArgsY_57);
                    {
                      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (VarY_23));
                      MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (ArgsY_57));
                      MR_hl_field(MR_mktag(3), Var_43, 3) = ((MR_Box) (Kind_28));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_43;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_42_42;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  succeeded = (NArgsX0_25 > NArgsY0_26);
                  if (succeeded)
                  {
                    MR_Word ArgsX_30;
                    MR_Word STATE_VARIABLE_Bindings_37_37;
                    MR_Word Var_38;
                    MR_Word Kind_59;
                    MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                    MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                    MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsY0_61, ArgsX0_9, &ArgsX_30, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_37_37);
                    if (succeeded)
                    {
                      {
                        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (VarX_8));
                        MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (ArgsX_30));
                        MR_hl_field(MR_mktag(3), Var_38, 3) = ((MR_Box) (Kind_59));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                      next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_38;
                      next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                      next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_37_37;
                      tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                      tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                      tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                      tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                      goto top_of_proc_2;
                    }
                  }
                  else
                  {
                    MR_Word STATE_VARIABLE_Bindings_40_40;
                    MR_Word Kind_58;
                    MR_Word Var_29;
                    MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                    MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                    MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                    MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_61, &Var_29, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_40_40);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                      next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                      next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                      next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                      next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_40_40;
                      tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                      tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                      tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                      tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                      tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                      goto top_of_proc_3;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX0_9;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
  MR_Word tscc_proc_2_input_1_VarX_6,
  MR_Word tscc_proc_2_input_2_TypeY_7,
  MR_Word tscc_proc_2_input_3_HeadTypeParams_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  {
    MR_Word tscc_proc_1_input_1_X_6;
    MR_Word tscc_proc_1_input_2_Y_7;
    MR_Word tscc_proc_1_input_3_HeadTypeParams_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
    MR_Word tscc_proc_3_input_1_X_7;
    MR_Word tscc_proc_3_input_2_Y_8;
    MR_Word tscc_proc_3_input_3_Kind_9;
    MR_Word tscc_proc_3_input_4_HeadTypeParams_10;
    MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
    MR_Word tscc_proc_4_input_1_TypeY_7;
    MR_Word tscc_proc_4_input_2_VarX_8;
    MR_Word tscc_proc_4_input_3_ArgsX0_9;
    MR_Word tscc_proc_4_input_4_HeadTypeParams_10;
    MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

    // The code for TSCC PROC 2: pred parse_tree.prog_type.type_unify_var/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.prog_type.type_unify/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.prog_type.type_unify_var/5-0
    ;
    // proc 3 in TSCC: pred parse_tree.prog_type.type_unify_var_var/6-0
    ;
    // proc 4 in TSCC: pred parse_tree.prog_type.type_unify_apply/6-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word X_6 = tscc_proc_1_input_1_X_6;
      MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
      MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
      MR_Word STATE_VARIABLE_Bindings_15;
      MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
      MR_Word VarX_10;

      if (succeeded)
      {
        VarX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_6, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word VarY_12;

        succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_7, (MR_Integer) 0))));
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_Bindings_18_18;

          switch (MR_tag((MR_Word) X_6)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 0))));
                MR_Word ArgsX_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 1))));
                MR_Word ArgsY_29;
                MR_Word Var_46;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 0))));
                  ArgsY_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 1))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_26, Var_46);
                  if (succeeded)
                    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_27, ArgsY_29, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), X_6, (MR_Integer) 0))));
                MR_Word Var_47;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_7, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_31, Var_47);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ArgsX_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                    MR_Word ArgsY_45;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsY_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_44, ArgsY_45, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PorF_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word ArgsX_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
                    MR_Word ArgsY_43;
                    MR_Word Var_48;
                    MR_Word Var_49;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsY_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                      Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PorF_32 == Var_48);
                      if (succeeded)
                      {
                        succeeded = (Purity_34 == Var_49);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_42, ArgsY_43, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
          {
            STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word VarX_59;
            MR_Word ArgsX_60;

            succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarX_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
              ArgsX_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_59;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX_60;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word VarY_62;
              MR_Word ArgsY_63;

              succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                VarY_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                ArgsY_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                {
                  MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                  MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_62;
                  MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsY_63;
                  MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                  tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                  tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                  tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                  tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                  goto top_of_proc_4;
                }
              }
              else
              {
                MR_Word RawX_65;

                succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawX_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                  {
                    MR_Word RawY_67;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      RawY_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_67;
                        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                        goto top_of_proc_1;
                      }
                    }
                    else
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                }
                else
                {
                  MR_Word RawY_75;
                  MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                  MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                    next_value_of_tscc_proc_1_input_2_Y_7 = RawY_75;
                    next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
      MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
      MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
      MR_Word STATE_VARIABLE_Bindings_14;
      MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
      MR_Word VarY_10;
      MR_Word KindY_11;

      if (succeeded)
      {
        VarY_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 0))));
        KindY_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 1))));
        {
          MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
          MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
          MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
          tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
          tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
          tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
          tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
          goto top_of_proc_3;
        }
      }
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv0_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
          MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
          tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
          tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word TypeInfo_21_21;
          MR_Word TypeCtorInfo_22_22;
          MR_Word TypeInfo_20_20;

          succeeded = parse_tree__prog_type__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
            succeeded = mercury__list__member_2_p_0(TypeInfo_20_20, ((MR_Box) (VarX_6)), HeadTypeParams_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
              TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__map__det_insert_4_p_0(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word X_7 = tscc_proc_3_input_1_X_7;
      MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
      MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
      MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
      MR_Word STATE_VARIABLE_Bindings_19;
      MR_bool succeeded = MR_TRUE;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
        if (succeeded)
          succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
        else
        {
          MR_Word BindingOfX_12;
          MR_Box conv1_BindingOfX_12;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
          if (succeeded)
          {
            BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BindingOfY_13;
            MR_Box conv2_BindingOfY_13;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
            if (succeeded)
            {
              BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
              MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
              MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
              tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
              tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
              goto top_of_proc_1;
            }
            else
            {
              MR_Word SubstBindingOfX_14;
              MR_Word TypeInfo_44_44;
              MR_Word Var_42;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfX_14, (MR_Integer) 0))));
                TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_34_34;
                MR_Word TypeCtorInfo_35_35;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          else
          {
            MR_Word BindingOfY_27;
            MR_Box conv3_BindingOfY_27;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
            if (succeeded)
            {
              BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word SubstBindingOfY_16;
              MR_Word TypeInfo_45_45;
              MR_Word Var_43;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfY_16, (MR_Integer) 0))));
                TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_38_38;
                MR_Word TypeCtorInfo_39_39;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
            else
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
              if (succeeded)
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              else
              {
                MR_Word Var_25;

                {
                  Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Y_8));
                  MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Kind_9));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
      MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
      MR_Word ArgsX0_9 = tscc_proc_4_input_3_ArgsX0_9;
      MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
      MR_Word STATE_VARIABLE_Bindings_35;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) TypeY_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 0))));
            MR_Word ArgsY0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 1))));
            MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 2))));
            MR_Word ArgsY_15;
            MR_Word KindY_16;
            MR_Word STATE_VARIABLE_Bindings_50_50;
            MR_Word Var_51;
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_13, &ArgsY_15, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_50_50);
            if (succeeded)
            {
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (NameY_12));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (ArgsY_15));
                MR_hl_field(MR_mktag(1), Var_51, 2) = ((MR_Box) (KindY_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_51;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_50_50;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Bindings_45_45;
                MR_Word Var_46;
                MR_Word ArgsY0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));
                MR_Word ArgsY_55;
                MR_Word KindY_56;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_53, &ArgsY_55, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_45_45);
                if (succeeded)
                {
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (ArgsY_55));
                    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (KindY_56));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_46;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_45_45;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 3))));
                MR_Integer NArgsX0_25;
                MR_Integer NArgsY0_26;
                MR_Word ArgsY0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &NArgsX0_25);
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &NArgsY0_26);
                succeeded = (NArgsX0_25 < NArgsY0_26);
                if (succeeded)
                {
                  MR_Word Kind_28;
                  MR_Word STATE_VARIABLE_Bindings_42_42;
                  MR_Word Var_43;
                  MR_Word ArgsY_57;
                  MR_Word RevArgsX_75;
                  MR_Word RevArgsY0_76;
                  MR_Word RevArgsY_77;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &RevArgsX_75);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &RevArgsY0_76);
                  succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(RevArgsX_75, RevArgsY0_76, &RevArgsY_77, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_42_42);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgsY_77, &ArgsY_57);
                    {
                      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (VarY_23));
                      MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (ArgsY_57));
                      MR_hl_field(MR_mktag(3), Var_43, 3) = ((MR_Box) (Kind_28));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_43;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_42_42;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  succeeded = (NArgsX0_25 > NArgsY0_26);
                  if (succeeded)
                  {
                    MR_Word ArgsX_30;
                    MR_Word STATE_VARIABLE_Bindings_37_37;
                    MR_Word Var_38;
                    MR_Word Kind_59;
                    MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                    MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                    MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsY0_61, ArgsX0_9, &ArgsX_30, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_37_37);
                    if (succeeded)
                    {
                      {
                        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (VarX_8));
                        MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (ArgsX_30));
                        MR_hl_field(MR_mktag(3), Var_38, 3) = ((MR_Box) (Kind_59));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                      next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_38;
                      next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                      next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_37_37;
                      tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                      tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                      tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                      tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                      goto top_of_proc_2;
                    }
                  }
                  else
                  {
                    MR_Word STATE_VARIABLE_Bindings_40_40;
                    MR_Word Kind_58;
                    MR_Word Var_29;
                    MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                    MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                    MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                    MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_61, &Var_29, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_40_40);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                      next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                      next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                      next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                      next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_40_40;
                      tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                      tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                      tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                      tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                      tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                      goto top_of_proc_3;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX0_9;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
  MR_Word tscc_proc_3_input_1_X_7,
  MR_Word tscc_proc_3_input_2_Y_8,
  MR_Word tscc_proc_3_input_3_Kind_9,
  MR_Word tscc_proc_3_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  {
    MR_Word tscc_proc_1_input_1_X_6;
    MR_Word tscc_proc_1_input_2_Y_7;
    MR_Word tscc_proc_1_input_3_HeadTypeParams_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
    MR_Word tscc_proc_2_input_1_VarX_6;
    MR_Word tscc_proc_2_input_2_TypeY_7;
    MR_Word tscc_proc_2_input_3_HeadTypeParams_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
    MR_Word tscc_proc_4_input_1_TypeY_7;
    MR_Word tscc_proc_4_input_2_VarX_8;
    MR_Word tscc_proc_4_input_3_ArgsX0_9;
    MR_Word tscc_proc_4_input_4_HeadTypeParams_10;
    MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

    // The code for TSCC PROC 3: pred parse_tree.prog_type.type_unify_var_var/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.prog_type.type_unify/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.prog_type.type_unify_var/5-0
    ;
    // proc 3 in TSCC: pred parse_tree.prog_type.type_unify_var_var/6-0
    ;
    // proc 4 in TSCC: pred parse_tree.prog_type.type_unify_apply/6-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word X_6 = tscc_proc_1_input_1_X_6;
      MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
      MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
      MR_Word STATE_VARIABLE_Bindings_15;
      MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
      MR_Word VarX_10;

      if (succeeded)
      {
        VarX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_6, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word VarY_12;

        succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_7, (MR_Integer) 0))));
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_Bindings_18_18;

          switch (MR_tag((MR_Word) X_6)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 0))));
                MR_Word ArgsX_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 1))));
                MR_Word ArgsY_29;
                MR_Word Var_46;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 0))));
                  ArgsY_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 1))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_26, Var_46);
                  if (succeeded)
                    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_27, ArgsY_29, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), X_6, (MR_Integer) 0))));
                MR_Word Var_47;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_7, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_31, Var_47);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ArgsX_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                    MR_Word ArgsY_45;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsY_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_44, ArgsY_45, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PorF_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word ArgsX_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
                    MR_Word ArgsY_43;
                    MR_Word Var_48;
                    MR_Word Var_49;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsY_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                      Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PorF_32 == Var_48);
                      if (succeeded)
                      {
                        succeeded = (Purity_34 == Var_49);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_42, ArgsY_43, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
          {
            STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word VarX_59;
            MR_Word ArgsX_60;

            succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarX_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
              ArgsX_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_59;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX_60;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word VarY_62;
              MR_Word ArgsY_63;

              succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                VarY_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                ArgsY_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                {
                  MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                  MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_62;
                  MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsY_63;
                  MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                  tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                  tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                  tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                  tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                  goto top_of_proc_4;
                }
              }
              else
              {
                MR_Word RawX_65;

                succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawX_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                  {
                    MR_Word RawY_67;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      RawY_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_67;
                        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                        goto top_of_proc_1;
                      }
                    }
                    else
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                }
                else
                {
                  MR_Word RawY_75;
                  MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                  MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                    next_value_of_tscc_proc_1_input_2_Y_7 = RawY_75;
                    next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
      MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
      MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
      MR_Word STATE_VARIABLE_Bindings_14;
      MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
      MR_Word VarY_10;
      MR_Word KindY_11;

      if (succeeded)
      {
        VarY_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 0))));
        KindY_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 1))));
        {
          MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
          MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
          MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
          tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
          tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
          tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
          tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
          goto top_of_proc_3;
        }
      }
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv0_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
          MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
          tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
          tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word TypeInfo_21_21;
          MR_Word TypeCtorInfo_22_22;
          MR_Word TypeInfo_20_20;

          succeeded = parse_tree__prog_type__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
            succeeded = mercury__list__member_2_p_0(TypeInfo_20_20, ((MR_Box) (VarX_6)), HeadTypeParams_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
              TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__map__det_insert_4_p_0(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word X_7 = tscc_proc_3_input_1_X_7;
      MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
      MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
      MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
      MR_Word STATE_VARIABLE_Bindings_19;
      MR_bool succeeded = MR_TRUE;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
        if (succeeded)
          succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
        else
        {
          MR_Word BindingOfX_12;
          MR_Box conv1_BindingOfX_12;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
          if (succeeded)
          {
            BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BindingOfY_13;
            MR_Box conv2_BindingOfY_13;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
            if (succeeded)
            {
              BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
              MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
              MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
              tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
              tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
              goto top_of_proc_1;
            }
            else
            {
              MR_Word SubstBindingOfX_14;
              MR_Word TypeInfo_44_44;
              MR_Word Var_42;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfX_14, (MR_Integer) 0))));
                TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_34_34;
                MR_Word TypeCtorInfo_35_35;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          else
          {
            MR_Word BindingOfY_27;
            MR_Box conv3_BindingOfY_27;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
            if (succeeded)
            {
              BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word SubstBindingOfY_16;
              MR_Word TypeInfo_45_45;
              MR_Word Var_43;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfY_16, (MR_Integer) 0))));
                TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_38_38;
                MR_Word TypeCtorInfo_39_39;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
            else
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
              if (succeeded)
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              else
              {
                MR_Word Var_25;

                {
                  Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Y_8));
                  MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Kind_9));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
      MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
      MR_Word ArgsX0_9 = tscc_proc_4_input_3_ArgsX0_9;
      MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
      MR_Word STATE_VARIABLE_Bindings_35;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) TypeY_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 0))));
            MR_Word ArgsY0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 1))));
            MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 2))));
            MR_Word ArgsY_15;
            MR_Word KindY_16;
            MR_Word STATE_VARIABLE_Bindings_50_50;
            MR_Word Var_51;
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_13, &ArgsY_15, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_50_50);
            if (succeeded)
            {
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (NameY_12));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (ArgsY_15));
                MR_hl_field(MR_mktag(1), Var_51, 2) = ((MR_Box) (KindY_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_51;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_50_50;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Bindings_45_45;
                MR_Word Var_46;
                MR_Word ArgsY0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));
                MR_Word ArgsY_55;
                MR_Word KindY_56;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_53, &ArgsY_55, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_45_45);
                if (succeeded)
                {
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (ArgsY_55));
                    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (KindY_56));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_46;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_45_45;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 3))));
                MR_Integer NArgsX0_25;
                MR_Integer NArgsY0_26;
                MR_Word ArgsY0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &NArgsX0_25);
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &NArgsY0_26);
                succeeded = (NArgsX0_25 < NArgsY0_26);
                if (succeeded)
                {
                  MR_Word Kind_28;
                  MR_Word STATE_VARIABLE_Bindings_42_42;
                  MR_Word Var_43;
                  MR_Word ArgsY_57;
                  MR_Word RevArgsX_75;
                  MR_Word RevArgsY0_76;
                  MR_Word RevArgsY_77;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &RevArgsX_75);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &RevArgsY0_76);
                  succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(RevArgsX_75, RevArgsY0_76, &RevArgsY_77, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_42_42);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgsY_77, &ArgsY_57);
                    {
                      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (VarY_23));
                      MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (ArgsY_57));
                      MR_hl_field(MR_mktag(3), Var_43, 3) = ((MR_Box) (Kind_28));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_43;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_42_42;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  succeeded = (NArgsX0_25 > NArgsY0_26);
                  if (succeeded)
                  {
                    MR_Word ArgsX_30;
                    MR_Word STATE_VARIABLE_Bindings_37_37;
                    MR_Word Var_38;
                    MR_Word Kind_59;
                    MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                    MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                    MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsY0_61, ArgsX0_9, &ArgsX_30, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_37_37);
                    if (succeeded)
                    {
                      {
                        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (VarX_8));
                        MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (ArgsX_30));
                        MR_hl_field(MR_mktag(3), Var_38, 3) = ((MR_Box) (Kind_59));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                      next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_38;
                      next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                      next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_37_37;
                      tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                      tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                      tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                      tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                      goto top_of_proc_2;
                    }
                  }
                  else
                  {
                    MR_Word STATE_VARIABLE_Bindings_40_40;
                    MR_Word Kind_58;
                    MR_Word Var_29;
                    MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                    MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                    MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                    MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_61, &Var_29, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_40_40);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                      next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                      next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                      next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                      next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_40_40;
                      tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                      tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                      tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                      tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                      tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                      goto top_of_proc_3;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX0_9;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
  MR_Word tscc_proc_4_input_1_TypeY_7,
  MR_Word tscc_proc_4_input_2_VarX_8,
  MR_Word tscc_proc_4_input_3_ArgsX0_9,
  MR_Word tscc_proc_4_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  {
    MR_Word tscc_proc_1_input_1_X_6;
    MR_Word tscc_proc_1_input_2_Y_7;
    MR_Word tscc_proc_1_input_3_HeadTypeParams_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
    MR_Word tscc_proc_2_input_1_VarX_6;
    MR_Word tscc_proc_2_input_2_TypeY_7;
    MR_Word tscc_proc_2_input_3_HeadTypeParams_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
    MR_Word tscc_proc_3_input_1_X_7;
    MR_Word tscc_proc_3_input_2_Y_8;
    MR_Word tscc_proc_3_input_3_Kind_9;
    MR_Word tscc_proc_3_input_4_HeadTypeParams_10;
    MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

    // The code for TSCC PROC 4: pred parse_tree.prog_type.type_unify_apply/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.prog_type.type_unify/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.prog_type.type_unify_var/5-0
    ;
    // proc 3 in TSCC: pred parse_tree.prog_type.type_unify_var_var/6-0
    ;
    // proc 4 in TSCC: pred parse_tree.prog_type.type_unify_apply/6-0
    ;
    ;
    goto top_of_proc_4;
  top_of_proc_1:;
    {
      MR_Word X_6 = tscc_proc_1_input_1_X_6;
      MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
      MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
      MR_Word STATE_VARIABLE_Bindings_15;
      MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
      MR_Word VarX_10;

      if (succeeded)
      {
        VarX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_6, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word VarY_12;

        succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_7, (MR_Integer) 0))));
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_Bindings_18_18;

          switch (MR_tag((MR_Word) X_6)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 0))));
                MR_Word ArgsX_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_6, (MR_Integer) 1))));
                MR_Word ArgsY_29;
                MR_Word Var_46;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 0))));
                  ArgsY_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_7, (MR_Integer) 1))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_26, Var_46);
                  if (succeeded)
                    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_27, ArgsY_29, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), X_6, (MR_Integer) 0))));
                MR_Word Var_47;

                succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_7, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_31, Var_47);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ArgsX_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                    MR_Word ArgsY_45;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsY_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_44, ArgsY_45, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PorF_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word ArgsX_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
                    MR_Word ArgsY_43;
                    MR_Word Var_48;
                    MR_Word Var_49;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsY_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                      Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PorF_32 == Var_48);
                      if (succeeded)
                      {
                        succeeded = (Purity_34 == Var_49);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgsX_42, ArgsY_43, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
          {
            STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word VarX_59;
            MR_Word ArgsX_60;

            succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarX_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
              ArgsX_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_59;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX_60;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word VarY_62;
              MR_Word ArgsY_63;

              succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                VarY_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                ArgsY_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 2))));
                {
                  MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                  MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_62;
                  MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsY_63;
                  MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                  tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                  tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                  tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                  tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                  goto top_of_proc_4;
                }
              }
              else
              {
                MR_Word RawX_65;

                succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawX_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), X_6, (MR_Integer) 1))));
                  {
                    MR_Word RawY_67;

                    succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      RawY_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_67;
                        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                        goto top_of_proc_1;
                      }
                    }
                    else
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_65;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                }
                else
                {
                  MR_Word RawY_75;
                  MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                  MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_7, (MR_Integer) 1))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                    next_value_of_tscc_proc_1_input_2_Y_7 = RawY_75;
                    next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
      MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
      MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
      MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
      MR_Word STATE_VARIABLE_Bindings_14;
      MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
      MR_Word VarY_10;
      MR_Word KindY_11;

      if (succeeded)
      {
        VarY_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 0))));
        KindY_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeY_7, (MR_Integer) 1))));
        {
          MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
          MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
          MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
          tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
          tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
          tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
          tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
          goto top_of_proc_3;
        }
      }
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv0_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
          MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
          tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
          tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
          goto top_of_proc_1;
        }
        else
        {
          MR_Word TypeInfo_21_21;
          MR_Word TypeCtorInfo_22_22;
          MR_Word TypeInfo_20_20;

          succeeded = parse_tree__prog_type__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
            succeeded = mercury__list__member_2_p_0(TypeInfo_20_20, ((MR_Box) (VarX_6)), HeadTypeParams_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
              TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__map__det_insert_4_p_0(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word X_7 = tscc_proc_3_input_1_X_7;
      MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
      MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
      MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
      MR_Word STATE_VARIABLE_Bindings_19;
      MR_bool succeeded = MR_TRUE;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
        if (succeeded)
          succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
        else
        {
          MR_Word BindingOfX_12;
          MR_Box conv1_BindingOfX_12;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
          if (succeeded)
          {
            BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BindingOfY_13;
            MR_Box conv2_BindingOfY_13;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
            if (succeeded)
            {
              BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
              MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
              MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
              tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
              tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
              goto top_of_proc_1;
            }
            else
            {
              MR_Word SubstBindingOfX_14;
              MR_Word TypeInfo_44_44;
              MR_Word Var_42;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfX_14, (MR_Integer) 0))));
                TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_34_34;
                MR_Word TypeCtorInfo_35_35;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          else
          {
            MR_Word BindingOfY_27;
            MR_Box conv3_BindingOfY_27;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
            if (succeeded)
            {
              BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word SubstBindingOfY_16;
              MR_Word TypeInfo_45_45;
              MR_Word Var_43;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
              succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubstBindingOfY_16, (MR_Integer) 0))));
                TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
              }
              if (succeeded)
              {
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeInfo_38_38;
                MR_Word TypeCtorInfo_39_39;

                succeeded = parse_tree__prog_type__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
                  TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                  succeeded = MR_TRUE;
                }
              }
            }
            else
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
              if (succeeded)
                STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              else
              {
                MR_Word Var_25;

                {
                  Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Y_8));
                  MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Kind_9));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
      MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
      MR_Word ArgsX0_9 = tscc_proc_4_input_3_ArgsX0_9;
      MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
      MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
      MR_Word STATE_VARIABLE_Bindings_35;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) TypeY_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 0))));
            MR_Word ArgsY0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 1))));
            MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeY_7, (MR_Integer) 2))));
            MR_Word ArgsY_15;
            MR_Word KindY_16;
            MR_Word STATE_VARIABLE_Bindings_50_50;
            MR_Word Var_51;
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_13, &ArgsY_15, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_50_50);
            if (succeeded)
            {
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (NameY_12));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (ArgsY_15));
                MR_hl_field(MR_mktag(1), Var_51, 2) = ((MR_Box) (KindY_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_51;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_50_50;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
            MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
            MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

            succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
              next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
              next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
              next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
              tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
              tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
              tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
              goto top_of_proc_2;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Bindings_45_45;
                MR_Word Var_46;
                MR_Word ArgsY0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));
                MR_Word ArgsY_55;
                MR_Word KindY_56;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_53, &ArgsY_55, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_45_45);
                if (succeeded)
                {
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (ArgsY_55));
                    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (KindY_56));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_46;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_45_45;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                succeeded = (ArgsX0_9 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 3))));
                MR_Integer NArgsX0_25;
                MR_Integer NArgsY0_26;
                MR_Word ArgsY0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 2))));

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &NArgsX0_25);
                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &NArgsY0_26);
                succeeded = (NArgsX0_25 < NArgsY0_26);
                if (succeeded)
                {
                  MR_Word Kind_28;
                  MR_Word STATE_VARIABLE_Bindings_42_42;
                  MR_Word Var_43;
                  MR_Word ArgsY_57;
                  MR_Word RevArgsX_75;
                  MR_Word RevArgsY0_76;
                  MR_Word RevArgsY_77;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX0_9, &RevArgsX_75);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_61, &RevArgsY0_76);
                  succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(RevArgsX_75, RevArgsY0_76, &RevArgsY_77, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_42_42);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgsY_77, &ArgsY_57);
                    {
                      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (VarY_23));
                      MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (ArgsY_57));
                      MR_hl_field(MR_mktag(3), Var_43, 3) = ((MR_Box) (Kind_28));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_43;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_42_42;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  succeeded = (NArgsX0_25 > NArgsY0_26);
                  if (succeeded)
                  {
                    MR_Word ArgsX_30;
                    MR_Word STATE_VARIABLE_Bindings_37_37;
                    MR_Word Var_38;
                    MR_Word Kind_59;
                    MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                    MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                    MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsY0_61, ArgsX0_9, &ArgsX_30, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_37_37);
                    if (succeeded)
                    {
                      {
                        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (VarX_8));
                        MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (ArgsX_30));
                        MR_hl_field(MR_mktag(3), Var_38, 3) = ((MR_Box) (Kind_59));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                      next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_38;
                      next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                      next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_37_37;
                      tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                      tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                      tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                      tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                      goto top_of_proc_2;
                    }
                  }
                  else
                  {
                    MR_Word STATE_VARIABLE_Bindings_40_40;
                    MR_Word Kind_58;
                    MR_Word Var_29;
                    MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                    MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                    MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                    MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                    succeeded = parse_tree__prog_type__type_unify_args_8_p_0(ArgsX0_9, ArgsY0_61, &Var_29, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_40_40);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                      next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                      next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                      next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                      next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_40_40;
                      tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                      tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                      tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                      tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                      tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                      goto top_of_proc_3;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_7, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgsX0_9 = ArgsX0_9;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgsX0_9 = next_value_of_tscc_proc_4_input_3_ArgsX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * ArgsY_3,
  MR_Word HeadVar__4_4,
  MR_Word * KindY_5,
  MR_Word HeadTypeParams_6,
  MR_Word STATE_VARIABLE_Bindings_0_7,
  MR_Word * STATE_VARIABLE_Bindings_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *ArgsY_3 = HeadVar__2_2;
      *KindY_5 = HeadVar__4_4;
      *STATE_VARIABLE_Bindings_8 = STATE_VARIABLE_Bindings_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ArgX_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgsX_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY0_17;
      MR_Word ArgsY0_18;
      MR_Word KindY1_24;
      MR_Word STATE_VARIABLE_Bindings_27_27;
      MR_Word Var_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_7;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgsY0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type__type_unify_5_p_0(ArgX_15, ArgY0_17, HeadTypeParams_6, STATE_VARIABLE_Bindings_0_7, &STATE_VARIABLE_Bindings_27_27);
        if (succeeded)
        {
          Var_28 = parse_tree__prog_data__get_type_kind_1_f_0(ArgY0_17);
          {
            KindY1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), KindY1_24, 0) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), KindY1_24, 1) = ((MR_Box) (HeadVar__4_4));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = ArgsX_16;
          next_value_of_HeadVar__2_2 = ArgsY0_18;
          next_value_of_HeadVar__4_4 = KindY1_24;
          next_value_of_STATE_VARIABLE_Bindings_0_7 = STATE_VARIABLE_Bindings_27_27;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          STATE_VARIABLE_Bindings_0_7 = next_value_of_STATE_VARIABLE_Bindings_0_7;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_unify_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Bindings_0_4,
  MR_Word * STATE_VARIABLE_Bindings_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Bindings_5 = STATE_VARIABLE_Bindings_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word X_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Y_12;
      MR_Word Ys_13;
      MR_Word STATE_VARIABLE_Bindings_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Ys_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type__type_unify_5_p_0(X_10, Y_12, HeadVar__3_3, STATE_VARIABLE_Bindings_0_4, &STATE_VARIABLE_Bindings_18_18);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Xs_11;
          next_value_of_HeadVar__2_2 = Ys_13;
          next_value_of_STATE_VARIABLE_Bindings_0_4 = STATE_VARIABLE_Bindings_18_18;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Bindings_0_4 = next_value_of_STATE_VARIABLE_Bindings_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
  MR_Word ArgsX_9,
  MR_Word ArgsY0_10,
  MR_Word * ArgsY_11,
  MR_Word KindY0_12,
  MR_Word * KindY_13,
  MR_Word HeadTypeParams_14,
  MR_Word STATE_VARIABLE_Bindings_0_19,
  MR_Word * STATE_VARIABLE_Bindings_20)
{
  {
    MR_bool succeeded;
    MR_Word RevArgsX_16;
    MR_Word RevArgsY0_17;
    MR_Word RevArgsY_18;

    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsX_9, &RevArgsX_16);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgsY0_10, &RevArgsY0_17);
    succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(RevArgsX_16, RevArgsY0_17, &RevArgsY_18, KindY0_12, KindY_13, HeadTypeParams_14, STATE_VARIABLE_Bindings_0_19, STATE_VARIABLE_Bindings_20);
    if (succeeded)
    {
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgsY_18, ArgsY_11);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
  MR_Word TypeX_4,
  MR_Word Y_5,
  MR_Word Bindings_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeX_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word X_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeX_4, (MR_Integer) 0))));

          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_5)));
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word BindingOfX_9;
            MR_Box conv1_BindingOfX_9;
            MR_Word next_value_of_TypeX_4;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Bindings_6, ((MR_Box) (X_7)), &conv1_BindingOfX_9);
            if (succeeded)
            {
              BindingOfX_9 = ((MR_Word) (conv1_BindingOfX_9));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_TypeX_4 = BindingOfX_9;
              TypeX_4 = next_value_of_TypeX_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeX_4, (MR_Integer) 1))));

          succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(Args_11, Y_5, Bindings_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeX_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_4, (MR_Integer) 1))));

              succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(Args_22, Y_5, Bindings_6);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_4, (MR_Integer) 2))));

              succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(Args_21, Y_5, Bindings_6);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_4, (MR_Integer) 1))));
              MR_Word Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_4, (MR_Integer) 2))));

              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (X_25)), ((MR_Box) (Y_5)));
              if (!(succeeded))
              {
                succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(Args_27, Y_5, Bindings_6);
                if (!(succeeded))
                {
                  MR_Word BindingOfX_23;
                  MR_Box conv0_BindingOfX_23;
                  MR_Word next_value_of_TypeX_4;

                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Bindings_6, ((MR_Box) (X_25)), &conv0_BindingOfX_23);
                  if (succeeded)
                  {
                    BindingOfX_23 = ((MR_Word) (conv0_BindingOfX_23));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeX_4 = BindingOfX_23;
                    TypeX_4 = next_value_of_TypeX_4;
                    continue;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word X_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_4, (MR_Integer) 1))));
              MR_Word next_value_of_TypeX_4 = X_28;

              // direct tailcall eliminated
              ;
              TypeX_4 = next_value_of_TypeX_4;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Y_6,
  MR_Word Bindings_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word X_4;
    MR_Word Xs_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Xs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = parse_tree__prog_type__type_occurs_3_p_0(X_4, Y_6, Bindings_7);
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Xs_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
  MR_Word Var_7,
  MR_Word HeadVar_8,
  MR_Word Kind_9,
  MR_Word HeadTypeParams_10,
  MR_Word STATE_VARIABLE_Bindings_0_15,
  MR_Word * STATE_VARIABLE_Bindings_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word BindingOfVar_12;
    MR_Box conv0_BindingOfVar_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_15, ((MR_Box) (Var_7)), &conv0_BindingOfVar_12);
    if (succeeded)
    {
      BindingOfVar_12 = ((MR_Word) (conv0_BindingOfVar_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var2_13;
      MR_Word next_value_of_Var_7;

      succeeded = ((MR_tag((MR_Word) BindingOfVar_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BindingOfVar_12, (MR_Integer) 0))));
        // direct tailcall eliminated
        ;
        next_value_of_Var_7 = Var2_13;
        Var_7 = next_value_of_Var_7;
        continue;
      }
    }
    else
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (Var_7)), ((MR_Box) (HeadVar_8)));
      if (succeeded)
      {
        *STATE_VARIABLE_Bindings_16 = STATE_VARIABLE_Bindings_0_15;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeInfo_23_23;
        MR_Word TypeCtorInfo_24_24;
        MR_Word Var_18;

        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), ((MR_Box) (Var_7)), HeadTypeParams_10);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeInfo_23_23 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[0]);
          TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (HeadVar_8));
            MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Kind_9));
          }
          mercury__map__det_insert_4_p_0(TypeInfo_23_23, TypeCtorInfo_24_24, ((MR_Box) (Var_7)), ((MR_Box) (Var_18)), STATE_VARIABLE_Bindings_0_15, STATE_VARIABLE_Bindings_16);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__du_type_is_dummy_1_p_0(
  MR_Word DuDetails_2)
{
  {
    MR_bool succeeded;
    MR_Word Ctors_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDetails_2, (MR_Integer) 0))));
    MR_Word MaybeCanonical_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDetails_2, (MR_Integer) 1))));
    MR_Word MaybeDirectArgCtors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDetails_2, (MR_Integer) 2))));
    MR_Word Ctor_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_3, (MR_Integer) 0))));
    MR_Word MaybeExistConstraints_8;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors_3, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Integer Var_13;

    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MaybeExistConstraints_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 1))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3))));
      Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 4))));
      succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Var_13 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (MaybeExistConstraints_8 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (MaybeCanonical_4 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (MaybeDirectArgCtors_5 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0(
  MR_Word DuDetails_3,
  MR_Integer * NumBits_4)
{
  {
    MR_bool succeeded;
    MR_Word OoMCtors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDetails_3, (MR_Integer) 0))));
    MR_Word Ctors_8;
    MR_Integer NumFunctors_12;
    MR_Integer Var_14;
    MR_Word Ctor_19;
    MR_Word Ctors_20;
    MR_Word MaybeExistConstraints_23;
    MR_Word Args_25;
    MR_Integer STATE_VARIABLE_NumFunctors_18_30;
    MR_Integer Var_31;

    Ctors_8 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_5);
    succeeded = (Ctors_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Ctor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_8, (MR_Integer) 0))));
      Ctors_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_8, (MR_Integer) 1))));
      succeeded = (Ctors_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_14 = (MR_Integer) 0;
        MaybeExistConstraints_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_19, (MR_Integer) 1))));
        Args_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_19, (MR_Integer) 3))));
        succeeded = (Args_25 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeExistConstraints_23 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_31 = (MR_Integer) 1;
            STATE_VARIABLE_NumFunctors_18_30 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) Var_31);
            succeeded = parse_tree__prog_type__all_functors_are_enum_3_p_0(Ctors_20, STATE_VARIABLE_NumFunctors_18_30, &NumFunctors_12);
            if (succeeded)
            {
              mercury__int__log2_2_p_0(NumFunctors_12, NumBits_4);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__all_functors_are_enum_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumFunctors_0_2,
  MR_Integer * STATE_VARIABLE_NumFunctors_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumFunctors_3 = STATE_VARIABLE_NumFunctors_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Ctor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 1))));
      MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
      MR_Integer STATE_VARIABLE_NumFunctors_18_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_NumFunctors_0_2;

      succeeded = (Args_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeExistConstraints_11 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_19 = (MR_Integer) 1;
          STATE_VARIABLE_NumFunctors_18_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumFunctors_0_2 + (MR_Unsigned) Var_19);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Ctors_8;
          next_value_of_STATE_VARIABLE_NumFunctors_0_2 = STATE_VARIABLE_NumFunctors_18_18;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_NumFunctors_0_2 = next_value_of_STATE_VARIABLE_NumFunctors_0_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__du_type_is_notag_2_p_0(
  MR_Word OoMCtors_3,
  MR_Word MaybeCanonical_4)
{
  {
    MR_bool succeeded;
    MR_Word Ctor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_3, (MR_Integer) 0))));
    MR_Word MaybeExistConstraints_7;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_3, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Var_14;

    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MaybeExistConstraints_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 1))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 3))));
      Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 4))));
      succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 1))));
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Var_14 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (MaybeExistConstraints_7 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (MaybeCanonical_4 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_constructors_are_type_info_1_p_0(
  MR_Word Ctors_2)
{
  {
    MR_bool succeeded = (Ctors_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Ctor_3;
    MR_Word MaybeExistConstraints_5;
    MR_Word FunctorName_6;
    MR_String Name_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Integer Var_13;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Ctor_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_2, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_2, (MR_Integer) 1))));
      succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeExistConstraints_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 1))));
        FunctorName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 3))));
        Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_13 == (MR_Integer) 1);
            if (succeeded)
            {
              if (((MR_tag((MR_Word) FunctorName_6)) == (MR_Integer) 1))
              {
                MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorName_6, (MR_Integer) 0))));
                MR_Word Var_17;

                Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctorName_6, (MR_Integer) 1))));
                Var_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, Var_17);
              }
              else
              {
                Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), FunctorName_6, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                // binary string simple lookup switch
                ;
                lo_0 = (MR_Integer) 0;
                hi_1 = (MR_Integer) 3;
                do
                {
                  mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                  result_3 = MR_strcmp(Name_9, ((&parse_tree__prog_type_vector_common_5[8 + mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
                  if ((result_3 == (MR_Integer) 0))
                  {
                    succeeded = MR_TRUE;
                    // jump out of search loop
                    ;
                    goto label_0;
                  }
                  else
                  if ((result_3 < (MR_Integer) 0))
                    hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                  else
                    lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
                }
                while ((lo_0 <= hi_1));
                succeeded = MR_FALSE;
              label_0:;
                if (succeeded)
                  succeeded = (MaybeExistConstraints_5 == (MR_Word) ((MR_Unsigned) 0U));
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
parse_tree__prog_type__qualify_cons_id_4_p_0(
  MR_Word Args_5,
  MR_Word ConsId0_6,
  MR_Word * ConsId_7,
  MR_Word * InstConsId_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_50;
          MR_Word PrivateBuiltin_71;
          MR_Word TypeCtor_72;
          MR_Word Var_73;

          *ConsId_7 = ConsId0_6;
          Var_50 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[2]), Args_5);
          PrivateBuiltin_71 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          TypeCtor_72 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (PrivateBuiltin_71));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *InstConsId_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_72));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_52;
          MR_Word PrivateBuiltin_63;
          MR_Word TypeCtor_64;
          MR_Word Var_65;

          *ConsId_7 = ConsId0_6;
          Var_52 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[2]), Args_5);
          PrivateBuiltin_63 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          TypeCtor_64 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (PrivateBuiltin_63));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_String) "type_info"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *InstConsId_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_64));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *ConsId_7 = ConsId0_6;
          *InstConsId_8 = *ConsId_7;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
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
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 23:
            {
              *ConsId_7 = ConsId0_6;
              *InstConsId_8 = *ConsId_7;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Name0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_6, (MR_Integer) 1))));
              MR_Integer OrigArity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_6, (MR_Integer) 2))));
              MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_6, (MR_Integer) 3))));
              MR_Word TypeModule_12;
              MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));

              succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 1);
              if (succeeded)
              {
                TypeModule_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
                {
                  MR_String UnqualName_15;
                  MR_Word Name_16;
                  MR_Word Var_54;

                  UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(Name0_9);
                  {
                    Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Name_16, 0) = ((MR_Box) (TypeModule_12));
                    MR_hl_field(MR_mktag(1), Name_16, 1) = ((MR_Box) (UnqualName_15));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *ConsId_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_16));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (OrigArity_10));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_11));
                  }
                  Var_54 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *InstConsId_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_16));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (OrigArity_10));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_54));
                  }
                }
              }
              else
              {
                MR_Word Var_55;

                *ConsId_7 = ConsId0_6;
                Var_55 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *InstConsId_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name0_9));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (OrigArity_10));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_55));
                }
              }
            }
            break;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__cell_inst_cons_id_2_f_0(
  MR_Word Which_4,
  MR_Integer Arity_5)
{
  {
    MR_Word InstConsId_6;
    MR_String Symbol_8;
    MR_Word PrivateBuiltin_9;
    MR_Word TypeCtor_10;
    MR_Word Var_11;

    if ((Which_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Symbol_8 = (MR_String) "typeclass_info";
    else
      Symbol_8 = (MR_String) "type_info";
    PrivateBuiltin_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (PrivateBuiltin_9));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Symbol_8));
    }
    {
      InstConsId_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InstConsId_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), InstConsId_6, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(3), InstConsId_6, 2) = ((MR_Box) (Arity_5));
      MR_hl_field(MR_mktag(3), InstConsId_6, 3) = ((MR_Box) (TypeCtor_10));
    }
    return InstConsId_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__cell_cons_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Ctor_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Ctor_3)));
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__make_type_ctor_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Arity_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
    MR_String Name_4;
    MR_Word Var_6;

    if (succeeded)
    {
      Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      {
        Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Name_4));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_5));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__add_new_prefix_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Module_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name0_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String Name_8;

    mercury__string__append_3_p_2((MR_String) "new ", Name0_7, &Name_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_8));
    }
  }
  else
  {
    MR_String Name0_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_4;

    mercury__string__append_3_p_2((MR_String) "new ", Name0_3, &Name_4);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_4));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__remove_new_prefix_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word Module_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Name0_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_8;

      succeeded = mercury__string__append_3_p_1((MR_String) "new ", &Name_8, Name0_7);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_8));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_String Name0_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Name_4;

      succeeded = mercury__string__append_3_p_1((MR_String) "new ", &Name_4, Name0_3);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_4));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(
  MR_Word TypeCtorCat_3)
{
  {
    MR_Word IsIntroduced_4;

    switch (MR_tag((MR_Word) TypeCtorCat_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IsIntroduced_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        IsIntroduced_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeCtorCat_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsIntroduced_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            IsIntroduced_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return IsIntroduced_4;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_ctor_1_p_0(
  MR_Word TypeCtor_2)
{
  {
    MR_bool succeeded;
    MR_Word PrivateBuiltin_3;
    MR_String Name_4;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_2, (MR_Integer) 0))));
    MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_2, (MR_Integer) 1))));
    MR_Word Var_7;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      PrivateBuiltin_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0))));
      Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1))));
      succeeded = (Var_6 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_7 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PrivateBuiltin_3, Var_7);
        if (succeeded)
        {
          // binary string simple lookup switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_4, ((&parse_tree__prog_type_vector_common_5[4 + mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_1_p_0(
  MR_Word Type_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_3;
    MR_Word PrivateBuiltin_8;
    MR_String Name_9;
    MR_Word Var_10;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word _Args_6;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_2, &TypeCtor_3, &_Args_6);
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
      Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        PrivateBuiltin_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
        Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1))));
        succeeded = (Var_11 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PrivateBuiltin_8, Var_12);
          if (succeeded)
          {
            // binary string simple lookup switch
            ;
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 3;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(Name_9, ((&parse_tree__prog_type_vector_common_5[0 + mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
              else
                lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_bitmap_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_3;
    MR_String Var_4;
    MR_String Var_5;
    MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = ((MR_tag((MR_Word) Var_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2, (MR_Integer) 0))));
      Var_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_2, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_3)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_3, (MR_Integer) 0))));
        succeeded = (strcmp(Var_4, (MR_String) "bitmap") == 0);
        if (succeeded)
        {
          succeeded = (strcmp(Var_5, (MR_String) "bitmap") == 0);
          if (succeeded)
            succeeded = (Var_6 == (MR_Integer) 0);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_array_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_3;
    MR_String Var_4;
    MR_String Var_5;
    MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = ((MR_tag((MR_Word) Var_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2, (MR_Integer) 0))));
      Var_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_2, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_3)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_3, (MR_Integer) 0))));
        succeeded = (strcmp(Var_4, (MR_String) "array") == 0);
        if (succeeded)
        {
          succeeded = (strcmp(Var_5, (MR_String) "array") == 0);
          if (succeeded)
            succeeded = (Var_6 == (MR_Integer) 1);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_io_state_1_p_0(
  MR_Word Type_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_11_11;
    MR_Word TypeCtor_3;
    MR_Word ModuleName_4;
    MR_Word Var_6;
    MR_String Var_7;
    MR_Integer Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_2, &TypeCtor_3, &Var_9);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_9)));
      if (succeeded)
      {
        ModuleName_4 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
        Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_6, (MR_Integer) 0))));
          Var_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_6, (MR_Integer) 1))));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_10);
          if (succeeded)
          {
            succeeded = (strcmp(Var_7, (MR_String) "state") == 0);
            if (succeeded)
              succeeded = (Var_8 == (MR_Integer) 0);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(
  MR_Word TypeCtor_3)
{
  {
    MR_bool succeeded;
    MR_Word IsBuiltinDummy_4;
    MR_Word CtorSymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
    MR_Integer TypeArity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
    MR_Word ModuleName_7;
    MR_String TypeName_8;
    MR_Word Var_15;

    succeeded = ((MR_tag((MR_Word) CtorSymName_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorSymName_5, (MR_Integer) 0))));
      TypeName_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), CtorSymName_5, (MR_Integer) 1))));
      Var_15 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_15);
      if (succeeded)
      {
        succeeded = (strcmp(TypeName_8, (MR_String) "state") == 0);
        if (succeeded)
          succeeded = (TypeArity_6 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      IsBuiltinDummy_4 = (MR_Integer) 0;
    else
    {
      MR_Word Var_9;
      MR_Word ModuleName_11;
      MR_String TypeName_12;
      MR_Word Var_17;

      succeeded = ((MR_tag((MR_Word) CtorSymName_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorSymName_5, (MR_Integer) 0))));
        TypeName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), CtorSymName_5, (MR_Integer) 1))));
        Var_9 = (MR_Word) (&parse_tree__prog_type_scalar_common_2[2]);
        Var_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_9);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_17);
        if (succeeded)
        {
          succeeded = (strcmp(TypeName_12, (MR_String) "store") == 0);
          if (succeeded)
            succeeded = (TypeArity_6 == (MR_Integer) 1);
        }
      }
      if (succeeded)
        IsBuiltinDummy_4 = (MR_Integer) 0;
      else
        IsBuiltinDummy_4 = (MR_Integer) 1;
    }
    return IsBuiltinDummy_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;
    MR_Word Var_4;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;

    Var_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_3, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Var_3, 1) = ((MR_Box) ((MR_String) "int"));
    }
    {
      Var_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_2, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), Var_2, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) ((MR_String) "uint"));
    }
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_String) "int8"));
    }
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_String) "uint8"));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_String) "int16"));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_String) "uint16"));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_String) "int32"));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_46 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_String) "uint32"));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_52 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_String) "int64"));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_58 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_String) "uint64"));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_String) "string"));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_70 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_String) "character"));
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_76 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_String) "float"));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_String) "pred"));
    }
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_String) "func"));
    }
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_String) "void"));
    }
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_100 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_String) "tuple"));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_13));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_7));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TVars_5;

    parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVars_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_TVars_5));
  }
}

void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0(
  MR_Word Tvars_4,
  MR_Word Constraints_5,
  MR_Word * Unconstrained_6)
{
  {
    MR_Word ConstrainedTvars_7;
    MR_Word Unconstrained0_8;
    MR_Word TVarsList_12;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scalar_common_4[8]), Constraints_5, &TVarsList_12);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsList_12, &ConstrainedTvars_7);
    mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), Tvars_4, ConstrainedTvars_7, &Unconstrained0_8);
    mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), Unconstrained0_8, Unconstrained_6);
  }
}

void MR_CALL 
parse_tree__prog_type__constraint_get_tvars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVars_5)
{
  {
    MR_Word ArgTypes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RevTVars_8;
    MR_Word TVarsDups_9;

    parse_tree__prog_type__type_vars_list_2_3_p_0(ArgTypes_4, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_8);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), RevTVars_8, &TVarsDups_9);
    mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsDups_9, TVars_5);
  }
}

static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TVars_5;

    parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVars_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_TVars_5));
  }
}

void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0(
  MR_Word Constraints_3,
  MR_Word * TVars_4)
{
  {
    MR_Word TVarsList_5;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scalar_common_4[7]), Constraints_3, &TVarsList_5);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsList_5, TVars_4);
  }
}

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TVars_5;

    parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVars_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_TVars_5));
  }
}

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TVars_5;

    parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVars_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_TVars_5));
  }
}

void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVars_5)
{
  {
    MR_Word Univ_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Exist_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word UnivTVars_6;
    MR_Word ExistTVars_7;
    MR_Word TVarsList_11;
    MR_Word TVarsList_20;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scalar_common_4[5]), Univ_3, &TVarsList_11);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsList_11, &UnivTVars_6);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scalar_common_4[6]), Exist_4, &TVarsList_20);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsList_20, &ExistTVars_7);
    mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), UnivTVars_6, ExistTVars_7, TVars_5);
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(
  MR_Word Types0_3,
  MR_Word * Types_4)
{
  {
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_type_scalar_common_4[4]), Types0_3, Types_4);
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__2_2 = HeadVar__1_1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word Args0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word Kind_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word Name_8;
          MR_Word Args_9;
          MR_String Name1_11;
          MR_Word Module_10;
          MR_Word Var_29;

          succeeded = ((MR_tag((MR_Word) Name0_5)) == (MR_Integer) 1);
          if (succeeded)
          {
            Module_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name0_5, (MR_Integer) 0))));
            Name1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), Name0_5, (MR_Integer) 1))));
            Var_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_29);
          }
          if (succeeded)
            {
              Name_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Name_8, 0) = ((MR_Box) (Name1_11));
            }
          else
            Name_8 = Name0_5;
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_type_scalar_common_4[1]), Args0_6, &Args_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_9));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_7));
          }
        }
        break;
      case (MR_Integer) 2:
        *HeadVar__2_2 = HeadVar__1_1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Kind_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Args_21;

              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_type_scalar_common_4[3]), Args0_19, &Args_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_20));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Args0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word HOInstInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word Args_18;

              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_type_scalar_common_4[2]), Args0_14, &Args_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (PorF_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_18));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_15));
                MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_16));
                MR_hl_field(MR_mktag(3), base, 5) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Args0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Kind_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word Args_25;

              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_type_scalar_common_4[0]), Args0_23, &Args_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_24));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Kind_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Type_28;

              parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type0_26, &Type_28);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_27));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_func_type_8_p_0(
  MR_Word Purity_9,
  MR_Word ArgTypes_11,
  MR_Word RetType_12,
  MR_Word ArgModes_13,
  MR_Word RetMode_14,
  MR_Word Detism_15,
  MR_Word * Type_16)
{
  {
    MR_Word PredInstInfo_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (RetMode_14));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_13, Var_20);
    {
      PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredInstInfo_17, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PredInstInfo_17, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), PredInstInfo_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredInstInfo_17, 3) = (MR_Box) ((MR_Unsigned) (Detism_15));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (RetType_12));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_11, Var_25);
    Var_27 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_17)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *Type_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_9));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_func_type_5_p_0(
  MR_Word Purity_6,
  MR_Word ArgTypes_8,
  MR_Word RetType_9,
  MR_Word * Type_10)
{
  {
    MR_Word Var_12;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (RetType_9));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_8, Var_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *Type_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_6));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_pred_type_6_p_0(
  MR_Word Purity_7,
  MR_Word ArgTypes_9,
  MR_Word ArgModes_10,
  MR_Word Detism_11,
  MR_Word * Type_12)
{
  {
    MR_Word PredInstInfo_13;
    MR_Word Var_17;

    {
      PredInstInfo_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredInstInfo_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredInstInfo_13, 1) = ((MR_Box) (ArgModes_10));
      MR_hl_field(MR_mktag(0), PredInstInfo_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredInstInfo_13, 3) = (MR_Box) ((MR_Unsigned) (Detism_11));
    }
    Var_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_13)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *Type_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgTypes_9));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_7));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(
  MR_Word Purity_5,
  MR_Word ArgTypes_7,
  MR_Word * Type_8)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *Type_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgTypes_7));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_5));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_type_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word Args_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;
    MR_Word BuiltinType_8;
    MR_String Name_7;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 1))));

    succeeded = (Var_15 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
        succeeded = parse_tree__prog_data__builtin_type_to_string_2_p_1(&BuiltinType_8, Name_7);
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Type_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (BuiltinType_8));
      }
    else
    {
      MR_Word Purity_9;
      MR_Word PredOrFunc_10;

      succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_4, &Purity_9, &PredOrFunc_10);
      if (succeeded)
        parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_9, PredOrFunc_10, Args_5, Type_6);
      else
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));
        MR_String Var_20;

        succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
          succeeded = (strcmp(Var_20, (MR_String) "{}") == 0);
        }
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_5));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_5));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_type_5_p_0(
  MR_Word Purity_6,
  MR_Word PredOrFunc_7,
  MR_Word ArgTypes_9,
  MR_Word * Type_10)
{
  switch (PredOrFunc_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTypes_11;
        MR_Word FuncRetType_12;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Box conv0_FuncRetType_12;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_9, &FuncArgTypes_11, &conv0_FuncRetType_12);
        FuncRetType_12 = ((MR_Word) (conv0_FuncRetType_12));
        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (FuncRetType_12));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncArgTypes_11, Var_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *Type_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_6));
          MR_hl_field(MR_mktag(3), base, 5) = NULL;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *Type_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgTypes_9));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_6));
          MR_hl_field(MR_mktag(3), base, 5) = NULL;
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_type__type_vars_list_2_p_0(
  MR_Word Types_3,
  MR_Word * TVars_4)
{
  {
    MR_Word RevTVars_5;
    MR_Word TVarsDups_6;

    parse_tree__prog_type__type_vars_list_2_3_p_0(Types_3, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_5);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), RevTVars_5, &TVarsDups_6);
    mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsDups_6, TVars_4);
  }
}

void MR_CALL 
parse_tree__prog_type__type_vars_2_p_0(
  MR_Word Type_3,
  MR_Word * TVars_4)
{
  {
    MR_Word RevTVars_5;
    MR_Word TVarsDups_6;

    parse_tree__prog_type__type_vars_2_3_p_0(Type_3, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_5);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), RevTVars_5, &TVarsDups_6);
    mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), TVarsDups_6, TVars_4);
  }
}

static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__2_2));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

          parse_tree__prog_type__type_vars_list_2_3_p_0(Args_8, HeadVar__2_2, HeadVar__3_3);
        }
        break;
      case (MR_Integer) 2:
        *HeadVar__3_3 = HeadVar__2_2;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              parse_tree__prog_type__type_vars_list_2_3_p_0(Args_27, HeadVar__2_2, HeadVar__3_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              parse_tree__prog_type__type_vars_list_2_3_p_0(Args_19, HeadVar__2_2, HeadVar__3_3);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Args_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_V_39_39;

              {
                STATE_VARIABLE_V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_V_39_39, 0) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_V_39_39, 1) = ((MR_Box) (HeadVar__2_2));
              }
              parse_tree__prog_type__type_vars_list_2_3_p_0(Args_34, STATE_VARIABLE_V_39_39, HeadVar__3_3);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__1_1 = Type_41;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_V_0_2,
  MR_Word * STATE_VARIABLE_V_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_V_3 = STATE_VARIABLE_V_0_2;
    else
    {
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_V_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_V_0_2;

      parse_tree__prog_type__type_vars_2_3_p_0(Type_7, STATE_VARIABLE_V_0_2, &STATE_VARIABLE_V_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_8;
      next_value_of_STATE_VARIABLE_V_0_2 = STATE_VARIABLE_V_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_V_0_2 = next_value_of_STATE_VARIABLE_V_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__prog_type__var_list_to_type_list_3_p_0(
  MR_Word KindMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Type_8;
    MR_Word Types_9;
    MR_Word Kind_13;

    parse_tree__prog_data__get_tvar_kind_3_p_0(KindMap_1, Var_6, &Kind_13);
    {
      Type_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_8, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Type_8, 1) = ((MR_Box) (Kind_13));
    }
    parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_1, Vars_7, &Types_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_type__var_to_type_3_p_0(
  MR_Word KindMap_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  {
    MR_Word Kind_7;

    parse_tree__prog_data__get_tvar_kind_3_p_0(KindMap_4, Var_5, &Kind_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Type_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Kind_7));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_list_to_var_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Type_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_5;
      MR_Word Vars_6;

      succeeded = ((MR_tag((MR_Word) Type_3)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_3, (MR_Integer) 0))));
        succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(Types_4, &Vars_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_6));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_tuple_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Var_4;

    succeeded = ((MR_tag((MR_Word) Var_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_3, (MR_Integer) 0))));
      succeeded = (strcmp(Var_4, (MR_String) "{}") == 0);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word * Purity_6,
  MR_Word * PredOrFunc_7)
{
  {
    MR_bool succeeded;
    MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
    MR_String PorFStr_12;

    if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
    {
      MR_Word ModuleSymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));
      MR_String Qualifier_13;

      PorFStr_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) ModuleSymName_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        Qualifier_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleSymName_11, (MR_Integer) 0))));
        if ((strcmp(Qualifier_13, (MR_String) "impure") == 0))
        {
          *Purity_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Qualifier_13, (MR_String) "semipure") == 0))
        {
          *Purity_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
    else
    {
      PorFStr_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_9, (MR_Integer) 0))));
      *Purity_6 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      if ((strcmp(PorFStr_12, (MR_String) "func") == 0))
      {
        *PredOrFunc_7 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PorFStr_12, (MR_String) "pred") == 0))
      {
        *PredOrFunc_7 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_to_ctor_det_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeCtor_4)
{
  {
    MR_Word _Args_5;

    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_3, TypeCtor_4, &_Args_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeCtor_4)
{
  {
    MR_bool succeeded;
    MR_Word _Args_5;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, TypeCtor_4, &_Args_5);
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(
  MR_Word Type_4,
  MR_Word * TypeCtor_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorPrime_7;
    MR_Word ArgsPrime_8;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtorPrime_7, &ArgsPrime_8);
    if (succeeded)
    {
      *TypeCtor_5 = TypeCtorPrime_7;
      *Args_6 = ArgsPrime_8;
    }
    else
    {
      MR_String Var_10;
      MR_String Var_12;

      Var_12 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Type_4)));
      Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", Var_12);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", Var_10);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_3_p_0(
  MR_Word Type_4,
  MR_Word * TypeCtor_5,
  MR_Word * Args_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_4, (MR_Integer) 0))));
          MR_Integer Arity_11;

          *Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_4, (MR_Integer) 1))));
          Arity_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *Args_6);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypeCtor_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_11));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_4, (MR_Integer) 0))));
          MR_String Name_13;
          MR_Word SymName_33;

          parse_tree__prog_data__builtin_type_to_string_2_p_0(BuiltinType_12, &Name_13);
          {
            SymName_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SymName_33, 0) = ((MR_Box) (Name_13));
          }
          *Args_6 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypeCtor_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_33));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Arity_38;

              *Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 1))));
              Arity_38 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *Args_6);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypeCtor_5 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_38));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Purity_16;
              MR_String PorFStr_18;
              MR_Word SymName0_19;
              MR_Word SymName_35;
              MR_Integer Arity_36;

              *Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 2))));
              Purity_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 4))) & (MR_Integer) 3);
              switch (PorF_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer Var_29;

                    PorFStr_18 = (MR_String) "pred";
                    Var_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *Args_6);
                    Arity_36 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    PorFStr_18 = (MR_String) "func";
                    Arity_36 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *Args_6);
                  }
                  break;
              }
              {
                SymName0_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SymName0_19, 0) = ((MR_Box) (PorFStr_18));
              }
              switch (Purity_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "impure", SymName0_19);
                  }
                  break;
                case (MR_Integer) 0:
                  SymName_35 = SymName0_19;
                  break;
                case (MR_Integer) 1:
                  {
                    SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "semipure", SymName0_19);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypeCtor_5 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_35));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_36));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 1))));
              MR_Word next_value_of_Type_4 = SubType_24;

              // direct tailcall eliminated
              ;
              Type_4 = next_value_of_Type_4;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(
  MR_Word Type_4,
  MR_Word * TypeCtor_5,
  MR_Word * TypeArgs_6)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_8;
    MR_Word TypeArgs0_10;
    MR_Word Var_24;

    Var_24 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_4);
    succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 1))) & (MR_Integer) 1);
      TypeArgs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 2))));
      {
        MR_String PredOrFuncStr_11;
        MR_Word Var_13;

        *TypeArgs_6 = TypeArgs0_10;
        PredOrFuncStr_11 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_8);
        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (PredOrFuncStr_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *TypeCtor_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Var_28;

      Var_28 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_4);
      succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        *TypeArgs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 1))));
        *TypeCtor_5 = (MR_Word) (&parse_tree__prog_type_scalar_common_1[4]);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_ground_2_p_0(
  MR_Word Type_3,
  MR_Word TSubst_4)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(Type_3, TSubst_4);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Binding_6;
      MR_Box conv0_Binding_6;

      (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4, ((MR_Box) ((env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5)), &conv0_Binding_6);
      if ((env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
      {
        Binding_6 = ((MR_Word) (conv0_Binding_6));
        (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
        (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(Binding_6, (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4);
      else
        (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
      if ((env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
        parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0) == 0)
      {
        parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3, &(env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5, parse_tree__prog_type__subst_type_is_nonground_2_p_0_2, env_ptr);
        (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0(
  MR_Word Type_3,
  MR_Word TSubst_4)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s env;

    (env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3 = Type_3;
    (env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4 = TSubst_4;
    parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(&env);
    return (env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_3;

          parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2, &Var_3, parse_tree__prog_type__type_is_nonground_1_p_0_1, env_ptr);
        }
        (env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0(
  MR_Word Type_2)
{
  {
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s env;

    (env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2 = Type_2;
    parse_tree__prog_type__type_is_nonground_1_p_0_2(&env);
    return (env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_3;

          parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2, &Var_3, parse_tree__prog_type__type_is_ground_1_p_0_1, env_ptr);
        }
        (env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0(
  MR_Word Type_2)
{
  {
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s env;

    (env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2 = Type_2;
    parse_tree__prog_type__type_is_ground_1_p_0_2(&env);
    (env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = !((env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded);
    return (env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_list_contains_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Var_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_9;
    MR_Word Var_10;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      parse_tree__prog_type__type_contains_var_2_p_0(Var_10, Var_2, cont, cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__prog_type__type_contains_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Var_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    // setup for model_non tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      case (MR_Integer) 0:
        {
          *Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          cont(cont_env_ptr);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

          parse_tree__prog_type__type_list_contains_var_2_p_0(Args_6, Var_2, cont, cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              parse_tree__prog_type__type_list_contains_var_2_p_0(Args_15, Var_2, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

              parse_tree__prog_type__type_list_contains_var_2_p_0(Args_10, Var_2, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              *Var_2 = Var_30;
              cont(cont_env_ptr);
              parse_tree__prog_type__type_list_contains_var_2_p_0(Var_29, Var_2, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__1_1 = Type_25;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_tuple_2_p_0(
  MR_Word Type_3,
  MR_Word * ArgTypes_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_6;

    Var_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_3);
    succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
      *ArgTypes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 1))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(
  MR_Word Type_6,
  MR_Word * STATE_VARIABLE_Purity_11,
  MR_Word * STATE_VARIABLE_PredOrFunc_12,
  MR_Word * STATE_VARIABLE_PredArgTypes_14)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Purity_15_15;
    MR_Word STATE_VARIABLE_PredOrFunc_16_16;
    MR_Word STATE_VARIABLE_PredArgTypes_18_18;
    MR_Word Var_31;

    Var_31 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_6);
    succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      STATE_VARIABLE_PredOrFunc_16_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 1))) & (MR_Integer) 1);
      STATE_VARIABLE_PredArgTypes_18_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 2))));
      STATE_VARIABLE_Purity_15_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 4))) & (MR_Integer) 3);
      *STATE_VARIABLE_PredArgTypes_14 = STATE_VARIABLE_PredArgTypes_18_18;
      *STATE_VARIABLE_PredOrFunc_12 = STATE_VARIABLE_PredOrFunc_16_16;
      *STATE_VARIABLE_Purity_11 = STATE_VARIABLE_Purity_15_15;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type.type_is_higher_order_details_det\'/5", (MR_String) "type is not higher-order");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_5_p_0(
  MR_Word Type_6,
  MR_Word * Purity_7,
  MR_Word * PredOrFunc_8,
  MR_Word * ArgTypes_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_12;

    Var_12 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_6);
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      *PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))) & (MR_Integer) 1);
      *ArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 2))));
      *Purity_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 4))) & (MR_Integer) 3);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_1_p_0(
  MR_Word Type_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;

    Var_8 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_2);
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonvar_1_p_0(
  MR_Word Type_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_6;

    Var_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_2);
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_var_1_p_0(
  MR_Word Type_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    Var_5 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_2);
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__strip_kind_annotation_1_f_0(
  MR_Word Type0_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Type0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word Type_4;
    MR_Word Type1_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Type1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_3, (MR_Integer) 1))));
      {
        MR_Word next_value_of_Type0_3 = Type1_5;

        // direct tailcall eliminated
        ;
        Type0_3 = next_value_of_Type0_3;
        continue;
      }
    }
    else
      Type_4 = Type0_3;
    return Type_4;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type____Unify____polymorphism_cell_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_type____Compare____polymorphism_cell_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_type____Compare____type_ctor_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__prog_type__init(void)
{
}

void mercury__parse_tree__prog_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_polymorphism_cell_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_category_0);
}

void mercury__parse_tree__prog_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type.
