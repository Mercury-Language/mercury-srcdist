/*
** Automatically generated from `prog_type.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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



#line 403 "prog_type.m"
struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s {
#line 1338 "prog_type.m"
  MR_bool parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1375 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
#line 1378 "prog_type.m"
  jmp_buf parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0;
#line 1378 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28;
#line 1379 "prog_type.m"
  MR_Box parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
#line 403 "prog_type.m"
};

#line 100 "prog_type.m"
struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s {
#line 100 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3;
#line 100 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4;
#line 484 "prog_type.m"
  MR_bool parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 484 "prog_type.m"
  jmp_buf parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0;
#line 484 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5;
#line 100 "prog_type.m"
};

#line 91 "prog_type.m"
struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s {
#line 91 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2;
#line 479 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 479 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0;
#line 91 "prog_type.m"
};

#line 87 "prog_type.m"
struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s {
#line 87 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2;
#line 476 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 476 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0;
#line 87 "prog_type.m"
};


#line 184 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 187 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 190 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 196 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 202 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 205 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

#line 208 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 211 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 214 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6];

#line 217 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6];

#line 220 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0;

#line 223 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1];

#line 226 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1];

#line 229 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1];

#line 232 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1];

#line 235 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0;

#line 238 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1;

#line 241 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2];

#line 244 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2];

#line 247 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2];

#line 250 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1];

#line 253 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0;

#line 256 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1;

#line 259 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1];

#line 262 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1];

#line 265 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2];

#line 268 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2];

#line 271 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2];

#line 274 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0;

#line 277 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1;

#line 280 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2;

#line 283 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3;

#line 286 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4];

#line 289 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4];

#line 292 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4];

#line 295 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0;

#line 298 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1;

#line 301 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2];

#line 304 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2];

#line 307 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2];

#line 310 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0;

#line 313 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1;

#line 316 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2;

#line 319 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3;

#line 322 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4];

#line 325 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4];

#line 328 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4];

#line 331 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0;

#line 334 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1;

#line 337 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2;

#line 340 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3];

#line 343 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3];

#line 346 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3];

#line 349 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1];

#line 352 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0;

#line 355 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1;

#line 358 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2;

#line 361 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1];

#line 364 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3;

#line 367 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4;

#line 370 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5;

#line 373 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1];

#line 376 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6;

#line 379 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7;

#line 382 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1];

#line 385 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8;

#line 388 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5];

#line 391 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1];

#line 394 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1];

#line 397 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2];

#line 400 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4];

#line 403 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9];

#line 406 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9];

#line 409 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 412 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 414 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 417 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 420 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 422 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 424 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 427 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 430 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 432 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 435 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 438 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 440 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 442 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 445 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 448 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 450 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 453 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 456 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 458 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 460 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 463 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 466 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 468 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 471 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 474 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 476 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 478 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 481 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 484 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 486 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 489 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 492 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 494 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 496 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 499 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 502 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 504 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 507 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 510 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 512 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 514 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 517 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 520 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 522 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 525 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 528 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 530 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 532 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 535 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 538 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 540 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 543 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 546 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 548 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 550 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 1022 "prog_type.m"
static MR_Box MR_CALL 
parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0_1(
#line 1022 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 1022 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 1311 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1311 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1311 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1311 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7);

#line 1271 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1271 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1271 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1271 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6);

#line 1250 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1250 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1250 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1250 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8);

#line 1238 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1238 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1238 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1238 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20);

#line 1185 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1185 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33);

#line 1154 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1154 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22);

#line 1122 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1122 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23);

#line 1101 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1101 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16);

#line 1058 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1058 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19);

#line 1042 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1042 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14);

#line 879 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(
#line 879 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_3,
#line 879 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_4);

#line 648 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 648 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 648 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 648 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3);

#line 621 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 621 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 621 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 621 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3);

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1379 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1379 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 857 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 857 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1(
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 857 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1(
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 876 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1(
#line 876 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 876 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 753 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 753 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 753 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 753 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 479 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 479 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 479 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 479 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 476 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 476 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 476 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 476 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[4][5];




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

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[7][3] = {
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
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_type_scalar_common_4[3])),
    ((MR_Box) (parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0_1)),
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

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_4[4][5] = {
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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



#line 1049 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1057 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1065 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1073 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1082 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1090 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1098 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1106 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

#line 1115 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1123 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1131 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1141 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_existq_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_constraints",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

#line 1151 "parse_tree.prog_type.c"
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

#line 1166 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1171 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0
  }
};

#line 1180 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1185 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1] = {
  (MR_Integer) 0
};

#line 1190 "parse_tree.prog_type.c"
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

#line 1211 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
  (MR_String) "is_builtin_dummy_type_ctor",
  (MR_Integer) 0
};

#line 1217 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
  (MR_String) "is_not_builtin_dummy_type_ctor",
  (MR_Integer) 1
};

#line 1223 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1229 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1235 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1241 "parse_tree.prog_type.c"
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

#line 1262 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1267 "parse_tree.prog_type.c"
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

#line 1282 "parse_tree.prog_type.c"
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

#line 1297 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1302 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0
};

#line 1307 "parse_tree.prog_type.c"
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

#line 1321 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1327 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1333 "parse_tree.prog_type.c"
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

#line 1354 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0 = {
  (MR_String) "cat_builtin_int",
  (MR_Integer) 0
};

#line 1360 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1 = {
  (MR_String) "cat_builtin_float",
  (MR_Integer) 1
};

#line 1366 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2 = {
  (MR_String) "cat_builtin_char",
  (MR_Integer) 2
};

#line 1372 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3 = {
  (MR_String) "cat_builtin_string",
  (MR_Integer) 3
};

#line 1378 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1386 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1394 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1402 "parse_tree.prog_type.c"
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

#line 1423 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
  (MR_String) "cat_enum_mercury",
  (MR_Integer) 0
};

#line 1429 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
  (MR_String) "cat_enum_foreign",
  (MR_Integer) 1
};

#line 1435 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1
};

#line 1441 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0
};

#line 1447 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1453 "parse_tree.prog_type.c"
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

#line 1474 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
  (MR_String) "cat_system_type_info",
  (MR_Integer) 0
};

#line 1480 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
  (MR_String) "cat_system_type_ctor_info",
  (MR_Integer) 1
};

#line 1486 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
  (MR_String) "cat_system_typeclass_info",
  (MR_Integer) 2
};

#line 1492 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
  (MR_String) "cat_system_base_typeclass_info",
  (MR_Integer) 3
};

#line 1498 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3
};

#line 1506 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2
};

#line 1514 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1522 "parse_tree.prog_type.c"
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

#line 1543 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
  (MR_String) "cat_user_direct_dummy",
  (MR_Integer) 0
};

#line 1549 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
  (MR_String) "cat_user_notag",
  (MR_Integer) 1
};

#line 1555 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
  (MR_String) "cat_user_general",
  (MR_Integer) 2
};

#line 1561 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

#line 1568 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1
};

#line 1575 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1582 "parse_tree.prog_type.c"
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

#line 1603 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0
};

#line 1608 "parse_tree.prog_type.c"
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

#line 1623 "parse_tree.prog_type.c"
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

#line 1638 "parse_tree.prog_type.c"
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

#line 1653 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0
};

#line 1658 "parse_tree.prog_type.c"
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

#line 1673 "parse_tree.prog_type.c"
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

#line 1688 "parse_tree.prog_type.c"
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

#line 1703 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0
};

#line 1708 "parse_tree.prog_type.c"
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

#line 1723 "parse_tree.prog_type.c"
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

#line 1738 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0
};

#line 1743 "parse_tree.prog_type.c"
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

#line 1758 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7
};

#line 1767 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0
};

#line 1772 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3
};

#line 1777 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8
};

#line 1783 "parse_tree.prog_type.c"
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

#line 1807 "parse_tree.prog_type.c"
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

#line 1820 "parse_tree.prog_type.c"
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

#line 1833 "parse_tree.prog_type.c"
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

#line 1854 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 1857 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1859 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1861 "parse_tree.prog_type.c"
{
#line 1863 "parse_tree.prog_type.c"
  {
#line 1865 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1868 "parse_tree.prog_type.c"
    {
#line 1870 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____ctor_defn_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1873 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1875 "parse_tree.prog_type.c"
  }
#line 1877 "parse_tree.prog_type.c"
}

#line 1880 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 1883 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1885 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1887 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1889 "parse_tree.prog_type.c"
{
#line 1891 "parse_tree.prog_type.c"
  {
#line 1893 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1896 "parse_tree.prog_type.c"
    {
#line 1898 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____ctor_defn_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1901 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1903 "parse_tree.prog_type.c"
  }
#line 1905 "parse_tree.prog_type.c"
}

#line 1908 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 1911 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1913 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1915 "parse_tree.prog_type.c"
{
#line 1917 "parse_tree.prog_type.c"
  {
#line 1919 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1922 "parse_tree.prog_type.c"
    {
#line 1924 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1927 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1929 "parse_tree.prog_type.c"
  }
#line 1931 "parse_tree.prog_type.c"
}

#line 1934 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 1937 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1939 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1941 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1943 "parse_tree.prog_type.c"
{
#line 1945 "parse_tree.prog_type.c"
  {
#line 1947 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1950 "parse_tree.prog_type.c"
    {
#line 1952 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1955 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1957 "parse_tree.prog_type.c"
  }
#line 1959 "parse_tree.prog_type.c"
}

#line 1962 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 1965 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1967 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1969 "parse_tree.prog_type.c"
{
#line 1971 "parse_tree.prog_type.c"
  {
#line 1973 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1976 "parse_tree.prog_type.c"
    {
#line 1978 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____polymorphism_cell_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1981 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1983 "parse_tree.prog_type.c"
  }
#line 1985 "parse_tree.prog_type.c"
}

#line 1988 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 1991 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1993 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1995 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1997 "parse_tree.prog_type.c"
{
#line 1999 "parse_tree.prog_type.c"
  {
#line 2001 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2004 "parse_tree.prog_type.c"
    {
#line 2006 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____polymorphism_cell_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2009 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2011 "parse_tree.prog_type.c"
  }
#line 2013 "parse_tree.prog_type.c"
}

#line 2016 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 2019 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2021 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2023 "parse_tree.prog_type.c"
{
#line 2025 "parse_tree.prog_type.c"
  {
#line 2027 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2030 "parse_tree.prog_type.c"
    {
#line 2032 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2035 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2037 "parse_tree.prog_type.c"
  }
#line 2039 "parse_tree.prog_type.c"
}

#line 2042 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 2045 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2047 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2049 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2051 "parse_tree.prog_type.c"
{
#line 2053 "parse_tree.prog_type.c"
  {
#line 2055 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2058 "parse_tree.prog_type.c"
    {
#line 2060 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2063 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2065 "parse_tree.prog_type.c"
  }
#line 2067 "parse_tree.prog_type.c"
}

#line 2070 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 2073 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2075 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2077 "parse_tree.prog_type.c"
{
#line 2079 "parse_tree.prog_type.c"
  {
#line 2081 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2084 "parse_tree.prog_type.c"
    {
#line 2086 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2089 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2091 "parse_tree.prog_type.c"
  }
#line 2093 "parse_tree.prog_type.c"
}

#line 2096 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 2099 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2101 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2103 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2105 "parse_tree.prog_type.c"
{
#line 2107 "parse_tree.prog_type.c"
  {
#line 2109 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2112 "parse_tree.prog_type.c"
    {
#line 2114 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2117 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2119 "parse_tree.prog_type.c"
  }
#line 2121 "parse_tree.prog_type.c"
}

#line 2124 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 2127 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2129 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2131 "parse_tree.prog_type.c"
{
#line 2133 "parse_tree.prog_type.c"
  {
#line 2135 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2138 "parse_tree.prog_type.c"
    {
#line 2140 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2143 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2145 "parse_tree.prog_type.c"
  }
#line 2147 "parse_tree.prog_type.c"
}

#line 2150 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 2153 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2155 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2157 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2159 "parse_tree.prog_type.c"
{
#line 2161 "parse_tree.prog_type.c"
  {
#line 2163 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2166 "parse_tree.prog_type.c"
    {
#line 2168 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2171 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2173 "parse_tree.prog_type.c"
  }
#line 2175 "parse_tree.prog_type.c"
}

#line 2178 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 2181 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2183 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2185 "parse_tree.prog_type.c"
{
#line 2187 "parse_tree.prog_type.c"
  {
#line 2189 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2192 "parse_tree.prog_type.c"
    {
#line 2194 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2197 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2199 "parse_tree.prog_type.c"
  }
#line 2201 "parse_tree.prog_type.c"
}

#line 2204 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 2207 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2209 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2211 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2213 "parse_tree.prog_type.c"
{
#line 2215 "parse_tree.prog_type.c"
  {
#line 2217 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2220 "parse_tree.prog_type.c"
    {
#line 2222 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2225 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2227 "parse_tree.prog_type.c"
  }
#line 2229 "parse_tree.prog_type.c"
}

#line 2232 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 2235 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2237 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2239 "parse_tree.prog_type.c"
{
#line 2241 "parse_tree.prog_type.c"
  {
#line 2243 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2246 "parse_tree.prog_type.c"
    {
#line 2248 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2251 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2253 "parse_tree.prog_type.c"
  }
#line 2255 "parse_tree.prog_type.c"
}

#line 2258 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 2261 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2263 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2265 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2267 "parse_tree.prog_type.c"
{
#line 2269 "parse_tree.prog_type.c"
  {
#line 2271 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2274 "parse_tree.prog_type.c"
    {
#line 2276 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_category_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2279 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2281 "parse_tree.prog_type.c"
  }
#line 2283 "parse_tree.prog_type.c"
}

#line 1022 "prog_type.m"
static MR_Box MR_CALL 
parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0_1(
#line 1022 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 1022 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 1022 "prog_type.m"
{
#line 1022 "prog_type.m"
  {
#line 1022 "prog_type.m"
    MR_Box parse_tree__prog_type__wrapper_arg_2;
#line 1022 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 1022 "prog_type.m"
    MR_String parse_tree__prog_type__conv0_HeadVar__2_2;

#line 1022 "prog_type.m"
    {
#line 1022 "prog_type.m"
      parse_tree__prog_type__conv0_HeadVar__2_2 = mdbcomp__prim_data__unqualify_name_1_f_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 1022 "prog_type.m"
    parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
#line 1022 "prog_type.m"
    return parse_tree__prog_type__wrapper_arg_2;
#line 1022 "prog_type.m"
  }
#line 1022 "prog_type.m"
}

#line 366 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 366 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 366 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 366 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 366 "prog_type.m"
{
#line 1006 "prog_type.m"
  {
#line 1006 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__ReserveTagPragma_11 == (MR_Integer) 1);
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_22_22;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_23_23;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeSingleArgName0_17;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__V_18_18;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_30;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_31;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__V_36_36;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 1006 "prog_type.m"
    MR_Word parse_tree__prog_type__V_39_39;
#line 974 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_32;
#line 974 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_35;
#line 1020 "prog_type.m"
    MR_String parse_tree__prog_type__V_20_20;
#line 975 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;
#line 975 "prog_type.m"
    MR_Word parse_tree__prog_type__V_34_34;

#line 1006 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
      {
#line 1008 "prog_type.m"
        parse_tree__prog_type__V_18_18 = (MR_Integer) 241;
#line 1008 "prog_type.m"
        parse_tree__prog_type__V_19_19 = (MR_Integer) 1;
#line 1008 "prog_type.m"
        {
#line 1008 "prog_type.m"
          parse_tree__prog_type__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__prog_type__Globals_9, parse_tree__prog_type__V_18_18, parse_tree__prog_type__V_19_19);
        }
#line 1006 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
          {
#line 1009 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__MaybeUserEqCmp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
              {
#line 973 "prog_type.m"
                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_12)) == (MR_mktag((MR_Integer) 1)));
#line 973 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 973 "prog_type.m"
                  {
#line 973 "prog_type.m"
                    parse_tree__prog_type__SingleCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 0)));
#line 973 "prog_type.m"
                    parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 1)));
#line 973 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
                      {
#line 974 "prog_type.m"
                        parse_tree__prog_type__ExistQVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_30, (MR_Integer) 0)));
#line 974 "prog_type.m"
                        parse_tree__prog_type___Constraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_30, (MR_Integer) 1)));
#line 974 "prog_type.m"
                        *parse_tree__prog_type__SingleFunctorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_30, (MR_Integer) 2)));
#line 974 "prog_type.m"
                        parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_30, (MR_Integer) 3)));
#line 974 "prog_type.m"
                        parse_tree__prog_type___Ctxt_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_30, (MR_Integer) 4)));
#line 976 "prog_type.m"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
                          {
#line 1020 "prog_type.m"
                            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_type__SingleFunctorName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1020 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1020 "prog_type.m"
                              {
#line 1020 "prog_type.m"
                                parse_tree__prog_type__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__prog_type__SingleFunctorName_14, (MR_Integer) 0)));
#line 1020 "prog_type.m"
                                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_20_20, (MR_String) "{}") == 0);
#line 1020 "prog_type.m"
                              }
#line 1020 "prog_type.m"
                            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1006 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
                              {
#line 974 "prog_type.m"
                                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 974 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 974 "prog_type.m"
                                  {
#line 974 "prog_type.m"
                                    parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, (MR_Integer) 0)));
#line 974 "prog_type.m"
                                    parse_tree__prog_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, (MR_Integer) 1)));
#line 975 "prog_type.m"
                                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_type.m"
                                    if (parse_tree__prog_type__succeeded)
#line 1006 "prog_type.m"
                                      {
#line 975 "prog_type.m"
                                        parse_tree__prog_type__MaybeSingleArgName0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 975 "prog_type.m"
                                        *parse_tree__prog_type__SingleArgType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 1)));
#line 975 "prog_type.m"
                                        parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 2)));
#line 975 "prog_type.m"
                                        parse_tree__prog_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 3)));
#line 2473 "parse_tree.prog_type.c"
                                        parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 2475 "parse_tree.prog_type.c"
                                        parse_tree__prog_type__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1022 "prog_type.m"
                                        parse_tree__prog_type__V_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_2[6];
#line 1022 "prog_type.m"
                                        {
#line 1022 "prog_type.m"
                                          *parse_tree__prog_type__MaybeSingleArgName_16 = mercury__maybe__map_maybe_2_f_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__TypeCtorInfo_23_23, parse_tree__prog_type__V_21_21, parse_tree__prog_type__MaybeSingleArgName0_17);
                                        }
#line 1022 "prog_type.m"
                                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1006 "prog_type.m"
                                      }
#line 974 "prog_type.m"
                                  }
#line 1006 "prog_type.m"
                              }
#line 1006 "prog_type.m"
                          }
#line 1006 "prog_type.m"
                      }
#line 973 "prog_type.m"
                  }
#line 1006 "prog_type.m"
              }
#line 1006 "prog_type.m"
          }
#line 1006 "prog_type.m"
      }
#line 1006 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1006 "prog_type.m"
  }
#line 366 "prog_type.m"
}

#line 277 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0(
#line 277 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 277 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 277 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 277 "prog_type.m"
{
#line 277 "prog_type.m"
  {
#line 277 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 277 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_76 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 277 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_77 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 277 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_76 == parse_tree__prog_type__CastY_77);
#line 277 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 2535 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "prog_type.m"
    else
#line 277 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 277 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 277 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "prog_type.m"
        else
#line 277 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type.m"
            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
          else
#line 277 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 277 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
            else
#line 277 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 277 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
              else
#line 277 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 277 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                else
#line 277 "prog_type.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2573 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                  else
#line 277 "prog_type.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2579 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2585 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                      else
#line 2589 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
      else
#line 277 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 277 "prog_type.m"
            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
          else
#line 277 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "prog_type.m"
            else
#line 277 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 277 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
              else
#line 277 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 277 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                else
#line 277 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 277 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                  else
#line 277 "prog_type.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2627 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2633 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                      else
#line 277 "prog_type.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2639 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                        else
#line 2643 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
        else
#line 277 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 277 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 277 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
            else
#line 277 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
              else
#line 277 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 277 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "prog_type.m"
                else
#line 277 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 277 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                  else
#line 277 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 277 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2681 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                      else
#line 277 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2687 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                        else
#line 277 "prog_type.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2693 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                          else
#line 2697 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
          else
#line 277 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 277 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 277 "prog_type.m"
                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
              else
#line 277 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                else
#line 277 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 277 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                  else
#line 277 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 277 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 277 "prog_type.m"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                      else
#line 277 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2735 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                        else
#line 277 "prog_type.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2741 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                          else
#line 277 "prog_type.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2747 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                            else
#line 2751 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
            else
#line 277 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 277 "prog_type.m"
                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 277 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                else
#line 277 "prog_type.m"
                  if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                  else
#line 277 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 277 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 277 "prog_type.m"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                      else
#line 277 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 277 "prog_type.m"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "prog_type.m"
                        else
#line 277 "prog_type.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2789 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                          else
#line 277 "prog_type.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2795 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                            else
#line 277 "prog_type.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2801 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                              else
#line 2805 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
              else
#line 277 "prog_type.m"
                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 277 "prog_type.m"
                  {
#line 277 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 277 "prog_type.m"
                    if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2818 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2824 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                      else
#line 277 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2830 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                        else
#line 277 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2836 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                          else
#line 277 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2842 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                            else
#line 277 "prog_type.m"
                              if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 277 "prog_type.m"
                                {
#line 277 "prog_type.m"
                                  MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 277 "prog_type.m"
                                  MR_Integer parse_tree__prog_type__V_86_86 = (MR_Integer) parse_tree__prog_type__V_82_82;
#line 277 "prog_type.m"
                                  MR_Integer parse_tree__prog_type__V_87_87 = (MR_Integer) parse_tree__prog_type__V_5_5;

#line 277 "prog_type.m"
                                  {
#line 277 "prog_type.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_86_86, parse_tree__prog_type__V_87_87);
#line 277 "prog_type.m"
                                    return;
                                  }
#line 277 "prog_type.m"
                                }
#line 277 "prog_type.m"
                              else
#line 277 "prog_type.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2870 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                                else
#line 277 "prog_type.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2876 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                                  else
#line 2880 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                  }
#line 277 "prog_type.m"
                else
#line 277 "prog_type.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 277 "prog_type.m"
                    {
#line 277 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 277 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2895 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                      else
#line 277 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2901 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                        else
#line 277 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2907 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                          else
#line 277 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2913 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                            else
#line 277 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2919 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                              else
#line 277 "prog_type.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2925 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                                else
#line 277 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 277 "prog_type.m"
                                    {
#line 277 "prog_type.m"
                                      MR_Word parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 277 "prog_type.m"
                                      MR_Integer parse_tree__prog_type__V_88_88 = (MR_Integer) parse_tree__prog_type__V_83_83;
#line 277 "prog_type.m"
                                      MR_Integer parse_tree__prog_type__V_89_89 = (MR_Integer) parse_tree__prog_type__V_30_30;

#line 277 "prog_type.m"
                                      {
#line 277 "prog_type.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_88_88, parse_tree__prog_type__V_89_89);
#line 277 "prog_type.m"
                                        return;
                                      }
#line 277 "prog_type.m"
                                    }
#line 277 "prog_type.m"
                                  else
#line 277 "prog_type.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2953 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                                    else
#line 2957 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                    }
#line 277 "prog_type.m"
                  else
#line 277 "prog_type.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 277 "prog_type.m"
                      {
#line 277 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 277 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2972 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                        else
#line 277 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2978 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                          else
#line 277 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2984 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                            else
#line 277 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2990 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                              else
#line 277 "prog_type.m"
                                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2996 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                                else
#line 277 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3002 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                                  else
#line 277 "prog_type.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3008 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                                    else
#line 277 "prog_type.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 277 "prog_type.m"
                                        {
#line 277 "prog_type.m"
                                          MR_Word parse_tree__prog_type__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 277 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_90_90 = (MR_Integer) parse_tree__prog_type__V_84_84;
#line 277 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_91_91 = (MR_Integer) parse_tree__prog_type__V_55_55;

#line 277 "prog_type.m"
                                          {
#line 277 "prog_type.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_90_90, parse_tree__prog_type__V_91_91);
#line 277 "prog_type.m"
                                            return;
                                          }
#line 277 "prog_type.m"
                                        }
#line 277 "prog_type.m"
                                      else
#line 3034 "parse_tree.prog_type.c"
                                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "prog_type.m"
                      }
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      {
#line 277 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));

#line 277 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3047 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                        else
#line 277 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3053 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                          else
#line 277 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3059 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                            else
#line 277 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3065 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                              else
#line 277 "prog_type.m"
                                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3071 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                                else
#line 277 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3077 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                                  else
#line 277 "prog_type.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3083 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                                    else
#line 277 "prog_type.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3089 "parse_tree.prog_type.c"
                                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "prog_type.m"
                                      else
#line 277 "prog_type.m"
                                        {
#line 277 "prog_type.m"
                                          MR_Word parse_tree__prog_type__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 277 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_92_92 = (MR_Integer) parse_tree__prog_type__V_85_85;
#line 277 "prog_type.m"
                                          MR_Integer parse_tree__prog_type__V_93_93 = (MR_Integer) parse_tree__prog_type__V_75_75;

#line 277 "prog_type.m"
                                          {
#line 277 "prog_type.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_92_92, parse_tree__prog_type__V_93_93);
#line 277 "prog_type.m"
                                            return;
                                          }
#line 277 "prog_type.m"
                                        }
#line 277 "prog_type.m"
                      }
#line 277 "prog_type.m"
  }
#line 277 "prog_type.m"
}

#line 277 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0(
#line 277 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 277 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 277 "prog_type.m"
{
#line 277 "prog_type.m"
  {
#line 277 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 277 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 277 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 277 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 277 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 277 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 277 "prog_type.m"
    else
#line 277 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 277 "prog_type.m"
        {
#line 277 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastX_11 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 277 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastY_12 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 277 "prog_type.m"
          parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_12 == parse_tree__prog_type__CastX_11);
#line 277 "prog_type.m"
        }
#line 277 "prog_type.m"
      else
#line 277 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "prog_type.m"
          {
#line 277 "prog_type.m"
            MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 277 "prog_type.m"
            MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 277 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 277 "prog_type.m"
          }
#line 277 "prog_type.m"
        else
#line 277 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 277 "prog_type.m"
            {
#line 277 "prog_type.m"
              MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 277 "prog_type.m"
              MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 277 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_8 == parse_tree__prog_type__CastX_7);
#line 277 "prog_type.m"
            }
#line 277 "prog_type.m"
          else
#line 277 "prog_type.m"
            if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 277 "prog_type.m"
              {
#line 277 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastX_13 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 277 "prog_type.m"
                MR_Integer parse_tree__prog_type__CastY_14 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 277 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_14 == parse_tree__prog_type__CastX_13);
#line 277 "prog_type.m"
              }
#line 277 "prog_type.m"
            else
#line 277 "prog_type.m"
              if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 277 "prog_type.m"
                {
#line 277 "prog_type.m"
                  MR_Integer parse_tree__prog_type__CastX_17 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 277 "prog_type.m"
                  MR_Integer parse_tree__prog_type__CastY_18 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 277 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_18 == parse_tree__prog_type__CastX_17);
#line 277 "prog_type.m"
                }
#line 277 "prog_type.m"
              else
#line 277 "prog_type.m"
                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 277 "prog_type.m"
                  {
#line 277 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_4_4;

#line 277 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 277 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 277 "prog_type.m"
                      {
#line 277 "prog_type.m"
                        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3236 "parse_tree.prog_type.c"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_3_3 == parse_tree__prog_type__V_4_4);
#line 277 "prog_type.m"
                      }
#line 277 "prog_type.m"
                  }
#line 277 "prog_type.m"
                else
#line 277 "prog_type.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 277 "prog_type.m"
                    {
#line 277 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_10_10;

#line 277 "prog_type.m"
                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 277 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 277 "prog_type.m"
                        {
#line 277 "prog_type.m"
                          parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3261 "parse_tree.prog_type.c"
                          parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_9_9 == parse_tree__prog_type__V_10_10);
#line 277 "prog_type.m"
                        }
#line 277 "prog_type.m"
                    }
#line 277 "prog_type.m"
                  else
#line 277 "prog_type.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 277 "prog_type.m"
                      {
#line 277 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_16_16;

#line 277 "prog_type.m"
                        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 277 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 277 "prog_type.m"
                          {
#line 277 "prog_type.m"
                            parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3286 "parse_tree.prog_type.c"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == parse_tree__prog_type__V_16_16);
#line 277 "prog_type.m"
                          }
#line 277 "prog_type.m"
                      }
#line 277 "prog_type.m"
                    else
#line 277 "prog_type.m"
                      {
#line 277 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_20_20;

#line 277 "prog_type.m"
                        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 277 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 277 "prog_type.m"
                          {
#line 277 "prog_type.m"
                            parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 3309 "parse_tree.prog_type.c"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == parse_tree__prog_type__V_20_20);
#line 277 "prog_type.m"
                          }
#line 277 "prog_type.m"
                      }
#line 277 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 277 "prog_type.m"
  }
#line 277 "prog_type.m"
}

#line 304 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(
#line 304 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 304 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 304 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 304 "prog_type.m"
{
#line 304 "prog_type.m"
  {
#line 304 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 304 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 304 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 304 "prog_type.m"
    {
#line 304 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 304 "prog_type.m"
      return;
    }
#line 304 "prog_type.m"
  }
#line 304 "prog_type.m"
}

#line 304 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(
#line 304 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 304 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 304 "prog_type.m"
{
#line 3363 "parse_tree.prog_type.c"
  {
#line 3365 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3368 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3370 "parse_tree.prog_type.c"
  }
#line 304 "prog_type.m"
}

#line 294 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(
#line 294 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 294 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 294 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 294 "prog_type.m"
{
#line 294 "prog_type.m"
  {
#line 294 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 294 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 294 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 294 "prog_type.m"
    {
#line 294 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 294 "prog_type.m"
      return;
    }
#line 294 "prog_type.m"
  }
#line 294 "prog_type.m"
}

#line 294 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(
#line 294 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 294 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 294 "prog_type.m"
{
#line 3416 "parse_tree.prog_type.c"
  {
#line 3418 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3421 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3423 "parse_tree.prog_type.c"
  }
#line 294 "prog_type.m"
}

#line 300 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(
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
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 300 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 300 "prog_type.m"
    {
#line 300 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 300 "prog_type.m"
      return;
    }
#line 300 "prog_type.m"
  }
#line 300 "prog_type.m"
}

#line 300 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(
#line 300 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 300 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 300 "prog_type.m"
{
#line 3469 "parse_tree.prog_type.c"
  {
#line 3471 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3474 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3476 "parse_tree.prog_type.c"
  }
#line 300 "prog_type.m"
}

#line 288 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(
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
#line 288 "prog_type.m"
      return;
    }
#line 288 "prog_type.m"
  }
#line 288 "prog_type.m"
}

#line 288 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(
#line 288 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 288 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 288 "prog_type.m"
{
#line 3522 "parse_tree.prog_type.c"
  {
#line 3524 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3527 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3529 "parse_tree.prog_type.c"
  }
#line 288 "prog_type.m"
}

#line 318 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0(
#line 318 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 318 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 318 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 318 "prog_type.m"
{
#line 318 "prog_type.m"
  {
#line 318 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 318 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 318 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_9 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 318 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_8 == parse_tree__prog_type__CastY_9);
#line 318 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 3558 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 318 "prog_type.m"
    else
#line 318 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 318 "prog_type.m"
        else
#line 3570 "parse_tree.prog_type.c"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 318 "prog_type.m"
      else
#line 318 "prog_type.m"
        {
#line 318 "prog_type.m"
          MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 318 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3581 "parse_tree.prog_type.c"
            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 318 "prog_type.m"
          else
#line 318 "prog_type.m"
            {
#line 318 "prog_type.m"
              MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));

#line 318 "prog_type.m"
              {
#line 318 "prog_type.m"
                parse_tree__prog_data____Compare____type_ctor_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_11_11, parse_tree__prog_type__V_5_5);
#line 318 "prog_type.m"
                return;
              }
#line 318 "prog_type.m"
            }
#line 318 "prog_type.m"
        }
#line 318 "prog_type.m"
  }
#line 318 "prog_type.m"
}

#line 318 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0(
#line 318 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 318 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 318 "prog_type.m"
{
#line 318 "prog_type.m"
  {
#line 318 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 318 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_7 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 318 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_8 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 318 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_7 == parse_tree__prog_type__CastY_8);
#line 318 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 318 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 318 "prog_type.m"
    else
#line 318 "prog_type.m"
      if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "prog_type.m"
        {
#line 318 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastX_5 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 318 "prog_type.m"
          MR_Integer parse_tree__prog_type__CastY_6 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 318 "prog_type.m"
          parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastY_6 == parse_tree__prog_type__CastX_5);
#line 318 "prog_type.m"
        }
#line 318 "prog_type.m"
      else
#line 318 "prog_type.m"
        {
#line 318 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "prog_type.m"
          MR_Word parse_tree__prog_type__V_4_4;

#line 318 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 318 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 318 "prog_type.m"
            {
#line 318 "prog_type.m"
              parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 3662 "parse_tree.prog_type.c"
              {
#line 3664 "parse_tree.prog_type.c"
                return parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__prog_type__V_3_3, parse_tree__prog_type__V_4_4);
              }
#line 318 "prog_type.m"
            }
#line 318 "prog_type.m"
        }
#line 318 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 318 "prog_type.m"
  }
#line 318 "prog_type.m"
}

#line 218 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(
#line 218 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 218 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 218 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 218 "prog_type.m"
{
#line 218 "prog_type.m"
  {
#line 218 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 218 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 218 "prog_type.m"
    MR_Integer parse_tree__prog_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 218 "prog_type.m"
    {
#line 218 "prog_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Cast_HeadVar1_4, parse_tree__prog_type__Cast_HeadVar2_5);
#line 218 "prog_type.m"
      return;
    }
#line 218 "prog_type.m"
  }
#line 218 "prog_type.m"
}

#line 218 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(
#line 218 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_1,
#line 218 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 218 "prog_type.m"
{
#line 3719 "parse_tree.prog_type.c"
  {
#line 3721 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3724 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3726 "parse_tree.prog_type.c"
  }
#line 218 "prog_type.m"
}

#line 339 "prog_type.m"
void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0(
#line 339 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__1_1,
#line 339 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 339 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3)
#line 339 "prog_type.m"
{
#line 339 "prog_type.m"
  {
#line 339 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 339 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_21 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;
#line 339 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_22 = (MR_Integer) parse_tree__prog_type__HeadVar__3_3;

#line 339 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_21 == parse_tree__prog_type__CastY_22);
#line 339 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 3755 "parse_tree.prog_type.c"
      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "prog_type.m"
    else
#line 339 "prog_type.m"
      {
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 1)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 2)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 3)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 4)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 5)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_16_16;

#line 339 "prog_type.m"
        {
#line 339 "prog_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], &parse_tree__prog_type__V_16_16, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
        }
#line 3793 "parse_tree.prog_type.c"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == (MR_Integer) 0);
#line 339 "prog_type.m"
        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 339 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_16_16;
#line 339 "prog_type.m"
        else
#line 339 "prog_type.m"
          {
#line 339 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 339 "prog_type.m"
            {
#line 339 "prog_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[1], &parse_tree__prog_type__V_17_17, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
            }
#line 3813 "parse_tree.prog_type.c"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_17_17 == (MR_Integer) 0);
#line 339 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 339 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
              *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_17_17;
#line 339 "prog_type.m"
            else
#line 339 "prog_type.m"
              {
#line 339 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 339 "prog_type.m"
                {
#line 339 "prog_type.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_2[0], &parse_tree__prog_type__V_18_18, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                }
#line 3833 "parse_tree.prog_type.c"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_18_18 == (MR_Integer) 0);
#line 339 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 339 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_18_18;
#line 339 "prog_type.m"
                else
#line 339 "prog_type.m"
                  {
#line 339 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_19_19;

#line 339 "prog_type.m"
                    {
#line 339 "prog_type.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[4], &parse_tree__prog_type__V_19_19, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                    }
#line 3853 "parse_tree.prog_type.c"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == (MR_Integer) 0);
#line 339 "prog_type.m"
                    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 339 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_19_19;
#line 339 "prog_type.m"
                    else
#line 339 "prog_type.m"
                      {
#line 339 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_20_20;

#line 339 "prog_type.m"
                        {
#line 339 "prog_type.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[5], &parse_tree__prog_type__V_20_20, ((MR_Box) (parse_tree__prog_type__V_8_8)), ((MR_Box) (parse_tree__prog_type__V_14_14)));
                        }
#line 3873 "parse_tree.prog_type.c"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_20_20 == (MR_Integer) 0);
#line 339 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 339 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
                          *parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__V_20_20;
#line 339 "prog_type.m"
                        else
#line 339 "prog_type.m"
                          {
#line 339 "prog_type.m"
                            parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__V_9_9, parse_tree__prog_type__V_15_15);
#line 339 "prog_type.m"
                            return;
                          }
#line 339 "prog_type.m"
                      }
#line 339 "prog_type.m"
                  }
#line 339 "prog_type.m"
              }
#line 339 "prog_type.m"
          }
#line 339 "prog_type.m"
      }
#line 339 "prog_type.m"
  }
#line 339 "prog_type.m"
}

#line 339 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0(
#line 339 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 339 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2)
#line 339 "prog_type.m"
{
#line 339 "prog_type.m"
  {
#line 339 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 339 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastX_15 = (MR_Integer) parse_tree__prog_type__HeadVar__1_1;
#line 339 "prog_type.m"
    MR_Integer parse_tree__prog_type__CastY_16 = (MR_Integer) parse_tree__prog_type__HeadVar__2_2;

#line 339 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__CastX_15 == parse_tree__prog_type__CastY_16);
#line 339 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
      parse_tree__prog_type__succeeded = MR_TRUE;
#line 339 "prog_type.m"
    else
#line 339 "prog_type.m"
      {
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_18_18;
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_19_19;
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_20_20;
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 4)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 5)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 2)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 3)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 4)));
#line 339 "prog_type.m"
        MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 5)));

#line 3966 "parse_tree.prog_type.c"
        {
#line 3968 "parse_tree.prog_type.c"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], ((MR_Box) (parse_tree__prog_type__V_3_3)), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 339 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
          {
#line 3975 "parse_tree.prog_type.c"
            parse_tree__prog_type__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_type_scalar_common_1[1];
#line 3977 "parse_tree.prog_type.c"
            {
#line 3979 "parse_tree.prog_type.c"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
            }
#line 339 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
              {
#line 3986 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_type_scalar_common_2[0];
#line 3988 "parse_tree.prog_type.c"
                {
#line 3990 "parse_tree.prog_type.c"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_19_19, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
                }
#line 339 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
                  {
#line 3997 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[4];
#line 3999 "parse_tree.prog_type.c"
                    {
#line 4001 "parse_tree.prog_type.c"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                    }
#line 339 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 339 "prog_type.m"
                      {
#line 4008 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 4010 "parse_tree.prog_type.c"
                        {
#line 4012 "parse_tree.prog_type.c"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_21_21, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                        }
#line 339 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 4017 "parse_tree.prog_type.c"
                          {
#line 4019 "parse_tree.prog_type.c"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_type__V_8_8, parse_tree__prog_type__V_14_14);
                          }
#line 339 "prog_type.m"
                      }
#line 339 "prog_type.m"
                  }
#line 339 "prog_type.m"
              }
#line 339 "prog_type.m"
          }
#line 339 "prog_type.m"
      }
#line 339 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 339 "prog_type.m"
  }
#line 339 "prog_type.m"
}

#line 1311 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1311 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1311 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1311 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7)
#line 1311 "prog_type.m"
{
#line 1313 "prog_type.m"
  while (MR_TRUE)
#line 1313 "prog_type.m"
    {
#line 1313 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1313 "prog_type.m"
      {
#line 1313 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1313 "prog_type.m"
        MR_Word parse_tree__prog_type__X_4;
#line 1313 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_5;

#line 1313 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1313 "prog_type.m"
          {
#line 1313 "prog_type.m"
            parse_tree__prog_type__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1313 "prog_type.m"
            parse_tree__prog_type__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1315 "prog_type.m"
            {
#line 1315 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__X_4, parse_tree__prog_type__Y_6, parse_tree__prog_type__Bindings_7);
            }
#line 1316 "prog_type.m"
            if (!(parse_tree__prog_type__succeeded))
#line 1317 "prog_type.m"
              {
#line 1317 "prog_type.m"
                /* direct tailcall eliminated */
