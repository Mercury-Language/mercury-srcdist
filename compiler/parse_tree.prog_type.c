/*
** Automatically generated from `prog_type.m'
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 402 "prog_type.m"
struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s {
#line 1343 "prog_type.m"
  MR_bool parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1380 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
#line 1383 "prog_type.m"
  jmp_buf parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0;
#line 1383 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28;
#line 1384 "prog_type.m"
  MR_Box parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
#line 402 "prog_type.m"
};

#line 345 "prog_type.m"
struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s {
#line 345 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3;
#line 974 "prog_type.m"
  MR_bool parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 976 "prog_type.m"
  jmp_buf parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0;
#line 976 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8;
#line 977 "prog_type.m"
  MR_Box parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8;
#line 345 "prog_type.m"
};

#line 101 "prog_type.m"
struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s {
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3;
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4;
#line 485 "prog_type.m"
  MR_bool parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 485 "prog_type.m"
  jmp_buf parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0;
#line 485 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5;
#line 101 "prog_type.m"
};

#line 92 "prog_type.m"
struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s {
#line 92 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2;
#line 480 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 480 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0;
#line 92 "prog_type.m"
};

#line 88 "prog_type.m"
struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s {
#line 88 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2;
#line 477 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 477 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0;
#line 88 "prog_type.m"
};


#line 168 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 171 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 174 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 177 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 180 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

#line 183 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 186 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 189 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6];

#line 192 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6];

#line 195 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0;

#line 198 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1];

#line 201 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1];

#line 204 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1];

#line 207 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1];

#line 210 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0;

#line 213 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1;

#line 216 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2];

#line 219 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2];

#line 222 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2];

#line 225 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1];

#line 228 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0;

#line 231 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1;

#line 234 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1];

#line 237 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1];

#line 240 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2];

#line 243 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2];

#line 246 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2];

#line 249 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0;

#line 252 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1;

#line 255 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2;

#line 258 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3;

#line 261 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4];

#line 264 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4];

#line 267 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4];

#line 270 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0;

#line 273 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1;

#line 276 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2];

#line 279 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2];

#line 282 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2];

#line 285 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0;

#line 288 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1;

#line 291 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2;

#line 294 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3;

#line 297 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4];

#line 300 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4];

#line 303 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4];

#line 306 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0;

#line 309 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1;

#line 312 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2;

#line 315 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3];

#line 318 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3];

#line 321 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3];

#line 324 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1];

#line 327 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0;

#line 330 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1;

#line 333 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2;

#line 336 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1];

#line 339 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3;

#line 342 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4;

#line 345 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5;

#line 348 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1];

#line 351 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6;

#line 354 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7;

#line 357 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1];

#line 360 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8;

#line 363 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5];

#line 366 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1];

#line 369 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1];

#line 372 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2];

#line 375 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4];

#line 378 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9];

#line 381 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9];

#line 384 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 387 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 389 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 392 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 395 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 397 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 399 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 402 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 405 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 407 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 410 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 413 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 415 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 417 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 420 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 423 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 425 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 428 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 431 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 433 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 435 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 438 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 441 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 443 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 446 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 449 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 451 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 453 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 456 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 459 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 461 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 464 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 467 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 469 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 471 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 474 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 477 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 479 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 482 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 485 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 487 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 489 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 492 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 495 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 497 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 500 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 503 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 505 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 507 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 510 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 513 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 515 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 518 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 521 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 523 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 525 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 1303 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1303 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1303 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1303 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7);

#line 1263 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1263 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1263 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1263 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6);

#line 1242 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1242 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1242 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1242 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8);

#line 1230 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1230 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1230 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1230 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20);

#line 1177 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1177 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33);

#line 1146 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1146 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22);

#line 1114 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1114 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23);

#line 1093 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1093 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16);

#line 1050 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1050 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19);

#line 1034 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1034 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14);

#line 653 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 653 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 653 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 653 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3);

#line 626 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 626 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 626 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 626 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3);

#line 1383 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1383 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1384 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1384 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1383 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1383 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1383 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1383 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 976 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 976 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 977 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 977 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 976 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 976 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 976 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 976 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 758 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 758 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 758 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 758 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 485 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 485 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 485 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 485 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 485 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 485 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 480 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 480 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 480 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 480 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 477 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 477 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 477 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 477 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[2][5];


#line 832 "prog_type.m"
/* sealed */ struct parse_tree__prog_type__vector_common_type_5_0_s {
#line 832 "prog_type.m"
  const MR_String parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0;
#line 832 "prog_type.m"
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

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_type_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
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



#line 994 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1002 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1010 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1018 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1026 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

#line 1035 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1043 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1051 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1061 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_existq_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_constraints",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

#line 1071 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0 = {
  (MR_String) "ctor_defn",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0,
  parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0,
  NULL,
  NULL
};

#line 1086 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1091 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0
  }
};

#line 1100 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1105 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1] = {
  (MR_Integer) 0
};

#line 1110 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_ctor_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1127 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
  (MR_String) "is_builtin_dummy_type_ctor",
  (MR_Integer) 0
};

#line 1133 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
  (MR_String) "is_not_builtin_dummy_type_ctor",
  (MR_Integer) 1
};

#line 1139 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1145 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1151 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1157 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1174 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1179 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0 = {
  (MR_String) "type_info_cell",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0,
  NULL,
  NULL,
  NULL
};

#line 1194 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1 = {
  (MR_String) "typeclass_info_cell",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1209 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1214 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0
};

#line 1219 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1
  }
};

#line 1233 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1239 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1245 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_polymorphism_cell_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1262 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0 = {
  (MR_String) "cat_builtin_int",
  (MR_Integer) 0
};

#line 1268 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1 = {
  (MR_String) "cat_builtin_float",
  (MR_Integer) 1
};

#line 1274 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2 = {
  (MR_String) "cat_builtin_char",
  (MR_Integer) 2
};

#line 1280 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3 = {
  (MR_String) "cat_builtin_string",
  (MR_Integer) 3
};

#line 1286 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1294 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1302 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1310 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_builtin",
  {     parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0 },
  {     parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0
};

#line 1327 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
  (MR_String) "cat_enum_mercury",
  (MR_Integer) 0
};

#line 1333 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
  (MR_String) "cat_enum_foreign",
  (MR_Integer) 1
};

#line 1339 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1
};

#line 1345 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0
};

#line 1351 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1357 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1374 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
  (MR_String) "cat_system_type_info",
  (MR_Integer) 0
};

#line 1380 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
  (MR_String) "cat_system_type_ctor_info",
  (MR_Integer) 1
};

#line 1386 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
  (MR_String) "cat_system_typeclass_info",
  (MR_Integer) 2
};

#line 1392 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
  (MR_String) "cat_system_base_typeclass_info",
  (MR_Integer) 3
};

#line 1398 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3
};

#line 1406 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2
};

#line 1414 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1422 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1439 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
  (MR_String) "cat_user_direct_dummy",
  (MR_Integer) 0
};

#line 1445 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
  (MR_String) "cat_user_notag",
  (MR_Integer) 1
};

#line 1451 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
  (MR_String) "cat_user_general",
  (MR_Integer) 2
};

#line 1457 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

#line 1464 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1
};

#line 1471 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1478 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1495 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0
};

#line 1500 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0 = {
  (MR_String) "ctor_cat_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0,
  NULL,
  NULL,
  NULL
};

#line 1515 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1 = {
  (MR_String) "ctor_cat_higher_order",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1530 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2 = {
  (MR_String) "ctor_cat_tuple",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1545 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0
};

#line 1550 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3 = {
  (MR_String) "ctor_cat_enum",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3,
  NULL,
  NULL,
  NULL
};

#line 1565 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4 = {
  (MR_String) "ctor_cat_builtin_dummy",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1580 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5 = {
  (MR_String) "ctor_cat_variable",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1595 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0
};

#line 1600 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6 = {
  (MR_String) "ctor_cat_system",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6,
  NULL,
  NULL,
  NULL
};

#line 1615 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7 = {
  (MR_String) "ctor_cat_void",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1630 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0
};

#line 1635 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8 = {
  (MR_String) "ctor_cat_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 8,
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8,
  NULL,
  NULL,
  NULL
};

#line 1650 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7
};

#line 1659 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0
};

#line 1664 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3
};

#line 1669 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8
};

#line 1675 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4] = {
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3
  }
};

#line 1699 "parse_tree.prog_type.c"
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

#line 1712 "parse_tree.prog_type.c"
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

#line 1725 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1742 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 1745 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1747 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1749 "parse_tree.prog_type.c"
{
#line 1751 "parse_tree.prog_type.c"
  {
#line 1753 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1756 "parse_tree.prog_type.c"
    {
#line 1758 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____ctor_defn_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1761 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1763 "parse_tree.prog_type.c"
  }
#line 1765 "parse_tree.prog_type.c"
}

#line 1768 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 1771 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1773 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1775 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1777 "parse_tree.prog_type.c"
{
#line 1779 "parse_tree.prog_type.c"
  {
#line 1781 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1784 "parse_tree.prog_type.c"
    {
#line 1786 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____ctor_defn_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1789 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1791 "parse_tree.prog_type.c"
  }
#line 1793 "parse_tree.prog_type.c"
}

#line 1796 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 1799 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1801 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1803 "parse_tree.prog_type.c"
{
#line 1805 "parse_tree.prog_type.c"
  {
#line 1807 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1810 "parse_tree.prog_type.c"
    {
#line 1812 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1815 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1817 "parse_tree.prog_type.c"
  }
#line 1819 "parse_tree.prog_type.c"
}

#line 1822 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 1825 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1827 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1829 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1831 "parse_tree.prog_type.c"
{
#line 1833 "parse_tree.prog_type.c"
  {
#line 1835 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1838 "parse_tree.prog_type.c"
    {
#line 1840 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1843 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1845 "parse_tree.prog_type.c"
  }
#line 1847 "parse_tree.prog_type.c"
}

#line 1850 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 1853 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1855 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1857 "parse_tree.prog_type.c"
{
#line 1859 "parse_tree.prog_type.c"
  {
#line 1861 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1864 "parse_tree.prog_type.c"
    {
#line 1866 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____polymorphism_cell_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1869 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1871 "parse_tree.prog_type.c"
  }
#line 1873 "parse_tree.prog_type.c"
}

#line 1876 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 1879 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1881 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1883 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1885 "parse_tree.prog_type.c"
{
#line 1887 "parse_tree.prog_type.c"
  {
#line 1889 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1892 "parse_tree.prog_type.c"
    {
#line 1894 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____polymorphism_cell_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1897 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1899 "parse_tree.prog_type.c"
  }
#line 1901 "parse_tree.prog_type.c"
}

#line 1904 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 1907 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1909 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1911 "parse_tree.prog_type.c"
{
#line 1913 "parse_tree.prog_type.c"
  {
#line 1915 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1918 "parse_tree.prog_type.c"
    {
#line 1920 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1923 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1925 "parse_tree.prog_type.c"
  }
#line 1927 "parse_tree.prog_type.c"
}

#line 1930 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 1933 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1935 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1937 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1939 "parse_tree.prog_type.c"
{
#line 1941 "parse_tree.prog_type.c"
  {
#line 1943 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1946 "parse_tree.prog_type.c"
    {
#line 1948 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1951 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1953 "parse_tree.prog_type.c"
  }
#line 1955 "parse_tree.prog_type.c"
}

#line 1958 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 1961 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1963 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1965 "parse_tree.prog_type.c"
{
#line 1967 "parse_tree.prog_type.c"
  {
#line 1969 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1972 "parse_tree.prog_type.c"
    {
#line 1974 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1977 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1979 "parse_tree.prog_type.c"
  }
#line 1981 "parse_tree.prog_type.c"
}

#line 1984 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 1987 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1989 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1991 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1993 "parse_tree.prog_type.c"
{
#line 1995 "parse_tree.prog_type.c"
  {
#line 1997 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2000 "parse_tree.prog_type.c"
    {
#line 2002 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2005 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2007 "parse_tree.prog_type.c"
  }
#line 2009 "parse_tree.prog_type.c"
}

#line 2012 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 2015 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2017 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2019 "parse_tree.prog_type.c"
{
#line 2021 "parse_tree.prog_type.c"
  {
#line 2023 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2026 "parse_tree.prog_type.c"
    {
#line 2028 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2031 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2033 "parse_tree.prog_type.c"
  }
#line 2035 "parse_tree.prog_type.c"
}

#line 2038 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 2041 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2043 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2045 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2047 "parse_tree.prog_type.c"
{
#line 2049 "parse_tree.prog_type.c"
  {
#line 2051 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2054 "parse_tree.prog_type.c"
    {
#line 2056 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2059 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2061 "parse_tree.prog_type.c"
  }
#line 2063 "parse_tree.prog_type.c"
}

#line 2066 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 2069 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2071 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2073 "parse_tree.prog_type.c"
{
#line 2075 "parse_tree.prog_type.c"
  {
#line 2077 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2080 "parse_tree.prog_type.c"
    {
#line 2082 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2085 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2087 "parse_tree.prog_type.c"
  }
#line 2089 "parse_tree.prog_type.c"
}

#line 2092 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 2095 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2097 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2099 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2101 "parse_tree.prog_type.c"
{
#line 2103 "parse_tree.prog_type.c"
  {
#line 2105 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2108 "parse_tree.prog_type.c"
    {
#line 2110 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2113 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2115 "parse_tree.prog_type.c"
  }
#line 2117 "parse_tree.prog_type.c"
}

#line 2120 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 2123 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2125 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2127 "parse_tree.prog_type.c"
{
#line 2129 "parse_tree.prog_type.c"
  {
#line 2131 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2134 "parse_tree.prog_type.c"
    {
#line 2136 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2139 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2141 "parse_tree.prog_type.c"
  }
#line 2143 "parse_tree.prog_type.c"
}

#line 2146 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 2149 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2151 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2153 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2155 "parse_tree.prog_type.c"
{
#line 2157 "parse_tree.prog_type.c"
  {
#line 2159 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2162 "parse_tree.prog_type.c"
    {
#line 2164 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_category_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2167 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2169 "parse_tree.prog_type.c"
  }
#line 2171 "parse_tree.prog_type.c"
}

#line 355 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 355 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 355 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 355 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 355 "prog_type.m"
{
#line 992 "prog_type.m"
  {
#line 992 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__ReserveTagPragma_11 == (MR_Integer) 1);
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeCtorFieldName_17;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_29;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_30;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__V_35_35;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__V_36_36;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 992 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_39_39;
#line 944 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_31;
#line 944 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_34;
#line 1006 "prog_type.m"
    MR_String parse_tree__prog_type__V_22_22;
#line 945 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 945 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;

#line 992 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
      {
#line 994 "prog_type.m"
        parse_tree__prog_type__V_20_20 = (MR_Integer) 243;
#line 994 "prog_type.m"
        parse_tree__prog_type__V_21_21 = (MR_Integer) 1;
#line 994 "prog_type.m"
        {
#line 994 "prog_type.m"
          parse_tree__prog_type__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__prog_type__Globals_9, parse_tree__prog_type__V_20_20, parse_tree__prog_type__V_21_21);
        }
#line 992 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
          {
#line 995 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__MaybeUserEqCmp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 992 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
              {
#line 943 "prog_type.m"
                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_12)) == (MR_mktag((MR_Integer) 1)));
#line 943 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 943 "prog_type.m"
                  {
#line 943 "prog_type.m"
                    parse_tree__prog_type__SingleCtor_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 0)));
#line 943 "prog_type.m"
                    parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 1)));
#line 943 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 992 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
                      {
#line 944 "prog_type.m"
                        parse_tree__prog_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 0)));
#line 944 "prog_type.m"
                        parse_tree__prog_type___Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 1)));
#line 944 "prog_type.m"
                        *parse_tree__prog_type__SingleFunctorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 2)));
#line 944 "prog_type.m"
                        parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 3)));
#line 944 "prog_type.m"
                        parse_tree__prog_type__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 4)));
#line 944 "prog_type.m"
                        parse_tree__prog_type___Ctxt_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 5)));
#line 945 "prog_type.m"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_39_39 == (MR_Integer) 1);
#line 992 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
                          {
#line 946 "prog_type.m"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 992 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
                              {
#line 1006 "prog_type.m"
                                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_type__SingleFunctorName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1006 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
                                  {
#line 1006 "prog_type.m"
                                    parse_tree__prog_type__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__prog_type__SingleFunctorName_14, (MR_Integer) 0)));
#line 1006 "prog_type.m"
                                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_22_22, (MR_String) "{}") == 0);
#line 1006 "prog_type.m"
                                  }
#line 1006 "prog_type.m"
                                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 992 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
                                  {
#line 945 "prog_type.m"
                                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 945 "prog_type.m"
                                    if (parse_tree__prog_type__succeeded)
#line 945 "prog_type.m"
                                      {
#line 945 "prog_type.m"
                                        parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 0)));
#line 945 "prog_type.m"
                                        parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 1)));
#line 945 "prog_type.m"
                                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 992 "prog_type.m"
                                        if (parse_tree__prog_type__succeeded)
#line 992 "prog_type.m"
                                          {
#line 945 "prog_type.m"
                                            parse_tree__prog_type__MaybeCtorFieldName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 0)));
#line 945 "prog_type.m"
                                            *parse_tree__prog_type__SingleArgType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 1)));
#line 945 "prog_type.m"
                                            parse_tree__prog_type__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 2)));
#line 945 "prog_type.m"
                                            parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 3)));
#line 1011 "prog_type.m"
                                            if ((parse_tree__prog_type__MaybeCtorFieldName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "prog_type.m"
                                              *parse_tree__prog_type__MaybeSingleArgName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1011 "prog_type.m"
                                            else
#line 1012 "prog_type.m"
                                              {
#line 1012 "prog_type.m"
                                                MR_Word parse_tree__prog_type__SymName_18;
#line 1012 "prog_type.m"
                                                MR_Word parse_tree__prog_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeCtorFieldName_17, (MR_Integer) 0)));
#line 1012 "prog_type.m"
                                                MR_String parse_tree__prog_type__V_24_24;
#line 1012 "prog_type.m"
                                                MR_Word parse_tree__prog_type__V_19_19;

#line 1012 "prog_type.m"
                                                parse_tree__prog_type__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 0)));
#line 1012 "prog_type.m"
                                                parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 1)));
#line 1013 "prog_type.m"
                                                {
#line 1013 "prog_type.m"
                                                  parse_tree__prog_type__V_24_24 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__SymName_18);
                                                }
#line 1013 "prog_type.m"
                                                {
#line 1013 "prog_type.m"
                                                  MR_Word base;
#line 1013 "prog_type.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_type.m"
                                                  *parse_tree__prog_type__MaybeSingleArgName_16 = base;
#line 1013 "prog_type.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__V_24_24));
#line 1013 "prog_type.m"
                                                }
#line 1012 "prog_type.m"
                                              }
#line 1011 "prog_type.m"
                                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 992 "prog_type.m"
                                          }
#line 945 "prog_type.m"
                                      }
#line 992 "prog_type.m"
                                  }
#line 992 "prog_type.m"
                              }
#line 992 "prog_type.m"
                          }
#line 992 "prog_type.m"
                      }
#line 943 "prog_type.m"
                  }
#line 992 "prog_type.m"
              }
#line 992 "prog_type.m"
          }
#line 992 "prog_type.m"
      }
#line 992 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 992 "prog_type.m"
  }
#line 355 "prog_type.m"
}

#line 261 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0(
#line 261 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 261 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 261 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 261 "prog_type.m"
{
#line 261 "prog_type.m"
  {
#line 261 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 261 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_76 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 261 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_77 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 261 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_76 == parse_tree__prog_type__CastY_77);
#line 261 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 2426 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "prog_type.m"
    else
#line 261 "prog_type.m"
#line 261 "prog_type.m"
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) {
#line 261 "prog_type.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
        case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__2_2)) {
#line 261 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
            case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 2:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 3:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 4:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 1:
#line 2492 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 2:
#line 2498 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 2511 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 2517 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 1:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 2:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 3:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 4:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 1:
#line 2579 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 2:
#line 2585 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 2598 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 2604 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 2:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 2:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 3:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 4:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 1:
#line 2666 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 2:
#line 2672 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 2685 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 2691 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 2:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 3:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 4:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 1:
#line 2753 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 2:
#line 2759 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 2772 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 2778 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 4:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 2:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 3:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 4:
#line 261 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 1:
#line 2840 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 2:
#line 2846 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
                case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                    case (MR_Integer) 0:
#line 2859 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                    case (MR_Integer) 1:
#line 2865 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                      break;
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
                  break;
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
        case (MR_Integer) 1:
#line 261 "prog_type.m"
          {
#line 261 "prog_type.m"
            MR_Word parse_tree__prog_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 261 "prog_type.m"
#line 261 "prog_type.m"
            switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
              case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                  case (MR_Integer) 0:
#line 2902 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 1:
#line 2908 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 2:
#line 2914 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 3:
#line 2920 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 4:
#line 2926 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
              case (MR_Integer) 1:
#line 261 "prog_type.m"
                {
#line 261 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_86_86 = (MR_Integer) parse_tree__prog_type__V_82_82;
#line 261 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_87_87 = (MR_Integer) parse_tree__prog_type__V_5_5;

#line 261 "prog_type.m"
                  {
#line 261 "prog_type.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_86_86, parse_tree__prog_type__V_87_87);
                  }
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
              case (MR_Integer) 2:
#line 2956 "parse_tree.prog_type.c"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
              case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                  case (MR_Integer) 0:
#line 2969 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 1:
#line 2975 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
            }
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
        case (MR_Integer) 2:
#line 261 "prog_type.m"
          {
#line 261 "prog_type.m"
            MR_Word parse_tree__prog_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 261 "prog_type.m"
#line 261 "prog_type.m"
            switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
              case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                  case (MR_Integer) 0:
#line 3010 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 1:
#line 3016 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 2:
#line 3022 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 3:
#line 3028 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 4:
#line 3034 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
              case (MR_Integer) 1:
#line 3044 "parse_tree.prog_type.c"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
              case (MR_Integer) 2:
#line 261 "prog_type.m"
                {
#line 261 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_88_88 = (MR_Integer) parse_tree__prog_type__V_83_83;
#line 261 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_89_89 = (MR_Integer) parse_tree__prog_type__V_30_30;

#line 261 "prog_type.m"
                  {
#line 261 "prog_type.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_88_88, parse_tree__prog_type__V_89_89);
                  }
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
              case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                  case (MR_Integer) 0:
#line 3077 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 1:
#line 3083 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
                break;
#line 261 "prog_type.m"
            }
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
        case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
            case (MR_Integer) 0:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Word parse_tree__prog_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 261 "prog_type.m"
#line 261 "prog_type.m"
                switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                  case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                    switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                      case (MR_Integer) 0:
#line 3125 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 1:
#line 3131 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 2:
#line 3137 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 3:
#line 3143 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 4:
#line 3149 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                    }
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 1:
#line 3159 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 2:
#line 3165 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                      case (MR_Integer) 0:
#line 261 "prog_type.m"
                        {
#line 261 "prog_type.m"
                          MR_Word parse_tree__prog_type__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_90_90 = (MR_Integer) parse_tree__prog_type__V_84_84;
#line 261 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_91_91 = (MR_Integer) parse_tree__prog_type__V_55_55;

#line 261 "prog_type.m"
                          {
#line 261 "prog_type.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_90_90, parse_tree__prog_type__V_91_91);
                          }
#line 261 "prog_type.m"
                        }
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 1:
#line 3198 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                    }
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 1:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Word parse_tree__prog_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 261 "prog_type.m"
#line 261 "prog_type.m"
                switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                  case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                    switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 261 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                      case (MR_Integer) 0:
#line 3233 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 1:
#line 3239 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 2:
#line 3245 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 3:
#line 3251 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 4:
#line 3257 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                    }
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 1:
#line 3267 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 2:
#line 3273 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                  case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
                      case (MR_Integer) 0:
#line 3286 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                      case (MR_Integer) 1:
#line 261 "prog_type.m"
                        {
#line 261 "prog_type.m"
                          MR_Word parse_tree__prog_type__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_92_92 = (MR_Integer) parse_tree__prog_type__V_85_85;
#line 261 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_93_93 = (MR_Integer) parse_tree__prog_type__V_75_75;

#line 261 "prog_type.m"
                          {
#line 261 "prog_type.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_92_92, parse_tree__prog_type__V_93_93);
                          }
#line 261 "prog_type.m"
                        }
#line 261 "prog_type.m"
                        break;
#line 261 "prog_type.m"
                    }
#line 261 "prog_type.m"
                    break;
#line 261 "prog_type.m"
                }
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
      }
#line 261 "prog_type.m"
  }
