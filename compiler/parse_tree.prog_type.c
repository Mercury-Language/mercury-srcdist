/*
** Automatically generated from `prog_type.m'
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


/* :- module parse_tree.prog_type. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_type__init
ENDINIT
*/

#include "parse_tree.prog_type.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 400 "prog_type.m"
struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s {
#line 1337 "prog_type.m"
  MR_bool parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1374 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
#line 1377 "prog_type.m"
  jmp_buf parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0;
#line 1377 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28;
#line 1378 "prog_type.m"
  MR_Box parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
#line 400 "prog_type.m"
};

#line 343 "prog_type.m"
struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s {
#line 343 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3;
#line 968 "prog_type.m"
  MR_bool parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 970 "prog_type.m"
  jmp_buf parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0;
#line 970 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8;
#line 971 "prog_type.m"
  MR_Box parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8;
#line 343 "prog_type.m"
};

#line 99 "prog_type.m"
struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s {
#line 99 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3;
#line 99 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4;
#line 483 "prog_type.m"
  MR_bool parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 483 "prog_type.m"
  jmp_buf parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0;
#line 483 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5;
#line 99 "prog_type.m"
};

#line 90 "prog_type.m"
struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s {
#line 90 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2;
#line 478 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 478 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0;
#line 90 "prog_type.m"
};

#line 86 "prog_type.m"
struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s {
#line 86 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2;
#line 475 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 475 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0;
#line 86 "prog_type.m"
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

#line 1297 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1297 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1297 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1297 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7);

#line 1257 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1257 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1257 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1257 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6);

#line 1236 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1236 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1236 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1236 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8);

#line 1224 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20);

#line 1171 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1171 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33);

#line 1140 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1140 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22);

#line 1108 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1108 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23);

#line 1087 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1087 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16);

#line 1044 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1044 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19);

#line 1028 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1028 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14);

#line 647 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 647 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 647 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 647 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3);

#line 620 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 620 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 620 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 620 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3);

#line 1377 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1377 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1377 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1377 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1377 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1377 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 970 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 970 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 971 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 971 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 970 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 970 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 970 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 970 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 752 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 752 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 752 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 752 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 483 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 483 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 483 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 483 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 483 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 483 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 478 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 478 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 478 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 478 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 475 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 475 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 475 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 475 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[2][5];


#line 826 "prog_type.m"
/* sealed */ struct parse_tree__prog_type__vector_common_type_5_0_s {
#line 826 "prog_type.m"
  const MR_String parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0;
#line 826 "prog_type.m"
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

#line 353 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 353 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 353 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 353 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 353 "prog_type.m"
{
#line 986 "prog_type.m"
  {
#line 986 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__ReserveTagPragma_11 == (MR_Integer) 1);
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeCtorFieldName_17;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_29;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_30;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__V_35_35;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__V_36_36;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 986 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 986 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_39_39;
#line 938 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_31;
#line 938 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_34;
#line 1000 "prog_type.m"
    MR_String parse_tree__prog_type__V_22_22;
#line 939 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 939 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;

#line 986 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
      {
#line 988 "prog_type.m"
        parse_tree__prog_type__V_20_20 = (MR_Integer) 247;
#line 988 "prog_type.m"
        parse_tree__prog_type__V_21_21 = (MR_Integer) 1;
#line 988 "prog_type.m"
        {
#line 988 "prog_type.m"
          parse_tree__prog_type__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__prog_type__Globals_9, parse_tree__prog_type__V_20_20, parse_tree__prog_type__V_21_21);
        }
#line 986 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
          {
#line 989 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__MaybeUserEqCmp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
              {
#line 937 "prog_type.m"
                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_12)) == (MR_mktag((MR_Integer) 1)));
#line 937 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 937 "prog_type.m"
                  {
#line 937 "prog_type.m"
                    parse_tree__prog_type__SingleCtor_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 0)));
#line 937 "prog_type.m"
                    parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 1)));
#line 937 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
                      {
#line 938 "prog_type.m"
                        parse_tree__prog_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 0)));
#line 938 "prog_type.m"
                        parse_tree__prog_type___Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 1)));
#line 938 "prog_type.m"
                        *parse_tree__prog_type__SingleFunctorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 2)));
#line 938 "prog_type.m"
                        parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 3)));
#line 938 "prog_type.m"
                        parse_tree__prog_type__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 4)));
#line 938 "prog_type.m"
                        parse_tree__prog_type___Ctxt_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 5)));
#line 939 "prog_type.m"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_39_39 == (MR_Integer) 1);
#line 986 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
                          {
#line 940 "prog_type.m"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
                              {
#line 1000 "prog_type.m"
                                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_type__SingleFunctorName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1000 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 1000 "prog_type.m"
                                  {
#line 1000 "prog_type.m"
                                    parse_tree__prog_type__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__prog_type__SingleFunctorName_14, (MR_Integer) 0)));
#line 1000 "prog_type.m"
                                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_22_22, (MR_String) "{}") == 0);
#line 1000 "prog_type.m"
                                  }
#line 1000 "prog_type.m"
                                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 986 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
                                  {
#line 939 "prog_type.m"
                                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 939 "prog_type.m"
                                    if (parse_tree__prog_type__succeeded)
#line 939 "prog_type.m"
                                      {
#line 939 "prog_type.m"
                                        parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 0)));
#line 939 "prog_type.m"
                                        parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 1)));
#line 939 "prog_type.m"
                                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_type.m"
                                        if (parse_tree__prog_type__succeeded)
#line 986 "prog_type.m"
                                          {
#line 939 "prog_type.m"
                                            parse_tree__prog_type__MaybeCtorFieldName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 0)));
#line 939 "prog_type.m"
                                            *parse_tree__prog_type__SingleArgType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 1)));
#line 939 "prog_type.m"
                                            parse_tree__prog_type__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 2)));
#line 939 "prog_type.m"
                                            parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 3)));
#line 1005 "prog_type.m"
                                            if ((parse_tree__prog_type__MaybeCtorFieldName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "prog_type.m"
                                              *parse_tree__prog_type__MaybeSingleArgName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "prog_type.m"
                                            else
#line 1006 "prog_type.m"
                                              {
#line 1006 "prog_type.m"
                                                MR_Word parse_tree__prog_type__SymName_18;
#line 1006 "prog_type.m"
                                                MR_Word parse_tree__prog_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeCtorFieldName_17, (MR_Integer) 0)));
#line 1006 "prog_type.m"
                                                MR_String parse_tree__prog_type__V_24_24;
#line 1006 "prog_type.m"
                                                MR_Word parse_tree__prog_type__V_19_19;

#line 1006 "prog_type.m"
                                                parse_tree__prog_type__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 0)));
#line 1006 "prog_type.m"
                                                parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 1)));
#line 1007 "prog_type.m"
                                                {
#line 1007 "prog_type.m"
                                                  parse_tree__prog_type__V_24_24 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__SymName_18);
                                                }
#line 1007 "prog_type.m"
                                                {
#line 1007 "prog_type.m"
                                                  MR_Word base;
#line 1007 "prog_type.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "prog_type.m"
                                                  *parse_tree__prog_type__MaybeSingleArgName_16 = base;
#line 1007 "prog_type.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__V_24_24));
#line 1007 "prog_type.m"
                                                }
#line 1006 "prog_type.m"
                                              }
#line 1005 "prog_type.m"
                                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 986 "prog_type.m"
                                          }
#line 939 "prog_type.m"
                                      }
#line 986 "prog_type.m"
                                  }
#line 986 "prog_type.m"
                              }
#line 986 "prog_type.m"
                          }
#line 986 "prog_type.m"
                      }
#line 937 "prog_type.m"
                  }
#line 986 "prog_type.m"
              }
#line 986 "prog_type.m"
          }
#line 986 "prog_type.m"
      }
#line 986 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 986 "prog_type.m"
  }
#line 353 "prog_type.m"
}

#line 259 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0(
#line 259 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 259 "prog_type.m"
{
#line 259 "prog_type.m"
  {
#line 259 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 259 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_76 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 259 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_77 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 259 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_76 == parse_tree__prog_type__CastY_77);
#line 259 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 2426 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "prog_type.m"
    else
#line 259 "prog_type.m"
#line 259 "prog_type.m"
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) {
#line 259 "prog_type.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
        case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__2_2)) {
#line 259 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
            case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 2:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 3:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 4:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 1:
#line 2492 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 2:
#line 2498 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 2511 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 2517 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 1:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 2:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 3:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 4:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 1:
#line 2579 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 2:
#line 2585 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 2598 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 2604 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 2:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 2:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 3:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 4:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 1:
#line 2666 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 2:
#line 2672 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 2685 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 2691 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 2:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 3:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 4:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 1:
#line 2753 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 2:
#line 2759 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 2772 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 2778 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 4:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
              switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 2:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 3:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 4:
#line 259 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 1:
#line 2840 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 2:
#line 2846 "parse_tree.prog_type.c"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
                case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                    case (MR_Integer) 0:
#line 2859 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                    case (MR_Integer) 1:
#line 2865 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                      break;
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
                  break;
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
        case (MR_Integer) 1:
#line 259 "prog_type.m"
          {
#line 259 "prog_type.m"
            MR_Word parse_tree__prog_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 259 "prog_type.m"
#line 259 "prog_type.m"
            switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
              case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                  case (MR_Integer) 0:
#line 2902 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 1:
#line 2908 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 2:
#line 2914 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 3:
#line 2920 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 4:
#line 2926 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
              case (MR_Integer) 1:
#line 259 "prog_type.m"
                {
#line 259 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 259 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_86_86 = (MR_Integer) parse_tree__prog_type__V_82_82;
#line 259 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_87_87 = (MR_Integer) parse_tree__prog_type__V_5_5;

#line 259 "prog_type.m"
                  {
#line 259 "prog_type.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_86_86, parse_tree__prog_type__V_87_87);
#line 259 "prog_type.m"
                    return;
                  }
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
              case (MR_Integer) 2:
#line 2958 "parse_tree.prog_type.c"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
              case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                  case (MR_Integer) 0:
#line 2971 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 1:
#line 2977 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
            }
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
        case (MR_Integer) 2:
#line 259 "prog_type.m"
          {
#line 259 "prog_type.m"
            MR_Word parse_tree__prog_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 259 "prog_type.m"
#line 259 "prog_type.m"
            switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
              case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                  case (MR_Integer) 0:
#line 3012 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 1:
#line 3018 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 2:
#line 3024 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 3:
#line 3030 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 4:
#line 3036 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
              case (MR_Integer) 1:
#line 3046 "parse_tree.prog_type.c"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
              case (MR_Integer) 2:
#line 259 "prog_type.m"
                {
#line 259 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 259 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_88_88 = (MR_Integer) parse_tree__prog_type__V_83_83;
#line 259 "prog_type.m"
                  MR_Integer parse_tree__prog_type__V_89_89 = (MR_Integer) parse_tree__prog_type__V_30_30;

#line 259 "prog_type.m"
                  {
#line 259 "prog_type.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_88_88, parse_tree__prog_type__V_89_89);
#line 259 "prog_type.m"
                    return;
                  }
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
              case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                  case (MR_Integer) 0:
#line 3081 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 1:
#line 3087 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
                break;
#line 259 "prog_type.m"
            }
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
        case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
            case (MR_Integer) 0:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Word parse_tree__prog_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 259 "prog_type.m"
#line 259 "prog_type.m"
                switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                  case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                    switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                      case (MR_Integer) 0:
#line 3129 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 1:
#line 3135 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 2:
#line 3141 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 3:
#line 3147 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 4:
#line 3153 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                    }
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 1:
#line 3163 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 2:
#line 3169 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                      case (MR_Integer) 0:
#line 259 "prog_type.m"
                        {
#line 259 "prog_type.m"
                          MR_Word parse_tree__prog_type__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 259 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_90_90 = (MR_Integer) parse_tree__prog_type__V_84_84;
#line 259 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_91_91 = (MR_Integer) parse_tree__prog_type__V_55_55;

#line 259 "prog_type.m"
                          {
#line 259 "prog_type.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_90_90, parse_tree__prog_type__V_91_91);
#line 259 "prog_type.m"
                            return;
                          }
#line 259 "prog_type.m"
                        }
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 1:
#line 3204 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                    }
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 1:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Word parse_tree__prog_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 259 "prog_type.m"
#line 259 "prog_type.m"
                switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                  case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                    switch (MR_unmkbody(parse_tree__prog_type__HeadVar__3_3)) {
#line 259 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                      case (MR_Integer) 0:
#line 3239 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 1:
#line 3245 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 2:
#line 3251 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 3:
#line 3257 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 4:
#line 3263 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                    }
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 1:
#line 3273 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 2:
#line 3279 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                  case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
                      case (MR_Integer) 0:
#line 3292 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                      case (MR_Integer) 1:
#line 259 "prog_type.m"
                        {
#line 259 "prog_type.m"
                          MR_Word parse_tree__prog_type__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 259 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_92_92 = (MR_Integer) parse_tree__prog_type__V_85_85;
#line 259 "prog_type.m"
                          MR_Integer parse_tree__prog_type__V_93_93 = (MR_Integer) parse_tree__prog_type__V_75_75;

#line 259 "prog_type.m"
                          {
#line 259 "prog_type.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_92_92, parse_tree__prog_type__V_93_93);
#line 259 "prog_type.m"
                            return;
                          }
#line 259 "prog_type.m"
                        }
#line 259 "prog_type.m"
                        break;
#line 259 "prog_type.m"
                    }
#line 259 "prog_type.m"
                    break;
#line 259 "prog_type.m"
                }
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
      }
#line 259 "prog_type.m"
  }
#line 259 "prog_type.m"
}

#line 259 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0(
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 259 "prog_type.m"
{
#line 259 "prog_type.m"
  {
#line 259 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 259 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 259 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 259 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 259 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 259 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 259 "prog_type.m"
    else
#line 259 "prog_type.m"
#line 259 "prog_type.m"
      switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 259 "prog_type.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
        case (MR_Integer) 0:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
          switch (MR_unmkbody(parse_tree__prog_type__HeadVar__1_1)) {
#line 259 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
            case (MR_Integer) 0:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 259 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 1:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 259 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_8 == parse_tree__prog_type__CastX_7);
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 2:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_11 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_12 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 259 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_12 == parse_tree__prog_type__CastX_11);
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 3:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_13 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_14 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 259 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_14 == parse_tree__prog_type__CastX_13);
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 4:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_17 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 259 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_18 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 259 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_18 == parse_tree__prog_type__CastX_17);
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
        case (MR_Integer) 1:
#line 259 "prog_type.m"
          {
#line 259 "prog_type.m"
            MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 259 "prog_type.m"
            MR_Word parse_tree__prog_type__V_4_4;

#line 259 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 259 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3473 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_3_3 == parse_tree__prog_type__V_4_4);
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
        case (MR_Integer) 2:
#line 259 "prog_type.m"
          {
#line 259 "prog_type.m"
            MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 259 "prog_type.m"
            MR_Word parse_tree__prog_type__V_10_10;

#line 259 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 259 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3498 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_9_9 == parse_tree__prog_type__V_10_10);
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
        case (MR_Integer) 3:
#line 259 "prog_type.m"
#line 259 "prog_type.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 259 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 259 "prog_type.m"
            case (MR_Integer) 0:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 259 "prog_type.m"
                MR_Word parse_tree__prog_type__V_16_16;

#line 259 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 259 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 259 "prog_type.m"
                  {
#line 259 "prog_type.m"
                    parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3530 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == parse_tree__prog_type__V_16_16);
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
            case (MR_Integer) 1:
#line 259 "prog_type.m"
              {
#line 259 "prog_type.m"
                MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 259 "prog_type.m"
                MR_Word parse_tree__prog_type__V_20_20;

#line 259 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 259 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 259 "prog_type.m"
                  {
#line 259 "prog_type.m"
                    parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3555 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == parse_tree__prog_type__V_20_20);
#line 259 "prog_type.m"
                  }
#line 259 "prog_type.m"
              }
#line 259 "prog_type.m"
              break;
#line 259 "prog_type.m"
          }
#line 259 "prog_type.m"
          break;
#line 259 "prog_type.m"
      }
#line 259 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 259 "prog_type.m"
  }
#line 259 "prog_type.m"
}

#line 286 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(
#line 286 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 286 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 286 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 286 "prog_type.m"
{
#line 286 "prog_type.m"
  {
#line 286 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 286 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 286 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 286 "prog_type.m"
    {
#line 286 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 286 "prog_type.m"
      return;
    }
#line 286 "prog_type.m"
  }
#line 286 "prog_type.m"
}

#line 286 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(
#line 286 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 286 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 286 "prog_type.m"
{
#line 3617 "parse_tree.prog_type.c"
  {
#line 3619 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3622 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3624 "parse_tree.prog_type.c"
  }
#line 286 "prog_type.m"
}

#line 276 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(
#line 276 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 276 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 276 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 276 "prog_type.m"
{
#line 276 "prog_type.m"
  {
#line 276 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 276 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 276 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 276 "prog_type.m"
    {
#line 276 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 276 "prog_type.m"
      return;
    }
#line 276 "prog_type.m"
  }
#line 276 "prog_type.m"
}

#line 276 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(
#line 276 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 276 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 276 "prog_type.m"
{
#line 3670 "parse_tree.prog_type.c"
  {
#line 3672 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3675 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3677 "parse_tree.prog_type.c"
  }
#line 276 "prog_type.m"
}

#line 282 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(
#line 282 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 282 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 282 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 282 "prog_type.m"
{
#line 282 "prog_type.m"
  {
#line 282 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 282 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 282 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 282 "prog_type.m"
    {
#line 282 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 282 "prog_type.m"
      return;
    }
#line 282 "prog_type.m"
  }
#line 282 "prog_type.m"
}

#line 282 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(
#line 282 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 282 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 282 "prog_type.m"
{
#line 3723 "parse_tree.prog_type.c"
  {
#line 3725 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3728 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3730 "parse_tree.prog_type.c"
  }
#line 282 "prog_type.m"
}

#line 270 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(
#line 270 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 270 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 270 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 270 "prog_type.m"
{
#line 270 "prog_type.m"
  {
#line 270 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 270 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 270 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 270 "prog_type.m"
    {
#line 270 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 270 "prog_type.m"
      return;
    }
#line 270 "prog_type.m"
  }
#line 270 "prog_type.m"
}

#line 270 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(
#line 270 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 270 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 270 "prog_type.m"
{
#line 3776 "parse_tree.prog_type.c"
  {
#line 3778 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3781 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3783 "parse_tree.prog_type.c"
  }
#line 270 "prog_type.m"
}

#line 300 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0(
#line 300 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 300 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 300 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 300 "prog_type.m"
{
#line 300 "prog_type.m"
  {
#line 300 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 300 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 300 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_9 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 300 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_8 == parse_tree__prog_type__CastY_9);
#line 300 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 3812 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "prog_type.m"
    else
#line 300 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "prog_type.m"
        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "prog_type.m"
      else
#line 3824 "parse_tree.prog_type.c"
        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 300 "prog_type.m"
    else
#line 300 "prog_type.m"
      {
#line 300 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 300 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3835 "parse_tree.prog_type.c"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 300 "prog_type.m"
        else
#line 300 "prog_type.m"
          {
#line 300 "prog_type.m"
            MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));

#line 300 "prog_type.m"
            {
#line 300 "prog_type.m"
              parse_tree__prog_data____Compare____type_ctor_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_11_11, parse_tree__prog_type__V_5_5);
#line 300 "prog_type.m"
              return;
            }
#line 300 "prog_type.m"
          }
#line 300 "prog_type.m"
      }
#line 300 "prog_type.m"
  }
#line 300 "prog_type.m"
}

#line 300 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0(
#line 300 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 300 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 300 "prog_type.m"
{
#line 300 "prog_type.m"
  {
#line 300 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 300 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 300 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 300 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_7 == parse_tree__prog_type__CastY_8);
#line 300 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 300 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 300 "prog_type.m"
    else
#line 300 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "prog_type.m"
      {
#line 300 "prog_type.m"
        MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 300 "prog_type.m"
        MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 300 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 300 "prog_type.m"
      }
#line 300 "prog_type.m"
    else
#line 300 "prog_type.m"
      {
#line 300 "prog_type.m"
        MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 300 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4;

#line 300 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 300 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 300 "prog_type.m"
          {
#line 300 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3916 "parse_tree.prog_type.c"
            {
#line 3918 "parse_tree.prog_type.c"
              return parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__prog_type__V_3_3, parse_tree__prog_type__V_4_4);
            }
#line 300 "prog_type.m"
          }
#line 300 "prog_type.m"
      }
#line 300 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 300 "prog_type.m"
  }
#line 300 "prog_type.m"
}

#line 217 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(
#line 217 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 217 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 217 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 217 "prog_type.m"
{
#line 217 "prog_type.m"
  {
#line 217 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 217 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 217 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 217 "prog_type.m"
    {
#line 217 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 217 "prog_type.m"
      return;
    }
#line 217 "prog_type.m"
  }
#line 217 "prog_type.m"
}

#line 217 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(
#line 217 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 217 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 217 "prog_type.m"
{
#line 3973 "parse_tree.prog_type.c"
  {
#line 3975 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3978 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3980 "parse_tree.prog_type.c"
  }
#line 217 "prog_type.m"
}

#line 321 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0(
#line 321 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 321 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 321 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 321 "prog_type.m"
{
#line 321 "prog_type.m"
  {
#line 321 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 321 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 321 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 321 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 321 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 4009 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 321 "prog_type.m"
    else
#line 321 "prog_type.m"
      {
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 2)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 3)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 4)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 5)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_16_16;

#line 321 "prog_type.m"
        {
#line 321 "prog_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], &parse_tree__prog_type__V_16_16, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
        }
#line 4047 "parse_tree.prog_type.c"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == (MR_Integer) 0);
#line 321 "prog_type.m"
        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 321 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_16_16;
#line 321 "prog_type.m"
        else
#line 321 "prog_type.m"
          {
#line 321 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 321 "prog_type.m"
            {
#line 321 "prog_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[1], &parse_tree__prog_type__V_17_17, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
            }
#line 4067 "parse_tree.prog_type.c"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_17_17 == (MR_Integer) 0);
#line 321 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 321 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_17_17;
#line 321 "prog_type.m"
            else
#line 321 "prog_type.m"
              {
#line 321 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 321 "prog_type.m"
                {
#line 321 "prog_type.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_2[0], &parse_tree__prog_type__V_18_18, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                }
#line 4087 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_18_18 == (MR_Integer) 0);
#line 321 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 321 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_18_18;
#line 321 "prog_type.m"
                else
#line 321 "prog_type.m"
                  {
#line 321 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_19_19;

#line 321 "prog_type.m"
                    {
#line 321 "prog_type.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[4], &parse_tree__prog_type__V_19_19, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                    }
#line 4107 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == (MR_Integer) 0);
#line 321 "prog_type.m"
                    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 321 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_19_19;
#line 321 "prog_type.m"
                    else
#line 321 "prog_type.m"
                      {
#line 321 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_20_20;

#line 321 "prog_type.m"
                        {
#line 321 "prog_type.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[5], &parse_tree__prog_type__V_20_20, ((MR_Box) (parse_tree__prog_type__V_8_8)), ((MR_Box) (parse_tree__prog_type__V_14_14)));
                        }
#line 4127 "parse_tree.prog_type.c"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_20_20 == (MR_Integer) 0);
#line 321 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 321 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
                          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_20_20;
#line 321 "prog_type.m"
                        else
#line 321 "prog_type.m"
                          {
#line 321 "prog_type.m"
                            parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_9_9, parse_tree__prog_type__V_15_15);
#line 321 "prog_type.m"
                            return;
                          }
#line 321 "prog_type.m"
                      }
#line 321 "prog_type.m"
                  }
#line 321 "prog_type.m"
              }
#line 321 "prog_type.m"
          }
#line 321 "prog_type.m"
      }