#line 1317 "prog_type.m"
                {
#line 1317 "prog_type.m"
                  MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_5;

#line 1317 "prog_type.m"
                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1317 "prog_type.m"
                }
#line 1317 "prog_type.m"
                continue;
#line 1317 "prog_type.m"
              }
#line 1313 "prog_type.m"
          }
#line 1313 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1313 "prog_type.m"
      }
#line 1313 "prog_type.m"
      break;
#line 1313 "prog_type.m"
    }
#line 1311 "prog_type.m"
}

#line 1271 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1271 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1271 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1271 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6)
#line 1271 "prog_type.m"
{
#line 1275 "prog_type.m"
  while (MR_TRUE)
#line 1275 "prog_type.m"
    {
#line 1275 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1275 "prog_type.m"
      {
#line 1275 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1275 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 1))))
#line 1283 "prog_type.m"
          {
#line 1283 "prog_type.m"
            MR_Word parse_tree__prog_type__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1283 "prog_type.m"
            MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1283 "prog_type.m"
            MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1284 "prog_type.m"
            {
#line 1284 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_11, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
            }
#line 1283 "prog_type.m"
          }
#line 1275 "prog_type.m"
        else
#line 1275 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 0))))
#line 1275 "prog_type.m"
            {
#line 1275 "prog_type.m"
              MR_Word parse_tree__prog_type__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1275 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));

#line 1276 "prog_type.m"
              {
#line 1276 "prog_type.m"
                parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_5)));
              }
#line 1278 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1277 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1278 "prog_type.m"
              else
#line 1279 "prog_type.m"
                {
#line 1279 "prog_type.m"
                  MR_Word parse_tree__prog_type__BindingOfX_9;
#line 1279 "prog_type.m"
                  MR_Box parse_tree__prog_type__conv0_BindingOfX_9;

#line 1279 "prog_type.m"
                  {
#line 1279 "prog_type.m"
                    parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_9);
                  }
#line 1279 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1279 "prog_type.m"
                    {
#line 1279 "prog_type.m"
                      parse_tree__prog_type__BindingOfX_9 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_9);
#line 1279 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 1279 "prog_type.m"
                    }
#line 1279 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1280 "prog_type.m"
                    {
#line 1280 "prog_type.m"
                      /* direct tailcall eliminated */
#line 1280 "prog_type.m"
                      {
#line 1280 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_9;

#line 1280 "prog_type.m"
                        parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1280 "prog_type.m"
                      }
#line 1280 "prog_type.m"
                      continue;
#line 1280 "prog_type.m"
                    }
#line 1279 "prog_type.m"
                }
#line 1275 "prog_type.m"
            }
#line 1275 "prog_type.m"
          else
#line 1275 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1297 "prog_type.m"
              {
#line 1297 "prog_type.m"
                MR_Word parse_tree__prog_type__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1297 "prog_type.m"
                MR_Word parse_tree__prog_type__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1297 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1299 "prog_type.m"
                {
#line 1299 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_24)), ((MR_Box) (parse_tree__prog_type__Y_5)));
                }
#line 1300 "prog_type.m"
                if (!(parse_tree__prog_type__succeeded))
#line 1300 "prog_type.m"
                  {
#line 1301 "prog_type.m"
                    {
#line 1301 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_26, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                    }
#line 1300 "prog_type.m"
                    if (!(parse_tree__prog_type__succeeded))
#line 1303 "prog_type.m"
                      {
#line 1303 "prog_type.m"
                        MR_Word parse_tree__prog_type__BindingOfX_22;
#line 1303 "prog_type.m"
                        MR_Box parse_tree__prog_type__conv1_BindingOfX_22;

#line 1303 "prog_type.m"
                        {
#line 1303 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_24)), &parse_tree__prog_type__conv1_BindingOfX_22);
                        }
#line 1303 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1303 "prog_type.m"
                          {
#line 1303 "prog_type.m"
                            parse_tree__prog_type__BindingOfX_22 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfX_22);
#line 1303 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1303 "prog_type.m"
                          }
#line 1303 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1304 "prog_type.m"
                          {
#line 1304 "prog_type.m"
                            /* direct tailcall eliminated */
#line 1304 "prog_type.m"
                            {
#line 1304 "prog_type.m"
                              MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_22;

#line 1304 "prog_type.m"
                              parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1304 "prog_type.m"
                            }
#line 1304 "prog_type.m"
                            continue;
#line 1304 "prog_type.m"
                          }
#line 1303 "prog_type.m"
                      }
#line 1300 "prog_type.m"
                  }
#line 1297 "prog_type.m"
              }
#line 1275 "prog_type.m"
            else
#line 1275 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1286 "prog_type.m"
                {
#line 1286 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1286 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1286 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1288 "prog_type.m"
                  {
#line 1288 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
#line 1289 "prog_type.m"
                  if (!(parse_tree__prog_type__succeeded))
#line 1290 "prog_type.m"
                    {
#line 1290 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16;

#line 1290 "prog_type.m"
                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__MaybeRet_13)) == (MR_mktag((MR_Integer) 1)));
#line 1290 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1290 "prog_type.m"
                        {
#line 1290 "prog_type.m"
                          parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 1291 "prog_type.m"
                          /* direct tailcall eliminated */
#line 1291 "prog_type.m"
                          {
#line 1291 "prog_type.m"
                            MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__Ret_16;

#line 1291 "prog_type.m"
                            parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1291 "prog_type.m"
                          }
#line 1291 "prog_type.m"
                          continue;
#line 1290 "prog_type.m"
                        }
#line 1290 "prog_type.m"
                    }
#line 1286 "prog_type.m"
                }
#line 1275 "prog_type.m"
              else
#line 1275 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1307 "prog_type.m"
                  {
#line 1307 "prog_type.m"
                    MR_Word parse_tree__prog_type__X_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1307 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1308 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1308 "prog_type.m"
                    {
#line 1308 "prog_type.m"
                      MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__X_27;

#line 1308 "prog_type.m"
                      parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1308 "prog_type.m"
                    }
#line 1308 "prog_type.m"
                    continue;
#line 1307 "prog_type.m"
                  }
#line 1275 "prog_type.m"
                else
#line 1275 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1294 "prog_type.m"
                    {
#line 1294 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1294 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1295 "prog_type.m"
                      {
#line 1295 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_21, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                      }
#line 1294 "prog_type.m"
                    }
#line 1275 "prog_type.m"
                  else
#line 1275 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1275 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1275 "prog_type.m"
      }
#line 1275 "prog_type.m"
      break;
#line 1275 "prog_type.m"
    }
#line 1271 "prog_type.m"
}

#line 1250 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1250 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1250 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1250 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1250 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8)
#line 1250 "prog_type.m"
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
            *parse_tree__prog_type__ArgsY_3 = parse_tree__prog_type__HeadVar__2_2;
#line 1254 "prog_type.m"
            *parse_tree__prog_type__KindY_5 = parse_tree__prog_type__HeadVar__4_4;