#line 261 "prog_type.m"
}

#line 261 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0(
#line 261 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 261 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 261 "prog_type.m"
{
#line 261 "prog_type.m"
  {
#line 261 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 261 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 261 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 261 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 261 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 261 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 261 "prog_type.m"
    else
#line 261 "prog_type.m"
#line 261 "prog_type.m"
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 261 "prog_type.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
        case (MR_Integer) 0:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__1_1)) {
#line 261 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
            case (MR_Integer) 0:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 261 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 1:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 261 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_8 == parse_tree__prog_type__CastX_7);
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 2:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_11 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_12 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 261 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_12 == parse_tree__prog_type__CastX_11);
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 3:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_13 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_14 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 261 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_14 == parse_tree__prog_type__CastX_13);
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 4:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_17 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 261 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_18 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 261 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_18 == parse_tree__prog_type__CastX_17);
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
        case (MR_Integer) 1:
#line 261 "prog_type.m"
          {
#line 261 "prog_type.m"
            MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "prog_type.m"
            MR_Word parse_tree__prog_type__V_4_4;

#line 261 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 261 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3465 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_3_3 == parse_tree__prog_type__V_4_4);
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
        case (MR_Integer) 2:
#line 261 "prog_type.m"
          {
#line 261 "prog_type.m"
            MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "prog_type.m"
            MR_Word parse_tree__prog_type__V_10_10;

#line 261 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 261 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3490 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_9_9 == parse_tree__prog_type__V_10_10);
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
        case (MR_Integer) 3:
#line 261 "prog_type.m"
#line 261 "prog_type.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 261 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 261 "prog_type.m"
            case (MR_Integer) 0:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "prog_type.m"
                MR_Word parse_tree__prog_type__V_16_16;

#line 261 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 261 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 261 "prog_type.m"
                  {
#line 261 "prog_type.m"
                    parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3522 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == parse_tree__prog_type__V_16_16);
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
            case (MR_Integer) 1:
#line 261 "prog_type.m"
              {
#line 261 "prog_type.m"
                MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "prog_type.m"
                MR_Word parse_tree__prog_type__V_20_20;

#line 261 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 261 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 261 "prog_type.m"
                  {
#line 261 "prog_type.m"
                    parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3547 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == parse_tree__prog_type__V_20_20);
#line 261 "prog_type.m"
                  }
#line 261 "prog_type.m"
              }
#line 261 "prog_type.m"
              break;
#line 261 "prog_type.m"
          }
#line 261 "prog_type.m"
          break;
#line 261 "prog_type.m"
      }
#line 261 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 261 "prog_type.m"
  }
#line 261 "prog_type.m"
}

#line 288 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(
#line 288 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 288 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 288 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 288 "prog_type.m"
{
#line 288 "prog_type.m"
  {
#line 288 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 288 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 288 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 288 "prog_type.m"
    {
#line 288 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
#line 288 "prog_type.m"
  }
#line 288 "prog_type.m"
}

#line 288 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(
#line 288 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 288 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 288 "prog_type.m"
{
#line 3607 "parse_tree.prog_type.c"
  {
#line 3609 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3612 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3614 "parse_tree.prog_type.c"
  }
#line 288 "prog_type.m"
}

#line 278 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(
#line 278 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 278 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 278 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 278 "prog_type.m"
{
#line 278 "prog_type.m"
  {
#line 278 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 278 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 278 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 278 "prog_type.m"
    {
#line 278 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
#line 278 "prog_type.m"
  }
#line 278 "prog_type.m"
}

#line 278 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(
#line 278 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 278 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 278 "prog_type.m"
{
#line 3658 "parse_tree.prog_type.c"
  {
#line 3660 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3663 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3665 "parse_tree.prog_type.c"
  }
#line 278 "prog_type.m"
}

#line 284 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(
#line 284 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 284 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 284 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 284 "prog_type.m"
{
#line 284 "prog_type.m"
  {
#line 284 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 284 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 284 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 284 "prog_type.m"
    {
#line 284 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
#line 284 "prog_type.m"
  }
#line 284 "prog_type.m"
}

#line 284 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(
#line 284 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 284 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 284 "prog_type.m"
{
#line 3709 "parse_tree.prog_type.c"
  {
#line 3711 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3714 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3716 "parse_tree.prog_type.c"
  }
#line 284 "prog_type.m"
}

#line 272 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(
#line 272 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 272 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 272 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 272 "prog_type.m"
{
#line 272 "prog_type.m"
  {
#line 272 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 272 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 272 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 272 "prog_type.m"
    {
#line 272 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
#line 272 "prog_type.m"
  }
#line 272 "prog_type.m"
}

#line 272 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(
#line 272 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 272 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 272 "prog_type.m"
{
#line 3760 "parse_tree.prog_type.c"
  {
#line 3762 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3765 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3767 "parse_tree.prog_type.c"
  }
#line 272 "prog_type.m"
}

#line 302 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0(
#line 302 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 302 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 302 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 302 "prog_type.m"
{
#line 302 "prog_type.m"
  {
#line 302 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 302 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 302 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_9 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 302 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_8 == parse_tree__prog_type__CastY_9);
#line 302 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 3796 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 302 "prog_type.m"
    else
#line 302 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "prog_type.m"
        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 302 "prog_type.m"
      else
#line 3808 "parse_tree.prog_type.c"
        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 302 "prog_type.m"
    else
#line 302 "prog_type.m"
      {
#line 302 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 302 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3819 "parse_tree.prog_type.c"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 302 "prog_type.m"
        else
#line 302 "prog_type.m"
          {
#line 302 "prog_type.m"
            MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));

#line 302 "prog_type.m"
            {
#line 302 "prog_type.m"
              parse_tree__prog_data____Compare____type_ctor_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_11_11, parse_tree__prog_type__V_5_5);
            }
#line 302 "prog_type.m"
          }
#line 302 "prog_type.m"
      }
#line 302 "prog_type.m"
  }
#line 302 "prog_type.m"
}

#line 302 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0(
#line 302 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 302 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 302 "prog_type.m"
{
#line 302 "prog_type.m"
  {
#line 302 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 302 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 302 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 302 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_7 == parse_tree__prog_type__CastY_8);
#line 302 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 302 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 302 "prog_type.m"
    else
#line 302 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "prog_type.m"
      {
#line 302 "prog_type.m"
        MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 302 "prog_type.m"
        MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 302 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 302 "prog_type.m"
      }
#line 302 "prog_type.m"
    else
#line 302 "prog_type.m"
      {
#line 302 "prog_type.m"
        MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 302 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4;

#line 302 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 302 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 302 "prog_type.m"
          {
#line 302 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3898 "parse_tree.prog_type.c"
            {
#line 3900 "parse_tree.prog_type.c"
              parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__prog_type__V_3_3, parse_tree__prog_type__V_4_4);
            }
#line 302 "prog_type.m"
          }
#line 302 "prog_type.m"
      }
#line 302 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 302 "prog_type.m"
  }
#line 302 "prog_type.m"
}

#line 219 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(
#line 219 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 219 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 219 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 219 "prog_type.m"
{
#line 219 "prog_type.m"
  {
#line 219 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 219 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 219 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 219 "prog_type.m"
    {
#line 219 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
    }
#line 219 "prog_type.m"
  }
#line 219 "prog_type.m"
}

#line 219 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(
#line 219 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 219 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 219 "prog_type.m"
{
#line 3953 "parse_tree.prog_type.c"
  {
#line 3955 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3958 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3960 "parse_tree.prog_type.c"
  }
#line 219 "prog_type.m"
}

#line 323 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0(
#line 323 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 323 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 323 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 323 "prog_type.m"
{
#line 323 "prog_type.m"
  {
#line 323 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 323 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 323 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 323 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 323 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 3989 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "prog_type.m"
    else
#line 323 "prog_type.m"
      {
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 2)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 3)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 4)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 5)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_16_16;

#line 323 "prog_type.m"
        {
#line 323 "prog_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], &parse_tree__prog_type__V_16_16, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
        }
#line 4027 "parse_tree.prog_type.c"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == (MR_Integer) 0);
#line 323 "prog_type.m"
        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 323 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_16_16;
#line 323 "prog_type.m"
        else
#line 323 "prog_type.m"
          {
#line 323 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 323 "prog_type.m"
            {
#line 323 "prog_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[1], &parse_tree__prog_type__V_17_17, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
            }
#line 4047 "parse_tree.prog_type.c"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_17_17 == (MR_Integer) 0);
#line 323 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 323 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_17_17;
#line 323 "prog_type.m"
            else
#line 323 "prog_type.m"
              {
#line 323 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 323 "prog_type.m"
                {
#line 323 "prog_type.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_2[0], &parse_tree__prog_type__V_18_18, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                }
#line 4067 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_18_18 == (MR_Integer) 0);
#line 323 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 323 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_18_18;
#line 323 "prog_type.m"
                else
#line 323 "prog_type.m"
                  {
#line 323 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_19_19;

#line 323 "prog_type.m"
                    {
#line 323 "prog_type.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[4], &parse_tree__prog_type__V_19_19, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                    }
#line 4087 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == (MR_Integer) 0);
#line 323 "prog_type.m"
                    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 323 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_19_19;
#line 323 "prog_type.m"
                    else
#line 323 "prog_type.m"
                      {
#line 323 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_20_20;

#line 323 "prog_type.m"
                        {
#line 323 "prog_type.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[5], &parse_tree__prog_type__V_20_20, ((MR_Box) (parse_tree__prog_type__V_8_8)), ((MR_Box) (parse_tree__prog_type__V_14_14)));
                        }
#line 4107 "parse_tree.prog_type.c"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_20_20 == (MR_Integer) 0);
#line 323 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 323 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
                          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_20_20;
#line 323 "prog_type.m"
                        else
#line 323 "prog_type.m"
                          {
#line 323 "prog_type.m"
                            parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_9_9, parse_tree__prog_type__V_15_15);
                          }
#line 323 "prog_type.m"
                      }
#line 323 "prog_type.m"
                  }
#line 323 "prog_type.m"
              }
#line 323 "prog_type.m"
          }
#line 323 "prog_type.m"
      }
#line 323 "prog_type.m"
  }
#line 323 "prog_type.m"
}

#line 323 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0(
#line 323 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 323 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 323 "prog_type.m"
{
#line 323 "prog_type.m"
  {
#line 323 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 323 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_15 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 323 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_16 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 323 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_15 == parse_tree__prog_type__CastY_16);
#line 323 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 323 "prog_type.m"
    else
#line 323 "prog_type.m"
      {
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_18_18;
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_19_19;
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_20_20;
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 5)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 323 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));

#line 4198 "parse_tree.prog_type.c"
        {
#line 4200 "parse_tree.prog_type.c"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], ((MR_Box) (parse_tree__prog_type__V_3_3)), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 323 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
          {
#line 4207 "parse_tree.prog_type.c"
            parse_tree__prog_type__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_type_scalar_common_1[1];
#line 4209 "parse_tree.prog_type.c"
            {
#line 4211 "parse_tree.prog_type.c"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
            }
#line 323 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
              {
#line 4218 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_type_scalar_common_2[0];
#line 4220 "parse_tree.prog_type.c"
                {
#line 4222 "parse_tree.prog_type.c"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_19_19, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
                }
#line 323 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
                  {
#line 4229 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[4];
#line 4231 "parse_tree.prog_type.c"
                    {
#line 4233 "parse_tree.prog_type.c"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                    }
#line 323 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 323 "prog_type.m"
                      {
#line 4240 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 4242 "parse_tree.prog_type.c"
                        {
#line 4244 "parse_tree.prog_type.c"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_21_21, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                        }
#line 323 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 4249 "parse_tree.prog_type.c"
                          {
#line 4251 "parse_tree.prog_type.c"
                            parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_type__V_8_8, parse_tree__prog_type__V_14_14);
                          }
#line 323 "prog_type.m"
                      }
#line 323 "prog_type.m"
                  }
#line 323 "prog_type.m"
              }
#line 323 "prog_type.m"
          }
#line 323 "prog_type.m"
      }
#line 323 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 323 "prog_type.m"
  }
#line 323 "prog_type.m"
}

#line 1303 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1303 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1303 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1303 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7)
#line 1303 "prog_type.m"
{
#line 1305 "prog_type.m"
  while (MR_TRUE)
#line 1305 "prog_type.m"
    {
#line 1305 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1305 "prog_type.m"
      {
#line 1305 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1305 "prog_type.m"
        MR_Word parse_tree__prog_type__X_4;
#line 1305 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_5;

#line 1305 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1305 "prog_type.m"
          {
#line 1305 "prog_type.m"
            parse_tree__prog_type__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1305 "prog_type.m"
            parse_tree__prog_type__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1307 "prog_type.m"
            {
#line 1307 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__X_4, parse_tree__prog_type__Y_6, parse_tree__prog_type__Bindings_7);
            }
#line 1308 "prog_type.m"
            if (!(parse_tree__prog_type__succeeded))
#line 1309 "prog_type.m"
              {
#line 1309 "prog_type.m"
                /* direct tailcall eliminated */
#line 1309 "prog_type.m"
                {
#line 1309 "prog_type.m"
                  MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_5;

#line 1309 "prog_type.m"
                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1309 "prog_type.m"
                }
#line 1309 "prog_type.m"
                continue;
#line 1309 "prog_type.m"
              }
#line 1305 "prog_type.m"
          }
#line 1305 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1305 "prog_type.m"
      }
#line 1305 "prog_type.m"
      break;
#line 1305 "prog_type.m"
    }
#line 1303 "prog_type.m"
}

#line 1263 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1263 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1263 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1263 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6)
#line 1263 "prog_type.m"
{
#line 1267 "prog_type.m"
  while (MR_TRUE)
#line 1267 "prog_type.m"
    {
#line 1267 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1267 "prog_type.m"
      {
#line 1267 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1267 "prog_type.m"
#line 1267 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) {
#line 1267 "prog_type.m"
          default:
#line 1267 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1267 "prog_type.m"
            break;
#line 1267 "prog_type.m"
          case (MR_Integer) 0:
#line 1267 "prog_type.m"
            {
#line 1267 "prog_type.m"
              MR_Word parse_tree__prog_type__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1267 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));

#line 1268 "prog_type.m"
              {
#line 1268 "prog_type.m"
                parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_5)));
              }
#line 1268 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1269 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1268 "prog_type.m"
              else
#line 1271 "prog_type.m"
                {
#line 1271 "prog_type.m"
                  MR_Word parse_tree__prog_type__BindingOfX_9;
#line 1271 "prog_type.m"
                  MR_Box parse_tree__prog_type__conv1_BindingOfX_9;

#line 1271 "prog_type.m"
                  {
#line 1271 "prog_type.m"
                    parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv1_BindingOfX_9);
                  }
#line 1271 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1271 "prog_type.m"
                    {
#line 1271 "prog_type.m"
                      parse_tree__prog_type__BindingOfX_9 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfX_9);
#line 1271 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 1271 "prog_type.m"
                    }
#line 1271 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1272 "prog_type.m"
                    {
#line 1272 "prog_type.m"
                      /* direct tailcall eliminated */
#line 1272 "prog_type.m"
                      {
#line 1272 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_9;

#line 1272 "prog_type.m"
                        parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1272 "prog_type.m"
                      }
#line 1272 "prog_type.m"
                      continue;
#line 1272 "prog_type.m"
                    }
#line 1271 "prog_type.m"
                }
#line 1267 "prog_type.m"
            }
#line 1267 "prog_type.m"
            break;
#line 1267 "prog_type.m"
          case (MR_Integer) 1:
#line 1275 "prog_type.m"
            {
#line 1275 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1275 "prog_type.m"
              MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1275 "prog_type.m"
              MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1276 "prog_type.m"
              {
#line 1276 "prog_type.m"
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_11, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
              }
#line 1275 "prog_type.m"
            }
#line 1267 "prog_type.m"
            break;
#line 1267 "prog_type.m"
          case (MR_Integer) 3:
#line 1267 "prog_type.m"
#line 1267 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) {
#line 1267 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1267 "prog_type.m"
              case (MR_Integer) 0:
#line 1286 "prog_type.m"
                {
#line 1286 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1286 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1287 "prog_type.m"
                  {
#line 1287 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_21, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
#line 1286 "prog_type.m"
                }
#line 1267 "prog_type.m"
                break;
#line 1267 "prog_type.m"
              case (MR_Integer) 1:
#line 1278 "prog_type.m"
                {
#line 1278 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1278 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1278 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1280 "prog_type.m"
                  {
#line 1280 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
#line 1281 "prog_type.m"
                  if (!(parse_tree__prog_type__succeeded))
#line 1282 "prog_type.m"
                    {
#line 1282 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16;

#line 1282 "prog_type.m"
                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__MaybeRet_13)) == (MR_mktag((MR_Integer) 1)));
#line 1282 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1282 "prog_type.m"
                        {
#line 1282 "prog_type.m"
                          parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 1283 "prog_type.m"
                          /* direct tailcall eliminated */
#line 1283 "prog_type.m"
                          {
#line 1283 "prog_type.m"
                            MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__Ret_16;

#line 1283 "prog_type.m"
                            parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1283 "prog_type.m"
                          }
#line 1283 "prog_type.m"
                          continue;
#line 1282 "prog_type.m"
                        }
#line 1282 "prog_type.m"
                    }
#line 1278 "prog_type.m"
                }
#line 1267 "prog_type.m"
                break;
#line 1267 "prog_type.m"
              case (MR_Integer) 2:
#line 1289 "prog_type.m"
                {
#line 1289 "prog_type.m"
                  MR_Word parse_tree__prog_type__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1289 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1289 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1291 "prog_type.m"
                  {
#line 1291 "prog_type.m"
                    parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_24)), ((MR_Box) (parse_tree__prog_type__Y_5)));
                  }
#line 1292 "prog_type.m"
                  if (!(parse_tree__prog_type__succeeded))
#line 1292 "prog_type.m"
                    {
#line 1293 "prog_type.m"
                      {
#line 1293 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_26, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                      }
#line 1292 "prog_type.m"
                      if (!(parse_tree__prog_type__succeeded))
#line 1295 "prog_type.m"
                        {
#line 1295 "prog_type.m"
                          MR_Word parse_tree__prog_type__BindingOfX_22;
#line 1295 "prog_type.m"
                          MR_Box parse_tree__prog_type__conv0_BindingOfX_22;

#line 1295 "prog_type.m"
                          {
#line 1295 "prog_type.m"
                            parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_24)), &parse_tree__prog_type__conv0_BindingOfX_22);
                          }
#line 1295 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1295 "prog_type.m"
                            {
#line 1295 "prog_type.m"
                              parse_tree__prog_type__BindingOfX_22 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_22);
#line 1295 "prog_type.m"
                              parse_tree__prog_type__succeeded = MR_TRUE;
#line 1295 "prog_type.m"
                            }
#line 1295 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1296 "prog_type.m"
                            {
#line 1296 "prog_type.m"
                              /* direct tailcall eliminated */
#line 1296 "prog_type.m"
                              {
#line 1296 "prog_type.m"
                                MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_22;

#line 1296 "prog_type.m"
                                parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1296 "prog_type.m"
                              }
#line 1296 "prog_type.m"
                              continue;
#line 1296 "prog_type.m"
                            }
#line 1295 "prog_type.m"
                        }
#line 1292 "prog_type.m"
                    }
#line 1289 "prog_type.m"
                }
#line 1267 "prog_type.m"
                break;
#line 1267 "prog_type.m"
              case (MR_Integer) 3:
#line 1299 "prog_type.m"
                {
#line 1299 "prog_type.m"
                  MR_Word parse_tree__prog_type__X_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1299 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1300 "prog_type.m"
                  /* direct tailcall eliminated */
#line 1300 "prog_type.m"
                  {
#line 1300 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__X_27;

#line 1300 "prog_type.m"
                    parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1300 "prog_type.m"
                  }
#line 1300 "prog_type.m"
                  continue;
#line 1299 "prog_type.m"
                }
#line 1267 "prog_type.m"
                break;
#line 1267 "prog_type.m"
            }
#line 1267 "prog_type.m"
            break;
#line 1267 "prog_type.m"
        }
#line 1267 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1267 "prog_type.m"
      }
#line 1267 "prog_type.m"
      break;
#line 1267 "prog_type.m"
    }
#line 1263 "prog_type.m"
}

#line 1242 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1242 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1242 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1242 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1242 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8)
#line 1242 "prog_type.m"
{
#line 1246 "prog_type.m"
  while (MR_TRUE)
#line 1246 "prog_type.m"
    {
#line 1246 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1246 "prog_type.m"
      {
#line 1246 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1246 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1246 "prog_type.m"
          {
#line 1246 "prog_type.m"
            *parse_tree__prog_type__ArgsY_3 = parse_tree__prog_type__HeadVar__2_2;
#line 1246 "prog_type.m"
            *parse_tree__prog_type__KindY_5 = parse_tree__prog_type__HeadVar__4_4;
#line 1246 "prog_type.m"
            *parse_tree__prog_type__STATE_VARIABLE_Bindings_8 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7;
#line 1246 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1246 "prog_type.m"
          }
#line 1246 "prog_type.m"
        else
#line 1248 "prog_type.m"
          {
#line 1248 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgX_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1248 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1248 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgY0_17;
#line 1248 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsY0_18;
#line 1248 "prog_type.m"
            MR_Word parse_tree__prog_type__KindY1_24;
#line 1248 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;
#line 1248 "prog_type.m"
            MR_Word parse_tree__prog_type__V_28_28;

#line 1247 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1247 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1247 "prog_type.m"
              {
#line 1247 "prog_type.m"
                parse_tree__prog_type__ArgY0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1247 "prog_type.m"
                parse_tree__prog_type__ArgsY0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1249 "prog_type.m"
                {
#line 1249 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__ArgX_15, parse_tree__prog_type__ArgY0_17, parse_tree__prog_type__HeadTypeParams_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                }
#line 1248 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1248 "prog_type.m"
                  {
#line 1250 "prog_type.m"
                    {
#line 1250 "prog_type.m"
                      parse_tree__prog_type__V_28_28 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type__ArgY0_17);
                    }
#line 1250 "prog_type.m"
                    {
#line 1250 "prog_type.m"
                      parse_tree__prog_type__KindY1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 1250 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__4_4));
#line 1250 "prog_type.m"
                    }
#line 1251 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1251 "prog_type.m"
                    {
#line 1251 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__ArgsX_16;
#line 1251 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__ArgsY0_18;
#line 1251 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__4__tmp_copy_4 = parse_tree__prog_type__KindY1_24;
#line 1251 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1251 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7;
#line 1251 "prog_type.m"
                      parse_tree__prog_type__HeadVar__4_4 = parse_tree__prog_type__HeadVar__4__tmp_copy_4;
#line 1251 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1251 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1251 "prog_type.m"
                    }
#line 1251 "prog_type.m"
                    continue;
#line 1248 "prog_type.m"
                  }
#line 1247 "prog_type.m"
              }
#line 1248 "prog_type.m"
          }
#line 1246 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1246 "prog_type.m"
      }
#line 1246 "prog_type.m"
      break;
#line 1246 "prog_type.m"
    }
#line 1242 "prog_type.m"
}

#line 1230 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1230 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1230 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1230 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1230 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20)
#line 1230 "prog_type.m"
{
#line 1235 "prog_type.m"
  {
#line 1235 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1235 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1235 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsX_16;
#line 1235 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY0_17;
#line 1235 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY_18;

#line 1236 "prog_type.m"
    {
#line 1236 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsX_9, &parse_tree__prog_type__RevArgsX_16);
    }
#line 1237 "prog_type.m"
    {
#line 1237 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsY0_10, &parse_tree__prog_type__RevArgsY0_17);
    }
#line 1238 "prog_type.m"
    {
#line 1238 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(parse_tree__prog_type__RevArgsX_16, parse_tree__prog_type__RevArgsY0_17, &parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__KindY0_12, parse_tree__prog_type__KindY_13, parse_tree__prog_type__HeadTypeParams_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19, parse_tree__prog_type__STATE_VARIABLE_Bindings_20);
    }
#line 1235 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1235 "prog_type.m"
      {
#line 1240 "prog_type.m"
        {
#line 1240 "prog_type.m"
          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__ArgsY_11);
        }
#line 1240 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1235 "prog_type.m"
      }
#line 1235 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1235 "prog_type.m"
  }
#line 1230 "prog_type.m"
}