#line 321 "prog_type.m"
  }
#line 321 "prog_type.m"
}

#line 321 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0(
#line 321 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 321 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 321 "prog_type.m"
{
#line 321 "prog_type.m"
  {
#line 321 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 321 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_15 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 321 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_16 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 321 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_15 == parse_tree__prog_type__CastY_16);
#line 321 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 321 "prog_type.m"
    else
#line 321 "prog_type.m"
      {
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_18_18;
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_19_19;
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_20_20;
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 5)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 321 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));

#line 4220 "parse_tree.prog_type.c"
        {
#line 4222 "parse_tree.prog_type.c"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], ((MR_Box) (parse_tree__prog_type__V_3_3)), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 321 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
          {
#line 4229 "parse_tree.prog_type.c"
            parse_tree__prog_type__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_type_scalar_common_1[1];
#line 4231 "parse_tree.prog_type.c"
            {
#line 4233 "parse_tree.prog_type.c"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
            }
#line 321 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
              {
#line 4240 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_type_scalar_common_2[0];
#line 4242 "parse_tree.prog_type.c"
                {
#line 4244 "parse_tree.prog_type.c"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_19_19, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
                }
#line 321 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
                  {
#line 4251 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[4];
#line 4253 "parse_tree.prog_type.c"
                    {
#line 4255 "parse_tree.prog_type.c"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                    }
#line 321 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 321 "prog_type.m"
                      {
#line 4262 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 4264 "parse_tree.prog_type.c"
                        {
#line 4266 "parse_tree.prog_type.c"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_21_21, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                        }
#line 321 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 4271 "parse_tree.prog_type.c"
                          {
#line 4273 "parse_tree.prog_type.c"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_type__V_8_8, parse_tree__prog_type__V_14_14);
                          }
#line 321 "prog_type.m"
                      }
#line 321 "prog_type.m"
                  }
#line 321 "prog_type.m"
              }
#line 321 "prog_type.m"
          }
#line 321 "prog_type.m"
      }
#line 321 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 321 "prog_type.m"
  }
#line 321 "prog_type.m"
}

#line 1297 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1297 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1297 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1297 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7)
#line 1297 "prog_type.m"
{
#line 1299 "prog_type.m"
  while (MR_TRUE)
#line 1299 "prog_type.m"
    {
#line 1299 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1299 "prog_type.m"
      {
#line 1299 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1299 "prog_type.m"
        MR_Word parse_tree__prog_type__X_4;
#line 1299 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_5;

#line 1299 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1299 "prog_type.m"
          {
#line 1299 "prog_type.m"
            parse_tree__prog_type__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1299 "prog_type.m"
            parse_tree__prog_type__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1301 "prog_type.m"
            {
#line 1301 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__X_4, parse_tree__prog_type__Y_6, parse_tree__prog_type__Bindings_7);
            }
#line 1302 "prog_type.m"
            if (!(parse_tree__prog_type__succeeded))
#line 1303 "prog_type.m"
              {
#line 1303 "prog_type.m"
                /* direct tailcall eliminated */
#line 1303 "prog_type.m"
                {
#line 1303 "prog_type.m"
                  MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_5;

#line 1303 "prog_type.m"
                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1303 "prog_type.m"
                }
#line 1303 "prog_type.m"
                continue;
#line 1303 "prog_type.m"
              }
#line 1299 "prog_type.m"
          }
#line 1299 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1299 "prog_type.m"
      }
#line 1299 "prog_type.m"
      break;
#line 1299 "prog_type.m"
    }
#line 1297 "prog_type.m"
}

#line 1257 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1257 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1257 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1257 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6)
#line 1257 "prog_type.m"
{
#line 1261 "prog_type.m"
  while (MR_TRUE)
#line 1261 "prog_type.m"
    {
#line 1261 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1261 "prog_type.m"
      {
#line 1261 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1261 "prog_type.m"
#line 1261 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) {
#line 1261 "prog_type.m"
          default:
#line 1261 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1261 "prog_type.m"
            break;
#line 1261 "prog_type.m"
          case (MR_Integer) 0:
#line 1261 "prog_type.m"
            {
#line 1261 "prog_type.m"
              MR_Word parse_tree__prog_type__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1261 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));

#line 1262 "prog_type.m"
              {
#line 1262 "prog_type.m"
                parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_5)));
              }
#line 1264 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1263 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1264 "prog_type.m"
              else
#line 1265 "prog_type.m"
                {
#line 1265 "prog_type.m"
                  MR_Word parse_tree__prog_type__BindingOfX_9;
#line 1265 "prog_type.m"
                  MR_Box parse_tree__prog_type__conv1_BindingOfX_9;

#line 1265 "prog_type.m"
                  {
#line 1265 "prog_type.m"
                    parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv1_BindingOfX_9);
                  }
#line 1265 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1265 "prog_type.m"
                    {
#line 1265 "prog_type.m"
                      parse_tree__prog_type__BindingOfX_9 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfX_9);
#line 1265 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 1265 "prog_type.m"
                    }
#line 1265 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1266 "prog_type.m"
                    {
#line 1266 "prog_type.m"
                      /* direct tailcall eliminated */
#line 1266 "prog_type.m"
                      {
#line 1266 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_9;

#line 1266 "prog_type.m"
                        parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1266 "prog_type.m"
                      }
#line 1266 "prog_type.m"
                      continue;
#line 1266 "prog_type.m"
                    }
#line 1265 "prog_type.m"
                }
#line 1261 "prog_type.m"
            }
#line 1261 "prog_type.m"
            break;
#line 1261 "prog_type.m"
          case (MR_Integer) 1:
#line 1269 "prog_type.m"
            {
#line 1269 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1269 "prog_type.m"
              MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1269 "prog_type.m"
              MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1270 "prog_type.m"
              {
#line 1270 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_11, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
              }
#line 1269 "prog_type.m"
            }
#line 1261 "prog_type.m"
            break;
#line 1261 "prog_type.m"
          case (MR_Integer) 3:
#line 1261 "prog_type.m"
#line 1261 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) {
#line 1261 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1261 "prog_type.m"
              case (MR_Integer) 0:
#line 1280 "prog_type.m"
                {
#line 1280 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1280 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1281 "prog_type.m"
                  {
#line 1281 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_21, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
#line 1280 "prog_type.m"
                }
#line 1261 "prog_type.m"
                break;
#line 1261 "prog_type.m"
              case (MR_Integer) 1:
#line 1272 "prog_type.m"
                {
#line 1272 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1272 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1272 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1274 "prog_type.m"
                  {
#line 1274 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
#line 1275 "prog_type.m"
                  if (!(parse_tree__prog_type__succeeded))
#line 1276 "prog_type.m"
                    {
#line 1276 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16;

#line 1276 "prog_type.m"
                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__MaybeRet_13)) == (MR_mktag((MR_Integer) 1)));
#line 1276 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1276 "prog_type.m"
                        {
#line 1276 "prog_type.m"
                          parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 1277 "prog_type.m"
                          /* direct tailcall eliminated */
#line 1277 "prog_type.m"
                          {
#line 1277 "prog_type.m"
                            MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__Ret_16;

#line 1277 "prog_type.m"
                            parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1277 "prog_type.m"
                          }
#line 1277 "prog_type.m"
                          continue;
#line 1276 "prog_type.m"
                        }
#line 1276 "prog_type.m"
                    }
#line 1272 "prog_type.m"
                }
#line 1261 "prog_type.m"
                break;
#line 1261 "prog_type.m"
              case (MR_Integer) 2:
#line 1283 "prog_type.m"
                {
#line 1283 "prog_type.m"
                  MR_Word parse_tree__prog_type__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1283 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1283 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1285 "prog_type.m"
                  {
#line 1285 "prog_type.m"
                    parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_24)), ((MR_Box) (parse_tree__prog_type__Y_5)));
                  }
#line 1286 "prog_type.m"
                  if (!(parse_tree__prog_type__succeeded))
#line 1286 "prog_type.m"
                    {
#line 1287 "prog_type.m"
                      {
#line 1287 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_26, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                      }
#line 1286 "prog_type.m"
                      if (!(parse_tree__prog_type__succeeded))
#line 1289 "prog_type.m"
                        {
#line 1289 "prog_type.m"
                          MR_Word parse_tree__prog_type__BindingOfX_22;
#line 1289 "prog_type.m"
                          MR_Box parse_tree__prog_type__conv0_BindingOfX_22;

#line 1289 "prog_type.m"
                          {
#line 1289 "prog_type.m"
                            parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_24)), &parse_tree__prog_type__conv0_BindingOfX_22);
                          }
#line 1289 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1289 "prog_type.m"
                            {
#line 1289 "prog_type.m"
                              parse_tree__prog_type__BindingOfX_22 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_22);
#line 1289 "prog_type.m"
                              parse_tree__prog_type__succeeded = MR_TRUE;
#line 1289 "prog_type.m"
                            }
#line 1289 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1290 "prog_type.m"
                            {
#line 1290 "prog_type.m"
                              /* direct tailcall eliminated */
#line 1290 "prog_type.m"
                              {
#line 1290 "prog_type.m"
                                MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_22;

#line 1290 "prog_type.m"
                                parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1290 "prog_type.m"
                              }
#line 1290 "prog_type.m"
                              continue;
#line 1290 "prog_type.m"
                            }
#line 1289 "prog_type.m"
                        }
#line 1286 "prog_type.m"
                    }
#line 1283 "prog_type.m"
                }
#line 1261 "prog_type.m"
                break;
#line 1261 "prog_type.m"
              case (MR_Integer) 3:
#line 1293 "prog_type.m"
                {
#line 1293 "prog_type.m"
                  MR_Word parse_tree__prog_type__X_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1293 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1294 "prog_type.m"
                  /* direct tailcall eliminated */
#line 1294 "prog_type.m"
                  {
#line 1294 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__X_27;

#line 1294 "prog_type.m"
                    parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1294 "prog_type.m"
                  }
#line 1294 "prog_type.m"
                  continue;
#line 1293 "prog_type.m"
                }
#line 1261 "prog_type.m"
                break;
#line 1261 "prog_type.m"
            }
#line 1261 "prog_type.m"
            break;
#line 1261 "prog_type.m"
        }
#line 1261 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1261 "prog_type.m"
      }
#line 1261 "prog_type.m"
      break;
#line 1261 "prog_type.m"
    }
#line 1257 "prog_type.m"
}

#line 1236 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1236 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1236 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1236 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1236 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8)
#line 1236 "prog_type.m"
{
#line 1240 "prog_type.m"
  while (MR_TRUE)
#line 1240 "prog_type.m"
    {
#line 1240 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1240 "prog_type.m"
      {
#line 1240 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1240 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1240 "prog_type.m"
          {
#line 1240 "prog_type.m"
            *parse_tree__prog_type__ArgsY_3 = parse_tree__prog_type__HeadVar__2_2;
#line 1240 "prog_type.m"
            *parse_tree__prog_type__KindY_5 = parse_tree__prog_type__HeadVar__4_4;
#line 1240 "prog_type.m"
            *parse_tree__prog_type__STATE_VARIABLE_Bindings_8 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7;
#line 1240 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1240 "prog_type.m"
          }
#line 1240 "prog_type.m"
        else
#line 1242 "prog_type.m"
          {
#line 1242 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgX_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1242 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1242 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgY0_17;
#line 1242 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsY0_18;
#line 1242 "prog_type.m"
            MR_Word parse_tree__prog_type__KindY1_24;
#line 1242 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;
#line 1242 "prog_type.m"
            MR_Word parse_tree__prog_type__V_28_28;

#line 1241 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1241 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1241 "prog_type.m"
              {
#line 1241 "prog_type.m"
                parse_tree__prog_type__ArgY0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1241 "prog_type.m"
                parse_tree__prog_type__ArgsY0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1243 "prog_type.m"
                {
#line 1243 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__ArgX_15, parse_tree__prog_type__ArgY0_17, parse_tree__prog_type__HeadTypeParams_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                }
#line 1242 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1242 "prog_type.m"
                  {
#line 1244 "prog_type.m"
                    {
#line 1244 "prog_type.m"
                      parse_tree__prog_type__V_28_28 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type__ArgY0_17);
                    }
#line 1244 "prog_type.m"
                    {
#line 1244 "prog_type.m"
                      parse_tree__prog_type__KindY1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 1244 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__4_4));
#line 1244 "prog_type.m"
                    }
#line 1245 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1245 "prog_type.m"
                    {
#line 1245 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__ArgsX_16;
#line 1245 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__ArgsY0_18;
#line 1245 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__4__tmp_copy_4 = parse_tree__prog_type__KindY1_24;
#line 1245 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1245 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7;
#line 1245 "prog_type.m"
                      parse_tree__prog_type__HeadVar__4_4 = parse_tree__prog_type__HeadVar__4__tmp_copy_4;
#line 1245 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1245 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1245 "prog_type.m"
                    }
#line 1245 "prog_type.m"
                    continue;
#line 1242 "prog_type.m"
                  }
#line 1241 "prog_type.m"
              }
#line 1242 "prog_type.m"
          }
#line 1240 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1240 "prog_type.m"
      }
#line 1240 "prog_type.m"
      break;
#line 1240 "prog_type.m"
    }
#line 1236 "prog_type.m"
}

#line 1224 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20)
#line 1224 "prog_type.m"
{
#line 1229 "prog_type.m"
  {
#line 1229 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1229 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1229 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsX_16;
#line 1229 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY0_17;
#line 1229 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY_18;

#line 1230 "prog_type.m"
    {
#line 1230 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsX_9, &parse_tree__prog_type__RevArgsX_16);
    }
#line 1231 "prog_type.m"
    {
#line 1231 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsY0_10, &parse_tree__prog_type__RevArgsY0_17);
    }
#line 1232 "prog_type.m"
    {
#line 1232 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(parse_tree__prog_type__RevArgsX_16, parse_tree__prog_type__RevArgsY0_17, &parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__KindY0_12, parse_tree__prog_type__KindY_13, parse_tree__prog_type__HeadTypeParams_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19, parse_tree__prog_type__STATE_VARIABLE_Bindings_20);
    }
#line 1229 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1229 "prog_type.m"
      {
#line 1234 "prog_type.m"
        {
#line 1234 "prog_type.m"
          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__ArgsY_11);
        }
#line 1234 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1229 "prog_type.m"
      }
#line 1229 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1229 "prog_type.m"
  }
#line 1224 "prog_type.m"
}

#line 1171 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1171 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1171 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33)
#line 1171 "prog_type.m"
{
#line 1176 "prog_type.m"
  while (MR_TRUE)
#line 1176 "prog_type.m"
    {
#line 1176 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1176 "prog_type.m"
      {
#line 1176 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1176 "prog_type.m"
#line 1176 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) {
#line 1176 "prog_type.m"
          default:
#line 1176 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1176 "prog_type.m"
            break;
#line 1176 "prog_type.m"
          case (MR_Integer) 1:
#line 1176 "prog_type.m"
            {
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__NameY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_15;
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY_16;
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48;
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__V_49_49;

#line 1177 "prog_type.m"
              {
#line 1177 "prog_type.m"
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_13, &parse_tree__prog_type__ArgsY_15, parse_tree__prog_type__KindY0_14, &parse_tree__prog_type__KindY_16, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48);
              }
#line 1176 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1176 "prog_type.m"
                {
#line 1179 "prog_type.m"
                  {
#line 1179 "prog_type.m"
                    parse_tree__prog_type__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 0) = ((MR_Box) (parse_tree__prog_type__NameY_12));
#line 1179 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_15));
#line 1179 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 2) = ((MR_Box) (parse_tree__prog_type__KindY_16));
#line 1179 "prog_type.m"
                  }
#line 1179 "prog_type.m"
                  {
#line 1179 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_49_49, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                  }
#line 1176 "prog_type.m"
                }
#line 1176 "prog_type.m"
            }
#line 1176 "prog_type.m"
            break;
#line 1176 "prog_type.m"
          case (MR_Integer) 2:
#line 1182 "prog_type.m"
            {
#line 1183 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1182 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1184 "prog_type.m"
                {
#line 1184 "prog_type.m"
                  return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                }
#line 1182 "prog_type.m"
            }
#line 1176 "prog_type.m"
            break;
#line 1176 "prog_type.m"
          case (MR_Integer) 3:
#line 1176 "prog_type.m"
#line 1176 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) {
#line 1176 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1176 "prog_type.m"
              case (MR_Integer) 0:
#line 1190 "prog_type.m"
                {
#line 1190 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43;
#line 1190 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_44_44;
#line 1190 "prog_type.m"
                  MR_Word parse_tree__prog_type__ArgsY0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1190 "prog_type.m"
                  MR_Word parse_tree__prog_type__KindY0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1190 "prog_type.m"
                  MR_Word parse_tree__prog_type__ArgsY_53;
#line 1190 "prog_type.m"
                  MR_Word parse_tree__prog_type__KindY_54;

#line 1191 "prog_type.m"
                  {
#line 1191 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_51, &parse_tree__prog_type__ArgsY_53, parse_tree__prog_type__KindY0_52, &parse_tree__prog_type__KindY_54, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43);
                  }
#line 1190 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1190 "prog_type.m"
                    {
#line 1193 "prog_type.m"
                      {
#line 1193 "prog_type.m"
                        parse_tree__prog_type__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "prog_type.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1193 "prog_type.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_53));
#line 1193 "prog_type.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 2) = ((MR_Box) (parse_tree__prog_type__KindY_54));
#line 1193 "prog_type.m"
                      }
#line 1193 "prog_type.m"
                      {
#line 1193 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_44_44, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                      }
#line 1190 "prog_type.m"
                    }
#line 1190 "prog_type.m"
                }
#line 1176 "prog_type.m"
                break;
#line 1176 "prog_type.m"
              case (MR_Integer) 1:
#line 1186 "prog_type.m"
                {
#line 1187 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1186 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1188 "prog_type.m"
                    {
#line 1188 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                    }
#line 1186 "prog_type.m"
                }
#line 1176 "prog_type.m"
                break;
#line 1176 "prog_type.m"
              case (MR_Integer) 2:
#line 1196 "prog_type.m"
                {
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__VarY_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1196 "prog_type.m"
                  MR_Integer parse_tree__prog_type__NArgsX0_24;
#line 1196 "prog_type.m"
                  MR_Integer parse_tree__prog_type__NArgsY0_25;
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__Result_26;
#line 1196 "prog_type.m"
                  MR_Word parse_tree__prog_type__ArgsY0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1197 "prog_type.m"
                  {
#line 1197 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__NArgsX0_24);
                  }
#line 1198 "prog_type.m"
                  {
#line 1198 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__NArgsY0_25);
                  }
#line 1199 "prog_type.m"
                  {
#line 1199 "prog_type.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_type__Result_26, parse_tree__prog_type__NArgsX0_24, parse_tree__prog_type__NArgsY0_25);
                  }
#line 1206 "prog_type.m"
#line 1206 "prog_type.m"
                  switch (parse_tree__prog_type__Result_26) {
#line 1206 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1206 "prog_type.m"
                    case (MR_Integer) 1:
#line 1201 "prog_type.m"
                      {
#line 1201 "prog_type.m"
                        MR_Word parse_tree__prog_type__Kind_27;
#line 1201 "prog_type.m"
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40;
#line 1201 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_41_41;
#line 1201 "prog_type.m"
                        MR_Word parse_tree__prog_type__ArgsY_55;

#line 1202 "prog_type.m"
                        {
#line 1202 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__ArgsY_55, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_27, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40);
                        }
#line 1201 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1201 "prog_type.m"
                          {
#line 1204 "prog_type.m"
                            {
#line 1204 "prog_type.m"
                              parse_tree__prog_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1204 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 1) = ((MR_Box) (parse_tree__prog_type__VarY_22));
#line 1204 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 2) = ((MR_Box) (parse_tree__prog_type__ArgsY_55));
#line 1204 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 3) = ((MR_Box) (parse_tree__prog_type__Kind_27));
#line 1204 "prog_type.m"
                            }
#line 1204 "prog_type.m"
                            {
#line 1204 "prog_type.m"
                              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_41_41, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                            }
#line 1201 "prog_type.m"
                          }
#line 1201 "prog_type.m"
                      }
#line 1206 "prog_type.m"
                      break;
#line 1206 "prog_type.m"
                    case (MR_Integer) 0:
#line 1207 "prog_type.m"
                      {
#line 1207 "prog_type.m"
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38;
#line 1207 "prog_type.m"
                        MR_Word parse_tree__prog_type__Kind_56;
#line 1209 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_28_28;

#line 1209 "prog_type.m"
                        {
#line 1209 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__V_28_28, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38);
                        }
#line 1207 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1211 "prog_type.m"
                          {
#line 1211 "prog_type.m"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__VarY_22, parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1207 "prog_type.m"
                      }
#line 1206 "prog_type.m"
                      break;
#line 1206 "prog_type.m"
                    case (MR_Integer) 2:
#line 1213 "prog_type.m"
                      {
#line 1213 "prog_type.m"
                        MR_Word parse_tree__prog_type__ArgsX_29;
#line 1213 "prog_type.m"
                        MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35;
#line 1213 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_36_36;
#line 1213 "prog_type.m"
                        MR_Word parse_tree__prog_type__Kind_57;

#line 1214 "prog_type.m"
                        {
#line 1214 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsY0_59, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__ArgsX_29, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_57, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35);
                        }
#line 1213 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1213 "prog_type.m"
                          {
#line 1216 "prog_type.m"
                            {
#line 1216 "prog_type.m"
                              parse_tree__prog_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1216 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 1) = ((MR_Box) (parse_tree__prog_type__VarX_8));
#line 1216 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 2) = ((MR_Box) (parse_tree__prog_type__ArgsX_29));
#line 1216 "prog_type.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 3) = ((MR_Box) (parse_tree__prog_type__Kind_57));
#line 1216 "prog_type.m"
                            }
#line 1216 "prog_type.m"
                            {
#line 1216 "prog_type.m"
                              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_22, parse_tree__prog_type__V_36_36, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                            }
#line 1213 "prog_type.m"
                          }
#line 1213 "prog_type.m"
                      }
#line 1206 "prog_type.m"
                      break;
#line 1206 "prog_type.m"
                  }
#line 1196 "prog_type.m"
                }
#line 1176 "prog_type.m"
                break;
#line 1176 "prog_type.m"
              case (MR_Integer) 3:
#line 1220 "prog_type.m"
                {
#line 1220 "prog_type.m"
                  MR_Word parse_tree__prog_type__RawY_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1220 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1221 "prog_type.m"
                  /* direct tailcall eliminated */
#line 1221 "prog_type.m"
                  {
#line 1221 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeY__tmp_copy_7 = parse_tree__prog_type__RawY_30;

#line 1221 "prog_type.m"
                    parse_tree__prog_type__TypeY_7 = parse_tree__prog_type__TypeY__tmp_copy_7;
#line 1221 "prog_type.m"
                  }
#line 1221 "prog_type.m"
                  continue;
#line 1220 "prog_type.m"
                }
#line 1176 "prog_type.m"
                break;
#line 1176 "prog_type.m"
            }
#line 1176 "prog_type.m"
            break;
#line 1176 "prog_type.m"
        }