#line 1254 "prog_type.m"
            *parse_tree__prog_type__STATE_VARIABLE_Bindings_8 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7;
#line 1254 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1254 "prog_type.m"
          }
#line 1254 "prog_type.m"
        else
#line 1256 "prog_type.m"
          {
#line 1256 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgX_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1256 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1256 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgY0_17;
#line 1256 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsY0_18;
#line 1256 "prog_type.m"
            MR_Word parse_tree__prog_type__KindY1_24;
#line 1256 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;
#line 1256 "prog_type.m"
            MR_Word parse_tree__prog_type__V_28_28;

#line 1256 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1256 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1256 "prog_type.m"
              {
#line 1256 "prog_type.m"
                parse_tree__prog_type__ArgY0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1256 "prog_type.m"
                parse_tree__prog_type__ArgsY0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1257 "prog_type.m"
                {
#line 1257 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__ArgX_15, parse_tree__prog_type__ArgY0_17, parse_tree__prog_type__HeadTypeParams_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                }
#line 1256 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1256 "prog_type.m"
                  {
#line 1258 "prog_type.m"
                    {
#line 1258 "prog_type.m"
                      parse_tree__prog_type__V_28_28 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type__ArgY0_17);
                    }
#line 1258 "prog_type.m"
                    {
#line 1258 "prog_type.m"
                      parse_tree__prog_type__KindY1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 1258 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__4_4));
#line 1258 "prog_type.m"
                    }
#line 1259 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1259 "prog_type.m"
                    {
#line 1259 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__ArgsX_16;
#line 1259 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__ArgsY0_18;
#line 1259 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__4__tmp_copy_4 = parse_tree__prog_type__KindY1_24;
#line 1259 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1259 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7;
#line 1259 "prog_type.m"
                      parse_tree__prog_type__HeadVar__4_4 = parse_tree__prog_type__HeadVar__4__tmp_copy_4;
#line 1259 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1259 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1259 "prog_type.m"
                    }
#line 1259 "prog_type.m"
                    continue;
#line 1256 "prog_type.m"
                  }
#line 1256 "prog_type.m"
              }
#line 1256 "prog_type.m"
          }
#line 1254 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1254 "prog_type.m"
      }
#line 1254 "prog_type.m"
      break;
#line 1254 "prog_type.m"
    }
#line 1250 "prog_type.m"
}

#line 1238 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1238 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1238 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1238 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1238 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20)
#line 1238 "prog_type.m"
{
#line 1243 "prog_type.m"
  {
#line 1243 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1243 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1243 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsX_16;
#line 1243 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY0_17;
#line 1243 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY_18;

#line 1244 "prog_type.m"
    {
#line 1244 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsX_9, &parse_tree__prog_type__RevArgsX_16);
    }
#line 1245 "prog_type.m"
    {
#line 1245 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsY0_10, &parse_tree__prog_type__RevArgsY0_17);
    }
#line 1246 "prog_type.m"
    {
#line 1246 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(parse_tree__prog_type__RevArgsX_16, parse_tree__prog_type__RevArgsY0_17, &parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__KindY0_12, parse_tree__prog_type__KindY_13, parse_tree__prog_type__HeadTypeParams_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19, parse_tree__prog_type__STATE_VARIABLE_Bindings_20);
    }
#line 1243 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1243 "prog_type.m"
      {
#line 1248 "prog_type.m"
        {
#line 1248 "prog_type.m"
          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__ArgsY_11);
        }
#line 1248 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1243 "prog_type.m"
      }
#line 1243 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1243 "prog_type.m"
  }
#line 1238 "prog_type.m"
}

#line 1185 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1185 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1185 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33)
#line 1185 "prog_type.m"
{
#line 1190 "prog_type.m"
  while (MR_TRUE)
#line 1190 "prog_type.m"
    {
#line 1190 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1190 "prog_type.m"
      {
#line 1190 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1190 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2))))
#line 1196 "prog_type.m"
          {
#line 1197 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1198 "prog_type.m"
              {
#line 1198 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
              }
#line 1196 "prog_type.m"
          }
#line 1190 "prog_type.m"
        else
#line 1190 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1))))
#line 1190 "prog_type.m"
            {
#line 1190 "prog_type.m"
              MR_Word parse_tree__prog_type__NameY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1190 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1190 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1190 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_15;
#line 1190 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY_16;
#line 1190 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48;
#line 1190 "prog_type.m"
              MR_Word parse_tree__prog_type__V_49_49;

#line 1191 "prog_type.m"
              {
#line 1191 "prog_type.m"
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_13, &parse_tree__prog_type__ArgsY_15, parse_tree__prog_type__KindY0_14, &parse_tree__prog_type__KindY_16, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48);
              }
#line 1190 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1190 "prog_type.m"
                {
#line 1193 "prog_type.m"
                  {
#line 1193 "prog_type.m"
                    parse_tree__prog_type__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 0) = ((MR_Box) (parse_tree__prog_type__NameY_12));
#line 1193 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_15));
#line 1193 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 2) = ((MR_Box) (parse_tree__prog_type__KindY_16));
#line 1193 "prog_type.m"
                  }
#line 1193 "prog_type.m"
                  {
#line 1193 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_49_49, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                  }
#line 1190 "prog_type.m"
                }
#line 1190 "prog_type.m"
            }
#line 1190 "prog_type.m"
          else
#line 1190 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1210 "prog_type.m"
              {
#line 1210 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1210 "prog_type.m"
                MR_Word parse_tree__prog_type__VarY_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1210 "prog_type.m"
                MR_Word parse_tree__prog_type__Kind0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1210 "prog_type.m"
                MR_Integer parse_tree__prog_type__NArgsX0_24;
#line 1210 "prog_type.m"
                MR_Integer parse_tree__prog_type__NArgsY0_25;
#line 1210 "prog_type.m"
                MR_Word parse_tree__prog_type__Result_26;
#line 1210 "prog_type.m"
                MR_Word parse_tree__prog_type__ArgsY0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1211 "prog_type.m"
                {
#line 1211 "prog_type.m"
                  mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__NArgsX0_24);
                }
#line 1212 "prog_type.m"
                {
#line 1212 "prog_type.m"
                  mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__NArgsY0_25);
                }
#line 1213 "prog_type.m"
                {
#line 1213 "prog_type.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_type__Result_26, parse_tree__prog_type__NArgsX0_24, parse_tree__prog_type__NArgsY0_25);
                }
#line 1220 "prog_type.m"
                if ((parse_tree__prog_type__Result_26 == (MR_Integer) 1))
#line 1215 "prog_type.m"
                  {
#line 1215 "prog_type.m"
                    MR_Word parse_tree__prog_type__Kind_27;
#line 1215 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40;
#line 1215 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_41_41;
#line 1215 "prog_type.m"
                    MR_Word parse_tree__prog_type__ArgsY_55;

#line 1216 "prog_type.m"
                    {
#line 1216 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__ArgsY_55, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_27, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40);
                    }
#line 1215 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1215 "prog_type.m"
                      {
#line 1218 "prog_type.m"
                        {
#line 1218 "prog_type.m"
                          parse_tree__prog_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1218 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 1) = ((MR_Box) (parse_tree__prog_type__VarY_22));
#line 1218 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 2) = ((MR_Box) (parse_tree__prog_type__ArgsY_55));
#line 1218 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 3) = ((MR_Box) (parse_tree__prog_type__Kind_27));
#line 1218 "prog_type.m"
                        }
#line 1218 "prog_type.m"
                        {
#line 1218 "prog_type.m"
                          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_41_41, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                        }
#line 1215 "prog_type.m"
                      }
#line 1215 "prog_type.m"
                  }
#line 1220 "prog_type.m"
                else
#line 1220 "prog_type.m"
                  if ((parse_tree__prog_type__Result_26 == (MR_Integer) 0))
#line 1221 "prog_type.m"
                    {
#line 1221 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38;
#line 1221 "prog_type.m"
                      MR_Word parse_tree__prog_type__Kind_56;
#line 1223 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_28_28;

#line 1223 "prog_type.m"
                      {
#line 1223 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__V_28_28, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38);
                      }
#line 1221 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1225 "prog_type.m"
                        {
#line 1225 "prog_type.m"
                          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__VarY_22, parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                        }
#line 1221 "prog_type.m"
                    }
#line 1220 "prog_type.m"
                  else
#line 1227 "prog_type.m"
                    {
#line 1227 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsX_29;
#line 1227 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35;
#line 1227 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_36_36;
#line 1227 "prog_type.m"
                      MR_Word parse_tree__prog_type__Kind_57;

#line 1228 "prog_type.m"
                      {
#line 1228 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsY0_59, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__ArgsX_29, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_57, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35);
                      }
#line 1227 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1227 "prog_type.m"
                        {
#line 1230 "prog_type.m"
                          {
#line 1230 "prog_type.m"
                            parse_tree__prog_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1230 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 1) = ((MR_Box) (parse_tree__prog_type__VarX_8));
#line 1230 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 2) = ((MR_Box) (parse_tree__prog_type__ArgsX_29));
#line 1230 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 3) = ((MR_Box) (parse_tree__prog_type__Kind_57));
#line 1230 "prog_type.m"
                          }
#line 1230 "prog_type.m"
                          {
#line 1230 "prog_type.m"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_22, parse_tree__prog_type__V_36_36, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1227 "prog_type.m"
                        }
#line 1227 "prog_type.m"
                    }
#line 1210 "prog_type.m"
              }
#line 1190 "prog_type.m"
            else
#line 1190 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1200 "prog_type.m"
                {
#line 1201 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1200 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1202 "prog_type.m"
                    {
#line 1202 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                    }
#line 1200 "prog_type.m"
                }
#line 1190 "prog_type.m"
              else
#line 1190 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1234 "prog_type.m"
                  {
#line 1234 "prog_type.m"
                    MR_Word parse_tree__prog_type__RawY_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1234 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1235 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1235 "prog_type.m"
                    {
#line 1235 "prog_type.m"
                      MR_Word parse_tree__prog_type__TypeY__tmp_copy_7 = parse_tree__prog_type__RawY_30;

#line 1235 "prog_type.m"
                      parse_tree__prog_type__TypeY_7 = parse_tree__prog_type__TypeY__tmp_copy_7;
#line 1235 "prog_type.m"
                    }
#line 1235 "prog_type.m"
                    continue;
#line 1234 "prog_type.m"
                  }
#line 1190 "prog_type.m"
                else
#line 1190 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1204 "prog_type.m"
                    {
#line 1204 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43;
#line 1204 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_44_44;
#line 1204 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsY0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1204 "prog_type.m"
                      MR_Word parse_tree__prog_type__KindY0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1204 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsY_53;
#line 1204 "prog_type.m"
                      MR_Word parse_tree__prog_type__KindY_54;

#line 1205 "prog_type.m"
                      {
#line 1205 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_51, &parse_tree__prog_type__ArgsY_53, parse_tree__prog_type__KindY0_52, &parse_tree__prog_type__KindY_54, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43);
                      }
#line 1204 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1204 "prog_type.m"
                        {
#line 1207 "prog_type.m"
                          {
#line 1207 "prog_type.m"
                            parse_tree__prog_type__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1207 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_53));
#line 1207 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 2) = ((MR_Box) (parse_tree__prog_type__KindY_54));
#line 1207 "prog_type.m"
                          }
#line 1207 "prog_type.m"
                          {
#line 1207 "prog_type.m"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_44_44, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1204 "prog_type.m"
                        }
#line 1204 "prog_type.m"
                    }
#line 1190 "prog_type.m"
                  else
#line 1190 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1190 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1190 "prog_type.m"
      }
#line 1190 "prog_type.m"
      break;
#line 1190 "prog_type.m"
    }
#line 1185 "prog_type.m"
}

#line 1154 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1154 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1154 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22)
#line 1154 "prog_type.m"
{
#line 1160 "prog_type.m"
  {
#line 1160 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1160 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1160 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsX_11;
#line 1158 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;

#line 1158 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1158 "prog_type.m"
      {
#line 1158 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1158 "prog_type.m"
        parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1158 "prog_type.m"
        parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1159 "prog_type.m"
        {
#line 1159 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_10, parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
        }
#line 1158 "prog_type.m"
      }
#line 1158 "prog_type.m"
    else
#line 1162 "prog_type.m"
      {
#line 1162 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_13;
#line 1162 "prog_type.m"
        MR_Word parse_tree__prog_type__ArgsY_14;
#line 1160 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;

#line 1160 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1160 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1160 "prog_type.m"
          {
#line 1160 "prog_type.m"
            parse_tree__prog_type__VarY_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1160 "prog_type.m"
            parse_tree__prog_type__ArgsY_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1160 "prog_type.m"
            parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1161 "prog_type.m"
            {
#line 1161 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__VarY_13, parse_tree__prog_type__ArgsY_14, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
            }
#line 1160 "prog_type.m"
          }
#line 1160 "prog_type.m"
        else
#line 1168 "prog_type.m"
          {
#line 1168 "prog_type.m"
            MR_Word parse_tree__prog_type__RawX_16;
#line 1162 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 1162 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1162 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1162 "prog_type.m"
              {
#line 1162 "prog_type.m"
                parse_tree__prog_type__RawX_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1162 "prog_type.m"
                parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1165 "prog_type.m"
                {
#line 1165 "prog_type.m"
                  MR_Word parse_tree__prog_type__RawY_18;
#line 1163 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19;

#line 1163 "prog_type.m"
                  parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1163 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1163 "prog_type.m"
                    {
#line 1163 "prog_type.m"
                      parse_tree__prog_type__RawY_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1163 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1164 "prog_type.m"
                      {
#line 1164 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__RawY_18, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                      }
#line 1163 "prog_type.m"
                    }
#line 1163 "prog_type.m"
                  else
#line 1166 "prog_type.m"
                    {
#line 1166 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1165 "prog_type.m"
                }
#line 1162 "prog_type.m"
              }
#line 1162 "prog_type.m"
            else
#line 1170 "prog_type.m"
              {
#line 1170 "prog_type.m"
                MR_Word parse_tree__prog_type__RawY_28;
#line 1168 "prog_type.m"
                MR_Word parse_tree__prog_type__V_20_20;

#line 1168 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1168 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1168 "prog_type.m"
                  {
#line 1168 "prog_type.m"
                    parse_tree__prog_type__RawY_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1168 "prog_type.m"
                    parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1169 "prog_type.m"
                    {
#line 1169 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__RawY_28, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1168 "prog_type.m"
                  }
#line 1170 "prog_type.m"
              }
#line 1168 "prog_type.m"
          }
#line 1162 "prog_type.m"
      }
#line 1160 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1160 "prog_type.m"
  }
#line 1154 "prog_type.m"
}

#line 1122 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1122 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1122 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23)
#line 1122 "prog_type.m"
{
#line 1127 "prog_type.m"
  {
#line 1127 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1127 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 2))))
#line 1135 "prog_type.m"
      {
#line 1135 "prog_type.m"
        MR_Word parse_tree__prog_type__BuiltinType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1135 "prog_type.m"
        MR_Word parse_tree__prog_type__V_42_42;

#line 1136 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2)));
#line 1136 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1136 "prog_type.m"
          {
#line 1136 "prog_type.m"
            parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1136 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__BuiltinType_15 == parse_tree__prog_type__V_42_42);
#line 1135 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1135 "prog_type.m"
              {
#line 1136 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_23 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22;
#line 1136 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1135 "prog_type.m"
              }
#line 1136 "prog_type.m"
          }
#line 1135 "prog_type.m"
      }
#line 1127 "prog_type.m"
    else
#line 1127 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 1))))
#line 1127 "prog_type.m"
        {
#line 1127 "prog_type.m"
          MR_Word parse_tree__prog_type__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1127 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1127 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsY_13;
#line 1127 "prog_type.m"
          MR_Word parse_tree__prog_type__V_41_41;
#line 1127 "prog_type.m"
          MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1128 "prog_type.m"
          MR_Word parse_tree__prog_type__V_14_14;

#line 1128 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1)));
#line 1128 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 1128 "prog_type.m"
            {
#line 1128 "prog_type.m"
              parse_tree__prog_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1128 "prog_type.m"
              parse_tree__prog_type__ArgsY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1128 "prog_type.m"
              parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1128 "prog_type.m"
              {
#line 1128 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__SymName_10, parse_tree__prog_type__V_41_41);
              }
#line 1127 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1133 "prog_type.m"
                {
#line 1133 "prog_type.m"
                  return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__ArgsY_13, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                }
#line 1128 "prog_type.m"
            }
#line 1127 "prog_type.m"
        }
#line 1127 "prog_type.m"
      else
#line 1127 "prog_type.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1127 "prog_type.m"
          {
#line 1127 "prog_type.m"
            MR_Word parse_tree__prog_type__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1127 "prog_type.m"
            MR_Word parse_tree__prog_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1127 "prog_type.m"
            MR_Word parse_tree__prog_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1127 "prog_type.m"
            MR_Word parse_tree__prog_type__V_52_52;
#line 1127 "prog_type.m"
            MR_Word parse_tree__prog_type__V_53_53;
#line 1127 "prog_type.m"
            MR_Word parse_tree__prog_type__V_54_54;

#line 1139 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1139 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1139 "prog_type.m"
              {
#line 1139 "prog_type.m"
                parse_tree__prog_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1139 "prog_type.m"
                parse_tree__prog_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1139 "prog_type.m"
                parse_tree__prog_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1127 "prog_type.m"
                if ((parse_tree__prog_type__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "prog_type.m"
                  {
#line 1139 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1138 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1138 "prog_type.m"
                      {
#line 1139 "prog_type.m"
                        parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1138 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1138 "prog_type.m"
                          {
#line 1139 "prog_type.m"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1140 "prog_type.m"
                              {
#line 1140 "prog_type.m"
                                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                              }
#line 1138 "prog_type.m"
                          }
#line 1138 "prog_type.m"
                      }
#line 1138 "prog_type.m"
                  }
#line 1127 "prog_type.m"
                else
#line 1142 "prog_type.m"
                  {
#line 1142 "prog_type.m"
                    MR_Word parse_tree__prog_type__RetX_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, (MR_Integer) 0)));
#line 1142 "prog_type.m"
                    MR_Word parse_tree__prog_type__RetY_19;
#line 1142 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1143 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1142 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1142 "prog_type.m"
                      {
#line 1143 "prog_type.m"
                        parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1142 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1142 "prog_type.m"
                          {
#line 1143 "prog_type.m"
                            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 1143 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1143 "prog_type.m"
                              {
#line 1143 "prog_type.m"
                                parse_tree__prog_type__RetY_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_53_53, (MR_Integer) 0)));
#line 1144 "prog_type.m"
                                {
#line 1144 "prog_type.m"
                                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                                }
#line 1142 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 1145 "prog_type.m"
                                  {
#line 1145 "prog_type.m"
                                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RetX_18, parse_tree__prog_type__RetY_19, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                                  }
#line 1143 "prog_type.m"
                              }
#line 1142 "prog_type.m"
                          }
#line 1142 "prog_type.m"
                      }
#line 1142 "prog_type.m"
                  }
#line 1139 "prog_type.m"
              }
#line 1127 "prog_type.m"
          }
#line 1127 "prog_type.m"
        else
#line 1127 "prog_type.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1147 "prog_type.m"
            {
#line 1147 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsX_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1147 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_40;
#line 1147 "prog_type.m"
              MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1148 "prog_type.m"
              MR_Word parse_tree__prog_type__V_21_21;

#line 1148 "prog_type.m"
              parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1148 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1148 "prog_type.m"
                {
#line 1148 "prog_type.m"
                  parse_tree__prog_type__ArgsY_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1148 "prog_type.m"
                  parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1149 "prog_type.m"
                  {
#line 1149 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_39, parse_tree__prog_type__ArgsY_40, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                  }
#line 1148 "prog_type.m"
                }
#line 1147 "prog_type.m"
            }
#line 1127 "prog_type.m"
          else
#line 1127 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1127 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1127 "prog_type.m"
  }
#line 1122 "prog_type.m"
}

#line 1101 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1101 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1101 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16)
#line 1101 "prog_type.m"
{
#line 1109 "prog_type.m"
  while (MR_TRUE)
#line 1109 "prog_type.m"
    {
#line 1109 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1109 "prog_type.m"
      {
#line 1109 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;
#line 1109 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfVar_12;
#line 1105 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfVar_12;

#line 1105 "prog_type.m"
        {
#line 1105 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, ((MR_Box) (parse_tree__prog_type__Var_7)), &parse_tree__prog_type__conv0_BindingOfVar_12);
        }
#line 1105 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1105 "prog_type.m"
          {
#line 1105 "prog_type.m"
            parse_tree__prog_type__BindingOfVar_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfVar_12);
#line 1105 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1105 "prog_type.m"
          }
#line 1109 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1106 "prog_type.m"
          {
#line 1106 "prog_type.m"
            MR_Word parse_tree__prog_type__Var2_13;
#line 1106 "prog_type.m"
            MR_Word parse_tree__prog_type__V_14_14;

#line 1106 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__BindingOfVar_12)) == (MR_mktag((MR_Integer) 0)));
#line 1106 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1106 "prog_type.m"
              {
#line 1106 "prog_type.m"
                parse_tree__prog_type__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 0)));
#line 1106 "prog_type.m"
                parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 1)));
#line 1107 "prog_type.m"
                /* direct tailcall eliminated */
#line 1107 "prog_type.m"
                {
#line 1107 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var__tmp_copy_7 = parse_tree__prog_type__Var2_13;

#line 1107 "prog_type.m"
                  parse_tree__prog_type__Var_7 = parse_tree__prog_type__Var__tmp_copy_7;
#line 1107 "prog_type.m"
                }
#line 1107 "prog_type.m"
                continue;
#line 1106 "prog_type.m"
              }
#line 1106 "prog_type.m"
          }
#line 1109 "prog_type.m"
        else
#line 1112 "prog_type.m"
          {
#line 1110 "prog_type.m"
            {
#line 1110 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__HeadVar_8)));
            }
#line 1112 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1110 "prog_type.m"
              {
#line 1110 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_16 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15;
#line 1110 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1110 "prog_type.m"
              }
#line 1112 "prog_type.m"
            else
#line 1113 "prog_type.m"
              {
#line 1113 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeInfo_23_23;
#line 1113 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_24_24;
#line 1113 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 1113 "prog_type.m"
                {
#line 1113 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), parse_tree__prog_type__HeadTypeParams_10);
                }
#line 1113 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1113 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1113 "prog_type.m"
                  {
#line 5522 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5524 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1114 "prog_type.m"
                    {
#line 1114 "prog_type.m"
                      parse_tree__prog_type__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 0) = ((MR_Box) (parse_tree__prog_type__HeadVar_8));
#line 1114 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1114 "prog_type.m"
                    }
#line 1114 "prog_type.m"
                    {
#line 1114 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_23_23, parse_tree__prog_type__TypeCtorInfo_24_24, ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__V_18_18)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, parse_tree__prog_type__STATE_VARIABLE_Bindings_16);
                    }
#line 1114 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1113 "prog_type.m"
                  }
#line 1113 "prog_type.m"
              }
#line 1112 "prog_type.m"
          }
#line 1109 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1109 "prog_type.m"
      }
#line 1109 "prog_type.m"
      break;
#line 1109 "prog_type.m"
    }
#line 1101 "prog_type.m"
}

#line 1058 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1058 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1058 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19)
#line 1058 "prog_type.m"
{
#line 1064 "prog_type.m"
  {
#line 1064 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1062 "prog_type.m"
    {
#line 1062 "prog_type.m"
      parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Y_8)), parse_tree__prog_type__HeadTypeParams_10);
    }
#line 1064 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1063 "prog_type.m"
      {
#line 1063 "prog_type.m"
        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__X_7, parse_tree__prog_type__Y_8, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
      }
