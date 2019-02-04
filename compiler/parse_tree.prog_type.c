/*
** Automatically generated from `prog_type.m'
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


/* :- module parse_tree.prog_type. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_type__init
ENDINIT
*/

#include "parse_tree.prog_type.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s {
  MR_bool parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
  jmp_buf parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28;
  MR_Box parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
};

struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s {
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3;
  MR_bool parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8;
  MR_Box parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8;
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

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6];

static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1];

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

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3];

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1];

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
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
  void * parse_tree__prog_type__env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word * parse_tree__prog_type__ArgsY_3,
  MR_Word parse_tree__prog_type__HeadVar__4_4,
  MR_Word * parse_tree__prog_type__KindY_5,
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
  MR_Word parse_tree__prog_type__ArgsX_9,
  MR_Word parse_tree__prog_type__ArgsY0_10,
  MR_Word * parse_tree__prog_type__ArgsY_11,
  MR_Word parse_tree__prog_type__KindY0_12,
  MR_Word * parse_tree__prog_type__KindY_13,
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
  MR_Word parse_tree__prog_type__TypeY_7,
  MR_Word parse_tree__prog_type__VarX_8,
  MR_Word parse_tree__prog_type__ArgsX0_9,
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_35);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
  MR_Word parse_tree__prog_type__X_7,
  MR_Word parse_tree__prog_type__Y_8,
  MR_Word parse_tree__prog_type__Kind_9,
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
  MR_Word parse_tree__prog_type__VarX_6,
  MR_Word parse_tree__prog_type__TypeY_7,
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14);

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__Y_6,
  MR_Word parse_tree__prog_type__Bindings_7);

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
  MR_Word parse_tree__prog_type__TypeX_4,
  MR_Word parse_tree__prog_type__Y_5,
  MR_Word parse_tree__prog_type__Bindings_6);

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
  MR_Word parse_tree__prog_type__Var_7,
  MR_Word parse_tree__prog_type__HeadVar_8,
  MR_Word parse_tree__prog_type__Kind_9,
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16);

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_4(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_3(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_2(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3);

static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word * parse_tree__prog_type__HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[10][3];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[2][5];


/* sealed */ struct parse_tree__prog_type__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__prog_type__vector_common_type_5_0_s parse_tree__prog_type_vector_common_5[12];



static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[7][2] = {
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_type_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[3][1] = {
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

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
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
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_existq_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_constraints",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0 = {
  (MR_String) "ctor_defn",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0,
  parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_ctor_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____ctor_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____ctor_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "ctor_defn",
  {     parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
  (MR_String) "is_builtin_dummy_type_ctor",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
  (MR_String) "is_not_builtin_dummy_type_ctor",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "is_builtin_dummy_type_ctor",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0 = {
  (MR_String) "type_info_cell",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1 = {
  (MR_String) "typeclass_info_cell",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0
};

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "polymorphism_cell",
  {     parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0 = {
  (MR_String) "cat_builtin_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1 = {
  (MR_String) "cat_builtin_float",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2 = {
  (MR_String) "cat_builtin_char",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3 = {
  (MR_String) "cat_builtin_string",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_builtin",
  {     parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_cat_builtin_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_cat_builtin_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
  (MR_String) "cat_enum_mercury",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
  (MR_String) "cat_enum_foreign",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_enum",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
  (MR_String) "cat_system_type_info",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
  (MR_String) "cat_system_type_ctor_info",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
  (MR_String) "cat_system_typeclass_info",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
  (MR_String) "cat_system_base_typeclass_info",
  (MR_Integer) 3
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_system",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
  (MR_String) "cat_user_direct_dummy",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
  (MR_String) "cat_user_notag",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
  (MR_String) "cat_user_general",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_user",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0 = {
  (MR_String) "ctor_cat_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1 = {
  (MR_String) "ctor_cat_higher_order",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2 = {
  (MR_String) "ctor_cat_tuple",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3 = {
  (MR_String) "ctor_cat_enum",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4 = {
  (MR_String) "ctor_cat_builtin_dummy",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5 = {
  (MR_String) "ctor_cat_variable",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6 = {
  (MR_String) "ctor_cat_system",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7 = {
  (MR_String) "ctor_cat_void",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8 = {
  (MR_String) "ctor_cat_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 8,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 5,
    MR_SECTAG_LOCAL,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_category_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_category_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_category",
  {     parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0
};

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_76 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__CastY_77 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_76 == parse_tree__prog_type__CastY_77);
    if (parse_tree__prog_type__succeeded)
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_type__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_type__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Var_82, parse_tree__prog_type__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_type__ArgY1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__prog_type__Var_86 = (MR_Integer) parse_tree__prog_type__Var_83;
                  MR_Integer parse_tree__prog_type__Var_87 = (MR_Integer) parse_tree__prog_type__ArgY1_30;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Var_86, parse_tree__prog_type__Var_87);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_type__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__prog_type__ArgY1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer parse_tree__prog_type__Var_88 = (MR_Integer) parse_tree__prog_type__Var_84;
                          MR_Integer parse_tree__prog_type__Var_89 = (MR_Integer) parse_tree__prog_type__ArgY1_55;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Var_88, parse_tree__prog_type__Var_89);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_type__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__prog_type__ArgY1_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer parse_tree__prog_type__Var_90 = (MR_Integer) parse_tree__prog_type__Var_85;
                          MR_Integer parse_tree__prog_type__Var_91 = (MR_Integer) parse_tree__prog_type__ArgY1_75;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Var_90, parse_tree__prog_type__Var_91);
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
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
    if (parse_tree__prog_type__succeeded)
      parse_tree__prog_type__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_8 == parse_tree__prog_type__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer parse_tree__prog_type__CastX_11 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_12 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_12 == parse_tree__prog_type__CastX_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer parse_tree__prog_type__CastX_13 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_14 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_14 == parse_tree__prog_type__CastX_13);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer parse_tree__prog_type__CastX_17 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_18 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_18 == parse_tree__prog_type__CastX_17);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_type__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__ArgY1_4;

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(parse_tree__prog_type__ArgX1_3, parse_tree__prog_type__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_type__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__ArgY1_10;

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgX1_9 == parse_tree__prog_type__ArgY1_10);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_type__ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__ArgY1_16;

                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgX1_15 == parse_tree__prog_type__ArgY1_16);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_type__ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__ArgY1_20;

                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgX1_19 == parse_tree__prog_type__ArgY1_20);
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(
  MR_Word parse_tree__prog_type__HeadVar__2_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(
  MR_Word parse_tree__prog_type__HeadVar__2_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(
  MR_Word parse_tree__prog_type__HeadVar__2_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_12 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__CastY_13 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_12 == parse_tree__prog_type__CastY_13);
    if (parse_tree__prog_type__succeeded)
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_type__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_type__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__prog_type__Var_16 = (MR_Integer) parse_tree__prog_type__Var_15;
                  MR_Integer parse_tree__prog_type__Var_17 = (MR_Integer) parse_tree__prog_type__ArgY1_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Var_16, parse_tree__prog_type__Var_17);
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
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_11 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
    MR_Integer parse_tree__prog_type__CastY_12 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_11 == parse_tree__prog_type__CastY_12);
    if (parse_tree__prog_type__succeeded)
      parse_tree__prog_type__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_8 == parse_tree__prog_type__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer parse_tree__prog_type__CastX_9 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
                MR_Integer parse_tree__prog_type__CastY_10 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_10 == parse_tree__prog_type__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_type__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__ArgY1_4;

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgX1_3 == parse_tree__prog_type__ArgY1_4);
              }
          }
          break;
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__CastY_9 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_8 == parse_tree__prog_type__CastY_9);
    if (parse_tree__prog_type__succeeded)
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
      else
        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word parse_tree__prog_type__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word parse_tree__prog_type__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));

            {
              parse_tree__prog_data____Compare____type_ctor_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Var_11, parse_tree__prog_type__ArgY1_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
    MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_7 == parse_tree__prog_type__CastY_8);
    if (parse_tree__prog_type__succeeded)
      parse_tree__prog_type__succeeded = MR_TRUE;
    else
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
        MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

        parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
      }
    else
      {
        MR_Word parse_tree__prog_type__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_type__ArgY1_4;

        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
            {
              parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__prog_type__ArgX1_3, parse_tree__prog_type__ArgY1_4);
            }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(
  MR_Word parse_tree__prog_type__HeadVar__2_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0(
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
    if (parse_tree__prog_type__succeeded)
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_type__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_type__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_type__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_type__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_type__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_type__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_type__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_type__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_type__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word parse_tree__prog_type__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word parse_tree__prog_type__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word parse_tree__prog_type__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word parse_tree__prog_type__Var_16;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], &parse_tree__prog_type__Var_16, ((MR_Box) (parse_tree__prog_type__ArgX1_4)), ((MR_Box) (parse_tree__prog_type__ArgY1_5)));
        }
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_16 == (MR_Integer) 0);
        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
        if (parse_tree__prog_type__succeeded)
          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__Var_16;
        else
          {
            MR_Word parse_tree__prog_type__Var_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[1], &parse_tree__prog_type__Var_17, ((MR_Box) (parse_tree__prog_type__ArgX2_6)), ((MR_Box) (parse_tree__prog_type__ArgY2_7)));
            }
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_17 == (MR_Integer) 0);
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
            if (parse_tree__prog_type__succeeded)
              *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__Var_17;
            else
              {
                MR_Word parse_tree__prog_type__Var_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_2[0], &parse_tree__prog_type__Var_18, ((MR_Box) (parse_tree__prog_type__ArgX3_8)), ((MR_Box) (parse_tree__prog_type__ArgY3_9)));
                }
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_18 == (MR_Integer) 0);
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                if (parse_tree__prog_type__succeeded)
                  *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__Var_18;
                else
                  {
                    MR_Word parse_tree__prog_type__Var_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[4], &parse_tree__prog_type__Var_19, ((MR_Box) (parse_tree__prog_type__ArgX4_10)), ((MR_Box) (parse_tree__prog_type__ArgY4_11)));
                    }
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_19 == (MR_Integer) 0);
                    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                    if (parse_tree__prog_type__succeeded)
                      *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__Var_19;
                    else
                      {
                        MR_Word parse_tree__prog_type__Var_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[5], &parse_tree__prog_type__Var_20, ((MR_Box) (parse_tree__prog_type__ArgX5_12)), ((MR_Box) (parse_tree__prog_type__ArgY5_13)));
                        }
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_20 == (MR_Integer) 0);
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                        if (parse_tree__prog_type__succeeded)
                          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__Var_20;
                        else
                          {
                            parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__ArgX6_14, parse_tree__prog_type__ArgY6_15);
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Integer parse_tree__prog_type__CastX_15 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
    MR_Integer parse_tree__prog_type__CastY_16 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_15 == parse_tree__prog_type__CastY_16);
    if (parse_tree__prog_type__succeeded)
      parse_tree__prog_type__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_type__TypeInfo_18_18;
        MR_Word parse_tree__prog_type__TypeInfo_19_19;
        MR_Word parse_tree__prog_type__TypeInfo_20_20;
        MR_Word parse_tree__prog_type__TypeInfo_21_21;
        MR_Word parse_tree__prog_type__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_type__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_type__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_type__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_type__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_type__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_type__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__prog_type__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_type__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word parse_tree__prog_type__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word parse_tree__prog_type__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word parse_tree__prog_type__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));

        {
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], ((MR_Box) (parse_tree__prog_type__ArgX1_3)), ((MR_Box) (parse_tree__prog_type__ArgY1_4)));
        }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_type_scalar_common_1[1];
            {
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_type__ArgX2_5)), ((MR_Box) (parse_tree__prog_type__ArgY2_6)));
            }
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_type_scalar_common_2[0];
                {
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_19_19, ((MR_Box) (parse_tree__prog_type__ArgX3_7)), ((MR_Box) (parse_tree__prog_type__ArgY3_8)));
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[4];
                    {
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__ArgX4_9)), ((MR_Box) (parse_tree__prog_type__ArgY4_10)));
                    }
                    if (parse_tree__prog_type__succeeded)
                      {
                        parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
                        {
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_21_21, ((MR_Box) (parse_tree__prog_type__ArgX5_11)), ((MR_Box) (parse_tree__prog_type__ArgY5_12)));
                        }
                        if (parse_tree__prog_type__succeeded)
                          {
                            parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_type__ArgX6_13, parse_tree__prog_type__ArgY6_14);
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
  MR_Word parse_tree__prog_type__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box parse_tree__prog_type__X_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0));
        MR_Word parse_tree__prog_type__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box parse_tree__prog_type__Y_8;
        MR_Word parse_tree__prog_type__Ys_9;
        MR_Box parse_tree__prog_type__Y0_10;

        {
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__X_6, &parse_tree__prog_type__Y0_10);
        }
        if (parse_tree__prog_type__succeeded)
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__Y0_10;
        else
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__X_6;
        {
          parse_tree__prog_type__apply_partial_map_to_list_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Xs_7, &parse_tree__prog_type__Ys_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_type__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_type__Y_8;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Ys_9));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28);
    {
      parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(parse_tree__prog_type__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    {
      MR_Word parse_tree__prog_type__Var_29;
      MR_Word parse_tree__prog_type__Var_30;

      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_mktag((MR_Integer) 0)));
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
        {
          parse_tree__prog_type__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0)));
          parse_tree__prog_type__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1)));
        }
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
        {
          parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(parse_tree__prog_type__env_ptr);
        }
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3, parse_tree__prog_type__env_ptr);
          }
        }
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0(
  MR_Word parse_tree__prog_type__TVarSet_9,
  MR_Word parse_tree__prog_type__ExistQVars_10,
  MR_Word parse_tree__prog_type__ActualArgTypes_11,
  MR_Word parse_tree__prog_type__HeadTypeParams_12,
  MR_Word parse_tree__prog_type__CalleeTVarSet_13,
  MR_Word parse_tree__prog_type__PredKindMap_14,
  MR_Word parse_tree__prog_type__PredExistQVars_15,
  MR_Word parse_tree__prog_type__PredArgTypes_16)
{
  {
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s parse_tree__prog_type__env;

    {
      MR_Word parse_tree__prog_type__Renaming_18;
      MR_Word parse_tree__prog_type__ParentKindMap_19;
      MR_Word parse_tree__prog_type__ParentArgTypes_20;
      MR_Word parse_tree__prog_type__ParentExistQVars_21;
      MR_Word parse_tree__prog_type__ParentToActualSubst_22;
      MR_Word parse_tree__prog_type___TVarSet1_17;

      {
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(parse_tree__prog_type__TVarSet_9, parse_tree__prog_type__CalleeTVarSet_13, &parse_tree__prog_type___TVarSet1_17, &parse_tree__prog_type__Renaming_18);
      }
      {
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredKindMap_14, &parse_tree__prog_type__ParentKindMap_19);
      }
      {
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredArgTypes_16, &parse_tree__prog_type__ParentArgTypes_20);
      }
      {
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredExistQVars_15, &parse_tree__prog_type__ParentExistQVars_21);
      }
      if ((parse_tree__prog_type__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, &parse_tree__prog_type__ParentToActualSubst_22);
        }
      else
        {
          MR_Word parse_tree__prog_type__Var_31;

          {
            parse_tree__prog_type__Var_31 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
          {
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, parse_tree__prog_type__HeadTypeParams_12, parse_tree__prog_type__Var_31, &parse_tree__prog_type__ParentToActualSubst_22);
          }
        }
      if ((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
        {
          if ((parse_tree__prog_type__ParentExistQVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
          else
            {
              {
                parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(parse_tree__prog_type__ParentKindMap_19, parse_tree__prog_type__ParentToActualSubst_22, parse_tree__prog_type__ParentExistQVars_21, &(parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
              }
              {
                parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(&parse_tree__prog_type__env);
              }
              (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
            }
        }
      return (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__type_list_subsumes_det_3_p_0(
  MR_Word parse_tree__prog_type__TypesA_4,
  MR_Word parse_tree__prog_type__TypesB_5,
  MR_Word * parse_tree__prog_type__TypeSubst_6)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
    if (parse_tree__prog_type__succeeded)
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_list_subsumes_3_p_0(
  MR_Word parse_tree__prog_type__TypesA_4,
  MR_Word parse_tree__prog_type__TypesB_5,
  MR_Word * parse_tree__prog_type__TypeSubst_6)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
    MR_Word parse_tree__prog_type__TypesBVars_7;
    MR_Word parse_tree__prog_type__TypeSubst0_8;
    MR_Word parse_tree__prog_type__RevTVars_13;
    MR_Word parse_tree__prog_type__TVarsDups_14;

    {
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__TypesB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
    {
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
    {
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypesBVars_7);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, parse_tree__prog_type__TypesBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_subsumes_det_3_p_0(
  MR_Word parse_tree__prog_type__TypeA_4,
  MR_Word parse_tree__prog_type__TypeB_5,
  MR_Word * parse_tree__prog_type__TypeSubst_6)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
    if (parse_tree__prog_type__succeeded)
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_subsumes_det\'/3", (MR_String) "type_subsumes failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_subsumes_3_p_0(
  MR_Word parse_tree__prog_type__TypeA_4,
  MR_Word parse_tree__prog_type__TypeB_5,
  MR_Word * parse_tree__prog_type__TypeSubst_6)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
    MR_Word parse_tree__prog_type__TypeBVars_7;
    MR_Word parse_tree__prog_type__TypeSubst0_8;
    MR_Word parse_tree__prog_type__RevTVars_13;
    MR_Word parse_tree__prog_type__TVarsDups_14;

    {
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__TypeB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
    {
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
    {
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypeBVars_7);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, parse_tree__prog_type__TypeBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
    return parse_tree__prog_type__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word * parse_tree__prog_type__ArgsY_3,
  MR_Word parse_tree__prog_type__HeadVar__4_4,
  MR_Word * parse_tree__prog_type__KindY_5,
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded;

        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_type__ArgsY_3 = parse_tree__prog_type__HeadVar__2_2;
            *parse_tree__prog_type__KindY_5 = parse_tree__prog_type__HeadVar__4_4;
            *parse_tree__prog_type__STATE_VARIABLE_Bindings_8 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7;
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word parse_tree__prog_type__ArgX_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__ArgsX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_type__ArgY0_17;
            MR_Word parse_tree__prog_type__ArgsY0_18;
            MR_Word parse_tree__prog_type__KindY1_24;
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;
            MR_Word parse_tree__prog_type__Var_28;

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__ArgY0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_type__ArgsY0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
                {
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__ArgX_15, parse_tree__prog_type__ArgY0_17, parse_tree__prog_type__HeadTypeParams_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    {
                      parse_tree__prog_type__Var_28 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type__ArgY0_17);
                    }
                    {
                      parse_tree__prog_type__KindY1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 0) = ((MR_Box) (parse_tree__prog_type__Var_28));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__4_4));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__prog_type__next_value_of_HeadVar__1_1 = parse_tree__prog_type__ArgsX_16;
                      MR_Word parse_tree__prog_type__next_value_of_HeadVar__2_2 = parse_tree__prog_type__ArgsY0_18;
                      MR_Word parse_tree__prog_type__next_value_of_HeadVar__4_4 = parse_tree__prog_type__KindY1_24;
                      MR_Word parse_tree__prog_type__next_value_of_STATE_VARIABLE_Bindings_0_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7 = parse_tree__prog_type__next_value_of_STATE_VARIABLE_Bindings_0_7;
                      parse_tree__prog_type__HeadVar__4_4 = parse_tree__prog_type__next_value_of_HeadVar__4_4;
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__next_value_of_HeadVar__2_2;
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
  MR_Word parse_tree__prog_type__ArgsX_9,
  MR_Word parse_tree__prog_type__ArgsY0_10,
  MR_Word * parse_tree__prog_type__ArgsY_11,
  MR_Word parse_tree__prog_type__KindY0_12,
  MR_Word * parse_tree__prog_type__KindY_13,
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word parse_tree__prog_type__RevArgsX_16;
    MR_Word parse_tree__prog_type__RevArgsY0_17;
    MR_Word parse_tree__prog_type__RevArgsY_18;

    {
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsX_9, &parse_tree__prog_type__RevArgsX_16);
    }
    {
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsY0_10, &parse_tree__prog_type__RevArgsY0_17);
    }
    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(parse_tree__prog_type__RevArgsX_16, parse_tree__prog_type__RevArgsY0_17, &parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__KindY0_12, parse_tree__prog_type__KindY_13, parse_tree__prog_type__HeadTypeParams_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19, parse_tree__prog_type__STATE_VARIABLE_Bindings_20);
    }
    if (parse_tree__prog_type__succeeded)
      {
        {
          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__ArgsY_11);
        }
        parse_tree__prog_type__succeeded = MR_TRUE;
      }
    return parse_tree__prog_type__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
  MR_Word parse_tree__prog_type__TypeY_7,
  MR_Word parse_tree__prog_type__VarX_8,
  MR_Word parse_tree__prog_type__ArgsX0_9,
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_35)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded;

        switch (MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) {
          default:
            parse_tree__prog_type__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type__NameY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
              MR_Word parse_tree__prog_type__ArgsY0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type__KindY0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type__ArgsY_15;
              MR_Word parse_tree__prog_type__KindY_16;
              MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_50_50;
              MR_Word parse_tree__prog_type__Var_51;

              {
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_13, &parse_tree__prog_type__ArgsY_15, parse_tree__prog_type__KindY0_14, &parse_tree__prog_type__KindY_16, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34, &parse_tree__prog_type__STATE_VARIABLE_Bindings_50_50);
              }
              if (parse_tree__prog_type__succeeded)
                {
                  {
                    parse_tree__prog_type__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_51, 0) = ((MR_Box) (parse_tree__prog_type__NameY_12));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_51, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_15));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_51, 2) = ((MR_Box) (parse_tree__prog_type__KindY_16));
                  }
                  {
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__Var_51, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_50_50, parse_tree__prog_type__STATE_VARIABLE_Bindings_35);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__prog_type__succeeded)
                {
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34, parse_tree__prog_type__STATE_VARIABLE_Bindings_35);
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_45_45;
                  MR_Word parse_tree__prog_type__Var_46;
                  MR_Word parse_tree__prog_type__ArgsY0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__KindY0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_type__ArgsY_55;
                  MR_Word parse_tree__prog_type__KindY_56;

                  {
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_53, &parse_tree__prog_type__ArgsY_55, parse_tree__prog_type__KindY0_54, &parse_tree__prog_type__KindY_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34, &parse_tree__prog_type__STATE_VARIABLE_Bindings_45_45);
                  }
                  if (parse_tree__prog_type__succeeded)
                    {
                      {
                        parse_tree__prog_type__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_46, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_55));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_46, 2) = ((MR_Box) (parse_tree__prog_type__KindY_56));
                      }
                      {
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__Var_46, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_45_45, parse_tree__prog_type__STATE_VARIABLE_Bindings_35);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (parse_tree__prog_type__succeeded)
                    {
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34, parse_tree__prog_type__STATE_VARIABLE_Bindings_35);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_type__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  MR_Word parse_tree__prog_type__VarY_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Kind0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
                  MR_Integer parse_tree__prog_type__NArgsX0_25;
                  MR_Integer parse_tree__prog_type__NArgsY0_26;
                  MR_Word parse_tree__prog_type__Result_27;
                  MR_Word parse_tree__prog_type__ArgsY0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

                  {
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_63_63, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__NArgsX0_25);
                  }
                  {
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_63_63, parse_tree__prog_type__ArgsY0_61, &parse_tree__prog_type__NArgsY0_26);
                  }
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_type__Result_27, parse_tree__prog_type__NArgsX0_25, parse_tree__prog_type__NArgsY0_26);
                  }
                  switch (parse_tree__prog_type__Result_27) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__prog_type__TypeCtorInfo_22_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                        MR_Word parse_tree__prog_type__Kind_28;
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_42_42;
                        MR_Word parse_tree__prog_type__Var_43;
                        MR_Word parse_tree__prog_type__ArgsY_57;
                        MR_Word parse_tree__prog_type__RevArgsX_75;
                        MR_Word parse_tree__prog_type__RevArgsY0_76;
                        MR_Word parse_tree__prog_type__RevArgsY_77;

                        {
                          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_79, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__RevArgsX_75);
                        }
                        {
                          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_79, parse_tree__prog_type__ArgsY0_61, &parse_tree__prog_type__RevArgsY0_76);
                        }
                        {
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(parse_tree__prog_type__RevArgsX_75, parse_tree__prog_type__RevArgsY0_76, &parse_tree__prog_type__RevArgsY_77, parse_tree__prog_type__Kind0_24, &parse_tree__prog_type__Kind_28, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34, &parse_tree__prog_type__STATE_VARIABLE_Bindings_42_42);
                        }
                        if (parse_tree__prog_type__succeeded)
                          {
                            {
                              mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_79, parse_tree__prog_type__RevArgsY_77, &parse_tree__prog_type__ArgsY_57);
                            }
                            {
                              parse_tree__prog_type__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_43, 1) = ((MR_Box) (parse_tree__prog_type__VarY_23));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_43, 2) = ((MR_Box) (parse_tree__prog_type__ArgsY_57));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_43, 3) = ((MR_Box) (parse_tree__prog_type__Kind_28));
                            }
                            {
                              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__Var_43, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_42_42, parse_tree__prog_type__STATE_VARIABLE_Bindings_35);
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40;
                        MR_Word parse_tree__prog_type__Kind_58;
                        MR_Word parse_tree__prog_type__Var_29;

                        {
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_61, &parse_tree__prog_type__Var_29, parse_tree__prog_type__Kind0_24, &parse_tree__prog_type__Kind_58, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34, &parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40);
                        }
                        if (parse_tree__prog_type__succeeded)
                          {
                            parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__VarY_23, parse_tree__prog_type__Kind_58, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40, parse_tree__prog_type__STATE_VARIABLE_Bindings_35);
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word parse_tree__prog_type__ArgsX_30;
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_37_37;
                        MR_Word parse_tree__prog_type__Var_38;
                        MR_Word parse_tree__prog_type__Kind_59;

                        {
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsY0_61, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__ArgsX_30, parse_tree__prog_type__Kind0_24, &parse_tree__prog_type__Kind_59, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_34, &parse_tree__prog_type__STATE_VARIABLE_Bindings_37_37);
                        }
                        if (parse_tree__prog_type__succeeded)
                          {
                            {
                              parse_tree__prog_type__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_38, 1) = ((MR_Box) (parse_tree__prog_type__VarX_8));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_38, 2) = ((MR_Box) (parse_tree__prog_type__ArgsX_30));
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_38, 3) = ((MR_Box) (parse_tree__prog_type__Kind_59));
                            }
                            {
                              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_23, parse_tree__prog_type__Var_38, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_37_37, parse_tree__prog_type__STATE_VARIABLE_Bindings_35);
                            }
                          }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_type__RawY_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_type__next_value_of_TypeY_7 = parse_tree__prog_type__RawY_31;

                    parse_tree__prog_type__TypeY_7 = parse_tree__prog_type__next_value_of_TypeY_7;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
  MR_Word parse_tree__prog_type__X_7,
  MR_Word parse_tree__prog_type__Y_8,
  MR_Word parse_tree__prog_type__Kind_9,
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Y_8)), parse_tree__prog_type__HeadTypeParams_10);
    }
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__X_7, parse_tree__prog_type__Y_8, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
      }
    else
      {
        {
          parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), parse_tree__prog_type__HeadTypeParams_10);
        }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__Y_8, parse_tree__prog_type__X_7, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
          }
        else
          {
            MR_Word parse_tree__prog_type__BindingOfX_12;
            MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

            {
              parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_12);
            }
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
                parse_tree__prog_type__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_type__succeeded)
              {
                MR_Word parse_tree__prog_type__BindingOfY_13;
                MR_Box parse_tree__prog_type__conv1_BindingOfY_13;

                {
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv1_BindingOfY_13);
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__BindingOfY_13 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfY_13);
                    parse_tree__prog_type__succeeded = MR_TRUE;
                  }
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__BindingOfY_13, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                  }
                else
                  {
                    MR_Word parse_tree__prog_type__SubstBindingOfX_14;
                    MR_Word parse_tree__prog_type__TypeInfo_44_44;
                    MR_Word parse_tree__prog_type__Var_42;
                    MR_Word parse_tree__prog_type__Var_15;

                    {
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfX_12, &parse_tree__prog_type__SubstBindingOfX_14);
                    }
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfX_14)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_type__succeeded)
                      {
                        parse_tree__prog_type__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 0)));
                        parse_tree__prog_type__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 1)));
                        parse_tree__prog_type__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
                        {
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__Var_42)));
                        }
                      }
                    if (parse_tree__prog_type__succeeded)
                      {
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
                        parse_tree__prog_type__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word parse_tree__prog_type__TypeInfo_34_34;
                        MR_Word parse_tree__prog_type__TypeCtorInfo_35_35;

                        {
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfX_14, parse_tree__prog_type__Y_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                        if (parse_tree__prog_type__succeeded)
                          {
                            parse_tree__prog_type__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
                            parse_tree__prog_type__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                            {
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_34_34, parse_tree__prog_type__TypeCtorInfo_35_35, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfX_14)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
                            parse_tree__prog_type__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__prog_type__BindingOfY_27;
                MR_Box parse_tree__prog_type__conv2_BindingOfY_27;

                {
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv2_BindingOfY_27);
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__BindingOfY_27 = ((MR_Word) parse_tree__prog_type__conv2_BindingOfY_27);
                    parse_tree__prog_type__succeeded = MR_TRUE;
                  }
                if (parse_tree__prog_type__succeeded)
                  {
                    MR_Word parse_tree__prog_type__SubstBindingOfY_16;
                    MR_Word parse_tree__prog_type__TypeInfo_45_45;
                    MR_Word parse_tree__prog_type__Var_43;
                    MR_Word parse_tree__prog_type__Var_17;

                    {
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfY_27, &parse_tree__prog_type__SubstBindingOfY_16);
                    }
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfY_16)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_type__succeeded)
                      {
                        parse_tree__prog_type__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 0)));
                        parse_tree__prog_type__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 1)));
                        parse_tree__prog_type__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
                        {
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_45_45, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Var_43)));
                        }
                      }
                    if (parse_tree__prog_type__succeeded)
                      {
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
                        parse_tree__prog_type__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word parse_tree__prog_type__TypeInfo_38_38;
                        MR_Word parse_tree__prog_type__TypeCtorInfo_39_39;

                        {
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfY_16, parse_tree__prog_type__X_7, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                        if (parse_tree__prog_type__succeeded)
                          {
                            parse_tree__prog_type__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
                            parse_tree__prog_type__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                            {
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_38_38, parse_tree__prog_type__TypeCtorInfo_39_39, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfY_16)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
                            parse_tree__prog_type__succeeded = MR_TRUE;
                          }
                      }
                  }
                else
                  {
                    {
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_8)));
                    }
                    if (parse_tree__prog_type__succeeded)
                      *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
                    else
                      {
                        MR_Word parse_tree__prog_type__Var_25;

                        {
                          parse_tree__prog_type__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_25, 0) = ((MR_Box) (parse_tree__prog_type__Y_8));
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_25, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
                        }
                        {
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Var_25)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                        }
                      }
                    parse_tree__prog_type__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
  MR_Word parse_tree__prog_type__VarX_6,
  MR_Word parse_tree__prog_type__TypeY_7,
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14)
{
  {
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_type__VarY_10;
    MR_Word parse_tree__prog_type__KindY_11;

    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__VarY_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
        parse_tree__prog_type__KindY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
        {
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_6, parse_tree__prog_type__VarY_10, parse_tree__prog_type__KindY_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
        }
      }
    else
      {
        MR_Word parse_tree__prog_type__BindingOfX_12;
        MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

        {
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, ((MR_Box) (parse_tree__prog_type__VarX_6)), &parse_tree__prog_type__conv0_BindingOfX_12);
        }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
          }
        else
          {
            MR_Word parse_tree__prog_type__TypeInfo_21_21;
            MR_Word parse_tree__prog_type__TypeCtorInfo_22_22;
            MR_Word parse_tree__prog_type__TypeInfo_20_20;

            {
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13);
            }
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
                {
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__VarX_6)), parse_tree__prog_type__HeadTypeParams_8);
                }
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
                    parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    {
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_21_21, parse_tree__prog_type__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__prog_type__VarX_6)), ((MR_Box) (parse_tree__prog_type__TypeY_7)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
                    }
                    parse_tree__prog_type__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_unify_list_5_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word parse_tree__prog_type__HeadVar__3_3,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded;

        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__prog_type__succeeded)
              {
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_5 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4;
                parse_tree__prog_type__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word parse_tree__prog_type__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_type__Y_12;
            MR_Word parse_tree__prog_type__Ys_13;
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_type__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
                {
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__X_10, parse_tree__prog_type__Y_12, parse_tree__prog_type__HeadVar__3_3, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__prog_type__next_value_of_HeadVar__1_1 = parse_tree__prog_type__Xs_11;
                      MR_Word parse_tree__prog_type__next_value_of_HeadVar__2_2 = parse_tree__prog_type__Ys_13;
                      MR_Word parse_tree__prog_type__next_value_of_STATE_VARIABLE_Bindings_0_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4 = parse_tree__prog_type__next_value_of_STATE_VARIABLE_Bindings_0_4;
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__next_value_of_HeadVar__2_2;
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_unify_5_p_0(
  MR_Word parse_tree__prog_type__X_6,
  MR_Word parse_tree__prog_type__Y_7,
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 0)));
        MR_Word parse_tree__prog_type__VarX_10;
        MR_Word parse_tree__prog_type__Var_11;

        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 0)));
            parse_tree__prog_type__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 1)));
            {
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_10, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
            }
          }
        else
          {
            MR_Word parse_tree__prog_type__VarY_12;
            MR_Word parse_tree__prog_type__Var_13;

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__VarY_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
                parse_tree__prog_type__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
                {
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_12, parse_tree__prog_type__X_6, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
                }
              }
            else
              {
                MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

                switch (MR_tag((MR_Word) parse_tree__prog_type__X_6)) {
                  default:
                    parse_tree__prog_type__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__prog_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__X_6, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_type__ArgsX_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__X_6, (MR_Integer) 1)));
                      MR_Word parse_tree__prog_type__ArgsY_29;
                      MR_Word parse_tree__prog_type__Var_46;
                      MR_Word parse_tree__prog_type__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__X_6, (MR_Integer) 2)));
                      MR_Word parse_tree__prog_type__Var_30;

                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_type__succeeded)
                        {
                          parse_tree__prog_type__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
                          parse_tree__prog_type__ArgsY_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
                          parse_tree__prog_type__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Y_7, (MR_Integer) 2)));
                          {
                            parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__SymName_26, parse_tree__prog_type__Var_46);
                          }
                          if (parse_tree__prog_type__succeeded)
                            {
                              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_27, parse_tree__prog_type__ArgsY_29, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word parse_tree__prog_type__BuiltinType_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__X_6, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_type__Var_47;

                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 2)));
                      if (parse_tree__prog_type__succeeded)
                        {
                          parse_tree__prog_type__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
                          {
                            parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(parse_tree__prog_type__BuiltinType_31, parse_tree__prog_type__Var_47);
                          }
                          if (parse_tree__prog_type__succeeded)
                            {
                              parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14;
                              parse_tree__prog_type__succeeded = MR_TRUE;
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 0)))) {
                      default:
                        parse_tree__prog_type__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__prog_type__ArgsX_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 1)));
                          MR_Word parse_tree__prog_type__ArgsY_45;
                          MR_Word parse_tree__prog_type__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 2)));
                          MR_Word parse_tree__prog_type__Var_38;

                          parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (parse_tree__prog_type__succeeded)
                            {
                              parse_tree__prog_type__ArgsY_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
                              parse_tree__prog_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 2)));
                              {
                                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_44, parse_tree__prog_type__ArgsY_45, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                              }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__prog_type__PorF_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 1)));
                          MR_Word parse_tree__prog_type__Purity_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 4)));
                          MR_Word parse_tree__prog_type__ArgsX_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 2)));
                          MR_Word parse_tree__prog_type__ArgsY_43;
                          MR_Word parse_tree__prog_type__Var_48;
                          MR_Word parse_tree__prog_type__Var_49;
                          MR_Word parse_tree__prog_type__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 3)));
                          MR_Word parse_tree__prog_type__Var_36;

                          parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (parse_tree__prog_type__succeeded)
                            {
                              parse_tree__prog_type__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
                              parse_tree__prog_type__ArgsY_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 2)));
                              parse_tree__prog_type__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 3)));
                              parse_tree__prog_type__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 4)));
                              parse_tree__prog_type__succeeded = (parse_tree__prog_type__PorF_32 == parse_tree__prog_type__Var_48);
                              if (parse_tree__prog_type__succeeded)
                                {
                                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__Purity_34 == parse_tree__prog_type__Var_49);
                                  if (parse_tree__prog_type__succeeded)
                                    {
                                      parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
                                      if (parse_tree__prog_type__succeeded)
                                        {
                                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_42, parse_tree__prog_type__ArgsY_43, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                                        }
                                    }
                                }
                            }
                        }
                        break;
                    }
                    break;
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    *parse_tree__prog_type__STATE_VARIABLE_Bindings_15 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;
                    parse_tree__prog_type__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word parse_tree__prog_type__VarX_59;
                    MR_Word parse_tree__prog_type__ArgsX_60;
                    MR_Word parse_tree__prog_type__Var_61;

                    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (parse_tree__prog_type__succeeded)
                      {
                        parse_tree__prog_type__VarX_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 1)));
                        parse_tree__prog_type__ArgsX_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 2)));
                        parse_tree__prog_type__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 3)));
                        {
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__Y_7, parse_tree__prog_type__VarX_59, parse_tree__prog_type__ArgsX_60, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__prog_type__VarY_62;
                        MR_Word parse_tree__prog_type__ArgsY_63;
                        MR_Word parse_tree__prog_type__Var_64;

                        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (parse_tree__prog_type__succeeded)
                          {
                            parse_tree__prog_type__VarY_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
                            parse_tree__prog_type__ArgsY_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 2)));
                            parse_tree__prog_type__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 3)));
                            {
                              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__VarY_62, parse_tree__prog_type__ArgsY_63, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
                            }
                          }
                        else
                          {
                            MR_Word parse_tree__prog_type__RawX_65;
                            MR_Word parse_tree__prog_type__Var_66;

                            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
                            if (parse_tree__prog_type__succeeded)
                              {
                                parse_tree__prog_type__RawX_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 1)));
                                parse_tree__prog_type__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__X_6, (MR_Integer) 2)));
                                {
                                  MR_Word parse_tree__prog_type__RawY_67;
                                  MR_Word parse_tree__prog_type__Var_68;

                                  parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                  if (parse_tree__prog_type__succeeded)
                                    {
                                      parse_tree__prog_type__RawY_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
                                      parse_tree__prog_type__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 2)));
                                      /* direct tailcall eliminated */
                                      {
                                        MR_Word parse_tree__prog_type__next_value_of_X_6 = parse_tree__prog_type__RawX_65;
                                        MR_Word parse_tree__prog_type__next_value_of_Y_7 = parse_tree__prog_type__RawY_67;

                                        parse_tree__prog_type__Y_7 = parse_tree__prog_type__next_value_of_Y_7;
                                        parse_tree__prog_type__X_6 = parse_tree__prog_type__next_value_of_X_6;
                                      }
                                      continue;
                                    }
                                  else
                                    {
                                      /* direct tailcall eliminated */
                                      {
                                        MR_Word parse_tree__prog_type__next_value_of_X_6 = parse_tree__prog_type__RawX_65;

                                        parse_tree__prog_type__X_6 = parse_tree__prog_type__next_value_of_X_6;
                                      }
                                      continue;
                                    }
                                }
                              }
                            else
                              {
                                MR_Word parse_tree__prog_type__RawY_75;
                                MR_Word parse_tree__prog_type__Var_69;

                                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                if (parse_tree__prog_type__succeeded)
                                  {
                                    parse_tree__prog_type__RawY_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
                                    parse_tree__prog_type__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Y_7, (MR_Integer) 2)));
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word parse_tree__prog_type__next_value_of_Y_7 = parse_tree__prog_type__RawY_75;

                                      parse_tree__prog_type__Y_7 = parse_tree__prog_type__next_value_of_Y_7;
                                    }
                                    continue;
                                  }
                              }
                          }
                      }
                  }
              }
          }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__Y_6,
  MR_Word parse_tree__prog_type__Bindings_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word parse_tree__prog_type__X_4;
        MR_Word parse_tree__prog_type__Xs_5;

        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            parse_tree__prog_type__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
            {
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__X_4, parse_tree__prog_type__Y_6, parse_tree__prog_type__Bindings_7);
            }
            if (!(parse_tree__prog_type__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_type__next_value_of_HeadVar__1_1 = parse_tree__prog_type__Xs_5;

                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
  MR_Word parse_tree__prog_type__TypeX_4,
  MR_Word parse_tree__prog_type__Y_5,
  MR_Word parse_tree__prog_type__Bindings_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded;

        switch (MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) {
          default:
            parse_tree__prog_type__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_type__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
              MR_Word parse_tree__prog_type__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));

              {
                parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_5)));
              }
              if (parse_tree__prog_type__succeeded)
                parse_tree__prog_type__succeeded = MR_TRUE;
              else
                {
                  MR_Word parse_tree__prog_type__BindingOfX_9;
                  MR_Box parse_tree__prog_type__conv1_BindingOfX_9;

                  {
                    parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv1_BindingOfX_9);
                  }
                  if (parse_tree__prog_type__succeeded)
                    {
                      parse_tree__prog_type__BindingOfX_9 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfX_9);
                      parse_tree__prog_type__succeeded = MR_TRUE;
                    }
                  if (parse_tree__prog_type__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word parse_tree__prog_type__next_value_of_TypeX_4 = parse_tree__prog_type__BindingOfX_9;

                        parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__next_value_of_TypeX_4;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
              MR_Word parse_tree__prog_type__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

              {
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_11, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_type__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_22, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_type__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_type__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_type__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 4)));

                  {
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_21, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_type__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_type__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_25)), ((MR_Box) (parse_tree__prog_type__Y_5)));
                  }
                  if (!(parse_tree__prog_type__succeeded))
                    {
                      {
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_27, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                      }
                      if (!(parse_tree__prog_type__succeeded))
                        {
                          MR_Word parse_tree__prog_type__BindingOfX_23;
                          MR_Box parse_tree__prog_type__conv0_BindingOfX_23;

                          {
                            parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_25)), &parse_tree__prog_type__conv0_BindingOfX_23);
                          }
                          if (parse_tree__prog_type__succeeded)
                            {
                              parse_tree__prog_type__BindingOfX_23 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_23);
                              parse_tree__prog_type__succeeded = MR_TRUE;
                            }
                          if (parse_tree__prog_type__succeeded)
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word parse_tree__prog_type__next_value_of_TypeX_4 = parse_tree__prog_type__BindingOfX_23;

                                parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__next_value_of_TypeX_4;
                              }
                              continue;
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_type__X_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_type__next_value_of_TypeX_4 = parse_tree__prog_type__X_28;

                    parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__next_value_of_TypeX_4;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
  MR_Word parse_tree__prog_type__Var_7,
  MR_Word parse_tree__prog_type__HeadVar_8,
  MR_Word parse_tree__prog_type__Kind_9,
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded;
        MR_Word parse_tree__prog_type__BindingOfVar_12;
        MR_Box parse_tree__prog_type__conv0_BindingOfVar_12;

        {
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, ((MR_Box) (parse_tree__prog_type__Var_7)), &parse_tree__prog_type__conv0_BindingOfVar_12);
        }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__BindingOfVar_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfVar_12);
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
        if (parse_tree__prog_type__succeeded)
          {
            MR_Word parse_tree__prog_type__Var2_13;
            MR_Word parse_tree__prog_type__Var_14;

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__BindingOfVar_12)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 0)));
                parse_tree__prog_type__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_type__next_value_of_Var_7 = parse_tree__prog_type__Var2_13;

                  parse_tree__prog_type__Var_7 = parse_tree__prog_type__next_value_of_Var_7;
                }
                continue;
              }
          }
        else
          {
            {
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__HeadVar_8)));
            }
            if (parse_tree__prog_type__succeeded)
              {
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_16 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15;
                parse_tree__prog_type__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word parse_tree__prog_type__TypeInfo_23_23;
                MR_Word parse_tree__prog_type__TypeCtorInfo_24_24;
                MR_Word parse_tree__prog_type__Var_18;

                {
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), parse_tree__prog_type__HeadTypeParams_10);
                }
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
                    parse_tree__prog_type__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    {
                      parse_tree__prog_type__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_18, 0) = ((MR_Box) (parse_tree__prog_type__HeadVar_8));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_18, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
                    }
                    {
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_23_23, parse_tree__prog_type__TypeCtorInfo_24_24, ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__Var_18)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, parse_tree__prog_type__STATE_VARIABLE_Bindings_16);
                    }
                    parse_tree__prog_type__succeeded = MR_TRUE;
                  }
              }
          }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(
  MR_Word parse_tree__prog_type__Globals_9,
  MR_Word parse_tree__prog_type___TypeCtor_10,
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
  MR_Word parse_tree__prog_type__Ctors_12,
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
  MR_Word * parse_tree__prog_type__SingleArgType_15,
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(parse_tree__prog_type__Globals_9, parse_tree__prog_type__ReserveTagPragma_11, parse_tree__prog_type__Ctors_12, parse_tree__prog_type__MaybeUserEqCmp_13, parse_tree__prog_type__SingleFunctorName_14, parse_tree__prog_type__SingleArgType_15, parse_tree__prog_type__MaybeSingleArgName_16);
    }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(
  MR_Word parse_tree__prog_type__Globals_9,
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
  MR_Word parse_tree__prog_type__Ctors_12,
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
  MR_Word * parse_tree__prog_type__SingleArgType_15,
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
{
  {
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__ReserveTagPragma_11 == (MR_Integer) 1);
    MR_Word parse_tree__prog_type__MaybeCtorFieldName_17;
    MR_Word parse_tree__prog_type__Var_20;
    MR_Word parse_tree__prog_type__Var_21;
    MR_Word parse_tree__prog_type__SingleCtor_29;
    MR_Word parse_tree__prog_type__ExistQVars_30;
    MR_Word parse_tree__prog_type__Var_35;
    MR_Word parse_tree__prog_type__Var_36;
    MR_Word parse_tree__prog_type__Var_37;
    MR_Word parse_tree__prog_type__Var_38;
    MR_Integer parse_tree__prog_type__Var_39;
    MR_Word parse_tree__prog_type___Constraints_31;
    MR_Word parse_tree__prog_type___Ctxt_34;
    MR_String parse_tree__prog_type__Var_22;
    MR_Word parse_tree__prog_type__Var_32;
    MR_Word parse_tree__prog_type__Var_33;

    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_20 = (MR_Integer) 256;
        parse_tree__prog_type__Var_21 = (MR_Integer) 1;
        {
          parse_tree__prog_type__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__prog_type__Globals_9, parse_tree__prog_type__Var_20, parse_tree__prog_type__Var_21);
        }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__MaybeUserEqCmp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_12)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__SingleCtor_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 0)));
                    parse_tree__prog_type__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 1)));
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__prog_type__succeeded)
                      {
                        parse_tree__prog_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 0)));
                        parse_tree__prog_type___Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 1)));
                        *parse_tree__prog_type__SingleFunctorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 2)));
                        parse_tree__prog_type__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 3)));
                        parse_tree__prog_type__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 4)));
                        parse_tree__prog_type___Ctxt_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 5)));
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_39 == (MR_Integer) 1);
                        if (parse_tree__prog_type__succeeded)
                          {
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__prog_type__succeeded)
                              {
                                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_type__SingleFunctorName_14)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_type__succeeded)
                                  {
                                    parse_tree__prog_type__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__prog_type__SingleFunctorName_14, (MR_Integer) 0)));
                                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_22, (MR_String) "{}") == 0);
                                  }
                                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
                                if (parse_tree__prog_type__succeeded)
                                  {
                                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_36)) == (MR_mktag((MR_Integer) 1)));
                                    if (parse_tree__prog_type__succeeded)
                                      {
                                        parse_tree__prog_type__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_36, (MR_Integer) 0)));
                                        parse_tree__prog_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_36, (MR_Integer) 1)));
                                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__prog_type__succeeded)
                                          {
                                            parse_tree__prog_type__MaybeCtorFieldName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_37, (MR_Integer) 0)));
                                            *parse_tree__prog_type__SingleArgType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_37, (MR_Integer) 1)));
                                            parse_tree__prog_type__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_37, (MR_Integer) 2)));
                                            parse_tree__prog_type__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_37, (MR_Integer) 3)));
                                            if ((parse_tree__prog_type__MaybeCtorFieldName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              *parse_tree__prog_type__MaybeSingleArgName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            else
                                              {
                                                MR_Word parse_tree__prog_type__SymName_18;
                                                MR_Word parse_tree__prog_type__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeCtorFieldName_17, (MR_Integer) 0)));
                                                MR_String parse_tree__prog_type__Var_24;
                                                MR_Word parse_tree__prog_type__Var_19;

                                                parse_tree__prog_type__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_23, (MR_Integer) 0)));
                                                parse_tree__prog_type__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_23, (MR_Integer) 1)));
                                                {
                                                  parse_tree__prog_type__Var_24 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__SymName_18);
                                                }
                                                {
                                                  MR_Word base;
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                  *parse_tree__prog_type__MaybeSingleArgName_16 = base;
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_24));
                                                }
                                              }
                                            parse_tree__prog_type__succeeded = MR_TRUE;
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
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8);
    {
      parse_tree__prog_type__du_type_is_enum_2_p_0_2(parse_tree__prog_type__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    {
      MR_Word parse_tree__prog_type__ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 0)));
      MR_Word parse_tree__prog_type__ExistConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 1)));
      MR_Word parse_tree__prog_type__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 3)));
      MR_Word parse_tree__prog_type___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 2)));
      MR_Integer parse_tree__prog_type___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 4)));
      MR_Word parse_tree__prog_type___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 5)));

      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistQTVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
        {
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistConstraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
            (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
        {
          parse_tree__prog_type__du_type_is_enum_2_p_0_1(parse_tree__prog_type__env_ptr);
        }
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, parse_tree__prog_type__du_type_is_enum_2_p_0_3, parse_tree__prog_type__env_ptr);
          }
        }
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0(
  MR_Word parse_tree__prog_type__Ctors_3,
  MR_Integer * parse_tree__prog_type__NumBits_4)
{
  {
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s parse_tree__prog_type__env;

    (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3 = parse_tree__prog_type__Ctors_3;
    {
      MR_Word parse_tree__prog_type__TypeCtorInfo_18_18;
      MR_Integer parse_tree__prog_type__NumFunctors_15;
      MR_Word parse_tree__prog_type__Var_16;
      MR_Word parse_tree__prog_type__Var_5;
      MR_Word parse_tree__prog_type__Var_6;
      MR_Word parse_tree__prog_type__Var_7;

      (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3)) == (MR_mktag((MR_Integer) 1)));
      if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
        {
          parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 0)));
          parse_tree__prog_type__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 1)));
          (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_16)) == (MR_mktag((MR_Integer) 1)));
          if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
            {
              parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_16, (MR_Integer) 0)));
              parse_tree__prog_type__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_16, (MR_Integer) 1)));
              {
                parse_tree__prog_type__du_type_is_enum_2_p_0_4(&parse_tree__prog_type__env);
              }
              (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
              if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
                {
                  parse_tree__prog_type__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                  {
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_18_18, (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, &parse_tree__prog_type__NumFunctors_15);
                  }
                  {
                    mercury__int__log2_2_p_0(parse_tree__prog_type__NumFunctors_15, parse_tree__prog_type__NumBits_4);
                  }
                  (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
                }
            }
        }
      return (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_constructors_are_type_info_1_p_0(
  MR_Word parse_tree__prog_type__Ctors_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__prog_type__Ctor_3;
    MR_Word parse_tree__prog_type__SingleCtor_10;
    MR_Word parse_tree__prog_type__ExistQVars_11;
    MR_Word parse_tree__prog_type__Var_16;
    MR_Word parse_tree__prog_type__Var_17;
    MR_Word parse_tree__prog_type__Var_19;
    MR_Integer parse_tree__prog_type__Var_20;
    MR_String parse_tree__prog_type__Name_22;
    MR_Word parse_tree__prog_type___Constraints_12;
    MR_Word parse_tree__prog_type___Ctxt_15;
    MR_Word parse_tree__prog_type__Var_18;
    MR_Integer parse_tree__prog_type__lo_0;
    MR_Integer parse_tree__prog_type__hi_1;
    MR_Integer parse_tree__prog_type__mid_2;
    MR_Integer parse_tree__prog_type__result_3;

    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__SingleCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 0)));
        parse_tree__prog_type__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 1)));
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__ExistQVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 0)));
            parse_tree__prog_type___Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 1)));
            parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 2)));
            parse_tree__prog_type__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 3)));
            parse_tree__prog_type__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 4)));
            parse_tree__prog_type___Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 5)));
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_17, (MR_Integer) 0)));
                parse_tree__prog_type__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_17, (MR_Integer) 1)));
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_20 == (MR_Integer) 1);
                    if (parse_tree__prog_type__succeeded)
                      {
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_type__succeeded)
                          {
                            if (((MR_tag((MR_Word) parse_tree__prog_type__Ctor_3)) == (MR_mktag((MR_Integer) 1))))
                              {
                                MR_Word parse_tree__prog_type__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
                                MR_Word parse_tree__prog_type__Var_26;

                                parse_tree__prog_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 1)));
                                {
                                  parse_tree__prog_type__Var_26 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                                }
                                {
                                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_24, parse_tree__prog_type__Var_26);
                                }
                              }
                            else
                              {
                                parse_tree__prog_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
                                parse_tree__prog_type__succeeded = MR_TRUE;
                              }
                            if (parse_tree__prog_type__succeeded)
                              {
                                /* binary string simple lookup switch */
                                parse_tree__prog_type__lo_0 = (MR_Integer) 0;
                                parse_tree__prog_type__hi_1 = (MR_Integer) 3;
                                do
                                  {
                                    parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
                                    parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_22, ((&parse_tree__prog_type_vector_common_5[8 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
                                    if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
                                      {
                                        parse_tree__prog_type__succeeded = MR_TRUE;
                                        /* jump out of search loop */
                                        goto label_0;
                                      }
                                    else
                                    if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
                                      parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
                                    else
                                      parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
                                  }
                                while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
                                parse_tree__prog_type__succeeded = MR_FALSE;
                              label_0:;
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__qualify_cons_id_4_p_0(
  MR_Word parse_tree__prog_type__Args_5,
  MR_Word parse_tree__prog_type__ConsId0_6,
  MR_Word * parse_tree__prog_type__ConsId_7,
  MR_Word * parse_tree__prog_type__InstConsId_8)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer parse_tree__prog_type__Var_48;
          MR_Word parse_tree__prog_type__PrivateBuiltin_69;
          MR_Word parse_tree__prog_type__TypeCtor_70;
          MR_Word parse_tree__prog_type__Var_71;

          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
          {
            parse_tree__prog_type__Var_48 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
          {
            parse_tree__prog_type__PrivateBuiltin_69 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            parse_tree__prog_type__TypeCtor_70 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
          {
            parse_tree__prog_type__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_71, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_69));
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_71, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_type__InstConsId_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_71));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Var_48));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_70));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer parse_tree__prog_type__Var_50;
          MR_Word parse_tree__prog_type__PrivateBuiltin_61;
          MR_Word parse_tree__prog_type__TypeCtor_62;
          MR_Word parse_tree__prog_type__Var_63;

          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
          {
            parse_tree__prog_type__Var_50 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
          {
            parse_tree__prog_type__PrivateBuiltin_61 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            parse_tree__prog_type__TypeCtor_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
          {
            parse_tree__prog_type__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_63, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_61));
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_63, 1) = ((MR_Box) ((MR_String) "type_info"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_type__InstConsId_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_63));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Var_50));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_62));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
          *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 0)))) {
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
            {
              *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
              *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_type__Name0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_type__OrigArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 3)));
              MR_Word parse_tree__prog_type__TypeModule_12;
              MR_Word parse_tree__prog_type__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_type__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 1)));
              MR_String parse_tree__prog_type__Var_13;

              parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_51)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_type__succeeded)
                {
                  parse_tree__prog_type__TypeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_51, (MR_Integer) 0)));
                  parse_tree__prog_type__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_51, (MR_Integer) 1)));
                  {
                    MR_String parse_tree__prog_type__UnqualName_15;
                    MR_Word parse_tree__prog_type__Name_16;
                    MR_Word parse_tree__prog_type__Var_52;

                    {
                      parse_tree__prog_type__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__Name0_9);
                    }
                    {
                      parse_tree__prog_type__Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 0) = ((MR_Box) (parse_tree__prog_type__TypeModule_12));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 1) = ((MR_Box) (parse_tree__prog_type__UnqualName_15));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_type__ConsId_7 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_11));
                    }
                    {
                      parse_tree__prog_type__Var_52 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_type__InstConsId_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Var_52));
                    }
                  }
                }
              else
                {
                  MR_Word parse_tree__prog_type__Var_53;

                  *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
                  {
                    parse_tree__prog_type__Var_53 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_type__InstConsId_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name0_9));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Var_53));
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
  MR_Word parse_tree__prog_type__Which_4,
  MR_Integer parse_tree__prog_type__Arity_5)
{
  {
    MR_Word parse_tree__prog_type__InstConsId_6;
    MR_String parse_tree__prog_type__Symbol_8;
    MR_Word parse_tree__prog_type__PrivateBuiltin_9;
    MR_Word parse_tree__prog_type__TypeCtor_10;
    MR_Word parse_tree__prog_type__Var_11;

    if ((parse_tree__prog_type__Which_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_type__Symbol_8 = (MR_String) "typeclass_info";
    else
      parse_tree__prog_type__Symbol_8 = (MR_String) "type_info";
    {
      parse_tree__prog_type__PrivateBuiltin_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
    {
      parse_tree__prog_type__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_11, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_9));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_11, 1) = ((MR_Box) (parse_tree__prog_type__Symbol_8));
    }
    {
      parse_tree__prog_type__InstConsId_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 1) = ((MR_Box) (parse_tree__prog_type__Var_11));
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 2) = ((MR_Box) (parse_tree__prog_type__Arity_5));
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_10));
    }
    return parse_tree__prog_type__InstConsId_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__cell_cons_id_1_f_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1)
{
  {
    MR_Word parse_tree__prog_type__HeadVar__2_2;

    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

        parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__Ctor_3);
      }
    return parse_tree__prog_type__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__make_type_ctor_3_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Integer parse_tree__prog_type__Arity_5,
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__prog_type__Name_4;
    MR_Word parse_tree__prog_type__Var_6;

    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
        {
          parse_tree__prog_type__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_6, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_type__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_5));
        }
        parse_tree__prog_type__succeeded = MR_TRUE;
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__add_new_prefix_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
{
  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
      MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
      MR_String parse_tree__prog_type__Name_8;

      {
        mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_7, &parse_tree__prog_type__Name_8);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_type__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
      }
    }
  else
    {
      MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
      MR_String parse_tree__prog_type__Name_4;

      {
        mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_3, &parse_tree__prog_type__Name_4);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__prog_type__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
      }
    }
}

