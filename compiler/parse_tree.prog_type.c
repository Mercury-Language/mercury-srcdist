/*
** Automatically generated from `prog_type.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 409 "prog_type.m"
struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s {
#line 1367 "prog_type.m"
  MR_bool parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1404 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
#line 1407 "prog_type.m"
  jmp_buf parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0;
#line 1407 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28;
#line 1408 "prog_type.m"
  MR_Box parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
#line 409 "prog_type.m"
};

#line 362 "prog_type.m"
struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s {
#line 362 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3;
#line 1012 "prog_type.m"
  MR_bool parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 1014 "prog_type.m"
  jmp_buf parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0;
#line 1014 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8;
#line 1015 "prog_type.m"
  MR_Box parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8;
#line 362 "prog_type.m"
};

#line 101 "prog_type.m"
struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s {
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3;
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4;
#line 492 "prog_type.m"
  MR_bool parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 492 "prog_type.m"
  jmp_buf parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0;
#line 492 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5;
#line 101 "prog_type.m"
};

#line 92 "prog_type.m"
struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s {
#line 92 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2;
#line 487 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 487 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0;
#line 92 "prog_type.m"
};

#line 88 "prog_type.m"
struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s {
#line 88 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2;
#line 484 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 484 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0;
#line 88 "prog_type.m"
};


#line 203 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 206 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 209 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 212 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 215 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 218 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 221 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 224 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

#line 227 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 230 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 233 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6];

#line 236 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6];

#line 239 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0;

#line 242 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1];

#line 245 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1];

#line 248 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1];

#line 251 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1];

#line 254 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0;

#line 257 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1;

#line 260 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2];

#line 263 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2];

#line 266 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2];

#line 269 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1];

#line 272 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0;

#line 275 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1;

#line 278 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1];

#line 281 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1];

#line 284 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2];

#line 287 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2];

#line 290 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2];

#line 293 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0;

#line 296 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1;

#line 299 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2;

#line 302 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3;

#line 305 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4];

#line 308 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4];

#line 311 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4];

#line 314 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0;

#line 317 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1;

#line 320 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2];

#line 323 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2];

#line 326 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2];

#line 329 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0;

#line 332 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1;

#line 335 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2;

#line 338 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3;

#line 341 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4];

#line 344 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4];

#line 347 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4];

#line 350 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0;

#line 353 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1;

#line 356 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2;

#line 359 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3];

#line 362 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3];

#line 365 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3];

#line 368 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1];

#line 371 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0;

#line 374 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1;

#line 377 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2;

#line 380 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1];

#line 383 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3;

#line 386 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4;

#line 389 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5;

#line 392 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1];

#line 395 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6;

#line 398 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7;

#line 401 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1];

#line 404 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8;

#line 407 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5];

#line 410 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1];

#line 413 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1];

#line 416 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2];

#line 419 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4];

#line 422 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9];

#line 425 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9];

#line 428 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 431 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 433 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 436 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 439 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 441 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 443 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 446 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 449 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 451 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 454 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 457 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 459 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 461 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 464 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 467 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 469 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 472 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 475 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 477 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 479 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 482 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 485 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 487 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 490 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 493 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 495 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 497 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 500 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 503 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 505 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 508 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 511 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 513 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 515 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 518 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 521 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 523 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 526 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 529 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 531 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 533 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 536 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 539 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 541 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 544 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 547 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 549 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 551 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 554 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 557 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 559 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 562 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 565 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 567 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 569 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 1340 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1340 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1340 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1340 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7);

#line 1300 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1300 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1300 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1300 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6);

#line 1279 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1279 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1279 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1279 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8);

#line 1267 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1267 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1267 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1267 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20);

#line 1214 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1214 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33);

#line 1183 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1183 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22);

#line 1151 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1151 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23);

#line 1130 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1130 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16);

#line 1087 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1087 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19);

#line 1071 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1071 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14);

#line 887 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(
#line 887 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_3,
#line 887 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_4);

#line 656 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 656 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 656 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 656 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3);

#line 629 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 629 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 629 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 629 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3);

#line 1407 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1407 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1408 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1408 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1407 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1407 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1407 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1407 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1014 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 1014 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1015 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 1015 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1014 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 1014 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1014 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 1014 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 865 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 865 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1(
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 865 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1(
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 884 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1(
#line 884 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 884 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 761 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 761 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 761 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 761 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 492 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 492 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 492 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 492 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 492 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 492 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 487 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 487 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 487 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 487 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[3][5];




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

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[3][5] = {
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1070 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1078 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1086 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1094 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1103 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1111 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1119 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1127 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

#line 1136 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1144 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1152 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1162 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_existq_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_constraints",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

#line 1172 "parse_tree.prog_type.c"
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

#line 1187 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1192 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0
  }
};

#line 1201 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1206 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1] = {
  (MR_Integer) 0
};

#line 1211 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_ctor_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____ctor_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____ctor_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "ctor_defn",
  {
    parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0
};

#line 1232 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
  (MR_String) "is_builtin_dummy_type_ctor",
  (MR_Integer) 0
};

#line 1238 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
  (MR_String) "is_not_builtin_dummy_type_ctor",
  (MR_Integer) 1
};

#line 1244 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1250 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1256 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1262 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "is_builtin_dummy_type_ctor",
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0
};

#line 1283 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1288 "parse_tree.prog_type.c"
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

#line 1303 "parse_tree.prog_type.c"
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

#line 1318 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1323 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0
};

#line 1328 "parse_tree.prog_type.c"
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

#line 1342 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1348 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1354 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_polymorphism_cell_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "polymorphism_cell",
  {
    parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0
};

#line 1375 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0 = {
  (MR_String) "cat_builtin_int",
  (MR_Integer) 0
};

#line 1381 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1 = {
  (MR_String) "cat_builtin_float",
  (MR_Integer) 1
};

#line 1387 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2 = {
  (MR_String) "cat_builtin_char",
  (MR_Integer) 2
};

#line 1393 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3 = {
  (MR_String) "cat_builtin_string",
  (MR_Integer) 3
};

#line 1399 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1407 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1415 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1423 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_builtin",
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0
};

#line 1444 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
  (MR_String) "cat_enum_mercury",
  (MR_Integer) 0
};

#line 1450 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
  (MR_String) "cat_enum_foreign",
  (MR_Integer) 1
};

#line 1456 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1
};

#line 1462 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0
};

#line 1468 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1474 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_enum",
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0
};

#line 1495 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
  (MR_String) "cat_system_type_info",
  (MR_Integer) 0
};

#line 1501 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
  (MR_String) "cat_system_type_ctor_info",
  (MR_Integer) 1
};

#line 1507 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
  (MR_String) "cat_system_typeclass_info",
  (MR_Integer) 2
};

#line 1513 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
  (MR_String) "cat_system_base_typeclass_info",
  (MR_Integer) 3
};

#line 1519 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3
};

#line 1527 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2
};

#line 1535 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1543 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_system",
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0
};

#line 1564 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
  (MR_String) "cat_user_direct_dummy",
  (MR_Integer) 0
};

#line 1570 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
  (MR_String) "cat_user_notag",
  (MR_Integer) 1
};

#line 1576 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
  (MR_String) "cat_user_general",
  (MR_Integer) 2
};

#line 1582 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

#line 1589 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1
};

#line 1596 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1603 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_user",
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0
};

#line 1624 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0
};

#line 1629 "parse_tree.prog_type.c"
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

#line 1644 "parse_tree.prog_type.c"
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

#line 1659 "parse_tree.prog_type.c"
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

#line 1674 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0
};

#line 1679 "parse_tree.prog_type.c"
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

#line 1694 "parse_tree.prog_type.c"
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

#line 1709 "parse_tree.prog_type.c"
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

#line 1724 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0
};

#line 1729 "parse_tree.prog_type.c"
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

#line 1744 "parse_tree.prog_type.c"
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

#line 1759 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0
};

#line 1764 "parse_tree.prog_type.c"
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

#line 1779 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7
};

#line 1788 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0
};

#line 1793 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3
};

#line 1798 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8
};

#line 1804 "parse_tree.prog_type.c"
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

#line 1828 "parse_tree.prog_type.c"
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

#line 1841 "parse_tree.prog_type.c"
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

#line 1854 "parse_tree.prog_type.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_category_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_category_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_category",
  {
    parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0
  },
  {
    parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0
};

#line 1875 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 1878 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1880 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1882 "parse_tree.prog_type.c"
{
#line 1884 "parse_tree.prog_type.c"
  {
#line 1886 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1889 "parse_tree.prog_type.c"
    {
#line 1891 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____ctor_defn_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1894 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1896 "parse_tree.prog_type.c"
  }
#line 1898 "parse_tree.prog_type.c"
}

#line 1901 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 1904 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1906 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1908 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1910 "parse_tree.prog_type.c"
{
#line 1912 "parse_tree.prog_type.c"
  {
#line 1914 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1917 "parse_tree.prog_type.c"
    {
#line 1919 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____ctor_defn_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1922 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1924 "parse_tree.prog_type.c"
  }
#line 1926 "parse_tree.prog_type.c"
}

#line 1929 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 1932 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1934 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1936 "parse_tree.prog_type.c"
{
#line 1938 "parse_tree.prog_type.c"
  {
#line 1940 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1943 "parse_tree.prog_type.c"
    {
#line 1945 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1948 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1950 "parse_tree.prog_type.c"
  }
#line 1952 "parse_tree.prog_type.c"
}

#line 1955 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 1958 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1960 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1962 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1964 "parse_tree.prog_type.c"
{
#line 1966 "parse_tree.prog_type.c"
  {
#line 1968 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1971 "parse_tree.prog_type.c"
    {
#line 1973 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1976 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1978 "parse_tree.prog_type.c"
  }
#line 1980 "parse_tree.prog_type.c"
}

#line 1983 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 1986 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1988 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1990 "parse_tree.prog_type.c"
{
#line 1992 "parse_tree.prog_type.c"
  {
#line 1994 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1997 "parse_tree.prog_type.c"
    {
#line 1999 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____polymorphism_cell_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2002 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2004 "parse_tree.prog_type.c"
  }
#line 2006 "parse_tree.prog_type.c"
}

#line 2009 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 2012 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2014 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2016 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2018 "parse_tree.prog_type.c"
{
#line 2020 "parse_tree.prog_type.c"
  {
#line 2022 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2025 "parse_tree.prog_type.c"
    {
#line 2027 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____polymorphism_cell_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2030 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2032 "parse_tree.prog_type.c"
  }
#line 2034 "parse_tree.prog_type.c"
}

#line 2037 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 2040 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2042 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2044 "parse_tree.prog_type.c"
{
#line 2046 "parse_tree.prog_type.c"
  {
#line 2048 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2051 "parse_tree.prog_type.c"
    {
#line 2053 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2056 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2058 "parse_tree.prog_type.c"
  }
#line 2060 "parse_tree.prog_type.c"
}

#line 2063 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 2066 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2068 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2070 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2072 "parse_tree.prog_type.c"
{
#line 2074 "parse_tree.prog_type.c"
  {
#line 2076 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2079 "parse_tree.prog_type.c"
    {
#line 2081 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2084 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2086 "parse_tree.prog_type.c"
  }
#line 2088 "parse_tree.prog_type.c"
}

#line 2091 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 2094 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2096 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2098 "parse_tree.prog_type.c"
{
#line 2100 "parse_tree.prog_type.c"
  {
#line 2102 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2105 "parse_tree.prog_type.c"
    {
#line 2107 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2110 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2112 "parse_tree.prog_type.c"
  }
#line 2114 "parse_tree.prog_type.c"
}

#line 2117 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 2120 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2122 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2124 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2126 "parse_tree.prog_type.c"
{
#line 2128 "parse_tree.prog_type.c"
  {
#line 2130 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2133 "parse_tree.prog_type.c"
    {
#line 2135 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2138 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2140 "parse_tree.prog_type.c"
  }
#line 2142 "parse_tree.prog_type.c"
}

#line 2145 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 2148 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2150 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2152 "parse_tree.prog_type.c"
{
#line 2154 "parse_tree.prog_type.c"
  {
#line 2156 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2159 "parse_tree.prog_type.c"
    {
#line 2161 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2164 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2166 "parse_tree.prog_type.c"
  }
#line 2168 "parse_tree.prog_type.c"
}

#line 2171 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 2174 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2176 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2178 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2180 "parse_tree.prog_type.c"
{
#line 2182 "parse_tree.prog_type.c"
  {
#line 2184 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2187 "parse_tree.prog_type.c"
    {
#line 2189 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2192 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2194 "parse_tree.prog_type.c"
  }
#line 2196 "parse_tree.prog_type.c"
}

#line 2199 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 2202 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2204 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2206 "parse_tree.prog_type.c"
{
#line 2208 "parse_tree.prog_type.c"
  {
#line 2210 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2213 "parse_tree.prog_type.c"
    {
#line 2215 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2218 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2220 "parse_tree.prog_type.c"
  }
#line 2222 "parse_tree.prog_type.c"
}

#line 2225 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 2228 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2230 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2232 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2234 "parse_tree.prog_type.c"
{
#line 2236 "parse_tree.prog_type.c"
  {
#line 2238 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2241 "parse_tree.prog_type.c"
    {
#line 2243 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2246 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2248 "parse_tree.prog_type.c"
  }
#line 2250 "parse_tree.prog_type.c"
}

#line 2253 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 2256 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2258 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2260 "parse_tree.prog_type.c"
{
#line 2262 "parse_tree.prog_type.c"
  {
#line 2264 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2267 "parse_tree.prog_type.c"
    {
#line 2269 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2272 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2274 "parse_tree.prog_type.c"
  }
#line 2276 "parse_tree.prog_type.c"
}

#line 2279 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 2282 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2284 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2286 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2288 "parse_tree.prog_type.c"
{
#line 2290 "parse_tree.prog_type.c"
  {
#line 2292 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2295 "parse_tree.prog_type.c"
    {
#line 2297 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_category_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2300 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2302 "parse_tree.prog_type.c"
  }
#line 2304 "parse_tree.prog_type.c"
}

#line 372 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 372 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 372 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 372 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 372 "prog_type.m"
{
#line 1029 "prog_type.m"
  {
#line 1029 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__ReserveTagPragma_11 == (MR_Integer) 1);
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeCtorFieldName_17;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_29;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_30;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__V_35_35;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__V_36_36;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 1029 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 982 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_31;
#line 982 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_34;
#line 1043 "prog_type.m"
    MR_String parse_tree__prog_type__V_22_22;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;

#line 1029 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1029 "prog_type.m"
      {
#line 1031 "prog_type.m"
        parse_tree__prog_type__V_20_20 = (MR_Integer) 242;
#line 1031 "prog_type.m"
        parse_tree__prog_type__V_21_21 = (MR_Integer) 1;
#line 1031 "prog_type.m"
        {
#line 1031 "prog_type.m"
          parse_tree__prog_type__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__prog_type__Globals_9, parse_tree__prog_type__V_20_20, parse_tree__prog_type__V_21_21);
        }
#line 1029 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1029 "prog_type.m"
          {
#line 1032 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__MaybeUserEqCmp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1029 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1029 "prog_type.m"
              {
#line 981 "prog_type.m"
                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_12)) == (MR_mktag((MR_Integer) 1)));
#line 981 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 981 "prog_type.m"
                  {
#line 981 "prog_type.m"
                    parse_tree__prog_type__SingleCtor_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 0)));
#line 981 "prog_type.m"
                    parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 1)));
#line 981 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1029 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1029 "prog_type.m"
                      {
#line 982 "prog_type.m"
                        parse_tree__prog_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 0)));
#line 982 "prog_type.m"
                        parse_tree__prog_type___Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 1)));
#line 982 "prog_type.m"
                        *parse_tree__prog_type__SingleFunctorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 2)));
#line 982 "prog_type.m"
                        parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 3)));
#line 982 "prog_type.m"
                        parse_tree__prog_type___Ctxt_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 4)));
#line 984 "prog_type.m"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1029 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1029 "prog_type.m"
                          {
#line 1043 "prog_type.m"
                            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_type__SingleFunctorName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1043 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1043 "prog_type.m"
                              {
#line 1043 "prog_type.m"
                                parse_tree__prog_type__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__prog_type__SingleFunctorName_14, (MR_Integer) 0)));
#line 1043 "prog_type.m"
                                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_22_22, (MR_String) "{}") == 0);
#line 1043 "prog_type.m"
                              }
#line 1043 "prog_type.m"
                            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1029 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1029 "prog_type.m"
                              {
#line 983 "prog_type.m"
                                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 983 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 983 "prog_type.m"
                                  {
#line 983 "prog_type.m"
                                    parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 0)));
#line 983 "prog_type.m"
                                    parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 1)));
#line 983 "prog_type.m"
                                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1029 "prog_type.m"
                                    if (parse_tree__prog_type__succeeded)
#line 1029 "prog_type.m"
                                      {
#line 983 "prog_type.m"
                                        parse_tree__prog_type__MaybeCtorFieldName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 0)));
#line 983 "prog_type.m"
                                        *parse_tree__prog_type__SingleArgType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 1)));
#line 983 "prog_type.m"
                                        parse_tree__prog_type__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 2)));
#line 983 "prog_type.m"
                                        parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 3)));
#line 1048 "prog_type.m"
                                        if ((parse_tree__prog_type__MaybeCtorFieldName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1047 "prog_type.m"
                                          *parse_tree__prog_type__MaybeSingleArgName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1048 "prog_type.m"
                                        else
#line 1049 "prog_type.m"
                                          {
#line 1049 "prog_type.m"
                                            MR_Word parse_tree__prog_type__SymName_18;
#line 1049 "prog_type.m"
                                            MR_Word parse_tree__prog_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeCtorFieldName_17, (MR_Integer) 0)));
#line 1049 "prog_type.m"
                                            MR_String parse_tree__prog_type__V_24_24;
#line 1049 "prog_type.m"
                                            MR_Word parse_tree__prog_type__V_19_19;

#line 1049 "prog_type.m"
                                            parse_tree__prog_type__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 0)));
#line 1049 "prog_type.m"
                                            parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 1)));
#line 1050 "prog_type.m"
                                            {
#line 1050 "prog_type.m"
                                              parse_tree__prog_type__V_24_24 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__SymName_18);
                                            }
#line 1050 "prog_type.m"
                                            {
#line 1050 "prog_type.m"
                                              MR_Word base;
#line 1050 "prog_type.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_type.m"
                                              *parse_tree__prog_type__MaybeSingleArgName_16 = base;
#line 1050 "prog_type.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__V_24_24));
#line 1050 "prog_type.m"
                                            }
#line 1049 "prog_type.m"
                                          }
#line 1048 "prog_type.m"
                                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1029 "prog_type.m"
                                      }
#line 983 "prog_type.m"
                                  }
#line 1029 "prog_type.m"
                              }
#line 1029 "prog_type.m"
                          }
#line 1029 "prog_type.m"
                      }
#line 981 "prog_type.m"
                  }
#line 1029 "prog_type.m"
              }
#line 1029 "prog_type.m"
          }
#line 1029 "prog_type.m"
      }
#line 1029 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1029 "prog_type.m"
  }
#line 372 "prog_type.m"
}

#line 278 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0(
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
    MR_Integer parse_tree__prog_type__CastX_76 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 278 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_77 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 278 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_76 == parse_tree__prog_type__CastY_77);
#line 278 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 2547 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "prog_type.m"
    else
#line 278 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 278 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 278 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "prog_type.m"
        else
#line 278 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "prog_type.m"
            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
          else
#line 278 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 278 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
            else
#line 278 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 278 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
              else
#line 278 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 278 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                else
#line 278 "prog_type.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2585 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2591 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2597 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 2601 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
      else
#line 278 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 278 "prog_type.m"
            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
          else
#line 278 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "prog_type.m"
            else
#line 278 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 278 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
              else
#line 278 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 278 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                else
#line 278 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 278 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2639 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2645 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2651 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                        else
#line 2655 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
        else
#line 278 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 278 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 278 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
            else
#line 278 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
              else
#line 278 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 278 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "prog_type.m"
                else
#line 278 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 278 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 278 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2693 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2699 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2705 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                          else
#line 2709 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
          else
#line 278 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 278 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 278 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
              else
#line 278 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                else
#line 278 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 278 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 278 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 278 "prog_type.m"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2747 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2753 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2759 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                            else
#line 2763 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
            else
#line 278 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 278 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 278 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                else
#line 278 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 278 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 278 "prog_type.m"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 278 "prog_type.m"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2801 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2807 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2813 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                              else
#line 2817 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
              else
#line 278 "prog_type.m"
                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 278 "prog_type.m"
                  {
#line 278 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2830 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2836 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2842 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2848 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2854 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 278 "prog_type.m"
                                {
#line 278 "prog_type.m"
                                  MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "prog_type.m"
                                  MR_Integer parse_tree__prog_type__V_86_86 = (MR_Integer) parse_tree__prog_type__V_82_82;
#line 278 "prog_type.m"
                                  MR_Integer parse_tree__prog_type__V_87_87 = (MR_Integer) parse_tree__prog_type__V_5_5;

#line 278 "prog_type.m"
                                  {
#line 278 "prog_type.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_86_86, parse_tree__prog_type__V_87_87);
#line 278 "prog_type.m"
                                    return;
                                  }
#line 278 "prog_type.m"
                                }
#line 278 "prog_type.m"
                              else
#line 278 "prog_type.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2882 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                else
#line 278 "prog_type.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2888 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                  else
#line 2892 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                  }
#line 278 "prog_type.m"
                else
#line 278 "prog_type.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 278 "prog_type.m"
                    {
#line 278 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2907 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2913 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2919 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2925 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2931 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                              else
#line 278 "prog_type.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2937 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                else
#line 278 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 278 "prog_type.m"
                                    {
#line 278 "prog_type.m"
                                      MR_Word parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "prog_type.m"
                                      MR_Integer parse_tree__prog_type__V_88_88 = (MR_Integer) parse_tree__prog_type__V_83_83;
#line 278 "prog_type.m"
                                      MR_Integer parse_tree__prog_type__V_89_89 = (MR_Integer) parse_tree__prog_type__V_30_30;

#line 278 "prog_type.m"
                                      {
#line 278 "prog_type.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_88_88, parse_tree__prog_type__V_89_89);
#line 278 "prog_type.m"
                                        return;
                                      }
#line 278 "prog_type.m"
                                    }
#line 278 "prog_type.m"
                                  else
#line 278 "prog_type.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2965 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                    else
#line 2969 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                    }
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 278 "prog_type.m"
                      {
#line 278 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 278 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2984 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2990 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2996 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3002 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                              else
#line 278 "prog_type.m"
                                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3008 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                else
#line 278 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3014 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                  else
#line 278 "prog_type.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3020 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                    else
#line 278 "prog_type.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 278 "prog_type.m"
                                        {
#line 278 "prog_type.m"
                                          MR_Word parse_tree__prog_type__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_90_90 = (MR_Integer) parse_tree__prog_type__V_84_84;
#line 278 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_91_91 = (MR_Integer) parse_tree__prog_type__V_55_55;

#line 278 "prog_type.m"
                                          {
#line 278 "prog_type.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_90_90, parse_tree__prog_type__V_91_91);
#line 278 "prog_type.m"
                                            return;
                                          }
#line 278 "prog_type.m"
                                        }
#line 278 "prog_type.m"
                                      else
#line 3046 "parse_tree.prog_type.c"
                                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      }
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      {
#line 278 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 278 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3059 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3065 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3071 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3077 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                              else
#line 278 "prog_type.m"
                                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3083 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                else
#line 278 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3089 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                  else
#line 278 "prog_type.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3095 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                    else
#line 278 "prog_type.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3101 "parse_tree.prog_type.c"
                                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                      else
#line 278 "prog_type.m"
                                        {
#line 278 "prog_type.m"
                                          MR_Word parse_tree__prog_type__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_92_92 = (MR_Integer) parse_tree__prog_type__V_85_85;
#line 278 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_93_93 = (MR_Integer) parse_tree__prog_type__V_75_75;

#line 278 "prog_type.m"
                                          {
#line 278 "prog_type.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_92_92, parse_tree__prog_type__V_93_93);
#line 278 "prog_type.m"
                                            return;
                                          }
#line 278 "prog_type.m"
                                        }
#line 278 "prog_type.m"
                      }
#line 278 "prog_type.m"
  }
#line 278 "prog_type.m"
}

#line 278 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0(
#line 278 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 278 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 278 "prog_type.m"
{
#line 278 "prog_type.m"
  {
#line 278 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 278 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 278 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 278 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 278 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 278 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 278 "prog_type.m"
    else
#line 278 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 278 "prog_type.m"
        {
#line 278 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastX_11 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 278 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastY_12 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 278 "prog_type.m"
          parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_12 == parse_tree__prog_type__CastX_11);
#line 278 "prog_type.m"
        }
#line 278 "prog_type.m"
      else
#line 278 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "prog_type.m"
          {
#line 278 "prog_type.m"
            MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 278 "prog_type.m"
            MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 278 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 278 "prog_type.m"
          }
#line 278 "prog_type.m"
        else
#line 278 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 278 "prog_type.m"
            {
#line 278 "prog_type.m"
              MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 278 "prog_type.m"
              MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 278 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_8 == parse_tree__prog_type__CastX_7);
#line 278 "prog_type.m"
            }
#line 278 "prog_type.m"
          else
#line 278 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 278 "prog_type.m"
              {
#line 278 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_13 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 278 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_14 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 278 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_14 == parse_tree__prog_type__CastX_13);
#line 278 "prog_type.m"
              }
#line 278 "prog_type.m"
            else
#line 278 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 278 "prog_type.m"
                {
#line 278 "prog_type.m"
                  MR_Integer parse_tree__prog_type__CastX_17 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 278 "prog_type.m"
                  MR_Integer parse_tree__prog_type__CastY_18 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 278 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_18 == parse_tree__prog_type__CastX_17);
#line 278 "prog_type.m"
                }
#line 278 "prog_type.m"
              else
#line 278 "prog_type.m"
                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 278 "prog_type.m"
                  {
#line 278 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_4_4;

#line 278 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 278 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 278 "prog_type.m"
                      {
#line 278 "prog_type.m"
                        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3248 "parse_tree.prog_type.c"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_3_3 == parse_tree__prog_type__V_4_4);
#line 278 "prog_type.m"
                      }
#line 278 "prog_type.m"
                  }
#line 278 "prog_type.m"
                else
#line 278 "prog_type.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 278 "prog_type.m"
                    {
#line 278 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_10_10;

#line 278 "prog_type.m"
                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 278 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 278 "prog_type.m"
                        {
#line 278 "prog_type.m"
                          parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3273 "parse_tree.prog_type.c"
                          parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_9_9 == parse_tree__prog_type__V_10_10);
#line 278 "prog_type.m"
                        }
#line 278 "prog_type.m"
                    }
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 278 "prog_type.m"
                      {
#line 278 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_16_16;

#line 278 "prog_type.m"
                        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 278 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 278 "prog_type.m"
                          {
#line 278 "prog_type.m"
                            parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3298 "parse_tree.prog_type.c"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == parse_tree__prog_type__V_16_16);
#line 278 "prog_type.m"
                          }
#line 278 "prog_type.m"
                      }
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      {
#line 278 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_20_20;

#line 278 "prog_type.m"
                        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 278 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 278 "prog_type.m"
                          {
#line 278 "prog_type.m"
                            parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3321 "parse_tree.prog_type.c"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == parse_tree__prog_type__V_20_20);
#line 278 "prog_type.m"
                          }
#line 278 "prog_type.m"
                      }
#line 278 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 278 "prog_type.m"
  }
#line 278 "prog_type.m"
}

#line 305 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(
#line 305 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 305 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 305 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 305 "prog_type.m"
{
#line 305 "prog_type.m"
  {
#line 305 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 305 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 305 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 305 "prog_type.m"
    {
#line 305 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 305 "prog_type.m"
      return;
    }
#line 305 "prog_type.m"
  }
#line 305 "prog_type.m"
}

#line 305 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(
#line 305 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 305 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 305 "prog_type.m"
{
#line 3375 "parse_tree.prog_type.c"
  {
#line 3377 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3380 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3382 "parse_tree.prog_type.c"
  }
#line 305 "prog_type.m"
}

#line 295 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(
#line 295 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 295 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 295 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 295 "prog_type.m"
{
#line 295 "prog_type.m"
  {
#line 295 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 295 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 295 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 295 "prog_type.m"
    {
#line 295 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 295 "prog_type.m"
      return;
    }
#line 295 "prog_type.m"
  }
#line 295 "prog_type.m"
}

#line 295 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(
#line 295 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 295 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 295 "prog_type.m"
{
#line 3428 "parse_tree.prog_type.c"
  {
#line 3430 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3433 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3435 "parse_tree.prog_type.c"
  }
#line 295 "prog_type.m"
}

#line 301 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(
#line 301 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 301 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 301 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 301 "prog_type.m"
{
#line 301 "prog_type.m"
  {
#line 301 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 301 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 301 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 301 "prog_type.m"
    {
#line 301 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 301 "prog_type.m"
      return;
    }
#line 301 "prog_type.m"
  }
#line 301 "prog_type.m"
}

#line 301 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(
#line 301 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 301 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 301 "prog_type.m"
{
#line 3481 "parse_tree.prog_type.c"
  {
#line 3483 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3486 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3488 "parse_tree.prog_type.c"
  }
#line 301 "prog_type.m"
}

#line 289 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(
#line 289 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 289 "prog_type.m"
{
#line 289 "prog_type.m"
  {
#line 289 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 289 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 289 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 289 "prog_type.m"
    {
#line 289 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 289 "prog_type.m"
      return;
    }
#line 289 "prog_type.m"
  }
#line 289 "prog_type.m"
}

#line 289 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(
#line 289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 289 "prog_type.m"
{
#line 3534 "parse_tree.prog_type.c"
  {
#line 3536 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3539 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3541 "parse_tree.prog_type.c"
  }
#line 289 "prog_type.m"
}

#line 319 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0(
#line 319 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 319 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 319 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 319 "prog_type.m"
{
#line 319 "prog_type.m"
  {
#line 319 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 319 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 319 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_9 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 319 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_8 == parse_tree__prog_type__CastY_9);
#line 319 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 3570 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 319 "prog_type.m"
    else
#line 319 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 319 "prog_type.m"
        else
#line 3582 "parse_tree.prog_type.c"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 319 "prog_type.m"
      else
#line 319 "prog_type.m"
        {
#line 319 "prog_type.m"
          MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 319 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3593 "parse_tree.prog_type.c"
            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 319 "prog_type.m"
          else
#line 319 "prog_type.m"
            {
#line 319 "prog_type.m"
              MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));

#line 319 "prog_type.m"
              {
#line 319 "prog_type.m"
                parse_tree__prog_data____Compare____type_ctor_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_11_11, parse_tree__prog_type__V_5_5);
#line 319 "prog_type.m"
                return;
              }
#line 319 "prog_type.m"
            }
#line 319 "prog_type.m"
        }
#line 319 "prog_type.m"
  }
#line 319 "prog_type.m"
}

#line 319 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0(
#line 319 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 319 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 319 "prog_type.m"
{
#line 319 "prog_type.m"
  {
#line 319 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 319 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 319 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 319 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_7 == parse_tree__prog_type__CastY_8);
#line 319 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 319 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 319 "prog_type.m"
    else
#line 319 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "prog_type.m"
        {
#line 319 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 319 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 319 "prog_type.m"
          parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 319 "prog_type.m"
        }
#line 319 "prog_type.m"
      else
#line 319 "prog_type.m"
        {
#line 319 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 319 "prog_type.m"
          MR_Word parse_tree__prog_type__V_4_4;

#line 319 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 319 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 319 "prog_type.m"
            {
#line 319 "prog_type.m"
              parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3674 "parse_tree.prog_type.c"
              {
#line 3676 "parse_tree.prog_type.c"
                return parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__prog_type__V_3_3, parse_tree__prog_type__V_4_4);
              }
#line 319 "prog_type.m"
            }
#line 319 "prog_type.m"
        }
#line 319 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 319 "prog_type.m"
  }
#line 319 "prog_type.m"
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
#line 219 "prog_type.m"
      return;
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
#line 3731 "parse_tree.prog_type.c"
  {
#line 3733 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3736 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3738 "parse_tree.prog_type.c"
  }
#line 219 "prog_type.m"
}

#line 340 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0(
#line 340 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 340 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 340 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 340 "prog_type.m"
{
#line 340 "prog_type.m"
  {
#line 340 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 340 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 340 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 340 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 340 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 3767 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 340 "prog_type.m"
    else
#line 340 "prog_type.m"
      {
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 2)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 3)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 4)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 5)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_16_16;

#line 340 "prog_type.m"
        {
#line 340 "prog_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], &parse_tree__prog_type__V_16_16, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
        }
#line 3805 "parse_tree.prog_type.c"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == (MR_Integer) 0);
#line 340 "prog_type.m"
        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 340 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_16_16;
#line 340 "prog_type.m"
        else
#line 340 "prog_type.m"
          {
#line 340 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 340 "prog_type.m"
            {
#line 340 "prog_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[1], &parse_tree__prog_type__V_17_17, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
            }
#line 3825 "parse_tree.prog_type.c"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_17_17 == (MR_Integer) 0);
#line 340 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 340 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_17_17;
#line 340 "prog_type.m"
            else
#line 340 "prog_type.m"
              {
#line 340 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 340 "prog_type.m"
                {
#line 340 "prog_type.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_2[0], &parse_tree__prog_type__V_18_18, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                }
#line 3845 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_18_18 == (MR_Integer) 0);
#line 340 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 340 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_18_18;
#line 340 "prog_type.m"
                else
#line 340 "prog_type.m"
                  {
#line 340 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_19_19;

#line 340 "prog_type.m"
                    {
#line 340 "prog_type.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[4], &parse_tree__prog_type__V_19_19, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                    }
#line 3865 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == (MR_Integer) 0);
#line 340 "prog_type.m"
                    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 340 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_19_19;
#line 340 "prog_type.m"
                    else
#line 340 "prog_type.m"
                      {
#line 340 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_20_20;

#line 340 "prog_type.m"
                        {
#line 340 "prog_type.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[5], &parse_tree__prog_type__V_20_20, ((MR_Box) (parse_tree__prog_type__V_8_8)), ((MR_Box) (parse_tree__prog_type__V_14_14)));
                        }
#line 3885 "parse_tree.prog_type.c"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_20_20 == (MR_Integer) 0);
#line 340 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 340 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
                          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_20_20;
#line 340 "prog_type.m"
                        else
#line 340 "prog_type.m"
                          {
#line 340 "prog_type.m"
                            parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_9_9, parse_tree__prog_type__V_15_15);
#line 340 "prog_type.m"
                            return;
                          }
#line 340 "prog_type.m"
                      }
#line 340 "prog_type.m"
                  }
#line 340 "prog_type.m"
              }
#line 340 "prog_type.m"
          }
#line 340 "prog_type.m"
      }
#line 340 "prog_type.m"
  }
#line 340 "prog_type.m"
}

#line 340 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0(
#line 340 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 340 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 340 "prog_type.m"
{
#line 340 "prog_type.m"
  {
#line 340 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 340 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_15 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 340 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_16 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 340 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_15 == parse_tree__prog_type__CastY_16);
#line 340 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 340 "prog_type.m"
    else
#line 340 "prog_type.m"
      {
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_18_18;
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_19_19;
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_20_20;
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 5)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 340 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));

#line 3978 "parse_tree.prog_type.c"
        {
#line 3980 "parse_tree.prog_type.c"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], ((MR_Box) (parse_tree__prog_type__V_3_3)), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 340 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
          {
#line 3987 "parse_tree.prog_type.c"
            parse_tree__prog_type__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_type_scalar_common_1[1];
#line 3989 "parse_tree.prog_type.c"
            {
#line 3991 "parse_tree.prog_type.c"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
            }
#line 340 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
              {
#line 3998 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_type_scalar_common_2[0];
#line 4000 "parse_tree.prog_type.c"
                {
#line 4002 "parse_tree.prog_type.c"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_19_19, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
                }
#line 340 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
                  {
#line 4009 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[4];
#line 4011 "parse_tree.prog_type.c"
                    {
#line 4013 "parse_tree.prog_type.c"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                    }
#line 340 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
                      {
#line 4020 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 4022 "parse_tree.prog_type.c"
                        {
#line 4024 "parse_tree.prog_type.c"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_21_21, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                        }
#line 340 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 4029 "parse_tree.prog_type.c"
                          {
#line 4031 "parse_tree.prog_type.c"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_type__V_8_8, parse_tree__prog_type__V_14_14);
                          }
#line 340 "prog_type.m"
                      }
#line 340 "prog_type.m"
                  }
#line 340 "prog_type.m"
              }
#line 340 "prog_type.m"
          }
#line 340 "prog_type.m"
      }
#line 340 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 340 "prog_type.m"
  }
#line 340 "prog_type.m"
}

#line 1340 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1340 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1340 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1340 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7)
#line 1340 "prog_type.m"
{
#line 1342 "prog_type.m"
  while (MR_TRUE)
#line 1342 "prog_type.m"
    {
#line 1342 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1342 "prog_type.m"
      {
#line 1342 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1342 "prog_type.m"
        MR_Word parse_tree__prog_type__X_4;
#line 1342 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_5;

#line 1342 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1342 "prog_type.m"
          {
#line 1342 "prog_type.m"
            parse_tree__prog_type__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1342 "prog_type.m"
            parse_tree__prog_type__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1344 "prog_type.m"
            {
#line 1344 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__X_4, parse_tree__prog_type__Y_6, parse_tree__prog_type__Bindings_7);
            }
#line 1345 "prog_type.m"
            if (!(parse_tree__prog_type__succeeded))
#line 1346 "prog_type.m"
              {
#line 1346 "prog_type.m"
                /* direct tailcall eliminated */