#line 1064 "prog_type.m"
    else
#line 1066 "prog_type.m"
      {
#line 1064 "prog_type.m"
        {
#line 1064 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), parse_tree__prog_type__HeadTypeParams_10);
        }
#line 1066 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1065 "prog_type.m"
          {
#line 1065 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__Y_8, parse_tree__prog_type__X_7, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
          }
#line 1066 "prog_type.m"
        else
#line 1081 "prog_type.m"
          {
#line 1081 "prog_type.m"
            MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1066 "prog_type.m"
            MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1066 "prog_type.m"
            {
#line 1066 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_12);
            }
#line 1066 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1066 "prog_type.m"
              {
#line 1066 "prog_type.m"
                parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1066 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1066 "prog_type.m"
              }
#line 1081 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1071 "prog_type.m"
              {
#line 1071 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_13;
#line 1067 "prog_type.m"
                MR_Box parse_tree__prog_type__conv1_BindingOfY_13;

#line 1067 "prog_type.m"
                {
#line 1067 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv1_BindingOfY_13);
                }
#line 1067 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1067 "prog_type.m"
                  {
#line 1067 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_13 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfY_13);
#line 1067 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1067 "prog_type.m"
                  }
#line 1071 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1070 "prog_type.m"
                  {
#line 1070 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__BindingOfY_13, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                  }
#line 1071 "prog_type.m"
                else
#line 1073 "prog_type.m"
                  {
#line 1073 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfX_14;
#line 1074 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_44_44;
#line 1074 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_42_42;
#line 1074 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_15_15;

#line 1073 "prog_type.m"
                    {
#line 1073 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfX_12, &parse_tree__prog_type__SubstBindingOfX_14);
                    }
#line 1074 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfX_14)) == (MR_mktag((MR_Integer) 0)));
#line 1074 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1074 "prog_type.m"
                      {
#line 1074 "prog_type.m"
                        parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 0)));
#line 1074 "prog_type.m"
                        parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 1)));
#line 5693 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1074 "prog_type.m"
                        {
#line 1074 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__V_42_42)));
                        }
#line 1074 "prog_type.m"
                      }
#line 1076 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1074 "prog_type.m"
                      {
#line 1074 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1074 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1074 "prog_type.m"
                      }
#line 1076 "prog_type.m"
                    else
#line 1077 "prog_type.m"
                      {
#line 1077 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_34_34;
#line 1077 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_35_35;

#line 1077 "prog_type.m"
                        {
#line 1077 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfX_14, parse_tree__prog_type__Y_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1077 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1077 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1077 "prog_type.m"
                          {
#line 5732 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5734 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1078 "prog_type.m"
                            {
#line 1078 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_34_34, parse_tree__prog_type__TypeCtorInfo_35_35, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfX_14)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1078 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1077 "prog_type.m"
                          }
#line 1077 "prog_type.m"
                      }
#line 1073 "prog_type.m"
                  }
#line 1071 "prog_type.m"
              }
#line 1081 "prog_type.m"
            else
#line 1091 "prog_type.m"
              {
#line 1091 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_27;
#line 1083 "prog_type.m"
                MR_Box parse_tree__prog_type__conv2_BindingOfY_27;

#line 1083 "prog_type.m"
                {
#line 1083 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv2_BindingOfY_27);
                }
#line 1083 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1083 "prog_type.m"
                  {
#line 1083 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_27 = ((MR_Word) parse_tree__prog_type__conv2_BindingOfY_27);
#line 1083 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1083 "prog_type.m"
                  }
#line 1091 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1084 "prog_type.m"
                  {
#line 1084 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfY_16;
#line 1085 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_45_45;
#line 1085 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_43_43;
#line 1085 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_17_17;

#line 1084 "prog_type.m"
                    {
#line 1084 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfY_27, &parse_tree__prog_type__SubstBindingOfY_16);
                    }
#line 1085 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfY_16)) == (MR_mktag((MR_Integer) 0)));
#line 1085 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1085 "prog_type.m"
                      {
#line 1085 "prog_type.m"
                        parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 0)));
#line 1085 "prog_type.m"
                        parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 1)));
#line 5803 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1085 "prog_type.m"
                        {
#line 1085 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_45_45, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_43_43)));
                        }
#line 1085 "prog_type.m"
                      }
#line 1087 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1085 "prog_type.m"
                      {
#line 1085 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1085 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1085 "prog_type.m"
                      }
#line 1087 "prog_type.m"
                    else
#line 1088 "prog_type.m"
                      {
#line 1088 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_38_38;
#line 1088 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_39_39;

#line 1088 "prog_type.m"
                        {
#line 1088 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfY_16, parse_tree__prog_type__X_7, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1088 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1088 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1088 "prog_type.m"
                          {
#line 5842 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5844 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1089 "prog_type.m"
                            {
#line 1089 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_38_38, parse_tree__prog_type__TypeCtorInfo_39_39, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfY_16)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1089 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1088 "prog_type.m"
                          }
#line 1088 "prog_type.m"
                      }
#line 1084 "prog_type.m"
                  }
#line 1091 "prog_type.m"
                else
#line 1095 "prog_type.m"
                  {
#line 1093 "prog_type.m"
                    {
#line 1093 "prog_type.m"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_8)));
                    }
#line 1095 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1093 "prog_type.m"
                      *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1095 "prog_type.m"
                    else
#line 1096 "prog_type.m"
                      {
#line 1096 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_25_25;

#line 1096 "prog_type.m"
                        {
#line 1096 "prog_type.m"
                          parse_tree__prog_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__Y_8));
#line 1096 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1096 "prog_type.m"
                        }
#line 1096 "prog_type.m"
                        {
#line 1096 "prog_type.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_25_25)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                        }
#line 1096 "prog_type.m"
                      }
#line 1095 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1095 "prog_type.m"
                  }
#line 1091 "prog_type.m"
              }
#line 1081 "prog_type.m"
          }
#line 1066 "prog_type.m"
      }
#line 1064 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1064 "prog_type.m"
  }
#line 1058 "prog_type.m"
}

#line 1042 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1042 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1042 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14)
#line 1042 "prog_type.m"
{
#line 1048 "prog_type.m"
  {
#line 1048 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 0)));
#line 1048 "prog_type.m"
    MR_Word parse_tree__prog_type__VarY_10;
#line 1048 "prog_type.m"
    MR_Word parse_tree__prog_type__KindY_11;

#line 1046 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1046 "prog_type.m"
      {
#line 1046 "prog_type.m"
        parse_tree__prog_type__VarY_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1046 "prog_type.m"
        parse_tree__prog_type__KindY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1047 "prog_type.m"
        {
#line 1047 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_6, parse_tree__prog_type__VarY_10, parse_tree__prog_type__KindY_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
        }
#line 1046 "prog_type.m"
      }
#line 1046 "prog_type.m"
    else
#line 1051 "prog_type.m"
      {
#line 1051 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1048 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1048 "prog_type.m"
        {
#line 1048 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, ((MR_Box) (parse_tree__prog_type__VarX_6)), &parse_tree__prog_type__conv0_BindingOfX_12);
        }
#line 1048 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1048 "prog_type.m"
          {
#line 1048 "prog_type.m"
            parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1048 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1048 "prog_type.m"
          }
#line 1051 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1050 "prog_type.m"
          {
#line 1050 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
          }
#line 1051 "prog_type.m"
        else
#line 1053 "prog_type.m"
          {
#line 1053 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 1053 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtorInfo_22_22;
#line 1054 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_20_20;

#line 1053 "prog_type.m"
            {
#line 1053 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13);
            }
#line 1053 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1053 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1053 "prog_type.m"
              {
#line 6005 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1054 "prog_type.m"
                {
#line 1054 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__VarX_6)), parse_tree__prog_type__HeadTypeParams_8);
                }
#line 1054 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1053 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1053 "prog_type.m"
                  {
#line 6018 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6020 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1055 "prog_type.m"
                    {
#line 1055 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_21_21, parse_tree__prog_type__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__prog_type__VarX_6)), ((MR_Box) (parse_tree__prog_type__TypeY_7)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
                    }
#line 1055 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1053 "prog_type.m"
                  }
#line 1053 "prog_type.m"
              }
#line 1053 "prog_type.m"
          }
#line 1051 "prog_type.m"
      }
#line 1048 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1048 "prog_type.m"
  }
#line 1042 "prog_type.m"
}

#line 879 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(
#line 879 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_3,
#line 879 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_4)
#line 879 "prog_type.m"
{
#line 882 "prog_type.m"
  {
#line 882 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 882 "prog_type.m"
    MR_Word parse_tree__prog_type__Type_5;

#line 883 "prog_type.m"
    {
#line 883 "prog_type.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(parse_tree__prog_type__VarTypes_3, parse_tree__prog_type__Var_4, &parse_tree__prog_type__Type_5);
    }
#line 884 "prog_type.m"
    {
#line 884 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(parse_tree__prog_type__Type_5);
    }
#line 882 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 882 "prog_type.m"
  }
#line 879 "prog_type.m"
}

#line 648 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 648 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 648 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 648 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3)
#line 648 "prog_type.m"
{
#line 651 "prog_type.m"
  while (MR_TRUE)
#line 651 "prog_type.m"
    {
#line 651 "prog_type.m"
      /* tailcall optimized into a loop */
#line 651 "prog_type.m"
      {
#line 651 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 651 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "prog_type.m"
          *parse_tree__prog_type__STATE_VARIABLE_V_3 = parse_tree__prog_type__STATE_VARIABLE_V_0_2;
#line 651 "prog_type.m"
        else
#line 652 "prog_type.m"
          {
#line 652 "prog_type.m"
            MR_Word parse_tree__prog_type__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 652 "prog_type.m"
            MR_Word parse_tree__prog_type__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 652 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 653 "prog_type.m"
            {
#line 653 "prog_type.m"
              parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_7, parse_tree__prog_type__STATE_VARIABLE_V_0_2, &parse_tree__prog_type__STATE_VARIABLE_V_12_12);
            }
#line 654 "prog_type.m"
            /* direct tailcall eliminated */
#line 654 "prog_type.m"
            {
#line 654 "prog_type.m"
              MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Types_8;
#line 654 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 654 "prog_type.m"
              parse_tree__prog_type__STATE_VARIABLE_V_0_2 = parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2;
#line 654 "prog_type.m"
              parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 654 "prog_type.m"
            }
#line 654 "prog_type.m"
            continue;
#line 652 "prog_type.m"
          }
#line 651 "prog_type.m"
      }
#line 651 "prog_type.m"
      break;
#line 651 "prog_type.m"
    }
#line 648 "prog_type.m"
}

#line 621 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 621 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 621 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 621 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 621 "prog_type.m"
{
#line 623 "prog_type.m"
  while (MR_TRUE)
#line 623 "prog_type.m"
    {
#line 623 "prog_type.m"
      /* tailcall optimized into a loop */
#line 623 "prog_type.m"
      {
#line 623 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 623 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 626 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__HeadVar__2_2;
#line 623 "prog_type.m"
        else
#line 623 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 624 "prog_type.m"
            {
#line 624 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "prog_type.m"
              MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 624 "prog_type.m"
              MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 625 "prog_type.m"
              {
#line 625 "prog_type.m"
                parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_8, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 625 "prog_type.m"
                return;
              }
#line 624 "prog_type.m"
            }
#line 623 "prog_type.m"
          else
#line 623 "prog_type.m"
            if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 623 "prog_type.m"
              {
#line 623 "prog_type.m"
                MR_Word parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "prog_type.m"
                MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 623 "prog_type.m"
                {
#line 623 "prog_type.m"
                  MR_Word base;
#line 623 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__3_3 = base;
#line 623 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_4));
#line 623 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 623 "prog_type.m"
                }
#line 623 "prog_type.m"
              }
#line 623 "prog_type.m"
            else
#line 623 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 637 "prog_type.m"
                {
#line 637 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 637 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_40_40;
#line 637 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 638 "prog_type.m"
                  {
#line 638 "prog_type.m"
                    parse_tree__prog_type__STATE_VARIABLE_V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 0) = ((MR_Box) (parse_tree__prog_type__Var_34));
#line 638 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 638 "prog_type.m"
                  }
#line 639 "prog_type.m"
                  {
#line 639 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_35, parse_tree__prog_type__STATE_VARIABLE_V_40_40, parse_tree__prog_type__HeadVar__3_3);
#line 639 "prog_type.m"
                    return;
                  }
#line 637 "prog_type.m"
                }
#line 623 "prog_type.m"
              else
#line 623 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 627 "prog_type.m"
                  {
#line 627 "prog_type.m"
                    MR_Word parse_tree__prog_type__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 627 "prog_type.m"
                    MR_Word parse_tree__prog_type__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 627 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 627 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 628 "prog_type.m"
                    {
#line 628 "prog_type.m"
                      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_18, parse_tree__prog_type__HeadVar__2_2, &parse_tree__prog_type__STATE_VARIABLE_V_26_26);
                    }
#line 632 "prog_type.m"
                    if ((parse_tree__prog_type__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 632 "prog_type.m"
                    else
#line 630 "prog_type.m"
                      {
#line 630 "prog_type.m"
                        MR_Word parse_tree__prog_type__Ret_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_19, (MR_Integer) 0)));

#line 631 "prog_type.m"
                        /* direct tailcall eliminated */
#line 631 "prog_type.m"
                        {
#line 631 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_23;
#line 631 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;

#line 631 "prog_type.m"
                          parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 631 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 631 "prog_type.m"
                        }
#line 631 "prog_type.m"
                        continue;
#line 630 "prog_type.m"
                      }
#line 627 "prog_type.m"
                  }
#line 623 "prog_type.m"
                else
#line 623 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 640 "prog_type.m"
                    {
#line 640 "prog_type.m"
                      MR_Word parse_tree__prog_type__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 641 "prog_type.m"
                      /* direct tailcall eliminated */
#line 641 "prog_type.m"
                      {
#line 641 "prog_type.m"
                        MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_42;

#line 641 "prog_type.m"
                        parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 641 "prog_type.m"
                      }
#line 641 "prog_type.m"
                      continue;
#line 640 "prog_type.m"
                    }
#line 623 "prog_type.m"
                  else
#line 635 "prog_type.m"
                    {
#line 635 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 636 "prog_type.m"
                      {
#line 636 "prog_type.m"
                        parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_28, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 636 "prog_type.m"
                        return;
                      }
#line 635 "prog_type.m"
                    }
#line 623 "prog_type.m"
      }
#line 623 "prog_type.m"
      break;
#line 623 "prog_type.m"
    }
#line 621 "prog_type.m"
}

#line 411 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
#line 411 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeInfo_for_T_11,
#line 411 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 411 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 411 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 411 "prog_type.m"
{
#line 1391 "prog_type.m"
  {
#line 1391 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1391 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1391 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1391 "prog_type.m"
    else
#line 1392 "prog_type.m"
      {
#line 1392 "prog_type.m"
        MR_Box parse_tree__prog_type__X_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0));
#line 1392 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1392 "prog_type.m"
        MR_Box parse_tree__prog_type__Y_8;
#line 1392 "prog_type.m"
        MR_Word parse_tree__prog_type__Ys_9;
#line 1395 "prog_type.m"
        MR_Box parse_tree__prog_type__Y0_10;

#line 1393 "prog_type.m"
        {
#line 1393 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__X_6, &parse_tree__prog_type__Y0_10);
        }
#line 1395 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1394 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__Y0_10;
#line 1395 "prog_type.m"
        else
#line 1396 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__X_6;
#line 1398 "prog_type.m"
        {
#line 1398 "prog_type.m"
          parse_tree__prog_type__apply_partial_map_to_list_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Xs_7, &parse_tree__prog_type__Ys_9);
        }
#line 1392 "prog_type.m"
        {
#line 1392 "prog_type.m"
          MR_Word base;
#line 1392 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 1392 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_type__Y_8;
#line 1392 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Ys_9));
#line 1392 "prog_type.m"
        }
#line 1392 "prog_type.m"
      }
#line 1391 "prog_type.m"
  }
#line 411 "prog_type.m"
}

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1378 "prog_type.m"
{
#line 1378 "prog_type.m"
  {
#line 1378 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1378 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
#line 1378 "prog_type.m"
  }
#line 1378 "prog_type.m"
}

#line 1379 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1379 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1379 "prog_type.m"
{
#line 1379 "prog_type.m"
  {
#line 1379 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1379 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28);
#line 1379 "prog_type.m"
    {
#line 1379 "prog_type.m"
      parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(parse_tree__prog_type__env_ptr);
#line 1379 "prog_type.m"
      return;
    }
#line 1379 "prog_type.m"
  }
#line 1379 "prog_type.m"
}

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1378 "prog_type.m"
{
#line 1378 "prog_type.m"
  {
#line 1378 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1378 "prog_type.m"
    {
#line 1381 "prog_type.m"
      MR_Word parse_tree__prog_type__V_29_29;
#line 1381 "prog_type.m"
      MR_Word parse_tree__prog_type__V_30_30;

#line 1381 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_mktag((MR_Integer) 0)));
#line 1381 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1381 "prog_type.m"
        {
#line 1381 "prog_type.m"
          parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0)));
#line 1381 "prog_type.m"
          parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1)));
#line 1381 "prog_type.m"
        }
#line 1380 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1380 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1380 "prog_type.m"
        {
#line 1380 "prog_type.m"
          parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(parse_tree__prog_type__env_ptr);
#line 1380 "prog_type.m"
          return;
        }
#line 1378 "prog_type.m"
    }
#line 1378 "prog_type.m"
  }
#line 1378 "prog_type.m"
}

#line 1378 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1378 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1378 "prog_type.m"
{
#line 1378 "prog_type.m"
  {
#line 1378 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1378 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
#line 1378 "prog_type.m"
      {
#line 1378 "prog_type.m"
        {
#line 1379 "prog_type.m"
          {
#line 1379 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 1378 "prog_type.m"
        }
#line 1378 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
#line 1378 "prog_type.m"
      }
#line 1378 "prog_type.m"
    else
#line 1378 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1378 "prog_type.m"
  }
#line 1378 "prog_type.m"
}

#line 403 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0(
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__TVarSet_9,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__ExistQVars_10,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__ActualArgTypes_11,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_12,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__CalleeTVarSet_13,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__PredKindMap_14,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__PredExistQVars_15,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__PredArgTypes_16)
#line 403 "prog_type.m"
{
#line 403 "prog_type.m"
  {
#line 403 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s parse_tree__prog_type__env;

#line 1338 "prog_type.m"
    {
#line 1338 "prog_type.m"
      MR_Word parse_tree__prog_type__Renaming_18;
#line 1338 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentKindMap_19;
#line 1338 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentArgTypes_20;
#line 1338 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentExistQVars_21;
#line 1338 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentToActualSubst_22;
#line 1340 "prog_type.m"
      MR_Word parse_tree__prog_type___TVarSet1_17;

#line 1340 "prog_type.m"
      {
#line 1340 "prog_type.m"
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(parse_tree__prog_type__TVarSet_9, parse_tree__prog_type__CalleeTVarSet_13, &parse_tree__prog_type___TVarSet1_17, &parse_tree__prog_type__Renaming_18);
      }
#line 1341 "prog_type.m"
      {
#line 1341 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredKindMap_14, &parse_tree__prog_type__ParentKindMap_19);
      }
#line 1343 "prog_type.m"
      {
#line 1343 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredArgTypes_16, &parse_tree__prog_type__ParentArgTypes_20);
      }
#line 1345 "prog_type.m"
      {
#line 1345 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredExistQVars_15, &parse_tree__prog_type__ParentExistQVars_21);
      }
#line 1361 "prog_type.m"
      if ((parse_tree__prog_type__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1360 "prog_type.m"
        {
#line 1360 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, &parse_tree__prog_type__ParentToActualSubst_22);
        }
#line 1361 "prog_type.m"
      else
#line 1362 "prog_type.m"
        {
#line 1362 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 1365 "prog_type.m"
          {
#line 1365 "prog_type.m"
            parse_tree__prog_type__V_31_31 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 1365 "prog_type.m"
          {
#line 1365 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, parse_tree__prog_type__HeadTypeParams_12, parse_tree__prog_type__V_31_31, &parse_tree__prog_type__ParentToActualSubst_22);
          }
#line 1362 "prog_type.m"
        }
#line 1338 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1374 "prog_type.m"
        {
#line 1374 "prog_type.m"
          if ((parse_tree__prog_type__ParentExistQVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1374 "prog_type.m"
          else
#line 1375 "prog_type.m"
            {
#line 1376 "prog_type.m"
              {
#line 1376 "prog_type.m"
                parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(parse_tree__prog_type__ParentKindMap_19, parse_tree__prog_type__ParentToActualSubst_22, parse_tree__prog_type__ParentExistQVars_21, &(parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
              }
#line 1378 "prog_type.m"
              {
#line 1378 "prog_type.m"
                parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(&parse_tree__prog_type__env);
              }
#line 1378 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1375 "prog_type.m"
            }
#line 1374 "prog_type.m"
        }
#line 1338 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1338 "prog_type.m"
    }
#line 403 "prog_type.m"
  }
#line 403 "prog_type.m"
}

#line 392 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_subsumes_det_3_p_0(
#line 392 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 392 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 392 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 392 "prog_type.m"
{
#line 1333 "prog_type.m"
  {
#line 1333 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1333 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1331 "prog_type.m"
    {
#line 1331 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1333 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1332 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1333 "prog_type.m"
    else
#line 1334 "prog_type.m"
      {
#line 1334 "prog_type.m"
        {
#line 1334 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
#line 1334 "prog_type.m"
          return;
        }
#line 1334 "prog_type.m"
      }
#line 1333 "prog_type.m"
  }
#line 392 "prog_type.m"
}

#line 387 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_subsumes_3_p_0(
#line 387 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 387 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 387 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 387 "prog_type.m"
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

#line 644 "prog_type.m"
    {
#line 644 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__TypesB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 6769 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 645 "prog_type.m"
    {
#line 645 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 646 "prog_type.m"
    {
#line 646 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypesBVars_7);
    }
#line 1327 "prog_type.m"
    {
#line 1327 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1328 "prog_type.m"
    {
#line 1328 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, parse_tree__prog_type__TypesBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1322 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1322 "prog_type.m"
  }
#line 387 "prog_type.m"
}

#line 380 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_list_5_p_0(
#line 380 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 380 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 380 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__3_3,
#line 380 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4,
#line 380 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_5)
#line 380 "prog_type.m"
{
#line 1262 "prog_type.m"
  while (MR_TRUE)
#line 1262 "prog_type.m"
    {
#line 1262 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1262 "prog_type.m"
      {
#line 1262 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1262 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1262 "prog_type.m"
          {
#line 1262 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1262 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1262 "prog_type.m"
              {
#line 1262 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_5 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4;
#line 1262 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1262 "prog_type.m"
              }
#line 1262 "prog_type.m"
          }
#line 1262 "prog_type.m"
        else
#line 1263 "prog_type.m"
          {
#line 1263 "prog_type.m"
            MR_Word parse_tree__prog_type__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1263 "prog_type.m"
            MR_Word parse_tree__prog_type__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1263 "prog_type.m"
            MR_Word parse_tree__prog_type__Y_12;
#line 1263 "prog_type.m"
            MR_Word parse_tree__prog_type__Ys_13;
#line 1263 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1263 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1263 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1263 "prog_type.m"
              {
#line 1263 "prog_type.m"
                parse_tree__prog_type__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1263 "prog_type.m"
                parse_tree__prog_type__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1264 "prog_type.m"
                {
#line 1264 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__X_10, parse_tree__prog_type__Y_12, parse_tree__prog_type__HeadVar__3_3, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                }
#line 1263 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1265 "prog_type.m"
                  {
#line 1265 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1265 "prog_type.m"
                    {
#line 1265 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_11;
#line 1265 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__Ys_13;
#line 1265 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1265 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 1265 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1265 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1265 "prog_type.m"
                    }
#line 1265 "prog_type.m"
                    continue;
#line 1265 "prog_type.m"
                  }
#line 1263 "prog_type.m"
              }
#line 1263 "prog_type.m"
          }
#line 1262 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1262 "prog_type.m"
      }
#line 1262 "prog_type.m"
      break;
#line 1262 "prog_type.m"
    }
#line 380 "prog_type.m"
}

#line 377 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_unify_5_p_0(
#line 377 "prog_type.m"
  MR_Word parse_tree__prog_type__X_6,
#line 377 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_7,
#line 377 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 377 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14,
#line 377 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_15)
#line 377 "prog_type.m"
{
#line 1032 "prog_type.m"
  {
#line 1032 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 0)));
#line 1032 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1030 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 1030 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1030 "prog_type.m"
      {
#line 1030 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 0)));
#line 1030 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 1)));
#line 1031 "prog_type.m"
        {
#line 1031 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_10, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
        }
#line 1030 "prog_type.m"
      }
#line 1030 "prog_type.m"
    else
#line 1034 "prog_type.m"
      {
#line 1034 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_12;
#line 1032 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 1032 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 0)));
#line 1032 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1032 "prog_type.m"
          {
#line 1032 "prog_type.m"
            parse_tree__prog_type__VarY_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
#line 1032 "prog_type.m"
            parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
#line 1033 "prog_type.m"
            {
#line 1033 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_12, parse_tree__prog_type__X_6, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
            }
#line 1032 "prog_type.m"
          }
#line 1032 "prog_type.m"
        else
#line 1036 "prog_type.m"
          {
#line 1036 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1034 "prog_type.m"
            {
#line 1034 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_nonvar_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
            }
#line 1036 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1034 "prog_type.m"
              {
#line 1034 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_15 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;
#line 1034 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1034 "prog_type.m"
              }
#line 1036 "prog_type.m"
            else
#line 1039 "prog_type.m"
              {
#line 1039 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_special_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
              }
#line 1036 "prog_type.m"
          }
#line 1034 "prog_type.m"
      }
#line 1032 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1032 "prog_type.m"
  }
#line 377 "prog_type.m"
}

#line 366 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__Globals_9,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type___TypeCtor_10,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__ReserveTagPragma_11,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_12,
#line 366 "prog_type.m"
  MR_Word parse_tree__prog_type__MaybeUserEqCmp_13,
#line 366 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleFunctorName_14,
#line 366 "prog_type.m"
  MR_Word * parse_tree__prog_type__SingleArgType_15,
#line 366 "prog_type.m"
  MR_Word * parse_tree__prog_type__MaybeSingleArgName_16)
#line 366 "prog_type.m"
{
#line 1006 "prog_type.m"
  {
#line 1006 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1006 "prog_type.m"
    {
#line 1006 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(parse_tree__prog_type__Globals_9, parse_tree__prog_type__ReserveTagPragma_11, parse_tree__prog_type__Ctors_12, parse_tree__prog_type__MaybeUserEqCmp_13, parse_tree__prog_type__SingleFunctorName_14, parse_tree__prog_type__SingleArgType_15, parse_tree__prog_type__MaybeSingleArgName_16);
    }
#line 1006 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1006 "prog_type.m"
  }
#line 366 "prog_type.m"
}

#line 356 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_constructors_are_type_info_1_p_0(
#line 356 "prog_type.m"
  MR_Word parse_tree__prog_type__Ctors_2)
#line 356 "prog_type.m"
{
#line 965 "prog_type.m"
  {
#line 965 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_2)) == (MR_mktag((MR_Integer) 1)));
#line 965 "prog_type.m"
    MR_Word parse_tree__prog_type__Ctor_3;
#line 965 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_10;
#line 965 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_11;
#line 965 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 965 "prog_type.m"
    MR_Word parse_tree__prog_type__V_17_17;
#line 965 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 965 "prog_type.m"
    MR_String parse_tree__prog_type__Name_21;
#line 974 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_12;
#line 974 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_15;
#line 974 "prog_type.m"
    MR_Word parse_tree__prog_type__V_18_18;

#line 973 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 973 "prog_type.m"
      {
#line 973 "prog_type.m"
        parse_tree__prog_type__SingleCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 0)));
#line 973 "prog_type.m"
        parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 1)));
#line 973 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 965 "prog_type.m"
          {
#line 974 "prog_type.m"
            parse_tree__prog_type__ExistQVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 0)));
#line 974 "prog_type.m"
            parse_tree__prog_type___Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 1)));
#line 974 "prog_type.m"
            parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 2)));