MR_bool MR_CALL 
parse_tree__prog_type__remove_new_prefix_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_type__Name_8;

        {
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_8, parse_tree__prog_type__Name0_7);
        }
        if (parse_tree__prog_type__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_type__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
            }
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_type__Name_4;

        {
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_4, parse_tree__prog_type__Name0_3);
        }
        if (parse_tree__prog_type__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_type__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
            }
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(
  MR_Word parse_tree__prog_type__TypeCtorCat_3)
{
  {
    MR_Word parse_tree__prog_type__IsIntroduced_4;

    switch (MR_tag((MR_Word) parse_tree__prog_type__TypeCtorCat_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeCtorCat_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return parse_tree__prog_type__IsIntroduced_4;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_ctor_1_p_0(
  MR_Word parse_tree__prog_type__TypeCtor_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__PrivateBuiltin_3;
    MR_String parse_tree__prog_type__Name_4;
    MR_Word parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_type__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type__Var_7;
    MR_Integer parse_tree__prog_type__lo_0;
    MR_Integer parse_tree__prog_type__hi_1;
    MR_Integer parse_tree__prog_type__mid_2;
    MR_Integer parse_tree__prog_type__result_3;

    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_5)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__PrivateBuiltin_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_5, (MR_Integer) 0)));
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_5, (MR_Integer) 1)));
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_6 == (MR_Integer) 0);
        if (parse_tree__prog_type__succeeded)
          {
            {
              parse_tree__prog_type__Var_7 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            }
            {
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_3, parse_tree__prog_type__Var_7);
            }
            if (parse_tree__prog_type__succeeded)
              {
                /* binary string simple lookup switch */
                parse_tree__prog_type__lo_0 = (MR_Integer) 0;
                parse_tree__prog_type__hi_1 = (MR_Integer) 3;
                do
                  {
                    parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
                    parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_4, ((&parse_tree__prog_type_vector_common_5[4 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
                    if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
                      {
                        parse_tree__prog_type__succeeded = MR_TRUE;
                        /* jump out of search loop */
                        goto label_0;
                      }
                    else
                    if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
                      parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
                    else
                      parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
                  }
                while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
                parse_tree__prog_type__succeeded = MR_FALSE;
              label_0:;
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_1_p_0(
  MR_Word parse_tree__prog_type__Type_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeCtor_3;
    MR_Word parse_tree__prog_type__PrivateBuiltin_8;
    MR_String parse_tree__prog_type__Name_9;
    MR_Word parse_tree__prog_type__Var_10;
    MR_Integer parse_tree__prog_type__Var_11;
    MR_Word parse_tree__prog_type__Var_12;
    MR_Word parse_tree__prog_type___Args_6;
    MR_Integer parse_tree__prog_type__lo_0;
    MR_Integer parse_tree__prog_type__hi_1;
    MR_Integer parse_tree__prog_type__mid_2;
    MR_Integer parse_tree__prog_type__result_3;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type___Args_6);
    }
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
        parse_tree__prog_type__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_10)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__PrivateBuiltin_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_10, (MR_Integer) 0)));
            parse_tree__prog_type__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_10, (MR_Integer) 1)));
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_11 == (MR_Integer) 0);
            if (parse_tree__prog_type__succeeded)
              {
                {
                  parse_tree__prog_type__Var_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
                {
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_8, parse_tree__prog_type__Var_12);
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    /* binary string simple lookup switch */
                    parse_tree__prog_type__lo_0 = (MR_Integer) 0;
                    parse_tree__prog_type__hi_1 = (MR_Integer) 3;
                    do
                      {
                        parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
                        parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_9, ((&parse_tree__prog_type_vector_common_5[0 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
                        if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
                          {
                            parse_tree__prog_type__succeeded = MR_TRUE;
                            /* jump out of search loop */
                            goto label_0;
                          }
                        else
                        if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
                          parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
                        else
                          parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
                      }
                    while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
                    parse_tree__prog_type__succeeded = MR_FALSE;
                  label_0:;
                  }
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_bitmap_1_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type__Var_3;
    MR_String parse_tree__prog_type__Var_4;
    MR_String parse_tree__prog_type__Var_5;
    MR_Integer parse_tree__prog_type__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_2)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_2, (MR_Integer) 0)));
        parse_tree__prog_type__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_2, (MR_Integer) 1)));
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_3)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_3, (MR_Integer) 0)));
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_4, (MR_String) "bitmap") == 0);
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_5, (MR_String) "bitmap") == 0);
                if (parse_tree__prog_type__succeeded)
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_6 == (MR_Integer) 0);
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_array_1_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type__Var_3;
    MR_String parse_tree__prog_type__Var_4;
    MR_String parse_tree__prog_type__Var_5;
    MR_Integer parse_tree__prog_type__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_2)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_2, (MR_Integer) 0)));
        parse_tree__prog_type__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_2, (MR_Integer) 1)));
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_3)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_3, (MR_Integer) 0)));
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_4, (MR_String) "array") == 0);
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_5, (MR_String) "array") == 0);
                if (parse_tree__prog_type__succeeded)
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_6 == (MR_Integer) 1);
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_io_state_1_p_0(
  MR_Word parse_tree__prog_type__Type_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeInfo_11_11;
    MR_Word parse_tree__prog_type__TypeCtor_3;
    MR_Word parse_tree__prog_type__ModuleName_4;
    MR_Word parse_tree__prog_type__Var_6;
    MR_String parse_tree__prog_type__Var_7;
    MR_Integer parse_tree__prog_type__Var_8;
    MR_Word parse_tree__prog_type__Var_9;
    MR_Word parse_tree__prog_type__Var_10;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type__Var_9);
    }
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
        {
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_11_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (parse_tree__prog_type__Var_9)));
        }
        if (parse_tree__prog_type__succeeded)
          {
            {
              parse_tree__prog_type__ModuleName_4 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
            parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
            parse_tree__prog_type__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_6)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_6, (MR_Integer) 0)));
                parse_tree__prog_type__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_6, (MR_Integer) 1)));
                {
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_4, parse_tree__prog_type__Var_10);
                }
                if (parse_tree__prog_type__succeeded)
                  {
                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_7, (MR_String) "state") == 0);
                    if (parse_tree__prog_type__succeeded)
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_8 == (MR_Integer) 0);
                  }
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(
  MR_Word parse_tree__prog_type__TypeCtor_3)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__IsBuiltinDummy_4;
    MR_Word parse_tree__prog_type__CtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_type__TypeArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type__ModuleName_7;
    MR_String parse_tree__prog_type__TypeName_8;
    MR_Word parse_tree__prog_type__Var_15;

    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
        parse_tree__prog_type__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
        {
          parse_tree__prog_type__Var_15 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        }
        {
          parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_7, parse_tree__prog_type__Var_15);
        }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_8, (MR_String) "state") == 0);
            if (parse_tree__prog_type__succeeded)
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 0);
          }
      }
    if (parse_tree__prog_type__succeeded)
      parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_type__Var_9;
        MR_String parse_tree__prog_type__Var_10;
        MR_Word parse_tree__prog_type__ModuleName_11;
        MR_String parse_tree__prog_type__TypeName_12;
        MR_Word parse_tree__prog_type__Var_17;

        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
            parse_tree__prog_type__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
            parse_tree__prog_type__Var_10 = (MR_String) "store";
            parse_tree__prog_type__Var_9 = (MR_Word) &parse_tree__prog_type_scalar_common_3[2];
            {
              parse_tree__prog_type__Var_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(parse_tree__prog_type__Var_9);
            }
            {
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_11, parse_tree__prog_type__Var_17);
            }
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_12, (MR_String) "store") == 0);
                if (parse_tree__prog_type__succeeded)
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 1);
              }
          }
        if (parse_tree__prog_type__succeeded)
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
        else
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 1;
      }
    return parse_tree__prog_type__IsBuiltinDummy_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
{
  {
    MR_Word parse_tree__prog_type__HeadVar__1_1;
    MR_Word parse_tree__prog_type__Var_2;
    MR_Word parse_tree__prog_type__Var_3;
    MR_Word parse_tree__prog_type__Var_4;
    MR_Word parse_tree__prog_type__Var_7;
    MR_Word parse_tree__prog_type__Var_8;
    MR_Word parse_tree__prog_type__Var_9;
    MR_Word parse_tree__prog_type__Var_10;
    MR_Word parse_tree__prog_type__Var_13;
    MR_Word parse_tree__prog_type__Var_14;
    MR_Word parse_tree__prog_type__Var_15;
    MR_Word parse_tree__prog_type__Var_16;
    MR_Word parse_tree__prog_type__Var_19;
    MR_Word parse_tree__prog_type__Var_20;
    MR_Word parse_tree__prog_type__Var_21;
    MR_Word parse_tree__prog_type__Var_22;
    MR_Word parse_tree__prog_type__Var_25;
    MR_Word parse_tree__prog_type__Var_26;
    MR_Word parse_tree__prog_type__Var_27;
    MR_Word parse_tree__prog_type__Var_28;
    MR_Word parse_tree__prog_type__Var_31;
    MR_Word parse_tree__prog_type__Var_32;
    MR_Word parse_tree__prog_type__Var_33;
    MR_Word parse_tree__prog_type__Var_34;
    MR_Word parse_tree__prog_type__Var_37;
    MR_Word parse_tree__prog_type__Var_38;
    MR_Word parse_tree__prog_type__Var_39;
    MR_Word parse_tree__prog_type__Var_40;
    MR_Word parse_tree__prog_type__Var_43;
    MR_Word parse_tree__prog_type__Var_44;
    MR_Word parse_tree__prog_type__Var_45;
    MR_Word parse_tree__prog_type__Var_46;
    MR_Word parse_tree__prog_type__Var_49;
    MR_Word parse_tree__prog_type__Var_50;
    MR_Word parse_tree__prog_type__Var_51;
    MR_Word parse_tree__prog_type__Var_52;
    MR_Word parse_tree__prog_type__Var_55;
    MR_Word parse_tree__prog_type__Var_56;
    MR_Word parse_tree__prog_type__Var_57;
    MR_Word parse_tree__prog_type__Var_58;
    MR_Word parse_tree__prog_type__Var_61;
    MR_Word parse_tree__prog_type__Var_62;
    MR_Word parse_tree__prog_type__Var_63;
    MR_Word parse_tree__prog_type__Var_64;
    MR_Word parse_tree__prog_type__Var_67;
    MR_Word parse_tree__prog_type__Var_68;
    MR_Word parse_tree__prog_type__Var_69;
    MR_Word parse_tree__prog_type__Var_70;
    MR_Word parse_tree__prog_type__Var_73;
    MR_Word parse_tree__prog_type__Var_74;
    MR_Word parse_tree__prog_type__Var_75;
    MR_Word parse_tree__prog_type__Var_76;
    MR_Word parse_tree__prog_type__Var_79;
    MR_Word parse_tree__prog_type__Var_80;
    MR_Word parse_tree__prog_type__Var_81;
    MR_Word parse_tree__prog_type__Var_82;
    MR_Word parse_tree__prog_type__Var_85;
    MR_Word parse_tree__prog_type__Var_86;
    MR_Word parse_tree__prog_type__Var_87;
    MR_Word parse_tree__prog_type__Var_88;

    {
      parse_tree__prog_type__Var_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_3, 0) = ((MR_Box) (parse_tree__prog_type__Var_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_3, 1) = ((MR_Box) ((MR_String) "int"));
    }
    {
      parse_tree__prog_type__Var_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_2, 0) = ((MR_Box) (parse_tree__prog_type__Var_3));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_2, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_9, 0) = ((MR_Box) (parse_tree__prog_type__Var_10));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_9, 1) = ((MR_Box) ((MR_String) "uint"));
    }
    {
      parse_tree__prog_type__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_8, 0) = ((MR_Box) (parse_tree__prog_type__Var_9));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_15, 0) = ((MR_Box) (parse_tree__prog_type__Var_16));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_15, 1) = ((MR_Box) ((MR_String) "int8"));
    }
    {
      parse_tree__prog_type__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_14, 0) = ((MR_Box) (parse_tree__prog_type__Var_15));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_21, 0) = ((MR_Box) (parse_tree__prog_type__Var_22));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_21, 1) = ((MR_Box) ((MR_String) "uint8"));
    }
    {
      parse_tree__prog_type__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_20, 0) = ((MR_Box) (parse_tree__prog_type__Var_21));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_20, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_27, 0) = ((MR_Box) (parse_tree__prog_type__Var_28));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_27, 1) = ((MR_Box) ((MR_String) "int16"));
    }
    {
      parse_tree__prog_type__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_26, 0) = ((MR_Box) (parse_tree__prog_type__Var_27));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_26, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_33, 0) = ((MR_Box) (parse_tree__prog_type__Var_34));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_33, 1) = ((MR_Box) ((MR_String) "uint16"));
    }
    {
      parse_tree__prog_type__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_32, 0) = ((MR_Box) (parse_tree__prog_type__Var_33));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_32, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_39, 0) = ((MR_Box) (parse_tree__prog_type__Var_40));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_39, 1) = ((MR_Box) ((MR_String) "int32"));
    }
    {
      parse_tree__prog_type__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_38, 0) = ((MR_Box) (parse_tree__prog_type__Var_39));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_38, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_46 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_45, 0) = ((MR_Box) (parse_tree__prog_type__Var_46));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_45, 1) = ((MR_Box) ((MR_String) "uint32"));
    }
    {
      parse_tree__prog_type__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_44, 0) = ((MR_Box) (parse_tree__prog_type__Var_45));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_44, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_52 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_51, 0) = ((MR_Box) (parse_tree__prog_type__Var_52));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_51, 1) = ((MR_Box) ((MR_String) "string"));
    }
    {
      parse_tree__prog_type__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_50, 0) = ((MR_Box) (parse_tree__prog_type__Var_51));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_50, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_58 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_57, 0) = ((MR_Box) (parse_tree__prog_type__Var_58));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_57, 1) = ((MR_Box) ((MR_String) "character"));
    }
    {
      parse_tree__prog_type__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_56, 0) = ((MR_Box) (parse_tree__prog_type__Var_57));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_56, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_63, 0) = ((MR_Box) (parse_tree__prog_type__Var_64));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_63, 1) = ((MR_Box) ((MR_String) "float"));
    }
    {
      parse_tree__prog_type__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_62, 0) = ((MR_Box) (parse_tree__prog_type__Var_63));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_62, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_70 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_69, 0) = ((MR_Box) (parse_tree__prog_type__Var_70));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_69, 1) = ((MR_Box) ((MR_String) "pred"));
    }
    {
      parse_tree__prog_type__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_68, 0) = ((MR_Box) (parse_tree__prog_type__Var_69));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_68, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_76 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_75, 0) = ((MR_Box) (parse_tree__prog_type__Var_76));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_75, 1) = ((MR_Box) ((MR_String) "func"));
    }
    {
      parse_tree__prog_type__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_74, 0) = ((MR_Box) (parse_tree__prog_type__Var_75));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_81, 0) = ((MR_Box) (parse_tree__prog_type__Var_82));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_81, 1) = ((MR_Box) ((MR_String) "void"));
    }
    {
      parse_tree__prog_type__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_80, 0) = ((MR_Box) (parse_tree__prog_type__Var_81));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__prog_type__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_87, 0) = ((MR_Box) (parse_tree__prog_type__Var_88));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_87, 1) = ((MR_Box) ((MR_String) "tuple"));
    }
    {
      parse_tree__prog_type__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_86, 0) = ((MR_Box) (parse_tree__prog_type__Var_87));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_86, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__prog_type__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_85, 0) = ((MR_Box) (parse_tree__prog_type__Var_86));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_type__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_79, 0) = ((MR_Box) (parse_tree__prog_type__Var_80));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_79, 1) = ((MR_Box) (parse_tree__prog_type__Var_85));
    }
    {
      parse_tree__prog_type__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_73, 0) = ((MR_Box) (parse_tree__prog_type__Var_74));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_73, 1) = ((MR_Box) (parse_tree__prog_type__Var_79));
    }
    {
      parse_tree__prog_type__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_67, 0) = ((MR_Box) (parse_tree__prog_type__Var_68));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_67, 1) = ((MR_Box) (parse_tree__prog_type__Var_73));
    }
    {
      parse_tree__prog_type__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_61, 0) = ((MR_Box) (parse_tree__prog_type__Var_62));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_61, 1) = ((MR_Box) (parse_tree__prog_type__Var_67));
    }
    {
      parse_tree__prog_type__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_55, 0) = ((MR_Box) (parse_tree__prog_type__Var_56));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_55, 1) = ((MR_Box) (parse_tree__prog_type__Var_61));
    }
    {
      parse_tree__prog_type__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_49, 0) = ((MR_Box) (parse_tree__prog_type__Var_50));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_49, 1) = ((MR_Box) (parse_tree__prog_type__Var_55));
    }
    {
      parse_tree__prog_type__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_43, 0) = ((MR_Box) (parse_tree__prog_type__Var_44));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_43, 1) = ((MR_Box) (parse_tree__prog_type__Var_49));
    }
    {
      parse_tree__prog_type__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_37, 0) = ((MR_Box) (parse_tree__prog_type__Var_38));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_37, 1) = ((MR_Box) (parse_tree__prog_type__Var_43));
    }
    {
      parse_tree__prog_type__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_31, 0) = ((MR_Box) (parse_tree__prog_type__Var_32));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_31, 1) = ((MR_Box) (parse_tree__prog_type__Var_37));
    }
    {
      parse_tree__prog_type__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_25, 0) = ((MR_Box) (parse_tree__prog_type__Var_26));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_25, 1) = ((MR_Box) (parse_tree__prog_type__Var_31));
    }
    {
      parse_tree__prog_type__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_19, 0) = ((MR_Box) (parse_tree__prog_type__Var_20));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_19, 1) = ((MR_Box) (parse_tree__prog_type__Var_25));
    }
    {
      parse_tree__prog_type__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_13, 0) = ((MR_Box) (parse_tree__prog_type__Var_14));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_13, 1) = ((MR_Box) (parse_tree__prog_type__Var_19));
    }
    {
      parse_tree__prog_type__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_7, 0) = ((MR_Box) (parse_tree__prog_type__Var_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_7, 1) = ((MR_Box) (parse_tree__prog_type__Var_13));
    }
    {
      parse_tree__prog_type__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_type__Var_2));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__prog_type__Var_7));
    }
    return parse_tree__prog_type__HeadVar__1_1;
  }
}