#line 1177 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1177 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1177 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33)
#line 1177 "prog_type.m"
{
#line 1182 "prog_type.m"
  while (MR_TRUE)
#line 1182 "prog_type.m"
    {
#line 1182 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1182 "prog_type.m"
      {
#line 1182 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1182 "prog_type.m"
#line 1182 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) {
#line 1182 "prog_type.m"
          default:
#line 1182 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1182 "prog_type.m"
            break;
#line 1182 "prog_type.m"
          case (MR_Integer) 1:
#line 1182 "prog_type.m"
            {
#line 1182 "prog_type.m"
              MR_Word parse_tree__prog_type__NameY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1182 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1182 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1182 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_15;
#line 1182 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY_16;
#line 1182 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48;
#line 1182 "prog_type.m"
              MR_Word parse_tree__prog_type__V_49_49;

#line 1183 "prog_type.m"
              {
#line 1183 "prog_type.m"
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_13, &parse_tree__prog_type__ArgsY_15, parse_tree__prog_type__KindY0_14, &parse_tree__prog_type__KindY_16, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48);
              }
#line 1182 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1182 "prog_type.m"
                {
#line 1185 "prog_type.m"
                  {
#line 1185 "prog_type.m"
                    parse_tree__prog_type__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 0) = ((MR_Box) (parse_tree__prog_type__NameY_12));
#line 1185 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_15));
#line 1185 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 2) = ((MR_Box) (parse_tree__prog_type__KindY_16));
#line 1185 "prog_type.m"
                  }
#line 1185 "prog_type.m"
                  {
#line 1185 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_49_49, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                  }
#line 1182 "prog_type.m"
                }
#line 1182 "prog_type.m"
            }
#line 1182 "prog_type.m"
            break;
#line 1182 "prog_type.m"
          case (MR_Integer) 2:
#line 1188 "prog_type.m"
            {
#line 1189 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1190 "prog_type.m"
                {
#line 1190 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                }
#line 1188 "prog_type.m"
            }
#line 1182 "prog_type.m"
            break;
#line 1182 "prog_type.m"
          case (MR_Integer) 3:
#line 1182 "prog_type.m"
#line 1182 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) {
#line 1182 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1182 "prog_type.m"
              case (MR_Integer) 0:
#line 1196 "prog_type.m"
                {
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43;
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_44_44;
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__ArgsY0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__KindY0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__ArgsY_53;
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__KindY_54;

#line 1197 "prog_type.m"
                  {
#line 1197 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_51, &parse_tree__prog_type__ArgsY_53, parse_tree__prog_type__KindY0_52, &parse_tree__prog_type__KindY_54, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43);
                  }
#line 1196 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1196 "prog_type.m"
                    {
#line 1199 "prog_type.m"
                      {
#line 1199 "prog_type.m"
                        parse_tree__prog_type__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_type.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1199 "prog_type.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_53));
#line 1199 "prog_type.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 2) = ((MR_Box) (parse_tree__prog_type__KindY_54));
#line 1199 "prog_type.m"
                      }
#line 1199 "prog_type.m"
                      {
#line 1199 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_44_44, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                      }
#line 1196 "prog_type.m"
                    }
#line 1196 "prog_type.m"
                }
#line 1182 "prog_type.m"
                break;
#line 1182 "prog_type.m"
              case (MR_Integer) 1:
#line 1192 "prog_type.m"
                {
#line 1193 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1194 "prog_type.m"
                    {
#line 1194 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                    }
#line 1192 "prog_type.m"
                }
#line 1182 "prog_type.m"
                break;
#line 1182 "prog_type.m"
              case (MR_Integer) 2:
#line 1202 "prog_type.m"
                {
#line 1202 "prog_type.m"
                  MR_Word parse_tree__prog_type__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1202 "prog_type.m"
                  MR_Word parse_tree__prog_type__VarY_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1202 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1202 "prog_type.m"
                  MR_Integer parse_tree__prog_type__NArgsX0_24;
#line 1202 "prog_type.m"
                  MR_Integer parse_tree__prog_type__NArgsY0_25;
#line 1202 "prog_type.m"
                  MR_Word parse_tree__prog_type__Result_26;
#line 1202 "prog_type.m"
                  MR_Word parse_tree__prog_type__ArgsY0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1203 "prog_type.m"
                  {
#line 1203 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__NArgsX0_24);
                  }
#line 1204 "prog_type.m"
                  {
#line 1204 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__NArgsY0_25);
                  }
#line 1205 "prog_type.m"
                  {
#line 1205 "prog_type.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_type__Result_26, parse_tree__prog_type__NArgsX0_24, parse_tree__prog_type__NArgsY0_25);
                  }
#line 1212 "prog_type.m"
#line 1212 "prog_type.m"
                  switch (parse_tree__prog_type__Result_26) {
#line 1212 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1212 "prog_type.m"
                    case (MR_Integer) 1:
#line 1207 "prog_type.m"
                      {
#line 1207 "prog_type.m"
                        MR_Word parse_tree__prog_type__Kind_27;
#line 1207 "prog_type.m"
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40;
#line 1207 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_41_41;
#line 1207 "prog_type.m"
                        MR_Word parse_tree__prog_type__ArgsY_55;

#line 1208 "prog_type.m"
                        {
#line 1208 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__ArgsY_55, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_27, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40);
                        }
#line 1207 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1207 "prog_type.m"
                          {
#line 1210 "prog_type.m"
                            {
#line 1210 "prog_type.m"
                              parse_tree__prog_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1210 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 1) = ((MR_Box) (parse_tree__prog_type__VarY_22));
#line 1210 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 2) = ((MR_Box) (parse_tree__prog_type__ArgsY_55));
#line 1210 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 3) = ((MR_Box) (parse_tree__prog_type__Kind_27));
#line 1210 "prog_type.m"
                            }
#line 1210 "prog_type.m"
                            {
#line 1210 "prog_type.m"
                              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_41_41, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                            }
#line 1207 "prog_type.m"
                          }
#line 1207 "prog_type.m"
                      }
#line 1212 "prog_type.m"
                      break;
#line 1212 "prog_type.m"
                    case (MR_Integer) 0:
#line 1213 "prog_type.m"
                      {
#line 1213 "prog_type.m"
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38;
#line 1213 "prog_type.m"
                        MR_Word parse_tree__prog_type__Kind_56;
#line 1215 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_28_28;

#line 1215 "prog_type.m"
                        {
#line 1215 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__V_28_28, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38);
                        }
#line 1213 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1217 "prog_type.m"
                          {
#line 1217 "prog_type.m"
                            parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__VarY_22, parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1213 "prog_type.m"
                      }
#line 1212 "prog_type.m"
                      break;
#line 1212 "prog_type.m"
                    case (MR_Integer) 2:
#line 1219 "prog_type.m"
                      {
#line 1219 "prog_type.m"
                        MR_Word parse_tree__prog_type__ArgsX_29;
#line 1219 "prog_type.m"
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35;
#line 1219 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_36_36;
#line 1219 "prog_type.m"
                        MR_Word parse_tree__prog_type__Kind_57;

#line 1220 "prog_type.m"
                        {
#line 1220 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsY0_59, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__ArgsX_29, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_57, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35);
                        }
#line 1219 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1219 "prog_type.m"
                          {
#line 1222 "prog_type.m"
                            {
#line 1222 "prog_type.m"
                              parse_tree__prog_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1222 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 1) = ((MR_Box) (parse_tree__prog_type__VarX_8));
#line 1222 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 2) = ((MR_Box) (parse_tree__prog_type__ArgsX_29));
#line 1222 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 3) = ((MR_Box) (parse_tree__prog_type__Kind_57));
#line 1222 "prog_type.m"
                            }
#line 1222 "prog_type.m"
                            {
#line 1222 "prog_type.m"
                              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_22, parse_tree__prog_type__V_36_36, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                            }
#line 1219 "prog_type.m"
                          }
#line 1219 "prog_type.m"
                      }
#line 1212 "prog_type.m"
                      break;
#line 1212 "prog_type.m"
                  }
#line 1202 "prog_type.m"
                }
#line 1182 "prog_type.m"
                break;
#line 1182 "prog_type.m"
              case (MR_Integer) 3:
#line 1226 "prog_type.m"
                {
#line 1226 "prog_type.m"
                  MR_Word parse_tree__prog_type__RawY_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1226 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1227 "prog_type.m"
                  /* direct tailcall eliminated */
#line 1227 "prog_type.m"
                  {
#line 1227 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeY__tmp_copy_7 = parse_tree__prog_type__RawY_30;

#line 1227 "prog_type.m"
                    parse_tree__prog_type__TypeY_7 = parse_tree__prog_type__TypeY__tmp_copy_7;
#line 1227 "prog_type.m"
                  }
#line 1227 "prog_type.m"
                  continue;
#line 1226 "prog_type.m"
                }
#line 1182 "prog_type.m"
                break;
#line 1182 "prog_type.m"
            }
#line 1182 "prog_type.m"
            break;
#line 1182 "prog_type.m"
        }
#line 1182 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1182 "prog_type.m"
      }
#line 1182 "prog_type.m"
      break;
#line 1182 "prog_type.m"
    }
#line 1177 "prog_type.m"
}

#line 1146 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1146 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1146 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22)
#line 1146 "prog_type.m"
{
#line 1150 "prog_type.m"
  {
#line 1150 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1150 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1150 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsX_11;
#line 1150 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;

#line 1150 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1150 "prog_type.m"
      {
#line 1150 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1150 "prog_type.m"
        parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1150 "prog_type.m"
        parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1151 "prog_type.m"
        {
#line 1151 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_10, parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
        }
#line 1150 "prog_type.m"
      }
#line 1150 "prog_type.m"
    else
#line 1152 "prog_type.m"
      {
#line 1152 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_13;
#line 1152 "prog_type.m"
        MR_Word parse_tree__prog_type__ArgsY_14;
#line 1152 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;

#line 1152 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1152 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1152 "prog_type.m"
          {
#line 1152 "prog_type.m"
            parse_tree__prog_type__VarY_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1152 "prog_type.m"
            parse_tree__prog_type__ArgsY_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1152 "prog_type.m"
            parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1153 "prog_type.m"
            {
#line 1153 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__VarY_13, parse_tree__prog_type__ArgsY_14, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
            }
#line 1152 "prog_type.m"
          }
#line 1152 "prog_type.m"
        else
#line 1154 "prog_type.m"
          {
#line 1154 "prog_type.m"
            MR_Word parse_tree__prog_type__RawX_16;
#line 1154 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 1154 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1154 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1154 "prog_type.m"
              {
#line 1154 "prog_type.m"
                parse_tree__prog_type__RawX_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1154 "prog_type.m"
                parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1155 "prog_type.m"
                {
#line 1155 "prog_type.m"
                  MR_Word parse_tree__prog_type__RawY_18;
#line 1155 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19;

#line 1155 "prog_type.m"
                  parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1155 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1155 "prog_type.m"
                    {
#line 1155 "prog_type.m"
                      parse_tree__prog_type__RawY_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1155 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1156 "prog_type.m"
                      {
#line 1156 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__RawY_18, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                      }
#line 1155 "prog_type.m"
                    }
#line 1155 "prog_type.m"
                  else
#line 1158 "prog_type.m"
                    {
#line 1158 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1155 "prog_type.m"
                }
#line 1154 "prog_type.m"
              }
#line 1154 "prog_type.m"
            else
#line 1160 "prog_type.m"
              {
#line 1160 "prog_type.m"
                MR_Word parse_tree__prog_type__RawY_28;
#line 1160 "prog_type.m"
                MR_Word parse_tree__prog_type__V_20_20;

#line 1160 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1160 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1160 "prog_type.m"
                  {
#line 1160 "prog_type.m"
                    parse_tree__prog_type__RawY_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1160 "prog_type.m"
                    parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1161 "prog_type.m"
                    {
#line 1161 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__RawY_28, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1160 "prog_type.m"
                  }
#line 1160 "prog_type.m"
              }
#line 1154 "prog_type.m"
          }
#line 1152 "prog_type.m"
      }
#line 1150 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1150 "prog_type.m"
  }
#line 1146 "prog_type.m"
}

#line 1114 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1114 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1114 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23)
#line 1114 "prog_type.m"
{
#line 1119 "prog_type.m"
  {
#line 1119 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1119 "prog_type.m"
#line 1119 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) {
#line 1119 "prog_type.m"
      default:
#line 1119 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_FALSE;
#line 1119 "prog_type.m"
        break;
#line 1119 "prog_type.m"
      case (MR_Integer) 1:
#line 1119 "prog_type.m"
        {
#line 1119 "prog_type.m"
          MR_Word parse_tree__prog_type__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1119 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1119 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsY_13;
#line 1119 "prog_type.m"
          MR_Word parse_tree__prog_type__V_41_41;
#line 1119 "prog_type.m"
          MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1120 "prog_type.m"
          MR_Word parse_tree__prog_type__V_14_14;

#line 1120 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1)));
#line 1120 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 1120 "prog_type.m"
            {
#line 1120 "prog_type.m"
              parse_tree__prog_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1120 "prog_type.m"
              parse_tree__prog_type__ArgsY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1120 "prog_type.m"
              parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1120 "prog_type.m"
              {
#line 1120 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__SymName_10, parse_tree__prog_type__V_41_41);
              }
#line 1119 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1125 "prog_type.m"
                {
#line 1125 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__ArgsY_13, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                }
#line 1120 "prog_type.m"
            }
#line 1119 "prog_type.m"
        }
#line 1119 "prog_type.m"
        break;
#line 1119 "prog_type.m"
      case (MR_Integer) 2:
#line 1127 "prog_type.m"
        {
#line 1127 "prog_type.m"
          MR_Word parse_tree__prog_type__BuiltinType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1127 "prog_type.m"
          MR_Word parse_tree__prog_type__V_42_42;

#line 1128 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2)));
#line 1128 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 1128 "prog_type.m"
            {
#line 1128 "prog_type.m"
              parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1128 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__BuiltinType_15 == parse_tree__prog_type__V_42_42);
#line 1127 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1127 "prog_type.m"
                {
#line 1127 "prog_type.m"
                  *parse_tree__prog_type__STATE_VARIABLE_Bindings_23 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22;
#line 1127 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 1127 "prog_type.m"
                }
#line 1128 "prog_type.m"
            }
#line 1127 "prog_type.m"
        }
#line 1119 "prog_type.m"
        break;
#line 1119 "prog_type.m"
      case (MR_Integer) 3:
#line 1119 "prog_type.m"
#line 1119 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) {
#line 1119 "prog_type.m"
          default:
#line 1119 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1119 "prog_type.m"
            break;
#line 1119 "prog_type.m"
          case (MR_Integer) 0:
#line 1139 "prog_type.m"
            {
#line 1139 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsX_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1139 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_40;
#line 1139 "prog_type.m"
              MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1140 "prog_type.m"
              MR_Word parse_tree__prog_type__V_21_21;

#line 1140 "prog_type.m"
              parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1140 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1140 "prog_type.m"
                {
#line 1140 "prog_type.m"
                  parse_tree__prog_type__ArgsY_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1140 "prog_type.m"
                  parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1141 "prog_type.m"
                  {
#line 1141 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_39, parse_tree__prog_type__ArgsY_40, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                  }
#line 1140 "prog_type.m"
                }
#line 1139 "prog_type.m"
            }
#line 1119 "prog_type.m"
            break;
#line 1119 "prog_type.m"
          case (MR_Integer) 1:
#line 1119 "prog_type.m"
            {
#line 1119 "prog_type.m"
              MR_Word parse_tree__prog_type__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1119 "prog_type.m"
              MR_Word parse_tree__prog_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1119 "prog_type.m"
              MR_Word parse_tree__prog_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1119 "prog_type.m"
              MR_Word parse_tree__prog_type__V_52_52;
#line 1119 "prog_type.m"
              MR_Word parse_tree__prog_type__V_53_53;
#line 1119 "prog_type.m"
              MR_Word parse_tree__prog_type__V_54_54;

#line 1131 "prog_type.m"
              parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1131 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1131 "prog_type.m"
                {
#line 1131 "prog_type.m"
                  parse_tree__prog_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1131 "prog_type.m"
                  parse_tree__prog_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1131 "prog_type.m"
                  parse_tree__prog_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1119 "prog_type.m"
                  if ((parse_tree__prog_type__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "prog_type.m"
                    {
#line 1131 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1130 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1130 "prog_type.m"
                        {
#line 1131 "prog_type.m"
                          parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1130 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1130 "prog_type.m"
                            {
#line 1131 "prog_type.m"
                              parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1130 "prog_type.m"
                              if (parse_tree__prog_type__succeeded)
#line 1132 "prog_type.m"
                                {
#line 1132 "prog_type.m"
                                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                                }
#line 1130 "prog_type.m"
                            }
#line 1130 "prog_type.m"
                        }
#line 1130 "prog_type.m"
                    }
#line 1119 "prog_type.m"
                  else
#line 1134 "prog_type.m"
                    {
#line 1134 "prog_type.m"
                      MR_Word parse_tree__prog_type__RetX_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, (MR_Integer) 0)));
#line 1134 "prog_type.m"
                      MR_Word parse_tree__prog_type__RetY_19;
#line 1134 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1135 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1134 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1134 "prog_type.m"
                        {
#line 1135 "prog_type.m"
                          parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1134 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1134 "prog_type.m"
                            {
#line 1135 "prog_type.m"
                              parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 1135 "prog_type.m"
                              if (parse_tree__prog_type__succeeded)
#line 1135 "prog_type.m"
                                {
#line 1135 "prog_type.m"
                                  parse_tree__prog_type__RetY_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_53_53, (MR_Integer) 0)));
#line 1136 "prog_type.m"
                                  {
#line 1136 "prog_type.m"
                                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                                  }
#line 1134 "prog_type.m"
                                  if (parse_tree__prog_type__succeeded)
#line 1137 "prog_type.m"
                                    {
#line 1137 "prog_type.m"
                                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RetX_18, parse_tree__prog_type__RetY_19, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                                    }
#line 1135 "prog_type.m"
                                }
#line 1134 "prog_type.m"
                            }
#line 1134 "prog_type.m"
                        }
#line 1134 "prog_type.m"
                    }
#line 1131 "prog_type.m"
                }
#line 1119 "prog_type.m"
            }
#line 1119 "prog_type.m"
            break;
#line 1119 "prog_type.m"
        }
#line 1119 "prog_type.m"
        break;
#line 1119 "prog_type.m"
    }
#line 1119 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1119 "prog_type.m"
  }
#line 1114 "prog_type.m"
}

#line 1093 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1093 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1093 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16)
#line 1093 "prog_type.m"
{
#line 1097 "prog_type.m"
  while (MR_TRUE)
#line 1097 "prog_type.m"
    {
#line 1097 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1097 "prog_type.m"
      {
#line 1097 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;
#line 1097 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfVar_12;
#line 1097 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfVar_12;

#line 1097 "prog_type.m"
        {
#line 1097 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, ((MR_Box) (parse_tree__prog_type__Var_7)), &parse_tree__prog_type__conv0_BindingOfVar_12);
        }
#line 1097 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1097 "prog_type.m"
          {
#line 1097 "prog_type.m"
            parse_tree__prog_type__BindingOfVar_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfVar_12);
#line 1097 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1097 "prog_type.m"
          }
#line 1097 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1098 "prog_type.m"
          {
#line 1098 "prog_type.m"
            MR_Word parse_tree__prog_type__Var2_13;
#line 1098 "prog_type.m"
            MR_Word parse_tree__prog_type__V_14_14;

#line 1098 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__BindingOfVar_12)) == (MR_mktag((MR_Integer) 0)));
#line 1098 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1098 "prog_type.m"
              {
#line 1098 "prog_type.m"
                parse_tree__prog_type__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 0)));
#line 1098 "prog_type.m"
                parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 1)));
#line 1099 "prog_type.m"
                /* direct tailcall eliminated */
#line 1099 "prog_type.m"
                {
#line 1099 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var__tmp_copy_7 = parse_tree__prog_type__Var2_13;

#line 1099 "prog_type.m"
                  parse_tree__prog_type__Var_7 = parse_tree__prog_type__Var__tmp_copy_7;
#line 1099 "prog_type.m"
                }
#line 1099 "prog_type.m"
                continue;
#line 1098 "prog_type.m"
              }
#line 1098 "prog_type.m"
          }
#line 1097 "prog_type.m"
        else
#line 1102 "prog_type.m"
          {
#line 1102 "prog_type.m"
            {
#line 1102 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__HeadVar_8)));
            }
#line 1102 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1102 "prog_type.m"
              {
#line 1102 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_16 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15;
#line 1102 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1102 "prog_type.m"
              }
#line 1102 "prog_type.m"
            else
#line 1105 "prog_type.m"
              {
#line 1105 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeInfo_23_23;
#line 1105 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_24_24;
#line 1105 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 1105 "prog_type.m"
                {
#line 1105 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), parse_tree__prog_type__HeadTypeParams_10);
                }
#line 1105 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1105 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1105 "prog_type.m"
                  {
#line 5829 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5831 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1106 "prog_type.m"
                    {
#line 1106 "prog_type.m"
                      parse_tree__prog_type__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 0) = ((MR_Box) (parse_tree__prog_type__HeadVar_8));
#line 1106 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1106 "prog_type.m"
                    }
#line 1106 "prog_type.m"
                    {
#line 1106 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_23_23, parse_tree__prog_type__TypeCtorInfo_24_24, ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__V_18_18)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, parse_tree__prog_type__STATE_VARIABLE_Bindings_16);
                    }
#line 1106 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1105 "prog_type.m"
                  }
#line 1105 "prog_type.m"
              }
#line 1102 "prog_type.m"
          }
#line 1097 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1097 "prog_type.m"
      }
#line 1097 "prog_type.m"
      break;
#line 1097 "prog_type.m"
    }
#line 1093 "prog_type.m"
}

#line 1050 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1050 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1050 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19)
#line 1050 "prog_type.m"
{
#line 1054 "prog_type.m"
  {
#line 1054 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1054 "prog_type.m"
    {
#line 1054 "prog_type.m"
      parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Y_8)), parse_tree__prog_type__HeadTypeParams_10);
    }
#line 1054 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1055 "prog_type.m"
      {
#line 1055 "prog_type.m"
        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__X_7, parse_tree__prog_type__Y_8, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
      }
#line 1054 "prog_type.m"
    else
#line 1056 "prog_type.m"
      {
#line 1056 "prog_type.m"
        {
#line 1056 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), parse_tree__prog_type__HeadTypeParams_10);
        }
#line 1056 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1057 "prog_type.m"
          {
#line 1057 "prog_type.m"
            parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__Y_8, parse_tree__prog_type__X_7, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
          }
#line 1056 "prog_type.m"
        else
#line 1058 "prog_type.m"
          {
#line 1058 "prog_type.m"
            MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1058 "prog_type.m"
            MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1058 "prog_type.m"
            {
#line 1058 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_12);
            }
#line 1058 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1058 "prog_type.m"
              {
#line 1058 "prog_type.m"
                parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1058 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1058 "prog_type.m"
              }
#line 1058 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1059 "prog_type.m"
              {
#line 1059 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_13;
#line 1059 "prog_type.m"
                MR_Box parse_tree__prog_type__conv1_BindingOfY_13;

#line 1059 "prog_type.m"
                {
#line 1059 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv1_BindingOfY_13);
                }
#line 1059 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1059 "prog_type.m"
                  {
#line 1059 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_13 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfY_13);
#line 1059 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1059 "prog_type.m"
                  }
#line 1059 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1062 "prog_type.m"
                  {
#line 1062 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__BindingOfY_13, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                  }
#line 1059 "prog_type.m"
                else
#line 1065 "prog_type.m"
                  {
#line 1065 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfX_14;
#line 1066 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_44_44;
#line 1066 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_42_42;
#line 1066 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_15_15;

#line 1065 "prog_type.m"
                    {
#line 1065 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfX_12, &parse_tree__prog_type__SubstBindingOfX_14);
                    }
#line 1066 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfX_14)) == (MR_mktag((MR_Integer) 0)));
#line 1066 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1066 "prog_type.m"
                      {
#line 1066 "prog_type.m"
                        parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 0)));
#line 1066 "prog_type.m"
                        parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 1)));
#line 6000 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1066 "prog_type.m"
                        {
#line 1066 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__V_42_42)));
                        }
#line 1066 "prog_type.m"
                      }
#line 1066 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1066 "prog_type.m"
                      {
#line 1066 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1066 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1066 "prog_type.m"
                      }
#line 1066 "prog_type.m"
                    else
#line 1069 "prog_type.m"
                      {
#line 1069 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_34_34;
#line 1069 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_35_35;

#line 1069 "prog_type.m"
                        {
#line 1069 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfX_14, parse_tree__prog_type__Y_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1069 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1069 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1069 "prog_type.m"
                          {
#line 6039 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6041 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1070 "prog_type.m"
                            {
#line 1070 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_34_34, parse_tree__prog_type__TypeCtorInfo_35_35, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfX_14)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1070 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1069 "prog_type.m"
                          }
#line 1069 "prog_type.m"
                      }
#line 1065 "prog_type.m"
                  }
#line 1059 "prog_type.m"
              }