#line 974 "prog_type.m"
            parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 3)));
#line 974 "prog_type.m"
            parse_tree__prog_type___Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 4)));
#line 974 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 974 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 974 "prog_type.m"
              {
#line 974 "prog_type.m"
                parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 974 "prog_type.m"
                parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 1)));
#line 975 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 965 "prog_type.m"
                  {
#line 976 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 965 "prog_type.m"
                      {
#line 991 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__Ctor_3)) == (MR_mktag((MR_Integer) 1))))
#line 992 "prog_type.m"
                          {
#line 992 "prog_type.m"
                            MR_Word parse_tree__prog_type__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 992 "prog_type.m"
                            MR_Word parse_tree__prog_type__V_25_25;

#line 992 "prog_type.m"
                            parse_tree__prog_type__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 1)));
#line 993 "prog_type.m"
                            {
#line 993 "prog_type.m"
                              parse_tree__prog_type__V_25_25 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                            }
#line 993 "prog_type.m"
                            {
#line 993 "prog_type.m"
                              parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_23, parse_tree__prog_type__V_25_25);
                            }
#line 992 "prog_type.m"
                          }
#line 991 "prog_type.m"
                        else
#line 991 "prog_type.m"
                          {
#line 991 "prog_type.m"
                            parse_tree__prog_type__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 991 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 991 "prog_type.m"
                          }
#line 965 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 997 "prog_type.m"
                          {
#line 997 "prog_type.m"
                            if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "type_info") == 0))
#line 997 "prog_type.m"
                              parse_tree__prog_type__succeeded = MR_TRUE;
#line 997 "prog_type.m"
                            else
#line 997 "prog_type.m"
                              if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "type_ctor_info") == 0))
#line 998 "prog_type.m"
                                parse_tree__prog_type__succeeded = MR_TRUE;
#line 997 "prog_type.m"
                              else
#line 997 "prog_type.m"
                                if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "typeclass_info") == 0))
#line 999 "prog_type.m"
                                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 997 "prog_type.m"
                                else
#line 997 "prog_type.m"
                                  if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "base_typeclass_info") == 0))
#line 1000 "prog_type.m"
                                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 997 "prog_type.m"
                                  else
#line 997 "prog_type.m"
                                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 997 "prog_type.m"
                          }
#line 965 "prog_type.m"
                      }
#line 965 "prog_type.m"
                  }
#line 974 "prog_type.m"
              }
#line 965 "prog_type.m"
          }
#line 973 "prog_type.m"
      }
#line 965 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 965 "prog_type.m"
  }
#line 356 "prog_type.m"
}

#line 333 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__qualify_cons_id_4_p_0(
#line 333 "prog_type.m"
  MR_Word parse_tree__prog_type__Args_5,
#line 333 "prog_type.m"
  MR_Word parse_tree__prog_type__ConsId0_6,
#line 333 "prog_type.m"
  MR_Word * parse_tree__prog_type__ConsId_7,
#line 333 "prog_type.m"
  MR_Word * parse_tree__prog_type__InstConsId_8)
#line 333 "prog_type.m"
{
#line 923 "prog_type.m"
  {
#line 923 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 923 "prog_type.m"
    if ((parse_tree__prog_type__ConsId0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "prog_type.m"
      {
#line 939 "prog_type.m"
        MR_Integer parse_tree__prog_type__V_41_41;
#line 939 "prog_type.m"
        MR_Word parse_tree__prog_type__PrivateBuiltin_62;
#line 939 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeCtor_63;
#line 939 "prog_type.m"
        MR_Word parse_tree__prog_type__V_64_64;

#line 940 "prog_type.m"
        *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 941 "prog_type.m"
        {
#line 941 "prog_type.m"
          parse_tree__prog_type__V_41_41 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
        }
#line 915 "prog_type.m"
        {
#line 915 "prog_type.m"
          parse_tree__prog_type__PrivateBuiltin_62 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
        }
#line 916 "prog_type.m"
        {
#line 916 "prog_type.m"
          parse_tree__prog_type__TypeCtor_63 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 917 "prog_type.m"
        {
#line 917 "prog_type.m"
          parse_tree__prog_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_62));
#line 917 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
#line 917 "prog_type.m"
        }
#line 917 "prog_type.m"
        {
#line 917 "prog_type.m"
          MR_Word base;
#line 917 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_type.m"
          *parse_tree__prog_type__InstConsId_8 = base;
#line 917 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 917 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_64_64));
#line 917 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_41_41));
#line 917 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_63));
#line 917 "prog_type.m"
        }
#line 939 "prog_type.m"
      }
#line 923 "prog_type.m"
    else
#line 923 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) == (MR_mktag((MR_Integer) 1))))
#line 934 "prog_type.m"
        {
#line 934 "prog_type.m"
          MR_Integer parse_tree__prog_type__V_43_43;
#line 934 "prog_type.m"
          MR_Word parse_tree__prog_type__PrivateBuiltin_54;
#line 934 "prog_type.m"
          MR_Word parse_tree__prog_type__TypeCtor_55;
#line 934 "prog_type.m"
          MR_Word parse_tree__prog_type__V_56_56;

#line 935 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 936 "prog_type.m"
          {
#line 936 "prog_type.m"
            parse_tree__prog_type__V_43_43 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
#line 915 "prog_type.m"
          {
#line 915 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_54 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
          }
#line 916 "prog_type.m"
          {
#line 916 "prog_type.m"
            parse_tree__prog_type__TypeCtor_55 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 917 "prog_type.m"
          {
#line 917 "prog_type.m"
            parse_tree__prog_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_54));
#line 917 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 1) = ((MR_Box) ((MR_String) "type_info"));
#line 917 "prog_type.m"
          }
#line 917 "prog_type.m"
          {
#line 917 "prog_type.m"
            MR_Word base;
#line 917 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = base;
#line 917 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 917 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_56_56));
#line 917 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 917 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_55));
#line 917 "prog_type.m"
          }
#line 934 "prog_type.m"
        }
#line 923 "prog_type.m"
      else
#line 923 "prog_type.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 923 "prog_type.m"
          {
#line 923 "prog_type.m"
            MR_Word parse_tree__prog_type__Name0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 1)));
#line 923 "prog_type.m"
            MR_Integer parse_tree__prog_type__OrigArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 2)));
#line 923 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 3)));
#line 929 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeModule_12;
#line 924 "prog_type.m"
            MR_Word parse_tree__prog_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 0)));
#line 924 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 1)));
#line 924 "prog_type.m"
            MR_String parse_tree__prog_type__V_13_13;

#line 924 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 924 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 924 "prog_type.m"
              {
#line 924 "prog_type.m"
                parse_tree__prog_type__TypeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 0)));
#line 924 "prog_type.m"
                parse_tree__prog_type__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 1)));
#line 925 "prog_type.m"
                {
#line 925 "prog_type.m"
                  MR_String parse_tree__prog_type__UnqualName_15;
#line 925 "prog_type.m"
                  MR_Word parse_tree__prog_type__Name_16;
#line 925 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_45_45;

#line 925 "prog_type.m"
                  {
#line 925 "prog_type.m"
                    parse_tree__prog_type__UnqualName_15 = mdbcomp__prim_data__unqualify_name_1_f_0(parse_tree__prog_type__Name0_9);
                  }
#line 926 "prog_type.m"
                  {
#line 926 "prog_type.m"
                    parse_tree__prog_type__Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 0) = ((MR_Box) (parse_tree__prog_type__TypeModule_12));
#line 926 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 1) = ((MR_Box) (parse_tree__prog_type__UnqualName_15));
#line 926 "prog_type.m"
                  }
#line 927 "prog_type.m"
                  {
#line 927 "prog_type.m"
                    MR_Word base;
#line 927 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 927 "prog_type.m"
                    *parse_tree__prog_type__ConsId_7 = base;
#line 927 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 927 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 927 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 927 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_11));
#line 927 "prog_type.m"
                  }
#line 928 "prog_type.m"
                  {
#line 928 "prog_type.m"
                    parse_tree__prog_type__V_45_45 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 928 "prog_type.m"
                  {
#line 928 "prog_type.m"
                    MR_Word base;
#line 928 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 928 "prog_type.m"
                    *parse_tree__prog_type__InstConsId_8 = base;
#line 928 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 928 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 928 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 928 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 928 "prog_type.m"
                  }
#line 925 "prog_type.m"
                }
#line 924 "prog_type.m"
              }
#line 924 "prog_type.m"
            else
#line 930 "prog_type.m"
              {
#line 930 "prog_type.m"
                MR_Word parse_tree__prog_type__V_46_46;

#line 930 "prog_type.m"
                *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 931 "prog_type.m"
                {
#line 931 "prog_type.m"
                  parse_tree__prog_type__V_46_46 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 931 "prog_type.m"
                {
#line 931 "prog_type.m"
                  MR_Word base;
#line 931 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 931 "prog_type.m"
                  *parse_tree__prog_type__InstConsId_8 = base;
#line 931 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 931 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name0_9));
#line 931 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 931 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 931 "prog_type.m"
                }
#line 930 "prog_type.m"
              }
#line 923 "prog_type.m"
          }
#line 923 "prog_type.m"
        else
#line 958 "prog_type.m"
          {
#line 959 "prog_type.m"
            *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 960 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
#line 958 "prog_type.m"
          }
#line 923 "prog_type.m"
  }
#line 333 "prog_type.m"
}

#line 324 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_inst_cons_id_2_f_0(
#line 324 "prog_type.m"
  MR_Word parse_tree__prog_type__Which_4,
#line 324 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5)
#line 324 "prog_type.m"
{
#line 905 "prog_type.m"
  {
#line 905 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 905 "prog_type.m"
    MR_Word parse_tree__prog_type__InstConsId_6;
#line 905 "prog_type.m"
    MR_String parse_tree__prog_type__Symbol_8;
#line 905 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_9;
#line 905 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_10;
#line 905 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 911 "prog_type.m"
    if ((parse_tree__prog_type__Which_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "typeclass_info";
#line 911 "prog_type.m"
    else
#line 910 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "type_info";
#line 915 "prog_type.m"
    {
#line 915 "prog_type.m"
      parse_tree__prog_type__PrivateBuiltin_9 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 916 "prog_type.m"
    {
#line 916 "prog_type.m"
      parse_tree__prog_type__TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 917 "prog_type.m"
    {
#line 917 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_9));
#line 917 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 1) = ((MR_Box) (parse_tree__prog_type__Symbol_8));
#line 917 "prog_type.m"
    }
#line 917 "prog_type.m"
    {
#line 917 "prog_type.m"
      parse_tree__prog_type__InstConsId_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 917 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 1) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 917 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 2) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 917 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_10));
#line 917 "prog_type.m"
    }
#line 905 "prog_type.m"
    return parse_tree__prog_type__InstConsId_6;
#line 905 "prog_type.m"
  }
#line 324 "prog_type.m"
}

#line 322 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__cell_cons_id_1_f_0(
#line 322 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 322 "prog_type.m"
{
#line 902 "prog_type.m"
  {
#line 902 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 902 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__2_2;

#line 902 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 903 "prog_type.m"
      parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_type.m"
    else
#line 902 "prog_type.m"
      {
#line 902 "prog_type.m"
        MR_Word parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 902 "prog_type.m"
        parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__Ctor_3);
#line 902 "prog_type.m"
      }
#line 902 "prog_type.m"
    return parse_tree__prog_type__HeadVar__2_2;
#line 902 "prog_type.m"
  }
#line 322 "prog_type.m"
}

#line 316 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__make_type_ctor_3_p_0(
#line 316 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 316 "prog_type.m"
  MR_Integer parse_tree__prog_type__Arity_5,
#line 316 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 316 "prog_type.m"
{
#line 898 "prog_type.m"
  {
#line 898 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 898 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 898 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;

#line 898 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 898 "prog_type.m"
      {
#line 898 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 898 "prog_type.m"
        {
#line 898 "prog_type.m"
          parse_tree__prog_type__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 898 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 898 "prog_type.m"
        }
#line 898 "prog_type.m"
        {
#line 898 "prog_type.m"
          MR_Word base;
#line 898 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 898 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 898 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_6_6));
#line 898 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 898 "prog_type.m"
        }
#line 898 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 898 "prog_type.m"
      }
#line 898 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 898 "prog_type.m"
  }
#line 316 "prog_type.m"
}

#line 275 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__add_new_prefix_2_p_0(
#line 275 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 275 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 275 "prog_type.m"
{
#line 891 "prog_type.m"
  {
#line 891 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 891 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 893 "prog_type.m"
      {
#line 893 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 893 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 893 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 894 "prog_type.m"
        {
#line 894 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_7, &parse_tree__prog_type__Name_8);
        }
#line 893 "prog_type.m"
        {
#line 893 "prog_type.m"
          MR_Word base;
#line 893 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 893 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 893 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 893 "prog_type.m"
        }
#line 893 "prog_type.m"
      }
#line 891 "prog_type.m"
    else
#line 891 "prog_type.m"
      {
#line 891 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 891 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 892 "prog_type.m"
        {
#line 892 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_3, &parse_tree__prog_type__Name_4);
        }
#line 891 "prog_type.m"
        {
#line 891 "prog_type.m"
          MR_Word base;
#line 891 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 891 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 891 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 891 "prog_type.m"
        }
#line 891 "prog_type.m"
      }
#line 891 "prog_type.m"
  }
#line 275 "prog_type.m"
}

#line 269 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__remove_new_prefix_2_p_0(
#line 269 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 269 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 269 "prog_type.m"
{
#line 886 "prog_type.m"
  {
#line 886 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 886 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 888 "prog_type.m"
      {
#line 888 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 888 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 888 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 889 "prog_type.m"
        {
#line 889 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_8, parse_tree__prog_type__Name0_7);
        }
#line 888 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 888 "prog_type.m"
          {
#line 888 "prog_type.m"
            {
#line 888 "prog_type.m"
              MR_Word base;
#line 888 "prog_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 888 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 888 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 888 "prog_type.m"
            }
#line 888 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 888 "prog_type.m"
          }
#line 888 "prog_type.m"
      }
#line 886 "prog_type.m"
    else
#line 886 "prog_type.m"
      {
#line 886 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 886 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 887 "prog_type.m"
        {
#line 887 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_4, parse_tree__prog_type__Name0_3);
        }
#line 886 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 886 "prog_type.m"
          {
#line 886 "prog_type.m"
            {
#line 886 "prog_type.m"
              MR_Word base;
#line 886 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 886 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 886 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 886 "prog_type.m"
            }
#line 886 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 886 "prog_type.m"
          }
#line 886 "prog_type.m"
      }
#line 886 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 886 "prog_type.m"
  }
#line 269 "prog_type.m"
}

#line 857 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 857 "prog_type.m"
{
#line 857 "prog_type.m"
  {
#line 857 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 857 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 857 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 857 "prog_type.m"
  }
#line 857 "prog_type.m"
}

#line 261 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(
#line 261 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_4,
#line 261 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsSet0_5)
#line 261 "prog_type.m"
{
#line 865 "prog_type.m"
  {
#line 865 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 865 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsSet_6;
#line 865 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 865 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList0_7;
#line 865 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList_8;
#line 865 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 867 "prog_type.m"
    {
#line 867 "prog_type.m"
      parse_tree__prog_type__VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(parse_tree__prog_type__TypeCtorInfo_9_9, parse_tree__prog_type__VarsSet0_5);
    }
#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 857 "prog_type.m"
    }
#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList0_7, &parse_tree__prog_type__VarsList_8);
    }
#line 869 "prog_type.m"
    {
#line 869 "prog_type.m"
      parse_tree__prog_type__VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(parse_tree__prog_type__TypeCtorInfo_9_9, parse_tree__prog_type__VarsList_8);
    }
#line 865 "prog_type.m"
    return parse_tree__prog_type__VarsSet_6;
#line 865 "prog_type.m"
  }
#line 261 "prog_type.m"
}

#line 857 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1(
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 857 "prog_type.m"
{
#line 857 "prog_type.m"
  {
#line 857 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 857 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 857 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 857 "prog_type.m"
  }
#line 857 "prog_type.m"
}

#line 259 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0(
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_4,
#line 259 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsSet0_5)
#line 259 "prog_type.m"
{
#line 860 "prog_type.m"
  {
#line 860 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsSet_6;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[2];
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList0_7;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList_8;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 861 "prog_type.m"
    {
#line 861 "prog_type.m"
      parse_tree__prog_type__VarsList0_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__VarsSet0_5);
    }
#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 857 "prog_type.m"
    }
#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList0_7, &parse_tree__prog_type__VarsList_8);
    }
#line 863 "prog_type.m"
    {
#line 863 "prog_type.m"
      parse_tree__prog_type__VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__VarsList_8);
    }
#line 860 "prog_type.m"
    return parse_tree__prog_type__VarsSet_6;
#line 860 "prog_type.m"
  }
#line 259 "prog_type.m"
}

#line 857 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1(
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 857 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 857 "prog_type.m"
{
#line 857 "prog_type.m"
  {
#line 857 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 857 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 857 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 857 "prog_type.m"
  }
#line 857 "prog_type.m"
}

#line 258 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0(
#line 258 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_4,
#line 258 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsList_5)
#line 258 "prog_type.m"
{
#line 856 "prog_type.m"
  {
#line 856 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 856 "prog_type.m"
    MR_Word parse_tree__prog_type__NonTypeInfoVarsList_6;
#line 856 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;

#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      parse_tree__prog_type__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 857 "prog_type.m"
    }
#line 857 "prog_type.m"
    {
#line 857 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_7_7, parse_tree__prog_type__VarsList_5, &parse_tree__prog_type__NonTypeInfoVarsList_6);
    }
#line 856 "prog_type.m"
    return parse_tree__prog_type__NonTypeInfoVarsList_6;
#line 856 "prog_type.m"
  }
#line 258 "prog_type.m"
}

#line 876 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1(
#line 876 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 876 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 876 "prog_type.m"
{
#line 876 "prog_type.m"
  {
#line 876 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 876 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 876 "prog_type.m"
    {
#line 876 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 876 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 876 "prog_type.m"
  }
#line 876 "prog_type.m"
}

#line 253 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0(
#line 253 "prog_type.m"
  MR_Word parse_tree__prog_type__VarsList_4,
#line 253 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_5)
#line 253 "prog_type.m"
{
#line 852 "prog_type.m"
  {
#line 852 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 852 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__3_3;
#line 852 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfoVarsList_6;
#line 852 "prog_type.m"
    MR_Word parse_tree__prog_type__NonTypeInfoVarsList_7;
#line 852 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 876 "prog_type.m"
    {
#line 876 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 876 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 876 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1));
#line 876 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 876 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_5));
#line 876 "prog_type.m"
    }
#line 876 "prog_type.m"
    {
#line 876 "prog_type.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList_4, &parse_tree__prog_type__TypeInfoVarsList_6, &parse_tree__prog_type__NonTypeInfoVarsList_7);
    }
#line 852 "prog_type.m"
    {
#line 852 "prog_type.m"
      parse_tree__prog_type__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__TypeInfoVarsList_6, parse_tree__prog_type__NonTypeInfoVarsList_7);
    }
#line 852 "prog_type.m"
    return parse_tree__prog_type__HeadVar__3_3;
#line 852 "prog_type.m"
  }
#line 253 "prog_type.m"
}