static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv0_TVars_5;

    {
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
  }
}

void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0(
  MR_Word parse_tree__prog_type__Tvars_4,
  MR_Word parse_tree__prog_type__Constraints_5,
  MR_Word * parse_tree__prog_type__Unconstrained_6)
{
  {
    MR_Word parse_tree__prog_type__TypeInfo_9_9;
    MR_Word parse_tree__prog_type__ConstrainedTvars_7;
    MR_Word parse_tree__prog_type__Unconstrained0_8;
    MR_Word parse_tree__prog_type__TVarsList_12;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[9], parse_tree__prog_type__Constraints_5, &parse_tree__prog_type__TVarsList_12);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_12, &parse_tree__prog_type__ConstrainedTvars_7);
    }
    parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
    {
      mercury__list__delete_elems_3_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Tvars_4, parse_tree__prog_type__ConstrainedTvars_7, &parse_tree__prog_type__Unconstrained0_8);
    }
    {
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Unconstrained0_8, parse_tree__prog_type__Unconstrained_6);
    }
  }
}

void MR_CALL 
parse_tree__prog_type__constraint_get_tvars_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__TVars_5)
{
  {
    MR_Word parse_tree__prog_type__TypeInfo_8_11;
    MR_Word parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type__RevTVars_8;
    MR_Word parse_tree__prog_type__TVarsDups_9;
    MR_Word parse_tree__prog_type___ClassName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

    {
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__ArgTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_8);
    }
    parse_tree__prog_type__TypeInfo_8_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
    {
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__RevTVars_8, &parse_tree__prog_type__TVarsDups_9);
    }
    {
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__TVarsDups_9, parse_tree__prog_type__TVars_5);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv0_TVars_5;

    {
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
  }
}