#line 1058 "prog_type.m"
            else
#line 1075 "prog_type.m"
              {
#line 1075 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_27;
#line 1075 "prog_type.m"
                MR_Box parse_tree__prog_type__conv2_BindingOfY_27;

#line 1075 "prog_type.m"
                {
#line 1075 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv2_BindingOfY_27);
                }
#line 1075 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1075 "prog_type.m"
                  {
#line 1075 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_27 = ((MR_Word) parse_tree__prog_type__conv2_BindingOfY_27);
#line 1075 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1075 "prog_type.m"
                  }
#line 1075 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1076 "prog_type.m"
                  {
#line 1076 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfY_16;
#line 1077 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_45_45;
#line 1077 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_43_43;
#line 1077 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_17_17;

#line 1076 "prog_type.m"
                    {
#line 1076 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfY_27, &parse_tree__prog_type__SubstBindingOfY_16);
                    }
#line 1077 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfY_16)) == (MR_mktag((MR_Integer) 0)));
#line 1077 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1077 "prog_type.m"
                      {
#line 1077 "prog_type.m"
                        parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 0)));
#line 1077 "prog_type.m"
                        parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 1)));
#line 6110 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1077 "prog_type.m"
                        {
#line 1077 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_45_45, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_43_43)));
                        }
#line 1077 "prog_type.m"
                      }
#line 1077 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1077 "prog_type.m"
                      {
#line 1077 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1077 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1077 "prog_type.m"
                      }
#line 1077 "prog_type.m"
                    else
#line 1080 "prog_type.m"
                      {
#line 1080 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_38_38;
#line 1080 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_39_39;

#line 1080 "prog_type.m"
                        {
#line 1080 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfY_16, parse_tree__prog_type__X_7, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1080 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1080 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1080 "prog_type.m"
                          {
#line 6149 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6151 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1081 "prog_type.m"
                            {
#line 1081 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_38_38, parse_tree__prog_type__TypeCtorInfo_39_39, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfY_16)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1081 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1080 "prog_type.m"
                          }
#line 1080 "prog_type.m"
                      }
#line 1076 "prog_type.m"
                  }
#line 1075 "prog_type.m"
                else
#line 1085 "prog_type.m"
                  {
#line 1085 "prog_type.m"
                    {
#line 1085 "prog_type.m"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_8)));
                    }
#line 1085 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1085 "prog_type.m"
                      *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1085 "prog_type.m"
                    else
#line 1088 "prog_type.m"
                      {
#line 1088 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_25_25;

#line 1088 "prog_type.m"
                        {
#line 1088 "prog_type.m"
                          parse_tree__prog_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__Y_8));
#line 1088 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1088 "prog_type.m"
                        }
#line 1088 "prog_type.m"
                        {
#line 1088 "prog_type.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_25_25)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                        }
#line 1088 "prog_type.m"
                      }
#line 1085 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1085 "prog_type.m"
                  }
#line 1075 "prog_type.m"
              }
#line 1058 "prog_type.m"
          }
#line 1056 "prog_type.m"
      }
#line 1054 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1054 "prog_type.m"
  }
#line 1050 "prog_type.m"
}

#line 1034 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1034 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1034 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14)
#line 1034 "prog_type.m"
{
#line 1038 "prog_type.m"
  {
#line 1038 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 0)));
#line 1038 "prog_type.m"
    MR_Word parse_tree__prog_type__VarY_10;
#line 1038 "prog_type.m"
    MR_Word parse_tree__prog_type__KindY_11;

#line 1038 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1038 "prog_type.m"
      {
#line 1038 "prog_type.m"
        parse_tree__prog_type__VarY_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1038 "prog_type.m"
        parse_tree__prog_type__KindY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1039 "prog_type.m"
        {
#line 1039 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_6, parse_tree__prog_type__VarY_10, parse_tree__prog_type__KindY_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
        }
#line 1038 "prog_type.m"
      }
#line 1038 "prog_type.m"
    else
#line 1040 "prog_type.m"
      {
#line 1040 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1040 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1040 "prog_type.m"
        {
#line 1040 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, ((MR_Box) (parse_tree__prog_type__VarX_6)), &parse_tree__prog_type__conv0_BindingOfX_12);
        }
#line 1040 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1040 "prog_type.m"
          {
#line 1040 "prog_type.m"
            parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1040 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1040 "prog_type.m"
          }
#line 1040 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1042 "prog_type.m"
          {
#line 1042 "prog_type.m"
            parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
          }
#line 1040 "prog_type.m"
        else
#line 1045 "prog_type.m"
          {
#line 1045 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 1045 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtorInfo_22_22;
#line 1046 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_20_20;

#line 1045 "prog_type.m"
            {
#line 1045 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13);
            }
#line 1045 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1045 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1045 "prog_type.m"
              {
#line 6312 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1046 "prog_type.m"
                {
#line 1046 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__VarX_6)), parse_tree__prog_type__HeadTypeParams_8);
                }
#line 1046 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1045 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1045 "prog_type.m"
                  {
#line 6325 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6327 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1047 "prog_type.m"
                    {
#line 1047 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_21_21, parse_tree__prog_type__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__prog_type__VarX_6)), ((MR_Box) (parse_tree__prog_type__TypeY_7)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
                    }
#line 1047 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1045 "prog_type.m"
                  }
#line 1045 "prog_type.m"
              }
#line 1045 "prog_type.m"
          }
#line 1040 "prog_type.m"
      }
#line 1038 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1038 "prog_type.m"
  }
#line 1034 "prog_type.m"
}

#line 653 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 653 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 653 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 653 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3)
#line 653 "prog_type.m"
{
#line 656 "prog_type.m"
  while (MR_TRUE)
#line 656 "prog_type.m"
    {
#line 656 "prog_type.m"
      /* tailcall optimized into a loop */
#line 656 "prog_type.m"
      {
#line 656 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 656 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "prog_type.m"
          *parse_tree__prog_type__STATE_VARIABLE_V_3 = parse_tree__prog_type__STATE_VARIABLE_V_0_2;
#line 656 "prog_type.m"
        else
#line 657 "prog_type.m"
          {
#line 657 "prog_type.m"
            MR_Word parse_tree__prog_type__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 657 "prog_type.m"
            MR_Word parse_tree__prog_type__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 657 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 658 "prog_type.m"
            {
#line 658 "prog_type.m"
              parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_7, parse_tree__prog_type__STATE_VARIABLE_V_0_2, &parse_tree__prog_type__STATE_VARIABLE_V_12_12);
            }
#line 659 "prog_type.m"
            /* direct tailcall eliminated */
#line 659 "prog_type.m"
            {
#line 659 "prog_type.m"
              MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Types_8;
#line 659 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 659 "prog_type.m"
              parse_tree__prog_type__STATE_VARIABLE_V_0_2 = parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2;
#line 659 "prog_type.m"
              parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 659 "prog_type.m"
            }
#line 659 "prog_type.m"
            continue;
#line 657 "prog_type.m"
          }
#line 656 "prog_type.m"
      }
#line 656 "prog_type.m"
      break;
#line 656 "prog_type.m"
    }
#line 653 "prog_type.m"
}

#line 626 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 626 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 626 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 626 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 626 "prog_type.m"
{
#line 628 "prog_type.m"
  while (MR_TRUE)
#line 628 "prog_type.m"
    {
#line 628 "prog_type.m"
      /* tailcall optimized into a loop */
#line 628 "prog_type.m"
      {
#line 628 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 628 "prog_type.m"
#line 628 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 628 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 628 "prog_type.m"
          case (MR_Integer) 0:
#line 628 "prog_type.m"
            {
#line 628 "prog_type.m"
              MR_Word parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 628 "prog_type.m"
              MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 628 "prog_type.m"
              {
#line 628 "prog_type.m"
                MR_Word base;
#line 628 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_type.m"
                *parse_tree__prog_type__HeadVar__3_3 = base;
#line 628 "prog_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_4));
#line 628 "prog_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 628 "prog_type.m"
              }
#line 628 "prog_type.m"
            }
#line 628 "prog_type.m"
            break;
#line 628 "prog_type.m"
          case (MR_Integer) 1:
#line 629 "prog_type.m"
            {
#line 629 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 629 "prog_type.m"
              MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 629 "prog_type.m"
              MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 630 "prog_type.m"
              {
#line 630 "prog_type.m"
                parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_8, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
              }
#line 629 "prog_type.m"
            }
#line 628 "prog_type.m"
            break;
#line 628 "prog_type.m"
          case (MR_Integer) 2:
#line 631 "prog_type.m"
            *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__HeadVar__2_2;
#line 628 "prog_type.m"
            break;
#line 628 "prog_type.m"
          case (MR_Integer) 3:
#line 628 "prog_type.m"
#line 628 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 628 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 628 "prog_type.m"
              case (MR_Integer) 0:
#line 640 "prog_type.m"
                {
#line 640 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 641 "prog_type.m"
                  {
#line 641 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_28, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
                  }
#line 640 "prog_type.m"
                }
#line 628 "prog_type.m"
                break;
#line 628 "prog_type.m"
              case (MR_Integer) 1:
#line 632 "prog_type.m"
                {
#line 632 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 632 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 632 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 633 "prog_type.m"
                  {
#line 633 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_18, parse_tree__prog_type__HeadVar__2_2, &parse_tree__prog_type__STATE_VARIABLE_V_26_26);
                  }
#line 637 "prog_type.m"
                  if ((parse_tree__prog_type__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 637 "prog_type.m"
                  else
#line 635 "prog_type.m"
                    {
#line 635 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_19, (MR_Integer) 0)));

#line 636 "prog_type.m"
                      /* direct tailcall eliminated */
#line 636 "prog_type.m"
                      {
#line 636 "prog_type.m"
                        MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_23;
#line 636 "prog_type.m"
                        MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;

#line 636 "prog_type.m"
                        parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 636 "prog_type.m"
                        parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 636 "prog_type.m"
                      }
#line 636 "prog_type.m"
                      continue;
#line 635 "prog_type.m"
                    }
#line 632 "prog_type.m"
                }
#line 628 "prog_type.m"
                break;
#line 628 "prog_type.m"
              case (MR_Integer) 2:
#line 642 "prog_type.m"
                {
#line 642 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 642 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 642 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_40_40;
#line 642 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 643 "prog_type.m"
                  {
#line 643 "prog_type.m"
                    parse_tree__prog_type__STATE_VARIABLE_V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 0) = ((MR_Box) (parse_tree__prog_type__Var_34));
#line 643 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 643 "prog_type.m"
                  }
#line 644 "prog_type.m"
                  {
#line 644 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_35, parse_tree__prog_type__STATE_VARIABLE_V_40_40, parse_tree__prog_type__HeadVar__3_3);
                  }
#line 642 "prog_type.m"
                }
#line 628 "prog_type.m"
                break;
#line 628 "prog_type.m"
              case (MR_Integer) 3:
#line 645 "prog_type.m"
                {
#line 645 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 646 "prog_type.m"
                  /* direct tailcall eliminated */
#line 646 "prog_type.m"
                  {
#line 646 "prog_type.m"
                    MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_42;

#line 646 "prog_type.m"
                    parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 646 "prog_type.m"
                  }
#line 646 "prog_type.m"
                  continue;
#line 645 "prog_type.m"
                }
#line 628 "prog_type.m"
                break;
#line 628 "prog_type.m"
            }
#line 628 "prog_type.m"
            break;
#line 628 "prog_type.m"
        }
#line 628 "prog_type.m"
      }
#line 628 "prog_type.m"
      break;
#line 628 "prog_type.m"
    }
#line 626 "prog_type.m"
}

#line 410 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
#line 410 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeInfo_for_T_11,
#line 410 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 410 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 410 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 410 "prog_type.m"
{
#line 1396 "prog_type.m"
  {
#line 1396 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1396 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1396 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1396 "prog_type.m"
    else
#line 1397 "prog_type.m"
      {
#line 1397 "prog_type.m"
        MR_Box parse_tree__prog_type__X_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0));
#line 1397 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1397 "prog_type.m"
        MR_Box parse_tree__prog_type__Y_8;
#line 1397 "prog_type.m"
        MR_Word parse_tree__prog_type__Ys_9;
#line 1398 "prog_type.m"
        MR_Box parse_tree__prog_type__Y0_10;

#line 1398 "prog_type.m"
        {
#line 1398 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__X_6, &parse_tree__prog_type__Y0_10);
        }
#line 1398 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1399 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__Y0_10;
#line 1398 "prog_type.m"
        else
#line 1401 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__X_6;
#line 1403 "prog_type.m"
        {
#line 1403 "prog_type.m"
          parse_tree__prog_type__apply_partial_map_to_list_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Xs_7, &parse_tree__prog_type__Ys_9);
        }
#line 1397 "prog_type.m"
        {
#line 1397 "prog_type.m"
          MR_Word base;
#line 1397 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 1397 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_type__Y_8;
#line 1397 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Ys_9));
#line 1397 "prog_type.m"
        }
#line 1397 "prog_type.m"
      }
#line 1396 "prog_type.m"
  }
#line 410 "prog_type.m"
}

#line 1383 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1383 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1383 "prog_type.m"
{
#line 1383 "prog_type.m"
  {
#line 1383 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1383 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
#line 1383 "prog_type.m"
  }
#line 1383 "prog_type.m"
}

#line 1384 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1384 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1384 "prog_type.m"
{
#line 1384 "prog_type.m"
  {
#line 1384 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1384 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28);
#line 1384 "prog_type.m"
    {
#line 1384 "prog_type.m"
      parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(parse_tree__prog_type__env_ptr);
    }
#line 1384 "prog_type.m"
  }
#line 1384 "prog_type.m"
}

#line 1383 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1383 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1383 "prog_type.m"
{
#line 1383 "prog_type.m"
  {
#line 1383 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1383 "prog_type.m"
    {
#line 1386 "prog_type.m"
      MR_Word parse_tree__prog_type__V_29_29;
#line 1386 "prog_type.m"
      MR_Word parse_tree__prog_type__V_30_30;

#line 1386 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_mktag((MR_Integer) 0)));
#line 1386 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1386 "prog_type.m"
        {
#line 1386 "prog_type.m"
          parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0)));
#line 1386 "prog_type.m"
          parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1)));
#line 1386 "prog_type.m"
        }
#line 1385 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1385 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1385 "prog_type.m"
        {
#line 1385 "prog_type.m"
          parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(parse_tree__prog_type__env_ptr);
        }
#line 1383 "prog_type.m"
    }
#line 1383 "prog_type.m"
  }
#line 1383 "prog_type.m"
}

#line 1383 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1383 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1383 "prog_type.m"
{
#line 1383 "prog_type.m"
  {
#line 1383 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1383 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
#line 1383 "prog_type.m"
      {
#line 1383 "prog_type.m"
        {
#line 1384 "prog_type.m"
          {
#line 1384 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 1383 "prog_type.m"
        }
#line 1383 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
#line 1383 "prog_type.m"
      }
#line 1383 "prog_type.m"
    else
#line 1383 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1383 "prog_type.m"
  }
#line 1383 "prog_type.m"
}

#line 402 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0(
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__TVarSet_9,
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__ExistQVars_10,
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__ActualArgTypes_11,
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_12,
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__CalleeTVarSet_13,
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__PredKindMap_14,
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__PredExistQVars_15,
#line 402 "prog_type.m"
  MR_Word parse_tree__prog_type__PredArgTypes_16)
#line 402 "prog_type.m"
{
#line 402 "prog_type.m"
  {
#line 402 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s parse_tree__prog_type__env;

#line 1343 "prog_type.m"
    {
#line 1343 "prog_type.m"
      MR_Word parse_tree__prog_type__Renaming_18;
#line 1343 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentKindMap_19;
#line 1343 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentArgTypes_20;
#line 1343 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentExistQVars_21;
#line 1343 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentToActualSubst_22;
#line 1345 "prog_type.m"
      MR_Word parse_tree__prog_type___TVarSet1_17;

#line 1345 "prog_type.m"
      {
#line 1345 "prog_type.m"
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(parse_tree__prog_type__TVarSet_9, parse_tree__prog_type__CalleeTVarSet_13, &parse_tree__prog_type___TVarSet1_17, &parse_tree__prog_type__Renaming_18);
      }
#line 1346 "prog_type.m"
      {
#line 1346 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredKindMap_14, &parse_tree__prog_type__ParentKindMap_19);
      }
#line 1348 "prog_type.m"
      {
#line 1348 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredArgTypes_16, &parse_tree__prog_type__ParentArgTypes_20);
      }
#line 1350 "prog_type.m"
      {
#line 1350 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredExistQVars_15, &parse_tree__prog_type__ParentExistQVars_21);
      }
#line 1366 "prog_type.m"
      if ((parse_tree__prog_type__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1365 "prog_type.m"
        {
#line 1365 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, &parse_tree__prog_type__ParentToActualSubst_22);
        }
#line 1366 "prog_type.m"
      else
#line 1367 "prog_type.m"
        {
#line 1367 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 1371 "prog_type.m"
          {
#line 1371 "prog_type.m"
            parse_tree__prog_type__V_31_31 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 1370 "prog_type.m"
          {
#line 1370 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, parse_tree__prog_type__HeadTypeParams_12, parse_tree__prog_type__V_31_31, &parse_tree__prog_type__ParentToActualSubst_22);
          }
#line 1367 "prog_type.m"
        }
#line 1343 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1379 "prog_type.m"
        {
#line 1379 "prog_type.m"
          if ((parse_tree__prog_type__ParentExistQVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1379 "prog_type.m"
          else
#line 1380 "prog_type.m"
            {
#line 1381 "prog_type.m"
              {
#line 1381 "prog_type.m"
                parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(parse_tree__prog_type__ParentKindMap_19, parse_tree__prog_type__ParentToActualSubst_22, parse_tree__prog_type__ParentExistQVars_21, &(parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
              }
#line 1383 "prog_type.m"
              {
#line 1383 "prog_type.m"
                parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(&parse_tree__prog_type__env);
              }
#line 1383 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1380 "prog_type.m"
            }
#line 1379 "prog_type.m"
        }
#line 1343 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1343 "prog_type.m"
    }
#line 402 "prog_type.m"
  }
#line 402 "prog_type.m"
}

#line 391 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_subsumes_det_3_p_0(
#line 391 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 391 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 391 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 391 "prog_type.m"
{
#line 1336 "prog_type.m"
  {
#line 1336 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1336 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1336 "prog_type.m"
    {
#line 1336 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1336 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1337 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1336 "prog_type.m"
    else
#line 1339 "prog_type.m"
      {
#line 1339 "prog_type.m"
        {
#line 1339 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
#line 1339 "prog_type.m"
          return;
        }
#line 1339 "prog_type.m"
      }
#line 1336 "prog_type.m"
  }
#line 391 "prog_type.m"
}

#line 386 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_subsumes_3_p_0(
#line 386 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 386 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 386 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 386 "prog_type.m"
{
#line 1328 "prog_type.m"
  {
#line 1328 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1328 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
#line 1328 "prog_type.m"
    MR_Word parse_tree__prog_type__TypesBVars_7;
#line 1328 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubst0_8;
#line 1328 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_13;
#line 1328 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_14;

#line 649 "prog_type.m"
    {
#line 649 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__TypesB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 7055 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 650 "prog_type.m"
    {
#line 650 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 651 "prog_type.m"
    {
#line 651 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypesBVars_7);
    }
#line 1332 "prog_type.m"
    {
#line 1332 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1333 "prog_type.m"
    {
#line 1333 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, parse_tree__prog_type__TypesBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1328 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1328 "prog_type.m"
  }
#line 386 "prog_type.m"
}

#line 380 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_subsumes_det_3_p_0(
#line 380 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeA_4,
#line 380 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeB_5,
#line 380 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 380 "prog_type.m"
{
#line 1322 "prog_type.m"
  {
#line 1322 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1322 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1322 "prog_type.m"
    {
#line 1322 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1322 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1323 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1322 "prog_type.m"
    else
#line 1325 "prog_type.m"
      {
#line 1325 "prog_type.m"
        {
#line 1325 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_subsumes_det\'/3", (MR_String) "type_subsumes failed");
#line 1325 "prog_type.m"
          return;
        }
#line 1325 "prog_type.m"
      }
#line 1322 "prog_type.m"
  }
#line 380 "prog_type.m"
}

#line 376 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_subsumes_3_p_0(
#line 376 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeA_4,
#line 376 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeB_5,
#line 376 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 376 "prog_type.m"
{
#line 1314 "prog_type.m"
  {
#line 1314 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1314 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
#line 1314 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeBVars_7;
#line 1314 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubst0_8;
#line 1314 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_13;
#line 1314 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_14;

#line 622 "prog_type.m"
    {
#line 622 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__TypeB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 7160 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 623 "prog_type.m"
    {
#line 623 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 624 "prog_type.m"
    {
#line 624 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypeBVars_7);
    }
#line 1318 "prog_type.m"
    {
#line 1318 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1319 "prog_type.m"
    {
#line 1319 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, parse_tree__prog_type__TypeBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1314 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1314 "prog_type.m"
  }
#line 376 "prog_type.m"
}

#line 369 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_list_5_p_0(
#line 369 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 369 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 369 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3,
#line 369 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4,
#line 369 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_5)
#line 369 "prog_type.m"
{
#line 1254 "prog_type.m"
  while (MR_TRUE)
#line 1254 "prog_type.m"
    {
#line 1254 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1254 "prog_type.m"
      {
#line 1254 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1254 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1254 "prog_type.m"
          {
#line 1254 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1254 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1254 "prog_type.m"
              {
#line 1254 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_5 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4;
#line 1254 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1254 "prog_type.m"
              }
#line 1254 "prog_type.m"
          }
#line 1254 "prog_type.m"
        else
#line 1255 "prog_type.m"
          {
#line 1255 "prog_type.m"
            MR_Word parse_tree__prog_type__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1255 "prog_type.m"
            MR_Word parse_tree__prog_type__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1255 "prog_type.m"
            MR_Word parse_tree__prog_type__Y_12;
#line 1255 "prog_type.m"
            MR_Word parse_tree__prog_type__Ys_13;
#line 1255 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1255 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1255 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1255 "prog_type.m"
              {
#line 1255 "prog_type.m"
                parse_tree__prog_type__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1255 "prog_type.m"
                parse_tree__prog_type__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1256 "prog_type.m"
                {
#line 1256 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__X_10, parse_tree__prog_type__Y_12, parse_tree__prog_type__HeadVar__3_3, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                }
#line 1255 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1257 "prog_type.m"
                  {
#line 1257 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1257 "prog_type.m"
                    {
#line 1257 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_11;
#line 1257 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__Ys_13;
#line 1257 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1257 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 1257 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1257 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1257 "prog_type.m"
                    }
#line 1257 "prog_type.m"
                    continue;
#line 1257 "prog_type.m"
                  }
#line 1255 "prog_type.m"
              }
#line 1255 "prog_type.m"
          }
#line 1254 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1254 "prog_type.m"
      }
#line 1254 "prog_type.m"
      break;
#line 1254 "prog_type.m"
    }
#line 369 "prog_type.m"
}

#line 366 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_5_p_0(
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__X_6,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_7,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14,
#line 366 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_15)
#line 366 "prog_type.m"
{
#line 1022 "prog_type.m"
  {
#line 1022 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1022 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 1022 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1022 "prog_type.m"
      {
#line 1022 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 0)));
#line 1022 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 1)));
#line 1023 "prog_type.m"
        {
#line 1023 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_10, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
        }
#line 1022 "prog_type.m"
      }
#line 1022 "prog_type.m"
    else
#line 1024 "prog_type.m"
      {
#line 1024 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_12;
#line 1024 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 1024 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1024 "prog_type.m"
          {
#line 1024 "prog_type.m"
            parse_tree__prog_type__VarY_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
#line 1024 "prog_type.m"
            parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
#line 1025 "prog_type.m"
            {
#line 1025 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_12, parse_tree__prog_type__X_6, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
            }
#line 1024 "prog_type.m"
          }
#line 1024 "prog_type.m"
        else
#line 1026 "prog_type.m"
          {
#line 1026 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1026 "prog_type.m"
            {
#line 1026 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_nonvar_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
            }
#line 1026 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1026 "prog_type.m"
              {
#line 1026 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_15 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;
#line 1026 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1026 "prog_type.m"
              }
#line 1026 "prog_type.m"
            else
#line 1031 "prog_type.m"
              {
#line 1031 "prog_type.m"
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_special_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
              }
#line 1026 "prog_type.m"
          }
#line 1024 "prog_type.m"
      }
#line 1022 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1022 "prog_type.m"
  }
#line 366 "prog_type.m"
}

#line 355 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type___TypeCtor_10,
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 355 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 355 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 355 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 355 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 355 "prog_type.m"
{
#line 992 "prog_type.m"
  {
#line 992 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 992 "prog_type.m"
    {
#line 992 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(parse_tree__prog_type__Globals_9, parse_tree__prog_type__ReserveTagPragma_11, parse_tree__prog_type__Ctors_12, parse_tree__prog_type__MaybeUserEqCmp_13, parse_tree__prog_type__SingleFunctorName_14, parse_tree__prog_type__SingleArgType_15, parse_tree__prog_type__MaybeSingleArgName_16);
    }
#line 992 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 992 "prog_type.m"
  }
#line 355 "prog_type.m"
}

#line 976 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 976 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 976 "prog_type.m"
{
#line 976 "prog_type.m"
  {
#line 976 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 976 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0, 1);
#line 976 "prog_type.m"
  }
#line 976 "prog_type.m"
}

#line 977 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 977 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 977 "prog_type.m"
{
#line 977 "prog_type.m"
  {
#line 977 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 977 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8);
#line 977 "prog_type.m"
    {
#line 977 "prog_type.m"
      parse_tree__prog_type__du_type_is_enum_2_p_0_2(parse_tree__prog_type__env_ptr);
    }
#line 977 "prog_type.m"
  }
#line 977 "prog_type.m"
}

#line 976 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 976 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 976 "prog_type.m"
{
#line 976 "prog_type.m"
  {
#line 976 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 976 "prog_type.m"
    {
#line 980 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 0)));
#line 980 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 1)));
#line 980 "prog_type.m"
      MR_Word parse_tree__prog_type__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 3)));
#line 979 "prog_type.m"
      MR_Word parse_tree__prog_type___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 2)));
#line 979 "prog_type.m"
      MR_Integer parse_tree__prog_type___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 4)));
#line 979 "prog_type.m"
      MR_Word parse_tree__prog_type___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 5)));

#line 981 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistQTVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 980 "prog_type.m"
        {
#line 982 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistConstraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "prog_type.m"
          if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 983 "prog_type.m"
            (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "prog_type.m"
        }
#line 978 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 978 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 978 "prog_type.m"
        {
#line 978 "prog_type.m"
          parse_tree__prog_type__du_type_is_enum_2_p_0_1(parse_tree__prog_type__env_ptr);
        }
#line 976 "prog_type.m"
    }
#line 976 "prog_type.m"
  }
#line 976 "prog_type.m"
}

#line 976 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 976 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 976 "prog_type.m"
{
#line 976 "prog_type.m"
  {
#line 976 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 976 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0) == 0)
#line 976 "prog_type.m"
      {
#line 976 "prog_type.m"
        {
#line 977 "prog_type.m"
          {
#line 977 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, parse_tree__prog_type__du_type_is_enum_2_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 976 "prog_type.m"
        }
#line 976 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_FALSE;
#line 976 "prog_type.m"
      }
#line 976 "prog_type.m"
    else
#line 976 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 976 "prog_type.m"
  }
#line 976 "prog_type.m"
}

#line 345 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0(
#line 345 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_3,
#line 345 "prog_type.m"
  MR_Integer * parse_tree__prog_type__NumBits_4)
#line 345 "prog_type.m"
{
#line 345 "prog_type.m"
  {
#line 345 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s parse_tree__prog_type__env;

#line 345 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3 = parse_tree__prog_type__Ctors_3;
#line 974 "prog_type.m"
    {
#line 974 "prog_type.m"
      MR_Word parse_tree__prog_type__TypeCtorInfo_18_18;
#line 974 "prog_type.m"
      MR_Integer parse_tree__prog_type__NumFunctors_15;
#line 974 "prog_type.m"
      MR_Word parse_tree__prog_type__V_16_16;
#line 975 "prog_type.m"
      MR_Word parse_tree__prog_type__V_5_5;
#line 975 "prog_type.m"
      MR_Word parse_tree__prog_type__V_6_6;
#line 975 "prog_type.m"
      MR_Word parse_tree__prog_type__V_7_7;

#line 975 "prog_type.m"
      (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3)) == (MR_mktag((MR_Integer) 1)));
#line 975 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 975 "prog_type.m"
        {
#line 975 "prog_type.m"
          parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 0)));
#line 975 "prog_type.m"
          parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 1)));
#line 975 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 975 "prog_type.m"
          if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 975 "prog_type.m"
            {
#line 975 "prog_type.m"
              parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_16_16, (MR_Integer) 0)));
#line 975 "prog_type.m"
              parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_16_16, (MR_Integer) 1)));