#line 245 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(
#line 245 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtorCat_3)
#line 245 "prog_type.m"
{
#line 842 "prog_type.m"
  {
#line 842 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 842 "prog_type.m"
    MR_Word parse_tree__prog_type__IsIntroduced_4;

#line 842 "prog_type.m"
    if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeCtorCat_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeCtorCat_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 846 "prog_type.m"
      parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 1;
#line 842 "prog_type.m"
    else
#line 843 "prog_type.m"
      parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 842 "prog_type.m"
    return parse_tree__prog_type__IsIntroduced_4;
#line 842 "prog_type.m"
  }
#line 245 "prog_type.m"
}

#line 243 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_ctor_1_p_0(
#line 243 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_2)
#line 243 "prog_type.m"
{
#line 823 "prog_type.m"
  {
#line 823 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 823 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_3;
#line 823 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 823 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 0)));
#line 823 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 1)));
#line 823 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;

#line 824 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 824 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 824 "prog_type.m"
      {
#line 824 "prog_type.m"
        parse_tree__prog_type__PrivateBuiltin_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 824 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 824 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 823 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 823 "prog_type.m"
          {
#line 825 "prog_type.m"
            {
#line 825 "prog_type.m"
              parse_tree__prog_type__V_7_7 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
            }
#line 825 "prog_type.m"
            {
#line 825 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_3, parse_tree__prog_type__V_7_7);
            }
#line 823 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 827 "prog_type.m"
              {
#line 827 "prog_type.m"
                if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "type_info") == 0))
#line 826 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                else
#line 827 "prog_type.m"
                  if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "type_ctor_info") == 0))
#line 827 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                  else
#line 827 "prog_type.m"
                    if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "typeclass_info") == 0))
#line 828 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                    else
#line 827 "prog_type.m"
                      if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "base_typeclass_info") == 0))
#line 829 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                      else
#line 827 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_FALSE;
#line 827 "prog_type.m"
              }
#line 823 "prog_type.m"
          }
#line 824 "prog_type.m"
      }
#line 823 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 823 "prog_type.m"
  }
#line 243 "prog_type.m"
}

#line 241 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_1_p_0(
#line 241 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 241 "prog_type.m"
{
#line 819 "prog_type.m"
  {
#line 819 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 819 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 819 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_8;
#line 819 "prog_type.m"
    MR_String parse_tree__prog_type__Name_9;
#line 819 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 819 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_11_11;
#line 819 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;
#line 565 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_6;

#line 565 "prog_type.m"
    {
#line 565 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type___Args_6);
    }
#line 819 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 819 "prog_type.m"
      {
#line 824 "prog_type.m"
        parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 824 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 824 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 824 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 824 "prog_type.m"
          {
#line 824 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 0)));
#line 824 "prog_type.m"
            parse_tree__prog_type__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 1)));
#line 824 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_11_11 == (MR_Integer) 0);
#line 819 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 819 "prog_type.m"
              {
#line 825 "prog_type.m"
                {
#line 825 "prog_type.m"
                  parse_tree__prog_type__V_12_12 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                }
#line 825 "prog_type.m"
                {
#line 825 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_8, parse_tree__prog_type__V_12_12);
                }
#line 819 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 827 "prog_type.m"
                  {
#line 827 "prog_type.m"
                    if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "type_info") == 0))
#line 826 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                    else
#line 827 "prog_type.m"
                      if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "type_ctor_info") == 0))
#line 827 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                      else
#line 827 "prog_type.m"
                        if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "typeclass_info") == 0))
#line 828 "prog_type.m"
                          parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                        else
#line 827 "prog_type.m"
                          if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "base_typeclass_info") == 0))
#line 829 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 827 "prog_type.m"
                          else
#line 827 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_FALSE;
#line 827 "prog_type.m"
                  }
#line 819 "prog_type.m"
              }
#line 824 "prog_type.m"
          }
#line 819 "prog_type.m"
      }
#line 819 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 819 "prog_type.m"
  }
#line 241 "prog_type.m"
}

#line 233 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_bitmap_1_p_0(
#line 233 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 233 "prog_type.m"
{
#line 816 "prog_type.m"
  {
#line 816 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 816 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 816 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 816 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 816 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 816 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 817 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 817 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
      {
#line 817 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 817 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 817 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 817 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
          {
#line 817 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 817 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "bitmap") == 0);
#line 816 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 816 "prog_type.m"
              {
#line 817 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "bitmap") == 0);
#line 816 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 816 "prog_type.m"
              }
#line 817 "prog_type.m"
          }
#line 817 "prog_type.m"
      }
#line 816 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 816 "prog_type.m"
  }
#line 233 "prog_type.m"
}

#line 231 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_array_1_p_0(
#line 231 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 231 "prog_type.m"
{
#line 814 "prog_type.m"
  {
#line 814 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 814 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 814 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 814 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 814 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 814 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 814 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 814 "prog_type.m"
      {
#line 814 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 814 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 814 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 814 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 814 "prog_type.m"
          {
#line 814 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 814 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "array") == 0);
#line 814 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 814 "prog_type.m"
              {
#line 814 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "array") == 0);
#line 814 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 814 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 1);
#line 814 "prog_type.m"
              }
#line 814 "prog_type.m"
          }
#line 814 "prog_type.m"
      }
#line 814 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 814 "prog_type.m"
  }
#line 231 "prog_type.m"
}

#line 229 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_io_state_1_p_0(
#line 229 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 229 "prog_type.m"
{
#line 809 "prog_type.m"
  {
#line 809 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 809 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_11_11;
#line 809 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 809 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_4;
#line 809 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 809 "prog_type.m"
    MR_String parse_tree__prog_type__V_7_7;
#line 809 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_8_8;
#line 809 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 809 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;

#line 810 "prog_type.m"
    {
#line 810 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type__V_9_9);
    }
#line 809 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 809 "prog_type.m"
      {
#line 8578 "parse_tree.prog_type.c"
        parse_tree__prog_type__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 810 "prog_type.m"
        {
#line 810 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_11_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 809 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 809 "prog_type.m"
          {
#line 811 "prog_type.m"
            {
#line 811 "prog_type.m"
              parse_tree__prog_type__ModuleName_4 = mdbcomp__prim_data__mercury_io_module_0_f_0();
            }
#line 812 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 812 "prog_type.m"
            parse_tree__prog_type__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 812 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 812 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 812 "prog_type.m"
              {
#line 812 "prog_type.m"
                parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 812 "prog_type.m"
                parse_tree__prog_type__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 812 "prog_type.m"
                {
#line 812 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_4, parse_tree__prog_type__V_10_10);
                }
#line 809 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 809 "prog_type.m"
                  {
#line 812 "prog_type.m"
                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_7_7, (MR_String) "state") == 0);
#line 809 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 812 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_8_8 == (MR_Integer) 0);
#line 809 "prog_type.m"
                  }
#line 812 "prog_type.m"
              }
#line 809 "prog_type.m"
          }
#line 809 "prog_type.m"
      }
#line 809 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 809 "prog_type.m"
  }
#line 229 "prog_type.m"
}

#line 227 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(
#line 227 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_3)
#line 227 "prog_type.m"
{
#line 789 "prog_type.m"
  {
#line 789 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 789 "prog_type.m"
    MR_Word parse_tree__prog_type__IsBuiltinDummy_4;
#line 789 "prog_type.m"
    MR_Word parse_tree__prog_type__CtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 789 "prog_type.m"
    MR_Integer parse_tree__prog_type__TypeArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 792 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_7;
#line 792 "prog_type.m"
    MR_String parse_tree__prog_type__TypeName_8;
#line 792 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;

#line 792 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 792 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 792 "prog_type.m"
      {
#line 792 "prog_type.m"
        parse_tree__prog_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 792 "prog_type.m"
        parse_tree__prog_type__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 793 "prog_type.m"
        {
#line 793 "prog_type.m"
          parse_tree__prog_type__V_15_15 = mdbcomp__prim_data__mercury_io_module_0_f_0();
        }
#line 793 "prog_type.m"
        {
#line 793 "prog_type.m"
          parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_7, parse_tree__prog_type__V_15_15);
        }
#line 792 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 792 "prog_type.m"
          {
#line 794 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_8, (MR_String) "state") == 0);
#line 792 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 795 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 0);
#line 792 "prog_type.m"
          }
#line 792 "prog_type.m"
      }
#line 798 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 797 "prog_type.m"
      parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 798 "prog_type.m"
    else
#line 805 "prog_type.m"
      {
#line 799 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 799 "prog_type.m"
        MR_String parse_tree__prog_type__V_10_10;
#line 799 "prog_type.m"
        MR_Word parse_tree__prog_type__ModuleName_11;
#line 799 "prog_type.m"
        MR_String parse_tree__prog_type__TypeName_12;
#line 799 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17;

#line 799 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 799 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 799 "prog_type.m"
          {
#line 799 "prog_type.m"
            parse_tree__prog_type__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 799 "prog_type.m"
            parse_tree__prog_type__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 800 "prog_type.m"
            parse_tree__prog_type__V_10_10 = (MR_String) "store";
#line 800 "prog_type.m"
            parse_tree__prog_type__V_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_3[2];
#line 800 "prog_type.m"
            {
#line 800 "prog_type.m"
              parse_tree__prog_type__V_17_17 = mdbcomp__prim_data__mercury_std_lib_module_name_1_f_0(parse_tree__prog_type__V_9_9);
            }
#line 800 "prog_type.m"
            {
#line 800 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_11, parse_tree__prog_type__V_17_17);
            }
#line 799 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 799 "prog_type.m"
              {
#line 801 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_12, (MR_String) "store") == 0);
#line 799 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 802 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 1);
#line 799 "prog_type.m"
              }
#line 799 "prog_type.m"
          }
#line 805 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 804 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 805 "prog_type.m"
        else
#line 806 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 1;
#line 805 "prog_type.m"
      }
#line 789 "prog_type.m"
    return parse_tree__prog_type__IsBuiltinDummy_4;
#line 789 "prog_type.m"
  }
#line 227 "prog_type.m"
}

#line 216 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
#line 216 "prog_type.m"
{
#line 778 "prog_type.m"
  {
#line 778 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__1_1;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_8_8;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_22_22;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_25_25;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_26_26;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_27_27;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_28_28;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_31_31;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_34_34;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_39_39;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_40_40;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_43_43;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_44_44;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_45_45;
#line 778 "prog_type.m"
    MR_Word parse_tree__prog_type__V_46_46;

#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      parse_tree__prog_type__V_4_4 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      parse_tree__prog_type__V_3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 0) = ((MR_Box) (parse_tree__prog_type__V_4_4));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 1) = ((MR_Box) ((MR_String) "int"));
#line 779 "prog_type.m"
    }
#line 779 "prog_type.m"
    {
#line 779 "prog_type.m"
      parse_tree__prog_type__V_2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 0) = ((MR_Box) (parse_tree__prog_type__V_3_3));
#line 779 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 1) = ((MR_Box) ((MR_Integer) 0));
#line 779 "prog_type.m"
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      parse_tree__prog_type__V_10_10 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      parse_tree__prog_type__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 0) = ((MR_Box) (parse_tree__prog_type__V_10_10));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 1) = ((MR_Box) ((MR_String) "string"));
#line 780 "prog_type.m"
    }
#line 780 "prog_type.m"
    {
#line 780 "prog_type.m"
      parse_tree__prog_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 0) = ((MR_Box) (parse_tree__prog_type__V_9_9));
#line 780 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 780 "prog_type.m"
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__V_16_16 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__V_16_16));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) ((MR_String) "character"));
#line 781 "prog_type.m"
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 0) = ((MR_Box) (parse_tree__prog_type__V_15_15));
#line 781 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 781 "prog_type.m"
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      parse_tree__prog_type__V_22_22 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      parse_tree__prog_type__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 0) = ((MR_Box) (parse_tree__prog_type__V_22_22));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 1) = ((MR_Box) ((MR_String) "float"));
#line 782 "prog_type.m"
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      parse_tree__prog_type__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 0) = ((MR_Box) (parse_tree__prog_type__V_21_21));
#line 782 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 782 "prog_type.m"
    }
#line 783 "prog_type.m"
    {
#line 783 "prog_type.m"
      parse_tree__prog_type__V_28_28 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 783 "prog_type.m"
    {
#line 783 "prog_type.m"
      parse_tree__prog_type__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 1) = ((MR_Box) ((MR_String) "pred"));
#line 783 "prog_type.m"
    }
#line 783 "prog_type.m"
    {
#line 783 "prog_type.m"
      parse_tree__prog_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 0) = ((MR_Box) (parse_tree__prog_type__V_27_27));
#line 783 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 783 "prog_type.m"
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_34_34 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 0) = ((MR_Box) (parse_tree__prog_type__V_34_34));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 1) = ((MR_Box) ((MR_String) "func"));
#line 784 "prog_type.m"
    }
#line 784 "prog_type.m"
    {
#line 784 "prog_type.m"
      parse_tree__prog_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 0) = ((MR_Box) (parse_tree__prog_type__V_33_33));
#line 784 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 784 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_40_40 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 0) = ((MR_Box) (parse_tree__prog_type__V_40_40));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 1) = ((MR_Box) ((MR_String) "void"));
#line 785 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 0) = ((MR_Box) (parse_tree__prog_type__V_39_39));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 785 "prog_type.m"
    }
#line 786 "prog_type.m"
    {
#line 786 "prog_type.m"
      parse_tree__prog_type__V_46_46 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 786 "prog_type.m"
    {
#line 786 "prog_type.m"
      parse_tree__prog_type__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 0) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 786 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 1) = ((MR_Box) ((MR_String) "tuple"));
#line 786 "prog_type.m"
    }
#line 787 "prog_type.m"
    {
#line 787 "prog_type.m"
      parse_tree__prog_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 787 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 787 "prog_type.m"
    }
#line 785 "prog_type.m"
    {
#line 785 "prog_type.m"
      parse_tree__prog_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 0) = ((MR_Box) (parse_tree__prog_type__V_44_44));
#line 785 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_type.m"
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
#line 778 "prog_type.m"
    return parse_tree__prog_type__HeadVar__1_1;
#line 778 "prog_type.m"
  }
#line 216 "prog_type.m"
}

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 763 "prog_type.m"
{
#line 763 "prog_type.m"
  {
#line 763 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 763 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 763 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 763 "prog_type.m"
  }
#line 763 "prog_type.m"
}

#line 208 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0(
#line 208 "prog_type.m"
  MR_Word parse_tree__prog_type__Tvars_4,
#line 208 "prog_type.m"
  MR_Word parse_tree__prog_type__Constraints_5,
#line 208 "prog_type.m"
  MR_Word * parse_tree__prog_type__Unconstrained_6)
#line 208 "prog_type.m"
{
#line 769 "prog_type.m"
  {
#line 769 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 769 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9;
#line 769 "prog_type.m"
    MR_Word parse_tree__prog_type__ConstrainedTvars_7;
#line 769 "prog_type.m"
    MR_Word parse_tree__prog_type__Unconstrained0_8;
#line 769 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_12;

#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[5], parse_tree__prog_type__Constraints_5, &parse_tree__prog_type__TVarsList_12);
    }
#line 764 "prog_type.m"
    {
#line 764 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_12, &parse_tree__prog_type__ConstrainedTvars_7);
    }
#line 9195 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      mercury__list__delete_elems_3_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Tvars_4, parse_tree__prog_type__ConstrainedTvars_7, &parse_tree__prog_type__Unconstrained0_8);
    }
#line 772 "prog_type.m"
    {
#line 772 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Unconstrained0_8, parse_tree__prog_type__Unconstrained_6);
#line 772 "prog_type.m"
      return;
    }
#line 769 "prog_type.m"
  }
#line 208 "prog_type.m"
}

#line 206 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__constraint_get_tvars_2_p_0(
#line 206 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 206 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_5)
#line 206 "prog_type.m"
{
#line 766 "prog_type.m"
  {
#line 766 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 766 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_11;
#line 766 "prog_type.m"
    MR_Word parse_tree__prog_type__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 766 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_8;
#line 766 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_9;
#line 766 "prog_type.m"
    MR_Word parse_tree__prog_type___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 644 "prog_type.m"
    {
#line 644 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_8);
    }
#line 9243 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 645 "prog_type.m"
    {
#line 645 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__RevTVars_8, &parse_tree__prog_type__TVarsDups_9);
    }
#line 646 "prog_type.m"
    {
#line 646 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__TVarsDups_9, parse_tree__prog_type__TVars_5);
#line 646 "prog_type.m"
      return;
    }
#line 766 "prog_type.m"
  }
#line 206 "prog_type.m"
}

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 763 "prog_type.m"
{
#line 763 "prog_type.m"
  {
#line 763 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 763 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 763 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 763 "prog_type.m"
  }
#line 763 "prog_type.m"
}

#line 201 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0(
#line 201 "prog_type.m"
  MR_Word parse_tree__prog_type__Constraints_3,
#line 201 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 201 "prog_type.m"
{
#line 762 "prog_type.m"
  {
#line 762 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 762 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_5;

#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[4], parse_tree__prog_type__Constraints_3, &parse_tree__prog_type__TVarsList_5);
    }
#line 764 "prog_type.m"
    {
#line 764 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_5, parse_tree__prog_type__TVars_4);
#line 764 "prog_type.m"
      return;
    }
#line 762 "prog_type.m"
  }
#line 201 "prog_type.m"
}

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 763 "prog_type.m"
{
#line 763 "prog_type.m"
  {
#line 763 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 763 "prog_type.m"
    MR_Word parse_tree__prog_type__conv1_TVars_5;

#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv1_TVars_5);
    }
#line 763 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv1_TVars_5));
#line 763 "prog_type.m"
  }
#line 763 "prog_type.m"
}

#line 763 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 763 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 763 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 763 "prog_type.m"
{
#line 763 "prog_type.m"
  {
#line 763 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 763 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 763 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 763 "prog_type.m"
  }
#line 763 "prog_type.m"
}

#line 196 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(
#line 196 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 196 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_5)
#line 196 "prog_type.m"
{
#line 757 "prog_type.m"
  {
#line 757 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 757 "prog_type.m"
    MR_Word parse_tree__prog_type__Univ_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "prog_type.m"
    MR_Word parse_tree__prog_type__Exist_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 757 "prog_type.m"
    MR_Word parse_tree__prog_type__UnivTVars_6;
#line 757 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistTVars_7;
#line 757 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_11;
#line 757 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_20;

#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[2], parse_tree__prog_type__Univ_3, &parse_tree__prog_type__TVarsList_11);
    }
#line 764 "prog_type.m"
    {
#line 764 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_11, &parse_tree__prog_type__UnivTVars_6);
    }
#line 763 "prog_type.m"
    {
#line 763 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[3], parse_tree__prog_type__Exist_4, &parse_tree__prog_type__TVarsList_20);
    }
#line 764 "prog_type.m"
    {
#line 764 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_20, &parse_tree__prog_type__ExistTVars_7);
    }
#line 760 "prog_type.m"
    {
#line 760 "prog_type.m"
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__UnivTVars_6, parse_tree__prog_type__ExistTVars_7, parse_tree__prog_type__TVars_5);
#line 760 "prog_type.m"
      return;
    }
#line 757 "prog_type.m"
  }
#line 196 "prog_type.m"
}

#line 753 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 753 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 753 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 753 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 753 "prog_type.m"
{
#line 753 "prog_type.m"
  {
#line 753 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 753 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_HeadVar__2_2;

#line 753 "prog_type.m"
    {
#line 753 "prog_type.m"
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_HeadVar__2_2);
    }
#line 753 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
#line 753 "prog_type.m"
  }
#line 753 "prog_type.m"
}

#line 191 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(
#line 191 "prog_type.m"
  MR_Word parse_tree__prog_type__Types0_3,
#line 191 "prog_type.m"
  MR_Word * parse_tree__prog_type__Types_4)
#line 191 "prog_type.m"
{
#line 752 "prog_type.m"
  {
#line 752 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 752 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 753 "prog_type.m"
    {
#line 753 "prog_type.m"
      mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_8, parse_tree__prog_type__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_type_scalar_common_2[1], parse_tree__prog_type__Types0_3, parse_tree__prog_type__Types_4);
#line 753 "prog_type.m"
      return;
    }
#line 752 "prog_type.m"
  }
#line 191 "prog_type.m"
}

#line 189 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(
#line 189 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 189 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 189 "prog_type.m"
{
#line 715 "prog_type.m"
  {
#line 715 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 715 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 728 "prog_type.m"
      *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 715 "prog_type.m"
    else
#line 715 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 718 "prog_type.m"
        {
#line 718 "prog_type.m"
          MR_Word parse_tree__prog_type__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 718 "prog_type.m"
          MR_Word parse_tree__prog_type__Args0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 718 "prog_type.m"
          MR_Word parse_tree__prog_type__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 718 "prog_type.m"
          MR_Word parse_tree__prog_type__Name_8;
#line 718 "prog_type.m"
          MR_Word parse_tree__prog_type__Args_9;
#line 724 "prog_type.m"
          MR_String parse_tree__prog_type__Name1_11;
#line 720 "prog_type.m"
          MR_Word parse_tree__prog_type__Module_10;
#line 720 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 720 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 720 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 720 "prog_type.m"
            {
#line 720 "prog_type.m"
              parse_tree__prog_type__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 0)));
#line 720 "prog_type.m"
              parse_tree__prog_type__Name1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 1)));
#line 721 "prog_type.m"
              {
#line 721 "prog_type.m"
                parse_tree__prog_type__V_31_31 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
              }
#line 721 "prog_type.m"
              {
#line 721 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_type__Module_10, parse_tree__prog_type__V_31_31);
              }
#line 720 "prog_type.m"
            }
#line 724 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 723 "prog_type.m"
            {
#line 723 "prog_type.m"
              parse_tree__prog_type__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 723 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__Name_8, 0) = ((MR_Box) (parse_tree__prog_type__Name1_11));
#line 723 "prog_type.m"
            }
#line 724 "prog_type.m"
          else
#line 725 "prog_type.m"
            parse_tree__prog_type__Name_8 = parse_tree__prog_type__Name0_5;
#line 727 "prog_type.m"
          {
#line 727 "prog_type.m"
            parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_6, &parse_tree__prog_type__Args_9);
          }
#line 718 "prog_type.m"
          {
#line 718 "prog_type.m"
            MR_Word base;
#line 718 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_type.m"
            *parse_tree__prog_type__HeadVar__2_2 = base;
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_9));
#line 718 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_7));
#line 718 "prog_type.m"
          }
#line 718 "prog_type.m"
        }
#line 715 "prog_type.m"
      else
#line 715 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 715 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 715 "prog_type.m"
        else
#line 715 "prog_type.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 746 "prog_type.m"
            {
#line 746 "prog_type.m"
              MR_Word parse_tree__prog_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 746 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 746 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 746 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_27;

#line 747 "prog_type.m"
              {
#line 747 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_25, &parse_tree__prog_type__Args_27);
              }
#line 746 "prog_type.m"
              {
#line 746 "prog_type.m"
                MR_Word base;
#line 746 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 746 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 746 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 746 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_24));
#line 746 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Args_27));
#line 746 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Kind_26));
#line 746 "prog_type.m"
              }
#line 746 "prog_type.m"
            }
#line 715 "prog_type.m"
          else