void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0(
  MR_Word parse_tree__prog_type__Constraints_3,
  MR_Word * parse_tree__prog_type__TVars_4)
{
  {
    MR_Word parse_tree__prog_type__TVarsList_5;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[8], parse_tree__prog_type__Constraints_3, &parse_tree__prog_type__TVarsList_5);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_5, parse_tree__prog_type__TVars_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv1_TVars_5;

    {
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv1_TVars_5);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv1_TVars_5));
  }
}

static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv0_TVars_5;

    {
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
  }
}

void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__TVars_5)
{
  {
    MR_Word parse_tree__prog_type__Univ_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__prog_type__Exist_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word parse_tree__prog_type__UnivTVars_6;
    MR_Word parse_tree__prog_type__ExistTVars_7;
    MR_Word parse_tree__prog_type__TVarsList_11;
    MR_Word parse_tree__prog_type__TVarsList_20;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[6], parse_tree__prog_type__Univ_3, &parse_tree__prog_type__TVarsList_11);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_11, &parse_tree__prog_type__UnivTVars_6);
    }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[7], parse_tree__prog_type__Exist_4, &parse_tree__prog_type__TVarsList_20);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_20, &parse_tree__prog_type__ExistTVars_7);
    }
    {
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__UnivTVars_6, parse_tree__prog_type__ExistTVars_7, parse_tree__prog_type__TVars_5);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv0_HeadVar__2_2;

    {
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_HeadVar__2_2);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
  }
}