#line 1346 "prog_type.m"
                {
#line 1346 "prog_type.m"
                  MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_5;

#line 1346 "prog_type.m"
                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1346 "prog_type.m"
                }
#line 1346 "prog_type.m"
                continue;
#line 1346 "prog_type.m"
              }
#line 1342 "prog_type.m"
          }
#line 1342 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1342 "prog_type.m"
      }
#line 1342 "prog_type.m"
      break;
#line 1342 "prog_type.m"
    }
#line 1340 "prog_type.m"
}

#line 1300 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1300 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1300 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1300 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6)
#line 1300 "prog_type.m"
{
#line 1304 "prog_type.m"
  while (MR_TRUE)
#line 1304 "prog_type.m"
    {
#line 1304 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1304 "prog_type.m"
      {
#line 1304 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1304 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 1))))
#line 1312 "prog_type.m"
          {
#line 1312 "prog_type.m"
            MR_Word parse_tree__prog_type__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1312 "prog_type.m"
            MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1312 "prog_type.m"
            MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1313 "prog_type.m"
            {
#line 1313 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_11, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
            }
#line 1312 "prog_type.m"
          }
#line 1304 "prog_type.m"
        else
#line 1304 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 0))))
#line 1304 "prog_type.m"
            {
#line 1304 "prog_type.m"
              MR_Word parse_tree__prog_type__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1304 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));

#line 1305 "prog_type.m"
              {
#line 1305 "prog_type.m"
                parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_5)));
              }
#line 1307 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1306 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1307 "prog_type.m"
              else
#line 1308 "prog_type.m"
                {
#line 1308 "prog_type.m"
                  MR_Word parse_tree__prog_type__BindingOfX_9;
#line 1308 "prog_type.m"
                  MR_Box parse_tree__prog_type__conv0_BindingOfX_9;

#line 1308 "prog_type.m"
                  {
#line 1308 "prog_type.m"
                    parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_9);
                  }
#line 1308 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1308 "prog_type.m"
                    {
#line 1308 "prog_type.m"
                      parse_tree__prog_type__BindingOfX_9 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_9);
#line 1308 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 1308 "prog_type.m"
                    }
#line 1308 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1309 "prog_type.m"
                    {
#line 1309 "prog_type.m"
                      /* direct tailcall eliminated */
#line 1309 "prog_type.m"
                      {
#line 1309 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_9;

#line 1309 "prog_type.m"
                        parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1309 "prog_type.m"
                      }
#line 1309 "prog_type.m"
                      continue;
#line 1309 "prog_type.m"
                    }
#line 1308 "prog_type.m"
                }
#line 1304 "prog_type.m"
            }
#line 1304 "prog_type.m"
          else
#line 1304 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1326 "prog_type.m"
              {
#line 1326 "prog_type.m"
                MR_Word parse_tree__prog_type__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1326 "prog_type.m"
                MR_Word parse_tree__prog_type__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1326 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1328 "prog_type.m"
                {
#line 1328 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_24)), ((MR_Box) (parse_tree__prog_type__Y_5)));
                }
#line 1329 "prog_type.m"
                if (!(parse_tree__prog_type__succeeded))
#line 1329 "prog_type.m"
                  {
#line 1330 "prog_type.m"
                    {
#line 1330 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_26, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                    }
#line 1329 "prog_type.m"
                    if (!(parse_tree__prog_type__succeeded))
#line 1332 "prog_type.m"
                      {
#line 1332 "prog_type.m"
                        MR_Word parse_tree__prog_type__BindingOfX_22;
#line 1332 "prog_type.m"
                        MR_Box parse_tree__prog_type__conv1_BindingOfX_22;

#line 1332 "prog_type.m"
                        {
#line 1332 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_24)), &parse_tree__prog_type__conv1_BindingOfX_22);
                        }
#line 1332 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1332 "prog_type.m"
                          {
#line 1332 "prog_type.m"
                            parse_tree__prog_type__BindingOfX_22 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfX_22);
#line 1332 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1332 "prog_type.m"
                          }
#line 1332 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1333 "prog_type.m"
                          {
#line 1333 "prog_type.m"
                            /* direct tailcall eliminated */
#line 1333 "prog_type.m"
                            {
#line 1333 "prog_type.m"
                              MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_22;

#line 1333 "prog_type.m"
                              parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1333 "prog_type.m"
                            }
#line 1333 "prog_type.m"
                            continue;
#line 1333 "prog_type.m"
                          }
#line 1332 "prog_type.m"
                      }
#line 1329 "prog_type.m"
                  }
#line 1326 "prog_type.m"
              }
#line 1304 "prog_type.m"
            else
#line 1304 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1315 "prog_type.m"
                {
#line 1315 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1315 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1315 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1317 "prog_type.m"
                  {
#line 1317 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
#line 1318 "prog_type.m"
                  if (!(parse_tree__prog_type__succeeded))
#line 1319 "prog_type.m"
                    {
#line 1319 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16;

#line 1319 "prog_type.m"
                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__MaybeRet_13)) == (MR_mktag((MR_Integer) 1)));
#line 1319 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1319 "prog_type.m"
                        {
#line 1319 "prog_type.m"
                          parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 1320 "prog_type.m"
                          /* direct tailcall eliminated */
#line 1320 "prog_type.m"
                          {
#line 1320 "prog_type.m"
                            MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__Ret_16;

#line 1320 "prog_type.m"
                            parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1320 "prog_type.m"
                          }
#line 1320 "prog_type.m"
                          continue;
#line 1319 "prog_type.m"
                        }
#line 1319 "prog_type.m"
                    }
#line 1315 "prog_type.m"
                }
#line 1304 "prog_type.m"
              else
#line 1304 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1336 "prog_type.m"
                  {
#line 1336 "prog_type.m"
                    MR_Word parse_tree__prog_type__X_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1336 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1337 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1337 "prog_type.m"
                    {
#line 1337 "prog_type.m"
                      MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__X_27;

#line 1337 "prog_type.m"
                      parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1337 "prog_type.m"
                    }
#line 1337 "prog_type.m"
                    continue;
#line 1336 "prog_type.m"
                  }
#line 1304 "prog_type.m"
                else
#line 1304 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1323 "prog_type.m"
                    {
#line 1323 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1323 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1324 "prog_type.m"
                      {
#line 1324 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_21, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                      }
#line 1323 "prog_type.m"
                    }
#line 1304 "prog_type.m"
                  else
#line 1304 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1304 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1304 "prog_type.m"
      }
#line 1304 "prog_type.m"
      break;
#line 1304 "prog_type.m"
    }
#line 1300 "prog_type.m"
}

#line 1279 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1279 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1279 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1279 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1279 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8)
#line 1279 "prog_type.m"
{
#line 1283 "prog_type.m"
  while (MR_TRUE)
#line 1283 "prog_type.m"
    {
#line 1283 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1283 "prog_type.m"
      {
#line 1283 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1283 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1283 "prog_type.m"
          {
#line 1283 "prog_type.m"
            *parse_tree__prog_type__ArgsY_3 = parse_tree__prog_type__HeadVar__2_2;
#line 1283 "prog_type.m"
            *parse_tree__prog_type__KindY_5 = parse_tree__prog_type__HeadVar__4_4;
#line 1283 "prog_type.m"
            *parse_tree__prog_type__STATE_VARIABLE_Bindings_8 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7;
#line 1283 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1283 "prog_type.m"
          }
#line 1283 "prog_type.m"
        else
#line 1285 "prog_type.m"
          {
#line 1285 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgX_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1285 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1285 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgY0_17;
#line 1285 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsY0_18;
#line 1285 "prog_type.m"
            MR_Word parse_tree__prog_type__KindY1_24;
#line 1285 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;
#line 1285 "prog_type.m"
            MR_Word parse_tree__prog_type__V_28_28;

#line 1284 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1284 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1284 "prog_type.m"
              {
#line 1284 "prog_type.m"
                parse_tree__prog_type__ArgY0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1284 "prog_type.m"
                parse_tree__prog_type__ArgsY0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1286 "prog_type.m"
                {
#line 1286 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__ArgX_15, parse_tree__prog_type__ArgY0_17, parse_tree__prog_type__HeadTypeParams_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                }
#line 1285 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1285 "prog_type.m"
                  {
#line 1287 "prog_type.m"
                    {
#line 1287 "prog_type.m"
                      parse_tree__prog_type__V_28_28 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type__ArgY0_17);
                    }
#line 1287 "prog_type.m"
                    {
#line 1287 "prog_type.m"
                      parse_tree__prog_type__KindY1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 1287 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__4_4));
#line 1287 "prog_type.m"
                    }
#line 1288 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1288 "prog_type.m"
                    {
#line 1288 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__ArgsX_16;
#line 1288 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__ArgsY0_18;
#line 1288 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__4__tmp_copy_4 = parse_tree__prog_type__KindY1_24;
#line 1288 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1288 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7;
#line 1288 "prog_type.m"
                      parse_tree__prog_type__HeadVar__4_4 = parse_tree__prog_type__HeadVar__4__tmp_copy_4;
#line 1288 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1288 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1288 "prog_type.m"
                    }
#line 1288 "prog_type.m"
                    continue;
#line 1285 "prog_type.m"
                  }
#line 1284 "prog_type.m"
              }
#line 1285 "prog_type.m"
          }
#line 1283 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1283 "prog_type.m"
      }