#line 715 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 732 "prog_type.m"
              {
#line 732 "prog_type.m"
                MR_Word parse_tree__prog_type__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 732 "prog_type.m"
                MR_Word parse_tree__prog_type__MaybeRet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 732 "prog_type.m"
                MR_Word parse_tree__prog_type__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 732 "prog_type.m"
                MR_Word parse_tree__prog_type__Args_17;
#line 732 "prog_type.m"
                MR_Word parse_tree__prog_type__MaybeRet_18;

#line 733 "prog_type.m"
                {
#line 733 "prog_type.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_13, &parse_tree__prog_type__Args_17);
                }
#line 738 "prog_type.m"
                if ((parse_tree__prog_type__MaybeRet0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "prog_type.m"
                  parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "prog_type.m"
                else
#line 735 "prog_type.m"
                  {
#line 735 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet0_14, (MR_Integer) 0)));
#line 735 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_20;

#line 736 "prog_type.m"
                    {
#line 736 "prog_type.m"
                      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Ret0_19, &parse_tree__prog_type__Ret_20);
                    }
#line 737 "prog_type.m"
                    {
#line 737 "prog_type.m"
                      parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_18, 0) = ((MR_Box) (parse_tree__prog_type__Ret_20));
#line 737 "prog_type.m"
                    }
#line 735 "prog_type.m"
                  }
#line 732 "prog_type.m"
                {
#line 732 "prog_type.m"
                  MR_Word base;
#line 732 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 732 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 732 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 732 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_17));
#line 732 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__MaybeRet_18));
#line 732 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_15));
#line 732 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 732 "prog_type.m"
                }
#line 732 "prog_type.m"
              }
#line 715 "prog_type.m"
            else
#line 715 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 749 "prog_type.m"
                {
#line 749 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 749 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type_30;

#line 750 "prog_type.m"
                  {
#line 750 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Type0_28, &parse_tree__prog_type__Type_30);
                  }
#line 749 "prog_type.m"
                  {
#line 749 "prog_type.m"
                    MR_Word base;
#line 749 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 749 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__2_2 = base;
#line 749 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 749 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Type_30));
#line 749 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_29));
#line 749 "prog_type.m"
                  }
#line 749 "prog_type.m"
                }
#line 715 "prog_type.m"
              else
#line 743 "prog_type.m"
                {
#line 743 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 743 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 743 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_23;

#line 744 "prog_type.m"
                  {
#line 744 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_21, &parse_tree__prog_type__Args_23);
                  }
#line 743 "prog_type.m"
                  {
#line 743 "prog_type.m"
                    MR_Word base;
#line 743 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__2_2 = base;
#line 743 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 743 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_23));
#line 743 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_22));
#line 743 "prog_type.m"
                  }
#line 743 "prog_type.m"
                }
#line 715 "prog_type.m"
  }
#line 189 "prog_type.m"
}

#line 183 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_func_type_5_p_0(
#line 183 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_6,
#line 183 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_8,
#line 183 "prog_type.m"
  MR_Word parse_tree__prog_type__RetType_9,
#line 183 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_10)
#line 183 "prog_type.m"
{
#line 712 "prog_type.m"
  {
#line 712 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 712 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 713 "prog_type.m"
    {
#line 713 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__RetType_9));
#line 713 "prog_type.m"
    }
#line 713 "prog_type.m"
    {
#line 713 "prog_type.m"
      MR_Word base;
#line 713 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_type.m"
      *parse_tree__prog_type__Type_10 = base;
#line 713 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 713 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_8));
#line 713 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 713 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 713 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 713 "prog_type.m"
    }
#line 712 "prog_type.m"
  }
#line 183 "prog_type.m"
}

#line 180 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(
#line 180 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_5,
#line 180 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_7,
#line 180 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_8)
#line 180 "prog_type.m"
{
#line 708 "prog_type.m"
  {
#line 708 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 709 "prog_type.m"
    {
#line 709 "prog_type.m"
      MR_Word base;
#line 709 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 709 "prog_type.m"
      *parse_tree__prog_type__Type_8 = base;
#line 709 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 709 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_7));
#line 709 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_5));
#line 709 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 709 "prog_type.m"
    }
#line 708 "prog_type.m"
  }
#line 180 "prog_type.m"
}

#line 177 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_higher_order_type_5_p_0(
#line 177 "prog_type.m"
  MR_Word parse_tree__prog_type__Purity_6,
#line 177 "prog_type.m"
  MR_Word parse_tree__prog_type__PredOrFunc_7,
#line 177 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgTypes_9,
#line 177 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_10)
#line 177 "prog_type.m"
{
#line 699 "prog_type.m"
  {
#line 699 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 699 "prog_type.m"
    if ((parse_tree__prog_type__PredOrFunc_7 == (MR_Integer) 1))
#line 702 "prog_type.m"
      {
#line 702 "prog_type.m"
        MR_Word parse_tree__prog_type__FuncArgTypes_11;
#line 702 "prog_type.m"
        MR_Word parse_tree__prog_type__FuncRetType_12;
#line 702 "prog_type.m"
        MR_Word parse_tree__prog_type__V_19_19;
#line 703 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_FuncRetType_12;

#line 703 "prog_type.m"
        {
#line 703 "prog_type.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_9, &parse_tree__prog_type__FuncArgTypes_11, &parse_tree__prog_type__conv0_FuncRetType_12);
        }
#line 703 "prog_type.m"
        parse_tree__prog_type__FuncRetType_12 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_12);
#line 713 "prog_type.m"
        {
#line 713 "prog_type.m"
          parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_12));
#line 713 "prog_type.m"
        }
#line 713 "prog_type.m"
        {
#line 713 "prog_type.m"
          MR_Word base;
#line 713 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_type.m"
          *parse_tree__prog_type__Type_10 = base;
#line 713 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 713 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_11));
#line 713 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 713 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 713 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 713 "prog_type.m"
        }
#line 702 "prog_type.m"
      }
#line 699 "prog_type.m"
    else
#line 708 "prog_type.m"
      {
#line 709 "prog_type.m"
        {
#line 709 "prog_type.m"
          MR_Word base;
#line 709 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 709 "prog_type.m"
          *parse_tree__prog_type__Type_10 = base;
#line 709 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 709 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_9));
#line 709 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 709 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 709 "prog_type.m"
        }
#line 708 "prog_type.m"
      }
#line 699 "prog_type.m"
  }
#line 177 "prog_type.m"
}

#line 174 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__construct_type_3_p_0(
#line 174 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_4,
#line 174 "prog_type.m"
  MR_Word parse_tree__prog_type__Args_5,
#line 174 "prog_type.m"
  MR_Word * parse_tree__prog_type__Type_6)
#line 174 "prog_type.m"
{
#line 682 "prog_type.m"
  {
#line 682 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 682 "prog_type.m"
    MR_Word parse_tree__prog_type__BuiltinType_8;
#line 678 "prog_type.m"
    MR_String parse_tree__prog_type__Name_7;
#line 678 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 678 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 678 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == (MR_Integer) 0);
#line 678 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 678 "prog_type.m"
      {
#line 678 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 678 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 678 "prog_type.m"
          {
#line 678 "prog_type.m"
            parse_tree__prog_type__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, (MR_Integer) 0)));
#line 679 "prog_type.m"
            {
#line 679 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_type__BuiltinType_8, parse_tree__prog_type__Name_7);
            }
#line 678 "prog_type.m"
          }
#line 678 "prog_type.m"
      }
#line 682 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 681 "prog_type.m"
      {
#line 681 "prog_type.m"
        MR_Word base;
#line 681 "prog_type.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 681 "prog_type.m"
        *parse_tree__prog_type__Type_6 = base;
#line 681 "prog_type.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_type__BuiltinType_8));
#line 681 "prog_type.m"
      }
#line 682 "prog_type.m"
    else
#line 686 "prog_type.m"
      {
#line 686 "prog_type.m"
        MR_Word parse_tree__prog_type__Purity_9;
#line 686 "prog_type.m"
        MR_Word parse_tree__prog_type__PredOrFunc_10;

#line 683 "prog_type.m"
        {
#line 683 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type__Purity_9, &parse_tree__prog_type__PredOrFunc_10);
        }
#line 686 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 699 "prog_type.m"
          if ((parse_tree__prog_type__PredOrFunc_10 == (MR_Integer) 1))
#line 702 "prog_type.m"
            {
#line 702 "prog_type.m"
              MR_Word parse_tree__prog_type__FuncArgTypes_23;
#line 702 "prog_type.m"
              MR_Word parse_tree__prog_type__FuncRetType_24;
#line 702 "prog_type.m"
              MR_Word parse_tree__prog_type__V_31_31;
#line 703 "prog_type.m"
              MR_Box parse_tree__prog_type__conv0_FuncRetType_24;

#line 703 "prog_type.m"
              {
#line 703 "prog_type.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Args_5, &parse_tree__prog_type__FuncArgTypes_23, &parse_tree__prog_type__conv0_FuncRetType_24);
              }
#line 703 "prog_type.m"
              parse_tree__prog_type__FuncRetType_24 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_24);
#line 713 "prog_type.m"
              {
#line 713 "prog_type.m"
                parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_24));
#line 713 "prog_type.m"
              }
#line 713 "prog_type.m"
              {
#line 713 "prog_type.m"
                MR_Word base;
#line 713 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_type.m"
                *parse_tree__prog_type__Type_6 = base;
#line 713 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 713 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_23));
#line 713 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 713 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 713 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 713 "prog_type.m"
              }
#line 702 "prog_type.m"
            }
#line 699 "prog_type.m"
          else
#line 708 "prog_type.m"
            {
#line 709 "prog_type.m"
              {
#line 709 "prog_type.m"
                MR_Word base;
#line 709 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 709 "prog_type.m"
                *parse_tree__prog_type__Type_6 = base;
#line 709 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 709 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 709 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 709 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 709 "prog_type.m"
              }
#line 708 "prog_type.m"
            }
#line 686 "prog_type.m"
        else
#line 691 "prog_type.m"
          {
#line 603 "prog_type.m"
            MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 603 "prog_type.m"
            MR_String parse_tree__prog_type__V_39_39;
#line 603 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 603 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 603 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 603 "prog_type.m"
              {
#line 603 "prog_type.m"
                parse_tree__prog_type__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 603 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_39_39, (MR_String) "{}") == 0);
#line 603 "prog_type.m"
              }
#line 691 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 690 "prog_type.m"
              {
#line 690 "prog_type.m"
                {
#line 690 "prog_type.m"
                  MR_Word base;
#line 690 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 690 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 690 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 690 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 690 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "prog_type.m"
                }
#line 690 "prog_type.m"
              }
#line 691 "prog_type.m"
            else
#line 692 "prog_type.m"
              {
#line 692 "prog_type.m"
                MR_Word parse_tree__prog_type__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 692 "prog_type.m"
                MR_Integer parse_tree__prog_type__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 694 "prog_type.m"
                {
#line 694 "prog_type.m"
                  MR_Word base;
#line 694 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 694 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 694 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_12));
#line 694 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 694 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "prog_type.m"
                }
#line 692 "prog_type.m"
              }
#line 691 "prog_type.m"
          }
#line 686 "prog_type.m"
      }
#line 682 "prog_type.m"
  }
#line 174 "prog_type.m"
}

#line 169 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_contains_var_2_p_0(
#line 169 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 169 "prog_type.m"
  MR_Word * parse_tree__prog_type__Var_2,
#line 169 "prog_type.m"
  MR_Cont parse_tree__prog_type__cont,
#line 169 "prog_type.m"
  void * parse_tree__prog_type__cont_env_ptr)
#line 169 "prog_type.m"
{
#line 671 "prog_type.m"
  while (MR_TRUE)
#line 671 "prog_type.m"
    {
#line 671 "prog_type.m"
      /* tailcall optimized into a loop */
#line 671 "prog_type.m"
      {
#line 671 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 671 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 671 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10;

#line 671 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 671 "prog_type.m"
          {
#line 671 "prog_type.m"
            parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 671 "prog_type.m"
            parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "prog_type.m"
            {
#line 672 "prog_type.m"
              parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_type__V_10_10, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
            }
#line 674 "prog_type.m"
            {
#line 674 "prog_type.m"
              /* direct tailcall eliminated */
#line 674 "prog_type.m"
              {
#line 674 "prog_type.m"
                MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__V_9_9;

#line 674 "prog_type.m"
                parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 674 "prog_type.m"
              }
#line 674 "prog_type.m"
              continue;
#line 674 "prog_type.m"
            }
#line 671 "prog_type.m"
          }
#line 671 "prog_type.m"
      }
#line 671 "prog_type.m"
      break;
#line 671 "prog_type.m"
    }
#line 169 "prog_type.m"
}

#line 165 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_contains_var_2_p_0(
#line 165 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 165 "prog_type.m"
  MR_Word * parse_tree__prog_type__Var_2,
#line 165 "prog_type.m"
  MR_Cont parse_tree__prog_type__cont,
#line 165 "prog_type.m"
  void * parse_tree__prog_type__cont_env_ptr)
#line 165 "prog_type.m"
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
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 657 "prog_type.m"
          {
#line 657 "prog_type.m"
            MR_Word parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 657 "prog_type.m"
            MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 657 "prog_type.m"
            MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 658 "prog_type.m"
            {
#line 658 "prog_type.m"
              parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_6, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 658 "prog_type.m"
              return;
            }
#line 657 "prog_type.m"
          }
#line 656 "prog_type.m"
        else
#line 656 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 656 "prog_type.m"
            {
#line 656 "prog_type.m"
              MR_Word parse_tree__prog_type__V_4_4;

#line 656 "prog_type.m"
              *parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 656 "prog_type.m"
              parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 656 "prog_type.m"
              {
#line 656 "prog_type.m"
                parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
#line 656 "prog_type.m"
                return;
              }
#line 656 "prog_type.m"
            }
#line 656 "prog_type.m"
          else
#line 656 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 656 "prog_type.m"
              {
#line 656 "prog_type.m"
                MR_Word parse_tree__prog_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 656 "prog_type.m"
                MR_Word parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "prog_type.m"
                MR_Word parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 665 "prog_type.m"
                *parse_tree__prog_type__Var_2 = parse_tree__prog_type__V_35_35;
#line 665 "prog_type.m"
                {
#line 665 "prog_type.m"
                  parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
                }
#line 667 "prog_type.m"
                {
#line 667 "prog_type.m"
                  parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_34_34, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 667 "prog_type.m"
                  return;
                }
#line 656 "prog_type.m"
              }
#line 656 "prog_type.m"
            else
#line 656 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 656 "prog_type.m"
                {
#line 656 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 656 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 659 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 660 "prog_type.m"
                  {
#line 660 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_39_39, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                  }
#line 661 "prog_type.m"
                  {
#line 661 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_15;

#line 661 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 661 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 661 "prog_type.m"
                      {
#line 661 "prog_type.m"
                        parse_tree__prog_type__Ret_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 662 "prog_type.m"
                        /* direct tailcall eliminated */
#line 662 "prog_type.m"
                        {
#line 662 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_15;

#line 662 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 662 "prog_type.m"
                        }
#line 662 "prog_type.m"
                        continue;
#line 661 "prog_type.m"
                      }
#line 661 "prog_type.m"
                  }
#line 656 "prog_type.m"
                }
#line 656 "prog_type.m"
              else
#line 656 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 668 "prog_type.m"
                  {
#line 668 "prog_type.m"
                    MR_Word parse_tree__prog_type__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 669 "prog_type.m"
                    /* direct tailcall eliminated */
#line 669 "prog_type.m"
                    {
#line 669 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_30;

#line 669 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 669 "prog_type.m"
                    }
#line 669 "prog_type.m"
                    continue;
#line 668 "prog_type.m"
                  }
#line 656 "prog_type.m"
                else
#line 656 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 663 "prog_type.m"
                    {
#line 663 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 664 "prog_type.m"
                      {
#line 664 "prog_type.m"
                        parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 664 "prog_type.m"
                        return;
                      }
#line 663 "prog_type.m"
                    }
#line 656 "prog_type.m"
                  else
#line 656 "prog_type.m"
                    {
#line 656 "prog_type.m"
                    }
#line 656 "prog_type.m"
      }
#line 656 "prog_type.m"
      break;
#line 656 "prog_type.m"
    }
#line 165 "prog_type.m"
}

#line 161 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_vars_list_2_p_0(
#line 161 "prog_type.m"
  MR_Word parse_tree__prog_type__Types_3,
#line 161 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 161 "prog_type.m"
{
#line 643 "prog_type.m"
  {
#line 643 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 643 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 643 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 643 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 644 "prog_type.m"
    {
#line 644 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Types_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 10521 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 645 "prog_type.m"
    {
#line 645 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 646 "prog_type.m"
    {
#line 646 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 646 "prog_type.m"
      return;
    }
#line 643 "prog_type.m"
  }
#line 161 "prog_type.m"
}

#line 156 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_vars_2_p_0(
#line 156 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 156 "prog_type.m"
  MR_Word * parse_tree__prog_type__TVars_4)
#line 156 "prog_type.m"
{
#line 616 "prog_type.m"
  {
#line 616 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 616 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 616 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 616 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 617 "prog_type.m"
    {
#line 617 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 10565 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 618 "prog_type.m"
    {
#line 618 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 619 "prog_type.m"
    {
#line 619 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 619 "prog_type.m"
      return;
    }
#line 616 "prog_type.m"
  }
#line 156 "prog_type.m"
}

#line 150 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__var_list_to_type_list_3_p_0(
#line 150 "prog_type.m"
  MR_Word parse_tree__prog_type__KindMap_1,
#line 150 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 150 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 150 "prog_type.m"
{
#line 610 "prog_type.m"
  {
#line 610 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 610 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "prog_type.m"
    else
#line 611 "prog_type.m"
      {
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_8;
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_9;
#line 611 "prog_type.m"
        MR_Word parse_tree__prog_type__Kind_10;

#line 612 "prog_type.m"
        {
#line 612 "prog_type.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Var_6, &parse_tree__prog_type__Kind_10);
        }
#line 613 "prog_type.m"
        {
#line 613 "prog_type.m"
          parse_tree__prog_type__Type_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 0) = ((MR_Box) (parse_tree__prog_type__Var_6));
#line 613 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 1) = ((MR_Box) (parse_tree__prog_type__Kind_10));
#line 613 "prog_type.m"
        }
#line 614 "prog_type.m"
        {
#line 614 "prog_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Vars_7, &parse_tree__prog_type__Types_9);
        }
#line 611 "prog_type.m"
        {
#line 611 "prog_type.m"
          MR_Word base;
#line 611 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 611 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Type_8));
#line 611 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Types_9));
#line 611 "prog_type.m"
        }
#line 611 "prog_type.m"
      }
#line 610 "prog_type.m"
  }
#line 150 "prog_type.m"
}

#line 146 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_to_var_list_2_p_0(
#line 146 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 146 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__2_2)
#line 146 "prog_type.m"
{
#line 605 "prog_type.m"
  {
#line 605 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 605 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "prog_type.m"
      {
#line 605 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 605 "prog_type.m"
      }
#line 605 "prog_type.m"
    else
#line 606 "prog_type.m"
      {
#line 606 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 606 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_5;
#line 606 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_6;
#line 607 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7;

#line 607 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Type_3)) == (MR_mktag((MR_Integer) 0)));
#line 607 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 607 "prog_type.m"
          {
#line 607 "prog_type.m"
            parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 0)));
#line 607 "prog_type.m"
            parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 1)));
#line 608 "prog_type.m"
            {
#line 608 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(parse_tree__prog_type__Types_4, &parse_tree__prog_type__Vars_6);
            }
#line 606 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 606 "prog_type.m"
              {
#line 606 "prog_type.m"
                {
#line 606 "prog_type.m"
                  MR_Word base;
#line 606 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 606 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_5));
#line 606 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Vars_6));
#line 606 "prog_type.m"
                }
#line 606 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 606 "prog_type.m"
              }
#line 607 "prog_type.m"
          }
#line 606 "prog_type.m"
      }
#line 605 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 605 "prog_type.m"
  }
#line 146 "prog_type.m"
}

#line 141 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_tuple_1_p_0(
#line 141 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1)
#line 141 "prog_type.m"
{
#line 603 "prog_type.m"
  {
#line 603 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 603 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 603 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 603 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 603 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 603 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 603 "prog_type.m"
      {
#line 603 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 603 "prog_type.m"
        parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "{}") == 0);
#line 603 "prog_type.m"
      }
#line 603 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 603 "prog_type.m"
  }
#line 141 "prog_type.m"
}

#line 136 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(
#line 136 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeCtor_5,
#line 136 "prog_type.m"
  MR_Word * parse_tree__prog_type__Purity_6,
#line 136 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredOrFunc_7)
#line 136 "prog_type.m"
{
#line 571 "prog_type.m"
  {
#line 571 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 571 "prog_type.m"
    MR_Word parse_tree__prog_type__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 0)));
#line 571 "prog_type.m"
    MR_String parse_tree__prog_type__PorFStr_11;
#line 572 "prog_type.m"
    MR_Integer parse_tree__prog_type___Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 1)));

#line 587 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__SymName_9)) == (MR_mktag((MR_Integer) 1))))
#line 587 "prog_type.m"
      {
#line 587 "prog_type.m"
        MR_String parse_tree__prog_type__Qualifier_16;
#line 587 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));

#line 587 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 1)));
#line 587 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 587 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 587 "prog_type.m"
          {
#line 587 "prog_type.m"
            parse_tree__prog_type__Qualifier_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 592 "prog_type.m"
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "impure") == 0))
#line 589 "prog_type.m"
              {
#line 590 "prog_type.m"
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 2;
#line 591 "prog_type.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 589 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 589 "prog_type.m"
              }
#line 592 "prog_type.m"
            else
#line 592 "prog_type.m"
              if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "semipure") == 0))
#line 593 "prog_type.m"
                {
#line 594 "prog_type.m"
                  *parse_tree__prog_type__Purity_6 = (MR_Integer) 1;
#line 595 "prog_type.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 593 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 593 "prog_type.m"
                }
#line 592 "prog_type.m"
              else
#line 592 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_FALSE;
#line 587 "prog_type.m"
          }
#line 587 "prog_type.m"
      }
#line 587 "prog_type.m"
    else
#line 598 "prog_type.m"
      {
#line 598 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));
#line 599 "prog_type.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 600 "prog_type.m"
        *parse_tree__prog_type__Purity_6 = (MR_Integer) 0;
#line 598 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 598 "prog_type.m"
      }
#line 571 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 577 "prog_type.m"
      {
#line 577 "prog_type.m"
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "func") == 0))
#line 579 "prog_type.m"
          {
#line 579 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 1;
#line 579 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 579 "prog_type.m"
          }
#line 577 "prog_type.m"
        else
#line 577 "prog_type.m"
          if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "pred") == 0))
#line 576 "prog_type.m"
            {
#line 576 "prog_type.m"
              *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 0;
#line 576 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 576 "prog_type.m"
            }
#line 577 "prog_type.m"
          else
#line 577 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 577 "prog_type.m"
      }
#line 571 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 571 "prog_type.m"
  }
#line 136 "prog_type.m"
}