#line 976 "prog_type.m"
              {
#line 976 "prog_type.m"
                parse_tree__prog_type__du_type_is_enum_2_p_0_4(&parse_tree__prog_type__env);
              }
#line 976 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 974 "prog_type.m"
              if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 974 "prog_type.m"
                {
#line 7648 "parse_tree.prog_type.c"
                  parse_tree__prog_type__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 985 "prog_type.m"
                  {
#line 985 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_18_18, (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, &parse_tree__prog_type__NumFunctors_15);
                  }
#line 986 "prog_type.m"
                  {
#line 986 "prog_type.m"
                    mercury__int__log2_2_p_0(parse_tree__prog_type__NumFunctors_15, parse_tree__prog_type__NumBits_4);
                  }
#line 986 "prog_type.m"
                  (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 974 "prog_type.m"
                }
#line 975 "prog_type.m"
            }
#line 975 "prog_type.m"
        }
#line 974 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 974 "prog_type.m"
    }
#line 345 "prog_type.m"
  }
#line 345 "prog_type.m"
}

#line 340 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_constructors_are_type_info_1_p_0(
#line 340 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_2)
#line 340 "prog_type.m"
{
#line 935 "prog_type.m"
  {
#line 935 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_2)) == (MR_mktag((MR_Integer) 1)));
#line 935 "prog_type.m"
    MR_Word parse_tree__prog_type__Ctor_3;
#line 935 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_10;
#line 935 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_11;
#line 935 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 935 "prog_type.m"
    MR_Word parse_tree__prog_type__V_17_17;
#line 935 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 935 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_20_20;
#line 935 "prog_type.m"
    MR_String parse_tree__prog_type__Name_22;
#line 944 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_12;
#line 944 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_15;
#line 945 "prog_type.m"
    MR_Word parse_tree__prog_type__V_18_18;
#line 967 "prog_type.m"
    MR_Integer parse_tree__prog_type__lo_0;
#line 967 "prog_type.m"
    MR_Integer parse_tree__prog_type__hi_1;
#line 967 "prog_type.m"
    MR_Integer parse_tree__prog_type__mid_2;
#line 967 "prog_type.m"
    MR_Integer parse_tree__prog_type__result_3;

#line 943 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 943 "prog_type.m"
      {
#line 943 "prog_type.m"
        parse_tree__prog_type__SingleCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 0)));
#line 943 "prog_type.m"
        parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 1)));
#line 943 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 935 "prog_type.m"
          {
#line 944 "prog_type.m"
            parse_tree__prog_type__ExistQVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 0)));
#line 944 "prog_type.m"
            parse_tree__prog_type___Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 1)));
#line 944 "prog_type.m"
            parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 2)));
#line 944 "prog_type.m"
            parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 3)));
#line 944 "prog_type.m"
            parse_tree__prog_type__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 4)));
#line 944 "prog_type.m"
            parse_tree__prog_type___Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 5)));
#line 945 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 945 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 945 "prog_type.m"
              {
#line 945 "prog_type.m"
                parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 945 "prog_type.m"
                parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 1)));
#line 945 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 935 "prog_type.m"
                  {
#line 945 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_20_20 == (MR_Integer) 1);
#line 935 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 935 "prog_type.m"
                      {
#line 946 "prog_type.m"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 935 "prog_type.m"
                          {
#line 961 "prog_type.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_type__Ctor_3)) == (MR_mktag((MR_Integer) 1))))
#line 962 "prog_type.m"
                              {
#line 962 "prog_type.m"
                                MR_Word parse_tree__prog_type__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 962 "prog_type.m"
                                MR_Word parse_tree__prog_type__V_26_26;

#line 962 "prog_type.m"
                                parse_tree__prog_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 1)));
#line 963 "prog_type.m"
                                {
#line 963 "prog_type.m"
                                  parse_tree__prog_type__V_26_26 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                                }
#line 963 "prog_type.m"
                                {
#line 963 "prog_type.m"
                                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_24, parse_tree__prog_type__V_26_26);
                                }
#line 962 "prog_type.m"
                              }
#line 961 "prog_type.m"
                            else
#line 961 "prog_type.m"
                              {
#line 961 "prog_type.m"
                                parse_tree__prog_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 961 "prog_type.m"
                                parse_tree__prog_type__succeeded = MR_TRUE;
#line 961 "prog_type.m"
                              }
#line 935 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 935 "prog_type.m"
                              {
#line 967 "prog_type.m"
                                /* binary string simple lookup switch */
#line 967 "prog_type.m"
                                parse_tree__prog_type__lo_0 = (MR_Integer) 0;
#line 967 "prog_type.m"
                                parse_tree__prog_type__hi_1 = (MR_Integer) 3;
#line 967 "prog_type.m"
                                do
#line 967 "prog_type.m"
                                  {
#line 967 "prog_type.m"
                                    parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
#line 967 "prog_type.m"
                                    parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_22, ((&parse_tree__prog_type_vector_common_5[8 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
#line 967 "prog_type.m"
                                    if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
#line 967 "prog_type.m"
                                      {
#line 967 "prog_type.m"
                                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 967 "prog_type.m"
                                        /* jump out of search loop */
#line 967 "prog_type.m"
                                        goto label_0;
#line 967 "prog_type.m"
                                      }
#line 967 "prog_type.m"
                                    else
#line 967 "prog_type.m"
                                    if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
#line 967 "prog_type.m"
                                      parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
#line 967 "prog_type.m"
                                    else
#line 967 "prog_type.m"
                                      parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
#line 967 "prog_type.m"
                                  }
#line 967 "prog_type.m"
                                while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
#line 967 "prog_type.m"
                                parse_tree__prog_type__succeeded = MR_FALSE;
#line 967 "prog_type.m"
                              label_0:;
#line 935 "prog_type.m"
                              }
#line 935 "prog_type.m"
                          }
#line 935 "prog_type.m"
                      }
#line 935 "prog_type.m"
                  }
#line 945 "prog_type.m"
              }
#line 935 "prog_type.m"
          }
#line 943 "prog_type.m"
      }
#line 935 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 935 "prog_type.m"
  }
#line 340 "prog_type.m"
}

#line 317 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__qualify_cons_id_4_p_0(
#line 317 "prog_type.m"
  MR_Word parse_tree__prog_type__Args_5,
#line 317 "prog_type.m"
  MR_Word parse_tree__prog_type__ConsId0_6,
#line 317 "prog_type.m"
  MR_Word * parse_tree__prog_type__ConsId_7,
#line 317 "prog_type.m"
  MR_Word * parse_tree__prog_type__InstConsId_8)
#line 317 "prog_type.m"
{
#line 893 "prog_type.m"
  {
#line 893 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 893 "prog_type.m"
#line 893 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) {
#line 893 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 893 "prog_type.m"
      case (MR_Integer) 0:
#line 909 "prog_type.m"
        {
#line 909 "prog_type.m"
          MR_Integer parse_tree__prog_type__V_41_41;
#line 909 "prog_type.m"
          MR_Word parse_tree__prog_type__PrivateBuiltin_62;
#line 909 "prog_type.m"
          MR_Word parse_tree__prog_type__TypeCtor_63;
#line 909 "prog_type.m"
          MR_Word parse_tree__prog_type__V_64_64;

#line 910 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 911 "prog_type.m"
          {
#line 911 "prog_type.m"
            parse_tree__prog_type__V_41_41 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
#line 885 "prog_type.m"
          {
#line 885 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_62 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 886 "prog_type.m"
          {
#line 886 "prog_type.m"
            parse_tree__prog_type__TypeCtor_63 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 887 "prog_type.m"
          {
#line 887 "prog_type.m"
            parse_tree__prog_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_62));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
#line 887 "prog_type.m"
          }
#line 887 "prog_type.m"
          {
#line 887 "prog_type.m"
            MR_Word base;
#line 887 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = base;
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_64_64));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_41_41));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_63));
#line 887 "prog_type.m"
          }
#line 909 "prog_type.m"
        }
#line 893 "prog_type.m"
        break;
#line 893 "prog_type.m"
      case (MR_Integer) 1:
#line 904 "prog_type.m"
        {
#line 904 "prog_type.m"
          MR_Integer parse_tree__prog_type__V_43_43;
#line 904 "prog_type.m"
          MR_Word parse_tree__prog_type__PrivateBuiltin_54;
#line 904 "prog_type.m"
          MR_Word parse_tree__prog_type__TypeCtor_55;
#line 904 "prog_type.m"
          MR_Word parse_tree__prog_type__V_56_56;

#line 905 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 907 "prog_type.m"
          {
#line 907 "prog_type.m"
            parse_tree__prog_type__V_43_43 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
#line 885 "prog_type.m"
          {
#line 885 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_54 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 886 "prog_type.m"
          {
#line 886 "prog_type.m"
            parse_tree__prog_type__TypeCtor_55 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 887 "prog_type.m"
          {
#line 887 "prog_type.m"
            parse_tree__prog_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_54));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 1) = ((MR_Box) ((MR_String) "type_info"));
#line 887 "prog_type.m"
          }
#line 887 "prog_type.m"
          {
#line 887 "prog_type.m"
            MR_Word base;
#line 887 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = base;
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_56_56));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 887 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_55));
#line 887 "prog_type.m"
          }
#line 904 "prog_type.m"
        }
#line 893 "prog_type.m"
        break;
#line 893 "prog_type.m"
      case (MR_Integer) 2:
#line 928 "prog_type.m"
        {
#line 929 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 930 "prog_type.m"
          *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
#line 928 "prog_type.m"
        }
#line 893 "prog_type.m"
        break;
#line 893 "prog_type.m"
      case (MR_Integer) 3:
#line 893 "prog_type.m"
#line 893 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 0)))) {
#line 893 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 893 "prog_type.m"
          case (MR_Integer) 0:
#line 893 "prog_type.m"
          case (MR_Integer) 1:
#line 893 "prog_type.m"
          case (MR_Integer) 3:
#line 893 "prog_type.m"
          case (MR_Integer) 4:
#line 893 "prog_type.m"
          case (MR_Integer) 5:
#line 893 "prog_type.m"
          case (MR_Integer) 6:
#line 893 "prog_type.m"
          case (MR_Integer) 7:
#line 893 "prog_type.m"
          case (MR_Integer) 8:
#line 893 "prog_type.m"
          case (MR_Integer) 9:
#line 893 "prog_type.m"
          case (MR_Integer) 10:
#line 893 "prog_type.m"
          case (MR_Integer) 11:
#line 893 "prog_type.m"
          case (MR_Integer) 12:
#line 893 "prog_type.m"
          case (MR_Integer) 13:
#line 893 "prog_type.m"
          case (MR_Integer) 14:
#line 928 "prog_type.m"
            {
#line 929 "prog_type.m"
              *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 930 "prog_type.m"
              *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
#line 928 "prog_type.m"
            }
#line 893 "prog_type.m"
            break;
#line 893 "prog_type.m"
          case (MR_Integer) 2:
#line 893 "prog_type.m"
            {
#line 893 "prog_type.m"
              MR_Word parse_tree__prog_type__Name0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 1)));
#line 893 "prog_type.m"
              MR_Integer parse_tree__prog_type__OrigArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 2)));
#line 893 "prog_type.m"
              MR_Word parse_tree__prog_type__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 3)));
#line 894 "prog_type.m"
              MR_Word parse_tree__prog_type__TypeModule_12;
#line 894 "prog_type.m"
              MR_Word parse_tree__prog_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 0)));
#line 894 "prog_type.m"
              MR_Integer parse_tree__prog_type__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 1)));
#line 894 "prog_type.m"
              MR_String parse_tree__prog_type__V_13_13;

#line 894 "prog_type.m"
              parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 894 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 894 "prog_type.m"
                {
#line 894 "prog_type.m"
                  parse_tree__prog_type__TypeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 0)));
#line 894 "prog_type.m"
                  parse_tree__prog_type__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 1)));
#line 895 "prog_type.m"
                  {
#line 895 "prog_type.m"
                    MR_String parse_tree__prog_type__UnqualName_15;
#line 895 "prog_type.m"
                    MR_Word parse_tree__prog_type__Name_16;
#line 895 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_45_45;

#line 895 "prog_type.m"
                    {
#line 895 "prog_type.m"
                      parse_tree__prog_type__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__Name0_9);
                    }
#line 896 "prog_type.m"
                    {
#line 896 "prog_type.m"
                      parse_tree__prog_type__Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 0) = ((MR_Box) (parse_tree__prog_type__TypeModule_12));
#line 896 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 1) = ((MR_Box) (parse_tree__prog_type__UnqualName_15));
#line 896 "prog_type.m"
                    }
#line 897 "prog_type.m"
                    {
#line 897 "prog_type.m"
                      MR_Word base;
#line 897 "prog_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_type.m"
                      *parse_tree__prog_type__ConsId_7 = base;
#line 897 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 897 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 897 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 897 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_11));
#line 897 "prog_type.m"
                    }
#line 898 "prog_type.m"
                    {
#line 898 "prog_type.m"
                      parse_tree__prog_type__V_45_45 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                    }
#line 898 "prog_type.m"
                    {
#line 898 "prog_type.m"
                      MR_Word base;
#line 898 "prog_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 898 "prog_type.m"
                      *parse_tree__prog_type__InstConsId_8 = base;
#line 898 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 898 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 898 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 898 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 898 "prog_type.m"
                    }
#line 895 "prog_type.m"
                  }
#line 894 "prog_type.m"
                }
#line 894 "prog_type.m"
              else
#line 900 "prog_type.m"
                {
#line 900 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_46_46;

#line 900 "prog_type.m"
                  *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 901 "prog_type.m"
                  {
#line 901 "prog_type.m"
                    parse_tree__prog_type__V_46_46 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 901 "prog_type.m"
                  {
#line 901 "prog_type.m"
                    MR_Word base;
#line 901 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 901 "prog_type.m"
                    *parse_tree__prog_type__InstConsId_8 = base;
#line 901 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 901 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name0_9));
#line 901 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 901 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 901 "prog_type.m"
                  }
#line 900 "prog_type.m"
                }
#line 893 "prog_type.m"
            }
#line 893 "prog_type.m"
            break;
#line 893 "prog_type.m"
        }
#line 893 "prog_type.m"
        break;
#line 893 "prog_type.m"
    }
#line 893 "prog_type.m"
  }
#line 317 "prog_type.m"
}

#line 308 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_inst_cons_id_2_f_0(
#line 308 "prog_type.m"
  MR_Word parse_tree__prog_type__Which_4,
#line 308 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5)
#line 308 "prog_type.m"
{
#line 875 "prog_type.m"
  {
#line 875 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 875 "prog_type.m"
    MR_Word parse_tree__prog_type__InstConsId_6;
#line 875 "prog_type.m"
    MR_String parse_tree__prog_type__Symbol_8;
#line 875 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_9;
#line 875 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_10;
#line 875 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 881 "prog_type.m"
    if ((parse_tree__prog_type__Which_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "typeclass_info";
#line 881 "prog_type.m"
    else
#line 880 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "type_info";
#line 885 "prog_type.m"
    {
#line 885 "prog_type.m"
      parse_tree__prog_type__PrivateBuiltin_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 886 "prog_type.m"
    {
#line 886 "prog_type.m"
      parse_tree__prog_type__TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 887 "prog_type.m"
    {
#line 887 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_9));
#line 887 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 1) = ((MR_Box) (parse_tree__prog_type__Symbol_8));
#line 887 "prog_type.m"
    }
#line 887 "prog_type.m"
    {
#line 887 "prog_type.m"
      parse_tree__prog_type__InstConsId_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 887 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 1) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 887 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 2) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 887 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_10));
#line 887 "prog_type.m"
    }
#line 875 "prog_type.m"
    return parse_tree__prog_type__InstConsId_6;
#line 875 "prog_type.m"
  }
#line 308 "prog_type.m"
}

#line 306 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_cons_id_1_f_0(
#line 306 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 306 "prog_type.m"
{
#line 872 "prog_type.m"
  {
#line 872 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 872 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__2_2;

#line 872 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_type.m"
      parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "prog_type.m"
    else
#line 872 "prog_type.m"
      {
#line 872 "prog_type.m"
        MR_Word parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 872 "prog_type.m"
        parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__Ctor_3);
#line 872 "prog_type.m"
      }
#line 872 "prog_type.m"
    return parse_tree__prog_type__HeadVar__2_2;
#line 872 "prog_type.m"
  }
#line 306 "prog_type.m"
}

#line 300 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__make_type_ctor_3_p_0(
#line 300 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 300 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5,
#line 300 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 300 "prog_type.m"
{
#line 868 "prog_type.m"
  {
#line 868 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 868 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 868 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;

#line 868 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 868 "prog_type.m"
      {
#line 868 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 868 "prog_type.m"
        {
#line 868 "prog_type.m"
          parse_tree__prog_type__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 868 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 868 "prog_type.m"
        }
#line 868 "prog_type.m"
        {
#line 868 "prog_type.m"
          MR_Word base;
#line 868 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 868 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 868 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_6_6));
#line 868 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 868 "prog_type.m"
        }
#line 868 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 868 "prog_type.m"
      }
#line 868 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 868 "prog_type.m"
  }
#line 300 "prog_type.m"
}

#line 259 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__add_new_prefix_2_p_0(
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 259 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 259 "prog_type.m"
{
#line 861 "prog_type.m"
  {
#line 861 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 861 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 863 "prog_type.m"
      {
#line 863 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 863 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 863 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 864 "prog_type.m"
        {
#line 864 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_7, &parse_tree__prog_type__Name_8);
        }
#line 863 "prog_type.m"
        {
#line 863 "prog_type.m"
          MR_Word base;
#line 863 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 863 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 863 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 863 "prog_type.m"
        }
#line 863 "prog_type.m"
      }
#line 861 "prog_type.m"
    else
#line 861 "prog_type.m"
      {
#line 861 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 861 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 862 "prog_type.m"
        {
#line 862 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_3, &parse_tree__prog_type__Name_4);
        }
#line 861 "prog_type.m"
        {
#line 861 "prog_type.m"
          MR_Word base;
#line 861 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 861 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 861 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 861 "prog_type.m"
        }
#line 861 "prog_type.m"
      }
#line 861 "prog_type.m"
  }
#line 259 "prog_type.m"
}

#line 253 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__remove_new_prefix_2_p_0(
#line 253 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 253 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 253 "prog_type.m"
{
#line 856 "prog_type.m"
  {
#line 856 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 856 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 858 "prog_type.m"
      {
#line 858 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 858 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 858 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 859 "prog_type.m"
        {
#line 859 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_8, parse_tree__prog_type__Name0_7);
        }
#line 858 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 858 "prog_type.m"
          {
#line 858 "prog_type.m"
            {
#line 858 "prog_type.m"
              MR_Word base;
#line 858 "prog_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 858 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 858 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 858 "prog_type.m"
            }
#line 858 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 858 "prog_type.m"
          }
#line 858 "prog_type.m"
      }
#line 856 "prog_type.m"
    else
#line 856 "prog_type.m"
      {
#line 856 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 856 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 857 "prog_type.m"
        {
#line 857 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_4, parse_tree__prog_type__Name0_3);
        }
#line 856 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 856 "prog_type.m"
          {
#line 856 "prog_type.m"
            {
#line 856 "prog_type.m"
              MR_Word base;
#line 856 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 856 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 856 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 856 "prog_type.m"
            }
#line 856 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 856 "prog_type.m"
          }
#line 856 "prog_type.m"
      }
#line 856 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 856 "prog_type.m"
  }
#line 253 "prog_type.m"
}