#line 1283 "prog_type.m"
      break;
#line 1283 "prog_type.m"
    }
#line 1279 "prog_type.m"
}

#line 1267 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1267 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1267 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1267 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1267 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20)
#line 1267 "prog_type.m"
{
#line 1272 "prog_type.m"
  {
#line 1272 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1272 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1272 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsX_16;
#line 1272 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY0_17;
#line 1272 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY_18;

#line 1273 "prog_type.m"
    {
#line 1273 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsX_9, &parse_tree__prog_type__RevArgsX_16);
    }
#line 1274 "prog_type.m"
    {
#line 1274 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsY0_10, &parse_tree__prog_type__RevArgsY0_17);
    }
#line 1275 "prog_type.m"
    {
#line 1275 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(parse_tree__prog_type__RevArgsX_16, parse_tree__prog_type__RevArgsY0_17, &parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__KindY0_12, parse_tree__prog_type__KindY_13, parse_tree__prog_type__HeadTypeParams_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19, parse_tree__prog_type__STATE_VARIABLE_Bindings_20);
    }
#line 1272 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1272 "prog_type.m"
      {
#line 1277 "prog_type.m"
        {
#line 1277 "prog_type.m"
          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__ArgsY_11);
        }
#line 1277 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1272 "prog_type.m"
      }
#line 1272 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1272 "prog_type.m"
  }
#line 1267 "prog_type.m"
}

#line 1214 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1214 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1214 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33)
#line 1214 "prog_type.m"
{
#line 1219 "prog_type.m"
  while (MR_TRUE)
#line 1219 "prog_type.m"
    {
#line 1219 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1219 "prog_type.m"
      {
#line 1219 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1219 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2))))
#line 1225 "prog_type.m"
          {
#line 1226 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1227 "prog_type.m"
              {
#line 1227 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
              }
#line 1225 "prog_type.m"
          }
#line 1219 "prog_type.m"
        else
#line 1219 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1))))
#line 1219 "prog_type.m"
            {
#line 1219 "prog_type.m"
              MR_Word parse_tree__prog_type__NameY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1219 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1219 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1219 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_15;
#line 1219 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY_16;
#line 1219 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48;
#line 1219 "prog_type.m"
              MR_Word parse_tree__prog_type__V_49_49;

#line 1220 "prog_type.m"
              {
#line 1220 "prog_type.m"
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_13, &parse_tree__prog_type__ArgsY_15, parse_tree__prog_type__KindY0_14, &parse_tree__prog_type__KindY_16, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48);
              }
#line 1219 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1219 "prog_type.m"
                {
#line 1222 "prog_type.m"
                  {
#line 1222 "prog_type.m"
                    parse_tree__prog_type__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 0) = ((MR_Box) (parse_tree__prog_type__NameY_12));
#line 1222 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_15));
#line 1222 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 2) = ((MR_Box) (parse_tree__prog_type__KindY_16));
#line 1222 "prog_type.m"
                  }
#line 1222 "prog_type.m"
                  {
#line 1222 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_49_49, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                  }
#line 1219 "prog_type.m"
                }
#line 1219 "prog_type.m"
            }
#line 1219 "prog_type.m"
          else
#line 1219 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1239 "prog_type.m"
              {
#line 1239 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1239 "prog_type.m"
                MR_Word parse_tree__prog_type__VarY_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1239 "prog_type.m"
                MR_Word parse_tree__prog_type__Kind0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1239 "prog_type.m"
                MR_Integer parse_tree__prog_type__NArgsX0_24;
#line 1239 "prog_type.m"
                MR_Integer parse_tree__prog_type__NArgsY0_25;
#line 1239 "prog_type.m"
                MR_Word parse_tree__prog_type__Result_26;
#line 1239 "prog_type.m"
                MR_Word parse_tree__prog_type__ArgsY0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1240 "prog_type.m"
                {
#line 1240 "prog_type.m"
                  mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__NArgsX0_24);
                }
#line 1241 "prog_type.m"
                {
#line 1241 "prog_type.m"
                  mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__NArgsY0_25);
                }
#line 1242 "prog_type.m"
                {
#line 1242 "prog_type.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_type__Result_26, parse_tree__prog_type__NArgsX0_24, parse_tree__prog_type__NArgsY0_25);
                }
#line 1249 "prog_type.m"
                if ((parse_tree__prog_type__Result_26 == (MR_Integer) 1))
#line 1244 "prog_type.m"
                  {
#line 1244 "prog_type.m"
                    MR_Word parse_tree__prog_type__Kind_27;
#line 1244 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40;
#line 1244 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_41_41;
#line 1244 "prog_type.m"
                    MR_Word parse_tree__prog_type__ArgsY_55;

#line 1245 "prog_type.m"
                    {
#line 1245 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__ArgsY_55, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_27, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40);
                    }
#line 1244 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1244 "prog_type.m"
                      {
#line 1247 "prog_type.m"
                        {
#line 1247 "prog_type.m"
                          parse_tree__prog_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1247 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 1) = ((MR_Box) (parse_tree__prog_type__VarY_22));
#line 1247 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 2) = ((MR_Box) (parse_tree__prog_type__ArgsY_55));
#line 1247 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 3) = ((MR_Box) (parse_tree__prog_type__Kind_27));
#line 1247 "prog_type.m"
                        }
#line 1247 "prog_type.m"
                        {
#line 1247 "prog_type.m"
                          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_41_41, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                        }
#line 1244 "prog_type.m"
                      }
#line 1244 "prog_type.m"
                  }
#line 1249 "prog_type.m"
                else
#line 1249 "prog_type.m"
                  if ((parse_tree__prog_type__Result_26 == (MR_Integer) 0))
#line 1250 "prog_type.m"
                    {
#line 1250 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38;
#line 1250 "prog_type.m"
                      MR_Word parse_tree__prog_type__Kind_56;
#line 1252 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_28_28;

#line 1252 "prog_type.m"
                      {
#line 1252 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__V_28_28, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38);
                      }
#line 1250 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1254 "prog_type.m"
                        {
#line 1254 "prog_type.m"
                          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__VarY_22, parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                        }
#line 1250 "prog_type.m"
                    }
#line 1249 "prog_type.m"
                  else
#line 1256 "prog_type.m"
                    {
#line 1256 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsX_29;
#line 1256 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35;
#line 1256 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_36_36;
#line 1256 "prog_type.m"
                      MR_Word parse_tree__prog_type__Kind_57;

#line 1257 "prog_type.m"
                      {
#line 1257 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsY0_59, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__ArgsX_29, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_57, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35);
                      }
#line 1256 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1256 "prog_type.m"
                        {
#line 1259 "prog_type.m"
                          {
#line 1259 "prog_type.m"
                            parse_tree__prog_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1259 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 1) = ((MR_Box) (parse_tree__prog_type__VarX_8));
#line 1259 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 2) = ((MR_Box) (parse_tree__prog_type__ArgsX_29));
#line 1259 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 3) = ((MR_Box) (parse_tree__prog_type__Kind_57));
#line 1259 "prog_type.m"
                          }
#line 1259 "prog_type.m"
                          {
#line 1259 "prog_type.m"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_22, parse_tree__prog_type__V_36_36, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1256 "prog_type.m"
                        }
#line 1256 "prog_type.m"
                    }
#line 1239 "prog_type.m"
              }
#line 1219 "prog_type.m"
            else
#line 1219 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1229 "prog_type.m"
                {
#line 1230 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1229 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1231 "prog_type.m"
                    {
#line 1231 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                    }
#line 1229 "prog_type.m"
                }
#line 1219 "prog_type.m"
              else
#line 1219 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1263 "prog_type.m"
                  {
#line 1263 "prog_type.m"
                    MR_Word parse_tree__prog_type__RawY_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1263 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1264 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1264 "prog_type.m"
                    {
#line 1264 "prog_type.m"
                      MR_Word parse_tree__prog_type__TypeY__tmp_copy_7 = parse_tree__prog_type__RawY_30;

#line 1264 "prog_type.m"
                      parse_tree__prog_type__TypeY_7 = parse_tree__prog_type__TypeY__tmp_copy_7;
#line 1264 "prog_type.m"
                    }
#line 1264 "prog_type.m"
                    continue;
#line 1263 "prog_type.m"
                  }
#line 1219 "prog_type.m"
                else
#line 1219 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1233 "prog_type.m"
                    {
#line 1233 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43;
#line 1233 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_44_44;
#line 1233 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsY0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1233 "prog_type.m"
                      MR_Word parse_tree__prog_type__KindY0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1233 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsY_53;
#line 1233 "prog_type.m"
                      MR_Word parse_tree__prog_type__KindY_54;

#line 1234 "prog_type.m"
                      {
#line 1234 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_51, &parse_tree__prog_type__ArgsY_53, parse_tree__prog_type__KindY0_52, &parse_tree__prog_type__KindY_54, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43);
                      }
#line 1233 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1233 "prog_type.m"
                        {
#line 1236 "prog_type.m"
                          {
#line 1236 "prog_type.m"
                            parse_tree__prog_type__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1236 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_53));
#line 1236 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 2) = ((MR_Box) (parse_tree__prog_type__KindY_54));
#line 1236 "prog_type.m"
                          }
#line 1236 "prog_type.m"
                          {
#line 1236 "prog_type.m"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_44_44, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1233 "prog_type.m"
                        }
#line 1233 "prog_type.m"
                    }
#line 1219 "prog_type.m"
                  else
#line 1219 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1219 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1219 "prog_type.m"
      }
#line 1219 "prog_type.m"
      break;
#line 1219 "prog_type.m"
    }
#line 1214 "prog_type.m"
}

#line 1183 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1183 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1183 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22)
#line 1183 "prog_type.m"
{
#line 1189 "prog_type.m"
  {
#line 1189 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1189 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1189 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsX_11;
#line 1187 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;

#line 1187 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1187 "prog_type.m"
      {
#line 1187 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1187 "prog_type.m"
        parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1187 "prog_type.m"
        parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1188 "prog_type.m"
        {
#line 1188 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_10, parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
        }
#line 1187 "prog_type.m"
      }
#line 1187 "prog_type.m"
    else
#line 1191 "prog_type.m"
      {
#line 1191 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_13;
#line 1191 "prog_type.m"
        MR_Word parse_tree__prog_type__ArgsY_14;
#line 1189 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;

#line 1189 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1189 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1189 "prog_type.m"
          {
#line 1189 "prog_type.m"
            parse_tree__prog_type__VarY_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1189 "prog_type.m"
            parse_tree__prog_type__ArgsY_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1189 "prog_type.m"
            parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1190 "prog_type.m"
            {
#line 1190 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__VarY_13, parse_tree__prog_type__ArgsY_14, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
            }
#line 1189 "prog_type.m"
          }
#line 1189 "prog_type.m"
        else
#line 1197 "prog_type.m"
          {
#line 1197 "prog_type.m"
            MR_Word parse_tree__prog_type__RawX_16;
#line 1191 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 1191 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1191 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1191 "prog_type.m"
              {
#line 1191 "prog_type.m"
                parse_tree__prog_type__RawX_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1191 "prog_type.m"
                parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1194 "prog_type.m"
                {
#line 1194 "prog_type.m"
                  MR_Word parse_tree__prog_type__RawY_18;
#line 1192 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19;

#line 1192 "prog_type.m"
                  parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1192 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1192 "prog_type.m"
                    {
#line 1192 "prog_type.m"
                      parse_tree__prog_type__RawY_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1192 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1193 "prog_type.m"
                      {
#line 1193 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__RawY_18, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                      }
#line 1192 "prog_type.m"
                    }
#line 1192 "prog_type.m"
                  else
#line 1195 "prog_type.m"
                    {
#line 1195 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1194 "prog_type.m"
                }
#line 1191 "prog_type.m"
              }
#line 1191 "prog_type.m"
            else
#line 1199 "prog_type.m"
              {
#line 1199 "prog_type.m"
                MR_Word parse_tree__prog_type__RawY_28;
#line 1197 "prog_type.m"
                MR_Word parse_tree__prog_type__V_20_20;

#line 1197 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1197 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1197 "prog_type.m"
                  {
#line 1197 "prog_type.m"
                    parse_tree__prog_type__RawY_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1197 "prog_type.m"
                    parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1198 "prog_type.m"
                    {
#line 1198 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__RawY_28, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1197 "prog_type.m"
                  }
#line 1199 "prog_type.m"
              }
#line 1197 "prog_type.m"
          }
#line 1191 "prog_type.m"
      }
#line 1189 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1189 "prog_type.m"
  }
#line 1183 "prog_type.m"
}

#line 1151 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1151 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1151 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23)
#line 1151 "prog_type.m"
{
#line 1156 "prog_type.m"
  {
#line 1156 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1156 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 2))))
#line 1164 "prog_type.m"
      {
#line 1164 "prog_type.m"
        MR_Word parse_tree__prog_type__BuiltinType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1164 "prog_type.m"
        MR_Word parse_tree__prog_type__V_42_42;

#line 1165 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2)));
#line 1165 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1165 "prog_type.m"
          {
#line 1165 "prog_type.m"
            parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1165 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__BuiltinType_15 == parse_tree__prog_type__V_42_42);
#line 1164 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1164 "prog_type.m"
              {
#line 1165 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_23 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22;
#line 1165 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1164 "prog_type.m"
              }
#line 1165 "prog_type.m"
          }
#line 1164 "prog_type.m"
      }
#line 1156 "prog_type.m"
    else
#line 1156 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 1))))
#line 1156 "prog_type.m"
        {
#line 1156 "prog_type.m"
          MR_Word parse_tree__prog_type__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1156 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1156 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsY_13;
#line 1156 "prog_type.m"
          MR_Word parse_tree__prog_type__V_41_41;
#line 1156 "prog_type.m"
          MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1157 "prog_type.m"
          MR_Word parse_tree__prog_type__V_14_14;

#line 1157 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1)));
#line 1157 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 1157 "prog_type.m"
            {
#line 1157 "prog_type.m"
              parse_tree__prog_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1157 "prog_type.m"
              parse_tree__prog_type__ArgsY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1157 "prog_type.m"
              parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1157 "prog_type.m"
              {
#line 1157 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__SymName_10, parse_tree__prog_type__V_41_41);
              }
#line 1156 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1162 "prog_type.m"
                {
#line 1162 "prog_type.m"
                  return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__ArgsY_13, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                }
#line 1157 "prog_type.m"
            }
#line 1156 "prog_type.m"
        }
#line 1156 "prog_type.m"
      else
#line 1156 "prog_type.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1156 "prog_type.m"
          {
#line 1156 "prog_type.m"
            MR_Word parse_tree__prog_type__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1156 "prog_type.m"
            MR_Word parse_tree__prog_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1156 "prog_type.m"
            MR_Word parse_tree__prog_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1156 "prog_type.m"
            MR_Word parse_tree__prog_type__V_52_52;
#line 1156 "prog_type.m"
            MR_Word parse_tree__prog_type__V_53_53;
#line 1156 "prog_type.m"
            MR_Word parse_tree__prog_type__V_54_54;

#line 1168 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1168 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1168 "prog_type.m"
              {
#line 1168 "prog_type.m"
                parse_tree__prog_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1168 "prog_type.m"
                parse_tree__prog_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1168 "prog_type.m"
                parse_tree__prog_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1156 "prog_type.m"
                if ((parse_tree__prog_type__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "prog_type.m"
                  {
#line 1168 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1167 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1167 "prog_type.m"
                      {
#line 1168 "prog_type.m"
                        parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1167 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1167 "prog_type.m"
                          {
#line 1168 "prog_type.m"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1167 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1169 "prog_type.m"
                              {
#line 1169 "prog_type.m"
                                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                              }
#line 1167 "prog_type.m"
                          }
#line 1167 "prog_type.m"
                      }
#line 1167 "prog_type.m"
                  }
#line 1156 "prog_type.m"
                else
#line 1171 "prog_type.m"
                  {
#line 1171 "prog_type.m"
                    MR_Word parse_tree__prog_type__RetX_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, (MR_Integer) 0)));
#line 1171 "prog_type.m"
                    MR_Word parse_tree__prog_type__RetY_19;
#line 1171 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1172 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1171 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1171 "prog_type.m"
                      {
#line 1172 "prog_type.m"
                        parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1171 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1171 "prog_type.m"
                          {
#line 1172 "prog_type.m"
                            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 1172 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1172 "prog_type.m"
                              {
#line 1172 "prog_type.m"
                                parse_tree__prog_type__RetY_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_53_53, (MR_Integer) 0)));
#line 1173 "prog_type.m"
                                {
#line 1173 "prog_type.m"
                                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                                }
#line 1171 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 1174 "prog_type.m"
                                  {
#line 1174 "prog_type.m"
                                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RetX_18, parse_tree__prog_type__RetY_19, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                                  }
#line 1172 "prog_type.m"
                              }
#line 1171 "prog_type.m"
                          }
#line 1171 "prog_type.m"
                      }
#line 1171 "prog_type.m"
                  }
#line 1168 "prog_type.m"
              }
#line 1156 "prog_type.m"
          }
#line 1156 "prog_type.m"
        else
#line 1156 "prog_type.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1176 "prog_type.m"
            {
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsX_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_40;
#line 1176 "prog_type.m"
              MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1177 "prog_type.m"
              MR_Word parse_tree__prog_type__V_21_21;

#line 1177 "prog_type.m"
              parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1177 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1177 "prog_type.m"
                {
#line 1177 "prog_type.m"
                  parse_tree__prog_type__ArgsY_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1177 "prog_type.m"
                  parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1178 "prog_type.m"
                  {
#line 1178 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_39, parse_tree__prog_type__ArgsY_40, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                  }
#line 1177 "prog_type.m"
                }
#line 1176 "prog_type.m"
            }
#line 1156 "prog_type.m"
          else
#line 1156 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1156 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1156 "prog_type.m"
  }
#line 1151 "prog_type.m"
}

#line 1130 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1130 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1130 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16)
#line 1130 "prog_type.m"
{
#line 1138 "prog_type.m"
  while (MR_TRUE)
#line 1138 "prog_type.m"
    {
#line 1138 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1138 "prog_type.m"
      {
#line 1138 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;
#line 1138 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfVar_12;
#line 1134 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfVar_12;

#line 1134 "prog_type.m"
        {
#line 1134 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, ((MR_Box) (parse_tree__prog_type__Var_7)), &parse_tree__prog_type__conv0_BindingOfVar_12);
        }
#line 1134 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1134 "prog_type.m"
          {
#line 1134 "prog_type.m"
            parse_tree__prog_type__BindingOfVar_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfVar_12);
#line 1134 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1134 "prog_type.m"
          }
#line 1138 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1135 "prog_type.m"
          {
#line 1135 "prog_type.m"
            MR_Word parse_tree__prog_type__Var2_13;
#line 1135 "prog_type.m"
            MR_Word parse_tree__prog_type__V_14_14;

#line 1135 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__BindingOfVar_12)) == (MR_mktag((MR_Integer) 0)));
#line 1135 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1135 "prog_type.m"
              {
#line 1135 "prog_type.m"
                parse_tree__prog_type__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 0)));
#line 1135 "prog_type.m"
                parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 1)));
#line 1136 "prog_type.m"
                /* direct tailcall eliminated */
#line 1136 "prog_type.m"
                {
#line 1136 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var__tmp_copy_7 = parse_tree__prog_type__Var2_13;

#line 1136 "prog_type.m"
                  parse_tree__prog_type__Var_7 = parse_tree__prog_type__Var__tmp_copy_7;
#line 1136 "prog_type.m"
                }
#line 1136 "prog_type.m"
                continue;
#line 1135 "prog_type.m"
              }
#line 1135 "prog_type.m"
          }
#line 1138 "prog_type.m"
        else
#line 1141 "prog_type.m"
          {
#line 1139 "prog_type.m"
            {
#line 1139 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__HeadVar_8)));
            }
#line 1141 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1139 "prog_type.m"
              {
#line 1139 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_16 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15;
#line 1139 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1139 "prog_type.m"
              }
#line 1141 "prog_type.m"
            else
#line 1142 "prog_type.m"
              {
#line 1142 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeInfo_23_23;
#line 1142 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_24_24;
#line 1142 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 1142 "prog_type.m"
                {
#line 1142 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), parse_tree__prog_type__HeadTypeParams_10);
                }
#line 1142 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1142 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1142 "prog_type.m"
                  {
#line 5534 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5536 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1143 "prog_type.m"
                    {
#line 1143 "prog_type.m"
                      parse_tree__prog_type__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 0) = ((MR_Box) (parse_tree__prog_type__HeadVar_8));
#line 1143 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1143 "prog_type.m"
                    }
#line 1143 "prog_type.m"
                    {
#line 1143 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_23_23, parse_tree__prog_type__TypeCtorInfo_24_24, ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__V_18_18)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, parse_tree__prog_type__STATE_VARIABLE_Bindings_16);
                    }
#line 1143 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1142 "prog_type.m"
                  }
#line 1142 "prog_type.m"
              }
#line 1141 "prog_type.m"
          }
#line 1138 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1138 "prog_type.m"
      }
#line 1138 "prog_type.m"
      break;
#line 1138 "prog_type.m"
    }
#line 1130 "prog_type.m"
}

#line 1087 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1087 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1087 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19)
#line 1087 "prog_type.m"
{
#line 1093 "prog_type.m"
  {
#line 1093 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1091 "prog_type.m"
    {
#line 1091 "prog_type.m"
      parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Y_8)), parse_tree__prog_type__HeadTypeParams_10);
    }
#line 1093 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1092 "prog_type.m"
      {
#line 1092 "prog_type.m"
        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__X_7, parse_tree__prog_type__Y_8, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
      }
#line 1093 "prog_type.m"
    else