#line 131 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_to_ctor_det_2_p_0(
#line 131 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 131 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_4)
#line 131 "prog_type.m"
{
#line 569 "prog_type.m"
  {
#line 569 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 569 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 569 "prog_type.m"
    {
#line 569 "prog_type.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 569 "prog_type.m"
  }
#line 131 "prog_type.m"
}

#line 126 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_2_p_0(
#line 126 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 126 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_4)
#line 126 "prog_type.m"
{
#line 565 "prog_type.m"
  {
#line 565 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 565 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 565 "prog_type.m"
    {
#line 565 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 565 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 565 "prog_type.m"
  }
#line 126 "prog_type.m"
}

#line 120 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(
#line 120 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 120 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 120 "prog_type.m"
  MR_Word * parse_tree__prog_type__Args_6)
#line 120 "prog_type.m"
{
#line 558 "prog_type.m"
  {
#line 558 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 558 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorPrime_7;
#line 558 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsPrime_8;

#line 555 "prog_type.m"
    {
#line 555 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type__TypeCtorPrime_7, &parse_tree__prog_type__ArgsPrime_8);
    }
#line 558 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 556 "prog_type.m"
      {
#line 556 "prog_type.m"
        *parse_tree__prog_type__TypeCtor_5 = parse_tree__prog_type__TypeCtorPrime_7;
#line 557 "prog_type.m"
        *parse_tree__prog_type__Args_6 = parse_tree__prog_type__ArgsPrime_8;
#line 556 "prog_type.m"
      }
#line 558 "prog_type.m"
    else
#line 559 "prog_type.m"
      {
#line 559 "prog_type.m"
        MR_String parse_tree__prog_type__V_11_11;
#line 559 "prog_type.m"
        MR_String parse_tree__prog_type__V_13_13;

#line 560 "prog_type.m"
        {
#line 560 "prog_type.m"
          parse_tree__prog_type__V_13_13 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__Type_4)));
        }
#line 559 "prog_type.m"
        {
#line 559 "prog_type.m"
          parse_tree__prog_type__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", parse_tree__prog_type__V_13_13);
        }
#line 559 "prog_type.m"
        {
#line 559 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", parse_tree__prog_type__V_11_11);
#line 559 "prog_type.m"
          return;
        }
#line 559 "prog_type.m"
      }
#line 558 "prog_type.m"
  }
#line 120 "prog_type.m"
}

#line 114 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_3_p_0(
#line 114 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 114 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 114 "prog_type.m"
  MR_Word * parse_tree__prog_type__Args_6)
#line 114 "prog_type.m"
{
#line 507 "prog_type.m"
  while (MR_TRUE)
#line 507 "prog_type.m"
    {
#line 507 "prog_type.m"
      /* tailcall optimized into a loop */
#line 507 "prog_type.m"
      {
#line 507 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 507 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 2))))
#line 511 "prog_type.m"
          {
#line 511 "prog_type.m"
            MR_Word parse_tree__prog_type__BuiltinType_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 511 "prog_type.m"
            MR_String parse_tree__prog_type__Name_11;
#line 511 "prog_type.m"
            MR_Word parse_tree__prog_type__SymName_33;

#line 512 "prog_type.m"
            {
#line 512 "prog_type.m"
              parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_type__BuiltinType_10, &parse_tree__prog_type__Name_11);
            }
#line 513 "prog_type.m"
            {
#line 513 "prog_type.m"
              parse_tree__prog_type__SymName_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_33, 0) = ((MR_Box) (parse_tree__prog_type__Name_11));
#line 513 "prog_type.m"
            }
#line 515 "prog_type.m"
            *parse_tree__prog_type__Args_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "prog_type.m"
            {
#line 516 "prog_type.m"
              MR_Word base;
#line 516 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 516 "prog_type.m"
              *parse_tree__prog_type__TypeCtor_5 = base;
#line 516 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_33));
#line 516 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 516 "prog_type.m"
            }
#line 511 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 511 "prog_type.m"
          }
#line 507 "prog_type.m"
        else
#line 507 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 1))))
#line 507 "prog_type.m"
            {
#line 507 "prog_type.m"
              MR_Word parse_tree__prog_type__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 507 "prog_type.m"
              MR_Integer parse_tree__prog_type__Arity_9;
#line 507 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8;

#line 507 "prog_type.m"
              *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 507 "prog_type.m"
              parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 508 "prog_type.m"
              {
#line 508 "prog_type.m"
                parse_tree__prog_type__Arity_9 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
              }
#line 509 "prog_type.m"
              {
#line 509 "prog_type.m"
                MR_Word base;
#line 509 "prog_type.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 509 "prog_type.m"
                *parse_tree__prog_type__TypeCtor_5 = base;
#line 509 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_7));
#line 509 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_9));
#line 509 "prog_type.m"
              }
#line 507 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 507 "prog_type.m"
            }
#line 507 "prog_type.m"
          else
#line 507 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 547 "prog_type.m"
              {
#line 548 "prog_type.m"
                {
#line 548 "prog_type.m"
                  mercury__require__sorry_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
                }
#line 547 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 547 "prog_type.m"
              }
#line 507 "prog_type.m"
            else
#line 507 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 518 "prog_type.m"
                {
#line 518 "prog_type.m"
                  MR_Word parse_tree__prog_type__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 518 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 518 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 518 "prog_type.m"
                  MR_Word parse_tree__prog_type__Purity_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 3)));
#line 518 "prog_type.m"
                  MR_String parse_tree__prog_type__PorFStr_17;
#line 518 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName0_18;
#line 518 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName_35;
#line 518 "prog_type.m"
                  MR_Integer parse_tree__prog_type__Arity_36;

#line 519 "prog_type.m"
                  {
#line 519 "prog_type.m"
                    parse_tree__prog_type__Arity_36 = mercury__list__length_1_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12);
                  }
#line 524 "prog_type.m"
                  if ((parse_tree__prog_type__MaybeRet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "prog_type.m"
                    {
#line 526 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "pred";
#line 527 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = parse_tree__prog_type__Args0_12;
#line 525 "prog_type.m"
                    }
#line 524 "prog_type.m"
                  else
#line 521 "prog_type.m"
                    {
#line 521 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 521 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29;

#line 522 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "func";
#line 523 "prog_type.m"
                      {
#line 523 "prog_type.m"
                        parse_tree__prog_type__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 0) = ((MR_Box) (parse_tree__prog_type__Ret_16));
#line 523 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "prog_type.m"
                      }
#line 523 "prog_type.m"
                      {
#line 523 "prog_type.m"
                        *parse_tree__prog_type__Args_6 = mercury__list__append_2_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12, parse_tree__prog_type__V_29_29);
                      }
#line 521 "prog_type.m"
                    }
#line 529 "prog_type.m"
                  {
#line 529 "prog_type.m"
                    parse_tree__prog_type__SymName0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 529 "prog_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName0_18, 0) = ((MR_Box) (parse_tree__prog_type__PorFStr_17));
#line 529 "prog_type.m"
                  }
#line 533 "prog_type.m"
                  if ((parse_tree__prog_type__Purity_14 == (MR_Integer) 2))
#line 537 "prog_type.m"
                    {
#line 538 "prog_type.m"
                      {
#line 538 "prog_type.m"
                        parse_tree__prog_type__SymName_35 = mdbcomp__prim_data__add_outermost_qualifier_2_f_0((MR_String) "impure", parse_tree__prog_type__SymName0_18);
                      }
#line 537 "prog_type.m"
                    }
#line 533 "prog_type.m"
                  else
#line 533 "prog_type.m"
                    if ((parse_tree__prog_type__Purity_14 == (MR_Integer) 0))
#line 532 "prog_type.m"
                      parse_tree__prog_type__SymName_35 = parse_tree__prog_type__SymName0_18;
#line 533 "prog_type.m"
                    else
#line 534 "prog_type.m"
                      {
#line 535 "prog_type.m"
                        {
#line 535 "prog_type.m"
                          parse_tree__prog_type__SymName_35 = mdbcomp__prim_data__add_outermost_qualifier_2_f_0((MR_String) "semipure", parse_tree__prog_type__SymName0_18);
                        }
#line 534 "prog_type.m"
                      }
#line 540 "prog_type.m"
                  {
#line 540 "prog_type.m"
                    MR_Word base;
#line 540 "prog_type.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prog_type.m"
                    *parse_tree__prog_type__TypeCtor_5 = base;
#line 540 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_35));
#line 540 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_36));
#line 540 "prog_type.m"
                  }
#line 518 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 518 "prog_type.m"
                }
#line 507 "prog_type.m"
              else
#line 507 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 550 "prog_type.m"
                  {
#line 550 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 550 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));

#line 551 "prog_type.m"
                    /* direct tailcall eliminated */
#line 551 "prog_type.m"
                    {
#line 551 "prog_type.m"
                      MR_Word parse_tree__prog_type__Type__tmp_copy_4 = parse_tree__prog_type__SubType_23;

#line 551 "prog_type.m"
                      parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type__tmp_copy_4;
#line 551 "prog_type.m"
                    }
#line 551 "prog_type.m"
                    continue;
#line 550 "prog_type.m"
                  }
#line 507 "prog_type.m"
                else
#line 507 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 542 "prog_type.m"
                    {
#line 542 "prog_type.m"
                      MR_Integer parse_tree__prog_type__Arity_38;
#line 542 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_19_19;

#line 542 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 542 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 544 "prog_type.m"
                      {
#line 544 "prog_type.m"
                        parse_tree__prog_type__Arity_38 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
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
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1]));
#line 545 "prog_type.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_38));
#line 545 "prog_type.m"
                      }
#line 542 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 542 "prog_type.m"
                    }
#line 507 "prog_type.m"
                  else
#line 507 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 507 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 507 "prog_type.m"
      }
#line 507 "prog_type.m"
      break;
#line 507 "prog_type.m"
    }
#line 114 "prog_type.m"
}

#line 108 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(
#line 108 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_4,
#line 108 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeCtor_5,
#line 108 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeArgs_6)
#line 108 "prog_type.m"
{
#line 497 "prog_type.m"
  {
#line 497 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 497 "prog_type.m"
    MR_Word parse_tree__prog_type__PredOrFunc_8;
#line 497 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeArgs0_10;
#line 493 "prog_type.m"
    MR_Word parse_tree__prog_type___Purity_7;

#line 493 "prog_type.m"
    {
#line 493 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type___Purity_7, &parse_tree__prog_type__PredOrFunc_8, &parse_tree__prog_type__TypeArgs0_10);
    }
#line 497 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 494 "prog_type.m"
      {
#line 494 "prog_type.m"
        MR_String parse_tree__prog_type__PredOrFuncStr_11;
#line 494 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 494 "prog_type.m"
        *parse_tree__prog_type__TypeArgs_6 = parse_tree__prog_type__TypeArgs0_10;
#line 495 "prog_type.m"
        {
#line 495 "prog_type.m"
          parse_tree__prog_type__PredOrFuncStr_11 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_type__PredOrFunc_8);
        }
#line 496 "prog_type.m"
        {
#line 496 "prog_type.m"
          parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 496 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__PredOrFuncStr_11));
#line 496 "prog_type.m"
        }
#line 496 "prog_type.m"
        {
#line 496 "prog_type.m"
          MR_Word base;
#line 496 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "prog_type.m"
          *parse_tree__prog_type__TypeCtor_5 = base;
#line 496 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 496 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 496 "prog_type.m"
        }
#line 494 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 494 "prog_type.m"
      }
#line 497 "prog_type.m"
    else
#line 501 "prog_type.m"
      {
#line 501 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;
#line 501 "prog_type.m"
        MR_String parse_tree__prog_type__V_16_16;
#line 501 "prog_type.m"
        MR_Integer parse_tree__prog_type__V_17_17;
#line 501 "prog_type.m"
        MR_Word parse_tree__prog_type__V_21_21;
#line 464 "prog_type.m"
        MR_Word parse_tree__prog_type__V_20_20;

#line 464 "prog_type.m"
        {
#line 464 "prog_type.m"
          parse_tree__prog_type__V_21_21 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_4);
        }
#line 464 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 464 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 464 "prog_type.m"
          {
#line 464 "prog_type.m"
            *parse_tree__prog_type__TypeArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 1)));
#line 464 "prog_type.m"
            parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 2)));
#line 500 "prog_type.m"
            parse_tree__prog_type__V_16_16 = (MR_String) "tuple";
#line 500 "prog_type.m"
            parse_tree__prog_type__V_17_17 = (MR_Integer) 0;
#line 500 "prog_type.m"
            parse_tree__prog_type__V_15_15 = (MR_Word) &parse_tree__prog_type_scalar_common_3[0];
#line 500 "prog_type.m"
            *parse_tree__prog_type__TypeCtor_5 = (MR_Word) &parse_tree__prog_type_scalar_common_1[6];
#line 500 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 464 "prog_type.m"
          }
#line 501 "prog_type.m"
      }
#line 497 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 497 "prog_type.m"
  }
#line 108 "prog_type.m"
}

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 484 "prog_type.m"
{
#line 484 "prog_type.m"
  {
#line 484 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 484 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0, 1);
#line 484 "prog_type.m"
  }
#line 484 "prog_type.m"
}

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 484 "prog_type.m"
{
#line 484 "prog_type.m"
  {
#line 484 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 484 "prog_type.m"
    {
#line 488 "prog_type.m"
      MR_Word parse_tree__prog_type__Binding_6;
#line 486 "prog_type.m"
      MR_Box parse_tree__prog_type__conv0_Binding_6;

#line 486 "prog_type.m"
      {
#line 486 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4, ((MR_Box) ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5)), &parse_tree__prog_type__conv0_Binding_6);
      }
#line 486 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 486 "prog_type.m"
        {
#line 486 "prog_type.m"
          parse_tree__prog_type__Binding_6 = ((MR_Word) parse_tree__prog_type__conv0_Binding_6);
#line 486 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 486 "prog_type.m"
        }
#line 488 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 487 "prog_type.m"
        {
#line 487 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Binding_6, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4);
        }
#line 488 "prog_type.m"
      else
#line 489 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 488 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 488 "prog_type.m"
        {
#line 488 "prog_type.m"
          parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(parse_tree__prog_type__env_ptr);
#line 488 "prog_type.m"
          return;
        }
#line 484 "prog_type.m"
    }
#line 484 "prog_type.m"
  }
#line 484 "prog_type.m"
}

#line 484 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 484 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 484 "prog_type.m"
{
#line 484 "prog_type.m"
  {
#line 484 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 484 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0) == 0)
#line 484 "prog_type.m"
      {
#line 485 "prog_type.m"
        {
#line 485 "prog_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5, parse_tree__prog_type__subst_type_is_nonground_2_p_0_2, parse_tree__prog_type__env_ptr);
        }
#line 484 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_FALSE;
#line 484 "prog_type.m"
      }
#line 484 "prog_type.m"
    else
#line 484 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 484 "prog_type.m"
  }
#line 484 "prog_type.m"
}

#line 100 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0(
#line 100 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 100 "prog_type.m"
  MR_Word parse_tree__prog_type__TSubst_4)
#line 100 "prog_type.m"
{
#line 100 "prog_type.m"
  {
#line 100 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s parse_tree__prog_type__env;

#line 100 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3 = parse_tree__prog_type__Type_3;
#line 100 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4 = parse_tree__prog_type__TSubst_4;
#line 484 "prog_type.m"
    {
#line 484 "prog_type.m"
      parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(&parse_tree__prog_type__env);
    }
#line 484 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 100 "prog_type.m"
  }
#line 100 "prog_type.m"
}

#line 95 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__subst_type_is_ground_2_p_0(
#line 95 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 95 "prog_type.m"
  MR_Word parse_tree__prog_type__TSubst_4)
#line 95 "prog_type.m"
{
#line 482 "prog_type.m"
  {
#line 482 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 482 "prog_type.m"
    {
#line 482 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TSubst_4);
    }
#line 482 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 482 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 482 "prog_type.m"
  }
#line 95 "prog_type.m"
}

#line 479 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 479 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 479 "prog_type.m"
{
#line 479 "prog_type.m"
  {
#line 479 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 479 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0, 1);
#line 479 "prog_type.m"
  }
#line 479 "prog_type.m"
}

#line 479 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 479 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 479 "prog_type.m"
{
#line 479 "prog_type.m"
  {
#line 479 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 479 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0) == 0)
#line 479 "prog_type.m"
      {
#line 479 "prog_type.m"
        {
#line 479 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 479 "prog_type.m"
          {
#line 479 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_nonground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 479 "prog_type.m"
        }
#line 479 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
#line 479 "prog_type.m"
      }
#line 479 "prog_type.m"
    else
#line 479 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
#line 479 "prog_type.m"
  }
#line 479 "prog_type.m"
}

#line 91 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0(
#line 91 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 91 "prog_type.m"
{
#line 91 "prog_type.m"
  {
#line 91 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s parse_tree__prog_type__env;

#line 91 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
#line 479 "prog_type.m"
    {
#line 479 "prog_type.m"
      parse_tree__prog_type__type_is_nonground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 479 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 91 "prog_type.m"
  }
#line 91 "prog_type.m"
}

#line 476 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 476 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 476 "prog_type.m"
{
#line 476 "prog_type.m"
  {
#line 476 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 476 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0, 1);
#line 476 "prog_type.m"
  }
#line 476 "prog_type.m"
}

#line 476 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 476 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 476 "prog_type.m"
{
#line 476 "prog_type.m"
  {
#line 476 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 476 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0) == 0)
#line 476 "prog_type.m"
      {
#line 476 "prog_type.m"
        {
#line 476 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 476 "prog_type.m"
          {
#line 476 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_ground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 476 "prog_type.m"
        }
#line 476 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
#line 476 "prog_type.m"
      }
#line 476 "prog_type.m"
    else
#line 476 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
#line 476 "prog_type.m"
  }
#line 476 "prog_type.m"
}

#line 87 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0(
#line 87 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 87 "prog_type.m"
{
#line 87 "prog_type.m"
  {
#line 87 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s parse_tree__prog_type__env;

#line 87 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2 = parse_tree__prog_type__Type_2;
#line 476 "prog_type.m"
    {
#line 476 "prog_type.m"
      parse_tree__prog_type__type_is_ground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 476 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded);
#line 476 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 87 "prog_type.m"
  }
#line 87 "prog_type.m"
}

#line 80 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__strip_kind_annotation_1_f_0(
#line 80 "prog_type.m"
  MR_Word parse_tree__prog_type__Type0_3)
#line 80 "prog_type.m"
{
#line 469 "prog_type.m"
  while (MR_TRUE)
#line 469 "prog_type.m"
    {
#line 469 "prog_type.m"
      /* tailcall optimized into a loop */
#line 469 "prog_type.m"
      {
#line 469 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Type0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 469 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_4;
#line 469 "prog_type.m"
        MR_Word parse_tree__prog_type__Type1_5;
#line 467 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6;

#line 467 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 467 "prog_type.m"
          {
#line 467 "prog_type.m"
            parse_tree__prog_type__Type1_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 1)));
#line 467 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 2)));
#line 468 "prog_type.m"
            /* direct tailcall eliminated */
#line 468 "prog_type.m"
            {
#line 468 "prog_type.m"
              MR_Word parse_tree__prog_type__Type0__tmp_copy_3 = parse_tree__prog_type__Type1_5;

#line 468 "prog_type.m"
              parse_tree__prog_type__Type0_3 = parse_tree__prog_type__Type0__tmp_copy_3;
#line 468 "prog_type.m"
            }
#line 468 "prog_type.m"
            continue;
#line 467 "prog_type.m"
          }
#line 467 "prog_type.m"
        else
#line 470 "prog_type.m"
          parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type0_3;
#line 469 "prog_type.m"
        return parse_tree__prog_type__Type_4;
#line 469 "prog_type.m"
      }
#line 469 "prog_type.m"
      break;
#line 469 "prog_type.m"
    }
#line 80 "prog_type.m"
}

#line 75 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_tuple_2_p_0(
#line 75 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_3,
#line 75 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgTypes_4)
#line 75 "prog_type.m"
{
#line 463 "prog_type.m"
  {
#line 463 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 463 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 464 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 464 "prog_type.m"
    {
#line 464 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_3);
    }
#line 464 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 464 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 464 "prog_type.m"
      {
#line 464 "prog_type.m"
        *parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 464 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 2)));
#line 464 "prog_type.m"
      }
#line 463 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 463 "prog_type.m"
  }
#line 75 "prog_type.m"
}

#line 68 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(
#line 68 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_6,
#line 68 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Purity_11,
#line 68 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12,
#line 68 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14)
#line 68 "prog_type.m"
{
#line 459 "prog_type.m"
  {
#line 459 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 459 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 459 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 459 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;

#line 455 "prog_type.m"
    {
#line 455 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_6, &parse_tree__prog_type__STATE_VARIABLE_Purity_15_15, &parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16, &parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18);
    }
#line 459 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 458 "prog_type.m"
      {
#line 458 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14 = parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;
#line 458 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12 = parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 458 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_Purity_11 = parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 458 "prog_type.m"
      }
#line 459 "prog_type.m"
    else
#line 460 "prog_type.m"
      {
#line 460 "prog_type.m"
        {
#line 460 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_is_higher_order_details_det\'/5", (MR_String) "type is not higher-order");
#line 460 "prog_type.m"
          return;
        }
#line 460 "prog_type.m"
      }
#line 459 "prog_type.m"
  }
#line 68 "prog_type.m"
}

#line 64 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_details_5_p_0(
#line 64 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_6,
#line 64 "prog_type.m"
  MR_Word * parse_tree__prog_type__Purity_7,
#line 64 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredOrFunc_8,
#line 64 "prog_type.m"
  MR_Word * parse_tree__prog_type__PredArgTypes_10)
#line 64 "prog_type.m"
{
#line 439 "prog_type.m"
  {
#line 439 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 439 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_11;
#line 439 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeRetType_12;
#line 439 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;

#line 440 "prog_type.m"
    {
#line 440 "prog_type.m"
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
#line 446 "prog_type.m"
        if ((parse_tree__prog_type__MaybeRetType_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 447 "prog_type.m"
          {
#line 448 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 0;
#line 449 "prog_type.m"
            *parse_tree__prog_type__PredArgTypes_10 = parse_tree__prog_type__ArgTypes_11;
#line 447 "prog_type.m"
          }
#line 446 "prog_type.m"
        else
#line 443 "prog_type.m"
          {
#line 443 "prog_type.m"
            MR_Word parse_tree__prog_type__RetType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRetType_12, (MR_Integer) 0)));
#line 443 "prog_type.m"
            MR_Word parse_tree__prog_type__V_15_15;

#line 444 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 1;
#line 445 "prog_type.m"
            {
#line 445 "prog_type.m"
              parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__RetType_13));
#line 445 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_type.m"
            }
#line 445 "prog_type.m"
            {
#line 445 "prog_type.m"
              *parse_tree__prog_type__PredArgTypes_10 = mercury__list__append_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_11, parse_tree__prog_type__V_15_15);
            }
#line 443 "prog_type.m"
          }
#line 446 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 440 "prog_type.m"
      }
#line 439 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 439 "prog_type.m"
  }
#line 64 "prog_type.m"
}

#line 54 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_higher_order_1_p_0(
#line 54 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 54 "prog_type.m"
{
#line 435 "prog_type.m"
  {
#line 435 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 435 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 436 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 436 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 436 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 436 "prog_type.m"
    {
#line 436 "prog_type.m"
      parse_tree__prog_type__V_7_7 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 436 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 436 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 436 "prog_type.m"
      {
#line 436 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 1)));
#line 436 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 2)));
#line 436 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 3)));
#line 436 "prog_type.m"
      }
#line 435 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 435 "prog_type.m"
  }
#line 54 "prog_type.m"
}

#line 50 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_nonvar_1_p_0(
#line 50 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 50 "prog_type.m"
{
#line 433 "prog_type.m"
  {
#line 433 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 429 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 430 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 430 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 430 "prog_type.m"
    {
#line 430 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 430 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 0)));
#line 430 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 430 "prog_type.m"
      {
#line 430 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 430 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 430 "prog_type.m"
      }
#line 433 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 433 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 433 "prog_type.m"
  }
#line 50 "prog_type.m"
}

#line 46 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_is_var_1_p_0(
#line 46 "prog_type.m"
  MR_Word parse_tree__prog_type__Type_2)
#line 46 "prog_type.m"
{
#line 429 "prog_type.m"
  {
#line 429 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 429 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;
#line 430 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 430 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;

#line 430 "prog_type.m"
    {
#line 430 "prog_type.m"
      parse_tree__prog_type__V_5_5 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 430 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 430 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 430 "prog_type.m"
      {
#line 430 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 430 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 430 "prog_type.m"
      }
#line 429 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 429 "prog_type.m"
  }
#line 46 "prog_type.m"
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