#line 246 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(
#line 246 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtorCat_3)
#line 246 "prog_type.m"
{
#line 847 "prog_type.m"
  {
#line 847 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 847 "prog_type.m"
    MR_Word parse_tree__prog_type__IsIntroduced_4;

#line 847 "prog_type.m"
#line 847 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__TypeCtorCat_3)) {
#line 847 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 847 "prog_type.m"
      case (MR_Integer) 0:
#line 848 "prog_type.m"
        parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 847 "prog_type.m"
        break;
#line 847 "prog_type.m"
      case (MR_Integer) 1:
#line 847 "prog_type.m"
      case (MR_Integer) 2:
#line 848 "prog_type.m"
        parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 847 "prog_type.m"
        break;
#line 847 "prog_type.m"
      case (MR_Integer) 3:
#line 847 "prog_type.m"
#line 847 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeCtorCat_3, (MR_Integer) 0)))) {
#line 847 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 847 "prog_type.m"
          case (MR_Integer) 0:
#line 851 "prog_type.m"
            parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 1;
#line 847 "prog_type.m"
            break;
#line 847 "prog_type.m"
          case (MR_Integer) 1:
#line 848 "prog_type.m"
            parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 847 "prog_type.m"
            break;
#line 847 "prog_type.m"
        }
#line 847 "prog_type.m"
        break;
#line 847 "prog_type.m"
    }
#line 847 "prog_type.m"
    return parse_tree__prog_type__IsIntroduced_4;
#line 847 "prog_type.m"
  }
#line 246 "prog_type.m"
}

#line 244 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_ctor_1_p_0(
#line 244 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_2)
#line 244 "prog_type.m"
{
#line 828 "prog_type.m"
  {
#line 828 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 828 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_3;
#line 828 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 828 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 0)));
#line 828 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 1)));
#line 828 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__lo_0;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__hi_1;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__mid_2;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__result_3;

#line 829 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 829 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 829 "prog_type.m"
      {
#line 829 "prog_type.m"
        parse_tree__prog_type__PrivateBuiltin_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 829 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 829 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 828 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 828 "prog_type.m"
          {
#line 830 "prog_type.m"
            {
#line 830 "prog_type.m"
              parse_tree__prog_type__V_7_7 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            }
#line 830 "prog_type.m"
            {
#line 830 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_3, parse_tree__prog_type__V_7_7);
            }
#line 828 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 828 "prog_type.m"
              {
#line 832 "prog_type.m"
                /* binary string simple lookup switch */
#line 832 "prog_type.m"
                parse_tree__prog_type__lo_0 = (MR_Integer) 0;
#line 832 "prog_type.m"
                parse_tree__prog_type__hi_1 = (MR_Integer) 3;
#line 832 "prog_type.m"
                do
#line 832 "prog_type.m"
                  {
#line 832 "prog_type.m"
                    parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
#line 832 "prog_type.m"
                    parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_4, ((&parse_tree__prog_type_vector_common_5[4 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
#line 832 "prog_type.m"
                    if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
#line 832 "prog_type.m"
                      {
#line 832 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 832 "prog_type.m"
                        /* jump out of search loop */
#line 832 "prog_type.m"
                        goto label_0;
#line 832 "prog_type.m"
                      }
#line 832 "prog_type.m"
                    else
#line 832 "prog_type.m"
                    if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
#line 832 "prog_type.m"
                      parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
#line 832 "prog_type.m"
                    else
#line 832 "prog_type.m"
                      parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
#line 832 "prog_type.m"
                  }
#line 832 "prog_type.m"
                while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
#line 832 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_FALSE;
#line 832 "prog_type.m"
              label_0:;
#line 828 "prog_type.m"
              }
#line 828 "prog_type.m"
          }
#line 829 "prog_type.m"
      }
#line 828 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 828 "prog_type.m"
  }
#line 244 "prog_type.m"
}

#line 242 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_1_p_0(
#line 242 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 242 "prog_type.m"
{
#line 824 "prog_type.m"
  {
#line 824 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 824 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 824 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_8;
#line 824 "prog_type.m"
    MR_String parse_tree__prog_type__Name_9;
#line 824 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 824 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_11_11;
#line 824 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;
#line 570 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_6;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__lo_0;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__hi_1;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__mid_2;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__result_3;

#line 570 "prog_type.m"
    {
#line 570 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type___Args_6);
    }
#line 824 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 824 "prog_type.m"
      {
#line 829 "prog_type.m"
        parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 829 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 829 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 829 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 829 "prog_type.m"
          {
#line 829 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 0)));
#line 829 "prog_type.m"
            parse_tree__prog_type__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 1)));
#line 829 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_11_11 == (MR_Integer) 0);
#line 824 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 824 "prog_type.m"
              {
#line 830 "prog_type.m"
                {
#line 830 "prog_type.m"
                  parse_tree__prog_type__V_12_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
#line 830 "prog_type.m"
                {
#line 830 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_8, parse_tree__prog_type__V_12_12);
                }
#line 824 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 824 "prog_type.m"
                  {
#line 832 "prog_type.m"
                    /* binary string simple lookup switch */
#line 832 "prog_type.m"
                    parse_tree__prog_type__lo_0 = (MR_Integer) 0;
#line 832 "prog_type.m"
                    parse_tree__prog_type__hi_1 = (MR_Integer) 3;
#line 832 "prog_type.m"
                    do
#line 832 "prog_type.m"
                      {
#line 832 "prog_type.m"
                        parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
#line 832 "prog_type.m"
                        parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_9, ((&parse_tree__prog_type_vector_common_5[0 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
#line 832 "prog_type.m"
                        if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
#line 832 "prog_type.m"
                          {
#line 832 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 832 "prog_type.m"
                            /* jump out of search loop */
#line 832 "prog_type.m"
                            goto label_0;
#line 832 "prog_type.m"
                          }
#line 832 "prog_type.m"
                        else
#line 832 "prog_type.m"
                        if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
#line 832 "prog_type.m"
                          parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
#line 832 "prog_type.m"
                        else
#line 832 "prog_type.m"
                          parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
#line 832 "prog_type.m"
                      }
#line 832 "prog_type.m"
                    while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
#line 832 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 832 "prog_type.m"
                  label_0:;
#line 824 "prog_type.m"
                  }
#line 824 "prog_type.m"
              }
#line 829 "prog_type.m"
          }
#line 824 "prog_type.m"
      }
#line 824 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 824 "prog_type.m"
  }
#line 242 "prog_type.m"
}

#line 234 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_bitmap_1_p_0(
#line 234 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 234 "prog_type.m"
{
#line 821 "prog_type.m"
  {
#line 821 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 821 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 821 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 821 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 821 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 821 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 822 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 822 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
      {
#line 822 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 822 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 822 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 822 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
          {
#line 822 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 822 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "bitmap") == 0);
#line 821 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 821 "prog_type.m"
              {
#line 822 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "bitmap") == 0);
#line 821 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 821 "prog_type.m"
              }
#line 822 "prog_type.m"
          }
#line 822 "prog_type.m"
      }
#line 821 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 821 "prog_type.m"
  }
#line 234 "prog_type.m"
}

#line 232 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_array_1_p_0(
#line 232 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 232 "prog_type.m"
{
#line 819 "prog_type.m"
  {
#line 819 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 819 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 819 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 819 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 819 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 819 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 819 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 819 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 819 "prog_type.m"
      {
#line 819 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 819 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 819 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 819 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 819 "prog_type.m"
          {
#line 819 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 819 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "array") == 0);
#line 819 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 819 "prog_type.m"
              {
#line 819 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "array") == 0);
#line 819 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 819 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 1);
#line 819 "prog_type.m"
              }
#line 819 "prog_type.m"
          }
#line 819 "prog_type.m"
      }
#line 819 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 819 "prog_type.m"
  }
#line 232 "prog_type.m"
}

#line 230 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_io_state_1_p_0(
#line 230 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 230 "prog_type.m"
{
#line 814 "prog_type.m"
  {
#line 814 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_11_11;
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_4;
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 814 "prog_type.m"
    MR_String parse_tree__prog_type__V_7_7;
#line 814 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_8_8;
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;

#line 815 "prog_type.m"
    {
#line 815 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type__V_9_9);
    }
#line 814 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 814 "prog_type.m"
      {
#line 9055 "parse_tree.prog_type.c"
        parse_tree__prog_type__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 815 "prog_type.m"
        {
#line 815 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_11_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 814 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 814 "prog_type.m"
          {
#line 816 "prog_type.m"
            {
#line 816 "prog_type.m"
              parse_tree__prog_type__ModuleName_4 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 817 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 817 "prog_type.m"
            parse_tree__prog_type__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 817 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 817 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
              {
#line 817 "prog_type.m"
                parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 817 "prog_type.m"
                parse_tree__prog_type__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 817 "prog_type.m"
                {
#line 817 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_4, parse_tree__prog_type__V_10_10);
                }
#line 814 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 814 "prog_type.m"
                  {
#line 817 "prog_type.m"
                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_7_7, (MR_String) "state") == 0);
#line 814 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_8_8 == (MR_Integer) 0);
#line 814 "prog_type.m"
                  }
#line 817 "prog_type.m"
              }
#line 814 "prog_type.m"
          }
#line 814 "prog_type.m"
      }
#line 814 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 814 "prog_type.m"
  }
#line 230 "prog_type.m"
}

#line 228 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(
#line 228 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_3)
#line 228 "prog_type.m"
{
#line 794 "prog_type.m"
  {
#line 794 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 794 "prog_type.m"
    MR_Word parse_tree__prog_type__IsBuiltinDummy_4;
#line 794 "prog_type.m"
    MR_Word parse_tree__prog_type__CtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 794 "prog_type.m"
    MR_Integer parse_tree__prog_type__TypeArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 797 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_7;
#line 797 "prog_type.m"
    MR_String parse_tree__prog_type__TypeName_8;
#line 797 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;

#line 797 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 797 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 797 "prog_type.m"
      {
#line 797 "prog_type.m"
        parse_tree__prog_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 797 "prog_type.m"
        parse_tree__prog_type__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 798 "prog_type.m"
        {
#line 798 "prog_type.m"
          parse_tree__prog_type__V_15_15 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        }
#line 798 "prog_type.m"
        {
#line 798 "prog_type.m"
          parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_7, parse_tree__prog_type__V_15_15);
        }
#line 797 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 797 "prog_type.m"
          {
#line 799 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_8, (MR_String) "state") == 0);
#line 797 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 800 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 0);
#line 797 "prog_type.m"
          }
#line 797 "prog_type.m"
      }
#line 796 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 802 "prog_type.m"
      parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 796 "prog_type.m"
    else
#line 803 "prog_type.m"
      {
#line 804 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 804 "prog_type.m"
        MR_String parse_tree__prog_type__V_10_10;
#line 804 "prog_type.m"
        MR_Word parse_tree__prog_type__ModuleName_11;
#line 804 "prog_type.m"
        MR_String parse_tree__prog_type__TypeName_12;
#line 804 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17;

#line 804 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 804 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 804 "prog_type.m"
          {
#line 804 "prog_type.m"
            parse_tree__prog_type__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 804 "prog_type.m"
            parse_tree__prog_type__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 805 "prog_type.m"
            parse_tree__prog_type__V_10_10 = (MR_String) "store";
#line 805 "prog_type.m"
            parse_tree__prog_type__V_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_3[2];
#line 805 "prog_type.m"
            {
#line 805 "prog_type.m"
              parse_tree__prog_type__V_17_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(parse_tree__prog_type__V_9_9);
            }
#line 805 "prog_type.m"
            {
#line 805 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_11, parse_tree__prog_type__V_17_17);
            }
#line 804 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 804 "prog_type.m"
              {
#line 806 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_12, (MR_String) "store") == 0);
#line 804 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 807 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 1);
#line 804 "prog_type.m"
              }
#line 804 "prog_type.m"
          }
#line 803 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 809 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 803 "prog_type.m"
        else
#line 811 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 1;
#line 803 "prog_type.m"
      }
#line 794 "prog_type.m"
    return parse_tree__prog_type__IsBuiltinDummy_4;
#line 794 "prog_type.m"
  }
#line 228 "prog_type.m"
}

#line 217 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
#line 217 "prog_type.m"
{
#line 783 "prog_type.m"
  {
#line 783 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__1_1;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_8_8;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_22_22;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_25_25;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_26_26;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_27_27;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_28_28;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_31_31;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_34_34;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_39_39;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_40_40;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_43_43;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_44_44;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_45_45;
#line 783 "prog_type.m"
    MR_Word parse_tree__prog_type__V_46_46;

#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_4_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 0) = ((MR_Box) (parse_tree__prog_type__V_4_4));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 1) = ((MR_Box) ((MR_String) "int"));
#line 784 "prog_type.m"
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 0) = ((MR_Box) (parse_tree__prog_type__V_3_3));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 1) = ((MR_Box) ((MR_Integer) 0));
#line 784 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_10_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 0) = ((MR_Box) (parse_tree__prog_type__V_10_10));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 1) = ((MR_Box) ((MR_String) "string"));
#line 785 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 0) = ((MR_Box) (parse_tree__prog_type__V_9_9));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 785 "prog_type.m"
    }
#line 786 "prog_type.m"
    {
#line 786 "prog_type.m"
      parse_tree__prog_type__V_16_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 786 "prog_type.m"
    {
#line 786 "prog_type.m"
      parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__V_16_16));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) ((MR_String) "character"));
#line 786 "prog_type.m"
    }
#line 786 "prog_type.m"
    {
#line 786 "prog_type.m"
      parse_tree__prog_type__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 0) = ((MR_Box) (parse_tree__prog_type__V_15_15));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 786 "prog_type.m"
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_22_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 0) = ((MR_Box) (parse_tree__prog_type__V_22_22));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 1) = ((MR_Box) ((MR_String) "float"));
#line 787 "prog_type.m"
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 0) = ((MR_Box) (parse_tree__prog_type__V_21_21));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 787 "prog_type.m"
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 1) = ((MR_Box) ((MR_String) "pred"));
#line 788 "prog_type.m"
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 0) = ((MR_Box) (parse_tree__prog_type__V_27_27));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 788 "prog_type.m"
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_34_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 0) = ((MR_Box) (parse_tree__prog_type__V_34_34));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 1) = ((MR_Box) ((MR_String) "func"));
#line 789 "prog_type.m"
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 0) = ((MR_Box) (parse_tree__prog_type__V_33_33));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 789 "prog_type.m"
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_40_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 0) = ((MR_Box) (parse_tree__prog_type__V_40_40));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 1) = ((MR_Box) ((MR_String) "void"));
#line 790 "prog_type.m"
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 0) = ((MR_Box) (parse_tree__prog_type__V_39_39));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 790 "prog_type.m"
    }
#line 791 "prog_type.m"
    {
#line 791 "prog_type.m"
      parse_tree__prog_type__V_46_46 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 791 "prog_type.m"
    {
#line 791 "prog_type.m"
      parse_tree__prog_type__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 0) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 1) = ((MR_Box) ((MR_String) "tuple"));
#line 791 "prog_type.m"
    }
#line 791 "prog_type.m"
    {
#line 791 "prog_type.m"
      parse_tree__prog_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 791 "prog_type.m"
    }
#line 792 "prog_type.m"
    {
#line 792 "prog_type.m"
      parse_tree__prog_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 0) = ((MR_Box) (parse_tree__prog_type__V_44_44));
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_type.m"
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 0) = ((MR_Box) (parse_tree__prog_type__V_38_38));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 1) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 790 "prog_type.m"
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__V_32_32));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 1) = ((MR_Box) (parse_tree__prog_type__V_37_37));
#line 789 "prog_type.m"
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__V_26_26));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 788 "prog_type.m"
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__V_20_20));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 1) = ((MR_Box) (parse_tree__prog_type__V_25_25));
#line 787 "prog_type.m"
    }
#line 786 "prog_type.m"
    {
#line 786 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__V_14_14));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 786 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 0) = ((MR_Box) (parse_tree__prog_type__V_8_8));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 785 "prog_type.m"
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_type__V_2_2));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__prog_type__V_7_7));
#line 784 "prog_type.m"
    }
#line 783 "prog_type.m"
    return parse_tree__prog_type__HeadVar__1_1;
#line 783 "prog_type.m"
  }
#line 217 "prog_type.m"
}

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 768 "prog_type.m"
{
#line 768 "prog_type.m"
  {
#line 768 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 768 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 768 "prog_type.m"
  }
#line 768 "prog_type.m"
}

#line 209 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0(
#line 209 "prog_type.m"
  MR_Word parse_tree__prog_type__Tvars_4,
#line 209 "prog_type.m"
  MR_Word parse_tree__prog_type__Constraints_5,
#line 209 "prog_type.m"
  MR_Word * parse_tree__prog_type__Unconstrained_6)
#line 209 "prog_type.m"
{
#line 774 "prog_type.m"
  {
#line 774 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__ConstrainedTvars_7;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__Unconstrained0_8;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_12;

#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[5], parse_tree__prog_type__Constraints_5, &parse_tree__prog_type__TVarsList_12);
    }
#line 769 "prog_type.m"
    {
#line 769 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_12, &parse_tree__prog_type__ConstrainedTvars_7);
    }
#line 9672 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 776 "prog_type.m"
    {
#line 776 "prog_type.m"
      mercury__list__delete_elems_3_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Tvars_4, parse_tree__prog_type__ConstrainedTvars_7, &parse_tree__prog_type__Unconstrained0_8);
    }
#line 777 "prog_type.m"
    {
#line 777 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Unconstrained0_8, parse_tree__prog_type__Unconstrained_6);
    }
#line 774 "prog_type.m"
  }
#line 209 "prog_type.m"
}

#line 207 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__constraint_get_tvars_2_p_0(
#line 207 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 207 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_5)
#line 207 "prog_type.m"
{
#line 771 "prog_type.m"
  {
#line 771 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_11;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_8;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_9;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type___ClassName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 649 "prog_type.m"
    {
#line 649 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__ArgTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_8);
    }
#line 9718 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 650 "prog_type.m"
    {
#line 650 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__RevTVars_8, &parse_tree__prog_type__TVarsDups_9);
    }
#line 651 "prog_type.m"
    {
#line 651 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__TVarsDups_9, parse_tree__prog_type__TVars_5);
    }
#line 771 "prog_type.m"
  }
#line 207 "prog_type.m"
}

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 768 "prog_type.m"
{
#line 768 "prog_type.m"
  {
#line 768 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 768 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 768 "prog_type.m"
  }
#line 768 "prog_type.m"
}

#line 202 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0(
#line 202 "prog_type.m"
  MR_Word parse_tree__prog_type__Constraints_3,
#line 202 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 202 "prog_type.m"
{
#line 767 "prog_type.m"
  {
#line 767 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 767 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_5;

#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[4], parse_tree__prog_type__Constraints_3, &parse_tree__prog_type__TVarsList_5);
    }
#line 769 "prog_type.m"
    {
#line 769 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_5, parse_tree__prog_type__TVars_4);
    }
#line 767 "prog_type.m"
  }
#line 202 "prog_type.m"
}

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 768 "prog_type.m"
{
#line 768 "prog_type.m"
  {
#line 768 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__conv1_TVars_5;

#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv1_TVars_5);
    }
#line 768 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv1_TVars_5));
#line 768 "prog_type.m"
  }
#line 768 "prog_type.m"
}

#line 768 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 768 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 768 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 768 "prog_type.m"
{
#line 768 "prog_type.m"
  {
#line 768 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 768 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 768 "prog_type.m"
  }
#line 768 "prog_type.m"
}

#line 197 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(
#line 197 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 197 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_5)
#line 197 "prog_type.m"
{
#line 762 "prog_type.m"
  {
#line 762 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__Univ_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__Exist_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__UnivTVars_6;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistTVars_7;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_11;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_20;

#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[2], parse_tree__prog_type__Univ_3, &parse_tree__prog_type__TVarsList_11);
    }
#line 769 "prog_type.m"
    {
#line 769 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_11, &parse_tree__prog_type__UnivTVars_6);
    }
#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[3], parse_tree__prog_type__Exist_4, &parse_tree__prog_type__TVarsList_20);
    }
#line 769 "prog_type.m"
    {
#line 769 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_20, &parse_tree__prog_type__ExistTVars_7);
    }
#line 765 "prog_type.m"
    {
#line 765 "prog_type.m"
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__UnivTVars_6, parse_tree__prog_type__ExistTVars_7, parse_tree__prog_type__TVars_5);
    }
#line 762 "prog_type.m"
  }
#line 197 "prog_type.m"
}

#line 758 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 758 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 758 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 758 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 758 "prog_type.m"
{
#line 758 "prog_type.m"
  {
#line 758 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 758 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_HeadVar__2_2;

#line 758 "prog_type.m"
    {
#line 758 "prog_type.m"
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_HeadVar__2_2);
    }
#line 758 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
#line 758 "prog_type.m"
  }
#line 758 "prog_type.m"
}

#line 192 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(
#line 192 "prog_type.m"
  MR_Word parse_tree__prog_type__Types0_3,
#line 192 "prog_type.m"
  MR_Word * parse_tree__prog_type__Types_4)
#line 192 "prog_type.m"
{
#line 757 "prog_type.m"
  {
#line 757 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 757 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 758 "prog_type.m"
    {
#line 758 "prog_type.m"
      mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_8, parse_tree__prog_type__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_type_scalar_common_2[1], parse_tree__prog_type__Types0_3, parse_tree__prog_type__Types_4);
    }
#line 757 "prog_type.m"
  }
#line 192 "prog_type.m"
}

#line 190 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(
#line 190 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 190 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 190 "prog_type.m"
{
#line 720 "prog_type.m"
  {
#line 720 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 720 "prog_type.m"
#line 720 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 720 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 720 "prog_type.m"
      case (MR_Integer) 0:
#line 721 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 720 "prog_type.m"
        break;
#line 720 "prog_type.m"
      case (MR_Integer) 1:
#line 723 "prog_type.m"
        {
#line 723 "prog_type.m"
          MR_Word parse_tree__prog_type__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 723 "prog_type.m"
          MR_Word parse_tree__prog_type__Args0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 723 "prog_type.m"
          MR_Word parse_tree__prog_type__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 723 "prog_type.m"
          MR_Word parse_tree__prog_type__Name_8;
#line 723 "prog_type.m"
          MR_Word parse_tree__prog_type__Args_9;
#line 724 "prog_type.m"
          MR_String parse_tree__prog_type__Name1_11;
#line 725 "prog_type.m"
          MR_Word parse_tree__prog_type__Module_10;
#line 725 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 725 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 725 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 725 "prog_type.m"
            {
#line 725 "prog_type.m"
              parse_tree__prog_type__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 0)));
#line 725 "prog_type.m"
              parse_tree__prog_type__Name1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 1)));
#line 726 "prog_type.m"
              {
#line 726 "prog_type.m"
                parse_tree__prog_type__V_31_31 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 726 "prog_type.m"
              {
#line 726 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__Module_10, parse_tree__prog_type__V_31_31);
              }
#line 725 "prog_type.m"
            }
#line 724 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 728 "prog_type.m"
            {
#line 728 "prog_type.m"
              parse_tree__prog_type__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 728 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__Name_8, 0) = ((MR_Box) (parse_tree__prog_type__Name1_11));
#line 728 "prog_type.m"
            }
#line 724 "prog_type.m"
          else
#line 730 "prog_type.m"
            parse_tree__prog_type__Name_8 = parse_tree__prog_type__Name0_5;
#line 732 "prog_type.m"
          {
#line 732 "prog_type.m"
            parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_6, &parse_tree__prog_type__Args_9);
          }
#line 723 "prog_type.m"
          {
#line 723 "prog_type.m"
            MR_Word base;
#line 723 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 723 "prog_type.m"
            *parse_tree__prog_type__HeadVar__2_2 = base;
#line 723 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 723 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_9));
#line 723 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_7));
#line 723 "prog_type.m"
          }
#line 723 "prog_type.m"
        }
#line 720 "prog_type.m"
        break;
#line 720 "prog_type.m"
      case (MR_Integer) 2:
#line 734 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 720 "prog_type.m"
        break;
#line 720 "prog_type.m"
      case (MR_Integer) 3:
#line 720 "prog_type.m"
#line 720 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 720 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 720 "prog_type.m"
          case (MR_Integer) 0:
#line 748 "prog_type.m"
            {
#line 748 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 748 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_23;

#line 749 "prog_type.m"
              {
#line 749 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_21, &parse_tree__prog_type__Args_23);
              }
#line 748 "prog_type.m"
              {
#line 748 "prog_type.m"
                MR_Word base;
#line 748 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 748 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 748 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_23));
#line 748 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_22));
#line 748 "prog_type.m"
              }
#line 748 "prog_type.m"
            }
#line 720 "prog_type.m"
            break;
#line 720 "prog_type.m"
          case (MR_Integer) 1:
#line 737 "prog_type.m"
            {
#line 737 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 737 "prog_type.m"
              MR_Word parse_tree__prog_type__MaybeRet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 737 "prog_type.m"
              MR_Word parse_tree__prog_type__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 737 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_17;
#line 737 "prog_type.m"
              MR_Word parse_tree__prog_type__MaybeRet_18;

#line 738 "prog_type.m"
              {
#line 738 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_13, &parse_tree__prog_type__Args_17);
              }
#line 743 "prog_type.m"
              if ((parse_tree__prog_type__MaybeRet0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "prog_type.m"
                parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 743 "prog_type.m"
              else
#line 740 "prog_type.m"
                {
#line 740 "prog_type.m"
                  MR_Word parse_tree__prog_type__Ret0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet0_14, (MR_Integer) 0)));
#line 740 "prog_type.m"
                  MR_Word parse_tree__prog_type__Ret_20;

#line 741 "prog_type.m"
                  {
#line 741 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Ret0_19, &parse_tree__prog_type__Ret_20);
                  }
#line 742 "prog_type.m"
                  {
#line 742 "prog_type.m"
                    parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_18, 0) = ((MR_Box) (parse_tree__prog_type__Ret_20));
#line 742 "prog_type.m"
                  }
#line 740 "prog_type.m"
                }
#line 737 "prog_type.m"
              {
#line 737 "prog_type.m"
                MR_Word base;
#line 737 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 737 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 737 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 737 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_17));
#line 737 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__MaybeRet_18));
#line 737 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_15));
#line 737 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 737 "prog_type.m"
              }
#line 737 "prog_type.m"
            }
#line 720 "prog_type.m"
            break;
#line 720 "prog_type.m"
          case (MR_Integer) 2:
#line 751 "prog_type.m"
            {
#line 751 "prog_type.m"
              MR_Word parse_tree__prog_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 751 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 751 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 751 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_27;

#line 752 "prog_type.m"
              {
#line 752 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_25, &parse_tree__prog_type__Args_27);
              }
#line 751 "prog_type.m"
              {
#line 751 "prog_type.m"
                MR_Word base;
#line 751 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 751 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 751 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 751 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_24));
#line 751 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Args_27));
#line 751 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Kind_26));
#line 751 "prog_type.m"
              }
#line 751 "prog_type.m"
            }
#line 720 "prog_type.m"
            break;
#line 720 "prog_type.m"
          case (MR_Integer) 3:
#line 754 "prog_type.m"
            {
#line 754 "prog_type.m"
              MR_Word parse_tree__prog_type__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 754 "prog_type.m"
              MR_Word parse_tree__prog_type__Type_30;

#line 755 "prog_type.m"
              {
#line 755 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Type0_28, &parse_tree__prog_type__Type_30);
              }
#line 754 "prog_type.m"
              {
#line 754 "prog_type.m"
                MR_Word base;
#line 754 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 754 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 754 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 754 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Type_30));
#line 754 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_29));
#line 754 "prog_type.m"
              }
#line 754 "prog_type.m"
            }
#line 720 "prog_type.m"
            break;
#line 720 "prog_type.m"
        }
#line 720 "prog_type.m"
        break;
#line 720 "prog_type.m"
    }
#line 720 "prog_type.m"
  }
#line 190 "prog_type.m"
}

#line 184 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_func_type_5_p_0(
#line 184 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_6,
#line 184 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_8,
#line 184 "prog_type.m"
  MR_Word parse_tree__prog_type__RetType_9,
#line 184 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_10)
#line 184 "prog_type.m"
{
#line 717 "prog_type.m"
  {
#line 717 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 717 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 718 "prog_type.m"
    {
#line 718 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__RetType_9));
#line 718 "prog_type.m"
    }
#line 718 "prog_type.m"
    {
#line 718 "prog_type.m"
      MR_Word base;
#line 718 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_type.m"
      *parse_tree__prog_type__Type_10 = base;
#line 718 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 718 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_8));
#line 718 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 718 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 718 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 718 "prog_type.m"
    }
#line 717 "prog_type.m"
  }
#line 184 "prog_type.m"
}

#line 181 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(
#line 181 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_5,
#line 181 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_7,
#line 181 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_8)
#line 181 "prog_type.m"
{
#line 713 "prog_type.m"
  {
#line 713 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 714 "prog_type.m"
    {
#line 714 "prog_type.m"
      MR_Word base;
#line 714 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 714 "prog_type.m"
      *parse_tree__prog_type__Type_8 = base;
#line 714 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 714 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_7));
#line 714 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_5));
#line 714 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 714 "prog_type.m"
    }
#line 713 "prog_type.m"
  }
#line 181 "prog_type.m"
}

#line 178 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_type_5_p_0(
#line 178 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_6,
#line 178 "prog_type.m"
  MR_Word parse_tree__prog_type__PredOrFunc_7,
#line 178 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_9,
#line 178 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_10)
#line 178 "prog_type.m"
{
#line 704 "prog_type.m"
  {
#line 704 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 704 "prog_type.m"
#line 704 "prog_type.m"
    switch (parse_tree__prog_type__PredOrFunc_7) {
#line 704 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 704 "prog_type.m"
      case (MR_Integer) 1:
#line 707 "prog_type.m"
        {
#line 707 "prog_type.m"
          MR_Word parse_tree__prog_type__FuncArgTypes_11;
#line 707 "prog_type.m"
          MR_Word parse_tree__prog_type__FuncRetType_12;
#line 707 "prog_type.m"
          MR_Word parse_tree__prog_type__V_19_19;
#line 708 "prog_type.m"
          MR_Box parse_tree__prog_type__conv0_FuncRetType_12;

#line 708 "prog_type.m"
          {
#line 708 "prog_type.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_9, &parse_tree__prog_type__FuncArgTypes_11, &parse_tree__prog_type__conv0_FuncRetType_12);
          }
#line 708 "prog_type.m"
          parse_tree__prog_type__FuncRetType_12 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_12);
#line 718 "prog_type.m"
          {
#line 718 "prog_type.m"
            parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_12));
#line 718 "prog_type.m"
          }
#line 718 "prog_type.m"
          {
#line 718 "prog_type.m"
            MR_Word base;
#line 718 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_type.m"
            *parse_tree__prog_type__Type_10 = base;
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_11));
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 718 "prog_type.m"
          }
#line 707 "prog_type.m"
        }
#line 704 "prog_type.m"
        break;
#line 704 "prog_type.m"
      case (MR_Integer) 0:
#line 713 "prog_type.m"
        {
#line 714 "prog_type.m"
          {
#line 714 "prog_type.m"
            MR_Word base;
#line 714 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 714 "prog_type.m"
            *parse_tree__prog_type__Type_10 = base;
#line 714 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 714 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_9));
#line 714 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 714 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 714 "prog_type.m"
          }
#line 713 "prog_type.m"
        }
#line 704 "prog_type.m"
        break;
#line 704 "prog_type.m"
    }
#line 704 "prog_type.m"
  }
#line 178 "prog_type.m"
}

#line 175 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_type_3_p_0(
#line 175 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_4,
#line 175 "prog_type.m"
  MR_Word parse_tree__prog_type__Args_5,
#line 175 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_6)
#line 175 "prog_type.m"
{
#line 682 "prog_type.m"
  {
#line 682 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 682 "prog_type.m"
    MR_Word parse_tree__prog_type__BuiltinType_8;
#line 683 "prog_type.m"
    MR_String parse_tree__prog_type__Name_7;
#line 683 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 683 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 683 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == (MR_Integer) 0);
#line 683 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 683 "prog_type.m"
      {
#line 683 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 683 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 683 "prog_type.m"
          {
#line 683 "prog_type.m"
            parse_tree__prog_type__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, (MR_Integer) 0)));
#line 684 "prog_type.m"
            {
#line 684 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_type__BuiltinType_8, parse_tree__prog_type__Name_7);
            }
#line 683 "prog_type.m"
          }
#line 683 "prog_type.m"
      }
#line 682 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 686 "prog_type.m"
      {
#line 686 "prog_type.m"
        MR_Word base;
#line 686 "prog_type.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_type.m"
        *parse_tree__prog_type__Type_6 = base;
#line 686 "prog_type.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_type__BuiltinType_8));
#line 686 "prog_type.m"
      }
#line 682 "prog_type.m"
    else
#line 687 "prog_type.m"
      {
#line 687 "prog_type.m"
        MR_Word parse_tree__prog_type__Purity_9;
#line 687 "prog_type.m"
        MR_Word parse_tree__prog_type__PredOrFunc_10;

#line 688 "prog_type.m"
        {
#line 688 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type__Purity_9, &parse_tree__prog_type__PredOrFunc_10);
        }
#line 687 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 704 "prog_type.m"
#line 704 "prog_type.m"
          switch (parse_tree__prog_type__PredOrFunc_10) {
#line 704 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 704 "prog_type.m"
            case (MR_Integer) 1:
#line 707 "prog_type.m"
              {
#line 707 "prog_type.m"
                MR_Word parse_tree__prog_type__FuncArgTypes_23;
#line 707 "prog_type.m"
                MR_Word parse_tree__prog_type__FuncRetType_24;
#line 707 "prog_type.m"
                MR_Word parse_tree__prog_type__V_31_31;
#line 708 "prog_type.m"
                MR_Box parse_tree__prog_type__conv0_FuncRetType_24;

#line 708 "prog_type.m"
                {
#line 708 "prog_type.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Args_5, &parse_tree__prog_type__FuncArgTypes_23, &parse_tree__prog_type__conv0_FuncRetType_24);
                }
#line 708 "prog_type.m"
                parse_tree__prog_type__FuncRetType_24 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_24);
#line 718 "prog_type.m"
                {
#line 718 "prog_type.m"
                  parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_24));
#line 718 "prog_type.m"
                }
#line 718 "prog_type.m"
                {
#line 718 "prog_type.m"
                  MR_Word base;
#line 718 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 718 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 718 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_23));
#line 718 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 718 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 718 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 718 "prog_type.m"
                }
#line 707 "prog_type.m"
              }
#line 704 "prog_type.m"
              break;
#line 704 "prog_type.m"
            case (MR_Integer) 0:
#line 713 "prog_type.m"
              {
#line 714 "prog_type.m"
                {
#line 714 "prog_type.m"
                  MR_Word base;
#line 714 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 714 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 714 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 714 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 714 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 714 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 714 "prog_type.m"
                }
#line 713 "prog_type.m"
              }
#line 704 "prog_type.m"
              break;
#line 704 "prog_type.m"
          }
#line 687 "prog_type.m"
        else
#line 691 "prog_type.m"
          {
#line 608 "prog_type.m"
            MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 608 "prog_type.m"
            MR_String parse_tree__prog_type__V_39_39;
#line 608 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 608 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 608 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 608 "prog_type.m"
              {
#line 608 "prog_type.m"
                parse_tree__prog_type__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 608 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_39_39, (MR_String) "{}") == 0);
#line 608 "prog_type.m"
              }
#line 691 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 695 "prog_type.m"
              {
#line 695 "prog_type.m"
                {
#line 695 "prog_type.m"
                  MR_Word base;
#line 695 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 695 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 695 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 695 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 695 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "prog_type.m"
                }
#line 695 "prog_type.m"
              }
#line 691 "prog_type.m"
            else
#line 697 "prog_type.m"
              {
#line 697 "prog_type.m"
                MR_Word parse_tree__prog_type__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 697 "prog_type.m"
                MR_Integer parse_tree__prog_type__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 699 "prog_type.m"
                {
#line 699 "prog_type.m"
                  MR_Word base;
#line 699 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 699 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_12));
#line 699 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 699 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "prog_type.m"
                }
#line 697 "prog_type.m"
              }
#line 691 "prog_type.m"
          }
#line 687 "prog_type.m"
      }
#line 682 "prog_type.m"
  }
#line 175 "prog_type.m"
}

#line 170 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_contains_var_2_p_0(
#line 170 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 170 "prog_type.m"
  MR_Word * parse_tree__prog_type__Var_2,
#line 170 "prog_type.m"
  MR_Cont parse_tree__prog_type__cont,
#line 170 "prog_type.m"
  void * parse_tree__prog_type__cont_env_ptr)
#line 170 "prog_type.m"
{
#line 676 "prog_type.m"
  while (MR_TRUE)
#line 676 "prog_type.m"
    {
#line 676 "prog_type.m"
      /* tailcall optimized into a loop */
#line 676 "prog_type.m"
      {
#line 676 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 676 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 676 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10;

#line 676 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 676 "prog_type.m"
          {
#line 676 "prog_type.m"
            parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 676 "prog_type.m"
            parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 677 "prog_type.m"
            {
#line 677 "prog_type.m"
              parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_type__V_10_10, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
            }
#line 679 "prog_type.m"
            {
#line 679 "prog_type.m"
              /* direct tailcall eliminated */
#line 679 "prog_type.m"
              {
#line 679 "prog_type.m"
                MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__V_9_9;

#line 679 "prog_type.m"
                parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 679 "prog_type.m"
              }
#line 679 "prog_type.m"
              continue;
#line 679 "prog_type.m"
            }
#line 676 "prog_type.m"
          }
#line 676 "prog_type.m"
      }
#line 676 "prog_type.m"
      break;
#line 676 "prog_type.m"
    }
#line 170 "prog_type.m"
}

#line 166 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_contains_var_2_p_0(
#line 166 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 166 "prog_type.m"
  MR_Word * parse_tree__prog_type__Var_2,
#line 166 "prog_type.m"
  MR_Cont parse_tree__prog_type__cont,
#line 166 "prog_type.m"
  void * parse_tree__prog_type__cont_env_ptr)
#line 166 "prog_type.m"
{
#line 661 "prog_type.m"
  while (MR_TRUE)
#line 661 "prog_type.m"
    {
#line 661 "prog_type.m"
      /* tailcall optimized into a loop */
#line 661 "prog_type.m"
      {
#line 661 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 661 "prog_type.m"
#line 661 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 661 "prog_type.m"
          case (MR_Integer) 0:
#line 661 "prog_type.m"
            {
#line 661 "prog_type.m"
              MR_Word parse_tree__prog_type__V_4_4;

#line 661 "prog_type.m"
              *parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 661 "prog_type.m"
              parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 661 "prog_type.m"
              {
#line 661 "prog_type.m"
                parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
              }
#line 661 "prog_type.m"
            }
#line 661 "prog_type.m"
            break;
#line 661 "prog_type.m"
          case (MR_Integer) 1:
#line 662 "prog_type.m"
            {
#line 662 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "prog_type.m"
              MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "prog_type.m"
              MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 663 "prog_type.m"
              {
#line 663 "prog_type.m"
                parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_6, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
              }
#line 662 "prog_type.m"
            }
#line 661 "prog_type.m"
            break;
#line 661 "prog_type.m"
          case (MR_Integer) 3:
#line 661 "prog_type.m"
#line 661 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 661 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 661 "prog_type.m"
              case (MR_Integer) 0:
#line 668 "prog_type.m"
                {
#line 668 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 669 "prog_type.m"
                  {
#line 669 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                  }
#line 668 "prog_type.m"
                }
#line 661 "prog_type.m"
                break;
#line 661 "prog_type.m"
              case (MR_Integer) 1:
#line 661 "prog_type.m"
                {
#line 661 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 661 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 665 "prog_type.m"
                  {
#line 665 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_39_39, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                  }
#line 666 "prog_type.m"
                  {
#line 666 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_15;

#line 666 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 666 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 666 "prog_type.m"
                      {
#line 666 "prog_type.m"
                        parse_tree__prog_type__Ret_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 667 "prog_type.m"
                        /* direct tailcall eliminated */
#line 667 "prog_type.m"
                        {
#line 667 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_15;

#line 667 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 667 "prog_type.m"
                        }
#line 667 "prog_type.m"
                        continue;
#line 666 "prog_type.m"
                      }
#line 666 "prog_type.m"
                  }
#line 661 "prog_type.m"
                }
#line 661 "prog_type.m"
                break;
#line 661 "prog_type.m"
              case (MR_Integer) 2:
#line 661 "prog_type.m"
                {
#line 661 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 661 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 670 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 670 "prog_type.m"
                  *parse_tree__prog_type__Var_2 = parse_tree__prog_type__V_35_35;
#line 670 "prog_type.m"
                  {
#line 670 "prog_type.m"
                    parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
                  }
#line 672 "prog_type.m"
                  {
#line 672 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_34_34, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                  }
#line 661 "prog_type.m"
                }
#line 661 "prog_type.m"
                break;
#line 661 "prog_type.m"
              case (MR_Integer) 3:
#line 673 "prog_type.m"
                {
#line 673 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 673 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 674 "prog_type.m"
                  /* direct tailcall eliminated */
#line 674 "prog_type.m"
                  {
#line 674 "prog_type.m"
                    MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_30;

#line 674 "prog_type.m"
                    parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 674 "prog_type.m"
                  }
#line 674 "prog_type.m"
                  continue;
#line 673 "prog_type.m"
                }
#line 661 "prog_type.m"
                break;
#line 661 "prog_type.m"
            }
#line 661 "prog_type.m"
            break;
#line 661 "prog_type.m"
        }
#line 661 "prog_type.m"
      }
#line 661 "prog_type.m"
      break;
#line 661 "prog_type.m"
    }
#line 166 "prog_type.m"
}

#line 162 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_vars_list_2_p_0(
#line 162 "prog_type.m"
  MR_Word parse_tree__prog_type__Types_3,
#line 162 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 162 "prog_type.m"
{
#line 648 "prog_type.m"
  {
#line 648 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 648 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 648 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 648 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 649 "prog_type.m"
    {
#line 649 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Types_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 11036 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 650 "prog_type.m"
    {
#line 650 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 651 "prog_type.m"
    {
#line 651 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
    }
#line 648 "prog_type.m"
  }
#line 162 "prog_type.m"
}

#line 157 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_vars_2_p_0(
#line 157 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 157 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 157 "prog_type.m"
{
#line 621 "prog_type.m"
  {
#line 621 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 621 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 621 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 621 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 622 "prog_type.m"
    {
#line 622 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 11078 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 623 "prog_type.m"
    {
#line 623 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 624 "prog_type.m"
    {
#line 624 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
    }
#line 621 "prog_type.m"
  }
#line 157 "prog_type.m"
}

#line 151 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__var_list_to_type_list_3_p_0(
#line 151 "prog_type.m"
  MR_Word parse_tree__prog_type__KindMap_1,
#line 151 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 151 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 151 "prog_type.m"
{
#line 615 "prog_type.m"
  {
#line 615 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 615 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "prog_type.m"
    else
#line 616 "prog_type.m"
      {
#line 616 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 616 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 616 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_8;
#line 616 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_9;
#line 616 "prog_type.m"
        MR_Word parse_tree__prog_type__Kind_10;

#line 617 "prog_type.m"
        {
#line 617 "prog_type.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Var_6, &parse_tree__prog_type__Kind_10);
        }
#line 618 "prog_type.m"
        {
#line 618 "prog_type.m"
          parse_tree__prog_type__Type_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 0) = ((MR_Box) (parse_tree__prog_type__Var_6));
#line 618 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 1) = ((MR_Box) (parse_tree__prog_type__Kind_10));
#line 618 "prog_type.m"
        }
#line 619 "prog_type.m"
        {
#line 619 "prog_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Vars_7, &parse_tree__prog_type__Types_9);
        }
#line 616 "prog_type.m"
        {
#line 616 "prog_type.m"
          MR_Word base;
#line 616 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 616 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Type_8));
#line 616 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Types_9));
#line 616 "prog_type.m"
        }
#line 616 "prog_type.m"
      }
#line 615 "prog_type.m"
  }
#line 151 "prog_type.m"
}

#line 147 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_to_var_list_2_p_0(
#line 147 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 147 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 147 "prog_type.m"
{
#line 610 "prog_type.m"
  {
#line 610 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 610 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "prog_type.m"
      {
#line 610 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 610 "prog_type.m"
      }
#line 610 "prog_type.m"
    else
#line 611 "prog_type.m"
      {
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_5;
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_6;
#line 612 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7;

#line 612 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Type_3)) == (MR_mktag((MR_Integer) 0)));
#line 612 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 612 "prog_type.m"
          {
#line 612 "prog_type.m"
            parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 0)));
#line 612 "prog_type.m"
            parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 1)));
#line 613 "prog_type.m"
            {
#line 613 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(parse_tree__prog_type__Types_4, &parse_tree__prog_type__Vars_6);
            }
#line 611 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 611 "prog_type.m"
              {
#line 611 "prog_type.m"
                {
#line 611 "prog_type.m"
                  MR_Word base;
#line 611 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 611 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_5));
#line 611 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Vars_6));
#line 611 "prog_type.m"
                }
#line 611 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 611 "prog_type.m"
              }
#line 612 "prog_type.m"
          }
#line 611 "prog_type.m"
      }
#line 610 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 610 "prog_type.m"
  }
#line 147 "prog_type.m"
}

#line 142 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_tuple_1_p_0(
#line 142 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 142 "prog_type.m"
{
#line 608 "prog_type.m"
  {
#line 608 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 608 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 608 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 608 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 608 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 608 "prog_type.m"
      {
#line 608 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 608 "prog_type.m"
        parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "{}") == 0);
#line 608 "prog_type.m"
      }
#line 608 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 608 "prog_type.m"
  }
#line 142 "prog_type.m"
}

#line 137 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(
#line 137 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_5,
#line 137 "prog_type.m"
  MR_Word * parse_tree__prog_type__Purity_6,
#line 137 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredOrFunc_7)
#line 137 "prog_type.m"
{
#line 576 "prog_type.m"
  {
#line 576 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 576 "prog_type.m"
    MR_Word parse_tree__prog_type__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 0)));
#line 576 "prog_type.m"
    MR_String parse_tree__prog_type__PorFStr_11;
#line 577 "prog_type.m"
    MR_Integer parse_tree__prog_type___Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 1)));

#line 592 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__SymName_9)) == (MR_mktag((MR_Integer) 1))))
#line 592 "prog_type.m"
      {
#line 592 "prog_type.m"
        MR_String parse_tree__prog_type__Qualifier_16;
#line 592 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));

#line 592 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 1)));
#line 592 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 592 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 592 "prog_type.m"
          {
#line 592 "prog_type.m"
            parse_tree__prog_type__Qualifier_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 597 "prog_type.m"
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "impure") == 0))
#line 594 "prog_type.m"
              {
#line 595 "prog_type.m"
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 2;
#line 596 "prog_type.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 594 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 594 "prog_type.m"
              }
#line 597 "prog_type.m"
            else
#line 597 "prog_type.m"
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "semipure") == 0))
#line 598 "prog_type.m"
              {
#line 599 "prog_type.m"
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 1;
#line 600 "prog_type.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 598 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 598 "prog_type.m"
              }
#line 597 "prog_type.m"
            else
#line 597 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_FALSE;
#line 592 "prog_type.m"
          }
#line 592 "prog_type.m"
      }
#line 592 "prog_type.m"
    else
#line 603 "prog_type.m"
      {
#line 603 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));
#line 604 "prog_type.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 605 "prog_type.m"
        *parse_tree__prog_type__Purity_6 = (MR_Integer) 0;
#line 603 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 603 "prog_type.m"
      }
#line 576 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 582 "prog_type.m"
      {
#line 582 "prog_type.m"
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "func") == 0))
#line 584 "prog_type.m"
          {
#line 584 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 1;
#line 584 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 584 "prog_type.m"
          }
#line 582 "prog_type.m"
        else
#line 582 "prog_type.m"
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "pred") == 0))
#line 581 "prog_type.m"
          {
#line 581 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 0;
#line 581 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 581 "prog_type.m"
          }
#line 582 "prog_type.m"
        else
#line 582 "prog_type.m"
          parse_tree__prog_type__succeeded = MR_FALSE;
#line 582 "prog_type.m"
      }
#line 576 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 576 "prog_type.m"
  }
#line 137 "prog_type.m"
}

#line 132 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_to_ctor_det_2_p_0(
#line 132 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 132 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_4)
#line 132 "prog_type.m"
{
#line 574 "prog_type.m"
  {
#line 574 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 574 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 574 "prog_type.m"
    {
#line 574 "prog_type.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 574 "prog_type.m"
  }
#line 132 "prog_type.m"
}

#line 127 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_2_p_0(
#line 127 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 127 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_4)
#line 127 "prog_type.m"
{
#line 570 "prog_type.m"
  {
#line 570 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 570 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 570 "prog_type.m"
    {
#line 570 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 570 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 570 "prog_type.m"
  }
#line 127 "prog_type.m"
}

#line 121 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(
#line 121 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 121 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 121 "prog_type.m"
  MR_Word * parse_tree__prog_type__Args_6)
#line 121 "prog_type.m"
{
#line 560 "prog_type.m"
  {
#line 560 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 560 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorPrime_7;
#line 560 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsPrime_8;

#line 560 "prog_type.m"
    {
#line 560 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type__TypeCtorPrime_7, &parse_tree__prog_type__ArgsPrime_8);
    }
#line 560 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 561 "prog_type.m"
      {
#line 561 "prog_type.m"
        *parse_tree__prog_type__TypeCtor_5 = parse_tree__prog_type__TypeCtorPrime_7;
#line 562 "prog_type.m"
        *parse_tree__prog_type__Args_6 = parse_tree__prog_type__ArgsPrime_8;
#line 561 "prog_type.m"
      }
#line 560 "prog_type.m"
    else
#line 564 "prog_type.m"
      {
#line 564 "prog_type.m"
        MR_String parse_tree__prog_type__V_11_11;
#line 564 "prog_type.m"
        MR_String parse_tree__prog_type__V_13_13;

#line 565 "prog_type.m"
        {
#line 565 "prog_type.m"
          parse_tree__prog_type__V_13_13 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__Type_4)));
        }
#line 565 "prog_type.m"
        {
#line 565 "prog_type.m"
          parse_tree__prog_type__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", parse_tree__prog_type__V_13_13);
        }
#line 564 "prog_type.m"
        {
#line 564 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", parse_tree__prog_type__V_11_11);
#line 564 "prog_type.m"
          return;
        }
#line 564 "prog_type.m"
      }