#line 1176 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1176 "prog_type.m"
      }
#line 1176 "prog_type.m"
      break;
#line 1176 "prog_type.m"
    }
#line 1171 "prog_type.m"
}

#line 1140 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1140 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22)
#line 1140 "prog_type.m"
{
#line 1146 "prog_type.m"
  {
#line 1146 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1146 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1146 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsX_11;
#line 1144 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;

#line 1144 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1144 "prog_type.m"
      {
#line 1144 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1144 "prog_type.m"
        parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1144 "prog_type.m"
        parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1145 "prog_type.m"
        {
#line 1145 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_10, parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
        }
#line 1144 "prog_type.m"
      }
#line 1144 "prog_type.m"
    else
#line 1148 "prog_type.m"
      {
#line 1148 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_13;
#line 1148 "prog_type.m"
        MR_Word parse_tree__prog_type__ArgsY_14;
#line 1146 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;

#line 1146 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1146 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1146 "prog_type.m"
          {
#line 1146 "prog_type.m"
            parse_tree__prog_type__VarY_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1146 "prog_type.m"
            parse_tree__prog_type__ArgsY_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1146 "prog_type.m"
            parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1147 "prog_type.m"
            {
#line 1147 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__VarY_13, parse_tree__prog_type__ArgsY_14, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
            }
#line 1146 "prog_type.m"
          }
#line 1146 "prog_type.m"
        else
#line 1154 "prog_type.m"
          {
#line 1154 "prog_type.m"
            MR_Word parse_tree__prog_type__RawX_16;
#line 1148 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 1148 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1148 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1148 "prog_type.m"
              {
#line 1148 "prog_type.m"
                parse_tree__prog_type__RawX_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1148 "prog_type.m"
                parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1151 "prog_type.m"
                {
#line 1151 "prog_type.m"
                  MR_Word parse_tree__prog_type__RawY_18;
#line 1149 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19;

#line 1149 "prog_type.m"
                  parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1149 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1149 "prog_type.m"
                    {
#line 1149 "prog_type.m"
                      parse_tree__prog_type__RawY_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1149 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1150 "prog_type.m"
                      {
#line 1150 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__RawY_18, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                      }
#line 1149 "prog_type.m"
                    }
#line 1149 "prog_type.m"
                  else
#line 1152 "prog_type.m"
                    {
#line 1152 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1151 "prog_type.m"
                }
#line 1148 "prog_type.m"
              }
#line 1148 "prog_type.m"
            else
#line 1156 "prog_type.m"
              {
#line 1156 "prog_type.m"
                MR_Word parse_tree__prog_type__RawY_28;
#line 1154 "prog_type.m"
                MR_Word parse_tree__prog_type__V_20_20;

#line 1154 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1154 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1154 "prog_type.m"
                  {
#line 1154 "prog_type.m"
                    parse_tree__prog_type__RawY_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1154 "prog_type.m"
                    parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1155 "prog_type.m"
                    {
#line 1155 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__RawY_28, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1154 "prog_type.m"
                  }
#line 1156 "prog_type.m"
              }
#line 1154 "prog_type.m"
          }
#line 1148 "prog_type.m"
      }
#line 1146 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1146 "prog_type.m"
  }
#line 1140 "prog_type.m"
}

#line 1108 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1108 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1108 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23)
#line 1108 "prog_type.m"
{
#line 1113 "prog_type.m"
  {
#line 1113 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1113 "prog_type.m"
#line 1113 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) {
#line 1113 "prog_type.m"
      default:
#line 1113 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_FALSE;
#line 1113 "prog_type.m"
        break;
#line 1113 "prog_type.m"
      case (MR_Integer) 1:
#line 1113 "prog_type.m"
        {
#line 1113 "prog_type.m"
          MR_Word parse_tree__prog_type__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1113 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1113 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsY_13;
#line 1113 "prog_type.m"
          MR_Word parse_tree__prog_type__V_41_41;
#line 1113 "prog_type.m"
          MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1114 "prog_type.m"
          MR_Word parse_tree__prog_type__V_14_14;

#line 1114 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1)));
#line 1114 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 1114 "prog_type.m"
            {
#line 1114 "prog_type.m"
              parse_tree__prog_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1114 "prog_type.m"
              parse_tree__prog_type__ArgsY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1114 "prog_type.m"
              parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1114 "prog_type.m"
              {
#line 1114 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__SymName_10, parse_tree__prog_type__V_41_41);
              }
#line 1113 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1119 "prog_type.m"
                {
#line 1119 "prog_type.m"
                  return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__ArgsY_13, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                }
#line 1114 "prog_type.m"
            }
#line 1113 "prog_type.m"
        }
#line 1113 "prog_type.m"
        break;
#line 1113 "prog_type.m"
      case (MR_Integer) 2:
#line 1121 "prog_type.m"
        {
#line 1121 "prog_type.m"
          MR_Word parse_tree__prog_type__BuiltinType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1121 "prog_type.m"
          MR_Word parse_tree__prog_type__V_42_42;

#line 1122 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2)));
#line 1122 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 1122 "prog_type.m"
            {
#line 1122 "prog_type.m"
              parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1122 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__BuiltinType_15 == parse_tree__prog_type__V_42_42);
#line 1121 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1121 "prog_type.m"
                {
#line 1121 "prog_type.m"
                  *parse_tree__prog_type__STATE_VARIABLE_Bindings_23 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22;
#line 1121 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 1121 "prog_type.m"
                }
#line 1122 "prog_type.m"
            }
#line 1121 "prog_type.m"
        }
#line 1113 "prog_type.m"
        break;
#line 1113 "prog_type.m"
      case (MR_Integer) 3:
#line 1113 "prog_type.m"
#line 1113 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) {
#line 1113 "prog_type.m"
          default:
#line 1113 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1113 "prog_type.m"
            break;
#line 1113 "prog_type.m"
          case (MR_Integer) 0:
#line 1133 "prog_type.m"
            {
#line 1133 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsX_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1133 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_40;
#line 1133 "prog_type.m"
              MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1134 "prog_type.m"
              MR_Word parse_tree__prog_type__V_21_21;

#line 1134 "prog_type.m"
              parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1134 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1134 "prog_type.m"
                {
#line 1134 "prog_type.m"
                  parse_tree__prog_type__ArgsY_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1134 "prog_type.m"
                  parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1135 "prog_type.m"
                  {
#line 1135 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_39, parse_tree__prog_type__ArgsY_40, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                  }
#line 1134 "prog_type.m"
                }
#line 1133 "prog_type.m"
            }
#line 1113 "prog_type.m"
            break;
#line 1113 "prog_type.m"
          case (MR_Integer) 1:
#line 1113 "prog_type.m"
            {
#line 1113 "prog_type.m"
              MR_Word parse_tree__prog_type__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1113 "prog_type.m"
              MR_Word parse_tree__prog_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1113 "prog_type.m"
              MR_Word parse_tree__prog_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1113 "prog_type.m"
              MR_Word parse_tree__prog_type__V_52_52;
#line 1113 "prog_type.m"
              MR_Word parse_tree__prog_type__V_53_53;
#line 1113 "prog_type.m"
              MR_Word parse_tree__prog_type__V_54_54;

#line 1125 "prog_type.m"
              parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1125 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1125 "prog_type.m"
                {
#line 1125 "prog_type.m"
                  parse_tree__prog_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1125 "prog_type.m"
                  parse_tree__prog_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1125 "prog_type.m"
                  parse_tree__prog_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1113 "prog_type.m"
                  if ((parse_tree__prog_type__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1124 "prog_type.m"
                    {
#line 1125 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1124 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1124 "prog_type.m"
                        {
#line 1125 "prog_type.m"
                          parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1124 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1124 "prog_type.m"
                            {
#line 1125 "prog_type.m"
                              parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1124 "prog_type.m"
                              if (parse_tree__prog_type__succeeded)
#line 1126 "prog_type.m"
                                {
#line 1126 "prog_type.m"
                                  return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                                }
#line 1124 "prog_type.m"
                            }
#line 1124 "prog_type.m"
                        }
#line 1124 "prog_type.m"
                    }
#line 1113 "prog_type.m"
                  else
#line 1128 "prog_type.m"
                    {
#line 1128 "prog_type.m"
                      MR_Word parse_tree__prog_type__RetX_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, (MR_Integer) 0)));
#line 1128 "prog_type.m"
                      MR_Word parse_tree__prog_type__RetY_19;
#line 1128 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1129 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1128 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1128 "prog_type.m"
                        {
#line 1129 "prog_type.m"
                          parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1128 "prog_type.m"
                          if (parse_tree__prog_type__succeeded)
#line 1128 "prog_type.m"
                            {
#line 1129 "prog_type.m"
                              parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 1129 "prog_type.m"
                              if (parse_tree__prog_type__succeeded)
#line 1129 "prog_type.m"
                                {
#line 1129 "prog_type.m"
                                  parse_tree__prog_type__RetY_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_53_53, (MR_Integer) 0)));
#line 1130 "prog_type.m"
                                  {
#line 1130 "prog_type.m"
                                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                                  }
#line 1128 "prog_type.m"
                                  if (parse_tree__prog_type__succeeded)
#line 1131 "prog_type.m"
                                    {
#line 1131 "prog_type.m"
                                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RetX_18, parse_tree__prog_type__RetY_19, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                                    }
#line 1129 "prog_type.m"
                                }
#line 1128 "prog_type.m"
                            }
#line 1128 "prog_type.m"
                        }
#line 1128 "prog_type.m"
                    }
#line 1125 "prog_type.m"
                }
#line 1113 "prog_type.m"
            }
#line 1113 "prog_type.m"
            break;
#line 1113 "prog_type.m"
        }
#line 1113 "prog_type.m"
        break;
#line 1113 "prog_type.m"
    }
#line 1113 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1113 "prog_type.m"
  }
#line 1108 "prog_type.m"
}

#line 1087 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1087 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16)
#line 1087 "prog_type.m"
{
#line 1095 "prog_type.m"
  while (MR_TRUE)
#line 1095 "prog_type.m"
    {
#line 1095 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1095 "prog_type.m"
      {
#line 1095 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;
#line 1095 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfVar_12;
#line 1091 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfVar_12;

#line 1091 "prog_type.m"
        {
#line 1091 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, ((MR_Box) (parse_tree__prog_type__Var_7)), &parse_tree__prog_type__conv0_BindingOfVar_12);
        }
#line 1091 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1091 "prog_type.m"
          {
#line 1091 "prog_type.m"
            parse_tree__prog_type__BindingOfVar_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfVar_12);
#line 1091 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1091 "prog_type.m"
          }
#line 1095 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1092 "prog_type.m"
          {
#line 1092 "prog_type.m"
            MR_Word parse_tree__prog_type__Var2_13;
#line 1092 "prog_type.m"
            MR_Word parse_tree__prog_type__V_14_14;

#line 1092 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__BindingOfVar_12)) == (MR_mktag((MR_Integer) 0)));
#line 1092 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1092 "prog_type.m"
              {
#line 1092 "prog_type.m"
                parse_tree__prog_type__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 0)));
#line 1092 "prog_type.m"
                parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 1)));
#line 1093 "prog_type.m"
                /* direct tailcall eliminated */
#line 1093 "prog_type.m"
                {
#line 1093 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var__tmp_copy_7 = parse_tree__prog_type__Var2_13;

#line 1093 "prog_type.m"
                  parse_tree__prog_type__Var_7 = parse_tree__prog_type__Var__tmp_copy_7;
#line 1093 "prog_type.m"
                }
#line 1093 "prog_type.m"
                continue;
#line 1092 "prog_type.m"
              }
#line 1092 "prog_type.m"
          }
#line 1095 "prog_type.m"
        else
#line 1098 "prog_type.m"
          {
#line 1096 "prog_type.m"
            {
#line 1096 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__HeadVar_8)));
            }
#line 1098 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1098 "prog_type.m"
              {
#line 1098 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_16 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15;
#line 1098 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1098 "prog_type.m"
              }
#line 1098 "prog_type.m"
            else
#line 1099 "prog_type.m"
              {
#line 1099 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeInfo_23_23;
#line 1099 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_24_24;
#line 1099 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 1099 "prog_type.m"
                {
#line 1099 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), parse_tree__prog_type__HeadTypeParams_10);
                }
#line 1099 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1099 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1099 "prog_type.m"
                  {
#line 5851 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5853 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1100 "prog_type.m"
                    {
#line 1100 "prog_type.m"
                      parse_tree__prog_type__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 0) = ((MR_Box) (parse_tree__prog_type__HeadVar_8));
#line 1100 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1100 "prog_type.m"
                    }
#line 1100 "prog_type.m"
                    {
#line 1100 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_23_23, parse_tree__prog_type__TypeCtorInfo_24_24, ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__V_18_18)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, parse_tree__prog_type__STATE_VARIABLE_Bindings_16);
                    }
#line 1100 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1099 "prog_type.m"
                  }
#line 1099 "prog_type.m"
              }
#line 1098 "prog_type.m"
          }
#line 1095 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1095 "prog_type.m"
      }
#line 1095 "prog_type.m"
      break;
#line 1095 "prog_type.m"
    }
#line 1087 "prog_type.m"
}

#line 1044 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1044 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1044 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19)
#line 1044 "prog_type.m"
{
#line 1050 "prog_type.m"
  {
#line 1050 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1048 "prog_type.m"
    {
#line 1048 "prog_type.m"
      parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Y_8)), parse_tree__prog_type__HeadTypeParams_10);
    }
#line 1050 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1049 "prog_type.m"
      {
#line 1049 "prog_type.m"
        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__X_7, parse_tree__prog_type__Y_8, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
      }
#line 1050 "prog_type.m"
    else
#line 1052 "prog_type.m"
      {
#line 1050 "prog_type.m"
        {
#line 1050 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), parse_tree__prog_type__HeadTypeParams_10);
        }
#line 1052 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1051 "prog_type.m"
          {
#line 1051 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__Y_8, parse_tree__prog_type__X_7, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
          }
#line 1052 "prog_type.m"
        else
#line 1067 "prog_type.m"
          {
#line 1067 "prog_type.m"
            MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1052 "prog_type.m"
            MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1052 "prog_type.m"
            {
#line 1052 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_12);
            }
#line 1052 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1052 "prog_type.m"
              {
#line 1052 "prog_type.m"
                parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1052 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1052 "prog_type.m"
              }
#line 1067 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1057 "prog_type.m"
              {
#line 1057 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_13;
#line 1053 "prog_type.m"
                MR_Box parse_tree__prog_type__conv1_BindingOfY_13;

#line 1053 "prog_type.m"
                {
#line 1053 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv1_BindingOfY_13);
                }
#line 1053 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1053 "prog_type.m"
                  {
#line 1053 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_13 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfY_13);
#line 1053 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1053 "prog_type.m"
                  }
#line 1057 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1056 "prog_type.m"
                  {
#line 1056 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__BindingOfY_13, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                  }
#line 1057 "prog_type.m"
                else
#line 1059 "prog_type.m"
                  {
#line 1059 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfX_14;
#line 1060 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_44_44;
#line 1060 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_42_42;
#line 1060 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_15_15;

#line 1059 "prog_type.m"
                    {
#line 1059 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfX_12, &parse_tree__prog_type__SubstBindingOfX_14);
                    }
#line 1060 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfX_14)) == (MR_mktag((MR_Integer) 0)));
#line 1060 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1060 "prog_type.m"
                      {
#line 1060 "prog_type.m"
                        parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 0)));
#line 1060 "prog_type.m"
                        parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 1)));
#line 6022 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1060 "prog_type.m"
                        {
#line 1060 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__V_42_42)));
                        }
#line 1060 "prog_type.m"
                      }
#line 1062 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1062 "prog_type.m"
                      {
#line 1062 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1062 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1062 "prog_type.m"
                      }
#line 1062 "prog_type.m"
                    else
#line 1063 "prog_type.m"
                      {
#line 1063 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_34_34;
#line 1063 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_35_35;

#line 1063 "prog_type.m"
                        {
#line 1063 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfX_14, parse_tree__prog_type__Y_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1063 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1063 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1063 "prog_type.m"
                          {
#line 6061 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6063 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1064 "prog_type.m"
                            {
#line 1064 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_34_34, parse_tree__prog_type__TypeCtorInfo_35_35, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfX_14)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1064 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1063 "prog_type.m"
                          }
#line 1063 "prog_type.m"
                      }
#line 1059 "prog_type.m"
                  }
#line 1057 "prog_type.m"
              }
#line 1067 "prog_type.m"
            else
#line 1077 "prog_type.m"
              {
#line 1077 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_27;
#line 1069 "prog_type.m"
                MR_Box parse_tree__prog_type__conv2_BindingOfY_27;

#line 1069 "prog_type.m"
                {
#line 1069 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv2_BindingOfY_27);
                }
#line 1069 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1069 "prog_type.m"
                  {
#line 1069 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_27 = ((MR_Word) parse_tree__prog_type__conv2_BindingOfY_27);
#line 1069 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1069 "prog_type.m"
                  }
#line 1077 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1070 "prog_type.m"
                  {
#line 1070 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfY_16;
#line 1071 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_45_45;
#line 1071 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_43_43;
#line 1071 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_17_17;

#line 1070 "prog_type.m"
                    {
#line 1070 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfY_27, &parse_tree__prog_type__SubstBindingOfY_16);
                    }
#line 1071 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfY_16)) == (MR_mktag((MR_Integer) 0)));
#line 1071 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1071 "prog_type.m"
                      {
#line 1071 "prog_type.m"
                        parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 0)));
#line 1071 "prog_type.m"
                        parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 1)));
#line 6132 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1071 "prog_type.m"
                        {
#line 1071 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_45_45, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_43_43)));
                        }
#line 1071 "prog_type.m"
                      }
#line 1073 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1073 "prog_type.m"
                      {
#line 1073 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1073 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1073 "prog_type.m"
                      }
#line 1073 "prog_type.m"
                    else
#line 1074 "prog_type.m"
                      {
#line 1074 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_38_38;
#line 1074 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_39_39;

#line 1074 "prog_type.m"
                        {
#line 1074 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfY_16, parse_tree__prog_type__X_7, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1074 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1074 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1074 "prog_type.m"
                          {
#line 6171 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6173 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1075 "prog_type.m"
                            {
#line 1075 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_38_38, parse_tree__prog_type__TypeCtorInfo_39_39, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfY_16)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1075 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1074 "prog_type.m"
                          }
#line 1074 "prog_type.m"
                      }
#line 1070 "prog_type.m"
                  }
#line 1077 "prog_type.m"
                else
#line 1081 "prog_type.m"
                  {
#line 1079 "prog_type.m"
                    {
#line 1079 "prog_type.m"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_8)));
                    }
#line 1081 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1081 "prog_type.m"
                      *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1081 "prog_type.m"
                    else
#line 1082 "prog_type.m"
                      {
#line 1082 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_25_25;

#line 1082 "prog_type.m"
                        {
#line 1082 "prog_type.m"
                          parse_tree__prog_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__Y_8));
#line 1082 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1082 "prog_type.m"
                        }
#line 1082 "prog_type.m"
                        {
#line 1082 "prog_type.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_25_25)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                        }
#line 1082 "prog_type.m"
                      }
#line 1081 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1081 "prog_type.m"
                  }
#line 1077 "prog_type.m"
              }
#line 1067 "prog_type.m"
          }
#line 1052 "prog_type.m"
      }
#line 1050 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1050 "prog_type.m"
  }
#line 1044 "prog_type.m"
}

#line 1028 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1028 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1028 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14)
#line 1028 "prog_type.m"
{
#line 1034 "prog_type.m"
  {
#line 1034 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 0)));
#line 1034 "prog_type.m"
    MR_Word parse_tree__prog_type__VarY_10;
#line 1034 "prog_type.m"
    MR_Word parse_tree__prog_type__KindY_11;

#line 1032 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1032 "prog_type.m"
      {
#line 1032 "prog_type.m"
        parse_tree__prog_type__VarY_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1032 "prog_type.m"
        parse_tree__prog_type__KindY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1033 "prog_type.m"
        {
#line 1033 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_6, parse_tree__prog_type__VarY_10, parse_tree__prog_type__KindY_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
        }
#line 1032 "prog_type.m"
      }
#line 1032 "prog_type.m"
    else
#line 1037 "prog_type.m"
      {
#line 1037 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1034 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1034 "prog_type.m"
        {
#line 1034 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, ((MR_Box) (parse_tree__prog_type__VarX_6)), &parse_tree__prog_type__conv0_BindingOfX_12);
        }
#line 1034 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1034 "prog_type.m"
          {
#line 1034 "prog_type.m"
            parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1034 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1034 "prog_type.m"
          }
#line 1037 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1036 "prog_type.m"
          {
#line 1036 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
          }
#line 1037 "prog_type.m"
        else
#line 1039 "prog_type.m"
          {
#line 1039 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 1039 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtorInfo_22_22;
#line 1040 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_20_20;

#line 1039 "prog_type.m"
            {
#line 1039 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13);
            }
#line 1039 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1039 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
              {
#line 6334 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1040 "prog_type.m"
                {
#line 1040 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__VarX_6)), parse_tree__prog_type__HeadTypeParams_8);
                }
#line 1040 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1039 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
                  {
#line 6347 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6349 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1041 "prog_type.m"
                    {
#line 1041 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_21_21, parse_tree__prog_type__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__prog_type__VarX_6)), ((MR_Box) (parse_tree__prog_type__TypeY_7)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
                    }
#line 1041 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1039 "prog_type.m"
                  }
#line 1039 "prog_type.m"
              }
#line 1039 "prog_type.m"
          }
#line 1037 "prog_type.m"
      }
#line 1034 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1034 "prog_type.m"
  }
#line 1028 "prog_type.m"
}

#line 647 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 647 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 647 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 647 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3)
#line 647 "prog_type.m"
{
#line 650 "prog_type.m"
  while (MR_TRUE)
#line 650 "prog_type.m"
    {
#line 650 "prog_type.m"
      /* tailcall optimized into a loop */
#line 650 "prog_type.m"
      {
#line 650 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 650 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "prog_type.m"
          *parse_tree__prog_type__STATE_VARIABLE_V_3 = parse_tree__prog_type__STATE_VARIABLE_V_0_2;
#line 650 "prog_type.m"
        else
#line 651 "prog_type.m"
          {
#line 651 "prog_type.m"
            MR_Word parse_tree__prog_type__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 651 "prog_type.m"
            MR_Word parse_tree__prog_type__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 651 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 652 "prog_type.m"
            {
#line 652 "prog_type.m"
              parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_7, parse_tree__prog_type__STATE_VARIABLE_V_0_2, &parse_tree__prog_type__STATE_VARIABLE_V_12_12);
            }
#line 653 "prog_type.m"
            /* direct tailcall eliminated */
#line 653 "prog_type.m"
            {
#line 653 "prog_type.m"
              MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Types_8;
#line 653 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 653 "prog_type.m"
              parse_tree__prog_type__STATE_VARIABLE_V_0_2 = parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2;
#line 653 "prog_type.m"
              parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 653 "prog_type.m"
            }
#line 653 "prog_type.m"
            continue;
#line 651 "prog_type.m"
          }
#line 650 "prog_type.m"
      }
#line 650 "prog_type.m"
      break;
#line 650 "prog_type.m"
    }
#line 647 "prog_type.m"
}