#line 1095 "prog_type.m"
      {
#line 1093 "prog_type.m"
        {
#line 1093 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), parse_tree__prog_type__HeadTypeParams_10);
        }
#line 1095 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1094 "prog_type.m"
          {
#line 1094 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__Y_8, parse_tree__prog_type__X_7, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
          }
#line 1095 "prog_type.m"
        else
#line 1110 "prog_type.m"
          {
#line 1110 "prog_type.m"
            MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1095 "prog_type.m"
            MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1095 "prog_type.m"
            {
#line 1095 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_12);
            }
#line 1095 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1095 "prog_type.m"
              {
#line 1095 "prog_type.m"
                parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1095 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1095 "prog_type.m"
              }
#line 1110 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1100 "prog_type.m"
              {
#line 1100 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_13;
#line 1096 "prog_type.m"
                MR_Box parse_tree__prog_type__conv1_BindingOfY_13;

#line 1096 "prog_type.m"
                {
#line 1096 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv1_BindingOfY_13);
                }
#line 1096 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1096 "prog_type.m"
                  {
#line 1096 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_13 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfY_13);
#line 1096 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1096 "prog_type.m"
                  }
#line 1100 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1099 "prog_type.m"
                  {
#line 1099 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__BindingOfY_13, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                  }
#line 1100 "prog_type.m"
                else
#line 1102 "prog_type.m"
                  {
#line 1102 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfX_14;
#line 1103 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_44_44;
#line 1103 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_42_42;
#line 1103 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_15_15;

#line 1102 "prog_type.m"
                    {
#line 1102 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfX_12, &parse_tree__prog_type__SubstBindingOfX_14);
                    }
#line 1103 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfX_14)) == (MR_mktag((MR_Integer) 0)));
#line 1103 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1103 "prog_type.m"
                      {
#line 1103 "prog_type.m"
                        parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 0)));
#line 1103 "prog_type.m"
                        parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 1)));
#line 5705 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1103 "prog_type.m"
                        {
#line 1103 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__V_42_42)));
                        }
#line 1103 "prog_type.m"
                      }
#line 1105 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1103 "prog_type.m"
                      {
#line 1103 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1103 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1103 "prog_type.m"
                      }
#line 1105 "prog_type.m"
                    else
#line 1106 "prog_type.m"
                      {
#line 1106 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_34_34;
#line 1106 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_35_35;

#line 1106 "prog_type.m"
                        {
#line 1106 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfX_14, parse_tree__prog_type__Y_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1106 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1106 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1106 "prog_type.m"
                          {
#line 5744 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5746 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1107 "prog_type.m"
                            {
#line 1107 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_34_34, parse_tree__prog_type__TypeCtorInfo_35_35, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfX_14)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1107 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1106 "prog_type.m"
                          }
#line 1106 "prog_type.m"
                      }
#line 1102 "prog_type.m"
                  }
#line 1100 "prog_type.m"
              }
#line 1110 "prog_type.m"
            else
#line 1120 "prog_type.m"
              {
#line 1120 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_27;
#line 1112 "prog_type.m"
                MR_Box parse_tree__prog_type__conv2_BindingOfY_27;

#line 1112 "prog_type.m"
                {
#line 1112 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv2_BindingOfY_27);
                }
#line 1112 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1112 "prog_type.m"
                  {
#line 1112 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_27 = ((MR_Word) parse_tree__prog_type__conv2_BindingOfY_27);
#line 1112 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1112 "prog_type.m"
                  }
#line 1120 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1113 "prog_type.m"
                  {
#line 1113 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfY_16;
#line 1114 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_45_45;
#line 1114 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_43_43;
#line 1114 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_17_17;

#line 1113 "prog_type.m"
                    {
#line 1113 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfY_27, &parse_tree__prog_type__SubstBindingOfY_16);
                    }
#line 1114 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfY_16)) == (MR_mktag((MR_Integer) 0)));
#line 1114 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1114 "prog_type.m"
                      {
#line 1114 "prog_type.m"
                        parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 0)));
#line 1114 "prog_type.m"
                        parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 1)));
#line 5815 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1114 "prog_type.m"
                        {
#line 1114 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_45_45, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_43_43)));
                        }
#line 1114 "prog_type.m"
                      }
#line 1116 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1114 "prog_type.m"
                      {
#line 1114 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1114 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1114 "prog_type.m"
                      }
#line 1116 "prog_type.m"
                    else
#line 1117 "prog_type.m"
                      {
#line 1117 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_38_38;
#line 1117 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_39_39;

#line 1117 "prog_type.m"
                        {
#line 1117 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfY_16, parse_tree__prog_type__X_7, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1117 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1117 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1117 "prog_type.m"
                          {
#line 5854 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5856 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1118 "prog_type.m"
                            {
#line 1118 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_38_38, parse_tree__prog_type__TypeCtorInfo_39_39, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfY_16)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1118 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1117 "prog_type.m"
                          }
#line 1117 "prog_type.m"
                      }
#line 1113 "prog_type.m"
                  }
#line 1120 "prog_type.m"
                else
#line 1124 "prog_type.m"
                  {
#line 1122 "prog_type.m"
                    {
#line 1122 "prog_type.m"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_8)));
                    }
#line 1124 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1122 "prog_type.m"
                      *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1124 "prog_type.m"
                    else
#line 1125 "prog_type.m"
                      {
#line 1125 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_25_25;

#line 1125 "prog_type.m"
                        {
#line 1125 "prog_type.m"
                          parse_tree__prog_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__Y_8));
#line 1125 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1125 "prog_type.m"
                        }
#line 1125 "prog_type.m"
                        {
#line 1125 "prog_type.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_25_25)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                        }
#line 1125 "prog_type.m"
                      }
#line 1124 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1124 "prog_type.m"
                  }
#line 1120 "prog_type.m"
              }
#line 1110 "prog_type.m"
          }
#line 1095 "prog_type.m"
      }
#line 1093 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1093 "prog_type.m"
  }
#line 1087 "prog_type.m"
}

#line 1071 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1071 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1071 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14)
#line 1071 "prog_type.m"
{
#line 1077 "prog_type.m"
  {
#line 1077 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 0)));
#line 1077 "prog_type.m"
    MR_Word parse_tree__prog_type__VarY_10;
#line 1077 "prog_type.m"
    MR_Word parse_tree__prog_type__KindY_11;

#line 1075 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1075 "prog_type.m"
      {
#line 1075 "prog_type.m"
        parse_tree__prog_type__VarY_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1075 "prog_type.m"
        parse_tree__prog_type__KindY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1076 "prog_type.m"
        {
#line 1076 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_6, parse_tree__prog_type__VarY_10, parse_tree__prog_type__KindY_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
        }
#line 1075 "prog_type.m"
      }
#line 1075 "prog_type.m"
    else
#line 1080 "prog_type.m"
      {
#line 1080 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1077 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1077 "prog_type.m"
        {
#line 1077 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, ((MR_Box) (parse_tree__prog_type__VarX_6)), &parse_tree__prog_type__conv0_BindingOfX_12);
        }
#line 1077 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1077 "prog_type.m"
          {
#line 1077 "prog_type.m"
            parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1077 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1077 "prog_type.m"
          }
#line 1080 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1079 "prog_type.m"
          {
#line 1079 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
          }
#line 1080 "prog_type.m"
        else
#line 1082 "prog_type.m"
          {
#line 1082 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 1082 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtorInfo_22_22;
#line 1083 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_20_20;

#line 1082 "prog_type.m"
            {
#line 1082 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13);
            }
#line 1082 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1082 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1082 "prog_type.m"
              {
#line 6017 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1083 "prog_type.m"
                {
#line 1083 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__VarX_6)), parse_tree__prog_type__HeadTypeParams_8);
                }
#line 1083 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1082 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1082 "prog_type.m"
                  {
#line 6030 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6032 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1084 "prog_type.m"
                    {
#line 1084 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_21_21, parse_tree__prog_type__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__prog_type__VarX_6)), ((MR_Box) (parse_tree__prog_type__TypeY_7)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
                    }
#line 1084 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1082 "prog_type.m"
                  }
#line 1082 "prog_type.m"
              }
#line 1082 "prog_type.m"
          }
#line 1080 "prog_type.m"
      }
#line 1077 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1077 "prog_type.m"
  }
#line 1071 "prog_type.m"
}

#line 887 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(
#line 887 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_3,
#line 887 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_4)
#line 887 "prog_type.m"
{
#line 890 "prog_type.m"
  {
#line 890 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 890 "prog_type.m"
    MR_Word parse_tree__prog_type__Type_5;

#line 891 "prog_type.m"
    {
#line 891 "prog_type.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(parse_tree__prog_type__VarTypes_3, parse_tree__prog_type__Var_4, &parse_tree__prog_type__Type_5);
    }
#line 892 "prog_type.m"
    {
#line 892 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(parse_tree__prog_type__Type_5);
    }
#line 890 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 890 "prog_type.m"
  }
#line 887 "prog_type.m"
}

#line 656 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 656 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 656 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 656 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3)
#line 656 "prog_type.m"
{
#line 659 "prog_type.m"
  while (MR_TRUE)
#line 659 "prog_type.m"
    {
#line 659 "prog_type.m"
      /* tailcall optimized into a loop */
#line 659 "prog_type.m"
      {
#line 659 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 659 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "prog_type.m"
          *parse_tree__prog_type__STATE_VARIABLE_V_3 = parse_tree__prog_type__STATE_VARIABLE_V_0_2;
#line 659 "prog_type.m"
        else
#line 660 "prog_type.m"
          {
#line 660 "prog_type.m"
            MR_Word parse_tree__prog_type__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 660 "prog_type.m"
            MR_Word parse_tree__prog_type__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 660 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 661 "prog_type.m"
            {
#line 661 "prog_type.m"
              parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_7, parse_tree__prog_type__STATE_VARIABLE_V_0_2, &parse_tree__prog_type__STATE_VARIABLE_V_12_12);
            }
#line 662 "prog_type.m"
            /* direct tailcall eliminated */
#line 662 "prog_type.m"
            {
#line 662 "prog_type.m"
              MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Types_8;
#line 662 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 662 "prog_type.m"
              parse_tree__prog_type__STATE_VARIABLE_V_0_2 = parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2;
#line 662 "prog_type.m"
              parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 662 "prog_type.m"
            }
#line 662 "prog_type.m"
            continue;
#line 660 "prog_type.m"
          }
#line 659 "prog_type.m"
      }
#line 659 "prog_type.m"
      break;
#line 659 "prog_type.m"
    }
#line 656 "prog_type.m"
}

#line 629 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 629 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 629 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 629 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 629 "prog_type.m"
{
#line 631 "prog_type.m"
  while (MR_TRUE)
#line 631 "prog_type.m"
    {
#line 631 "prog_type.m"
      /* tailcall optimized into a loop */
#line 631 "prog_type.m"
      {
#line 631 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 631 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 634 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__HeadVar__2_2;
#line 631 "prog_type.m"
        else
#line 631 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 632 "prog_type.m"
            {
#line 632 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "prog_type.m"
              MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 632 "prog_type.m"
              MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 633 "prog_type.m"
              {
#line 633 "prog_type.m"
                parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_8, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 633 "prog_type.m"
                return;
              }
#line 632 "prog_type.m"
            }
#line 631 "prog_type.m"
          else
#line 631 "prog_type.m"
            if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 631 "prog_type.m"
              {
#line 631 "prog_type.m"
                MR_Word parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "prog_type.m"
                MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 631 "prog_type.m"
                {
#line 631 "prog_type.m"
                  MR_Word base;
#line 631 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__3_3 = base;
#line 631 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_4));
#line 631 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 631 "prog_type.m"
                }
#line 631 "prog_type.m"
              }
#line 631 "prog_type.m"
            else
#line 631 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 645 "prog_type.m"
                {
#line 645 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 645 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_40_40;
#line 645 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 646 "prog_type.m"
                  {
#line 646 "prog_type.m"
                    parse_tree__prog_type__STATE_VARIABLE_V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 0) = ((MR_Box) (parse_tree__prog_type__Var_34));
#line 646 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 646 "prog_type.m"
                  }
#line 647 "prog_type.m"
                  {
#line 647 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_35, parse_tree__prog_type__STATE_VARIABLE_V_40_40, parse_tree__prog_type__HeadVar__3_3);
#line 647 "prog_type.m"
                    return;
                  }
#line 645 "prog_type.m"
                }
#line 631 "prog_type.m"
              else
#line 631 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 635 "prog_type.m"
                  {
#line 635 "prog_type.m"
                    MR_Word parse_tree__prog_type__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "prog_type.m"
                    MR_Word parse_tree__prog_type__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 635 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 635 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 636 "prog_type.m"
                    {
#line 636 "prog_type.m"
                      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_18, parse_tree__prog_type__HeadVar__2_2, &parse_tree__prog_type__STATE_VARIABLE_V_26_26);
                    }
#line 640 "prog_type.m"
                    if ((parse_tree__prog_type__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 640 "prog_type.m"
                    else
#line 638 "prog_type.m"
                      {
#line 638 "prog_type.m"
                        MR_Word parse_tree__prog_type__Ret_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_19, (MR_Integer) 0)));

#line 639 "prog_type.m"
                        /* direct tailcall eliminated */
#line 639 "prog_type.m"
                        {
#line 639 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_23;
#line 639 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;

#line 639 "prog_type.m"
                          parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 639 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 639 "prog_type.m"
                        }
#line 639 "prog_type.m"
                        continue;
#line 638 "prog_type.m"
                      }
#line 635 "prog_type.m"
                  }
#line 631 "prog_type.m"
                else
#line 631 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 648 "prog_type.m"
                    {
#line 648 "prog_type.m"
                      MR_Word parse_tree__prog_type__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 649 "prog_type.m"
                      /* direct tailcall eliminated */
#line 649 "prog_type.m"
                      {
#line 649 "prog_type.m"
                        MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_42;

#line 649 "prog_type.m"
                        parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 649 "prog_type.m"
                      }
#line 649 "prog_type.m"
                      continue;
#line 648 "prog_type.m"
                    }
#line 631 "prog_type.m"
                  else
#line 643 "prog_type.m"
                    {
#line 643 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 643 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 644 "prog_type.m"
                      {
#line 644 "prog_type.m"
                        parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_28, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 644 "prog_type.m"
                        return;
                      }
#line 643 "prog_type.m"
                    }
#line 631 "prog_type.m"
      }
#line 631 "prog_type.m"
      break;
#line 631 "prog_type.m"
    }
#line 629 "prog_type.m"
}

#line 417 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
#line 417 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeInfo_for_T_11,
#line 417 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 417 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 417 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 417 "prog_type.m"
{
#line 1420 "prog_type.m"
  {
#line 1420 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1420 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1420 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1420 "prog_type.m"
    else
#line 1421 "prog_type.m"
      {
#line 1421 "prog_type.m"
        MR_Box parse_tree__prog_type__X_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0));
#line 1421 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1421 "prog_type.m"
        MR_Box parse_tree__prog_type__Y_8;
#line 1421 "prog_type.m"
        MR_Word parse_tree__prog_type__Ys_9;
#line 1424 "prog_type.m"
        MR_Box parse_tree__prog_type__Y0_10;

#line 1422 "prog_type.m"
        {
#line 1422 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__X_6, &parse_tree__prog_type__Y0_10);
        }
#line 1424 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1423 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__Y0_10;
#line 1424 "prog_type.m"
        else
#line 1425 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__X_6;
#line 1427 "prog_type.m"
        {
#line 1427 "prog_type.m"
          parse_tree__prog_type__apply_partial_map_to_list_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Xs_7, &parse_tree__prog_type__Ys_9);
        }
#line 1421 "prog_type.m"
        {
#line 1421 "prog_type.m"
          MR_Word base;
#line 1421 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 1421 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_type__Y_8;
#line 1421 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Ys_9));
#line 1421 "prog_type.m"
        }
#line 1421 "prog_type.m"
      }
#line 1420 "prog_type.m"
  }
#line 417 "prog_type.m"
}

#line 1407 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1407 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1407 "prog_type.m"
{
#line 1407 "prog_type.m"
  {
#line 1407 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1407 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
#line 1407 "prog_type.m"
  }
#line 1407 "prog_type.m"
}

#line 1408 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1408 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1408 "prog_type.m"
{
#line 1408 "prog_type.m"
  {
#line 1408 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1408 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28);
#line 1408 "prog_type.m"
    {
#line 1408 "prog_type.m"
      parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(parse_tree__prog_type__env_ptr);
#line 1408 "prog_type.m"
      return;
    }
#line 1408 "prog_type.m"
  }
#line 1408 "prog_type.m"
}

#line 1407 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1407 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1407 "prog_type.m"
{
#line 1407 "prog_type.m"
  {
#line 1407 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1407 "prog_type.m"
    {
#line 1410 "prog_type.m"
      MR_Word parse_tree__prog_type__V_29_29;
#line 1410 "prog_type.m"
      MR_Word parse_tree__prog_type__V_30_30;

#line 1410 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_mktag((MR_Integer) 0)));
#line 1410 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1410 "prog_type.m"
        {
#line 1410 "prog_type.m"
          parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0)));
#line 1410 "prog_type.m"
          parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1)));
#line 1410 "prog_type.m"
        }
#line 1409 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1409 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1409 "prog_type.m"
        {
#line 1409 "prog_type.m"
          parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(parse_tree__prog_type__env_ptr);
#line 1409 "prog_type.m"
          return;
        }
#line 1407 "prog_type.m"
    }
#line 1407 "prog_type.m"
  }
#line 1407 "prog_type.m"
}

#line 1407 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1407 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1407 "prog_type.m"
{
#line 1407 "prog_type.m"
  {
#line 1407 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1407 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
#line 1407 "prog_type.m"
      {
#line 1407 "prog_type.m"
        {
#line 1408 "prog_type.m"
          {
#line 1408 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 1407 "prog_type.m"
        }
#line 1407 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
#line 1407 "prog_type.m"
      }
#line 1407 "prog_type.m"
    else
#line 1407 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1407 "prog_type.m"
  }
#line 1407 "prog_type.m"
}

#line 409 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0(
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__TVarSet_9,
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__ExistQVars_10,
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__ActualArgTypes_11,
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_12,
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__CalleeTVarSet_13,
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__PredKindMap_14,
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__PredExistQVars_15,
#line 409 "prog_type.m"
  MR_Word parse_tree__prog_type__PredArgTypes_16)