#line 560 "prog_type.m"
  }
#line 121 "prog_type.m"
}

#line 115 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_3_p_0(
#line 115 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 115 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 115 "prog_type.m"
  MR_Word * parse_tree__prog_type__Args_6)
#line 115 "prog_type.m"
{
#line 512 "prog_type.m"
  while (MR_TRUE)
#line 512 "prog_type.m"
    {
#line 512 "prog_type.m"
      /* tailcall optimized into a loop */
#line 512 "prog_type.m"
      {
#line 512 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 512 "prog_type.m"
#line 512 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__Type_4)) {
#line 512 "prog_type.m"
          default:
#line 512 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 512 "prog_type.m"
            break;
#line 512 "prog_type.m"
          case (MR_Integer) 1:
#line 512 "prog_type.m"
            {
#line 512 "prog_type.m"
              MR_Word parse_tree__prog_type__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 512 "prog_type.m"
              MR_Integer parse_tree__prog_type__Arity_9;
#line 512 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8;

#line 512 "prog_type.m"
              *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 512 "prog_type.m"
              parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 513 "prog_type.m"
              {
#line 513 "prog_type.m"
                parse_tree__prog_type__Arity_9 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
              }
#line 514 "prog_type.m"
              {
#line 514 "prog_type.m"
                MR_Word base;
#line 514 "prog_type.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 514 "prog_type.m"
                *parse_tree__prog_type__TypeCtor_5 = base;
#line 514 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_7));
#line 514 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_9));
#line 514 "prog_type.m"
              }
#line 512 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 512 "prog_type.m"
            }
#line 512 "prog_type.m"
            break;
#line 512 "prog_type.m"
          case (MR_Integer) 2:
#line 516 "prog_type.m"
            {
#line 516 "prog_type.m"
              MR_Word parse_tree__prog_type__BuiltinType_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 516 "prog_type.m"
              MR_String parse_tree__prog_type__Name_11;
#line 516 "prog_type.m"
              MR_Word parse_tree__prog_type__SymName_33;

#line 517 "prog_type.m"
              {
#line 517 "prog_type.m"
                parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_type__BuiltinType_10, &parse_tree__prog_type__Name_11);
              }
#line 518 "prog_type.m"
              {
#line 518 "prog_type.m"
                parse_tree__prog_type__SymName_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "prog_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_33, 0) = ((MR_Box) (parse_tree__prog_type__Name_11));
#line 518 "prog_type.m"
              }
#line 520 "prog_type.m"
              *parse_tree__prog_type__Args_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "prog_type.m"
              {
#line 521 "prog_type.m"
                MR_Word base;
#line 521 "prog_type.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "prog_type.m"
                *parse_tree__prog_type__TypeCtor_5 = base;
#line 521 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_33));
#line 521 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 521 "prog_type.m"
              }
#line 516 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 516 "prog_type.m"
            }
#line 512 "prog_type.m"
            break;
#line 512 "prog_type.m"
          case (MR_Integer) 3:
#line 512 "prog_type.m"
#line 512 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) {
#line 512 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 512 "prog_type.m"
              case (MR_Integer) 0:
#line 547 "prog_type.m"
                {
#line 547 "prog_type.m"
                  MR_Integer parse_tree__prog_type__Arity_38;
#line 547 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19;

#line 547 "prog_type.m"
                  *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 547 "prog_type.m"
                  parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 549 "prog_type.m"
                  {
#line 549 "prog_type.m"
                    parse_tree__prog_type__Arity_38 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
                  }
#line 550 "prog_type.m"
                  {
#line 550 "prog_type.m"
                    MR_Word base;
#line 550 "prog_type.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "prog_type.m"
                    *parse_tree__prog_type__TypeCtor_5 = base;
#line 550 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1]));
#line 550 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_38));
#line 550 "prog_type.m"
                  }
#line 547 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 547 "prog_type.m"
                }
#line 512 "prog_type.m"
                break;
#line 512 "prog_type.m"
              case (MR_Integer) 1:
#line 523 "prog_type.m"
                {
#line 523 "prog_type.m"
                  MR_Word parse_tree__prog_type__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 523 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 523 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 523 "prog_type.m"
                  MR_Word parse_tree__prog_type__Purity_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 3)));
#line 523 "prog_type.m"
                  MR_String parse_tree__prog_type__PorFStr_17;
#line 523 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName0_18;
#line 523 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName_35;
#line 523 "prog_type.m"
                  MR_Integer parse_tree__prog_type__Arity_36;

#line 524 "prog_type.m"
                  {
#line 524 "prog_type.m"
                    parse_tree__prog_type__Arity_36 = mercury__list__length_1_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12);
                  }
#line 529 "prog_type.m"
                  if ((parse_tree__prog_type__MaybeRet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "prog_type.m"
                    {
#line 531 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "pred";
#line 532 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = parse_tree__prog_type__Args0_12;
#line 530 "prog_type.m"
                    }
#line 529 "prog_type.m"
                  else
#line 526 "prog_type.m"
                    {
#line 526 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 526 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29;

#line 527 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "func";
#line 528 "prog_type.m"
                      {
#line 528 "prog_type.m"
                        parse_tree__prog_type__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 0) = ((MR_Box) (parse_tree__prog_type__Ret_16));
#line 528 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "prog_type.m"
                      }
#line 528 "prog_type.m"
                      {
#line 528 "prog_type.m"
                        *parse_tree__prog_type__Args_6 = mercury__list__append_2_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12, parse_tree__prog_type__V_29_29);
                      }
#line 526 "prog_type.m"
                    }
#line 534 "prog_type.m"
                  {
#line 534 "prog_type.m"
                    parse_tree__prog_type__SymName0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 534 "prog_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName0_18, 0) = ((MR_Box) (parse_tree__prog_type__PorFStr_17));
#line 534 "prog_type.m"
                  }
#line 538 "prog_type.m"
#line 538 "prog_type.m"
                  switch (parse_tree__prog_type__Purity_14) {
#line 538 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 538 "prog_type.m"
                    case (MR_Integer) 2:
#line 542 "prog_type.m"
                      {
#line 543 "prog_type.m"
                        {
#line 543 "prog_type.m"
                          parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "impure", parse_tree__prog_type__SymName0_18);
                        }
#line 542 "prog_type.m"
                      }
#line 538 "prog_type.m"
                      break;
#line 538 "prog_type.m"
                    case (MR_Integer) 0:
#line 537 "prog_type.m"
                      parse_tree__prog_type__SymName_35 = parse_tree__prog_type__SymName0_18;
#line 538 "prog_type.m"
                      break;
#line 538 "prog_type.m"
                    case (MR_Integer) 1:
#line 539 "prog_type.m"
                      {
#line 540 "prog_type.m"
                        {
#line 540 "prog_type.m"
                          parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "semipure", parse_tree__prog_type__SymName0_18);
                        }
#line 539 "prog_type.m"
                      }
#line 538 "prog_type.m"
                      break;
#line 538 "prog_type.m"
                  }
#line 545 "prog_type.m"
                  {
#line 545 "prog_type.m"
                    MR_Word base;
#line 545 "prog_type.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 545 "prog_type.m"
                    *parse_tree__prog_type__TypeCtor_5 = base;
#line 545 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_35));
#line 545 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_36));
#line 545 "prog_type.m"
                  }
#line 523 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 523 "prog_type.m"
                }
#line 512 "prog_type.m"
                break;
#line 512 "prog_type.m"
              case (MR_Integer) 2:
#line 552 "prog_type.m"
                {
#line 553 "prog_type.m"
                  {
#line 553 "prog_type.m"
                    mercury__require__sorry_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
                  }
#line 552 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 552 "prog_type.m"
                }
#line 512 "prog_type.m"
                break;
#line 512 "prog_type.m"
              case (MR_Integer) 3:
#line 555 "prog_type.m"
                {
#line 555 "prog_type.m"
                  MR_Word parse_tree__prog_type__SubType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 555 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));

#line 556 "prog_type.m"
                  /* direct tailcall eliminated */
#line 556 "prog_type.m"
                  {
#line 556 "prog_type.m"
                    MR_Word parse_tree__prog_type__Type__tmp_copy_4 = parse_tree__prog_type__SubType_23;

#line 556 "prog_type.m"
                    parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type__tmp_copy_4;
#line 556 "prog_type.m"
                  }
#line 556 "prog_type.m"
                  continue;
#line 555 "prog_type.m"
                }
#line 512 "prog_type.m"
                break;
#line 512 "prog_type.m"
            }
#line 512 "prog_type.m"
            break;
#line 512 "prog_type.m"
        }
#line 512 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 512 "prog_type.m"
      }
#line 512 "prog_type.m"
      break;
#line 512 "prog_type.m"
    }
#line 115 "prog_type.m"
}

#line 109 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(
#line 109 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 109 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 109 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeArgs_6)
#line 109 "prog_type.m"
{
#line 494 "prog_type.m"
  {
#line 494 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 494 "prog_type.m"
    MR_Word parse_tree__prog_type__PredOrFunc_8;
#line 494 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeArgs0_10;
#line 495 "prog_type.m"
    MR_Word parse_tree__prog_type___Purity_7;

#line 495 "prog_type.m"
    {
#line 495 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type___Purity_7, &parse_tree__prog_type__PredOrFunc_8, &parse_tree__prog_type__TypeArgs0_10);
    }
#line 494 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 497 "prog_type.m"
      {
#line 497 "prog_type.m"
        MR_String parse_tree__prog_type__PredOrFuncStr_11;
#line 497 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 497 "prog_type.m"
        *parse_tree__prog_type__TypeArgs_6 = parse_tree__prog_type__TypeArgs0_10;
#line 498 "prog_type.m"
        {
#line 498 "prog_type.m"
          parse_tree__prog_type__PredOrFuncStr_11 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_type__PredOrFunc_8);
        }
#line 499 "prog_type.m"
        {
#line 499 "prog_type.m"
          parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__PredOrFuncStr_11));
#line 499 "prog_type.m"
        }
#line 499 "prog_type.m"
        {
#line 499 "prog_type.m"
          MR_Word base;
#line 499 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_type.m"
          *parse_tree__prog_type__TypeCtor_5 = base;
#line 499 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 499 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 499 "prog_type.m"
        }
#line 497 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 497 "prog_type.m"
      }
#line 494 "prog_type.m"
    else
#line 500 "prog_type.m"
      {
#line 500 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;
#line 500 "prog_type.m"
        MR_String parse_tree__prog_type__V_16_16;
#line 500 "prog_type.m"
        MR_Integer parse_tree__prog_type__V_17_17;
#line 500 "prog_type.m"
        MR_Word parse_tree__prog_type__V_21_21;
#line 465 "prog_type.m"
        MR_Word parse_tree__prog_type__V_20_20;

#line 465 "prog_type.m"
        {
#line 465 "prog_type.m"
          parse_tree__prog_type__V_21_21 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_4);
        }
#line 465 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 465 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 465 "prog_type.m"
          {
#line 465 "prog_type.m"
            *parse_tree__prog_type__TypeArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 1)));
#line 465 "prog_type.m"
            parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 2)));
#line 505 "prog_type.m"
            parse_tree__prog_type__V_16_16 = (MR_String) "tuple";
#line 505 "prog_type.m"
            parse_tree__prog_type__V_17_17 = (MR_Integer) 0;
#line 505 "prog_type.m"
            parse_tree__prog_type__V_15_15 = (MR_Word) &parse_tree__prog_type_scalar_common_3[0];
#line 505 "prog_type.m"
            *parse_tree__prog_type__TypeCtor_5 = (MR_Word) &parse_tree__prog_type_scalar_common_1[6];
#line 505 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 465 "prog_type.m"
          }
#line 500 "prog_type.m"
      }
#line 494 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 494 "prog_type.m"
  }
#line 109 "prog_type.m"
}

#line 485 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 485 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 485 "prog_type.m"
{
#line 485 "prog_type.m"
  {
#line 485 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 485 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0, 1);
#line 485 "prog_type.m"
  }
#line 485 "prog_type.m"
}

#line 485 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 485 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 485 "prog_type.m"
{
#line 485 "prog_type.m"
  {
#line 485 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 485 "prog_type.m"
    {
#line 487 "prog_type.m"
      MR_Word parse_tree__prog_type__Binding_6;
#line 487 "prog_type.m"
      MR_Box parse_tree__prog_type__conv0_Binding_6;

#line 487 "prog_type.m"
      {
#line 487 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4, ((MR_Box) ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5)), &parse_tree__prog_type__conv0_Binding_6);
      }
#line 487 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 487 "prog_type.m"
        {
#line 487 "prog_type.m"
          parse_tree__prog_type__Binding_6 = ((MR_Word) parse_tree__prog_type__conv0_Binding_6);
#line 487 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 487 "prog_type.m"
        }
#line 487 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 488 "prog_type.m"
        {
#line 488 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Binding_6, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4);
        }
#line 487 "prog_type.m"
      else
#line 490 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 487 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 487 "prog_type.m"
        {
#line 487 "prog_type.m"
          parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(parse_tree__prog_type__env_ptr);
        }
#line 485 "prog_type.m"
    }
#line 485 "prog_type.m"
  }
#line 485 "prog_type.m"
}

#line 485 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 485 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 485 "prog_type.m"
{
#line 485 "prog_type.m"
  {
#line 485 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 485 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0) == 0)
#line 485 "prog_type.m"
      {
#line 486 "prog_type.m"
        {
#line 486 "prog_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5, parse_tree__prog_type__subst_type_is_nonground_2_p_0_2, parse_tree__prog_type__env_ptr);
        }
#line 485 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_FALSE;
#line 485 "prog_type.m"
      }
#line 485 "prog_type.m"
    else
#line 485 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 485 "prog_type.m"
  }
#line 485 "prog_type.m"
}

#line 101 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0(
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__TSubst_4)
#line 101 "prog_type.m"
{
#line 101 "prog_type.m"
  {
#line 101 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s parse_tree__prog_type__env;

#line 101 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3 = parse_tree__prog_type__Type_3;
#line 101 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4 = parse_tree__prog_type__TSubst_4;
#line 485 "prog_type.m"
    {
#line 485 "prog_type.m"
      parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(&parse_tree__prog_type__env);
    }
#line 485 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 101 "prog_type.m"
  }
#line 101 "prog_type.m"
}

#line 96 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_ground_2_p_0(
#line 96 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 96 "prog_type.m"
  MR_Word parse_tree__prog_type__TSubst_4)
#line 96 "prog_type.m"
{
#line 483 "prog_type.m"
  {
#line 483 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 483 "prog_type.m"
    {
#line 483 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TSubst_4);
    }
#line 483 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 483 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 483 "prog_type.m"
  }
#line 96 "prog_type.m"
}

#line 480 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 480 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 480 "prog_type.m"
{
#line 480 "prog_type.m"
  {
#line 480 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 480 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0, 1);
#line 480 "prog_type.m"
  }
#line 480 "prog_type.m"
}

#line 480 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 480 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 480 "prog_type.m"
{
#line 480 "prog_type.m"
  {
#line 480 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 480 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0) == 0)
#line 480 "prog_type.m"
      {
#line 480 "prog_type.m"
        {
#line 480 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 480 "prog_type.m"
          {
#line 480 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_nonground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 480 "prog_type.m"
        }
#line 480 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
#line 480 "prog_type.m"
      }
#line 480 "prog_type.m"
    else
#line 480 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
#line 480 "prog_type.m"
  }
#line 480 "prog_type.m"
}

#line 92 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0(
#line 92 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 92 "prog_type.m"
{
#line 92 "prog_type.m"
  {
#line 92 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s parse_tree__prog_type__env;

#line 92 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
#line 480 "prog_type.m"
    {
#line 480 "prog_type.m"
      parse_tree__prog_type__type_is_nonground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 480 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 92 "prog_type.m"
  }
#line 92 "prog_type.m"
}

#line 477 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 477 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 477 "prog_type.m"
{
#line 477 "prog_type.m"
  {
#line 477 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 477 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0, 1);
#line 477 "prog_type.m"
  }
#line 477 "prog_type.m"
}

#line 477 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 477 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 477 "prog_type.m"
{
#line 477 "prog_type.m"
  {
#line 477 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 477 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0) == 0)
#line 477 "prog_type.m"
      {
#line 477 "prog_type.m"
        {
#line 477 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 477 "prog_type.m"
          {
#line 477 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_ground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 477 "prog_type.m"
        }
#line 477 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
#line 477 "prog_type.m"
      }
#line 477 "prog_type.m"
    else
#line 477 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
#line 477 "prog_type.m"
  }
#line 477 "prog_type.m"
}

#line 88 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0(
#line 88 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 88 "prog_type.m"
{
#line 88 "prog_type.m"
  {
#line 88 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s parse_tree__prog_type__env;

#line 88 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
#line 477 "prog_type.m"
    {
#line 477 "prog_type.m"
      parse_tree__prog_type__type_is_ground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 477 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded);
#line 477 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 88 "prog_type.m"
  }
#line 88 "prog_type.m"
}

#line 81 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__strip_kind_annotation_1_f_0(
#line 81 "prog_type.m"
  MR_Word parse_tree__prog_type__Type0_3)
#line 81 "prog_type.m"
{
#line 468 "prog_type.m"
  while (MR_TRUE)
#line 468 "prog_type.m"
    {
#line 468 "prog_type.m"
      /* tailcall optimized into a loop */
#line 468 "prog_type.m"
      {
#line 468 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Type0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 468 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_4;
#line 468 "prog_type.m"
        MR_Word parse_tree__prog_type__Type1_5;
#line 468 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6;

#line 468 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 468 "prog_type.m"
          {
#line 468 "prog_type.m"
            parse_tree__prog_type__Type1_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 1)));
#line 468 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 2)));
#line 469 "prog_type.m"
            /* direct tailcall eliminated */
#line 469 "prog_type.m"
            {
#line 469 "prog_type.m"
              MR_Word parse_tree__prog_type__Type0__tmp_copy_3 = parse_tree__prog_type__Type1_5;

#line 469 "prog_type.m"
              parse_tree__prog_type__Type0_3 = parse_tree__prog_type__Type0__tmp_copy_3;
#line 469 "prog_type.m"
            }
#line 469 "prog_type.m"
            continue;
#line 468 "prog_type.m"
          }
#line 468 "prog_type.m"
        else
#line 471 "prog_type.m"
          parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type0_3;
#line 468 "prog_type.m"
        return parse_tree__prog_type__Type_4;
#line 468 "prog_type.m"
      }
#line 468 "prog_type.m"
      break;
#line 468 "prog_type.m"
    }
#line 81 "prog_type.m"
}

#line 76 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_tuple_2_p_0(
#line 76 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 76 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgTypes_4)
#line 76 "prog_type.m"
{
#line 464 "prog_type.m"
  {
#line 464 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 464 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 465 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 465 "prog_type.m"
    {
#line 465 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_3);
    }
#line 465 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 465 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 465 "prog_type.m"
      {
#line 465 "prog_type.m"
        *parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 465 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 2)));
#line 465 "prog_type.m"
      }
#line 464 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 464 "prog_type.m"
  }
#line 76 "prog_type.m"
}

#line 69 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(
#line 69 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_6,
#line 69 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Purity_11,
#line 69 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12,
#line 69 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14)
#line 69 "prog_type.m"
{
#line 455 "prog_type.m"
  {
#line 455 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 455 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 455 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 455 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;

#line 456 "prog_type.m"
    {
#line 456 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_6, &parse_tree__prog_type__STATE_VARIABLE_Purity_15_15, &parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16, &parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18);
    }
#line 455 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 459 "prog_type.m"
      {
#line 459 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14 = parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;
#line 459 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12 = parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 459 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_Purity_11 = parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 459 "prog_type.m"
      }
#line 455 "prog_type.m"
    else
#line 461 "prog_type.m"
      {
#line 461 "prog_type.m"
        {
#line 461 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_is_higher_order_details_det\'/5", (MR_String) "type is not higher-order");
#line 461 "prog_type.m"
          return;
        }
#line 461 "prog_type.m"
      }
#line 455 "prog_type.m"
  }
#line 69 "prog_type.m"
}

#line 65 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_5_p_0(
#line 65 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_6,
#line 65 "prog_type.m"
  MR_Word * parse_tree__prog_type__Purity_7,
#line 65 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredOrFunc_8,
#line 65 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredArgTypes_10)
#line 65 "prog_type.m"
{
#line 440 "prog_type.m"
  {
#line 440 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 440 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_11;
#line 440 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeRetType_12;
#line 440 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;

#line 441 "prog_type.m"
    {
#line 441 "prog_type.m"
      parse_tree__prog_type__V_14_14 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_6);
    }
#line 442 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 442 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 442 "prog_type.m"
      {
#line 442 "prog_type.m"
        parse_tree__prog_type__ArgTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 1)));
#line 442 "prog_type.m"
        parse_tree__prog_type__MaybeRetType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 2)));
#line 442 "prog_type.m"
        *parse_tree__prog_type__Purity_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 3)));
#line 447 "prog_type.m"
        if ((parse_tree__prog_type__MaybeRetType_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "prog_type.m"
          {
#line 449 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 0;
#line 450 "prog_type.m"
            *parse_tree__prog_type__PredArgTypes_10 = parse_tree__prog_type__ArgTypes_11;
#line 448 "prog_type.m"
          }
#line 447 "prog_type.m"
        else
#line 444 "prog_type.m"
          {
#line 444 "prog_type.m"
            MR_Word parse_tree__prog_type__RetType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRetType_12, (MR_Integer) 0)));
#line 444 "prog_type.m"
            MR_Word parse_tree__prog_type__V_15_15;

#line 445 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 1;
#line 446 "prog_type.m"
            {
#line 446 "prog_type.m"
              parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__RetType_13));
#line 446 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "prog_type.m"
            }
#line 446 "prog_type.m"
            {
#line 446 "prog_type.m"
              *parse_tree__prog_type__PredArgTypes_10 = mercury__list__append_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_11, parse_tree__prog_type__V_15_15);
            }
#line 444 "prog_type.m"
          }
#line 447 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 442 "prog_type.m"
      }
#line 440 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 440 "prog_type.m"
  }
#line 65 "prog_type.m"
}

#line 55 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_1_p_0(
#line 55 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 55 "prog_type.m"
{
#line 436 "prog_type.m"
  {
#line 436 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 436 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 437 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 437 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 437 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 437 "prog_type.m"
    {
#line 437 "prog_type.m"
      parse_tree__prog_type__V_7_7 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 437 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 437 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 437 "prog_type.m"
      {
#line 437 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 1)));
#line 437 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 2)));
#line 437 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 3)));
#line 437 "prog_type.m"
      }
#line 436 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 436 "prog_type.m"
  }
#line 55 "prog_type.m"
}

#line 51 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonvar_1_p_0(
#line 51 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 51 "prog_type.m"
{
#line 434 "prog_type.m"
  {
#line 434 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 430 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 431 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 431 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 431 "prog_type.m"
    {
#line 431 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 431 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 0)));
#line 431 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 431 "prog_type.m"
      {
#line 431 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 431 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 431 "prog_type.m"
      }
#line 434 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 434 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 434 "prog_type.m"
  }
#line 51 "prog_type.m"
}

#line 47 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_var_1_p_0(
#line 47 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 47 "prog_type.m"
{
#line 430 "prog_type.m"
  {
#line 430 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 430 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;
#line 431 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 431 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;

#line 431 "prog_type.m"
    {
#line 431 "prog_type.m"
      parse_tree__prog_type__V_5_5 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 431 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 431 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 431 "prog_type.m"
      {
#line 431 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 431 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 431 "prog_type.m"
      }
#line 430 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 430 "prog_type.m"
  }
#line 47 "prog_type.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_type. */