#line 620 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 620 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 620 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 620 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 620 "prog_type.m"
{
#line 622 "prog_type.m"
  while (MR_TRUE)
#line 622 "prog_type.m"
    {
#line 622 "prog_type.m"
      /* tailcall optimized into a loop */
#line 622 "prog_type.m"
      {
#line 622 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 622 "prog_type.m"
#line 622 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 622 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 622 "prog_type.m"
          case (MR_Integer) 0:
#line 622 "prog_type.m"
            {
#line 622 "prog_type.m"
              MR_Word parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "prog_type.m"
              MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 622 "prog_type.m"
              {
#line 622 "prog_type.m"
                MR_Word base;
#line 622 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "prog_type.m"
                *parse_tree__prog_type__HeadVar__3_3 = base;
#line 622 "prog_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_4));
#line 622 "prog_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 622 "prog_type.m"
              }
#line 622 "prog_type.m"
            }
#line 622 "prog_type.m"
            break;
#line 622 "prog_type.m"
          case (MR_Integer) 1:
#line 623 "prog_type.m"
            {
#line 623 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "prog_type.m"
              MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "prog_type.m"
              MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 624 "prog_type.m"
              {
#line 624 "prog_type.m"
                parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_8, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 624 "prog_type.m"
                return;
              }
#line 623 "prog_type.m"
            }
#line 622 "prog_type.m"
            break;
#line 622 "prog_type.m"
          case (MR_Integer) 2:
#line 625 "prog_type.m"
            *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__HeadVar__2_2;
#line 622 "prog_type.m"
            break;
#line 622 "prog_type.m"
          case (MR_Integer) 3:
#line 622 "prog_type.m"
#line 622 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 622 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 622 "prog_type.m"
              case (MR_Integer) 0:
#line 634 "prog_type.m"
                {
#line 634 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 634 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 635 "prog_type.m"
                  {
#line 635 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_28, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 635 "prog_type.m"
                    return;
                  }
#line 634 "prog_type.m"
                }
#line 622 "prog_type.m"
                break;
#line 622 "prog_type.m"
              case (MR_Integer) 1:
#line 626 "prog_type.m"
                {
#line 626 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 626 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 626 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 626 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 627 "prog_type.m"
                  {
#line 627 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_18, parse_tree__prog_type__HeadVar__2_2, &parse_tree__prog_type__STATE_VARIABLE_V_26_26);
                  }
#line 631 "prog_type.m"
                  if ((parse_tree__prog_type__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 631 "prog_type.m"
                  else
#line 629 "prog_type.m"
                    {
#line 629 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_19, (MR_Integer) 0)));

#line 630 "prog_type.m"
                      /* direct tailcall eliminated */
#line 630 "prog_type.m"
                      {
#line 630 "prog_type.m"
                        MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_23;
#line 630 "prog_type.m"
                        MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;

#line 630 "prog_type.m"
                        parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 630 "prog_type.m"
                        parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 630 "prog_type.m"
                      }
#line 630 "prog_type.m"
                      continue;
#line 629 "prog_type.m"
                    }
#line 626 "prog_type.m"
                }
#line 622 "prog_type.m"
                break;
#line 622 "prog_type.m"
              case (MR_Integer) 2:
#line 636 "prog_type.m"
                {
#line 636 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 636 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 636 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_40_40;
#line 636 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 637 "prog_type.m"
                  {
#line 637 "prog_type.m"
                    parse_tree__prog_type__STATE_VARIABLE_V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 0) = ((MR_Box) (parse_tree__prog_type__Var_34));
#line 637 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 637 "prog_type.m"
                  }
#line 638 "prog_type.m"
                  {
#line 638 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_35, parse_tree__prog_type__STATE_VARIABLE_V_40_40, parse_tree__prog_type__HeadVar__3_3);
#line 638 "prog_type.m"
                    return;
                  }
#line 636 "prog_type.m"
                }
#line 622 "prog_type.m"
                break;
#line 622 "prog_type.m"
              case (MR_Integer) 3:
#line 639 "prog_type.m"
                {
#line 639 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 639 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 640 "prog_type.m"
                  /* direct tailcall eliminated */
#line 640 "prog_type.m"
                  {
#line 640 "prog_type.m"
                    MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_42;

#line 640 "prog_type.m"
                    parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 640 "prog_type.m"
                  }
#line 640 "prog_type.m"
                  continue;
#line 639 "prog_type.m"
                }
#line 622 "prog_type.m"
                break;
#line 622 "prog_type.m"
            }
#line 622 "prog_type.m"
            break;
#line 622 "prog_type.m"
        }
#line 622 "prog_type.m"
      }
#line 622 "prog_type.m"
      break;
#line 622 "prog_type.m"
    }
#line 620 "prog_type.m"
}

#line 408 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
#line 408 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeInfo_for_T_11,
#line 408 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 408 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 408 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 408 "prog_type.m"
{
#line 1390 "prog_type.m"
  {
#line 1390 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1390 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1390 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1390 "prog_type.m"
    else
#line 1391 "prog_type.m"
      {
#line 1391 "prog_type.m"
        MR_Box parse_tree__prog_type__X_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0));
#line 1391 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1391 "prog_type.m"
        MR_Box parse_tree__prog_type__Y_8;
#line 1391 "prog_type.m"
        MR_Word parse_tree__prog_type__Ys_9;
#line 1394 "prog_type.m"
        MR_Box parse_tree__prog_type__Y0_10;

#line 1392 "prog_type.m"
        {
#line 1392 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__X_6, &parse_tree__prog_type__Y0_10);
        }
#line 1394 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1393 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__Y0_10;
#line 1394 "prog_type.m"
        else
#line 1395 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__X_6;
#line 1397 "prog_type.m"
        {
#line 1397 "prog_type.m"
          parse_tree__prog_type__apply_partial_map_to_list_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Xs_7, &parse_tree__prog_type__Ys_9);
        }
#line 1391 "prog_type.m"
        {
#line 1391 "prog_type.m"
          MR_Word base;
#line 1391 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 1391 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_type__Y_8;
#line 1391 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Ys_9));
#line 1391 "prog_type.m"
        }
#line 1391 "prog_type.m"
      }
#line 1390 "prog_type.m"
  }
#line 408 "prog_type.m"
}

#line 1377 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1377 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1377 "prog_type.m"
{
#line 1377 "prog_type.m"
  {
#line 1377 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1377 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
#line 1377 "prog_type.m"
  }
#line 1377 "prog_type.m"
}

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1378 "prog_type.m"
{
#line 1378 "prog_type.m"
  {
#line 1378 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1378 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28);
#line 1378 "prog_type.m"
    {
#line 1378 "prog_type.m"
      parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(parse_tree__prog_type__env_ptr);
#line 1378 "prog_type.m"
      return;
    }
#line 1378 "prog_type.m"
  }
#line 1378 "prog_type.m"
}

#line 1377 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1377 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1377 "prog_type.m"
{
#line 1377 "prog_type.m"
  {
#line 1377 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1377 "prog_type.m"
    {
#line 1380 "prog_type.m"
      MR_Word parse_tree__prog_type__V_29_29;
#line 1380 "prog_type.m"
      MR_Word parse_tree__prog_type__V_30_30;

#line 1380 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_mktag((MR_Integer) 0)));
#line 1380 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1380 "prog_type.m"
        {
#line 1380 "prog_type.m"
          parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0)));
#line 1380 "prog_type.m"
          parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1)));
#line 1380 "prog_type.m"
        }
#line 1379 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1379 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1379 "prog_type.m"
        {
#line 1379 "prog_type.m"
          parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(parse_tree__prog_type__env_ptr);
#line 1379 "prog_type.m"
          return;
        }
#line 1377 "prog_type.m"
    }
#line 1377 "prog_type.m"
  }
#line 1377 "prog_type.m"
}

#line 1377 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1377 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1377 "prog_type.m"
{
#line 1377 "prog_type.m"
  {
#line 1377 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1377 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
#line 1377 "prog_type.m"
      {
#line 1377 "prog_type.m"
        {
#line 1378 "prog_type.m"
          {
#line 1378 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 1377 "prog_type.m"
        }
#line 1377 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
#line 1377 "prog_type.m"
      }
#line 1377 "prog_type.m"
    else
#line 1377 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1377 "prog_type.m"
  }
#line 1377 "prog_type.m"
}

#line 400 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0(
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__TVarSet_9,
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__ExistQVars_10,
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__ActualArgTypes_11,
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_12,
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__CalleeTVarSet_13,
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__PredKindMap_14,
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__PredExistQVars_15,
#line 400 "prog_type.m"
  MR_Word parse_tree__prog_type__PredArgTypes_16)
#line 400 "prog_type.m"
{
#line 400 "prog_type.m"
  {
#line 400 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s parse_tree__prog_type__env;

#line 1337 "prog_type.m"
    {
#line 1337 "prog_type.m"
      MR_Word parse_tree__prog_type__Renaming_18;
#line 1337 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentKindMap_19;
#line 1337 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentArgTypes_20;
#line 1337 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentExistQVars_21;
#line 1337 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentToActualSubst_22;
#line 1339 "prog_type.m"
      MR_Word parse_tree__prog_type___TVarSet1_17;

#line 1339 "prog_type.m"
      {
#line 1339 "prog_type.m"
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(parse_tree__prog_type__TVarSet_9, parse_tree__prog_type__CalleeTVarSet_13, &parse_tree__prog_type___TVarSet1_17, &parse_tree__prog_type__Renaming_18);
      }
#line 1340 "prog_type.m"
      {
#line 1340 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredKindMap_14, &parse_tree__prog_type__ParentKindMap_19);
      }
#line 1342 "prog_type.m"
      {
#line 1342 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredArgTypes_16, &parse_tree__prog_type__ParentArgTypes_20);
      }
#line 1344 "prog_type.m"
      {
#line 1344 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredExistQVars_15, &parse_tree__prog_type__ParentExistQVars_21);
      }
#line 1360 "prog_type.m"
      if ((parse_tree__prog_type__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1359 "prog_type.m"
        {
#line 1359 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, &parse_tree__prog_type__ParentToActualSubst_22);
        }
#line 1360 "prog_type.m"
      else
#line 1361 "prog_type.m"
        {
#line 1361 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 1365 "prog_type.m"
          {
#line 1365 "prog_type.m"
            parse_tree__prog_type__V_31_31 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 1364 "prog_type.m"
          {
#line 1364 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, parse_tree__prog_type__HeadTypeParams_12, parse_tree__prog_type__V_31_31, &parse_tree__prog_type__ParentToActualSubst_22);
          }
#line 1361 "prog_type.m"
        }
#line 1337 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1373 "prog_type.m"
        {
#line 1373 "prog_type.m"
          if ((parse_tree__prog_type__ParentExistQVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1371 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1373 "prog_type.m"
          else
#line 1374 "prog_type.m"
            {
#line 1375 "prog_type.m"
              {
#line 1375 "prog_type.m"
                parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(parse_tree__prog_type__ParentKindMap_19, parse_tree__prog_type__ParentToActualSubst_22, parse_tree__prog_type__ParentExistQVars_21, &(parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
              }
#line 1377 "prog_type.m"
              {
#line 1377 "prog_type.m"
                parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(&parse_tree__prog_type__env);
              }
#line 1377 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1374 "prog_type.m"
            }
#line 1373 "prog_type.m"
        }
#line 1337 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1337 "prog_type.m"
    }
#line 400 "prog_type.m"
  }
#line 400 "prog_type.m"
}

#line 389 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_subsumes_det_3_p_0(
#line 389 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 389 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 389 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 389 "prog_type.m"
{
#line 1332 "prog_type.m"
  {
#line 1332 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1332 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1330 "prog_type.m"
    {
#line 1330 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1332 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1331 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1332 "prog_type.m"
    else
#line 1333 "prog_type.m"
      {
#line 1333 "prog_type.m"
        {
#line 1333 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
#line 1333 "prog_type.m"
          return;
        }
#line 1333 "prog_type.m"
      }
#line 1332 "prog_type.m"
  }
#line 389 "prog_type.m"
}

#line 384 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_subsumes_3_p_0(
#line 384 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 384 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 384 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 384 "prog_type.m"
{
#line 1322 "prog_type.m"
  {
#line 1322 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1322 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
#line 1322 "prog_type.m"
    MR_Word parse_tree__prog_type__TypesBVars_7;
#line 1322 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubst0_8;
#line 1322 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_13;
#line 1322 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_14;

#line 643 "prog_type.m"
    {
#line 643 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__TypesB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 7087 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 644 "prog_type.m"
    {
#line 644 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 645 "prog_type.m"
    {
#line 645 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypesBVars_7);
    }
#line 1326 "prog_type.m"
    {
#line 1326 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1327 "prog_type.m"
    {
#line 1327 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, parse_tree__prog_type__TypesBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1322 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1322 "prog_type.m"
  }
#line 384 "prog_type.m"
}

#line 378 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_subsumes_det_3_p_0(
#line 378 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeA_4,
#line 378 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeB_5,
#line 378 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 378 "prog_type.m"
{
#line 1318 "prog_type.m"
  {
#line 1318 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1318 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1316 "prog_type.m"
    {
#line 1316 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1318 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1317 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1318 "prog_type.m"
    else
#line 1319 "prog_type.m"
      {
#line 1319 "prog_type.m"
        {
#line 1319 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_subsumes_det\'/3", (MR_String) "type_subsumes failed");
#line 1319 "prog_type.m"
          return;
        }
#line 1319 "prog_type.m"
      }
#line 1318 "prog_type.m"
  }
#line 378 "prog_type.m"
}

#line 374 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_subsumes_3_p_0(
#line 374 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeA_4,
#line 374 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeB_5,
#line 374 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 374 "prog_type.m"
{
#line 1308 "prog_type.m"
  {
#line 1308 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1308 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
#line 1308 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeBVars_7;
#line 1308 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubst0_8;
#line 1308 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_13;
#line 1308 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_14;

#line 616 "prog_type.m"
    {
#line 616 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__TypeB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 7192 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 617 "prog_type.m"
    {
#line 617 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 618 "prog_type.m"
    {
#line 618 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypeBVars_7);
    }
#line 1312 "prog_type.m"
    {
#line 1312 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1313 "prog_type.m"
    {
#line 1313 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, parse_tree__prog_type__TypeBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1308 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1308 "prog_type.m"
  }
#line 374 "prog_type.m"
}

#line 367 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_list_5_p_0(
#line 367 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 367 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 367 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3,
#line 367 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4,
#line 367 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_5)
#line 367 "prog_type.m"
{
#line 1248 "prog_type.m"
  while (MR_TRUE)
#line 1248 "prog_type.m"
    {
#line 1248 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1248 "prog_type.m"
      {
#line 1248 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1248 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "prog_type.m"
          {
#line 1248 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1248 "prog_type.m"
              {
#line 1248 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_5 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4;
#line 1248 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1248 "prog_type.m"
              }
#line 1248 "prog_type.m"
          }
#line 1248 "prog_type.m"
        else
#line 1249 "prog_type.m"
          {
#line 1249 "prog_type.m"
            MR_Word parse_tree__prog_type__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1249 "prog_type.m"
            MR_Word parse_tree__prog_type__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1249 "prog_type.m"
            MR_Word parse_tree__prog_type__Y_12;
#line 1249 "prog_type.m"
            MR_Word parse_tree__prog_type__Ys_13;
#line 1249 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1249 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1249 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1249 "prog_type.m"
              {
#line 1249 "prog_type.m"
                parse_tree__prog_type__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1249 "prog_type.m"
                parse_tree__prog_type__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1250 "prog_type.m"
                {
#line 1250 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__X_10, parse_tree__prog_type__Y_12, parse_tree__prog_type__HeadVar__3_3, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                }
#line 1249 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1251 "prog_type.m"
                  {
#line 1251 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1251 "prog_type.m"
                    {
#line 1251 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_11;
#line 1251 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__Ys_13;
#line 1251 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1251 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 1251 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1251 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1251 "prog_type.m"
                    }
#line 1251 "prog_type.m"
                    continue;
#line 1251 "prog_type.m"
                  }
#line 1249 "prog_type.m"
              }
#line 1249 "prog_type.m"
          }
#line 1248 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1248 "prog_type.m"
      }
#line 1248 "prog_type.m"
      break;
#line 1248 "prog_type.m"
    }
#line 367 "prog_type.m"
}

#line 364 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_5_p_0(
#line 364 "prog_type.m"
  MR_Word parse_tree__prog_type__X_6,
#line 364 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_7,
#line 364 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 364 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14,
#line 364 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_15)
#line 364 "prog_type.m"
{
#line 1018 "prog_type.m"
  {
#line 1018 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 0)));
#line 1018 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1016 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 1016 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1016 "prog_type.m"
      {
#line 1016 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 0)));
#line 1016 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 1)));
#line 1017 "prog_type.m"
        {
#line 1017 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_10, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
        }
#line 1016 "prog_type.m"
      }
#line 1016 "prog_type.m"
    else
#line 1020 "prog_type.m"
      {
#line 1020 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_12;
#line 1018 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 1018 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 0)));
#line 1018 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1018 "prog_type.m"
          {
#line 1018 "prog_type.m"
            parse_tree__prog_type__VarY_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
#line 1018 "prog_type.m"
            parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
#line 1019 "prog_type.m"
            {
#line 1019 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_12, parse_tree__prog_type__X_6, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
            }
#line 1018 "prog_type.m"
          }
#line 1018 "prog_type.m"
        else
#line 1022 "prog_type.m"
          {
#line 1022 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1020 "prog_type.m"
            {
#line 1020 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_nonvar_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
            }
#line 1022 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1022 "prog_type.m"
              {
#line 1022 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_15 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;
#line 1022 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1022 "prog_type.m"
              }
#line 1022 "prog_type.m"
            else
#line 1025 "prog_type.m"
              {
#line 1025 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_special_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
              }
#line 1022 "prog_type.m"
          }
#line 1020 "prog_type.m"
      }
#line 1018 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1018 "prog_type.m"
  }
#line 364 "prog_type.m"
}

#line 353 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type___TypeCtor_10,
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 353 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 353 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 353 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 353 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 353 "prog_type.m"
{
#line 986 "prog_type.m"
  {
#line 986 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 986 "prog_type.m"
    {
#line 986 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(parse_tree__prog_type__Globals_9, parse_tree__prog_type__ReserveTagPragma_11, parse_tree__prog_type__Ctors_12, parse_tree__prog_type__MaybeUserEqCmp_13, parse_tree__prog_type__SingleFunctorName_14, parse_tree__prog_type__SingleArgType_15, parse_tree__prog_type__MaybeSingleArgName_16);
    }
#line 986 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 986 "prog_type.m"
  }
#line 353 "prog_type.m"
}

#line 970 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 970 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 970 "prog_type.m"
{
#line 970 "prog_type.m"
  {
#line 970 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 970 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0, 1);
#line 970 "prog_type.m"
  }
#line 970 "prog_type.m"
}

#line 971 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 971 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 971 "prog_type.m"
{
#line 971 "prog_type.m"
  {
#line 971 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 971 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8);
#line 971 "prog_type.m"
    {
#line 971 "prog_type.m"
      parse_tree__prog_type__du_type_is_enum_2_p_0_2(parse_tree__prog_type__env_ptr);
#line 971 "prog_type.m"
      return;
    }
#line 971 "prog_type.m"
  }
#line 971 "prog_type.m"
}

#line 970 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 970 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 970 "prog_type.m"
{
#line 970 "prog_type.m"
  {
#line 970 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 970 "prog_type.m"
    {
#line 974 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 0)));
#line 974 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 1)));
#line 974 "prog_type.m"
      MR_Word parse_tree__prog_type__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 3)));
#line 973 "prog_type.m"
      MR_Word parse_tree__prog_type___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 2)));
#line 973 "prog_type.m"
      MR_Integer parse_tree__prog_type___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 4)));
#line 973 "prog_type.m"
      MR_Word parse_tree__prog_type___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 5)));

#line 975 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistQTVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 974 "prog_type.m"
        {
#line 976 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistConstraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "prog_type.m"
          if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 977 "prog_type.m"
            (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "prog_type.m"
        }
#line 972 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 972 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 972 "prog_type.m"
        {
#line 972 "prog_type.m"
          parse_tree__prog_type__du_type_is_enum_2_p_0_1(parse_tree__prog_type__env_ptr);
#line 972 "prog_type.m"
          return;
        }
#line 970 "prog_type.m"
    }
#line 970 "prog_type.m"
  }
#line 970 "prog_type.m"
}

#line 970 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 970 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 970 "prog_type.m"
{
#line 970 "prog_type.m"
  {
#line 970 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 970 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0) == 0)
#line 970 "prog_type.m"
      {
#line 970 "prog_type.m"
        {
#line 971 "prog_type.m"
          {
#line 971 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, parse_tree__prog_type__du_type_is_enum_2_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 970 "prog_type.m"
        }
#line 970 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_FALSE;
#line 970 "prog_type.m"
      }
#line 970 "prog_type.m"
    else
#line 970 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 970 "prog_type.m"
  }
#line 970 "prog_type.m"
}

#line 343 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0(
#line 343 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_3,
#line 343 "prog_type.m"
  MR_Integer * parse_tree__prog_type__NumBits_4)
#line 343 "prog_type.m"
{
#line 343 "prog_type.m"
  {
#line 343 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s parse_tree__prog_type__env;

#line 343 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3 = parse_tree__prog_type__Ctors_3;
#line 968 "prog_type.m"
    {
#line 968 "prog_type.m"
      MR_Word parse_tree__prog_type__TypeCtorInfo_18_18;
#line 968 "prog_type.m"
      MR_Integer parse_tree__prog_type__NumFunctors_15;
#line 968 "prog_type.m"
      MR_Word parse_tree__prog_type__V_16_16;
#line 969 "prog_type.m"
      MR_Word parse_tree__prog_type__V_5_5;
#line 969 "prog_type.m"
      MR_Word parse_tree__prog_type__V_6_6;
#line 969 "prog_type.m"
      MR_Word parse_tree__prog_type__V_7_7;

#line 969 "prog_type.m"
      (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3)) == (MR_mktag((MR_Integer) 1)));
#line 969 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 969 "prog_type.m"
        {
#line 969 "prog_type.m"
          parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 0)));
#line 969 "prog_type.m"
          parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 1)));
#line 969 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 969 "prog_type.m"
          if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 969 "prog_type.m"
            {
#line 969 "prog_type.m"
              parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_16_16, (MR_Integer) 0)));
#line 969 "prog_type.m"
              parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_16_16, (MR_Integer) 1)));
#line 970 "prog_type.m"
              {
#line 970 "prog_type.m"
                parse_tree__prog_type__du_type_is_enum_2_p_0_4(&parse_tree__prog_type__env);
              }
#line 970 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 968 "prog_type.m"
              if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 968 "prog_type.m"
                {
#line 7684 "parse_tree.prog_type.c"
                  parse_tree__prog_type__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 979 "prog_type.m"
                  {
#line 979 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_18_18, (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, &parse_tree__prog_type__NumFunctors_15);
                  }
#line 980 "prog_type.m"
                  {
#line 980 "prog_type.m"
                    mercury__int__log2_2_p_0(parse_tree__prog_type__NumFunctors_15, parse_tree__prog_type__NumBits_4);
                  }
#line 980 "prog_type.m"
                  (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 968 "prog_type.m"
                }
#line 969 "prog_type.m"
            }
#line 969 "prog_type.m"
        }
#line 968 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 968 "prog_type.m"
    }
#line 343 "prog_type.m"
  }
#line 343 "prog_type.m"
}