#line 409 "prog_type.m"
{
#line 409 "prog_type.m"
  {
#line 409 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s parse_tree__prog_type__env;

#line 1367 "prog_type.m"
    {
#line 1367 "prog_type.m"
      MR_Word parse_tree__prog_type__Renaming_18;
#line 1367 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentKindMap_19;
#line 1367 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentArgTypes_20;
#line 1367 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentExistQVars_21;
#line 1367 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentToActualSubst_22;
#line 1369 "prog_type.m"
      MR_Word parse_tree__prog_type___TVarSet1_17;

#line 1369 "prog_type.m"
      {
#line 1369 "prog_type.m"
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(parse_tree__prog_type__TVarSet_9, parse_tree__prog_type__CalleeTVarSet_13, &parse_tree__prog_type___TVarSet1_17, &parse_tree__prog_type__Renaming_18);
      }
#line 1370 "prog_type.m"
      {
#line 1370 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredKindMap_14, &parse_tree__prog_type__ParentKindMap_19);
      }
#line 1372 "prog_type.m"
      {
#line 1372 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredArgTypes_16, &parse_tree__prog_type__ParentArgTypes_20);
      }
#line 1374 "prog_type.m"
      {
#line 1374 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredExistQVars_15, &parse_tree__prog_type__ParentExistQVars_21);
      }
#line 1390 "prog_type.m"
      if ((parse_tree__prog_type__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1389 "prog_type.m"
        {
#line 1389 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, &parse_tree__prog_type__ParentToActualSubst_22);
        }
#line 1390 "prog_type.m"
      else
#line 1391 "prog_type.m"
        {
#line 1391 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 1395 "prog_type.m"
          {
#line 1395 "prog_type.m"
            parse_tree__prog_type__V_31_31 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 1394 "prog_type.m"
          {
#line 1394 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, parse_tree__prog_type__HeadTypeParams_12, parse_tree__prog_type__V_31_31, &parse_tree__prog_type__ParentToActualSubst_22);
          }
#line 1391 "prog_type.m"
        }
#line 1367 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1403 "prog_type.m"
        {
#line 1403 "prog_type.m"
          if ((parse_tree__prog_type__ParentExistQVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1403 "prog_type.m"
          else
#line 1404 "prog_type.m"
            {
#line 1405 "prog_type.m"
              {
#line 1405 "prog_type.m"
                parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(parse_tree__prog_type__ParentKindMap_19, parse_tree__prog_type__ParentToActualSubst_22, parse_tree__prog_type__ParentExistQVars_21, &(parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
              }
#line 1407 "prog_type.m"
              {
#line 1407 "prog_type.m"
                parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(&parse_tree__prog_type__env);
              }
#line 1407 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1404 "prog_type.m"
            }
#line 1403 "prog_type.m"
        }
#line 1367 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1367 "prog_type.m"
    }
#line 409 "prog_type.m"
  }
#line 409 "prog_type.m"
}

#line 398 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_subsumes_det_3_p_0(
#line 398 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 398 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 398 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 398 "prog_type.m"
{
#line 1362 "prog_type.m"
  {
#line 1362 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1362 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1360 "prog_type.m"
    {
#line 1360 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1362 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1361 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1362 "prog_type.m"
    else
#line 1363 "prog_type.m"
      {
#line 1363 "prog_type.m"
        {
#line 1363 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
#line 1363 "prog_type.m"
          return;
        }
#line 1363 "prog_type.m"
      }
#line 1362 "prog_type.m"
  }
#line 398 "prog_type.m"
}

#line 393 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_subsumes_3_p_0(
#line 393 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 393 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 393 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 393 "prog_type.m"
{
#line 1351 "prog_type.m"
  {
#line 1351 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1351 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
#line 1351 "prog_type.m"
    MR_Word parse_tree__prog_type__TypesBVars_7;
#line 1351 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubst0_8;
#line 1351 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_13;
#line 1351 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_14;

#line 652 "prog_type.m"
    {
#line 652 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__TypesB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 6781 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 653 "prog_type.m"
    {
#line 653 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 654 "prog_type.m"
    {
#line 654 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypesBVars_7);
    }
#line 1356 "prog_type.m"
    {
#line 1356 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1357 "prog_type.m"
    {
#line 1357 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, parse_tree__prog_type__TypesBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1351 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1351 "prog_type.m"
  }
#line 393 "prog_type.m"
}

#line 386 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_list_5_p_0(
#line 386 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 386 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 386 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3,
#line 386 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4,
#line 386 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_5)
#line 386 "prog_type.m"
{
#line 1291 "prog_type.m"
  while (MR_TRUE)
#line 1291 "prog_type.m"
    {
#line 1291 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1291 "prog_type.m"
      {
#line 1291 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1291 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "prog_type.m"
          {
#line 1291 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1291 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1291 "prog_type.m"
              {
#line 1291 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_5 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4;
#line 1291 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1291 "prog_type.m"
              }
#line 1291 "prog_type.m"
          }
#line 1291 "prog_type.m"
        else
#line 1292 "prog_type.m"
          {
#line 1292 "prog_type.m"
            MR_Word parse_tree__prog_type__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1292 "prog_type.m"
            MR_Word parse_tree__prog_type__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1292 "prog_type.m"
            MR_Word parse_tree__prog_type__Y_12;
#line 1292 "prog_type.m"
            MR_Word parse_tree__prog_type__Ys_13;
#line 1292 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1292 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1292 "prog_type.m"
              {
#line 1292 "prog_type.m"
                parse_tree__prog_type__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1292 "prog_type.m"
                parse_tree__prog_type__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1293 "prog_type.m"
                {
#line 1293 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__X_10, parse_tree__prog_type__Y_12, parse_tree__prog_type__HeadVar__3_3, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                }
#line 1292 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1294 "prog_type.m"
                  {
#line 1294 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1294 "prog_type.m"
                    {
#line 1294 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_11;
#line 1294 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__Ys_13;
#line 1294 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1294 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 1294 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1294 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1294 "prog_type.m"
                    }
#line 1294 "prog_type.m"
                    continue;
#line 1294 "prog_type.m"
                  }
#line 1292 "prog_type.m"
              }
#line 1292 "prog_type.m"
          }
#line 1291 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1291 "prog_type.m"
      }
#line 1291 "prog_type.m"
      break;
#line 1291 "prog_type.m"
    }
#line 386 "prog_type.m"
}

#line 383 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_5_p_0(
#line 383 "prog_type.m"
  MR_Word parse_tree__prog_type__X_6,
#line 383 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_7,
#line 383 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 383 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14,
#line 383 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_15)
#line 383 "prog_type.m"
{
#line 1061 "prog_type.m"
  {
#line 1061 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 0)));
#line 1061 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1059 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 1059 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1059 "prog_type.m"
      {
#line 1059 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 0)));
#line 1059 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 1)));
#line 1060 "prog_type.m"
        {
#line 1060 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_10, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
        }
#line 1059 "prog_type.m"
      }
#line 1059 "prog_type.m"
    else
#line 1063 "prog_type.m"
      {
#line 1063 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_12;
#line 1061 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 1061 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 0)));
#line 1061 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1061 "prog_type.m"
          {
#line 1061 "prog_type.m"
            parse_tree__prog_type__VarY_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
#line 1061 "prog_type.m"
            parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
#line 1062 "prog_type.m"
            {
#line 1062 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_12, parse_tree__prog_type__X_6, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
            }
#line 1061 "prog_type.m"
          }
#line 1061 "prog_type.m"
        else
#line 1065 "prog_type.m"
          {
#line 1065 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1063 "prog_type.m"
            {
#line 1063 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_nonvar_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
            }
#line 1065 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1063 "prog_type.m"
              {
#line 1063 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_15 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;
#line 1063 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1063 "prog_type.m"
              }
#line 1065 "prog_type.m"
            else
#line 1068 "prog_type.m"
              {
#line 1068 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_special_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
              }
#line 1065 "prog_type.m"
          }
#line 1063 "prog_type.m"
      }
#line 1061 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1061 "prog_type.m"
  }
#line 383 "prog_type.m"
}

#line 372 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type___TypeCtor_10,
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 372 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 372 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 372 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 372 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 372 "prog_type.m"
{
#line 1029 "prog_type.m"
  {
#line 1029 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1029 "prog_type.m"
    {
#line 1029 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(parse_tree__prog_type__Globals_9, parse_tree__prog_type__ReserveTagPragma_11, parse_tree__prog_type__Ctors_12, parse_tree__prog_type__MaybeUserEqCmp_13, parse_tree__prog_type__SingleFunctorName_14, parse_tree__prog_type__SingleArgType_15, parse_tree__prog_type__MaybeSingleArgName_16);
    }
#line 1029 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1029 "prog_type.m"
  }
#line 372 "prog_type.m"
}

#line 1014 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 1014 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1014 "prog_type.m"
{
#line 1014 "prog_type.m"
  {
#line 1014 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1014 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0, 1);
#line 1014 "prog_type.m"
  }
#line 1014 "prog_type.m"
}

#line 1015 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 1015 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1015 "prog_type.m"
{
#line 1015 "prog_type.m"
  {
#line 1015 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1015 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8);
#line 1015 "prog_type.m"
    {
#line 1015 "prog_type.m"
      parse_tree__prog_type__du_type_is_enum_2_p_0_2(parse_tree__prog_type__env_ptr);
#line 1015 "prog_type.m"
      return;
    }
#line 1015 "prog_type.m"
  }
#line 1015 "prog_type.m"
}

#line 1014 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 1014 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1014 "prog_type.m"
{
#line 1014 "prog_type.m"
  {
#line 1014 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1014 "prog_type.m"
    {
#line 1017 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 0)));
#line 1017 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 1)));
#line 1017 "prog_type.m"
      MR_Word parse_tree__prog_type__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 3)));
#line 1017 "prog_type.m"
      MR_Word parse_tree__prog_type___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 2)));
#line 1017 "prog_type.m"
      MR_Word parse_tree__prog_type___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 4)));

#line 1018 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistQTVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1017 "prog_type.m"
        {
#line 1019 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistConstraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "prog_type.m"
          if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1020 "prog_type.m"
            (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "prog_type.m"
        }
#line 1016 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 1016 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1016 "prog_type.m"
        {
#line 1016 "prog_type.m"
          parse_tree__prog_type__du_type_is_enum_2_p_0_1(parse_tree__prog_type__env_ptr);
#line 1016 "prog_type.m"
          return;
        }
#line 1014 "prog_type.m"
    }
#line 1014 "prog_type.m"
  }
#line 1014 "prog_type.m"
}

#line 1014 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 1014 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1014 "prog_type.m"
{
#line 1014 "prog_type.m"
  {
#line 1014 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1014 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0) == 0)
#line 1014 "prog_type.m"
      {
#line 1014 "prog_type.m"
        {
#line 1015 "prog_type.m"
          {
#line 1015 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, parse_tree__prog_type__du_type_is_enum_2_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 1014 "prog_type.m"
        }
#line 1014 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_FALSE;
#line 1014 "prog_type.m"
      }
#line 1014 "prog_type.m"
    else
#line 1014 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 1014 "prog_type.m"
  }
#line 1014 "prog_type.m"
}

#line 362 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0(
#line 362 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_3,
#line 362 "prog_type.m"
  MR_Integer * parse_tree__prog_type__NumBits_4)
#line 362 "prog_type.m"
{
#line 362 "prog_type.m"
  {
#line 362 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s parse_tree__prog_type__env;

#line 362 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3 = parse_tree__prog_type__Ctors_3;
#line 1012 "prog_type.m"
    {
#line 1012 "prog_type.m"
      MR_Word parse_tree__prog_type__TypeCtorInfo_17_17;
#line 1012 "prog_type.m"
      MR_Integer parse_tree__prog_type__NumFunctors_14;
#line 1012 "prog_type.m"
      MR_Word parse_tree__prog_type__V_15_15;
#line 1013 "prog_type.m"
      MR_Word parse_tree__prog_type__V_5_5;
#line 1013 "prog_type.m"
      MR_Word parse_tree__prog_type__V_6_6;
#line 1013 "prog_type.m"
      MR_Word parse_tree__prog_type__V_7_7;

#line 1013 "prog_type.m"
      (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3)) == (MR_mktag((MR_Integer) 1)));
#line 1013 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1013 "prog_type.m"
        {
#line 1013 "prog_type.m"
          parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 0)));
#line 1013 "prog_type.m"
          parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 1)));
#line 1013 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1013 "prog_type.m"
          if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1013 "prog_type.m"
            {
#line 1013 "prog_type.m"
              parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, (MR_Integer) 0)));
#line 1013 "prog_type.m"
              parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, (MR_Integer) 1)));
#line 1014 "prog_type.m"
              {
#line 1014 "prog_type.m"
                parse_tree__prog_type__du_type_is_enum_2_p_0_4(&parse_tree__prog_type__env);
              }
#line 1014 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 1012 "prog_type.m"
              if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1012 "prog_type.m"
                {
#line 7271 "parse_tree.prog_type.c"
                  parse_tree__prog_type__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 1022 "prog_type.m"
                  {
#line 1022 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_17_17, (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, &parse_tree__prog_type__NumFunctors_14);
                  }
#line 1023 "prog_type.m"
                  {
#line 1023 "prog_type.m"
                    mercury__int__log2_2_p_0(parse_tree__prog_type__NumFunctors_14, parse_tree__prog_type__NumBits_4);
                  }
#line 1023 "prog_type.m"
                  (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 1012 "prog_type.m"
                }
#line 1013 "prog_type.m"
            }
#line 1013 "prog_type.m"
        }
#line 1012 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 1012 "prog_type.m"
    }
#line 362 "prog_type.m"
  }
#line 362 "prog_type.m"
}

#line 357 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_constructors_are_type_info_1_p_0(
#line 357 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_2)
#line 357 "prog_type.m"
{
#line 973 "prog_type.m"
  {
#line 973 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_2)) == (MR_mktag((MR_Integer) 1)));
#line 973 "prog_type.m"
    MR_Word parse_tree__prog_type__Ctor_3;
#line 973 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_10;
#line 973 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_11;
#line 973 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 973 "prog_type.m"
    MR_Word parse_tree__prog_type__V_17_17;
#line 973 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 973 "prog_type.m"
    MR_String parse_tree__prog_type__Name_21;
#line 982 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_12;
#line 982 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_15;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__V_18_18;

#line 981 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 981 "prog_type.m"
      {
#line 981 "prog_type.m"
        parse_tree__prog_type__SingleCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 0)));
#line 981 "prog_type.m"
        parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 1)));
#line 981 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 973 "prog_type.m"
          {
#line 982 "prog_type.m"
            parse_tree__prog_type__ExistQVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 0)));
#line 982 "prog_type.m"
            parse_tree__prog_type___Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 1)));
#line 982 "prog_type.m"
            parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 2)));
#line 982 "prog_type.m"
            parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 3)));
#line 982 "prog_type.m"
            parse_tree__prog_type___Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 4)));
#line 983 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 983 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 983 "prog_type.m"
              {
#line 983 "prog_type.m"
                parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 983 "prog_type.m"
                parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 1)));
#line 983 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 973 "prog_type.m"
                  {
#line 984 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 973 "prog_type.m"
                      {
#line 999 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__Ctor_3)) == (MR_mktag((MR_Integer) 1))))
#line 1000 "prog_type.m"
                          {
#line 1000 "prog_type.m"
                            MR_Word parse_tree__prog_type__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 1000 "prog_type.m"
                            MR_Word parse_tree__prog_type__V_25_25;

#line 1000 "prog_type.m"
                            parse_tree__prog_type__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 1)));
#line 1001 "prog_type.m"
                            {
#line 1001 "prog_type.m"
                              parse_tree__prog_type__V_25_25 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            }
#line 1001 "prog_type.m"
                            {
#line 1001 "prog_type.m"
                              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_23, parse_tree__prog_type__V_25_25);
                            }
#line 1000 "prog_type.m"
                          }
#line 999 "prog_type.m"
                        else
#line 999 "prog_type.m"
                          {
#line 999 "prog_type.m"
                            parse_tree__prog_type__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 999 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 999 "prog_type.m"
                          }
#line 973 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1005 "prog_type.m"
                          {
#line 1005 "prog_type.m"
                            if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "type_info") == 0))
#line 1005 "prog_type.m"
                              parse_tree__prog_type__succeeded = MR_TRUE;
#line 1005 "prog_type.m"
                            else
#line 1005 "prog_type.m"
                              if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "type_ctor_info") == 0))
#line 1006 "prog_type.m"
                                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1005 "prog_type.m"
                              else
#line 1005 "prog_type.m"
                                if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "typeclass_info") == 0))
#line 1007 "prog_type.m"
                                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 1005 "prog_type.m"
                                else
#line 1005 "prog_type.m"
                                  if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "base_typeclass_info") == 0))
#line 1008 "prog_type.m"
                                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1005 "prog_type.m"
                                  else
#line 1005 "prog_type.m"
                                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1005 "prog_type.m"
                          }
#line 973 "prog_type.m"
                      }
#line 973 "prog_type.m"
                  }
#line 983 "prog_type.m"
              }
#line 973 "prog_type.m"
          }
#line 981 "prog_type.m"
      }
#line 973 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 973 "prog_type.m"
  }
#line 357 "prog_type.m"
}

#line 334 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__qualify_cons_id_4_p_0(
#line 334 "prog_type.m"
  MR_Word parse_tree__prog_type__Args_5,
#line 334 "prog_type.m"
  MR_Word parse_tree__prog_type__ConsId0_6,
#line 334 "prog_type.m"
  MR_Word * parse_tree__prog_type__ConsId_7,
#line 334 "prog_type.m"
  MR_Word * parse_tree__prog_type__InstConsId_8)
#line 334 "prog_type.m"
{
#line 931 "prog_type.m"
  {
#line 931 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 931 "prog_type.m"
    if ((parse_tree__prog_type__ConsId0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "prog_type.m"
      {
#line 947 "prog_type.m"
        MR_Integer parse_tree__prog_type__V_41_41;
#line 947 "prog_type.m"
        MR_Word parse_tree__prog_type__PrivateBuiltin_62;
#line 947 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeCtor_63;
#line 947 "prog_type.m"
        MR_Word parse_tree__prog_type__V_64_64;

#line 948 "prog_type.m"
        *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 949 "prog_type.m"
        {
#line 949 "prog_type.m"
          parse_tree__prog_type__V_41_41 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
        }
#line 923 "prog_type.m"
        {
#line 923 "prog_type.m"
          parse_tree__prog_type__PrivateBuiltin_62 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 924 "prog_type.m"
        {
#line 924 "prog_type.m"
          parse_tree__prog_type__TypeCtor_63 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 925 "prog_type.m"
        {
#line 925 "prog_type.m"
          parse_tree__prog_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_62));
#line 925 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
#line 925 "prog_type.m"
        }
#line 925 "prog_type.m"
        {
#line 925 "prog_type.m"
          MR_Word base;
#line 925 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_type.m"
          *parse_tree__prog_type__InstConsId_8 = base;
#line 925 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 925 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_64_64));
#line 925 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_41_41));
#line 925 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_63));
#line 925 "prog_type.m"
        }
#line 947 "prog_type.m"
      }
#line 931 "prog_type.m"
    else
#line 931 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) == (MR_mktag((MR_Integer) 1))))
#line 942 "prog_type.m"
        {
#line 942 "prog_type.m"
          MR_Integer parse_tree__prog_type__V_43_43;
#line 942 "prog_type.m"
          MR_Word parse_tree__prog_type__PrivateBuiltin_54;
#line 942 "prog_type.m"
          MR_Word parse_tree__prog_type__TypeCtor_55;
#line 942 "prog_type.m"
          MR_Word parse_tree__prog_type__V_56_56;

#line 943 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 945 "prog_type.m"
          {
#line 945 "prog_type.m"
            parse_tree__prog_type__V_43_43 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
#line 923 "prog_type.m"
          {
#line 923 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_54 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 924 "prog_type.m"
          {
#line 924 "prog_type.m"
            parse_tree__prog_type__TypeCtor_55 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 925 "prog_type.m"
          {
#line 925 "prog_type.m"
            parse_tree__prog_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_54));
#line 925 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 1) = ((MR_Box) ((MR_String) "type_info"));
#line 925 "prog_type.m"
          }
#line 925 "prog_type.m"
          {
#line 925 "prog_type.m"
            MR_Word base;
#line 925 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = base;
#line 925 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 925 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_56_56));
#line 925 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 925 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_55));
#line 925 "prog_type.m"
          }
#line 942 "prog_type.m"
        }
#line 931 "prog_type.m"
      else
#line 931 "prog_type.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 931 "prog_type.m"
          {
#line 931 "prog_type.m"
            MR_Word parse_tree__prog_type__Name0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 1)));
#line 931 "prog_type.m"
            MR_Integer parse_tree__prog_type__OrigArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 2)));
#line 931 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 3)));
#line 937 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeModule_12;
#line 932 "prog_type.m"
            MR_Word parse_tree__prog_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 0)));
#line 932 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 1)));
#line 932 "prog_type.m"
            MR_String parse_tree__prog_type__V_13_13;

#line 932 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 932 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 932 "prog_type.m"
              {
#line 932 "prog_type.m"
                parse_tree__prog_type__TypeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 0)));
#line 932 "prog_type.m"
                parse_tree__prog_type__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 1)));
#line 933 "prog_type.m"
                {
#line 933 "prog_type.m"
                  MR_String parse_tree__prog_type__UnqualName_15;
#line 933 "prog_type.m"
                  MR_Word parse_tree__prog_type__Name_16;
#line 933 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_45_45;

#line 933 "prog_type.m"
                  {
#line 933 "prog_type.m"
                    parse_tree__prog_type__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__Name0_9);
                  }
#line 934 "prog_type.m"
                  {
#line 934 "prog_type.m"
                    parse_tree__prog_type__Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 0) = ((MR_Box) (parse_tree__prog_type__TypeModule_12));
#line 934 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 1) = ((MR_Box) (parse_tree__prog_type__UnqualName_15));
#line 934 "prog_type.m"
                  }
#line 935 "prog_type.m"
                  {
#line 935 "prog_type.m"
                    MR_Word base;
#line 935 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_type.m"
                    *parse_tree__prog_type__ConsId_7 = base;
#line 935 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 935 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 935 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 935 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_11));
#line 935 "prog_type.m"
                  }
#line 936 "prog_type.m"
                  {
#line 936 "prog_type.m"
                    parse_tree__prog_type__V_45_45 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 936 "prog_type.m"
                  {
#line 936 "prog_type.m"
                    MR_Word base;
#line 936 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_type.m"
                    *parse_tree__prog_type__InstConsId_8 = base;
#line 936 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 936 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 936 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 936 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 936 "prog_type.m"
                  }
#line 933 "prog_type.m"
                }
#line 932 "prog_type.m"
              }
#line 932 "prog_type.m"
            else
#line 938 "prog_type.m"
              {
#line 938 "prog_type.m"
                MR_Word parse_tree__prog_type__V_46_46;

#line 938 "prog_type.m"
                *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 939 "prog_type.m"
                {
#line 939 "prog_type.m"
                  parse_tree__prog_type__V_46_46 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 939 "prog_type.m"
                {
#line 939 "prog_type.m"
                  MR_Word base;
#line 939 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 939 "prog_type.m"
                  *parse_tree__prog_type__InstConsId_8 = base;
#line 939 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 939 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name0_9));
#line 939 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 939 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 939 "prog_type.m"
                }
#line 938 "prog_type.m"
              }
#line 931 "prog_type.m"
          }
#line 931 "prog_type.m"
        else
#line 966 "prog_type.m"
          {
#line 967 "prog_type.m"
            *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 968 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
#line 966 "prog_type.m"
          }
#line 931 "prog_type.m"
  }
#line 334 "prog_type.m"
}

#line 325 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_inst_cons_id_2_f_0(
#line 325 "prog_type.m"
  MR_Word parse_tree__prog_type__Which_4,
#line 325 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5)
#line 325 "prog_type.m"
{
#line 913 "prog_type.m"
  {
#line 913 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 913 "prog_type.m"
    MR_Word parse_tree__prog_type__InstConsId_6;
#line 913 "prog_type.m"
    MR_String parse_tree__prog_type__Symbol_8;
#line 913 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_9;
#line 913 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_10;
#line 913 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 919 "prog_type.m"
    if ((parse_tree__prog_type__Which_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "typeclass_info";
#line 919 "prog_type.m"
    else
#line 918 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "type_info";
#line 923 "prog_type.m"
    {
#line 923 "prog_type.m"
      parse_tree__prog_type__PrivateBuiltin_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 924 "prog_type.m"
    {
#line 924 "prog_type.m"
      parse_tree__prog_type__TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 925 "prog_type.m"
    {
#line 925 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_9));
#line 925 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 1) = ((MR_Box) (parse_tree__prog_type__Symbol_8));
#line 925 "prog_type.m"
    }
#line 925 "prog_type.m"
    {
#line 925 "prog_type.m"
      parse_tree__prog_type__InstConsId_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 925 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 1) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 925 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 2) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 925 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_10));
#line 925 "prog_type.m"
    }
#line 913 "prog_type.m"
    return parse_tree__prog_type__InstConsId_6;
#line 913 "prog_type.m"
  }
#line 325 "prog_type.m"
}

#line 323 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_cons_id_1_f_0(
#line 323 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 323 "prog_type.m"
{
#line 910 "prog_type.m"
  {
#line 910 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 910 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__2_2;

#line 910 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "prog_type.m"
      parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 910 "prog_type.m"
    else
#line 910 "prog_type.m"
      {
#line 910 "prog_type.m"
        MR_Word parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 910 "prog_type.m"
        parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__Ctor_3);
#line 910 "prog_type.m"
      }
#line 910 "prog_type.m"
    return parse_tree__prog_type__HeadVar__2_2;
#line 910 "prog_type.m"
  }
#line 323 "prog_type.m"
}

#line 317 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__make_type_ctor_3_p_0(
#line 317 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 317 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5,
#line 317 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 317 "prog_type.m"
{
#line 906 "prog_type.m"
  {
#line 906 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 906 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 906 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;

#line 906 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 906 "prog_type.m"
      {
#line 906 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 906 "prog_type.m"
        {
#line 906 "prog_type.m"
          parse_tree__prog_type__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 906 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 906 "prog_type.m"
        }
#line 906 "prog_type.m"
        {
#line 906 "prog_type.m"
          MR_Word base;
#line 906 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 906 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 906 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_6_6));
#line 906 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 906 "prog_type.m"
        }
#line 906 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 906 "prog_type.m"
      }
#line 906 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 906 "prog_type.m"
  }
#line 317 "prog_type.m"
}

#line 276 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__add_new_prefix_2_p_0(
#line 276 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 276 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 276 "prog_type.m"
{
#line 899 "prog_type.m"
  {
#line 899 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 899 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 901 "prog_type.m"
      {
#line 901 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 901 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 902 "prog_type.m"
        {
#line 902 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_7, &parse_tree__prog_type__Name_8);
        }
#line 901 "prog_type.m"
        {
#line 901 "prog_type.m"
          MR_Word base;
#line 901 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 901 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 901 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 901 "prog_type.m"
        }
#line 901 "prog_type.m"
      }
#line 899 "prog_type.m"
    else
#line 899 "prog_type.m"
      {
#line 899 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 899 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 900 "prog_type.m"
        {
#line 900 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_3, &parse_tree__prog_type__Name_4);
        }
#line 899 "prog_type.m"
        {
#line 899 "prog_type.m"
          MR_Word base;
#line 899 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 899 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 899 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 899 "prog_type.m"
        }
#line 899 "prog_type.m"
      }
#line 899 "prog_type.m"
  }
#line 276 "prog_type.m"
}