void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(
  MR_Word parse_tree__prog_type__Types0_3,
  MR_Word * parse_tree__prog_type__Types_4)
{
  {
    MR_Word parse_tree__prog_type__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

    {
      mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_8, parse_tree__prog_type__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_type_scalar_common_2[5], parse_tree__prog_type__Types0_3, parse_tree__prog_type__Types_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_4(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv3_HeadVar__2_2;

    {
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv3_HeadVar__2_2);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_3(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv2_HeadVar__2_2;

    {
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv2_HeadVar__2_2);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_2(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv1_HeadVar__2_2;

    {
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv1_HeadVar__2_2);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0_1(
  MR_Box parse_tree__prog_type__closure_arg,
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
    MR_Word parse_tree__prog_type__conv0_HeadVar__2_2;

    {
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_HeadVar__2_2);
    }
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
  }
}

void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_type__TypeCtorInfo_8_42;
          MR_Word parse_tree__prog_type__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word parse_tree__prog_type__Args0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word parse_tree__prog_type__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word parse_tree__prog_type__Name_8;
          MR_Word parse_tree__prog_type__Args_9;
          MR_String parse_tree__prog_type__Name1_11;
          MR_Word parse_tree__prog_type__Module_10;
          MR_Word parse_tree__prog_type__Var_29;

          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Name0_5)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__prog_type__succeeded)
            {
              parse_tree__prog_type__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 0)));
              parse_tree__prog_type__Name1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 1)));
              {
                parse_tree__prog_type__Var_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__Module_10, parse_tree__prog_type__Var_29);
              }
            }
          if (parse_tree__prog_type__succeeded)
            {
              parse_tree__prog_type__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__Name_8, 0) = ((MR_Box) (parse_tree__prog_type__Name1_11));
            }
          else
            parse_tree__prog_type__Name_8 = parse_tree__prog_type__Name0_5;
          parse_tree__prog_type__TypeCtorInfo_8_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          {
            mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_42, parse_tree__prog_type__TypeCtorInfo_8_42, (MR_Word) &parse_tree__prog_type_scalar_common_2[2], parse_tree__prog_type__Args0_6, &parse_tree__prog_type__Args_9);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_type__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_9));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_7));
          }
        }
        break;
      case (MR_Integer) 2:
        *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_type__TypeCtorInfo_8_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              MR_Word parse_tree__prog_type__Args0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type__Kind_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type__Args_21;

              {
                mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_54, parse_tree__prog_type__TypeCtorInfo_8_54, (MR_Word) &parse_tree__prog_type_scalar_common_2[4], parse_tree__prog_type__Args0_19, &parse_tree__prog_type__Args_21);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_20));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type__TypeCtorInfo_8_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              MR_Word parse_tree__prog_type__PorF_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type__HOInstInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word parse_tree__prog_type__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word parse_tree__prog_type__Args_18;

              {
                mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_48, parse_tree__prog_type__TypeCtorInfo_8_48, (MR_Word) &parse_tree__prog_type_scalar_common_2[3], parse_tree__prog_type__Args0_14, &parse_tree__prog_type__Args_18);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__PorF_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Args_18));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__HOInstInfo_15));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type__Purity_16));
                MR_hl_field(MR_mktag(3), base, 5) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_type__TypeCtorInfo_8_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              MR_Word parse_tree__prog_type__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type__Args0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word parse_tree__prog_type__Args_25;

              {
                mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_36, parse_tree__prog_type__TypeCtorInfo_8_36, (MR_Word) &parse_tree__prog_type_scalar_common_2[1], parse_tree__prog_type__Args0_23, &parse_tree__prog_type__Args_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Args_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Kind_24));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_type__Type0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word parse_tree__prog_type__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word parse_tree__prog_type__Type_28;

              {
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Type0_26, &parse_tree__prog_type__Type_28);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_type__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Type_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_27));
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
  MR_Word parse_tree__prog_type__Purity_9,
  MR_Word parse_tree__prog_type__ArgTypes_11,
  MR_Word parse_tree__prog_type__RetType_12,
  MR_Word parse_tree__prog_type__ArgModes_13,
  MR_Word parse_tree__prog_type__RetMode_14,
  MR_Word parse_tree__prog_type__Detism_15,
  MR_Word * parse_tree__prog_type__Type_16)
{
  {
    MR_Word parse_tree__prog_type__PredInstInfo_17;
    MR_Word parse_tree__prog_type__Var_19;
    MR_Word parse_tree__prog_type__Var_20;
    MR_Word parse_tree__prog_type__Var_24;
    MR_Word parse_tree__prog_type__Var_25;
    MR_Word parse_tree__prog_type__Var_27;

    {
      parse_tree__prog_type__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_20, 0) = ((MR_Box) (parse_tree__prog_type__RetMode_14));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_type__Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__prog_type__ArgModes_13, parse_tree__prog_type__Var_20);
    }
    {
      parse_tree__prog_type__PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_17, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_17, 1) = ((MR_Box) (parse_tree__prog_type__Var_19));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_17, 3) = ((MR_Box) (parse_tree__prog_type__Detism_15));
    }
    {
      parse_tree__prog_type__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_25, 0) = ((MR_Box) (parse_tree__prog_type__RetType_12));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_type__Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_11, parse_tree__prog_type__Var_25);
    }
    parse_tree__prog_type__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__PredInstInfo_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_type__Type_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Var_24));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Var_27));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type__Purity_9));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_func_type_5_p_0(
  MR_Word parse_tree__prog_type__Purity_6,
  MR_Word parse_tree__prog_type__ArgTypes_8,
  MR_Word parse_tree__prog_type__RetType_9,
  MR_Word * parse_tree__prog_type__Type_10)
{
  {
    MR_Word parse_tree__prog_type__Var_12;
    MR_Word parse_tree__prog_type__Var_13;

    {
      parse_tree__prog_type__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_13, 0) = ((MR_Box) (parse_tree__prog_type__RetType_9));
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_type__Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_8, parse_tree__prog_type__Var_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_type__Type_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Var_12));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type__Purity_6));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_pred_type_6_p_0(
  MR_Word parse_tree__prog_type__Purity_7,
  MR_Word parse_tree__prog_type__ArgTypes_9,
  MR_Word parse_tree__prog_type__ArgModes_10,
  MR_Word parse_tree__prog_type__Detism_11,
  MR_Word * parse_tree__prog_type__Type_12)
{
  {
    MR_Word parse_tree__prog_type__PredInstInfo_13;
    MR_Word parse_tree__prog_type__Var_17;

    {
      parse_tree__prog_type__PredInstInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_13, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_13, 1) = ((MR_Box) (parse_tree__prog_type__ArgModes_10));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_13, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__PredInstInfo_13, 3) = ((MR_Box) (parse_tree__prog_type__Detism_11));
    }
    parse_tree__prog_type__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__PredInstInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_type__Type_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__ArgTypes_9));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Var_17));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type__Purity_7));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(
  MR_Word parse_tree__prog_type__Purity_5,
  MR_Word parse_tree__prog_type__ArgTypes_7,
  MR_Word * parse_tree__prog_type__Type_8)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_type__Type_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__ArgTypes_7));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type__Purity_5));
      MR_hl_field(MR_mktag(3), base, 5) = NULL;
    }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_type_3_p_0(
  MR_Word parse_tree__prog_type__TypeCtor_4,
  MR_Word parse_tree__prog_type__Args_5,
  MR_Word * parse_tree__prog_type__Type_6)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__BuiltinType_8;
    MR_String parse_tree__prog_type__Name_7;
    MR_Word parse_tree__prog_type__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_type__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

    parse_tree__prog_type__succeeded = (parse_tree__prog_type__Var_15 == (MR_Integer) 0);
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_14)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_14, (MR_Integer) 0)));
            {
              parse_tree__prog_type__succeeded = parse_tree__prog_data__builtin_type_to_string_2_p_1(&parse_tree__prog_type__BuiltinType_8, parse_tree__prog_type__Name_7);
            }
          }
      }
    if (parse_tree__prog_type__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_type__Type_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_type__BuiltinType_8));
      }
    else
      {
        MR_Word parse_tree__prog_type__Purity_9;
        MR_Word parse_tree__prog_type__PredOrFunc_10;

        {
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type__Purity_9, &parse_tree__prog_type__PredOrFunc_10);
        }
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__construct_higher_order_type_5_p_0(parse_tree__prog_type__Purity_9, parse_tree__prog_type__PredOrFunc_10, parse_tree__prog_type__Args_5, parse_tree__prog_type__Type_6);
          }
        else
          {
            MR_Word parse_tree__prog_type__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
            MR_String parse_tree__prog_type__Var_20;
            MR_Integer parse_tree__prog_type__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_19)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_type__succeeded)
              {
                parse_tree__prog_type__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_19, (MR_Integer) 0)));
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_20, (MR_String) "{}") == 0);
              }
            if (parse_tree__prog_type__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_type__Type_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word parse_tree__prog_type__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
                MR_Integer parse_tree__prog_type__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_type__Type_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_12));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
          }
      }
  }
}