#line 338 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_constructors_are_type_info_1_p_0(
#line 338 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_2)
#line 338 "prog_type.m"
{
#line 929 "prog_type.m"
  {
#line 929 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_2)) == (MR_mktag((MR_Integer) 1)));
#line 929 "prog_type.m"
    MR_Word parse_tree__prog_type__Ctor_3;
#line 929 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_10;
#line 929 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_11;
#line 929 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 929 "prog_type.m"
    MR_Word parse_tree__prog_type__V_17_17;
#line 929 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 929 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_20_20;
#line 929 "prog_type.m"
    MR_String parse_tree__prog_type__Name_22;
#line 938 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_12;
#line 938 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_15;
#line 939 "prog_type.m"
    MR_Word parse_tree__prog_type__V_18_18;
#line 961 "prog_type.m"
    MR_Integer parse_tree__prog_type__lo_0;
#line 961 "prog_type.m"
    MR_Integer parse_tree__prog_type__hi_1;
#line 961 "prog_type.m"
    MR_Integer parse_tree__prog_type__mid_2;
#line 961 "prog_type.m"
    MR_Integer parse_tree__prog_type__result_3;

#line 937 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 937 "prog_type.m"
      {
#line 937 "prog_type.m"
        parse_tree__prog_type__SingleCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 0)));
#line 937 "prog_type.m"
        parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 1)));
#line 937 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 929 "prog_type.m"
          {
#line 938 "prog_type.m"
            parse_tree__prog_type__ExistQVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 0)));
#line 938 "prog_type.m"
            parse_tree__prog_type___Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 1)));
#line 938 "prog_type.m"
            parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 2)));
#line 938 "prog_type.m"
            parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 3)));
#line 938 "prog_type.m"
            parse_tree__prog_type__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 4)));
#line 938 "prog_type.m"
            parse_tree__prog_type___Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 5)));
#line 939 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 939 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 939 "prog_type.m"
              {
#line 939 "prog_type.m"
                parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 939 "prog_type.m"
                parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 1)));
#line 939 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 929 "prog_type.m"
                  {
#line 939 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_20_20 == (MR_Integer) 1);
#line 929 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 929 "prog_type.m"
                      {
#line 940 "prog_type.m"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 929 "prog_type.m"
                          {
#line 955 "prog_type.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_type__Ctor_3)) == (MR_mktag((MR_Integer) 1))))
#line 956 "prog_type.m"
                              {
#line 956 "prog_type.m"
                                MR_Word parse_tree__prog_type__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 956 "prog_type.m"
                                MR_Word parse_tree__prog_type__V_26_26;

#line 956 "prog_type.m"
                                parse_tree__prog_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 1)));
#line 957 "prog_type.m"
                                {
#line 957 "prog_type.m"
                                  parse_tree__prog_type__V_26_26 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                                }
#line 957 "prog_type.m"
                                {
#line 957 "prog_type.m"
                                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_24, parse_tree__prog_type__V_26_26);
                                }
#line 956 "prog_type.m"
                              }
#line 955 "prog_type.m"
                            else
#line 955 "prog_type.m"
                              {
#line 955 "prog_type.m"
                                parse_tree__prog_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 955 "prog_type.m"
                                parse_tree__prog_type__succeeded = MR_TRUE;
#line 955 "prog_type.m"
                              }
#line 929 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 929 "prog_type.m"
                              {
#line 961 "prog_type.m"
                                /* binary string simple lookup switch */
#line 961 "prog_type.m"
                                parse_tree__prog_type__lo_0 = (MR_Integer) 0;
#line 961 "prog_type.m"
                                parse_tree__prog_type__hi_1 = (MR_Integer) 3;
#line 961 "prog_type.m"
                                do
#line 961 "prog_type.m"
                                  {
#line 961 "prog_type.m"
                                    parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
#line 961 "prog_type.m"
                                    parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_22, ((&parse_tree__prog_type_vector_common_5[8 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
#line 961 "prog_type.m"
                                    if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
#line 961 "prog_type.m"
                                      {
#line 961 "prog_type.m"
                                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 961 "prog_type.m"
                                        /* jump out of search loop */
#line 961 "prog_type.m"
                                        goto label_0;
#line 961 "prog_type.m"
                                      }
#line 961 "prog_type.m"
                                    else
#line 961 "prog_type.m"
                                    if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
#line 961 "prog_type.m"
                                      parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
#line 961 "prog_type.m"
                                    else
#line 961 "prog_type.m"
                                      parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
#line 961 "prog_type.m"
                                  }
#line 961 "prog_type.m"
                                while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
#line 961 "prog_type.m"
                                parse_tree__prog_type__succeeded = MR_FALSE;
#line 961 "prog_type.m"
                              label_0:;
#line 929 "prog_type.m"
                              }
#line 929 "prog_type.m"
                          }
#line 929 "prog_type.m"
                      }
#line 929 "prog_type.m"
                  }
#line 939 "prog_type.m"
              }
#line 929 "prog_type.m"
          }
#line 937 "prog_type.m"
      }
#line 929 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 929 "prog_type.m"
  }
#line 338 "prog_type.m"
}

#line 315 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__qualify_cons_id_4_p_0(
#line 315 "prog_type.m"
  MR_Word parse_tree__prog_type__Args_5,
#line 315 "prog_type.m"
  MR_Word parse_tree__prog_type__ConsId0_6,
#line 315 "prog_type.m"
  MR_Word * parse_tree__prog_type__ConsId_7,
#line 315 "prog_type.m"
  MR_Word * parse_tree__prog_type__InstConsId_8)
#line 315 "prog_type.m"
{
#line 887 "prog_type.m"
  {
#line 887 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 887 "prog_type.m"
#line 887 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) {
#line 887 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 887 "prog_type.m"
      case (MR_Integer) 0:
#line 903 "prog_type.m"
        {
#line 903 "prog_type.m"
          MR_Integer parse_tree__prog_type__V_41_41;
#line 903 "prog_type.m"
          MR_Word parse_tree__prog_type__PrivateBuiltin_62;
#line 903 "prog_type.m"
          MR_Word parse_tree__prog_type__TypeCtor_63;
#line 903 "prog_type.m"
          MR_Word parse_tree__prog_type__V_64_64;

#line 904 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 905 "prog_type.m"
          {
#line 905 "prog_type.m"
            parse_tree__prog_type__V_41_41 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
#line 879 "prog_type.m"
          {
#line 879 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_62 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 880 "prog_type.m"
          {
#line 880 "prog_type.m"
            parse_tree__prog_type__TypeCtor_63 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 881 "prog_type.m"
          {
#line 881 "prog_type.m"
            parse_tree__prog_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_62));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
#line 881 "prog_type.m"
          }
#line 881 "prog_type.m"
          {
#line 881 "prog_type.m"
            MR_Word base;
#line 881 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = base;
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_64_64));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_41_41));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_63));
#line 881 "prog_type.m"
          }
#line 903 "prog_type.m"
        }
#line 887 "prog_type.m"
        break;
#line 887 "prog_type.m"
      case (MR_Integer) 1:
#line 898 "prog_type.m"
        {
#line 898 "prog_type.m"
          MR_Integer parse_tree__prog_type__V_43_43;
#line 898 "prog_type.m"
          MR_Word parse_tree__prog_type__PrivateBuiltin_54;
#line 898 "prog_type.m"
          MR_Word parse_tree__prog_type__TypeCtor_55;
#line 898 "prog_type.m"
          MR_Word parse_tree__prog_type__V_56_56;

#line 899 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 901 "prog_type.m"
          {
#line 901 "prog_type.m"
            parse_tree__prog_type__V_43_43 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
#line 879 "prog_type.m"
          {
#line 879 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_54 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 880 "prog_type.m"
          {
#line 880 "prog_type.m"
            parse_tree__prog_type__TypeCtor_55 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 881 "prog_type.m"
          {
#line 881 "prog_type.m"
            parse_tree__prog_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_54));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 1) = ((MR_Box) ((MR_String) "type_info"));
#line 881 "prog_type.m"
          }
#line 881 "prog_type.m"
          {
#line 881 "prog_type.m"
            MR_Word base;
#line 881 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = base;
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_56_56));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 881 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_55));
#line 881 "prog_type.m"
          }
#line 898 "prog_type.m"
        }
#line 887 "prog_type.m"
        break;
#line 887 "prog_type.m"
      case (MR_Integer) 2:
#line 922 "prog_type.m"
        {
#line 923 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 924 "prog_type.m"
          *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
#line 922 "prog_type.m"
        }
#line 887 "prog_type.m"
        break;
#line 887 "prog_type.m"
      case (MR_Integer) 3:
#line 887 "prog_type.m"
#line 887 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 0)))) {
#line 887 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 887 "prog_type.m"
          case (MR_Integer) 0:
#line 887 "prog_type.m"
          case (MR_Integer) 1:
#line 887 "prog_type.m"
          case (MR_Integer) 3:
#line 887 "prog_type.m"
          case (MR_Integer) 4:
#line 887 "prog_type.m"
          case (MR_Integer) 5:
#line 887 "prog_type.m"
          case (MR_Integer) 6:
#line 887 "prog_type.m"
          case (MR_Integer) 7:
#line 887 "prog_type.m"
          case (MR_Integer) 8:
#line 887 "prog_type.m"
          case (MR_Integer) 9:
#line 887 "prog_type.m"
          case (MR_Integer) 10:
#line 887 "prog_type.m"
          case (MR_Integer) 11:
#line 887 "prog_type.m"
          case (MR_Integer) 12:
#line 887 "prog_type.m"
          case (MR_Integer) 13:
#line 887 "prog_type.m"
          case (MR_Integer) 14:
#line 922 "prog_type.m"
            {
#line 923 "prog_type.m"
              *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 924 "prog_type.m"
              *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
#line 922 "prog_type.m"
            }
#line 887 "prog_type.m"
            break;
#line 887 "prog_type.m"
          case (MR_Integer) 2:
#line 887 "prog_type.m"
            {
#line 887 "prog_type.m"
              MR_Word parse_tree__prog_type__Name0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 1)));
#line 887 "prog_type.m"
              MR_Integer parse_tree__prog_type__OrigArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 2)));
#line 887 "prog_type.m"
              MR_Word parse_tree__prog_type__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 3)));
#line 893 "prog_type.m"
              MR_Word parse_tree__prog_type__TypeModule_12;
#line 888 "prog_type.m"
              MR_Word parse_tree__prog_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 0)));
#line 888 "prog_type.m"
              MR_Integer parse_tree__prog_type__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 1)));
#line 888 "prog_type.m"
              MR_String parse_tree__prog_type__V_13_13;

#line 888 "prog_type.m"
              parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 888 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 888 "prog_type.m"
                {
#line 888 "prog_type.m"
                  parse_tree__prog_type__TypeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 0)));
#line 888 "prog_type.m"
                  parse_tree__prog_type__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 1)));
#line 889 "prog_type.m"
                  {
#line 889 "prog_type.m"
                    MR_String parse_tree__prog_type__UnqualName_15;
#line 889 "prog_type.m"
                    MR_Word parse_tree__prog_type__Name_16;
#line 889 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_45_45;

#line 889 "prog_type.m"
                    {
#line 889 "prog_type.m"
                      parse_tree__prog_type__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__Name0_9);
                    }
#line 890 "prog_type.m"
                    {
#line 890 "prog_type.m"
                      parse_tree__prog_type__Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 0) = ((MR_Box) (parse_tree__prog_type__TypeModule_12));
#line 890 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 1) = ((MR_Box) (parse_tree__prog_type__UnqualName_15));
#line 890 "prog_type.m"
                    }
#line 891 "prog_type.m"
                    {
#line 891 "prog_type.m"
                      MR_Word base;
#line 891 "prog_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 891 "prog_type.m"
                      *parse_tree__prog_type__ConsId_7 = base;
#line 891 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 891 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 891 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 891 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_11));
#line 891 "prog_type.m"
                    }
#line 892 "prog_type.m"
                    {
#line 892 "prog_type.m"
                      parse_tree__prog_type__V_45_45 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                    }
#line 892 "prog_type.m"
                    {
#line 892 "prog_type.m"
                      MR_Word base;
#line 892 "prog_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_type.m"
                      *parse_tree__prog_type__InstConsId_8 = base;
#line 892 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 892 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 892 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 892 "prog_type.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 892 "prog_type.m"
                    }
#line 889 "prog_type.m"
                  }
#line 888 "prog_type.m"
                }
#line 888 "prog_type.m"
              else
#line 894 "prog_type.m"
                {
#line 894 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_46_46;

#line 894 "prog_type.m"
                  *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 895 "prog_type.m"
                  {
#line 895 "prog_type.m"
                    parse_tree__prog_type__V_46_46 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 895 "prog_type.m"
                  {
#line 895 "prog_type.m"
                    MR_Word base;
#line 895 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 895 "prog_type.m"
                    *parse_tree__prog_type__InstConsId_8 = base;
#line 895 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 895 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name0_9));
#line 895 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 895 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 895 "prog_type.m"
                  }
#line 894 "prog_type.m"
                }
#line 887 "prog_type.m"
            }
#line 887 "prog_type.m"
            break;
#line 887 "prog_type.m"
        }
#line 887 "prog_type.m"
        break;
#line 887 "prog_type.m"
    }
#line 887 "prog_type.m"
  }
#line 315 "prog_type.m"
}

#line 306 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_inst_cons_id_2_f_0(
#line 306 "prog_type.m"
  MR_Word parse_tree__prog_type__Which_4,
#line 306 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5)
#line 306 "prog_type.m"
{
#line 869 "prog_type.m"
  {
#line 869 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 869 "prog_type.m"
    MR_Word parse_tree__prog_type__InstConsId_6;
#line 869 "prog_type.m"
    MR_String parse_tree__prog_type__Symbol_8;
#line 869 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_9;
#line 869 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_10;
#line 869 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 875 "prog_type.m"
    if ((parse_tree__prog_type__Which_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "typeclass_info";
#line 875 "prog_type.m"
    else
#line 874 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "type_info";
#line 879 "prog_type.m"
    {
#line 879 "prog_type.m"
      parse_tree__prog_type__PrivateBuiltin_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 880 "prog_type.m"
    {
#line 880 "prog_type.m"
      parse_tree__prog_type__TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 881 "prog_type.m"
    {
#line 881 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_9));
#line 881 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 1) = ((MR_Box) (parse_tree__prog_type__Symbol_8));
#line 881 "prog_type.m"
    }
#line 881 "prog_type.m"
    {
#line 881 "prog_type.m"
      parse_tree__prog_type__InstConsId_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 881 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 1) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 881 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 2) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 881 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_10));
#line 881 "prog_type.m"
    }
#line 869 "prog_type.m"
    return parse_tree__prog_type__InstConsId_6;
#line 869 "prog_type.m"
  }
#line 306 "prog_type.m"
}

#line 304 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_cons_id_1_f_0(
#line 304 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 304 "prog_type.m"
{
#line 866 "prog_type.m"
  {
#line 866 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 866 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__2_2;

#line 866 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "prog_type.m"
      parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "prog_type.m"
    else
#line 866 "prog_type.m"
      {
#line 866 "prog_type.m"
        MR_Word parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 866 "prog_type.m"
        parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__Ctor_3);
#line 866 "prog_type.m"
      }
#line 866 "prog_type.m"
    return parse_tree__prog_type__HeadVar__2_2;
#line 866 "prog_type.m"
  }
#line 304 "prog_type.m"
}

#line 298 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__make_type_ctor_3_p_0(
#line 298 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 298 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5,
#line 298 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 298 "prog_type.m"
{
#line 862 "prog_type.m"
  {
#line 862 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 862 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 862 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;

#line 862 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 862 "prog_type.m"
      {
#line 862 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 862 "prog_type.m"
        {
#line 862 "prog_type.m"
          parse_tree__prog_type__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 862 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 862 "prog_type.m"
        }
#line 862 "prog_type.m"
        {
#line 862 "prog_type.m"
          MR_Word base;
#line 862 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 862 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_6_6));
#line 862 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 862 "prog_type.m"
        }
#line 862 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 862 "prog_type.m"
      }
#line 862 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 862 "prog_type.m"
  }
#line 298 "prog_type.m"
}

#line 257 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__add_new_prefix_2_p_0(
#line 257 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 257 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 257 "prog_type.m"
{
#line 855 "prog_type.m"
  {
#line 855 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 855 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 857 "prog_type.m"
      {
#line 857 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 857 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 857 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 858 "prog_type.m"
        {
#line 858 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_7, &parse_tree__prog_type__Name_8);
        }
#line 857 "prog_type.m"
        {
#line 857 "prog_type.m"
          MR_Word base;
#line 857 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 857 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 857 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 857 "prog_type.m"
        }
#line 857 "prog_type.m"
      }
#line 855 "prog_type.m"
    else
#line 855 "prog_type.m"
      {
#line 855 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 855 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 856 "prog_type.m"
        {
#line 856 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_3, &parse_tree__prog_type__Name_4);
        }
#line 855 "prog_type.m"
        {
#line 855 "prog_type.m"
          MR_Word base;
#line 855 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 855 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 855 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 855 "prog_type.m"
        }
#line 855 "prog_type.m"
      }
#line 855 "prog_type.m"
  }
#line 257 "prog_type.m"
}

#line 251 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__remove_new_prefix_2_p_0(
#line 251 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 251 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 251 "prog_type.m"
{
#line 850 "prog_type.m"
  {
#line 850 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 850 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 852 "prog_type.m"
      {
#line 852 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 852 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 852 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 853 "prog_type.m"
        {
#line 853 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_8, parse_tree__prog_type__Name0_7);
        }
#line 852 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 852 "prog_type.m"
          {
#line 852 "prog_type.m"
            {
#line 852 "prog_type.m"
              MR_Word base;
#line 852 "prog_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 852 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 852 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 852 "prog_type.m"
            }
#line 852 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 852 "prog_type.m"
          }
#line 852 "prog_type.m"
      }
#line 850 "prog_type.m"
    else
#line 850 "prog_type.m"
      {
#line 850 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 850 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 851 "prog_type.m"
        {
#line 851 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_4, parse_tree__prog_type__Name0_3);
        }
#line 850 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 850 "prog_type.m"
          {
#line 850 "prog_type.m"
            {
#line 850 "prog_type.m"
              MR_Word base;
#line 850 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 850 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 850 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 850 "prog_type.m"
            }
#line 850 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 850 "prog_type.m"
          }
#line 850 "prog_type.m"
      }
#line 850 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 850 "prog_type.m"
  }
#line 251 "prog_type.m"
}

#line 244 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(
#line 244 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtorCat_3)
#line 244 "prog_type.m"
{
#line 841 "prog_type.m"
  {
#line 841 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 841 "prog_type.m"
    MR_Word parse_tree__prog_type__IsIntroduced_4;

#line 841 "prog_type.m"
#line 841 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__TypeCtorCat_3)) {
#line 841 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_type.m"
      case (MR_Integer) 0:
#line 842 "prog_type.m"
        parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 841 "prog_type.m"
        break;
#line 841 "prog_type.m"
      case (MR_Integer) 1:
#line 841 "prog_type.m"
      case (MR_Integer) 2:
#line 842 "prog_type.m"
        parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 841 "prog_type.m"
        break;
#line 841 "prog_type.m"
      case (MR_Integer) 3:
#line 841 "prog_type.m"
#line 841 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeCtorCat_3, (MR_Integer) 0)))) {
#line 841 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_type.m"
          case (MR_Integer) 0:
#line 845 "prog_type.m"
            parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 1;
#line 841 "prog_type.m"
            break;
#line 841 "prog_type.m"
          case (MR_Integer) 1:
#line 842 "prog_type.m"
            parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 841 "prog_type.m"
            break;
#line 841 "prog_type.m"
        }
#line 841 "prog_type.m"
        break;
#line 841 "prog_type.m"
    }
#line 841 "prog_type.m"
    return parse_tree__prog_type__IsIntroduced_4;
#line 841 "prog_type.m"
  }
#line 244 "prog_type.m"
}