#line 270 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__remove_new_prefix_2_p_0(
#line 270 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 270 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 270 "prog_type.m"
{
#line 894 "prog_type.m"
  {
#line 894 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 894 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 896 "prog_type.m"
      {
#line 896 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 896 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 897 "prog_type.m"
        {
#line 897 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_8, parse_tree__prog_type__Name0_7);
        }
#line 896 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 896 "prog_type.m"
          {
#line 896 "prog_type.m"
            {
#line 896 "prog_type.m"
              MR_Word base;
#line 896 "prog_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 896 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 896 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 896 "prog_type.m"
            }
#line 896 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 896 "prog_type.m"
          }
#line 896 "prog_type.m"
      }
#line 894 "prog_type.m"
    else
#line 894 "prog_type.m"
      {
#line 894 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 894 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 895 "prog_type.m"
        {
#line 895 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_4, parse_tree__prog_type__Name0_3);
        }
#line 894 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 894 "prog_type.m"
          {
#line 894 "prog_type.m"
            {
#line 894 "prog_type.m"
              MR_Word base;
#line 894 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 894 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 894 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 894 "prog_type.m"
            }
#line 894 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 894 "prog_type.m"
          }
#line 894 "prog_type.m"
      }
#line 894 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 894 "prog_type.m"
  }
#line 270 "prog_type.m"
}

#line 865 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 865 "prog_type.m"
{
#line 865 "prog_type.m"
  {
#line 865 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 865 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 865 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 865 "prog_type.m"
  }
#line 865 "prog_type.m"
}

#line 262 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(
#line 262 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_4,
#line 262 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsSet0_5)
#line 262 "prog_type.m"
{
#line 873 "prog_type.m"
  {
#line 873 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 873 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsSet_6;
#line 873 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 873 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList0_7;
#line 873 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList_8;
#line 873 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      parse_tree__prog_type__VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(parse_tree__prog_type__TypeCtorInfo_9_9, parse_tree__prog_type__VarsSet0_5);
    }
#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 865 "prog_type.m"
    }
#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList0_7, &parse_tree__prog_type__VarsList_8);
    }
#line 877 "prog_type.m"
    {
#line 877 "prog_type.m"
      parse_tree__prog_type__VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(parse_tree__prog_type__TypeCtorInfo_9_9, parse_tree__prog_type__VarsList_8);
    }
#line 873 "prog_type.m"
    return parse_tree__prog_type__VarsSet_6;
#line 873 "prog_type.m"
  }
#line 262 "prog_type.m"
}

#line 865 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1(
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 865 "prog_type.m"
{
#line 865 "prog_type.m"
  {
#line 865 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 865 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 865 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 865 "prog_type.m"
  }
#line 865 "prog_type.m"
}

#line 260 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0(
#line 260 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_4,
#line 260 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsSet0_5)
#line 260 "prog_type.m"
{
#line 868 "prog_type.m"
  {
#line 868 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 868 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsSet_6;
#line 868 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[2];
#line 868 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList0_7;
#line 868 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList_8;
#line 868 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 869 "prog_type.m"
    {
#line 869 "prog_type.m"
      parse_tree__prog_type__VarsList0_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__VarsSet0_5);
    }
#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 865 "prog_type.m"
    }
#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList0_7, &parse_tree__prog_type__VarsList_8);
    }
#line 871 "prog_type.m"
    {
#line 871 "prog_type.m"
      parse_tree__prog_type__VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__VarsList_8);
    }
#line 868 "prog_type.m"
    return parse_tree__prog_type__VarsSet_6;
#line 868 "prog_type.m"
  }
#line 260 "prog_type.m"
}

#line 865 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1(
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 865 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 865 "prog_type.m"
{
#line 865 "prog_type.m"
  {
#line 865 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 865 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 865 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 865 "prog_type.m"
  }
#line 865 "prog_type.m"
}

#line 259 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0(
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_4,
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsList_5)
#line 259 "prog_type.m"
{
#line 864 "prog_type.m"
  {
#line 864 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 864 "prog_type.m"
    MR_Word parse_tree__prog_type__NonTypeInfoVarsList_6;
#line 864 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;

#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      parse_tree__prog_type__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 865 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 865 "prog_type.m"
    }
#line 865 "prog_type.m"
    {
#line 865 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_7_7, parse_tree__prog_type__VarsList_5, &parse_tree__prog_type__NonTypeInfoVarsList_6);
    }
#line 864 "prog_type.m"
    return parse_tree__prog_type__NonTypeInfoVarsList_6;
#line 864 "prog_type.m"
  }
#line 259 "prog_type.m"
}

#line 884 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1(
#line 884 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 884 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 884 "prog_type.m"
{
#line 884 "prog_type.m"
  {
#line 884 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 884 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 884 "prog_type.m"
    {
#line 884 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 884 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 884 "prog_type.m"
  }
#line 884 "prog_type.m"
}

#line 254 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0(
#line 254 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsList_4,
#line 254 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_5)
#line 254 "prog_type.m"
{
#line 860 "prog_type.m"
  {
#line 860 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__3_3;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfoVarsList_6;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__NonTypeInfoVarsList_7;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 884 "prog_type.m"
    {
#line 884 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 884 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 884 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1));
#line 884 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 884 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_5));
#line 884 "prog_type.m"
    }
#line 884 "prog_type.m"
    {
#line 884 "prog_type.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList_4, &parse_tree__prog_type__TypeInfoVarsList_6, &parse_tree__prog_type__NonTypeInfoVarsList_7);
    }
#line 860 "prog_type.m"
    {
#line 860 "prog_type.m"
      parse_tree__prog_type__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__TypeInfoVarsList_6, parse_tree__prog_type__NonTypeInfoVarsList_7);
    }
#line 860 "prog_type.m"
    return parse_tree__prog_type__HeadVar__3_3;
#line 860 "prog_type.m"
  }
#line 254 "prog_type.m"
}

#line 246 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(
#line 246 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtorCat_3)
#line 246 "prog_type.m"
{
#line 850 "prog_type.m"
  {
#line 850 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 850 "prog_type.m"
    MR_Word parse_tree__prog_type__IsIntroduced_4;

#line 850 "prog_type.m"
    if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeCtorCat_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeCtorCat_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 854 "prog_type.m"
      parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 1;
#line 850 "prog_type.m"
    else
#line 851 "prog_type.m"
      parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 850 "prog_type.m"
    return parse_tree__prog_type__IsIntroduced_4;
#line 850 "prog_type.m"
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
#line 831 "prog_type.m"
  {
#line 831 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 831 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_3;
#line 831 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 831 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 0)));
#line 831 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 1)));
#line 831 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;

#line 832 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 832 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 832 "prog_type.m"
      {
#line 832 "prog_type.m"
        parse_tree__prog_type__PrivateBuiltin_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 832 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 832 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 831 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 831 "prog_type.m"
          {
#line 833 "prog_type.m"
            {
#line 833 "prog_type.m"
              parse_tree__prog_type__V_7_7 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            }
#line 833 "prog_type.m"
            {
#line 833 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_3, parse_tree__prog_type__V_7_7);
            }
#line 831 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 835 "prog_type.m"
              {
#line 835 "prog_type.m"
                if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "type_info") == 0))
#line 834 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                else
#line 835 "prog_type.m"
                  if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "type_ctor_info") == 0))
#line 835 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                  else
#line 835 "prog_type.m"
                    if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "typeclass_info") == 0))
#line 836 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                    else
#line 835 "prog_type.m"
                      if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "base_typeclass_info") == 0))
#line 837 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                      else
#line 835 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_FALSE;
#line 835 "prog_type.m"
              }
#line 831 "prog_type.m"
          }
#line 832 "prog_type.m"
      }
#line 831 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 831 "prog_type.m"
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
#line 827 "prog_type.m"
  {
#line 827 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_8;
#line 827 "prog_type.m"
    MR_String parse_tree__prog_type__Name_9;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 827 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_11_11;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;
#line 573 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_6;

#line 573 "prog_type.m"
    {
#line 573 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type___Args_6);
    }
#line 827 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 827 "prog_type.m"
      {
#line 832 "prog_type.m"
        parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 832 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 832 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 832 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 832 "prog_type.m"
          {
#line 832 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 0)));
#line 832 "prog_type.m"
            parse_tree__prog_type__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 1)));
#line 832 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_11_11 == (MR_Integer) 0);
#line 827 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 827 "prog_type.m"
              {
#line 833 "prog_type.m"
                {
#line 833 "prog_type.m"
                  parse_tree__prog_type__V_12_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
#line 833 "prog_type.m"
                {
#line 833 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_8, parse_tree__prog_type__V_12_12);
                }
#line 827 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 835 "prog_type.m"
                  {
#line 835 "prog_type.m"
                    if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "type_info") == 0))
#line 834 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                    else
#line 835 "prog_type.m"
                      if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "type_ctor_info") == 0))
#line 835 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                      else
#line 835 "prog_type.m"
                        if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "typeclass_info") == 0))
#line 836 "prog_type.m"
                          parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                        else
#line 835 "prog_type.m"
                          if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "base_typeclass_info") == 0))
#line 837 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 835 "prog_type.m"
                          else
#line 835 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_FALSE;
#line 835 "prog_type.m"
                  }
#line 827 "prog_type.m"
              }
#line 832 "prog_type.m"
          }
#line 827 "prog_type.m"
      }
#line 827 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 827 "prog_type.m"
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
#line 824 "prog_type.m"
  {
#line 824 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 824 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 824 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 824 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 824 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 824 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 825 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 825 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 825 "prog_type.m"
      {
#line 825 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 825 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 825 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 825 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 825 "prog_type.m"
          {
#line 825 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 825 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "bitmap") == 0);
#line 824 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 824 "prog_type.m"
              {
#line 825 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "bitmap") == 0);
#line 824 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 825 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 824 "prog_type.m"
              }
#line 825 "prog_type.m"
          }
#line 825 "prog_type.m"
      }
#line 824 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 824 "prog_type.m"
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
#line 822 "prog_type.m"
  {
#line 822 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 822 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 822 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 822 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 822 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 822 "prog_type.m"
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
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "array") == 0);
#line 822 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
              {
#line 822 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "array") == 0);
#line 822 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 1);
#line 822 "prog_type.m"
              }
#line 822 "prog_type.m"
          }
#line 822 "prog_type.m"
      }
#line 822 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 822 "prog_type.m"
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
#line 817 "prog_type.m"
  {
#line 817 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 817 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_11_11;
#line 817 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 817 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_4;
#line 817 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 817 "prog_type.m"
    MR_String parse_tree__prog_type__V_7_7;
#line 817 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_8_8;
#line 817 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 817 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;

#line 818 "prog_type.m"
    {
#line 818 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type__V_9_9);
    }
#line 817 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
      {
#line 8821 "parse_tree.prog_type.c"
        parse_tree__prog_type__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 818 "prog_type.m"
        {
#line 818 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_11_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 817 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
          {
#line 819 "prog_type.m"
            {
#line 819 "prog_type.m"
              parse_tree__prog_type__ModuleName_4 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 820 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 820 "prog_type.m"
            parse_tree__prog_type__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 820 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 820 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 820 "prog_type.m"
              {
#line 820 "prog_type.m"
                parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 820 "prog_type.m"
                parse_tree__prog_type__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 820 "prog_type.m"
                {
#line 820 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_4, parse_tree__prog_type__V_10_10);
                }
#line 817 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
                  {
#line 820 "prog_type.m"
                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_7_7, (MR_String) "state") == 0);
#line 817 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 820 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_8_8 == (MR_Integer) 0);
#line 817 "prog_type.m"
                  }
#line 820 "prog_type.m"
              }
#line 817 "prog_type.m"
          }
#line 817 "prog_type.m"
      }
#line 817 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 817 "prog_type.m"
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
#line 797 "prog_type.m"
  {
#line 797 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 797 "prog_type.m"
    MR_Word parse_tree__prog_type__IsBuiltinDummy_4;
#line 797 "prog_type.m"
    MR_Word parse_tree__prog_type__CtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 797 "prog_type.m"
    MR_Integer parse_tree__prog_type__TypeArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 800 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_7;
#line 800 "prog_type.m"
    MR_String parse_tree__prog_type__TypeName_8;
#line 800 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;

#line 800 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 800 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 800 "prog_type.m"
      {
#line 800 "prog_type.m"
        parse_tree__prog_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 800 "prog_type.m"
        parse_tree__prog_type__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 801 "prog_type.m"
        {
#line 801 "prog_type.m"
          parse_tree__prog_type__V_15_15 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        }
#line 801 "prog_type.m"
        {
#line 801 "prog_type.m"
          parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_7, parse_tree__prog_type__V_15_15);
        }
#line 800 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 800 "prog_type.m"
          {
#line 802 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_8, (MR_String) "state") == 0);
#line 800 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 803 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 0);
#line 800 "prog_type.m"
          }
#line 800 "prog_type.m"
      }
#line 806 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 805 "prog_type.m"
      parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 806 "prog_type.m"
    else
#line 813 "prog_type.m"
      {
#line 807 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 807 "prog_type.m"
        MR_String parse_tree__prog_type__V_10_10;
#line 807 "prog_type.m"
        MR_Word parse_tree__prog_type__ModuleName_11;
#line 807 "prog_type.m"
        MR_String parse_tree__prog_type__TypeName_12;
#line 807 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17;

#line 807 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 807 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 807 "prog_type.m"
          {
#line 807 "prog_type.m"
            parse_tree__prog_type__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 807 "prog_type.m"
            parse_tree__prog_type__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 808 "prog_type.m"
            parse_tree__prog_type__V_10_10 = (MR_String) "store";
#line 808 "prog_type.m"
            parse_tree__prog_type__V_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_3[2];
#line 808 "prog_type.m"
            {
#line 808 "prog_type.m"
              parse_tree__prog_type__V_17_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(parse_tree__prog_type__V_9_9);
            }
#line 808 "prog_type.m"
            {
#line 808 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_11, parse_tree__prog_type__V_17_17);
            }
#line 807 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 807 "prog_type.m"
              {
#line 809 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_12, (MR_String) "store") == 0);
#line 807 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 810 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 1);
#line 807 "prog_type.m"
              }
#line 807 "prog_type.m"
          }
#line 813 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 812 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 813 "prog_type.m"
        else
#line 814 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 1;
#line 813 "prog_type.m"
      }
#line 797 "prog_type.m"
    return parse_tree__prog_type__IsBuiltinDummy_4;
#line 797 "prog_type.m"
  }
#line 228 "prog_type.m"
}

#line 217 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
#line 217 "prog_type.m"
{
#line 786 "prog_type.m"
  {
#line 786 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__1_1;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_8_8;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_22_22;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_25_25;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_26_26;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_27_27;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_28_28;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_31_31;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_34_34;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_39_39;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_40_40;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_43_43;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_44_44;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_45_45;
#line 786 "prog_type.m"
    MR_Word parse_tree__prog_type__V_46_46;

#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_4_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 0) = ((MR_Box) (parse_tree__prog_type__V_4_4));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 1) = ((MR_Box) ((MR_String) "int"));
#line 787 "prog_type.m"
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 0) = ((MR_Box) (parse_tree__prog_type__V_3_3));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 1) = ((MR_Box) ((MR_Integer) 0));
#line 787 "prog_type.m"
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_10_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 0) = ((MR_Box) (parse_tree__prog_type__V_10_10));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 1) = ((MR_Box) ((MR_String) "string"));
#line 788 "prog_type.m"
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 0) = ((MR_Box) (parse_tree__prog_type__V_9_9));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 788 "prog_type.m"
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_16_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__V_16_16));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) ((MR_String) "character"));
#line 789 "prog_type.m"
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 0) = ((MR_Box) (parse_tree__prog_type__V_15_15));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 789 "prog_type.m"
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_22_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 0) = ((MR_Box) (parse_tree__prog_type__V_22_22));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 1) = ((MR_Box) ((MR_String) "float"));
#line 790 "prog_type.m"
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 0) = ((MR_Box) (parse_tree__prog_type__V_21_21));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 790 "prog_type.m"
    }
#line 791 "prog_type.m"
    {
#line 791 "prog_type.m"
      parse_tree__prog_type__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 791 "prog_type.m"
    {
#line 791 "prog_type.m"
      parse_tree__prog_type__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 1) = ((MR_Box) ((MR_String) "pred"));
#line 791 "prog_type.m"
    }
#line 791 "prog_type.m"
    {
#line 791 "prog_type.m"
      parse_tree__prog_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 0) = ((MR_Box) (parse_tree__prog_type__V_27_27));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 791 "prog_type.m"
    }
#line 792 "prog_type.m"
    {
#line 792 "prog_type.m"
      parse_tree__prog_type__V_34_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 792 "prog_type.m"
    {
#line 792 "prog_type.m"
      parse_tree__prog_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 0) = ((MR_Box) (parse_tree__prog_type__V_34_34));
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 1) = ((MR_Box) ((MR_String) "func"));
#line 792 "prog_type.m"
    }
#line 792 "prog_type.m"
    {
#line 792 "prog_type.m"
      parse_tree__prog_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 0) = ((MR_Box) (parse_tree__prog_type__V_33_33));
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 792 "prog_type.m"
    }
#line 793 "prog_type.m"
    {
#line 793 "prog_type.m"
      parse_tree__prog_type__V_40_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 793 "prog_type.m"
    {
#line 793 "prog_type.m"
      parse_tree__prog_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 0) = ((MR_Box) (parse_tree__prog_type__V_40_40));
#line 793 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 1) = ((MR_Box) ((MR_String) "void"));
#line 793 "prog_type.m"
    }
#line 793 "prog_type.m"
    {
#line 793 "prog_type.m"
      parse_tree__prog_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 0) = ((MR_Box) (parse_tree__prog_type__V_39_39));
#line 793 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 793 "prog_type.m"
    }
#line 794 "prog_type.m"
    {
#line 794 "prog_type.m"
      parse_tree__prog_type__V_46_46 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 794 "prog_type.m"
    {
#line 794 "prog_type.m"
      parse_tree__prog_type__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 0) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 794 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 1) = ((MR_Box) ((MR_String) "tuple"));
#line 794 "prog_type.m"
    }
#line 794 "prog_type.m"
    {
#line 794 "prog_type.m"
      parse_tree__prog_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 794 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 794 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 794 "prog_type.m"
    }
#line 795 "prog_type.m"
    {
#line 795 "prog_type.m"
      parse_tree__prog_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 0) = ((MR_Box) (parse_tree__prog_type__V_44_44));
#line 795 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "prog_type.m"
    }
#line 793 "prog_type.m"
    {
#line 793 "prog_type.m"
      parse_tree__prog_type__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 0) = ((MR_Box) (parse_tree__prog_type__V_38_38));
#line 793 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 1) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 793 "prog_type.m"
    }
#line 792 "prog_type.m"
    {
#line 792 "prog_type.m"
      parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__V_32_32));
#line 792 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 1) = ((MR_Box) (parse_tree__prog_type__V_37_37));
#line 792 "prog_type.m"
    }
#line 791 "prog_type.m"
    {
#line 791 "prog_type.m"
      parse_tree__prog_type__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__V_26_26));
#line 791 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 791 "prog_type.m"
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__V_20_20));
#line 790 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 1) = ((MR_Box) (parse_tree__prog_type__V_25_25));
#line 790 "prog_type.m"
    }
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__V_14_14));
#line 789 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 789 "prog_type.m"
    }
#line 788 "prog_type.m"
    {
#line 788 "prog_type.m"
      parse_tree__prog_type__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 0) = ((MR_Box) (parse_tree__prog_type__V_8_8));
#line 788 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 788 "prog_type.m"
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_type__V_2_2));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__prog_type__V_7_7));
#line 787 "prog_type.m"
    }
#line 786 "prog_type.m"
    return parse_tree__prog_type__HeadVar__1_1;
#line 786 "prog_type.m"
  }
#line 217 "prog_type.m"
}

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 771 "prog_type.m"
{
#line 771 "prog_type.m"
  {
#line 771 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 771 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 771 "prog_type.m"
  }
#line 771 "prog_type.m"
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
#line 777 "prog_type.m"
  {
#line 777 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__ConstrainedTvars_7;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__Unconstrained0_8;
#line 777 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_12;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[5], parse_tree__prog_type__Constraints_5, &parse_tree__prog_type__TVarsList_12);
    }
#line 772 "prog_type.m"
    {
#line 772 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_12, &parse_tree__prog_type__ConstrainedTvars_7);
    }
#line 9438 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      mercury__list__delete_elems_3_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Tvars_4, parse_tree__prog_type__ConstrainedTvars_7, &parse_tree__prog_type__Unconstrained0_8);
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Unconstrained0_8, parse_tree__prog_type__Unconstrained_6);
#line 780 "prog_type.m"
      return;
    }
#line 777 "prog_type.m"
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
#line 774 "prog_type.m"
  {
#line 774 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_11;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_8;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_9;
#line 774 "prog_type.m"
    MR_Word parse_tree__prog_type___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 652 "prog_type.m"
    {
#line 652 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_8);
    }
#line 9486 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 653 "prog_type.m"
    {
#line 653 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__RevTVars_8, &parse_tree__prog_type__TVarsDups_9);
    }
#line 654 "prog_type.m"
    {
#line 654 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__TVarsDups_9, parse_tree__prog_type__TVars_5);
#line 654 "prog_type.m"
      return;
    }
#line 774 "prog_type.m"
  }
#line 207 "prog_type.m"
}

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 771 "prog_type.m"
{
#line 771 "prog_type.m"
  {
#line 771 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 771 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 771 "prog_type.m"
  }
#line 771 "prog_type.m"
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
#line 770 "prog_type.m"
  {
#line 770 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 770 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_5;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[4], parse_tree__prog_type__Constraints_3, &parse_tree__prog_type__TVarsList_5);
    }
#line 772 "prog_type.m"
    {
#line 772 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_5, parse_tree__prog_type__TVars_4);
#line 772 "prog_type.m"
      return;
    }
#line 770 "prog_type.m"
  }
#line 202 "prog_type.m"
}

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 771 "prog_type.m"
{
#line 771 "prog_type.m"
  {
#line 771 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__conv1_TVars_5;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv1_TVars_5);
    }
#line 771 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv1_TVars_5));
#line 771 "prog_type.m"
  }
#line 771 "prog_type.m"
}

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 771 "prog_type.m"
{
#line 771 "prog_type.m"
  {
#line 771 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 771 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 771 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 771 "prog_type.m"
  }
#line 771 "prog_type.m"
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
#line 765 "prog_type.m"
  {
#line 765 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__Univ_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__Exist_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__UnivTVars_6;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistTVars_7;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_11;
#line 765 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_20;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[2], parse_tree__prog_type__Univ_3, &parse_tree__prog_type__TVarsList_11);
    }
#line 772 "prog_type.m"
    {
#line 772 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_11, &parse_tree__prog_type__UnivTVars_6);
    }
#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[3], parse_tree__prog_type__Exist_4, &parse_tree__prog_type__TVarsList_20);
    }