void MR_CALL 
parse_tree__prog_type__construct_higher_order_type_5_p_0(
  MR_Word parse_tree__prog_type__Purity_6,
  MR_Word parse_tree__prog_type__PredOrFunc_7,
  MR_Word parse_tree__prog_type__ArgTypes_9,
  MR_Word * parse_tree__prog_type__Type_10)
{
  switch (parse_tree__prog_type__PredOrFunc_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word parse_tree__prog_type__FuncArgTypes_11;
        MR_Word parse_tree__prog_type__FuncRetType_12;
        MR_Word parse_tree__prog_type__Var_20;
        MR_Word parse_tree__prog_type__Var_21;
        MR_Box parse_tree__prog_type__conv0_FuncRetType_12;

        {
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_9, &parse_tree__prog_type__FuncArgTypes_11, &parse_tree__prog_type__conv0_FuncRetType_12);
        }
        parse_tree__prog_type__FuncRetType_12 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_12);
        {
          parse_tree__prog_type__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_21, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_12));
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_type__Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__FuncArgTypes_11, parse_tree__prog_type__Var_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_type__Type_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Var_20));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type__Purity_6));
          MR_hl_field(MR_mktag(3), base, 5) = NULL;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_type__Type_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__ArgTypes_9));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_type__Purity_6));
          MR_hl_field(MR_mktag(3), base, 5) = NULL;
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_type__type_vars_list_2_p_0(
  MR_Word parse_tree__prog_type__Types_3,
  MR_Word * parse_tree__prog_type__TVars_4)
{
  {
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
    MR_Word parse_tree__prog_type__RevTVars_5;
    MR_Word parse_tree__prog_type__TVarsDups_6;

    {
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Types_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
    {
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
    {
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_type__type_vars_2_p_0(
  MR_Word parse_tree__prog_type__Type_3,
  MR_Word * parse_tree__prog_type__TVars_4)
{
  {
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
    MR_Word parse_tree__prog_type__RevTVars_5;
    MR_Word parse_tree__prog_type__TVarsDups_6;

    {
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
    {
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
    {
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__prog_type__STATE_VARIABLE_V_3 = parse_tree__prog_type__STATE_VARIABLE_V_0_2;
      else
        {
          MR_Word parse_tree__prog_type__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word parse_tree__prog_type__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word parse_tree__prog_type__STATE_VARIABLE_V_12_12;

          {
            parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_7, parse_tree__prog_type__STATE_VARIABLE_V_0_2, &parse_tree__prog_type__STATE_VARIABLE_V_12_12);
          }
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__prog_type__next_value_of_HeadVar__1_1 = parse_tree__prog_type__Types_8;
            MR_Word parse_tree__prog_type__next_value_of_STATE_VARIABLE_V_0_2 = parse_tree__prog_type__STATE_VARIABLE_V_12_12;

            parse_tree__prog_type__STATE_VARIABLE_V_0_2 = parse_tree__prog_type__next_value_of_STATE_VARIABLE_V_0_2;
            parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_type__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_type__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_type__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

            {
              parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_8, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
            }
          }
          break;
        case (MR_Integer) 2:
          *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__HeadVar__2_2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_type__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

                {
                  parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_27, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_type__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__prog_type__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__prog_type__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));

                {
                  parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_19, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__prog_type__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__prog_type__STATE_VARIABLE_V_39_39;
                MR_Word parse_tree__prog_type__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

                {
                  parse_tree__prog_type__STATE_VARIABLE_V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_39_39, 0) = ((MR_Box) (parse_tree__prog_type__Var_33));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_39_39, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
                }
                {
                  parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_34, parse_tree__prog_type__STATE_VARIABLE_V_39_39, parse_tree__prog_type__HeadVar__3_3);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word parse_tree__prog_type__Type_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_type__next_value_of_HeadVar__1_1 = parse_tree__prog_type__Type_41;

                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__next_value_of_HeadVar__1_1;
                }
                continue;
              }
              break;
          }
          break;
      }
      break;
    }
}

void MR_CALL 
parse_tree__prog_type__var_list_to_type_list_3_p_0(
  MR_Word parse_tree__prog_type__KindMap_1,
  MR_Word parse_tree__prog_type__HeadVar__2_2,
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
{
  if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
    {
      MR_Word parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word parse_tree__prog_type__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word parse_tree__prog_type__Type_8;
      MR_Word parse_tree__prog_type__Types_9;
      MR_Word parse_tree__prog_type__Kind_13;

      {
        parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Var_6, &parse_tree__prog_type__Kind_13);
      }
      {
        parse_tree__prog_type__Type_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 0) = ((MR_Box) (parse_tree__prog_type__Var_6));
        MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 1) = ((MR_Box) (parse_tree__prog_type__Kind_13));
      }
      {
        parse_tree__prog_type__var_list_to_type_list_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Vars_7, &parse_tree__prog_type__Types_9);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_type__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Type_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Types_9));
      }
    }
}