#line 242 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_ctor_1_p_0(
#line 242 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_2)
#line 242 "prog_type.m"
{
#line 822 "prog_type.m"
  {
#line 822 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 822 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_3;
#line 822 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 822 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 0)));
#line 822 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 1)));
#line 822 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__lo_0;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__hi_1;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__mid_2;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__result_3;

#line 823 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 823 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 823 "prog_type.m"
      {
#line 823 "prog_type.m"
        parse_tree__prog_type__PrivateBuiltin_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 823 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 823 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 822 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
          {
#line 824 "prog_type.m"
            {
#line 824 "prog_type.m"
              parse_tree__prog_type__V_7_7 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            }
#line 824 "prog_type.m"
            {
#line 824 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_3, parse_tree__prog_type__V_7_7);
            }
#line 822 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
              {
#line 826 "prog_type.m"
                /* binary string simple lookup switch */
#line 826 "prog_type.m"
                parse_tree__prog_type__lo_0 = (MR_Integer) 0;
#line 826 "prog_type.m"
                parse_tree__prog_type__hi_1 = (MR_Integer) 3;
#line 826 "prog_type.m"
                do
#line 826 "prog_type.m"
                  {
#line 826 "prog_type.m"
                    parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
#line 826 "prog_type.m"
                    parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_4, ((&parse_tree__prog_type_vector_common_5[4 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
#line 826 "prog_type.m"
                    if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
#line 826 "prog_type.m"
                      {
#line 826 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 826 "prog_type.m"
                        /* jump out of search loop */
#line 826 "prog_type.m"
                        goto label_0;
#line 826 "prog_type.m"
                      }
#line 826 "prog_type.m"
                    else
#line 826 "prog_type.m"
                    if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
#line 826 "prog_type.m"
                      parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
#line 826 "prog_type.m"
                    else
#line 826 "prog_type.m"
                      parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
#line 826 "prog_type.m"
                  }
#line 826 "prog_type.m"
                while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
#line 826 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_FALSE;
#line 826 "prog_type.m"
              label_0:;
#line 822 "prog_type.m"
              }
#line 822 "prog_type.m"
          }
#line 823 "prog_type.m"
      }
#line 822 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 822 "prog_type.m"
  }
#line 242 "prog_type.m"
}

#line 240 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_1_p_0(
#line 240 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 240 "prog_type.m"
{
#line 818 "prog_type.m"
  {
#line 818 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 818 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 818 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_8;
#line 818 "prog_type.m"
    MR_String parse_tree__prog_type__Name_9;
#line 818 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 818 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_11_11;
#line 818 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;
#line 564 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_6;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__lo_0;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__hi_1;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__mid_2;
#line 826 "prog_type.m"
    MR_Integer parse_tree__prog_type__result_3;

#line 564 "prog_type.m"
    {
#line 564 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type___Args_6);
    }
#line 818 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 818 "prog_type.m"
      {
#line 823 "prog_type.m"
        parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 823 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 823 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 823 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 823 "prog_type.m"
          {
#line 823 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 0)));
#line 823 "prog_type.m"
            parse_tree__prog_type__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 1)));
#line 823 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_11_11 == (MR_Integer) 0);
#line 818 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 818 "prog_type.m"
              {
#line 824 "prog_type.m"
                {
#line 824 "prog_type.m"
                  parse_tree__prog_type__V_12_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
#line 824 "prog_type.m"
                {
#line 824 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_8, parse_tree__prog_type__V_12_12);
                }
#line 818 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 818 "prog_type.m"
                  {
#line 826 "prog_type.m"
                    /* binary string simple lookup switch */
#line 826 "prog_type.m"
                    parse_tree__prog_type__lo_0 = (MR_Integer) 0;
#line 826 "prog_type.m"
                    parse_tree__prog_type__hi_1 = (MR_Integer) 3;
#line 826 "prog_type.m"
                    do
#line 826 "prog_type.m"
                      {
#line 826 "prog_type.m"
                        parse_tree__prog_type__mid_2 = (((parse_tree__prog_type__lo_0 + parse_tree__prog_type__hi_1)) / (MR_Integer) 2);
#line 826 "prog_type.m"
                        parse_tree__prog_type__result_3 = MR_strcmp(parse_tree__prog_type__Name_9, ((&parse_tree__prog_type_vector_common_5[0 + parse_tree__prog_type__mid_2]))->parse_tree__prog_type__vector_common_type_5_0__vct_5_f_0);
#line 826 "prog_type.m"
                        if ((parse_tree__prog_type__result_3 == (MR_Integer) 0))
#line 826 "prog_type.m"
                          {
#line 826 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 826 "prog_type.m"
                            /* jump out of search loop */
#line 826 "prog_type.m"
                            goto label_0;
#line 826 "prog_type.m"
                          }
#line 826 "prog_type.m"
                        else
#line 826 "prog_type.m"
                        if ((parse_tree__prog_type__result_3 < (MR_Integer) 0))
#line 826 "prog_type.m"
                          parse_tree__prog_type__hi_1 = (parse_tree__prog_type__mid_2 - (MR_Integer) 1);
#line 826 "prog_type.m"
                        else
#line 826 "prog_type.m"
                          parse_tree__prog_type__lo_0 = (parse_tree__prog_type__mid_2 + (MR_Integer) 1);
#line 826 "prog_type.m"
                      }
#line 826 "prog_type.m"
                    while ((parse_tree__prog_type__lo_0 <= parse_tree__prog_type__hi_1));
#line 826 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 826 "prog_type.m"
                  label_0:;
#line 818 "prog_type.m"
                  }
#line 818 "prog_type.m"
              }
#line 823 "prog_type.m"
          }
#line 818 "prog_type.m"
      }
#line 818 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 818 "prog_type.m"
  }
#line 240 "prog_type.m"
}

#line 232 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_bitmap_1_p_0(
#line 232 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 232 "prog_type.m"
{
#line 815 "prog_type.m"
  {
#line 815 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 815 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 815 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 815 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 815 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 815 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 816 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 816 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 816 "prog_type.m"
      {
#line 816 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 816 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 816 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 816 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 816 "prog_type.m"
          {
#line 816 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 816 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "bitmap") == 0);
#line 815 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 815 "prog_type.m"
              {
#line 816 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "bitmap") == 0);
#line 815 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 816 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 815 "prog_type.m"
              }
#line 816 "prog_type.m"
          }
#line 816 "prog_type.m"
      }
#line 815 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 815 "prog_type.m"
  }
#line 232 "prog_type.m"
}

#line 230 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_array_1_p_0(
#line 230 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 230 "prog_type.m"
{
#line 813 "prog_type.m"
  {
#line 813 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 813 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 813 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 813 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 813 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 813 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 813 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 813 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 813 "prog_type.m"
      {
#line 813 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 813 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 813 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 813 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 813 "prog_type.m"
          {
#line 813 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 813 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "array") == 0);
#line 813 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 813 "prog_type.m"
              {
#line 813 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "array") == 0);
#line 813 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 813 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 1);
#line 813 "prog_type.m"
              }
#line 813 "prog_type.m"
          }
#line 813 "prog_type.m"
      }
#line 813 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 813 "prog_type.m"
  }
#line 230 "prog_type.m"
}

#line 228 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_io_state_1_p_0(
#line 228 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 228 "prog_type.m"
{
#line 808 "prog_type.m"
  {
#line 808 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 808 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_11_11;
#line 808 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 808 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_4;
#line 808 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 808 "prog_type.m"
    MR_String parse_tree__prog_type__V_7_7;
#line 808 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_8_8;
#line 808 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 808 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;

#line 809 "prog_type.m"
    {
#line 809 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type__V_9_9);
    }
#line 808 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 808 "prog_type.m"
      {
#line 9091 "parse_tree.prog_type.c"
        parse_tree__prog_type__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 809 "prog_type.m"
        {
#line 809 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_11_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 808 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 808 "prog_type.m"
          {
#line 810 "prog_type.m"
            {
#line 810 "prog_type.m"
              parse_tree__prog_type__ModuleName_4 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 811 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 811 "prog_type.m"
            parse_tree__prog_type__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 811 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 811 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 811 "prog_type.m"
              {
#line 811 "prog_type.m"
                parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 811 "prog_type.m"
                parse_tree__prog_type__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 811 "prog_type.m"
                {
#line 811 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_4, parse_tree__prog_type__V_10_10);
                }
#line 808 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 808 "prog_type.m"
                  {
#line 811 "prog_type.m"
                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_7_7, (MR_String) "state") == 0);
#line 808 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 811 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_8_8 == (MR_Integer) 0);
#line 808 "prog_type.m"
                  }
#line 811 "prog_type.m"
              }
#line 808 "prog_type.m"
          }
#line 808 "prog_type.m"
      }
#line 808 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 808 "prog_type.m"
  }
#line 228 "prog_type.m"
}

#line 226 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(
#line 226 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_3)
#line 226 "prog_type.m"
{
#line 788 "prog_type.m"
  {
#line 788 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 788 "prog_type.m"
    MR_Word parse_tree__prog_type__IsBuiltinDummy_4;
#line 788 "prog_type.m"
    MR_Word parse_tree__prog_type__CtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 788 "prog_type.m"
    MR_Integer parse_tree__prog_type__TypeArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 791 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_7;
#line 791 "prog_type.m"
    MR_String parse_tree__prog_type__TypeName_8;
#line 791 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;

#line 791 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 791 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 791 "prog_type.m"
      {
#line 791 "prog_type.m"
        parse_tree__prog_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 791 "prog_type.m"
        parse_tree__prog_type__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 792 "prog_type.m"
        {
#line 792 "prog_type.m"
          parse_tree__prog_type__V_15_15 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        }
#line 792 "prog_type.m"
        {
#line 792 "prog_type.m"
          parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_7, parse_tree__prog_type__V_15_15);
        }
#line 791 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 791 "prog_type.m"
          {
#line 793 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_8, (MR_String) "state") == 0);
#line 791 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 794 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 0);
#line 791 "prog_type.m"
          }
#line 791 "prog_type.m"
      }
#line 797 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 796 "prog_type.m"
      parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 797 "prog_type.m"
    else
#line 804 "prog_type.m"
      {
#line 798 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 798 "prog_type.m"
        MR_String parse_tree__prog_type__V_10_10;
#line 798 "prog_type.m"
        MR_Word parse_tree__prog_type__ModuleName_11;
#line 798 "prog_type.m"
        MR_String parse_tree__prog_type__TypeName_12;
#line 798 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17;

#line 798 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 798 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 798 "prog_type.m"
          {
#line 798 "prog_type.m"
            parse_tree__prog_type__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 798 "prog_type.m"
            parse_tree__prog_type__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 799 "prog_type.m"
            parse_tree__prog_type__V_10_10 = (MR_String) "store";
#line 799 "prog_type.m"
            parse_tree__prog_type__V_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_3[2];
#line 799 "prog_type.m"
            {
#line 799 "prog_type.m"
              parse_tree__prog_type__V_17_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(parse_tree__prog_type__V_9_9);
            }
#line 799 "prog_type.m"
            {
#line 799 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_11, parse_tree__prog_type__V_17_17);
            }
#line 798 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 798 "prog_type.m"
              {
#line 800 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_12, (MR_String) "store") == 0);
#line 798 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 801 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 1);
#line 798 "prog_type.m"
              }
#line 798 "prog_type.m"
          }
#line 804 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 803 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 804 "prog_type.m"
        else
#line 805 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 1;
#line 804 "prog_type.m"
      }
#line 788 "prog_type.m"
    return parse_tree__prog_type__IsBuiltinDummy_4;
#line 788 "prog_type.m"
  }
#line 226 "prog_type.m"
}

#line 215 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
#line 215 "prog_type.m"
{
#line 777 "prog_type.m"
  {
#line 777 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__1_1;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_8_8;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_22_22;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_25_25;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_26_26;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_27_27;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_28_28;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_31_31;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_34_34;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_39_39;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_40_40;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_43_43;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_44_44;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_45_45;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__V_46_46;

#line 778 "prog_type.m"
    {
#line 778 "prog_type.m"
      parse_tree__prog_type__V_4_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 778 "prog_type.m"
    {
#line 778 "prog_type.m"
      parse_tree__prog_type__V_3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 0) = ((MR_Box) (parse_tree__prog_type__V_4_4));
#line 778 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 1) = ((MR_Box) ((MR_String) "int"));
#line 778 "prog_type.m"
    }
#line 778 "prog_type.m"
    {
#line 778 "prog_type.m"
      parse_tree__prog_type__V_2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 0) = ((MR_Box) (parse_tree__prog_type__V_3_3));
#line 778 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 1) = ((MR_Box) ((MR_Integer) 0));
#line 778 "prog_type.m"
    }
#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      parse_tree__prog_type__V_10_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      parse_tree__prog_type__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 0) = ((MR_Box) (parse_tree__prog_type__V_10_10));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 1) = ((MR_Box) ((MR_String) "string"));
#line 779 "prog_type.m"
    }
#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      parse_tree__prog_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 0) = ((MR_Box) (parse_tree__prog_type__V_9_9));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 779 "prog_type.m"
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      parse_tree__prog_type__V_16_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__V_16_16));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) ((MR_String) "character"));
#line 780 "prog_type.m"
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      parse_tree__prog_type__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 0) = ((MR_Box) (parse_tree__prog_type__V_15_15));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 780 "prog_type.m"
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__V_22_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 0) = ((MR_Box) (parse_tree__prog_type__V_22_22));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 1) = ((MR_Box) ((MR_String) "float"));
#line 781 "prog_type.m"
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 0) = ((MR_Box) (parse_tree__prog_type__V_21_21));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 781 "prog_type.m"
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      parse_tree__prog_type__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      parse_tree__prog_type__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 1) = ((MR_Box) ((MR_String) "pred"));
#line 782 "prog_type.m"
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      parse_tree__prog_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 0) = ((MR_Box) (parse_tree__prog_type__V_27_27));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 782 "prog_type.m"
    }
#line 783 "prog_type.m"
    {
#line 783 "prog_type.m"
      parse_tree__prog_type__V_34_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 783 "prog_type.m"
    {
#line 783 "prog_type.m"
      parse_tree__prog_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 0) = ((MR_Box) (parse_tree__prog_type__V_34_34));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 1) = ((MR_Box) ((MR_String) "func"));
#line 783 "prog_type.m"
    }
#line 783 "prog_type.m"
    {
#line 783 "prog_type.m"
      parse_tree__prog_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 0) = ((MR_Box) (parse_tree__prog_type__V_33_33));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 783 "prog_type.m"
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_40_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 0) = ((MR_Box) (parse_tree__prog_type__V_40_40));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 1) = ((MR_Box) ((MR_String) "void"));
#line 784 "prog_type.m"
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 0) = ((MR_Box) (parse_tree__prog_type__V_39_39));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 784 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_46_46 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 0) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 1) = ((MR_Box) ((MR_String) "tuple"));
#line 785 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 785 "prog_type.m"
    }
#line 786 "prog_type.m"
    {
#line 786 "prog_type.m"
      parse_tree__prog_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 0) = ((MR_Box) (parse_tree__prog_type__V_44_44));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 786 "prog_type.m"
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 0) = ((MR_Box) (parse_tree__prog_type__V_38_38));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 1) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 784 "prog_type.m"
    }
#line 783 "prog_type.m"
    {
#line 783 "prog_type.m"
      parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__V_32_32));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 1) = ((MR_Box) (parse_tree__prog_type__V_37_37));
#line 783 "prog_type.m"
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      parse_tree__prog_type__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__V_26_26));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 782 "prog_type.m"
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__V_20_20));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 1) = ((MR_Box) (parse_tree__prog_type__V_25_25));
#line 781 "prog_type.m"
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__V_14_14));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 780 "prog_type.m"
    }
#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      parse_tree__prog_type__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 0) = ((MR_Box) (parse_tree__prog_type__V_8_8));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 779 "prog_type.m"
    }
#line 778 "prog_type.m"
    {
#line 778 "prog_type.m"
      parse_tree__prog_type__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_type__V_2_2));
#line 778 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__prog_type__V_7_7));
#line 778 "prog_type.m"
    }
#line 777 "prog_type.m"
    return parse_tree__prog_type__HeadVar__1_1;
#line 777 "prog_type.m"
  }
#line 215 "prog_type.m"
}

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 762 "prog_type.m"
{
#line 762 "prog_type.m"
  {
#line 762 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 762 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 762 "prog_type.m"
  }
#line 762 "prog_type.m"
}

#line 207 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0(
#line 207 "prog_type.m"
  MR_Word parse_tree__prog_type__Tvars_4,
#line 207 "prog_type.m"
  MR_Word parse_tree__prog_type__Constraints_5,
#line 207 "prog_type.m"
  MR_Word * parse_tree__prog_type__Unconstrained_6)
#line 207 "prog_type.m"
{
#line 768 "prog_type.m"
  {
#line 768 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__ConstrainedTvars_7;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__Unconstrained0_8;
#line 768 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_12;

#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[5], parse_tree__prog_type__Constraints_5, &parse_tree__prog_type__TVarsList_12);
    }
#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_12, &parse_tree__prog_type__ConstrainedTvars_7);
    }
#line 9708 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 770 "prog_type.m"
    {
#line 770 "prog_type.m"
      mercury__list__delete_elems_3_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Tvars_4, parse_tree__prog_type__ConstrainedTvars_7, &parse_tree__prog_type__Unconstrained0_8);
    }
#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Unconstrained0_8, parse_tree__prog_type__Unconstrained_6);
#line 771 "prog_type.m"
      return;
    }
#line 768 "prog_type.m"
  }
#line 207 "prog_type.m"
}

#line 205 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__constraint_get_tvars_2_p_0(
#line 205 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 205 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_5)
#line 205 "prog_type.m"
{
#line 765 "prog_type.m"
  {
#line 765 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_11;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_8;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_9;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type___ClassName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 643 "prog_type.m"
    {
#line 643 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__ArgTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_8);
    }
#line 9756 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 644 "prog_type.m"
    {
#line 644 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__RevTVars_8, &parse_tree__prog_type__TVarsDups_9);
    }
#line 645 "prog_type.m"
    {
#line 645 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__TVarsDups_9, parse_tree__prog_type__TVars_5);
#line 645 "prog_type.m"
      return;
    }
#line 765 "prog_type.m"
  }
#line 205 "prog_type.m"
}

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 762 "prog_type.m"
{
#line 762 "prog_type.m"
  {
#line 762 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 762 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 762 "prog_type.m"
  }
#line 762 "prog_type.m"
}

#line 200 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0(
#line 200 "prog_type.m"
  MR_Word parse_tree__prog_type__Constraints_3,
#line 200 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 200 "prog_type.m"
{
#line 761 "prog_type.m"
  {
#line 761 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 761 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_5;

#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[4], parse_tree__prog_type__Constraints_3, &parse_tree__prog_type__TVarsList_5);
    }
#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_5, parse_tree__prog_type__TVars_4);
#line 763 "prog_type.m"
      return;
    }
#line 761 "prog_type.m"
  }
#line 200 "prog_type.m"
}

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 762 "prog_type.m"
{
#line 762 "prog_type.m"
  {
#line 762 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__conv1_TVars_5;

#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv1_TVars_5);
    }
#line 762 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv1_TVars_5));
#line 762 "prog_type.m"
  }
#line 762 "prog_type.m"
}

#line 762 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 762 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 762 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 762 "prog_type.m"
{
#line 762 "prog_type.m"
  {
#line 762 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 762 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 762 "prog_type.m"
  }
#line 762 "prog_type.m"
}

#line 195 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(
#line 195 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 195 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_5)
#line 195 "prog_type.m"
{
#line 756 "prog_type.m"
  {
#line 756 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 756 "prog_type.m"
    MR_Word parse_tree__prog_type__Univ_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 756 "prog_type.m"
    MR_Word parse_tree__prog_type__Exist_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 756 "prog_type.m"
    MR_Word parse_tree__prog_type__UnivTVars_6;
#line 756 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistTVars_7;
#line 756 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_11;
#line 756 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_20;

#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[2], parse_tree__prog_type__Univ_3, &parse_tree__prog_type__TVarsList_11);
    }
#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_11, &parse_tree__prog_type__UnivTVars_6);
    }
#line 762 "prog_type.m"
    {
#line 762 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[3], parse_tree__prog_type__Exist_4, &parse_tree__prog_type__TVarsList_20);
    }
#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_20, &parse_tree__prog_type__ExistTVars_7);
    }
#line 759 "prog_type.m"
    {
#line 759 "prog_type.m"
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__UnivTVars_6, parse_tree__prog_type__ExistTVars_7, parse_tree__prog_type__TVars_5);
#line 759 "prog_type.m"
      return;
    }
#line 756 "prog_type.m"
  }
#line 195 "prog_type.m"
}

#line 752 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 752 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 752 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 752 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 752 "prog_type.m"
{
#line 752 "prog_type.m"
  {
#line 752 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 752 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_HeadVar__2_2;

#line 752 "prog_type.m"
    {
#line 752 "prog_type.m"
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_HeadVar__2_2);
    }
#line 752 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
#line 752 "prog_type.m"
  }
#line 752 "prog_type.m"
}

#line 190 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(
#line 190 "prog_type.m"
  MR_Word parse_tree__prog_type__Types0_3,
#line 190 "prog_type.m"
  MR_Word * parse_tree__prog_type__Types_4)
#line 190 "prog_type.m"
{
#line 751 "prog_type.m"
  {
#line 751 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 751 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 752 "prog_type.m"
    {
#line 752 "prog_type.m"
      mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_8, parse_tree__prog_type__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_type_scalar_common_2[1], parse_tree__prog_type__Types0_3, parse_tree__prog_type__Types_4);
#line 752 "prog_type.m"
      return;
    }
#line 751 "prog_type.m"
  }
#line 190 "prog_type.m"
}

#line 188 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(
#line 188 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 188 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 188 "prog_type.m"
{
#line 714 "prog_type.m"
  {
#line 714 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 714 "prog_type.m"
#line 714 "prog_type.m"
    switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 714 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 714 "prog_type.m"
      case (MR_Integer) 0:
#line 715 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 714 "prog_type.m"
        break;
#line 714 "prog_type.m"
      case (MR_Integer) 1:
#line 717 "prog_type.m"
        {
#line 717 "prog_type.m"
          MR_Word parse_tree__prog_type__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 717 "prog_type.m"
          MR_Word parse_tree__prog_type__Args0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "prog_type.m"
          MR_Word parse_tree__prog_type__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 717 "prog_type.m"
          MR_Word parse_tree__prog_type__Name_8;
#line 717 "prog_type.m"
          MR_Word parse_tree__prog_type__Args_9;
#line 723 "prog_type.m"
          MR_String parse_tree__prog_type__Name1_11;
#line 719 "prog_type.m"
          MR_Word parse_tree__prog_type__Module_10;
#line 719 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 719 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 719 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 719 "prog_type.m"
            {
#line 719 "prog_type.m"
              parse_tree__prog_type__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 0)));
#line 719 "prog_type.m"
              parse_tree__prog_type__Name1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 1)));
#line 720 "prog_type.m"
              {
#line 720 "prog_type.m"
                parse_tree__prog_type__V_31_31 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 720 "prog_type.m"
              {
#line 720 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__Module_10, parse_tree__prog_type__V_31_31);
              }
#line 719 "prog_type.m"
            }
#line 723 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 722 "prog_type.m"
            {
#line 722 "prog_type.m"
              parse_tree__prog_type__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__Name_8, 0) = ((MR_Box) (parse_tree__prog_type__Name1_11));
#line 722 "prog_type.m"
            }
#line 723 "prog_type.m"
          else
#line 724 "prog_type.m"
            parse_tree__prog_type__Name_8 = parse_tree__prog_type__Name0_5;
#line 726 "prog_type.m"
          {
#line 726 "prog_type.m"
            parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_6, &parse_tree__prog_type__Args_9);
          }
#line 717 "prog_type.m"
          {
#line 717 "prog_type.m"
            MR_Word base;
#line 717 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_type.m"
            *parse_tree__prog_type__HeadVar__2_2 = base;
#line 717 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 717 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_9));
#line 717 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_7));
#line 717 "prog_type.m"
          }
#line 717 "prog_type.m"
        }
#line 714 "prog_type.m"
        break;
#line 714 "prog_type.m"
      case (MR_Integer) 2:
#line 728 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 714 "prog_type.m"
        break;
#line 714 "prog_type.m"
      case (MR_Integer) 3:
#line 714 "prog_type.m"
#line 714 "prog_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 714 "prog_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 714 "prog_type.m"
          case (MR_Integer) 0:
#line 742 "prog_type.m"
            {
#line 742 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 742 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 742 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_23;

#line 743 "prog_type.m"
              {
#line 743 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_21, &parse_tree__prog_type__Args_23);
              }
#line 742 "prog_type.m"
              {
#line 742 "prog_type.m"
                MR_Word base;
#line 742 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 742 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 742 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_23));
#line 742 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_22));
#line 742 "prog_type.m"
              }
#line 742 "prog_type.m"
            }
#line 714 "prog_type.m"
            break;
#line 714 "prog_type.m"
          case (MR_Integer) 1:
#line 731 "prog_type.m"
            {
#line 731 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 731 "prog_type.m"
              MR_Word parse_tree__prog_type__MaybeRet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 731 "prog_type.m"
              MR_Word parse_tree__prog_type__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 731 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_17;
#line 731 "prog_type.m"
              MR_Word parse_tree__prog_type__MaybeRet_18;

#line 732 "prog_type.m"
              {
#line 732 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_13, &parse_tree__prog_type__Args_17);
              }
#line 737 "prog_type.m"
              if ((parse_tree__prog_type__MaybeRet0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "prog_type.m"
                parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "prog_type.m"
              else
#line 734 "prog_type.m"
                {
#line 734 "prog_type.m"
                  MR_Word parse_tree__prog_type__Ret0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet0_14, (MR_Integer) 0)));
#line 734 "prog_type.m"
                  MR_Word parse_tree__prog_type__Ret_20;

#line 735 "prog_type.m"
                  {
#line 735 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Ret0_19, &parse_tree__prog_type__Ret_20);
                  }
#line 736 "prog_type.m"
                  {
#line 736 "prog_type.m"
                    parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 736 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_18, 0) = ((MR_Box) (parse_tree__prog_type__Ret_20));
#line 736 "prog_type.m"
                  }
#line 734 "prog_type.m"
                }
#line 731 "prog_type.m"
              {
#line 731 "prog_type.m"
                MR_Word base;
#line 731 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_17));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__MaybeRet_18));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_15));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 731 "prog_type.m"
              }
#line 731 "prog_type.m"
            }
#line 714 "prog_type.m"
            break;
#line 714 "prog_type.m"
          case (MR_Integer) 2:
#line 745 "prog_type.m"
            {
#line 745 "prog_type.m"
              MR_Word parse_tree__prog_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 745 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 745 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 745 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_27;

#line 746 "prog_type.m"
              {
#line 746 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_25, &parse_tree__prog_type__Args_27);
              }
#line 745 "prog_type.m"
              {
#line 745 "prog_type.m"
                MR_Word base;
#line 745 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 745 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 745 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 745 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_24));
#line 745 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Args_27));
#line 745 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Kind_26));
#line 745 "prog_type.m"
              }
#line 745 "prog_type.m"
            }
#line 714 "prog_type.m"
            break;