#line 772 "prog_type.m"
    {
#line 772 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_20, &parse_tree__prog_type__ExistTVars_7);
    }
#line 768 "prog_type.m"
    {
#line 768 "prog_type.m"
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__UnivTVars_6, parse_tree__prog_type__ExistTVars_7, parse_tree__prog_type__TVars_5);
#line 768 "prog_type.m"
      return;
    }
#line 765 "prog_type.m"
  }
#line 197 "prog_type.m"
}

#line 761 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 761 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 761 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 761 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 761 "prog_type.m"
{
#line 761 "prog_type.m"
  {
#line 761 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 761 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_HeadVar__2_2;

#line 761 "prog_type.m"
    {
#line 761 "prog_type.m"
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_HeadVar__2_2);
    }
#line 761 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
#line 761 "prog_type.m"
  }
#line 761 "prog_type.m"
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
#line 760 "prog_type.m"
  {
#line 760 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 760 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 761 "prog_type.m"
    {
#line 761 "prog_type.m"
      mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_8, parse_tree__prog_type__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_type_scalar_common_2[1], parse_tree__prog_type__Types0_3, parse_tree__prog_type__Types_4);
#line 761 "prog_type.m"
      return;
    }
#line 760 "prog_type.m"
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
#line 723 "prog_type.m"
  {
#line 723 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 723 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 737 "prog_type.m"
      *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 723 "prog_type.m"
    else
#line 723 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 726 "prog_type.m"
        {
#line 726 "prog_type.m"
          MR_Word parse_tree__prog_type__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 726 "prog_type.m"
          MR_Word parse_tree__prog_type__Args0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 726 "prog_type.m"
          MR_Word parse_tree__prog_type__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 726 "prog_type.m"
          MR_Word parse_tree__prog_type__Name_8;
#line 726 "prog_type.m"
          MR_Word parse_tree__prog_type__Args_9;
#line 732 "prog_type.m"
          MR_String parse_tree__prog_type__Name1_11;
#line 728 "prog_type.m"
          MR_Word parse_tree__prog_type__Module_10;
#line 728 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 728 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 728 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 728 "prog_type.m"
            {
#line 728 "prog_type.m"
              parse_tree__prog_type__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 0)));
#line 728 "prog_type.m"
              parse_tree__prog_type__Name1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 1)));
#line 729 "prog_type.m"
              {
#line 729 "prog_type.m"
                parse_tree__prog_type__V_31_31 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 729 "prog_type.m"
              {
#line 729 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__Module_10, parse_tree__prog_type__V_31_31);
              }
#line 728 "prog_type.m"
            }
#line 732 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 731 "prog_type.m"
            {
#line 731 "prog_type.m"
              parse_tree__prog_type__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 731 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__Name_8, 0) = ((MR_Box) (parse_tree__prog_type__Name1_11));
#line 731 "prog_type.m"
            }
#line 732 "prog_type.m"
          else
#line 733 "prog_type.m"
            parse_tree__prog_type__Name_8 = parse_tree__prog_type__Name0_5;
#line 735 "prog_type.m"
          {
#line 735 "prog_type.m"
            parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_6, &parse_tree__prog_type__Args_9);
          }
#line 726 "prog_type.m"
          {
#line 726 "prog_type.m"
            MR_Word base;
#line 726 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 726 "prog_type.m"
            *parse_tree__prog_type__HeadVar__2_2 = base;
#line 726 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 726 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_9));
#line 726 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_7));
#line 726 "prog_type.m"
          }
#line 726 "prog_type.m"
        }
#line 723 "prog_type.m"
      else
#line 723 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 724 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 723 "prog_type.m"
        else
#line 723 "prog_type.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 754 "prog_type.m"
            {
#line 754 "prog_type.m"
              MR_Word parse_tree__prog_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 754 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 754 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_27;

#line 755 "prog_type.m"
              {
#line 755 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_25, &parse_tree__prog_type__Args_27);
              }
#line 754 "prog_type.m"
              {
#line 754 "prog_type.m"
                MR_Word base;
#line 754 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 754 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 754 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 754 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_24));
#line 754 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Args_27));
#line 754 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Kind_26));
#line 754 "prog_type.m"
              }
#line 754 "prog_type.m"
            }
#line 723 "prog_type.m"
          else
#line 723 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 740 "prog_type.m"
              {
#line 740 "prog_type.m"
                MR_Word parse_tree__prog_type__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 740 "prog_type.m"
                MR_Word parse_tree__prog_type__MaybeRet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 740 "prog_type.m"
                MR_Word parse_tree__prog_type__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 740 "prog_type.m"
                MR_Word parse_tree__prog_type__Args_17;
#line 740 "prog_type.m"
                MR_Word parse_tree__prog_type__MaybeRet_18;

#line 741 "prog_type.m"
                {
#line 741 "prog_type.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_13, &parse_tree__prog_type__Args_17);
                }
#line 746 "prog_type.m"
                if ((parse_tree__prog_type__MaybeRet0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 748 "prog_type.m"
                  parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "prog_type.m"
                else
#line 743 "prog_type.m"
                  {
#line 743 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet0_14, (MR_Integer) 0)));
#line 743 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_20;

#line 744 "prog_type.m"
                    {
#line 744 "prog_type.m"
                      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Ret0_19, &parse_tree__prog_type__Ret_20);
                    }
#line 745 "prog_type.m"
                    {
#line 745 "prog_type.m"
                      parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_18, 0) = ((MR_Box) (parse_tree__prog_type__Ret_20));
#line 745 "prog_type.m"
                    }
#line 743 "prog_type.m"
                  }
#line 740 "prog_type.m"
                {
#line 740 "prog_type.m"
                  MR_Word base;
#line 740 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 740 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 740 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_17));
#line 740 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__MaybeRet_18));
#line 740 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_15));
#line 740 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 740 "prog_type.m"
                }
#line 740 "prog_type.m"
              }
#line 723 "prog_type.m"
            else
#line 723 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 757 "prog_type.m"
                {
#line 757 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 757 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 757 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type_30;

#line 758 "prog_type.m"
                  {
#line 758 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Type0_28, &parse_tree__prog_type__Type_30);
                  }
#line 757 "prog_type.m"
                  {
#line 757 "prog_type.m"
                    MR_Word base;
#line 757 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__2_2 = base;
#line 757 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 757 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Type_30));
#line 757 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_29));
#line 757 "prog_type.m"
                  }
#line 757 "prog_type.m"
                }
#line 723 "prog_type.m"
              else
#line 751 "prog_type.m"
                {
#line 751 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 751 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 751 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_23;

#line 752 "prog_type.m"
                  {
#line 752 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_21, &parse_tree__prog_type__Args_23);
                  }
#line 751 "prog_type.m"
                  {
#line 751 "prog_type.m"
                    MR_Word base;
#line 751 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 751 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__2_2 = base;
#line 751 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 751 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_23));
#line 751 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_22));
#line 751 "prog_type.m"
                  }
#line 751 "prog_type.m"
                }
#line 723 "prog_type.m"
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
#line 720 "prog_type.m"
  {
#line 720 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 720 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 721 "prog_type.m"
    {
#line 721 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 721 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__RetType_9));
#line 721 "prog_type.m"
    }
#line 721 "prog_type.m"
    {
#line 721 "prog_type.m"
      MR_Word base;
#line 721 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 721 "prog_type.m"
      *parse_tree__prog_type__Type_10 = base;
#line 721 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 721 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_8));
#line 721 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 721 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 721 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 721 "prog_type.m"
    }
#line 720 "prog_type.m"
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
#line 716 "prog_type.m"
  {
#line 716 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 717 "prog_type.m"
    {
#line 717 "prog_type.m"
      MR_Word base;
#line 717 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_type.m"
      *parse_tree__prog_type__Type_8 = base;
#line 717 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 717 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_7));
#line 717 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_5));
#line 717 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 717 "prog_type.m"
    }
#line 716 "prog_type.m"
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
#line 707 "prog_type.m"
  {
#line 707 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 707 "prog_type.m"
    if ((parse_tree__prog_type__PredOrFunc_7 == (MR_Integer) 1))
#line 710 "prog_type.m"
      {
#line 710 "prog_type.m"
        MR_Word parse_tree__prog_type__FuncArgTypes_11;
#line 710 "prog_type.m"
        MR_Word parse_tree__prog_type__FuncRetType_12;
#line 710 "prog_type.m"
        MR_Word parse_tree__prog_type__V_19_19;
#line 711 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_FuncRetType_12;

#line 711 "prog_type.m"
        {
#line 711 "prog_type.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_9, &parse_tree__prog_type__FuncArgTypes_11, &parse_tree__prog_type__conv0_FuncRetType_12);
        }
#line 711 "prog_type.m"
        parse_tree__prog_type__FuncRetType_12 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_12);
#line 721 "prog_type.m"
        {
#line 721 "prog_type.m"
          parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 721 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_12));
#line 721 "prog_type.m"
        }
#line 721 "prog_type.m"
        {
#line 721 "prog_type.m"
          MR_Word base;
#line 721 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 721 "prog_type.m"
          *parse_tree__prog_type__Type_10 = base;
#line 721 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 721 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_11));
#line 721 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 721 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 721 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 721 "prog_type.m"
        }
#line 710 "prog_type.m"
      }
#line 707 "prog_type.m"
    else
#line 716 "prog_type.m"
      {
#line 717 "prog_type.m"
        {
#line 717 "prog_type.m"
          MR_Word base;
#line 717 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_type.m"
          *parse_tree__prog_type__Type_10 = base;
#line 717 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 717 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_9));
#line 717 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 717 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 717 "prog_type.m"
        }
#line 716 "prog_type.m"
      }
#line 707 "prog_type.m"
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
#line 690 "prog_type.m"
  {
#line 690 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 690 "prog_type.m"
    MR_Word parse_tree__prog_type__BuiltinType_8;
#line 686 "prog_type.m"
    MR_String parse_tree__prog_type__Name_7;
#line 686 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 686 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 686 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == (MR_Integer) 0);
#line 686 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 686 "prog_type.m"
      {
#line 686 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 686 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 686 "prog_type.m"
          {
#line 686 "prog_type.m"
            parse_tree__prog_type__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, (MR_Integer) 0)));
#line 687 "prog_type.m"
            {
#line 687 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_type__BuiltinType_8, parse_tree__prog_type__Name_7);
            }
#line 686 "prog_type.m"
          }
#line 686 "prog_type.m"
      }
#line 690 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 689 "prog_type.m"
      {
#line 689 "prog_type.m"
        MR_Word base;
#line 689 "prog_type.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_type.m"
        *parse_tree__prog_type__Type_6 = base;
#line 689 "prog_type.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_type__BuiltinType_8));
#line 689 "prog_type.m"
      }
#line 690 "prog_type.m"
    else
#line 694 "prog_type.m"
      {
#line 694 "prog_type.m"
        MR_Word parse_tree__prog_type__Purity_9;
#line 694 "prog_type.m"
        MR_Word parse_tree__prog_type__PredOrFunc_10;

#line 691 "prog_type.m"
        {
#line 691 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type__Purity_9, &parse_tree__prog_type__PredOrFunc_10);
        }
#line 694 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 707 "prog_type.m"
          if ((parse_tree__prog_type__PredOrFunc_10 == (MR_Integer) 1))
#line 710 "prog_type.m"
            {
#line 710 "prog_type.m"
              MR_Word parse_tree__prog_type__FuncArgTypes_23;
#line 710 "prog_type.m"
              MR_Word parse_tree__prog_type__FuncRetType_24;
#line 710 "prog_type.m"
              MR_Word parse_tree__prog_type__V_31_31;
#line 711 "prog_type.m"
              MR_Box parse_tree__prog_type__conv0_FuncRetType_24;

#line 711 "prog_type.m"
              {
#line 711 "prog_type.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Args_5, &parse_tree__prog_type__FuncArgTypes_23, &parse_tree__prog_type__conv0_FuncRetType_24);
              }
#line 711 "prog_type.m"
              parse_tree__prog_type__FuncRetType_24 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_24);
#line 721 "prog_type.m"
              {
#line 721 "prog_type.m"
                parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 721 "prog_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_24));
#line 721 "prog_type.m"
              }
#line 721 "prog_type.m"
              {
#line 721 "prog_type.m"
                MR_Word base;
#line 721 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 721 "prog_type.m"
                *parse_tree__prog_type__Type_6 = base;
#line 721 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 721 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_23));
#line 721 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 721 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 721 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 721 "prog_type.m"
              }
#line 710 "prog_type.m"
            }
#line 707 "prog_type.m"
          else
#line 716 "prog_type.m"
            {
#line 717 "prog_type.m"
              {
#line 717 "prog_type.m"
                MR_Word base;
#line 717 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_type.m"
                *parse_tree__prog_type__Type_6 = base;
#line 717 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 717 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 717 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 717 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 717 "prog_type.m"
              }
#line 716 "prog_type.m"
            }
#line 694 "prog_type.m"
        else
#line 699 "prog_type.m"
          {
#line 611 "prog_type.m"
            MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 611 "prog_type.m"
            MR_String parse_tree__prog_type__V_39_39;
#line 611 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 611 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 611 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 611 "prog_type.m"
              {
#line 611 "prog_type.m"
                parse_tree__prog_type__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 611 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_39_39, (MR_String) "{}") == 0);
#line 611 "prog_type.m"
              }
#line 699 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 698 "prog_type.m"
              {
#line 698 "prog_type.m"
                {
#line 698 "prog_type.m"
                  MR_Word base;
#line 698 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 698 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 698 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 698 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 698 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "prog_type.m"
                }
#line 698 "prog_type.m"
              }
#line 699 "prog_type.m"
            else
#line 700 "prog_type.m"
              {
#line 700 "prog_type.m"
                MR_Word parse_tree__prog_type__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 700 "prog_type.m"
                MR_Integer parse_tree__prog_type__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 702 "prog_type.m"
                {
#line 702 "prog_type.m"
                  MR_Word base;
#line 702 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 702 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 702 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_12));
#line 702 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 702 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "prog_type.m"
                }
#line 700 "prog_type.m"
              }
#line 699 "prog_type.m"
          }
#line 694 "prog_type.m"
      }
#line 690 "prog_type.m"
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
#line 679 "prog_type.m"
  while (MR_TRUE)
#line 679 "prog_type.m"
    {
#line 679 "prog_type.m"
      /* tailcall optimized into a loop */
#line 679 "prog_type.m"
      {
#line 679 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 679 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 679 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10;

#line 679 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 679 "prog_type.m"
          {
#line 679 "prog_type.m"
            parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 679 "prog_type.m"
            parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 680 "prog_type.m"
            {
#line 680 "prog_type.m"
              parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_type__V_10_10, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
            }
#line 682 "prog_type.m"
            {
#line 682 "prog_type.m"
              /* direct tailcall eliminated */
#line 682 "prog_type.m"
              {
#line 682 "prog_type.m"
                MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__V_9_9;

#line 682 "prog_type.m"
                parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 682 "prog_type.m"
              }
#line 682 "prog_type.m"
              continue;
#line 682 "prog_type.m"
            }
#line 679 "prog_type.m"
          }
#line 679 "prog_type.m"
      }
#line 679 "prog_type.m"
      break;
#line 679 "prog_type.m"
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
#line 664 "prog_type.m"
  while (MR_TRUE)
#line 664 "prog_type.m"
    {
#line 664 "prog_type.m"
      /* tailcall optimized into a loop */
#line 664 "prog_type.m"
      {
#line 664 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 664 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 665 "prog_type.m"
          {
#line 665 "prog_type.m"
            MR_Word parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "prog_type.m"
            MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 665 "prog_type.m"
            MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 666 "prog_type.m"
            {
#line 666 "prog_type.m"
              parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_6, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 666 "prog_type.m"
              return;
            }
#line 665 "prog_type.m"
          }
#line 664 "prog_type.m"
        else
#line 664 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 664 "prog_type.m"
            {
#line 664 "prog_type.m"
              MR_Word parse_tree__prog_type__V_4_4;

#line 664 "prog_type.m"
              *parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 664 "prog_type.m"
              parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "prog_type.m"
              {
#line 664 "prog_type.m"
                parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
#line 664 "prog_type.m"
                return;
              }
#line 664 "prog_type.m"
            }
#line 664 "prog_type.m"
          else
#line 664 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 664 "prog_type.m"
              {
#line 664 "prog_type.m"
                MR_Word parse_tree__prog_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 664 "prog_type.m"
                MR_Word parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 673 "prog_type.m"
                MR_Word parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 673 "prog_type.m"
                *parse_tree__prog_type__Var_2 = parse_tree__prog_type__V_35_35;
#line 673 "prog_type.m"
                {
#line 673 "prog_type.m"
                  parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
                }
#line 675 "prog_type.m"
                {
#line 675 "prog_type.m"
                  parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_34_34, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 675 "prog_type.m"
                  return;
                }
#line 664 "prog_type.m"
              }
#line 664 "prog_type.m"
            else
#line 664 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 664 "prog_type.m"
                {
#line 664 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 664 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 668 "prog_type.m"
                  {
#line 668 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_39_39, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                  }
#line 669 "prog_type.m"
                  {
#line 669 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_15;

#line 669 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 669 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 669 "prog_type.m"
                      {
#line 669 "prog_type.m"
                        parse_tree__prog_type__Ret_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 670 "prog_type.m"
                        /* direct tailcall eliminated */
#line 670 "prog_type.m"
                        {
#line 670 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_15;

#line 670 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 670 "prog_type.m"
                        }
#line 670 "prog_type.m"
                        continue;
#line 669 "prog_type.m"
                      }
#line 669 "prog_type.m"
                  }
#line 664 "prog_type.m"
                }
#line 664 "prog_type.m"
              else
#line 664 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 676 "prog_type.m"
                  {
#line 676 "prog_type.m"
                    MR_Word parse_tree__prog_type__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 676 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 677 "prog_type.m"
                    /* direct tailcall eliminated */
#line 677 "prog_type.m"
                    {
#line 677 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_30;

#line 677 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 677 "prog_type.m"
                    }
#line 677 "prog_type.m"
                    continue;
#line 676 "prog_type.m"
                  }
#line 664 "prog_type.m"
                else
#line 664 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 671 "prog_type.m"
                    {
#line 671 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 671 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 672 "prog_type.m"
                      {
#line 672 "prog_type.m"
                        parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 672 "prog_type.m"
                        return;
                      }
#line 671 "prog_type.m"
                    }
#line 664 "prog_type.m"
                  else
#line 664 "prog_type.m"
                    {
#line 664 "prog_type.m"
                    }
#line 664 "prog_type.m"
      }
#line 664 "prog_type.m"
      break;
#line 664 "prog_type.m"
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
#line 651 "prog_type.m"
  {
#line 651 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 651 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 651 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 651 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 652 "prog_type.m"
    {
#line 652 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Types_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 10764 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 653 "prog_type.m"
    {
#line 653 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 654 "prog_type.m"
    {
#line 654 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 654 "prog_type.m"
      return;
    }
#line 651 "prog_type.m"
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
#line 624 "prog_type.m"
  {
#line 624 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 624 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 624 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 624 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 625 "prog_type.m"
    {
#line 625 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 10808 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 626 "prog_type.m"
    {
#line 626 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 627 "prog_type.m"
    {
#line 627 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 627 "prog_type.m"
      return;
    }
#line 624 "prog_type.m"
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
#line 618 "prog_type.m"
  {
#line 618 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 618 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "prog_type.m"
    else
#line 619 "prog_type.m"
      {
#line 619 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 619 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 619 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_8;
#line 619 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_9;
#line 619 "prog_type.m"
        MR_Word parse_tree__prog_type__Kind_10;

#line 620 "prog_type.m"
        {
#line 620 "prog_type.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Var_6, &parse_tree__prog_type__Kind_10);
        }
#line 621 "prog_type.m"
        {
#line 621 "prog_type.m"
          parse_tree__prog_type__Type_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 0) = ((MR_Box) (parse_tree__prog_type__Var_6));
#line 621 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 1) = ((MR_Box) (parse_tree__prog_type__Kind_10));
#line 621 "prog_type.m"
        }
#line 622 "prog_type.m"
        {
#line 622 "prog_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Vars_7, &parse_tree__prog_type__Types_9);
        }
#line 619 "prog_type.m"
        {
#line 619 "prog_type.m"
          MR_Word base;
#line 619 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 619 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Type_8));
#line 619 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Types_9));
#line 619 "prog_type.m"
        }
#line 619 "prog_type.m"
      }
#line 618 "prog_type.m"
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
#line 613 "prog_type.m"
  {
#line 613 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 613 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "prog_type.m"
      {
#line 613 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 613 "prog_type.m"
      }
#line 613 "prog_type.m"
    else
#line 614 "prog_type.m"
      {
#line 614 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 614 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 614 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_5;
#line 614 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_6;
#line 615 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7;

#line 615 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Type_3)) == (MR_mktag((MR_Integer) 0)));
#line 615 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 615 "prog_type.m"
          {
#line 615 "prog_type.m"
            parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 0)));
#line 615 "prog_type.m"
            parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 1)));
#line 616 "prog_type.m"
            {
#line 616 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(parse_tree__prog_type__Types_4, &parse_tree__prog_type__Vars_6);
            }
#line 614 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 614 "prog_type.m"
              {
#line 614 "prog_type.m"
                {
#line 614 "prog_type.m"
                  MR_Word base;
#line 614 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 614 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_5));
#line 614 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Vars_6));
#line 614 "prog_type.m"
                }
#line 614 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 614 "prog_type.m"
              }
#line 615 "prog_type.m"
          }
#line 614 "prog_type.m"
      }
#line 613 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 613 "prog_type.m"
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
#line 611 "prog_type.m"
  {
#line 611 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 611 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 611 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 611 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 611 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 611 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 611 "prog_type.m"
      {
#line 611 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 611 "prog_type.m"
        parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "{}") == 0);
#line 611 "prog_type.m"
      }
#line 611 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 611 "prog_type.m"
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
#line 579 "prog_type.m"
  {
#line 579 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 579 "prog_type.m"
    MR_Word parse_tree__prog_type__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 0)));
#line 579 "prog_type.m"
    MR_String parse_tree__prog_type__PorFStr_11;
#line 580 "prog_type.m"
    MR_Integer parse_tree__prog_type___Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 1)));

#line 595 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__SymName_9)) == (MR_mktag((MR_Integer) 1))))
#line 595 "prog_type.m"
      {
#line 595 "prog_type.m"
        MR_String parse_tree__prog_type__Qualifier_16;
#line 595 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));

#line 595 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 1)));
#line 595 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 595 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 595 "prog_type.m"
          {
#line 595 "prog_type.m"
            parse_tree__prog_type__Qualifier_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 600 "prog_type.m"
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "impure") == 0))
#line 597 "prog_type.m"
              {
#line 598 "prog_type.m"
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 2;
#line 599 "prog_type.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 597 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 597 "prog_type.m"
              }
#line 600 "prog_type.m"
            else
#line 600 "prog_type.m"
              if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "semipure") == 0))