void MR_CALL 
parse_tree__prog_type__var_to_type_3_p_0(
  MR_Word parse_tree__prog_type__KindMap_4,
  MR_Word parse_tree__prog_type__Var_5,
  MR_Word * parse_tree__prog_type__Type_6)
{
  {
    MR_Word parse_tree__prog_type__Kind_7;

    {
      parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type__KindMap_4, parse_tree__prog_type__Var_5, &parse_tree__prog_type__Kind_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_type__Type_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Kind_7));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_list_to_var_list_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_type__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_type__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_type__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_type__Var_5;
        MR_Word parse_tree__prog_type__Vars_6;
        MR_Word parse_tree__prog_type__Var_7;

        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Type_3)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 0)));
            parse_tree__prog_type__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 1)));
            {
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(parse_tree__prog_type__Types_4, &parse_tree__prog_type__Vars_6);
            }
            if (parse_tree__prog_type__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_type__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_5));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Vars_6));
                }
                parse_tree__prog_type__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_tuple_1_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
    MR_String parse_tree__prog_type__Var_4;
    MR_Integer parse_tree__prog_type__Var_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_3)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_3, (MR_Integer) 0)));
        parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__Var_4, (MR_String) "{}") == 0);
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(
  MR_Word parse_tree__prog_type__TypeCtor_5,
  MR_Word * parse_tree__prog_type__Purity_6,
  MR_Word * parse_tree__prog_type__PredOrFunc_7)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 0)));
    MR_String parse_tree__prog_type__PorFStr_11;
    MR_Integer parse_tree__prog_type___Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) parse_tree__prog_type__SymName_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String parse_tree__prog_type__Qualifier_16;
        MR_Word parse_tree__prog_type__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));

        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 1)));
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_17)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__Qualifier_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_17, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "impure") == 0))
              {
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 2;
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
                parse_tree__prog_type__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "semipure") == 0))
              {
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 1;
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
                parse_tree__prog_type__succeeded = MR_TRUE;
              }
            else
              parse_tree__prog_type__succeeded = MR_FALSE;
          }
      }
    else
      {
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        *parse_tree__prog_type__Purity_6 = (MR_Integer) 0;
        parse_tree__prog_type__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_type__succeeded)
      {
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "func") == 0))
          {
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 1;
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
        else
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "pred") == 0))
          {
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 0;
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
        else
          parse_tree__prog_type__succeeded = MR_FALSE;
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_to_ctor_det_2_p_0(
  MR_Word parse_tree__prog_type__Type_3,
  MR_Word * parse_tree__prog_type__TypeCtor_4)
{
  {
    MR_Word parse_tree__prog_type___Args_5;

    {
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_2_p_0(
  MR_Word parse_tree__prog_type__Type_3,
  MR_Word * parse_tree__prog_type__TypeCtor_4)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type___Args_5;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(
  MR_Word parse_tree__prog_type__Type_4,
  MR_Word * parse_tree__prog_type__TypeCtor_5,
  MR_Word * parse_tree__prog_type__Args_6)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__TypeCtorPrime_7;
    MR_Word parse_tree__prog_type__ArgsPrime_8;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type__TypeCtorPrime_7, &parse_tree__prog_type__ArgsPrime_8);
    }
    if (parse_tree__prog_type__succeeded)
      {
        *parse_tree__prog_type__TypeCtor_5 = parse_tree__prog_type__TypeCtorPrime_7;
        *parse_tree__prog_type__Args_6 = parse_tree__prog_type__ArgsPrime_8;
      }
    else
      {
        MR_String parse_tree__prog_type__Var_11;
        MR_String parse_tree__prog_type__Var_13;

        {
          parse_tree__prog_type__Var_13 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__Type_4)));
        }
        {
          parse_tree__prog_type__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", parse_tree__prog_type__Var_13);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", parse_tree__prog_type__Var_11);
          return;
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_3_p_0(
  MR_Word parse_tree__prog_type__Type_4,
  MR_Word * parse_tree__prog_type__TypeCtor_5,
  MR_Word * parse_tree__prog_type__Args_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded;

        switch (MR_tag((MR_Word) parse_tree__prog_type__Type_4)) {
          default:
            parse_tree__prog_type__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_type__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_type__Arity_9;
              MR_Word parse_tree__prog_type__Var_8;

              *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
              parse_tree__prog_type__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
              {
                parse_tree__prog_type__Arity_9 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_type__TypeCtor_5 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_7));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_9));
              }
              parse_tree__prog_type__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_type__BuiltinType_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
              MR_String parse_tree__prog_type__Name_11;
              MR_Word parse_tree__prog_type__SymName_32;

              {
                parse_tree__prog_data__builtin_type_to_string_2_p_0(parse_tree__prog_type__BuiltinType_10, &parse_tree__prog_type__Name_11);
              }
              {
                parse_tree__prog_type__SymName_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_32, 0) = ((MR_Box) (parse_tree__prog_type__Name_11));
              }
              *parse_tree__prog_type__Args_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_type__TypeCtor_5 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_32));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              parse_tree__prog_type__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer parse_tree__prog_type__Arity_37;
                  MR_Word parse_tree__prog_type__Var_18;

                  *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
                  parse_tree__prog_type__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
                  {
                    parse_tree__prog_type__Arity_37 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_type__TypeCtor_5 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1]));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_37));
                  }
                  parse_tree__prog_type__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_type__PorF_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Purity_14;
                  MR_String parse_tree__prog_type__PorFStr_16;
                  MR_Word parse_tree__prog_type__SymName0_17;
                  MR_Word parse_tree__prog_type__SymName_34;
                  MR_Integer parse_tree__prog_type__Arity_35;
                  MR_Word parse_tree__prog_type___HOInstInfo_13;

                  *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
                  parse_tree__prog_type___HOInstInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 3)));
                  parse_tree__prog_type__Purity_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 4)));
                  switch (parse_tree__prog_type__PorF_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Integer parse_tree__prog_type__Var_28;

                        parse_tree__prog_type__PorFStr_16 = (MR_String) "pred";
                        {
                          parse_tree__prog_type__Var_28 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
                        }
                        parse_tree__prog_type__Arity_35 = (parse_tree__prog_type__Var_28 - (MR_Integer) 1);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        parse_tree__prog_type__PorFStr_16 = (MR_String) "func";
                        {
                          parse_tree__prog_type__Arity_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
                        }
                      }
                      break;
                  }
                  {
                    parse_tree__prog_type__SymName0_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName0_17, 0) = ((MR_Box) (parse_tree__prog_type__PorFStr_16));
                  }
                  switch (parse_tree__prog_type__Purity_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        {
                          parse_tree__prog_type__SymName_34 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "impure", parse_tree__prog_type__SymName0_17);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      parse_tree__prog_type__SymName_34 = parse_tree__prog_type__SymName0_17;
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          parse_tree__prog_type__SymName_34 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "semipure", parse_tree__prog_type__SymName0_17);
                        }
                      }
                      break;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_type__TypeCtor_5 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_34));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_35));
                  }
                  parse_tree__prog_type__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__sorry_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
                  }
                  parse_tree__prog_type__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_type__SubType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_type__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_type__next_value_of_Type_4 = parse_tree__prog_type__SubType_22;

                    parse_tree__prog_type__Type_4 = parse_tree__prog_type__next_value_of_Type_4;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return parse_tree__prog_type__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(
  MR_Word parse_tree__prog_type__Type_4,
  MR_Word * parse_tree__prog_type__TypeCtor_5,
  MR_Word * parse_tree__prog_type__TypeArgs_6)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__PredOrFunc_8;
    MR_Word parse_tree__prog_type__TypeArgs0_10;
    MR_Word parse_tree__prog_type__Var_24;
    MR_Word parse_tree__prog_type___Purity_7;
    MR_Word parse_tree__prog_type___HOInstInfo_23;

    {
      parse_tree__prog_type__Var_24 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_4);
    }
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_24, (MR_Integer) 1)));
        parse_tree__prog_type__TypeArgs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_24, (MR_Integer) 2)));
        parse_tree__prog_type___HOInstInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_24, (MR_Integer) 3)));
        parse_tree__prog_type___Purity_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_24, (MR_Integer) 4)));
        {
          MR_String parse_tree__prog_type__PredOrFuncStr_11;
          MR_Word parse_tree__prog_type__Var_13;

          *parse_tree__prog_type__TypeArgs_6 = parse_tree__prog_type__TypeArgs0_10;
          {
            parse_tree__prog_type__PredOrFuncStr_11 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_type__PredOrFunc_8);
          }
          {
            parse_tree__prog_type__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_13, 0) = ((MR_Box) (parse_tree__prog_type__PredOrFuncStr_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_type__TypeCtor_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_13));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          parse_tree__prog_type__succeeded = MR_TRUE;
        }
      }
    else
      {
        MR_Word parse_tree__prog_type__Var_15;
        MR_String parse_tree__prog_type__Var_16;
        MR_Integer parse_tree__prog_type__Var_17;
        MR_Word parse_tree__prog_type__Var_28;
        MR_Word parse_tree__prog_type__Var_27;

        {
          parse_tree__prog_type__Var_28 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_4);
        }
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Var_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (parse_tree__prog_type__succeeded)
          {
            *parse_tree__prog_type__TypeArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_28, (MR_Integer) 1)));
            parse_tree__prog_type__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_28, (MR_Integer) 2)));
            parse_tree__prog_type__Var_16 = (MR_String) "tuple";
            parse_tree__prog_type__Var_17 = (MR_Integer) 0;
            parse_tree__prog_type__Var_15 = (MR_Word) &parse_tree__prog_type_scalar_common_3[0];
            *parse_tree__prog_type__TypeCtor_5 = (MR_Word) &parse_tree__prog_type_scalar_common_1[6];
            parse_tree__prog_type__succeeded = MR_TRUE;
          }
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_ground_2_p_0(
  MR_Word parse_tree__prog_type__Type_3,
  MR_Word parse_tree__prog_type__TSubst_4)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TSubst_4);
    }
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    {
      MR_Word parse_tree__prog_type__Binding_6;
      MR_Box parse_tree__prog_type__conv0_Binding_6;

      {
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4, ((MR_Box) ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5)), &parse_tree__prog_type__conv0_Binding_6);
      }
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
        {
          parse_tree__prog_type__Binding_6 = ((MR_Word) parse_tree__prog_type__conv0_Binding_6);
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
        }
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
        {
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Binding_6, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4);
        }
      else
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
        {
          parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(parse_tree__prog_type__env_ptr);
        }
    }
  }
}