#line 714 "prog_type.m"
          case (MR_Integer) 3:
#line 748 "prog_type.m"
            {
#line 748 "prog_type.m"
              MR_Word parse_tree__prog_type__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 748 "prog_type.m"
              MR_Word parse_tree__prog_type__Type_30;

#line 749 "prog_type.m"
              {
#line 749 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Type0_28, &parse_tree__prog_type__Type_30);
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
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 748 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Type_30));
#line 748 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_29));
#line 748 "prog_type.m"
              }
#line 748 "prog_type.m"
            }
#line 714 "prog_type.m"
            break;
#line 714 "prog_type.m"
        }
#line 714 "prog_type.m"
        break;
#line 714 "prog_type.m"
    }
#line 714 "prog_type.m"
  }
#line 188 "prog_type.m"
}

#line 182 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_func_type_5_p_0(
#line 182 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_6,
#line 182 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_8,
#line 182 "prog_type.m"
  MR_Word parse_tree__prog_type__RetType_9,
#line 182 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_10)
#line 182 "prog_type.m"
{
#line 711 "prog_type.m"
  {
#line 711 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 711 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 712 "prog_type.m"
    {
#line 712 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__RetType_9));
#line 712 "prog_type.m"
    }
#line 712 "prog_type.m"
    {
#line 712 "prog_type.m"
      MR_Word base;
#line 712 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_type.m"
      *parse_tree__prog_type__Type_10 = base;
#line 712 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 712 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_8));
#line 712 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 712 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 712 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 712 "prog_type.m"
    }
#line 711 "prog_type.m"
  }
#line 182 "prog_type.m"
}

#line 179 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(
#line 179 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_5,
#line 179 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_7,
#line 179 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_8)
#line 179 "prog_type.m"
{
#line 707 "prog_type.m"
  {
#line 707 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 708 "prog_type.m"
    {
#line 708 "prog_type.m"
      MR_Word base;
#line 708 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_type.m"
      *parse_tree__prog_type__Type_8 = base;
#line 708 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_7));
#line 708 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_5));
#line 708 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 708 "prog_type.m"
    }
#line 707 "prog_type.m"
  }
#line 179 "prog_type.m"
}

#line 176 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_type_5_p_0(
#line 176 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_6,
#line 176 "prog_type.m"
  MR_Word parse_tree__prog_type__PredOrFunc_7,
#line 176 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_9,
#line 176 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_10)
#line 176 "prog_type.m"
{
#line 698 "prog_type.m"
  {
#line 698 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 698 "prog_type.m"
#line 698 "prog_type.m"
    switch (parse_tree__prog_type__PredOrFunc_7) {
#line 698 "prog_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 698 "prog_type.m"
      case (MR_Integer) 1:
#line 701 "prog_type.m"
        {
#line 701 "prog_type.m"
          MR_Word parse_tree__prog_type__FuncArgTypes_11;
#line 701 "prog_type.m"
          MR_Word parse_tree__prog_type__FuncRetType_12;
#line 701 "prog_type.m"
          MR_Word parse_tree__prog_type__V_19_19;
#line 702 "prog_type.m"
          MR_Box parse_tree__prog_type__conv0_FuncRetType_12;

#line 702 "prog_type.m"
          {
#line 702 "prog_type.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_9, &parse_tree__prog_type__FuncArgTypes_11, &parse_tree__prog_type__conv0_FuncRetType_12);
          }
#line 702 "prog_type.m"
          parse_tree__prog_type__FuncRetType_12 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_12);
#line 712 "prog_type.m"
          {
#line 712 "prog_type.m"
            parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_12));
#line 712 "prog_type.m"
          }
#line 712 "prog_type.m"
          {
#line 712 "prog_type.m"
            MR_Word base;
#line 712 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_type.m"
            *parse_tree__prog_type__Type_10 = base;
#line 712 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 712 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_11));
#line 712 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 712 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 712 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 712 "prog_type.m"
          }
#line 701 "prog_type.m"
        }
#line 698 "prog_type.m"
        break;
#line 698 "prog_type.m"
      case (MR_Integer) 0:
#line 707 "prog_type.m"
        {
#line 708 "prog_type.m"
          {
#line 708 "prog_type.m"
            MR_Word base;
#line 708 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_type.m"
            *parse_tree__prog_type__Type_10 = base;
#line 708 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_9));
#line 708 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 708 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 708 "prog_type.m"
          }
#line 707 "prog_type.m"
        }
#line 698 "prog_type.m"
        break;
#line 698 "prog_type.m"
    }
#line 698 "prog_type.m"
  }
#line 176 "prog_type.m"
}

#line 173 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_type_3_p_0(
#line 173 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_4,
#line 173 "prog_type.m"
  MR_Word parse_tree__prog_type__Args_5,
#line 173 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_6)
#line 173 "prog_type.m"
{
#line 681 "prog_type.m"
  {
#line 681 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 681 "prog_type.m"
    MR_Word parse_tree__prog_type__BuiltinType_8;
#line 677 "prog_type.m"
    MR_String parse_tree__prog_type__Name_7;
#line 677 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 677 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 677 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == (MR_Integer) 0);
#line 677 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 677 "prog_type.m"
      {
#line 677 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 677 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 677 "prog_type.m"
          {
#line 677 "prog_type.m"
            parse_tree__prog_type__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, (MR_Integer) 0)));
#line 678 "prog_type.m"
            {
#line 678 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_type__BuiltinType_8, parse_tree__prog_type__Name_7);
            }
#line 677 "prog_type.m"
          }
#line 677 "prog_type.m"
      }
#line 681 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 680 "prog_type.m"
      {
#line 680 "prog_type.m"
        MR_Word base;
#line 680 "prog_type.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_type.m"
        *parse_tree__prog_type__Type_6 = base;
#line 680 "prog_type.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_type__BuiltinType_8));
#line 680 "prog_type.m"
      }
#line 681 "prog_type.m"
    else
#line 685 "prog_type.m"
      {
#line 685 "prog_type.m"
        MR_Word parse_tree__prog_type__Purity_9;
#line 685 "prog_type.m"
        MR_Word parse_tree__prog_type__PredOrFunc_10;

#line 682 "prog_type.m"
        {
#line 682 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type__Purity_9, &parse_tree__prog_type__PredOrFunc_10);
        }
#line 685 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 698 "prog_type.m"
#line 698 "prog_type.m"
          switch (parse_tree__prog_type__PredOrFunc_10) {
#line 698 "prog_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 698 "prog_type.m"
            case (MR_Integer) 1:
#line 701 "prog_type.m"
              {
#line 701 "prog_type.m"
                MR_Word parse_tree__prog_type__FuncArgTypes_23;
#line 701 "prog_type.m"
                MR_Word parse_tree__prog_type__FuncRetType_24;
#line 701 "prog_type.m"
                MR_Word parse_tree__prog_type__V_31_31;
#line 702 "prog_type.m"
                MR_Box parse_tree__prog_type__conv0_FuncRetType_24;

#line 702 "prog_type.m"
                {
#line 702 "prog_type.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Args_5, &parse_tree__prog_type__FuncArgTypes_23, &parse_tree__prog_type__conv0_FuncRetType_24);
                }
#line 702 "prog_type.m"
                parse_tree__prog_type__FuncRetType_24 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_24);
#line 712 "prog_type.m"
                {
#line 712 "prog_type.m"
                  parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_24));
#line 712 "prog_type.m"
                }
#line 712 "prog_type.m"
                {
#line 712 "prog_type.m"
                  MR_Word base;
#line 712 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_23));
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 712 "prog_type.m"
                }
#line 701 "prog_type.m"
              }
#line 698 "prog_type.m"
              break;
#line 698 "prog_type.m"
            case (MR_Integer) 0:
#line 707 "prog_type.m"
              {
#line 708 "prog_type.m"
                {
#line 708 "prog_type.m"
                  MR_Word base;
#line 708 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 708 "prog_type.m"
                }
#line 707 "prog_type.m"
              }
#line 698 "prog_type.m"
              break;
#line 698 "prog_type.m"
          }
#line 685 "prog_type.m"
        else
#line 690 "prog_type.m"
          {
#line 602 "prog_type.m"
            MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 602 "prog_type.m"
            MR_String parse_tree__prog_type__V_39_39;
#line 602 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 602 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 602 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 602 "prog_type.m"
              {
#line 602 "prog_type.m"
                parse_tree__prog_type__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 602 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_39_39, (MR_String) "{}") == 0);
#line 602 "prog_type.m"
              }
#line 690 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 689 "prog_type.m"
              {
#line 689 "prog_type.m"
                {
#line 689 "prog_type.m"
                  MR_Word base;
#line 689 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 689 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 689 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 689 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "prog_type.m"
                }
#line 689 "prog_type.m"
              }
#line 690 "prog_type.m"
            else
#line 691 "prog_type.m"
              {
#line 691 "prog_type.m"
                MR_Word parse_tree__prog_type__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 691 "prog_type.m"
                MR_Integer parse_tree__prog_type__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 693 "prog_type.m"
                {
#line 693 "prog_type.m"
                  MR_Word base;
#line 693 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 693 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_12));
#line 693 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 693 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "prog_type.m"
                }
#line 691 "prog_type.m"
              }
#line 690 "prog_type.m"
          }
#line 685 "prog_type.m"
      }
#line 681 "prog_type.m"
  }
#line 173 "prog_type.m"
}

#line 168 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_contains_var_2_p_0(
#line 168 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 168 "prog_type.m"
  MR_Word * parse_tree__prog_type__Var_2,
#line 168 "prog_type.m"
  MR_Cont parse_tree__prog_type__cont,
#line 168 "prog_type.m"
  void * parse_tree__prog_type__cont_env_ptr)
#line 168 "prog_type.m"
{
#line 670 "prog_type.m"
  while (MR_TRUE)
#line 670 "prog_type.m"
    {
#line 670 "prog_type.m"
      /* tailcall optimized into a loop */
#line 670 "prog_type.m"
      {
#line 670 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 670 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 670 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10;

#line 670 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 670 "prog_type.m"
          {
#line 670 "prog_type.m"
            parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 670 "prog_type.m"
            parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 671 "prog_type.m"
            {
#line 671 "prog_type.m"
              parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_type__V_10_10, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
            }
#line 673 "prog_type.m"
            {
#line 673 "prog_type.m"
              /* direct tailcall eliminated */
#line 673 "prog_type.m"
              {
#line 673 "prog_type.m"
                MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__V_9_9;

#line 673 "prog_type.m"
                parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 673 "prog_type.m"
              }
#line 673 "prog_type.m"
              continue;
#line 673 "prog_type.m"
            }
#line 670 "prog_type.m"
          }
#line 670 "prog_type.m"
      }
#line 670 "prog_type.m"
      break;
#line 670 "prog_type.m"
    }
#line 168 "prog_type.m"
}

#line 164 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_contains_var_2_p_0(
#line 164 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 164 "prog_type.m"
  MR_Word * parse_tree__prog_type__Var_2,
#line 164 "prog_type.m"
  MR_Cont parse_tree__prog_type__cont,
#line 164 "prog_type.m"
  void * parse_tree__prog_type__cont_env_ptr)
#line 164 "prog_type.m"
{
#line 655 "prog_type.m"
  while (MR_TRUE)
#line 655 "prog_type.m"
    {
#line 655 "prog_type.m"
      /* tailcall optimized into a loop */
#line 655 "prog_type.m"
      {
#line 655 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 655 "prog_type.m"
#line 655 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) {
#line 655 "prog_type.m"
          case (MR_Integer) 0:
#line 655 "prog_type.m"
            {
#line 655 "prog_type.m"
              MR_Word parse_tree__prog_type__V_4_4;

#line 655 "prog_type.m"
              *parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 655 "prog_type.m"
              parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 655 "prog_type.m"
              {
#line 655 "prog_type.m"
                parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
#line 655 "prog_type.m"
                return;
              }
#line 655 "prog_type.m"
            }
#line 655 "prog_type.m"
            break;
#line 655 "prog_type.m"
          case (MR_Integer) 1:
#line 656 "prog_type.m"
            {
#line 656 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 656 "prog_type.m"
              MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 656 "prog_type.m"
              MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 657 "prog_type.m"
              {
#line 657 "prog_type.m"
                parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_6, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 657 "prog_type.m"
                return;
              }
#line 656 "prog_type.m"
            }
#line 655 "prog_type.m"
            break;
#line 655 "prog_type.m"
          case (MR_Integer) 3:
#line 655 "prog_type.m"
#line 655 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 655 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 655 "prog_type.m"
              case (MR_Integer) 0:
#line 662 "prog_type.m"
                {
#line 662 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 663 "prog_type.m"
                  {
#line 663 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 663 "prog_type.m"
                    return;
                  }
#line 662 "prog_type.m"
                }
#line 655 "prog_type.m"
                break;
#line 655 "prog_type.m"
              case (MR_Integer) 1:
#line 655 "prog_type.m"
                {
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 658 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 659 "prog_type.m"
                  {
#line 659 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_39_39, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                  }
#line 660 "prog_type.m"
                  {
#line 660 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_15;

#line 660 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 660 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 660 "prog_type.m"
                      {
#line 660 "prog_type.m"
                        parse_tree__prog_type__Ret_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 661 "prog_type.m"
                        /* direct tailcall eliminated */
#line 661 "prog_type.m"
                        {
#line 661 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_15;

#line 661 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 661 "prog_type.m"
                        }
#line 661 "prog_type.m"
                        continue;
#line 660 "prog_type.m"
                      }
#line 660 "prog_type.m"
                  }
#line 655 "prog_type.m"
                }
#line 655 "prog_type.m"
                break;
#line 655 "prog_type.m"
              case (MR_Integer) 2:
#line 655 "prog_type.m"
                {
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 664 "prog_type.m"
                  *parse_tree__prog_type__Var_2 = parse_tree__prog_type__V_35_35;
#line 664 "prog_type.m"
                  {
#line 664 "prog_type.m"
                    parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
                  }
#line 666 "prog_type.m"
                  {
#line 666 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_34_34, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 666 "prog_type.m"
                    return;
                  }
#line 655 "prog_type.m"
                }
#line 655 "prog_type.m"
                break;
#line 655 "prog_type.m"
              case (MR_Integer) 3:
#line 667 "prog_type.m"
                {
#line 667 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 668 "prog_type.m"
                  /* direct tailcall eliminated */
#line 668 "prog_type.m"
                  {
#line 668 "prog_type.m"
                    MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_30;

#line 668 "prog_type.m"
                    parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 668 "prog_type.m"
                  }
#line 668 "prog_type.m"
                  continue;
#line 667 "prog_type.m"
                }
#line 655 "prog_type.m"
                break;
#line 655 "prog_type.m"
            }
#line 655 "prog_type.m"
            break;
#line 655 "prog_type.m"
        }
#line 655 "prog_type.m"
      }
#line 655 "prog_type.m"
      break;
#line 655 "prog_type.m"
    }
#line 164 "prog_type.m"
}

#line 160 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_vars_list_2_p_0(
#line 160 "prog_type.m"
  MR_Word parse_tree__prog_type__Types_3,
#line 160 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 160 "prog_type.m"
{
#line 642 "prog_type.m"
  {
#line 642 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 642 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 642 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 642 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 643 "prog_type.m"
    {
#line 643 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Types_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 11090 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 644 "prog_type.m"
    {
#line 644 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 645 "prog_type.m"
    {
#line 645 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 645 "prog_type.m"
      return;
    }
#line 642 "prog_type.m"
  }
#line 160 "prog_type.m"
}

#line 155 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_vars_2_p_0(
#line 155 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 155 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 155 "prog_type.m"
{
#line 615 "prog_type.m"
  {
#line 615 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 615 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 615 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 615 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 616 "prog_type.m"
    {
#line 616 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 11134 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 617 "prog_type.m"
    {
#line 617 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 618 "prog_type.m"
    {
#line 618 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 618 "prog_type.m"
      return;
    }
#line 615 "prog_type.m"
  }
#line 155 "prog_type.m"
}

#line 149 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__var_list_to_type_list_3_p_0(
#line 149 "prog_type.m"
  MR_Word parse_tree__prog_type__KindMap_1,
#line 149 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 149 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 149 "prog_type.m"
{
#line 609 "prog_type.m"
  {
#line 609 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 609 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "prog_type.m"
    else
#line 610 "prog_type.m"
      {
#line 610 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 610 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 610 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_8;
#line 610 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_9;
#line 610 "prog_type.m"
        MR_Word parse_tree__prog_type__Kind_10;

#line 611 "prog_type.m"
        {
#line 611 "prog_type.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Var_6, &parse_tree__prog_type__Kind_10);
        }
#line 612 "prog_type.m"
        {
#line 612 "prog_type.m"
          parse_tree__prog_type__Type_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 0) = ((MR_Box) (parse_tree__prog_type__Var_6));
#line 612 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 1) = ((MR_Box) (parse_tree__prog_type__Kind_10));
#line 612 "prog_type.m"
        }
#line 613 "prog_type.m"
        {
#line 613 "prog_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Vars_7, &parse_tree__prog_type__Types_9);
        }
#line 610 "prog_type.m"
        {
#line 610 "prog_type.m"
          MR_Word base;
#line 610 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 610 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Type_8));
#line 610 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Types_9));
#line 610 "prog_type.m"
        }
#line 610 "prog_type.m"
      }
#line 609 "prog_type.m"
  }
#line 149 "prog_type.m"
}

#line 145 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_to_var_list_2_p_0(
#line 145 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 145 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 145 "prog_type.m"
{
#line 604 "prog_type.m"
  {
#line 604 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 604 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "prog_type.m"
      {
#line 604 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 604 "prog_type.m"
      }
#line 604 "prog_type.m"
    else
#line 605 "prog_type.m"
      {
#line 605 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 605 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 605 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_5;
#line 605 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_6;
#line 606 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7;

#line 606 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Type_3)) == (MR_mktag((MR_Integer) 0)));
#line 606 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 606 "prog_type.m"
          {
#line 606 "prog_type.m"
            parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 0)));
#line 606 "prog_type.m"
            parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 1)));
#line 607 "prog_type.m"
            {
#line 607 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(parse_tree__prog_type__Types_4, &parse_tree__prog_type__Vars_6);
            }
#line 605 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 605 "prog_type.m"
              {
#line 605 "prog_type.m"
                {
#line 605 "prog_type.m"
                  MR_Word base;
#line 605 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 605 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_5));
#line 605 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Vars_6));
#line 605 "prog_type.m"
                }
#line 605 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 605 "prog_type.m"
              }
#line 606 "prog_type.m"
          }
#line 605 "prog_type.m"
      }
#line 604 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 604 "prog_type.m"
  }
#line 145 "prog_type.m"
}

#line 140 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_tuple_1_p_0(
#line 140 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 140 "prog_type.m"
{
#line 602 "prog_type.m"
  {
#line 602 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 602 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 602 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 602 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 602 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 602 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 602 "prog_type.m"
      {
#line 602 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 602 "prog_type.m"
        parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "{}") == 0);
#line 602 "prog_type.m"
      }
#line 602 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 602 "prog_type.m"
  }
#line 140 "prog_type.m"
}

#line 135 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(
#line 135 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_5,
#line 135 "prog_type.m"
  MR_Word * parse_tree__prog_type__Purity_6,
#line 135 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredOrFunc_7)
#line 135 "prog_type.m"
{
#line 570 "prog_type.m"
  {
#line 570 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 570 "prog_type.m"
    MR_Word parse_tree__prog_type__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 0)));
#line 570 "prog_type.m"
    MR_String parse_tree__prog_type__PorFStr_11;
#line 571 "prog_type.m"
    MR_Integer parse_tree__prog_type___Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 1)));

#line 586 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__SymName_9)) == (MR_mktag((MR_Integer) 1))))
#line 586 "prog_type.m"
      {
#line 586 "prog_type.m"
        MR_String parse_tree__prog_type__Qualifier_16;
#line 586 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));

#line 586 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 1)));
#line 586 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 586 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 586 "prog_type.m"
          {
#line 586 "prog_type.m"
            parse_tree__prog_type__Qualifier_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 591 "prog_type.m"
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "impure") == 0))
#line 588 "prog_type.m"
              {
#line 589 "prog_type.m"
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 2;
#line 590 "prog_type.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 588 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 588 "prog_type.m"
              }
#line 591 "prog_type.m"
            else
#line 591 "prog_type.m"
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "semipure") == 0))
#line 592 "prog_type.m"
              {
#line 593 "prog_type.m"
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 1;
#line 594 "prog_type.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 592 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 592 "prog_type.m"
              }
#line 591 "prog_type.m"
            else
#line 591 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_FALSE;
#line 586 "prog_type.m"
          }
#line 586 "prog_type.m"
      }
#line 586 "prog_type.m"
    else
#line 597 "prog_type.m"
      {
#line 597 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));
#line 598 "prog_type.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 599 "prog_type.m"
        *parse_tree__prog_type__Purity_6 = (MR_Integer) 0;
#line 597 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 597 "prog_type.m"
      }
#line 570 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 576 "prog_type.m"
      {
#line 576 "prog_type.m"
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "func") == 0))
#line 578 "prog_type.m"
          {
#line 578 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 1;
#line 578 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 578 "prog_type.m"
          }
#line 576 "prog_type.m"
        else
#line 576 "prog_type.m"
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "pred") == 0))
#line 575 "prog_type.m"
          {
#line 575 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 0;
#line 575 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 575 "prog_type.m"
          }
#line 576 "prog_type.m"
        else
#line 576 "prog_type.m"
          parse_tree__prog_type__succeeded = MR_FALSE;
#line 576 "prog_type.m"
      }
#line 570 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 570 "prog_type.m"
  }
#line 135 "prog_type.m"
}

#line 130 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_to_ctor_det_2_p_0(
#line 130 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 130 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_4)
#line 130 "prog_type.m"
{
#line 568 "prog_type.m"
  {
#line 568 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 568 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 568 "prog_type.m"
    {
#line 568 "prog_type.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 568 "prog_type.m"
  }
#line 130 "prog_type.m"
}

#line 125 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_2_p_0(
#line 125 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 125 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_4)
#line 125 "prog_type.m"
{
#line 564 "prog_type.m"
  {
#line 564 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 564 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 564 "prog_type.m"
    {
#line 564 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 564 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 564 "prog_type.m"
  }
#line 125 "prog_type.m"
}

#line 119 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(
#line 119 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 119 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 119 "prog_type.m"
  MR_Word * parse_tree__prog_type__Args_6)
#line 119 "prog_type.m"
{
#line 557 "prog_type.m"
  {
#line 557 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 557 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorPrime_7;
#line 557 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsPrime_8;

#line 554 "prog_type.m"
    {
#line 554 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type__TypeCtorPrime_7, &parse_tree__prog_type__ArgsPrime_8);
    }
#line 557 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 555 "prog_type.m"
      {
#line 555 "prog_type.m"
        *parse_tree__prog_type__TypeCtor_5 = parse_tree__prog_type__TypeCtorPrime_7;
#line 556 "prog_type.m"
        *parse_tree__prog_type__Args_6 = parse_tree__prog_type__ArgsPrime_8;
#line 555 "prog_type.m"
      }
#line 557 "prog_type.m"
    else
#line 558 "prog_type.m"
      {
#line 558 "prog_type.m"
        MR_String parse_tree__prog_type__V_11_11;
#line 558 "prog_type.m"
        MR_String parse_tree__prog_type__V_13_13;

#line 559 "prog_type.m"
        {
#line 559 "prog_type.m"
          parse_tree__prog_type__V_13_13 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__Type_4)));
        }
#line 559 "prog_type.m"
        {
#line 559 "prog_type.m"
          parse_tree__prog_type__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", parse_tree__prog_type__V_13_13);
        }
#line 558 "prog_type.m"
        {
#line 558 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", parse_tree__prog_type__V_11_11);
#line 558 "prog_type.m"
          return;
        }
#line 558 "prog_type.m"
      }