#line 601 "prog_type.m"
                {
#line 602 "prog_type.m"
                  *parse_tree__prog_type__Purity_6 = (MR_Integer) 1;
#line 603 "prog_type.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 601 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 601 "prog_type.m"
                }
#line 600 "prog_type.m"
              else
#line 600 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_FALSE;
#line 595 "prog_type.m"
          }
#line 595 "prog_type.m"
      }
#line 595 "prog_type.m"
    else
#line 606 "prog_type.m"
      {
#line 606 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));
#line 607 "prog_type.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 608 "prog_type.m"
        *parse_tree__prog_type__Purity_6 = (MR_Integer) 0;
#line 606 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 606 "prog_type.m"
      }
#line 579 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 585 "prog_type.m"
      {
#line 585 "prog_type.m"
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "func") == 0))
#line 587 "prog_type.m"
          {
#line 587 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 1;
#line 587 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 587 "prog_type.m"
          }
#line 585 "prog_type.m"
        else
#line 585 "prog_type.m"
          if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "pred") == 0))
#line 584 "prog_type.m"
            {
#line 584 "prog_type.m"
              *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 0;
#line 584 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 584 "prog_type.m"
            }
#line 585 "prog_type.m"
          else
#line 585 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 585 "prog_type.m"
      }
#line 579 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 579 "prog_type.m"
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
#line 577 "prog_type.m"
  {
#line 577 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 577 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 577 "prog_type.m"
    {
#line 577 "prog_type.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 577 "prog_type.m"
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
#line 573 "prog_type.m"
  {
#line 573 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 573 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 573 "prog_type.m"
    {
#line 573 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 573 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 573 "prog_type.m"
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
#line 566 "prog_type.m"
  {
#line 566 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 566 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorPrime_7;
#line 566 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsPrime_8;

#line 563 "prog_type.m"
    {
#line 563 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type__TypeCtorPrime_7, &parse_tree__prog_type__ArgsPrime_8);
    }
#line 566 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 564 "prog_type.m"
      {
#line 564 "prog_type.m"
        *parse_tree__prog_type__TypeCtor_5 = parse_tree__prog_type__TypeCtorPrime_7;
#line 565 "prog_type.m"
        *parse_tree__prog_type__Args_6 = parse_tree__prog_type__ArgsPrime_8;
#line 564 "prog_type.m"
      }
#line 566 "prog_type.m"
    else
#line 567 "prog_type.m"
      {
#line 567 "prog_type.m"
        MR_String parse_tree__prog_type__V_11_11;
#line 567 "prog_type.m"
        MR_String parse_tree__prog_type__V_13_13;

#line 568 "prog_type.m"
        {
#line 568 "prog_type.m"
          parse_tree__prog_type__V_13_13 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__Type_4)));
        }
#line 568 "prog_type.m"
        {
#line 568 "prog_type.m"
          parse_tree__prog_type__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", parse_tree__prog_type__V_13_13);
        }
#line 567 "prog_type.m"
        {
#line 567 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", parse_tree__prog_type__V_11_11);
#line 567 "prog_type.m"
          return;
        }
#line 567 "prog_type.m"
      }
#line 566 "prog_type.m"
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
#line 515 "prog_type.m"
  while (MR_TRUE)
#line 515 "prog_type.m"
    {
#line 515 "prog_type.m"
      /* tailcall optimized into a loop */
#line 515 "prog_type.m"
      {
#line 515 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 515 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 2))))
#line 519 "prog_type.m"
          {
#line 519 "prog_type.m"
            MR_Word parse_tree__prog_type__BuiltinType_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 519 "prog_type.m"
            MR_String parse_tree__prog_type__Name_11;
#line 519 "prog_type.m"
            MR_Word parse_tree__prog_type__SymName_33;

#line 520 "prog_type.m"
            {
#line 520 "prog_type.m"
              parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_type__BuiltinType_10, &parse_tree__prog_type__Name_11);
            }
#line 521 "prog_type.m"
            {
#line 521 "prog_type.m"
              parse_tree__prog_type__SymName_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 521 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_33, 0) = ((MR_Box) (parse_tree__prog_type__Name_11));
#line 521 "prog_type.m"
            }
#line 523 "prog_type.m"
            *parse_tree__prog_type__Args_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_type.m"
            {
#line 524 "prog_type.m"
              MR_Word base;
#line 524 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "prog_type.m"
              *parse_tree__prog_type__TypeCtor_5 = base;
#line 524 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_33));
#line 524 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 524 "prog_type.m"
            }
#line 519 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 519 "prog_type.m"
          }
#line 515 "prog_type.m"
        else
#line 515 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 1))))
#line 515 "prog_type.m"
            {
#line 515 "prog_type.m"
              MR_Word parse_tree__prog_type__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 515 "prog_type.m"
              MR_Integer parse_tree__prog_type__Arity_9;
#line 515 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8;

#line 515 "prog_type.m"
              *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 515 "prog_type.m"
              parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 516 "prog_type.m"
              {
#line 516 "prog_type.m"
                parse_tree__prog_type__Arity_9 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
              }
#line 517 "prog_type.m"
              {
#line 517 "prog_type.m"
                MR_Word base;
#line 517 "prog_type.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "prog_type.m"
                *parse_tree__prog_type__TypeCtor_5 = base;
#line 517 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_7));
#line 517 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_9));
#line 517 "prog_type.m"
              }
#line 515 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 515 "prog_type.m"
            }
#line 515 "prog_type.m"
          else
#line 515 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 555 "prog_type.m"
              {
#line 556 "prog_type.m"
                {
#line 556 "prog_type.m"
                  mercury__require__sorry_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
                }
#line 555 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 555 "prog_type.m"
              }
#line 515 "prog_type.m"
            else
#line 515 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 526 "prog_type.m"
                {
#line 526 "prog_type.m"
                  MR_Word parse_tree__prog_type__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 526 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 526 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 526 "prog_type.m"
                  MR_Word parse_tree__prog_type__Purity_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 3)));
#line 526 "prog_type.m"
                  MR_String parse_tree__prog_type__PorFStr_17;
#line 526 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName0_18;
#line 526 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName_35;
#line 526 "prog_type.m"
                  MR_Integer parse_tree__prog_type__Arity_36;

#line 527 "prog_type.m"
                  {
#line 527 "prog_type.m"
                    parse_tree__prog_type__Arity_36 = mercury__list__length_1_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12);
                  }
#line 532 "prog_type.m"
                  if ((parse_tree__prog_type__MaybeRet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "prog_type.m"
                    {
#line 534 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "pred";
#line 535 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = parse_tree__prog_type__Args0_12;
#line 533 "prog_type.m"
                    }
#line 532 "prog_type.m"
                  else
#line 529 "prog_type.m"
                    {
#line 529 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 529 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29;

#line 530 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "func";
#line 531 "prog_type.m"
                      {
#line 531 "prog_type.m"
                        parse_tree__prog_type__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 0) = ((MR_Box) (parse_tree__prog_type__Ret_16));
#line 531 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "prog_type.m"
                      }
#line 531 "prog_type.m"
                      {
#line 531 "prog_type.m"
                        *parse_tree__prog_type__Args_6 = mercury__list__append_2_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12, parse_tree__prog_type__V_29_29);
                      }
#line 529 "prog_type.m"
                    }
#line 537 "prog_type.m"
                  {
#line 537 "prog_type.m"
                    parse_tree__prog_type__SymName0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 537 "prog_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName0_18, 0) = ((MR_Box) (parse_tree__prog_type__PorFStr_17));
#line 537 "prog_type.m"
                  }
#line 541 "prog_type.m"
                  if ((parse_tree__prog_type__Purity_14 == (MR_Integer) 2))
#line 545 "prog_type.m"
                    {
#line 546 "prog_type.m"
                      {
#line 546 "prog_type.m"
                        parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "impure", parse_tree__prog_type__SymName0_18);
                      }
#line 545 "prog_type.m"
                    }
#line 541 "prog_type.m"
                  else
#line 541 "prog_type.m"
                    if ((parse_tree__prog_type__Purity_14 == (MR_Integer) 0))
#line 540 "prog_type.m"
                      parse_tree__prog_type__SymName_35 = parse_tree__prog_type__SymName0_18;
#line 541 "prog_type.m"
                    else
#line 542 "prog_type.m"
                      {
#line 543 "prog_type.m"
                        {
#line 543 "prog_type.m"
                          parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "semipure", parse_tree__prog_type__SymName0_18);
                        }
#line 542 "prog_type.m"
                      }
#line 548 "prog_type.m"
                  {
#line 548 "prog_type.m"
                    MR_Word base;
#line 548 "prog_type.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "prog_type.m"
                    *parse_tree__prog_type__TypeCtor_5 = base;
#line 548 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_35));
#line 548 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_36));
#line 548 "prog_type.m"
                  }
#line 526 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 526 "prog_type.m"
                }
#line 515 "prog_type.m"
              else
#line 515 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 558 "prog_type.m"
                  {
#line 558 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 558 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));

#line 559 "prog_type.m"
                    /* direct tailcall eliminated */
#line 559 "prog_type.m"
                    {
#line 559 "prog_type.m"
                      MR_Word parse_tree__prog_type__Type__tmp_copy_4 = parse_tree__prog_type__SubType_23;

#line 559 "prog_type.m"
                      parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type__tmp_copy_4;
#line 559 "prog_type.m"
                    }
#line 559 "prog_type.m"
                    continue;
#line 558 "prog_type.m"
                  }
#line 515 "prog_type.m"
                else
#line 515 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 550 "prog_type.m"
                    {
#line 550 "prog_type.m"
                      MR_Integer parse_tree__prog_type__Arity_38;
#line 550 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_19_19;

#line 550 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 550 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 552 "prog_type.m"
                      {
#line 552 "prog_type.m"
                        parse_tree__prog_type__Arity_38 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
                      }
#line 553 "prog_type.m"
                      {
#line 553 "prog_type.m"
                        MR_Word base;
#line 553 "prog_type.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "prog_type.m"
                        *parse_tree__prog_type__TypeCtor_5 = base;
#line 553 "prog_type.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1]));
#line 553 "prog_type.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_38));
#line 553 "prog_type.m"
                      }
#line 550 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 550 "prog_type.m"
                    }
#line 515 "prog_type.m"
                  else
#line 515 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 515 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 515 "prog_type.m"
      }
#line 515 "prog_type.m"
      break;
#line 515 "prog_type.m"
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
#line 505 "prog_type.m"
  {
#line 505 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 505 "prog_type.m"
    MR_Word parse_tree__prog_type__PredOrFunc_8;
#line 505 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeArgs0_10;
#line 501 "prog_type.m"
    MR_Word parse_tree__prog_type___Purity_7;

#line 501 "prog_type.m"
    {
#line 501 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type___Purity_7, &parse_tree__prog_type__PredOrFunc_8, &parse_tree__prog_type__TypeArgs0_10);
    }
#line 505 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 502 "prog_type.m"
      {
#line 502 "prog_type.m"
        MR_String parse_tree__prog_type__PredOrFuncStr_11;
#line 502 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 502 "prog_type.m"
        *parse_tree__prog_type__TypeArgs_6 = parse_tree__prog_type__TypeArgs0_10;
#line 503 "prog_type.m"
        {
#line 503 "prog_type.m"
          parse_tree__prog_type__PredOrFuncStr_11 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_type__PredOrFunc_8);
        }
#line 504 "prog_type.m"
        {
#line 504 "prog_type.m"
          parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 504 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__PredOrFuncStr_11));
#line 504 "prog_type.m"
        }
#line 504 "prog_type.m"
        {
#line 504 "prog_type.m"
          MR_Word base;
#line 504 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "prog_type.m"
          *parse_tree__prog_type__TypeCtor_5 = base;
#line 504 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 504 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 504 "prog_type.m"
        }
#line 502 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 502 "prog_type.m"
      }
#line 505 "prog_type.m"
    else
#line 509 "prog_type.m"
      {
#line 509 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;
#line 509 "prog_type.m"
        MR_String parse_tree__prog_type__V_16_16;
#line 509 "prog_type.m"
        MR_Integer parse_tree__prog_type__V_17_17;
#line 509 "prog_type.m"
        MR_Word parse_tree__prog_type__V_21_21;
#line 472 "prog_type.m"
        MR_Word parse_tree__prog_type__V_20_20;

#line 472 "prog_type.m"
        {
#line 472 "prog_type.m"
          parse_tree__prog_type__V_21_21 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_4);
        }
#line 472 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 472 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 472 "prog_type.m"
          {
#line 472 "prog_type.m"
            *parse_tree__prog_type__TypeArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 1)));
#line 472 "prog_type.m"
            parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 2)));
#line 508 "prog_type.m"
            parse_tree__prog_type__V_16_16 = (MR_String) "tuple";
#line 508 "prog_type.m"
            parse_tree__prog_type__V_17_17 = (MR_Integer) 0;
#line 508 "prog_type.m"
            parse_tree__prog_type__V_15_15 = (MR_Word) &parse_tree__prog_type_scalar_common_3[0];
#line 508 "prog_type.m"
            *parse_tree__prog_type__TypeCtor_5 = (MR_Word) &parse_tree__prog_type_scalar_common_1[6];
#line 508 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 472 "prog_type.m"
          }
#line 509 "prog_type.m"
      }
#line 505 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 505 "prog_type.m"
  }
#line 109 "prog_type.m"
}

#line 492 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 492 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 492 "prog_type.m"
{
#line 492 "prog_type.m"
  {
#line 492 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 492 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0, 1);
#line 492 "prog_type.m"
  }
#line 492 "prog_type.m"
}

#line 492 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 492 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 492 "prog_type.m"
{
#line 492 "prog_type.m"
  {
#line 492 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 492 "prog_type.m"
    {
#line 496 "prog_type.m"
      MR_Word parse_tree__prog_type__Binding_6;
#line 494 "prog_type.m"
      MR_Box parse_tree__prog_type__conv0_Binding_6;

#line 494 "prog_type.m"
      {
#line 494 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4, ((MR_Box) ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5)), &parse_tree__prog_type__conv0_Binding_6);
      }
#line 494 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 494 "prog_type.m"
        {
#line 494 "prog_type.m"
          parse_tree__prog_type__Binding_6 = ((MR_Word) parse_tree__prog_type__conv0_Binding_6);
#line 494 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 494 "prog_type.m"
        }
#line 496 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 495 "prog_type.m"
        {
#line 495 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Binding_6, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4);
        }
#line 496 "prog_type.m"
      else
#line 497 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 496 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 496 "prog_type.m"
        {
#line 496 "prog_type.m"
          parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(parse_tree__prog_type__env_ptr);
#line 496 "prog_type.m"
          return;
        }
#line 492 "prog_type.m"
    }
#line 492 "prog_type.m"
  }
#line 492 "prog_type.m"
}

#line 492 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 492 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 492 "prog_type.m"
{
#line 492 "prog_type.m"
  {
#line 492 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 492 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0) == 0)
#line 492 "prog_type.m"
      {
#line 493 "prog_type.m"
        {
#line 493 "prog_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5, parse_tree__prog_type__subst_type_is_nonground_2_p_0_2, parse_tree__prog_type__env_ptr);
        }
#line 492 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_FALSE;
#line 492 "prog_type.m"
      }
#line 492 "prog_type.m"
    else
#line 492 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 492 "prog_type.m"
  }
#line 492 "prog_type.m"
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
#line 492 "prog_type.m"
    {
#line 492 "prog_type.m"
      parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(&parse_tree__prog_type__env);
    }
#line 492 "prog_type.m"
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
#line 490 "prog_type.m"
  {
#line 490 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 490 "prog_type.m"
    {
#line 490 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TSubst_4);
    }
#line 490 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 490 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 490 "prog_type.m"
  }
#line 96 "prog_type.m"
}

#line 487 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 487 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 487 "prog_type.m"
{
#line 487 "prog_type.m"
  {
#line 487 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 487 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0, 1);
#line 487 "prog_type.m"
  }
#line 487 "prog_type.m"
}

#line 487 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 487 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 487 "prog_type.m"
{
#line 487 "prog_type.m"
  {
#line 487 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 487 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0) == 0)
#line 487 "prog_type.m"
      {
#line 487 "prog_type.m"
        {
#line 487 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 487 "prog_type.m"
          {
#line 487 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_nonground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 487 "prog_type.m"
        }
#line 487 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
#line 487 "prog_type.m"
      }
#line 487 "prog_type.m"
    else
#line 487 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
#line 487 "prog_type.m"
  }
#line 487 "prog_type.m"
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
#line 487 "prog_type.m"
    {
#line 487 "prog_type.m"
      parse_tree__prog_type__type_is_nonground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 487 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 92 "prog_type.m"
  }
#line 92 "prog_type.m"
}

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 484 "prog_type.m"
{
#line 484 "prog_type.m"
  {
#line 484 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 484 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0, 1);
#line 484 "prog_type.m"
  }
#line 484 "prog_type.m"
}

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 484 "prog_type.m"
{
#line 484 "prog_type.m"
  {
#line 484 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 484 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0) == 0)
#line 484 "prog_type.m"
      {
#line 484 "prog_type.m"
        {
#line 484 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 484 "prog_type.m"
          {
#line 484 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_ground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 484 "prog_type.m"
        }
#line 484 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
#line 484 "prog_type.m"
      }
#line 484 "prog_type.m"
    else
#line 484 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
#line 484 "prog_type.m"
  }
#line 484 "prog_type.m"
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
#line 484 "prog_type.m"
    {
#line 484 "prog_type.m"
      parse_tree__prog_type__type_is_ground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 484 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded);
#line 484 "prog_type.m"
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
#line 477 "prog_type.m"
  while (MR_TRUE)
#line 477 "prog_type.m"
    {
#line 477 "prog_type.m"
      /* tailcall optimized into a loop */
#line 477 "prog_type.m"
      {
#line 477 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Type0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 477 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_4;
#line 477 "prog_type.m"
        MR_Word parse_tree__prog_type__Type1_5;
#line 475 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6;

#line 475 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 475 "prog_type.m"
          {
#line 475 "prog_type.m"
            parse_tree__prog_type__Type1_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 1)));
#line 475 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 2)));
#line 476 "prog_type.m"
            /* direct tailcall eliminated */
#line 476 "prog_type.m"
            {
#line 476 "prog_type.m"
              MR_Word parse_tree__prog_type__Type0__tmp_copy_3 = parse_tree__prog_type__Type1_5;

#line 476 "prog_type.m"
              parse_tree__prog_type__Type0_3 = parse_tree__prog_type__Type0__tmp_copy_3;
#line 476 "prog_type.m"
            }
#line 476 "prog_type.m"
            continue;
#line 475 "prog_type.m"
          }
#line 475 "prog_type.m"
        else
#line 478 "prog_type.m"
          parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type0_3;
#line 477 "prog_type.m"
        return parse_tree__prog_type__Type_4;
#line 477 "prog_type.m"
      }
#line 477 "prog_type.m"
      break;
#line 477 "prog_type.m"
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
#line 471 "prog_type.m"
  {
#line 471 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 471 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 472 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 472 "prog_type.m"
    {
#line 472 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_3);
    }
#line 472 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 472 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 472 "prog_type.m"
      {
#line 472 "prog_type.m"
        *parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 472 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 2)));
#line 472 "prog_type.m"
      }
#line 471 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 471 "prog_type.m"
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
#line 467 "prog_type.m"
  {
#line 467 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 467 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 467 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 467 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;

#line 463 "prog_type.m"
    {
#line 463 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_6, &parse_tree__prog_type__STATE_VARIABLE_Purity_15_15, &parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16, &parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18);
    }
#line 467 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 466 "prog_type.m"
      {
#line 466 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14 = parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;
#line 466 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12 = parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 466 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_Purity_11 = parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 466 "prog_type.m"
      }
#line 467 "prog_type.m"
    else
#line 468 "prog_type.m"
      {
#line 468 "prog_type.m"
        {
#line 468 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_is_higher_order_details_det\'/5", (MR_String) "type is not higher-order");
#line 468 "prog_type.m"
          return;
        }
#line 468 "prog_type.m"
      }
#line 467 "prog_type.m"
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
#line 447 "prog_type.m"
  {
#line 447 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 447 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_11;
#line 447 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeRetType_12;
#line 447 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;

#line 448 "prog_type.m"
    {
#line 448 "prog_type.m"
      parse_tree__prog_type__V_14_14 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_6);
    }
#line 449 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 449 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 449 "prog_type.m"
      {
#line 449 "prog_type.m"
        parse_tree__prog_type__ArgTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 1)));
#line 449 "prog_type.m"
        parse_tree__prog_type__MaybeRetType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 2)));
#line 449 "prog_type.m"
        *parse_tree__prog_type__Purity_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 3)));
#line 454 "prog_type.m"
        if ((parse_tree__prog_type__MaybeRetType_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "prog_type.m"
          {
#line 456 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 0;
#line 457 "prog_type.m"
            *parse_tree__prog_type__PredArgTypes_10 = parse_tree__prog_type__ArgTypes_11;
#line 455 "prog_type.m"
          }
#line 454 "prog_type.m"
        else
#line 451 "prog_type.m"
          {
#line 451 "prog_type.m"
            MR_Word parse_tree__prog_type__RetType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRetType_12, (MR_Integer) 0)));
#line 451 "prog_type.m"
            MR_Word parse_tree__prog_type__V_15_15;

#line 452 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 1;
#line 453 "prog_type.m"
            {
#line 453 "prog_type.m"
              parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__RetType_13));
#line 453 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "prog_type.m"
            }
#line 453 "prog_type.m"
            {
#line 453 "prog_type.m"
              *parse_tree__prog_type__PredArgTypes_10 = mercury__list__append_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_11, parse_tree__prog_type__V_15_15);
            }
#line 451 "prog_type.m"
          }
#line 454 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 449 "prog_type.m"
      }
#line 447 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 447 "prog_type.m"
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
#line 443 "prog_type.m"
  {
#line 443 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 443 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 444 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 444 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 444 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 444 "prog_type.m"
    {
#line 444 "prog_type.m"
      parse_tree__prog_type__V_7_7 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 444 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 444 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 444 "prog_type.m"
      {
#line 444 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 1)));
#line 444 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 2)));
#line 444 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 3)));
#line 444 "prog_type.m"
      }
#line 443 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 443 "prog_type.m"
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
#line 441 "prog_type.m"
  {
#line 441 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 437 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 438 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 438 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 438 "prog_type.m"
    {
#line 438 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 438 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 0)));
#line 438 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 438 "prog_type.m"
      {
#line 438 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 438 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 438 "prog_type.m"
      }
#line 441 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 441 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 441 "prog_type.m"
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
#line 437 "prog_type.m"
  {
#line 437 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 437 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;
#line 438 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 438 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;

#line 438 "prog_type.m"
    {
#line 438 "prog_type.m"
      parse_tree__prog_type__V_5_5 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 438 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 438 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 438 "prog_type.m"
      {
#line 438 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 438 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 438 "prog_type.m"
      }
#line 437 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 437 "prog_type.m"
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