static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0) == 0)
      {
        {
          parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5, parse_tree__prog_type__subst_type_is_nonground_2_p_0_2, parse_tree__prog_type__env_ptr);
        }
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0(
  MR_Word parse_tree__prog_type__Type_3,
  MR_Word parse_tree__prog_type__TSubst_4)
{
  {
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s parse_tree__prog_type__env;

    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3 = parse_tree__prog_type__Type_3;
    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4 = parse_tree__prog_type__TSubst_4;
    {
      parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(&parse_tree__prog_type__env);
    }
    return (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__prog_type__Var_3;

          {
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2, &parse_tree__prog_type__Var_3, parse_tree__prog_type__type_is_nonground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
        }
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0(
  MR_Word parse_tree__prog_type__Type_2)
{
  {
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s parse_tree__prog_type__env;

    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
    {
      parse_tree__prog_type__type_is_nonground_1_p_0_2(&parse_tree__prog_type__env);
    }
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
  void * parse_tree__prog_type__env_ptr_arg)
{
  {
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__prog_type__Var_3;

          {
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2, &parse_tree__prog_type__Var_3, parse_tree__prog_type__type_is_ground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
        }
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0(
  MR_Word parse_tree__prog_type__Type_2)
{
  {
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s parse_tree__prog_type__env;

    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
    {
      parse_tree__prog_type__type_is_ground_1_p_0_2(&parse_tree__prog_type__env);
    }
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded);
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_list_contains_var_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__Var_2,
  MR_Cont parse_tree__prog_type__cont,
  void * parse_tree__prog_type__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word parse_tree__prog_type__Var_9;
        MR_Word parse_tree__prog_type__Var_10;

        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            parse_tree__prog_type__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
            {
              parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_type__Var_10, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
            }
            {
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__prog_type__next_value_of_HeadVar__1_1 = parse_tree__prog_type__Var_9;

                parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__next_value_of_HeadVar__1_1;
              }
              continue;
            }
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__prog_type__type_contains_var_2_p_0(
  MR_Word parse_tree__prog_type__HeadVar__1_1,
  MR_Word * parse_tree__prog_type__Var_2,
  MR_Cont parse_tree__prog_type__cont,
  void * parse_tree__prog_type__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_type__Var_4;

            *parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
            {
              parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_type__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

            {
              parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_6, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_type__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

                {
                  parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_15, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_type__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__prog_type__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__prog_type__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));

                {
                  parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_10, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__prog_type__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__prog_type__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

                *parse_tree__prog_type__Var_2 = parse_tree__prog_type__Var_30;
                {
                  parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
                }
                {
                  parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Var_29, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word parse_tree__prog_type__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_type__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_type__next_value_of_HeadVar__1_1 = parse_tree__prog_type__Type_25;

                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__next_value_of_HeadVar__1_1;
                }
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
  MR_Word parse_tree__prog_type__Type_3,
  MR_Word * parse_tree__prog_type__ArgTypes_4)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_6;
    MR_Word parse_tree__prog_type__Var_5;

    {
      parse_tree__prog_type__Var_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_3);
    }
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Var_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (parse_tree__prog_type__succeeded)
      {
        *parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_6, (MR_Integer) 1)));
        parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_6, (MR_Integer) 2)));
      }
    return parse_tree__prog_type__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(
  MR_Word parse_tree__prog_type__Type_6,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Purity_11,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12,
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;
    MR_Word parse_tree__prog_type__Var_32;
    MR_Word parse_tree__prog_type___HOInstInfo_31;

    {
      parse_tree__prog_type__Var_32 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_6);
    }
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Var_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_32, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_32, (MR_Integer) 1)));
        parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_32, (MR_Integer) 2)));
        parse_tree__prog_type___HOInstInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_32, (MR_Integer) 3)));
        parse_tree__prog_type__STATE_VARIABLE_Purity_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_32, (MR_Integer) 4)));
        *parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14 = parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;
        *parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12 = parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
        *parse_tree__prog_type__STATE_VARIABLE_Purity_11 = parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_is_higher_order_details_det\'/5", (MR_String) "type is not higher-order");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_5_p_0(
  MR_Word parse_tree__prog_type__Type_6,
  MR_Word * parse_tree__prog_type__Purity_7,
  MR_Word * parse_tree__prog_type__PredOrFunc_8,
  MR_Word * parse_tree__prog_type__ArgTypes_10)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_12;
    MR_Word parse_tree__prog_type___HOInstInfo_11;

    {
      parse_tree__prog_type__Var_12 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_6);
    }
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        *parse_tree__prog_type__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_12, (MR_Integer) 1)));
        *parse_tree__prog_type__ArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_12, (MR_Integer) 2)));
        parse_tree__prog_type___HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_12, (MR_Integer) 3)));
        *parse_tree__prog_type__Purity_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_12, (MR_Integer) 4)));
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_1_p_0(
  MR_Word parse_tree__prog_type__Type_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_8;
    MR_Word parse_tree__prog_type__Var_3;
    MR_Word parse_tree__prog_type__Var_4;
    MR_Word parse_tree__prog_type__Var_5;
    MR_Word parse_tree__prog_type__Var_6;

    {
      parse_tree__prog_type__Var_8 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_8, (MR_Integer) 1)));
        parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_8, (MR_Integer) 2)));
        parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_8, (MR_Integer) 3)));
        parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Var_8, (MR_Integer) 4)));
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonvar_1_p_0(
  MR_Word parse_tree__prog_type__Type_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_6;
    MR_Word parse_tree__prog_type__Var_4;
    MR_Word parse_tree__prog_type__Var_5;

    {
      parse_tree__prog_type__Var_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_6)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_6, (MR_Integer) 0)));
        parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_6, (MR_Integer) 1)));
      }
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
    return parse_tree__prog_type__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_is_var_1_p_0(
  MR_Word parse_tree__prog_type__Type_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;
    MR_Word parse_tree__prog_type__Var_5;
    MR_Word parse_tree__prog_type__Var_3;
    MR_Word parse_tree__prog_type__Var_4;

    {
      parse_tree__prog_type__Var_5 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Var_5)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__prog_type__succeeded)
      {
        parse_tree__prog_type__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_5, (MR_Integer) 0)));
        parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Var_5, (MR_Integer) 1)));
      }
    return parse_tree__prog_type__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__strip_kind_annotation_1_f_0(
  MR_Word parse_tree__prog_type__Type0_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Type0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
        MR_Word parse_tree__prog_type__Type_4;
        MR_Word parse_tree__prog_type__Type1_5;
        MR_Word parse_tree__prog_type__Var_6;

        if (parse_tree__prog_type__succeeded)
          {
            parse_tree__prog_type__Type1_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 1)));
            parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 2)));
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_type__next_value_of_Type0_3 = parse_tree__prog_type__Type1_5;

              parse_tree__prog_type__Type0_3 = parse_tree__prog_type__next_value_of_Type0_3;
            }
            continue;
          }
        else
          parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type0_3;
        return parse_tree__prog_type__Type_4;
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____ctor_defn_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____ctor_defn_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____polymorphism_cell_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____polymorphism_cell_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
  MR_Box parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_type__succeeded;

    {
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
    return parse_tree__prog_type__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
  MR_Box parse_tree__prog_type__wrapper_arg_2,
  MR_Box parse_tree__prog_type__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

    {
      parse_tree__prog_type____Compare____type_ctor_category_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_ctor_defn_0);
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

/* :- end_module parse_tree.prog_type. */