#line 557 "prog_type.m"
  }
#line 119 "prog_type.m"
}

#line 113 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_3_p_0(
#line 113 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 113 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 113 "prog_type.m"
  MR_Word * parse_tree__prog_type__Args_6)
#line 113 "prog_type.m"
{
#line 506 "prog_type.m"
  while (MR_TRUE)
#line 506 "prog_type.m"
    {
#line 506 "prog_type.m"
      /* tailcall optimized into a loop */
#line 506 "prog_type.m"
      {
#line 506 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 506 "prog_type.m"
#line 506 "prog_type.m"
        switch (MR_tag((MR_Word) parse_tree__prog_type__Type_4)) {
#line 506 "prog_type.m"
          default:
#line 506 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 506 "prog_type.m"
            break;
#line 506 "prog_type.m"
          case (MR_Integer) 1:
#line 506 "prog_type.m"
            {
#line 506 "prog_type.m"
              MR_Word parse_tree__prog_type__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 506 "prog_type.m"
              MR_Integer parse_tree__prog_type__Arity_9;
#line 506 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8;

#line 506 "prog_type.m"
              *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 506 "prog_type.m"
              parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 507 "prog_type.m"
              {
#line 507 "prog_type.m"
                parse_tree__prog_type__Arity_9 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
              }
#line 508 "prog_type.m"
              {
#line 508 "prog_type.m"
                MR_Word base;
#line 508 "prog_type.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 508 "prog_type.m"
                *parse_tree__prog_type__TypeCtor_5 = base;
#line 508 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_7));
#line 508 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_9));
#line 508 "prog_type.m"
              }
#line 506 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 506 "prog_type.m"
            }
#line 506 "prog_type.m"
            break;
#line 506 "prog_type.m"
          case (MR_Integer) 2:
#line 510 "prog_type.m"
            {
#line 510 "prog_type.m"
              MR_Word parse_tree__prog_type__BuiltinType_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 510 "prog_type.m"
              MR_String parse_tree__prog_type__Name_11;
#line 510 "prog_type.m"
              MR_Word parse_tree__prog_type__SymName_33;

#line 511 "prog_type.m"
              {
#line 511 "prog_type.m"
                parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_type__BuiltinType_10, &parse_tree__prog_type__Name_11);
              }
#line 512 "prog_type.m"
              {
#line 512 "prog_type.m"
                parse_tree__prog_type__SymName_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 512 "prog_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_33, 0) = ((MR_Box) (parse_tree__prog_type__Name_11));
#line 512 "prog_type.m"
              }
#line 514 "prog_type.m"
              *parse_tree__prog_type__Args_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "prog_type.m"
              {
#line 515 "prog_type.m"
                MR_Word base;
#line 515 "prog_type.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_type.m"
                *parse_tree__prog_type__TypeCtor_5 = base;
#line 515 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_33));
#line 515 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 515 "prog_type.m"
              }
#line 510 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 510 "prog_type.m"
            }
#line 506 "prog_type.m"
            break;
#line 506 "prog_type.m"
          case (MR_Integer) 3:
#line 506 "prog_type.m"
#line 506 "prog_type.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) {
#line 506 "prog_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 506 "prog_type.m"
              case (MR_Integer) 0:
#line 541 "prog_type.m"
                {
#line 541 "prog_type.m"
                  MR_Integer parse_tree__prog_type__Arity_38;
#line 541 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19;

#line 541 "prog_type.m"
                  *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 541 "prog_type.m"
                  parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 543 "prog_type.m"
                  {
#line 543 "prog_type.m"
                    parse_tree__prog_type__Arity_38 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
                  }
#line 544 "prog_type.m"
                  {
#line 544 "prog_type.m"
                    MR_Word base;
#line 544 "prog_type.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 544 "prog_type.m"
                    *parse_tree__prog_type__TypeCtor_5 = base;
#line 544 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1]));
#line 544 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_38));
#line 544 "prog_type.m"
                  }
#line 541 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 541 "prog_type.m"
                }
#line 506 "prog_type.m"
                break;
#line 506 "prog_type.m"
              case (MR_Integer) 1:
#line 517 "prog_type.m"
                {
#line 517 "prog_type.m"
                  MR_Word parse_tree__prog_type__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 517 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 517 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 517 "prog_type.m"
                  MR_Word parse_tree__prog_type__Purity_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 3)));
#line 517 "prog_type.m"
                  MR_String parse_tree__prog_type__PorFStr_17;
#line 517 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName0_18;
#line 517 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName_35;
#line 517 "prog_type.m"
                  MR_Integer parse_tree__prog_type__Arity_36;

#line 518 "prog_type.m"
                  {
#line 518 "prog_type.m"
                    parse_tree__prog_type__Arity_36 = mercury__list__length_1_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12);
                  }
#line 523 "prog_type.m"
                  if ((parse_tree__prog_type__MaybeRet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "prog_type.m"
                    {
#line 525 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "pred";
#line 526 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = parse_tree__prog_type__Args0_12;
#line 524 "prog_type.m"
                    }
#line 523 "prog_type.m"
                  else
#line 520 "prog_type.m"
                    {
#line 520 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 520 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29;

#line 521 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "func";
#line 522 "prog_type.m"
                      {
#line 522 "prog_type.m"
                        parse_tree__prog_type__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 0) = ((MR_Box) (parse_tree__prog_type__Ret_16));
#line 522 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "prog_type.m"
                      }
#line 522 "prog_type.m"
                      {
#line 522 "prog_type.m"
                        *parse_tree__prog_type__Args_6 = mercury__list__append_2_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12, parse_tree__prog_type__V_29_29);
                      }
#line 520 "prog_type.m"
                    }
#line 528 "prog_type.m"
                  {
#line 528 "prog_type.m"
                    parse_tree__prog_type__SymName0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 528 "prog_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName0_18, 0) = ((MR_Box) (parse_tree__prog_type__PorFStr_17));
#line 528 "prog_type.m"
                  }
#line 532 "prog_type.m"
#line 532 "prog_type.m"
                  switch (parse_tree__prog_type__Purity_14) {
#line 532 "prog_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 532 "prog_type.m"
                    case (MR_Integer) 2:
#line 536 "prog_type.m"
                      {
#line 537 "prog_type.m"
                        {
#line 537 "prog_type.m"
                          parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "impure", parse_tree__prog_type__SymName0_18);
                        }
#line 536 "prog_type.m"
                      }
#line 532 "prog_type.m"
                      break;
#line 532 "prog_type.m"
                    case (MR_Integer) 0:
#line 531 "prog_type.m"
                      parse_tree__prog_type__SymName_35 = parse_tree__prog_type__SymName0_18;
#line 532 "prog_type.m"
                      break;
#line 532 "prog_type.m"
                    case (MR_Integer) 1:
#line 533 "prog_type.m"
                      {
#line 534 "prog_type.m"
                        {
#line 534 "prog_type.m"
                          parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "semipure", parse_tree__prog_type__SymName0_18);
                        }
#line 533 "prog_type.m"
                      }
#line 532 "prog_type.m"
                      break;
#line 532 "prog_type.m"
                  }
#line 539 "prog_type.m"
                  {
#line 539 "prog_type.m"
                    MR_Word base;
#line 539 "prog_type.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "prog_type.m"
                    *parse_tree__prog_type__TypeCtor_5 = base;
#line 539 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_35));
#line 539 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_36));
#line 539 "prog_type.m"
                  }
#line 517 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 517 "prog_type.m"
                }
#line 506 "prog_type.m"
                break;
#line 506 "prog_type.m"
              case (MR_Integer) 2:
#line 546 "prog_type.m"
                {
#line 547 "prog_type.m"
                  {
#line 547 "prog_type.m"
                    mercury__require__sorry_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
                  }
#line 546 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 546 "prog_type.m"
                }
#line 506 "prog_type.m"
                break;
#line 506 "prog_type.m"
              case (MR_Integer) 3:
#line 549 "prog_type.m"
                {
#line 549 "prog_type.m"
                  MR_Word parse_tree__prog_type__SubType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 549 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));

#line 550 "prog_type.m"
                  /* direct tailcall eliminated */
#line 550 "prog_type.m"
                  {
#line 550 "prog_type.m"
                    MR_Word parse_tree__prog_type__Type__tmp_copy_4 = parse_tree__prog_type__SubType_23;

#line 550 "prog_type.m"
                    parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type__tmp_copy_4;
#line 550 "prog_type.m"
                  }
#line 550 "prog_type.m"
                  continue;
#line 549 "prog_type.m"
                }
#line 506 "prog_type.m"
                break;
#line 506 "prog_type.m"
            }
#line 506 "prog_type.m"
            break;
#line 506 "prog_type.m"
        }
#line 506 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 506 "prog_type.m"
      }
#line 506 "prog_type.m"
      break;
#line 506 "prog_type.m"
    }
#line 113 "prog_type.m"
}

#line 107 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(
#line 107 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 107 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 107 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeArgs_6)
#line 107 "prog_type.m"
{
#line 496 "prog_type.m"
  {
#line 496 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 496 "prog_type.m"
    MR_Word parse_tree__prog_type__PredOrFunc_8;
#line 496 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeArgs0_10;
#line 492 "prog_type.m"
    MR_Word parse_tree__prog_type___Purity_7;

#line 492 "prog_type.m"
    {
#line 492 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type___Purity_7, &parse_tree__prog_type__PredOrFunc_8, &parse_tree__prog_type__TypeArgs0_10);
    }
#line 496 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 493 "prog_type.m"
      {
#line 493 "prog_type.m"
        MR_String parse_tree__prog_type__PredOrFuncStr_11;
#line 493 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 493 "prog_type.m"
        *parse_tree__prog_type__TypeArgs_6 = parse_tree__prog_type__TypeArgs0_10;
#line 494 "prog_type.m"
        {
#line 494 "prog_type.m"
          parse_tree__prog_type__PredOrFuncStr_11 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_type__PredOrFunc_8);
        }
#line 495 "prog_type.m"
        {
#line 495 "prog_type.m"
          parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__PredOrFuncStr_11));
#line 495 "prog_type.m"
        }
#line 495 "prog_type.m"
        {
#line 495 "prog_type.m"
          MR_Word base;
#line 495 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_type.m"
          *parse_tree__prog_type__TypeCtor_5 = base;
#line 495 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 495 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 495 "prog_type.m"
        }
#line 493 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 493 "prog_type.m"
      }
#line 496 "prog_type.m"
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
#line 463 "prog_type.m"
        MR_Word parse_tree__prog_type__V_20_20;

#line 463 "prog_type.m"
        {
#line 463 "prog_type.m"
          parse_tree__prog_type__V_21_21 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_4);
        }
#line 463 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 463 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 463 "prog_type.m"
          {
#line 463 "prog_type.m"
            *parse_tree__prog_type__TypeArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 1)));
#line 463 "prog_type.m"
            parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 2)));
#line 499 "prog_type.m"
            parse_tree__prog_type__V_16_16 = (MR_String) "tuple";
#line 499 "prog_type.m"
            parse_tree__prog_type__V_17_17 = (MR_Integer) 0;
#line 499 "prog_type.m"
            parse_tree__prog_type__V_15_15 = (MR_Word) &parse_tree__prog_type_scalar_common_3[0];
#line 499 "prog_type.m"
            *parse_tree__prog_type__TypeCtor_5 = (MR_Word) &parse_tree__prog_type_scalar_common_1[6];
#line 499 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 463 "prog_type.m"
          }
#line 500 "prog_type.m"
      }
#line 496 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 496 "prog_type.m"
  }
#line 107 "prog_type.m"
}

#line 483 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 483 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 483 "prog_type.m"
{
#line 483 "prog_type.m"
  {
#line 483 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 483 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0, 1);
#line 483 "prog_type.m"
  }
#line 483 "prog_type.m"
}

#line 483 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 483 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 483 "prog_type.m"
{
#line 483 "prog_type.m"
  {
#line 483 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 483 "prog_type.m"
    {
#line 487 "prog_type.m"
      MR_Word parse_tree__prog_type__Binding_6;
#line 485 "prog_type.m"
      MR_Box parse_tree__prog_type__conv0_Binding_6;

#line 485 "prog_type.m"
      {
#line 485 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4, ((MR_Box) ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5)), &parse_tree__prog_type__conv0_Binding_6);
      }
#line 485 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 485 "prog_type.m"
        {
#line 485 "prog_type.m"
          parse_tree__prog_type__Binding_6 = ((MR_Word) parse_tree__prog_type__conv0_Binding_6);
#line 485 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 485 "prog_type.m"
        }
#line 487 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 486 "prog_type.m"
        {
#line 486 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Binding_6, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4);
        }
#line 487 "prog_type.m"
      else
#line 488 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 487 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 487 "prog_type.m"
        {
#line 487 "prog_type.m"
          parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(parse_tree__prog_type__env_ptr);
#line 487 "prog_type.m"
          return;
        }
#line 483 "prog_type.m"
    }
#line 483 "prog_type.m"
  }
#line 483 "prog_type.m"
}

#line 483 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 483 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 483 "prog_type.m"
{
#line 483 "prog_type.m"
  {
#line 483 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 483 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0) == 0)
#line 483 "prog_type.m"
      {
#line 484 "prog_type.m"
        {
#line 484 "prog_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5, parse_tree__prog_type__subst_type_is_nonground_2_p_0_2, parse_tree__prog_type__env_ptr);
        }
#line 483 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_FALSE;
#line 483 "prog_type.m"
      }
#line 483 "prog_type.m"
    else
#line 483 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 483 "prog_type.m"
  }
#line 483 "prog_type.m"
}

#line 99 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0(
#line 99 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 99 "prog_type.m"
  MR_Word parse_tree__prog_type__TSubst_4)
#line 99 "prog_type.m"
{
#line 99 "prog_type.m"
  {
#line 99 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s parse_tree__prog_type__env;

#line 99 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3 = parse_tree__prog_type__Type_3;
#line 99 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4 = parse_tree__prog_type__TSubst_4;
#line 483 "prog_type.m"
    {
#line 483 "prog_type.m"
      parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(&parse_tree__prog_type__env);
    }
#line 483 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 99 "prog_type.m"
  }
#line 99 "prog_type.m"
}

#line 94 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_ground_2_p_0(
#line 94 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 94 "prog_type.m"
  MR_Word parse_tree__prog_type__TSubst_4)
#line 94 "prog_type.m"
{
#line 481 "prog_type.m"
  {
#line 481 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 481 "prog_type.m"
    {
#line 481 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TSubst_4);
    }
#line 481 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 481 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 481 "prog_type.m"
  }
#line 94 "prog_type.m"
}

#line 478 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 478 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 478 "prog_type.m"
{
#line 478 "prog_type.m"
  {
#line 478 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 478 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0, 1);
#line 478 "prog_type.m"
  }
#line 478 "prog_type.m"
}

#line 478 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 478 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 478 "prog_type.m"
{
#line 478 "prog_type.m"
  {
#line 478 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 478 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0) == 0)
#line 478 "prog_type.m"
      {
#line 478 "prog_type.m"
        {
#line 478 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 478 "prog_type.m"
          {
#line 478 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_nonground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 478 "prog_type.m"
        }
#line 478 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
#line 478 "prog_type.m"
      }
#line 478 "prog_type.m"
    else
#line 478 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
#line 478 "prog_type.m"
  }
#line 478 "prog_type.m"
}

#line 90 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0(
#line 90 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 90 "prog_type.m"
{
#line 90 "prog_type.m"
  {
#line 90 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s parse_tree__prog_type__env;

#line 90 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
#line 478 "prog_type.m"
    {
#line 478 "prog_type.m"
      parse_tree__prog_type__type_is_nonground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 478 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 90 "prog_type.m"
  }
#line 90 "prog_type.m"
}

#line 475 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 475 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 475 "prog_type.m"
{
#line 475 "prog_type.m"
  {
#line 475 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 475 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0, 1);
#line 475 "prog_type.m"
  }
#line 475 "prog_type.m"
}

#line 475 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 475 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 475 "prog_type.m"
{
#line 475 "prog_type.m"
  {
#line 475 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 475 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0) == 0)
#line 475 "prog_type.m"
      {
#line 475 "prog_type.m"
        {
#line 475 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 475 "prog_type.m"
          {
#line 475 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_ground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 475 "prog_type.m"
        }
#line 475 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
#line 475 "prog_type.m"
      }
#line 475 "prog_type.m"
    else
#line 475 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
#line 475 "prog_type.m"
  }
#line 475 "prog_type.m"
}

#line 86 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0(
#line 86 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 86 "prog_type.m"
{
#line 86 "prog_type.m"
  {
#line 86 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s parse_tree__prog_type__env;

#line 86 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
#line 475 "prog_type.m"
    {
#line 475 "prog_type.m"
      parse_tree__prog_type__type_is_ground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 475 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded);
#line 475 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 86 "prog_type.m"
  }
#line 86 "prog_type.m"
}

#line 79 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__strip_kind_annotation_1_f_0(
#line 79 "prog_type.m"
  MR_Word parse_tree__prog_type__Type0_3)
#line 79 "prog_type.m"
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
#line 466 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6;

#line 466 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 466 "prog_type.m"
          {
#line 466 "prog_type.m"
            parse_tree__prog_type__Type1_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 1)));
#line 466 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 2)));
#line 467 "prog_type.m"
            /* direct tailcall eliminated */
#line 467 "prog_type.m"
            {
#line 467 "prog_type.m"
              MR_Word parse_tree__prog_type__Type0__tmp_copy_3 = parse_tree__prog_type__Type1_5;

#line 467 "prog_type.m"
              parse_tree__prog_type__Type0_3 = parse_tree__prog_type__Type0__tmp_copy_3;
#line 467 "prog_type.m"
            }
#line 467 "prog_type.m"
            continue;
#line 466 "prog_type.m"
          }
#line 466 "prog_type.m"
        else
#line 469 "prog_type.m"
          parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type0_3;
#line 468 "prog_type.m"
        return parse_tree__prog_type__Type_4;
#line 468 "prog_type.m"
      }
#line 468 "prog_type.m"
      break;
#line 468 "prog_type.m"
    }
#line 79 "prog_type.m"
}

#line 74 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_tuple_2_p_0(
#line 74 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 74 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgTypes_4)
#line 74 "prog_type.m"
{
#line 462 "prog_type.m"
  {
#line 462 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 462 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 463 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 463 "prog_type.m"
    {
#line 463 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_3);
    }
#line 463 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 463 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 463 "prog_type.m"
      {
#line 463 "prog_type.m"
        *parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 463 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 2)));
#line 463 "prog_type.m"
      }
#line 462 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 462 "prog_type.m"
  }
#line 74 "prog_type.m"
}

#line 67 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(
#line 67 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_6,
#line 67 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Purity_11,
#line 67 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12,
#line 67 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14)
#line 67 "prog_type.m"
{
#line 458 "prog_type.m"
  {
#line 458 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 458 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 458 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 458 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;

#line 454 "prog_type.m"
    {
#line 454 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_6, &parse_tree__prog_type__STATE_VARIABLE_Purity_15_15, &parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16, &parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18);
    }
#line 458 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 457 "prog_type.m"
      {
#line 457 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14 = parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;
#line 457 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12 = parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 457 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_Purity_11 = parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 457 "prog_type.m"
      }
#line 458 "prog_type.m"
    else
#line 459 "prog_type.m"
      {
#line 459 "prog_type.m"
        {
#line 459 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_is_higher_order_details_det\'/5", (MR_String) "type is not higher-order");
#line 459 "prog_type.m"
          return;
        }
#line 459 "prog_type.m"
      }
#line 458 "prog_type.m"
  }
#line 67 "prog_type.m"
}

#line 63 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_5_p_0(
#line 63 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_6,
#line 63 "prog_type.m"
  MR_Word * parse_tree__prog_type__Purity_7,
#line 63 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredOrFunc_8,
#line 63 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredArgTypes_10)
#line 63 "prog_type.m"
{
#line 438 "prog_type.m"
  {
#line 438 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 438 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_11;
#line 438 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeRetType_12;
#line 438 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;

#line 439 "prog_type.m"
    {
#line 439 "prog_type.m"
      parse_tree__prog_type__V_14_14 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_6);
    }
#line 440 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 440 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 440 "prog_type.m"
      {
#line 440 "prog_type.m"
        parse_tree__prog_type__ArgTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 1)));
#line 440 "prog_type.m"
        parse_tree__prog_type__MaybeRetType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 2)));
#line 440 "prog_type.m"
        *parse_tree__prog_type__Purity_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 3)));
#line 445 "prog_type.m"
        if ((parse_tree__prog_type__MaybeRetType_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "prog_type.m"
          {
#line 447 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 0;
#line 448 "prog_type.m"
            *parse_tree__prog_type__PredArgTypes_10 = parse_tree__prog_type__ArgTypes_11;
#line 446 "prog_type.m"
          }
#line 445 "prog_type.m"
        else
#line 442 "prog_type.m"
          {
#line 442 "prog_type.m"
            MR_Word parse_tree__prog_type__RetType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRetType_12, (MR_Integer) 0)));
#line 442 "prog_type.m"
            MR_Word parse_tree__prog_type__V_15_15;

#line 443 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 1;
#line 444 "prog_type.m"
            {
#line 444 "prog_type.m"
              parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__RetType_13));
#line 444 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "prog_type.m"
            }
#line 444 "prog_type.m"
            {
#line 444 "prog_type.m"
              *parse_tree__prog_type__PredArgTypes_10 = mercury__list__append_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_11, parse_tree__prog_type__V_15_15);
            }
#line 442 "prog_type.m"
          }
#line 445 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 440 "prog_type.m"
      }
#line 438 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 438 "prog_type.m"
  }
#line 63 "prog_type.m"
}

#line 53 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_1_p_0(
#line 53 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 53 "prog_type.m"
{
#line 434 "prog_type.m"
  {
#line 434 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 434 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 435 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 435 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 435 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 435 "prog_type.m"
    {
#line 435 "prog_type.m"
      parse_tree__prog_type__V_7_7 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 435 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 435 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 435 "prog_type.m"
      {
#line 435 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 1)));
#line 435 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 2)));
#line 435 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 3)));
#line 435 "prog_type.m"
      }
#line 434 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 434 "prog_type.m"
  }
#line 53 "prog_type.m"
}

#line 49 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonvar_1_p_0(
#line 49 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 49 "prog_type.m"
{
#line 432 "prog_type.m"
  {
#line 432 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 428 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 429 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 429 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 429 "prog_type.m"
    {
#line 429 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 429 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 0)));
#line 429 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 429 "prog_type.m"
      {
#line 429 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 429 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 429 "prog_type.m"
      }
#line 432 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 432 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 432 "prog_type.m"
  }
#line 49 "prog_type.m"
}

#line 45 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_var_1_p_0(
#line 45 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 45 "prog_type.m"
{
#line 428 "prog_type.m"
  {
#line 428 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 428 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;
#line 429 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 429 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;

#line 429 "prog_type.m"
    {
#line 429 "prog_type.m"
      parse_tree__prog_type__V_5_5 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 429 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 429 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 429 "prog_type.m"
      {
#line 429 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 429 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 429 "prog_type.m"
      }
#line 428 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 428 "prog_type.m"
  }
#line 45 "prog_type.m"
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
