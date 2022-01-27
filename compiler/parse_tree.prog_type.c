/*
** Automatically generated from `prog_type.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "cord.mih"
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
#include "set_tree234.mih"
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



#line 419 "prog_type.m"
struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s {
#line 1390 "prog_type.m"
  MR_bool parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1427 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
#line 1430 "prog_type.m"
  jmp_buf parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0;
#line 1430 "prog_type.m"
  MR_Word parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28;
#line 1431 "prog_type.m"
  MR_Box parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
#line 419 "prog_type.m"
};

#line 362 "prog_type.m"
struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s {
#line 362 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3;
#line 1022 "prog_type.m"
  MR_bool parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 1024 "prog_type.m"
  jmp_buf parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0;
#line 1024 "prog_type.m"
  MR_Word parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8;
#line 1025 "prog_type.m"
  MR_Box parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8;
#line 362 "prog_type.m"
};

#line 101 "prog_type.m"
struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s {
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3;
#line 101 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4;
#line 502 "prog_type.m"
  MR_bool parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded;
#line 502 "prog_type.m"
  jmp_buf parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0;
#line 502 "prog_type.m"
  MR_Word parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5;
#line 101 "prog_type.m"
};

#line 92 "prog_type.m"
struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s {
#line 92 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2;
#line 497 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 497 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0;
#line 92 "prog_type.m"
};

#line 88 "prog_type.m"
struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s {
#line 88 "prog_type.m"
  MR_Word parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2;
#line 494 "prog_type.m"
  MR_bool parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded;
#line 494 "prog_type.m"
  jmp_buf parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0;
#line 88 "prog_type.m"
};


#line 205 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 208 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 211 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 214 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 217 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 220 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 223 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 226 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

#line 229 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 232 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 235 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6];

#line 238 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6];

#line 241 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0;

#line 244 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1];

#line 247 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1];

#line 250 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1];

#line 253 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1];

#line 256 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0;

#line 259 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1;

#line 262 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2];

#line 265 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2];

#line 268 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2];

#line 271 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1];

#line 274 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0;

#line 277 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1;

#line 280 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1];

#line 283 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1];

#line 286 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2];

#line 289 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2];

#line 292 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2];

#line 295 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0;

#line 298 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1;

#line 301 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2;

#line 304 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3;

#line 307 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4];

#line 310 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4];

#line 313 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4];

#line 316 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0;

#line 319 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1;

#line 322 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2];

#line 325 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2];

#line 328 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2];

#line 331 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0;

#line 334 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1;

#line 337 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2;

#line 340 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3;

#line 343 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4];

#line 346 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4];

#line 349 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4];

#line 352 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0;

#line 355 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1;

#line 358 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2;

#line 361 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3];

#line 364 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3];

#line 367 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3];

#line 370 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1];

#line 373 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0;

#line 376 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1;

#line 379 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2;

#line 382 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1];

#line 385 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3;

#line 388 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4;

#line 391 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5;

#line 394 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1];

#line 397 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6;

#line 400 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7;

#line 403 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1];

#line 406 "parse_tree.prog_type.c"
static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8;

#line 409 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5];

#line 412 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1];

#line 415 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1];

#line 418 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2];

#line 421 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4];

#line 424 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9];

#line 427 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9];

#line 430 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 433 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 435 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 438 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 441 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 443 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 445 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 448 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 451 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 453 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 456 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 459 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 461 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 463 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 466 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 469 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 471 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 474 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 477 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 479 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 481 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 484 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 487 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 489 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 492 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 495 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 497 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 499 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 502 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 505 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 507 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 510 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 513 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 515 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 517 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 520 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 523 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 525 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 528 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 531 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 533 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 535 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 538 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 541 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 543 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 546 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 549 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 551 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 553 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 556 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 559 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 561 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2);

#line 564 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 567 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 569 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 571 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3);

#line 1350 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1350 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1350 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1350 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7);

#line 1310 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1310 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1310 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1310 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6);

#line 1289 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1289 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1289 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1289 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8);

#line 1277 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1277 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1277 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1277 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20);

#line 1224 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33);

#line 1193 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1193 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22);

#line 1161 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1161 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23);

#line 1140 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1140 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16);

#line 1097 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1097 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19);

#line 1081 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1081 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14);

#line 897 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(
#line 897 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_3,
#line 897 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_4);

#line 666 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 666 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 666 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 666 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3);

#line 639 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 639 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 639 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 639 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3);

#line 1430 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1430 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1431 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1431 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1430 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1430 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1430 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1430 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1024 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 1024 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1025 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 1025 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1024 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 1024 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 1024 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 1024 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 875 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 875 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1(
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 875 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1(
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 894 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1(
#line 894 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 894 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1);

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 771 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 771 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2);

#line 502 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 502 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 502 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 502 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 502 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 502 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 497 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 497 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 497 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 497 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 494 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 494 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg);

#line 494 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 494 "prog_type.m"
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



#line 1072 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1080 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1088 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1096 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_type__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1105 "parse_tree.prog_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1113 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1121 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1129 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0
  }
};

#line 1138 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1146 "parse_tree.prog_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1154 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_ctor_defn_0_0[6] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_type__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1164 "parse_tree.prog_type.c"
static const MR_ConstString parse_tree__prog_type__parse_tree__prog_type__field_names_ctor_defn_0_0[6] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_existq_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_constraints",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

#line 1174 "parse_tree.prog_type.c"
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

#line 1189 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1194 "parse_tree.prog_type.c"
static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0
  }
};

#line 1203 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_ctor_defn_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

#line 1208 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_ctor_defn_0[1] = {
  (MR_Integer) 0
};

#line 1213 "parse_tree.prog_type.c"
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

#line 1234 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
  (MR_String) "is_builtin_dummy_type_ctor",
  (MR_Integer) 0
};

#line 1240 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
  (MR_String) "is_not_builtin_dummy_type_ctor",
  (MR_Integer) 1
};

#line 1246 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1252 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

#line 1258 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1264 "parse_tree.prog_type.c"
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

#line 1285 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1290 "parse_tree.prog_type.c"
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

#line 1305 "parse_tree.prog_type.c"
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

#line 1320 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1325 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0
};

#line 1330 "parse_tree.prog_type.c"
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

#line 1344 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

#line 1350 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1356 "parse_tree.prog_type.c"
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

#line 1377 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0 = {
  (MR_String) "cat_builtin_int",
  (MR_Integer) 0
};

#line 1383 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1 = {
  (MR_String) "cat_builtin_float",
  (MR_Integer) 1
};

#line 1389 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2 = {
  (MR_String) "cat_builtin_char",
  (MR_Integer) 2
};

#line 1395 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3 = {
  (MR_String) "cat_builtin_string",
  (MR_Integer) 3
};

#line 1401 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1409 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

#line 1417 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1425 "parse_tree.prog_type.c"
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

#line 1446 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
  (MR_String) "cat_enum_mercury",
  (MR_Integer) 0
};

#line 1452 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
  (MR_String) "cat_enum_foreign",
  (MR_Integer) 1
};

#line 1458 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1
};

#line 1464 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0
};

#line 1470 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1476 "parse_tree.prog_type.c"
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

#line 1497 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
  (MR_String) "cat_system_type_info",
  (MR_Integer) 0
};

#line 1503 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
  (MR_String) "cat_system_type_ctor_info",
  (MR_Integer) 1
};

#line 1509 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
  (MR_String) "cat_system_typeclass_info",
  (MR_Integer) 2
};

#line 1515 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
  (MR_String) "cat_system_base_typeclass_info",
  (MR_Integer) 3
};

#line 1521 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3
};

#line 1529 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2
};

#line 1537 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1545 "parse_tree.prog_type.c"
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

#line 1566 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
  (MR_String) "cat_user_direct_dummy",
  (MR_Integer) 0
};

#line 1572 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
  (MR_String) "cat_user_notag",
  (MR_Integer) 1
};

#line 1578 "parse_tree.prog_type.c"
static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
  (MR_String) "cat_user_general",
  (MR_Integer) 2
};

#line 1584 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

#line 1591 "parse_tree.prog_type.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1
};

#line 1598 "parse_tree.prog_type.c"
static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1605 "parse_tree.prog_type.c"
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

#line 1626 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0
};

#line 1631 "parse_tree.prog_type.c"
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

#line 1646 "parse_tree.prog_type.c"
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

#line 1661 "parse_tree.prog_type.c"
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

#line 1676 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0
};

#line 1681 "parse_tree.prog_type.c"
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

#line 1696 "parse_tree.prog_type.c"
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

#line 1711 "parse_tree.prog_type.c"
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

#line 1726 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0
};

#line 1731 "parse_tree.prog_type.c"
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

#line 1746 "parse_tree.prog_type.c"
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

#line 1761 "parse_tree.prog_type.c"
static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0
};

#line 1766 "parse_tree.prog_type.c"
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

#line 1781 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7
};

#line 1790 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0
};

#line 1795 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3
};

#line 1800 "parse_tree.prog_type.c"
static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8
};

#line 1806 "parse_tree.prog_type.c"
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

#line 1830 "parse_tree.prog_type.c"
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

#line 1843 "parse_tree.prog_type.c"
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

#line 1856 "parse_tree.prog_type.c"
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

#line 1877 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____ctor_defn_0_0_10001(
#line 1880 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1882 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1884 "parse_tree.prog_type.c"
{
#line 1886 "parse_tree.prog_type.c"
  {
#line 1888 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1891 "parse_tree.prog_type.c"
    {
#line 1893 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____ctor_defn_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1896 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1898 "parse_tree.prog_type.c"
  }
#line 1900 "parse_tree.prog_type.c"
}

#line 1903 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____ctor_defn_0_0_10001(
#line 1906 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1908 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1910 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1912 "parse_tree.prog_type.c"
{
#line 1914 "parse_tree.prog_type.c"
  {
#line 1916 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1919 "parse_tree.prog_type.c"
    {
#line 1921 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____ctor_defn_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1924 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1926 "parse_tree.prog_type.c"
  }
#line 1928 "parse_tree.prog_type.c"
}

#line 1931 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
#line 1934 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1936 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1938 "parse_tree.prog_type.c"
{
#line 1940 "parse_tree.prog_type.c"
  {
#line 1942 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1945 "parse_tree.prog_type.c"
    {
#line 1947 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 1950 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 1952 "parse_tree.prog_type.c"
  }
#line 1954 "parse_tree.prog_type.c"
}

#line 1957 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
#line 1960 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 1962 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 1964 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 1966 "parse_tree.prog_type.c"
{
#line 1968 "parse_tree.prog_type.c"
  {
#line 1970 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 1973 "parse_tree.prog_type.c"
    {
#line 1975 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 1978 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 1980 "parse_tree.prog_type.c"
  }
#line 1982 "parse_tree.prog_type.c"
}

#line 1985 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
#line 1988 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 1990 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 1992 "parse_tree.prog_type.c"
{
#line 1994 "parse_tree.prog_type.c"
  {
#line 1996 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 1999 "parse_tree.prog_type.c"
    {
#line 2001 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____polymorphism_cell_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2004 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2006 "parse_tree.prog_type.c"
  }
#line 2008 "parse_tree.prog_type.c"
}

#line 2011 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
#line 2014 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2016 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2018 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2020 "parse_tree.prog_type.c"
{
#line 2022 "parse_tree.prog_type.c"
  {
#line 2024 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2027 "parse_tree.prog_type.c"
    {
#line 2029 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____polymorphism_cell_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2032 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2034 "parse_tree.prog_type.c"
  }
#line 2036 "parse_tree.prog_type.c"
}

#line 2039 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
#line 2042 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2044 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2046 "parse_tree.prog_type.c"
{
#line 2048 "parse_tree.prog_type.c"
  {
#line 2050 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2053 "parse_tree.prog_type.c"
    {
#line 2055 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2058 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2060 "parse_tree.prog_type.c"
  }
#line 2062 "parse_tree.prog_type.c"
}

#line 2065 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
#line 2068 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2070 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2072 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2074 "parse_tree.prog_type.c"
{
#line 2076 "parse_tree.prog_type.c"
  {
#line 2078 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2081 "parse_tree.prog_type.c"
    {
#line 2083 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2086 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2088 "parse_tree.prog_type.c"
  }
#line 2090 "parse_tree.prog_type.c"
}

#line 2093 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
#line 2096 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2098 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2100 "parse_tree.prog_type.c"
{
#line 2102 "parse_tree.prog_type.c"
  {
#line 2104 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2107 "parse_tree.prog_type.c"
    {
#line 2109 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2112 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2114 "parse_tree.prog_type.c"
  }
#line 2116 "parse_tree.prog_type.c"
}

#line 2119 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
#line 2122 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2124 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2126 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2128 "parse_tree.prog_type.c"
{
#line 2130 "parse_tree.prog_type.c"
  {
#line 2132 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2135 "parse_tree.prog_type.c"
    {
#line 2137 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2140 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2142 "parse_tree.prog_type.c"
  }
#line 2144 "parse_tree.prog_type.c"
}

#line 2147 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
#line 2150 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2152 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2154 "parse_tree.prog_type.c"
{
#line 2156 "parse_tree.prog_type.c"
  {
#line 2158 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2161 "parse_tree.prog_type.c"
    {
#line 2163 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2166 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2168 "parse_tree.prog_type.c"
  }
#line 2170 "parse_tree.prog_type.c"
}

#line 2173 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
#line 2176 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2178 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2180 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2182 "parse_tree.prog_type.c"
{
#line 2184 "parse_tree.prog_type.c"
  {
#line 2186 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2189 "parse_tree.prog_type.c"
    {
#line 2191 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2194 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2196 "parse_tree.prog_type.c"
  }
#line 2198 "parse_tree.prog_type.c"
}

#line 2201 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
#line 2204 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2206 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2208 "parse_tree.prog_type.c"
{
#line 2210 "parse_tree.prog_type.c"
  {
#line 2212 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2215 "parse_tree.prog_type.c"
    {
#line 2217 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2220 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2222 "parse_tree.prog_type.c"
  }
#line 2224 "parse_tree.prog_type.c"
}

#line 2227 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
#line 2230 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2232 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2234 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2236 "parse_tree.prog_type.c"
{
#line 2238 "parse_tree.prog_type.c"
  {
#line 2240 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2243 "parse_tree.prog_type.c"
    {
#line 2245 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2248 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2250 "parse_tree.prog_type.c"
  }
#line 2252 "parse_tree.prog_type.c"
}

#line 2255 "parse_tree.prog_type.c"
static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
#line 2258 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 2260 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2)
#line 2262 "parse_tree.prog_type.c"
{
#line 2264 "parse_tree.prog_type.c"
  {
#line 2266 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded;

#line 2269 "parse_tree.prog_type.c"
    {
#line 2271 "parse_tree.prog_type.c"
      parse_tree__prog_type__succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), ((MR_Word) parse_tree__prog_type__wrapper_arg_2));
    }
#line 2274 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 2276 "parse_tree.prog_type.c"
  }
#line 2278 "parse_tree.prog_type.c"
}

#line 2281 "parse_tree.prog_type.c"
static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
#line 2284 "parse_tree.prog_type.c"
  MR_Box * parse_tree__prog_type__wrapper_arg_1,
#line 2286 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_2,
#line 2288 "parse_tree.prog_type.c"
  MR_Box parse_tree__prog_type__wrapper_arg_3)
#line 2290 "parse_tree.prog_type.c"
{
#line 2292 "parse_tree.prog_type.c"
  {
#line 2294 "parse_tree.prog_type.c"
    MR_Word parse_tree__prog_type__conv0_HeadVar__1_1;

#line 2297 "parse_tree.prog_type.c"
    {
#line 2299 "parse_tree.prog_type.c"
      parse_tree__prog_type____Compare____type_ctor_category_0_0(&parse_tree__prog_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_type__wrapper_arg_2), ((MR_Word) parse_tree__prog_type__wrapper_arg_3));
    }
#line 2302 "parse_tree.prog_type.c"
    *parse_tree__prog_type__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__1_1));
#line 2304 "parse_tree.prog_type.c"
  }
#line 2306 "parse_tree.prog_type.c"
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
#line 1039 "prog_type.m"
  {
#line 1039 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__ReserveTagPragma_11 == (MR_Integer) 1);
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeCtorFieldName_17;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_29;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_30;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__V_35_35;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__V_36_36;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 1039 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_31;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_34;
#line 1053 "prog_type.m"
    MR_String parse_tree__prog_type__V_22_22;
#line 993 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 993 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;

#line 1039 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
      {
#line 1041 "prog_type.m"
        parse_tree__prog_type__V_20_20 = (MR_Integer) 245;
#line 1041 "prog_type.m"
        parse_tree__prog_type__V_21_21 = (MR_Integer) 1;
#line 1041 "prog_type.m"
        {
#line 1041 "prog_type.m"
          parse_tree__prog_type__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__prog_type__Globals_9, parse_tree__prog_type__V_20_20, parse_tree__prog_type__V_21_21);
        }
#line 1039 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
          {
#line 1042 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__MaybeUserEqCmp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
              {
#line 991 "prog_type.m"
                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_12)) == (MR_mktag((MR_Integer) 1)));
#line 991 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 991 "prog_type.m"
                  {
#line 991 "prog_type.m"
                    parse_tree__prog_type__SingleCtor_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 0)));
#line 991 "prog_type.m"
                    parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_12, (MR_Integer) 1)));
#line 991 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
                      {
#line 992 "prog_type.m"
                        parse_tree__prog_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 0)));
#line 992 "prog_type.m"
                        parse_tree__prog_type___Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 1)));
#line 992 "prog_type.m"
                        *parse_tree__prog_type__SingleFunctorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 2)));
#line 992 "prog_type.m"
                        parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 3)));
#line 992 "prog_type.m"
                        parse_tree__prog_type___Ctxt_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_29, (MR_Integer) 4)));
#line 994 "prog_type.m"
                        parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
                          {
#line 1053 "prog_type.m"
                            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_type__SingleFunctorName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1053 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1053 "prog_type.m"
                              {
#line 1053 "prog_type.m"
                                parse_tree__prog_type__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__prog_type__SingleFunctorName_14, (MR_Integer) 0)));
#line 1053 "prog_type.m"
                                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_22_22, (MR_String) "{}") == 0);
#line 1053 "prog_type.m"
                              }
#line 1053 "prog_type.m"
                            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1039 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
                              {
#line 993 "prog_type.m"
                                parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 993 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 993 "prog_type.m"
                                  {
#line 993 "prog_type.m"
                                    parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 0)));
#line 993 "prog_type.m"
                                    parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_36_36, (MR_Integer) 1)));
#line 993 "prog_type.m"
                                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_type.m"
                                    if (parse_tree__prog_type__succeeded)
#line 1039 "prog_type.m"
                                      {
#line 993 "prog_type.m"
                                        parse_tree__prog_type__MaybeCtorFieldName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 0)));
#line 993 "prog_type.m"
                                        *parse_tree__prog_type__SingleArgType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 1)));
#line 993 "prog_type.m"
                                        parse_tree__prog_type__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 2)));
#line 993 "prog_type.m"
                                        parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_37_37, (MR_Integer) 3)));
#line 1058 "prog_type.m"
                                        if ((parse_tree__prog_type__MaybeCtorFieldName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "prog_type.m"
                                          *parse_tree__prog_type__MaybeSingleArgName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1058 "prog_type.m"
                                        else
#line 1059 "prog_type.m"
                                          {
#line 1059 "prog_type.m"
                                            MR_Word parse_tree__prog_type__SymName_18;
#line 1059 "prog_type.m"
                                            MR_Word parse_tree__prog_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeCtorFieldName_17, (MR_Integer) 0)));
#line 1059 "prog_type.m"
                                            MR_String parse_tree__prog_type__V_24_24;
#line 1059 "prog_type.m"
                                            MR_Word parse_tree__prog_type__V_19_19;

#line 1059 "prog_type.m"
                                            parse_tree__prog_type__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 0)));
#line 1059 "prog_type.m"
                                            parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_23_23, (MR_Integer) 1)));
#line 1060 "prog_type.m"
                                            {
#line 1060 "prog_type.m"
                                              parse_tree__prog_type__V_24_24 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__SymName_18);
                                            }
#line 1060 "prog_type.m"
                                            {
#line 1060 "prog_type.m"
                                              MR_Word base;
#line 1060 "prog_type.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "prog_type.m"
                                              *parse_tree__prog_type__MaybeSingleArgName_16 = base;
#line 1060 "prog_type.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__V_24_24));
#line 1060 "prog_type.m"
                                            }
#line 1059 "prog_type.m"
                                          }
#line 1058 "prog_type.m"
                                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1039 "prog_type.m"
                                      }
#line 993 "prog_type.m"
                                  }
#line 1039 "prog_type.m"
                              }
#line 1039 "prog_type.m"
                          }
#line 1039 "prog_type.m"
                      }
#line 991 "prog_type.m"
                  }
#line 1039 "prog_type.m"
              }
#line 1039 "prog_type.m"
          }
#line 1039 "prog_type.m"
      }
#line 1039 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1039 "prog_type.m"
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
#line 2549 "parse_tree.prog_type.c"
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
#line 2587 "parse_tree.prog_type.c"
                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                  else
#line 278 "prog_type.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2593 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2599 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 2603 "parse_tree.prog_type.c"
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
#line 2641 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2647 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2653 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                        else
#line 2657 "parse_tree.prog_type.c"
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
#line 2695 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2701 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2707 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                          else
#line 2711 "parse_tree.prog_type.c"
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
#line 2749 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2755 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2761 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                            else
#line 2765 "parse_tree.prog_type.c"
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
#line 2803 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2809 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2815 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                              else
#line 2819 "parse_tree.prog_type.c"
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
#line 2832 "parse_tree.prog_type.c"
                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                    else
#line 278 "prog_type.m"
                      if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2838 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2844 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2850 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2856 "parse_tree.prog_type.c"
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
#line 2884 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                else
#line 278 "prog_type.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2890 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                  else
#line 2894 "parse_tree.prog_type.c"
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
#line 2909 "parse_tree.prog_type.c"
                        *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                      else
#line 278 "prog_type.m"
                        if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2915 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2921 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2927 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2933 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                              else
#line 278 "prog_type.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2939 "parse_tree.prog_type.c"
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
#line 2967 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                    else
#line 2971 "parse_tree.prog_type.c"
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
#line 2986 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2992 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2998 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3004 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                              else
#line 278 "prog_type.m"
                                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3010 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "prog_type.m"
                                else
#line 278 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3016 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                  else
#line 278 "prog_type.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3022 "parse_tree.prog_type.c"
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
#line 3048 "parse_tree.prog_type.c"
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
#line 3061 "parse_tree.prog_type.c"
                          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                        else
#line 278 "prog_type.m"
                          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3067 "parse_tree.prog_type.c"
                            *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                          else
#line 278 "prog_type.m"
                            if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3073 "parse_tree.prog_type.c"
                              *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                            else
#line 278 "prog_type.m"
                              if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3079 "parse_tree.prog_type.c"
                                *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                              else
#line 278 "prog_type.m"
                                if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3085 "parse_tree.prog_type.c"
                                  *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                else
#line 278 "prog_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3091 "parse_tree.prog_type.c"
                                    *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                  else
#line 278 "prog_type.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3097 "parse_tree.prog_type.c"
                                      *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "prog_type.m"
                                    else
#line 278 "prog_type.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3103 "parse_tree.prog_type.c"
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
#line 3250 "parse_tree.prog_type.c"
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
#line 3275 "parse_tree.prog_type.c"
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
#line 3300 "parse_tree.prog_type.c"
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
#line 3323 "parse_tree.prog_type.c"
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
#line 3377 "parse_tree.prog_type.c"
  {
#line 3379 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3382 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3384 "parse_tree.prog_type.c"
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
#line 3430 "parse_tree.prog_type.c"
  {
#line 3432 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3435 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3437 "parse_tree.prog_type.c"
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
#line 3483 "parse_tree.prog_type.c"
  {
#line 3485 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3488 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3490 "parse_tree.prog_type.c"
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
#line 3536 "parse_tree.prog_type.c"
  {
#line 3538 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3541 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3543 "parse_tree.prog_type.c"
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
#line 3572 "parse_tree.prog_type.c"
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
#line 3584 "parse_tree.prog_type.c"
          *parse_tree__prog_type__HeadVar__1_1 = (MR_Integer) 2;
#line 319 "prog_type.m"
      else
#line 319 "prog_type.m"
        {
#line 319 "prog_type.m"
          MR_Word parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));

#line 319 "prog_type.m"
          if ((parse_tree__prog_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3595 "parse_tree.prog_type.c"
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
#line 3676 "parse_tree.prog_type.c"
              {
#line 3678 "parse_tree.prog_type.c"
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
#line 3733 "parse_tree.prog_type.c"
  {
#line 3735 "parse_tree.prog_type.c"
    MR_bool parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_1 == parse_tree__prog_type__HeadVar__2_2);

#line 3738 "parse_tree.prog_type.c"
    return parse_tree__prog_type__succeeded;
#line 3740 "parse_tree.prog_type.c"
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
#line 3769 "parse_tree.prog_type.c"
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
#line 3807 "parse_tree.prog_type.c"
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
#line 3827 "parse_tree.prog_type.c"
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
#line 3847 "parse_tree.prog_type.c"
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
#line 3867 "parse_tree.prog_type.c"
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
#line 3887 "parse_tree.prog_type.c"
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

#line 3980 "parse_tree.prog_type.c"
        {
#line 3982 "parse_tree.prog_type.c"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[3], ((MR_Box) (parse_tree__prog_type__V_3_3)), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 340 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
          {
#line 3989 "parse_tree.prog_type.c"
            parse_tree__prog_type__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_type_scalar_common_1[1];
#line 3991 "parse_tree.prog_type.c"
            {
#line 3993 "parse_tree.prog_type.c"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_type__V_4_4)), ((MR_Box) (parse_tree__prog_type__V_10_10)));
            }
#line 340 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
              {
#line 4000 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_type_scalar_common_2[0];
#line 4002 "parse_tree.prog_type.c"
                {
#line 4004 "parse_tree.prog_type.c"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_19_19, ((MR_Box) (parse_tree__prog_type__V_5_5)), ((MR_Box) (parse_tree__prog_type__V_11_11)));
                }
#line 340 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
                  {
#line 4011 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[4];
#line 4013 "parse_tree.prog_type.c"
                    {
#line 4015 "parse_tree.prog_type.c"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__V_6_6)), ((MR_Box) (parse_tree__prog_type__V_12_12)));
                    }
#line 340 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 340 "prog_type.m"
                      {
#line 4022 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 4024 "parse_tree.prog_type.c"
                        {
#line 4026 "parse_tree.prog_type.c"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_21_21, ((MR_Box) (parse_tree__prog_type__V_7_7)), ((MR_Box) (parse_tree__prog_type__V_13_13)));
                        }
#line 340 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 4031 "parse_tree.prog_type.c"
                          {
#line 4033 "parse_tree.prog_type.c"
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

#line 1350 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_list_3_p_0(
#line 1350 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1350 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_6,
#line 1350 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_7)
#line 1350 "prog_type.m"
{
#line 1352 "prog_type.m"
  while (MR_TRUE)
#line 1352 "prog_type.m"
    {
#line 1352 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1352 "prog_type.m"
      {
#line 1352 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1352 "prog_type.m"
        MR_Word parse_tree__prog_type__X_4;
#line 1352 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_5;

#line 1352 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1352 "prog_type.m"
          {
#line 1352 "prog_type.m"
            parse_tree__prog_type__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1352 "prog_type.m"
            parse_tree__prog_type__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1354 "prog_type.m"
            {
#line 1354 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__X_4, parse_tree__prog_type__Y_6, parse_tree__prog_type__Bindings_7);
            }
#line 1355 "prog_type.m"
            if (!(parse_tree__prog_type__succeeded))
#line 1356 "prog_type.m"
              {
#line 1356 "prog_type.m"
                /* direct tailcall eliminated */
#line 1356 "prog_type.m"
                {
#line 1356 "prog_type.m"
                  MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_5;

#line 1356 "prog_type.m"
                  parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1356 "prog_type.m"
                }
#line 1356 "prog_type.m"
                continue;
#line 1356 "prog_type.m"
              }
#line 1352 "prog_type.m"
          }
#line 1352 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1352 "prog_type.m"
      }
#line 1352 "prog_type.m"
      break;
#line 1352 "prog_type.m"
    }
#line 1350 "prog_type.m"
}

#line 1310 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_occurs_3_p_0(
#line 1310 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_4,
#line 1310 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_5,
#line 1310 "prog_type.m"
  MR_Word parse_tree__prog_type__Bindings_6)
#line 1310 "prog_type.m"
{
#line 1314 "prog_type.m"
  while (MR_TRUE)
#line 1314 "prog_type.m"
    {
#line 1314 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1314 "prog_type.m"
      {
#line 1314 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1314 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 1))))
#line 1322 "prog_type.m"
          {
#line 1322 "prog_type.m"
            MR_Word parse_tree__prog_type__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1322 "prog_type.m"
            MR_Word parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1322 "prog_type.m"
            MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1323 "prog_type.m"
            {
#line 1323 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_11, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
            }
#line 1322 "prog_type.m"
          }
#line 1314 "prog_type.m"
        else
#line 1314 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 0))))
#line 1314 "prog_type.m"
            {
#line 1314 "prog_type.m"
              MR_Word parse_tree__prog_type__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)));
#line 1314 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));

#line 1315 "prog_type.m"
              {
#line 1315 "prog_type.m"
                parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_5)));
              }
#line 1317 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1316 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1317 "prog_type.m"
              else
#line 1318 "prog_type.m"
                {
#line 1318 "prog_type.m"
                  MR_Word parse_tree__prog_type__BindingOfX_9;
#line 1318 "prog_type.m"
                  MR_Box parse_tree__prog_type__conv0_BindingOfX_9;

#line 1318 "prog_type.m"
                  {
#line 1318 "prog_type.m"
                    parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_9);
                  }
#line 1318 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1318 "prog_type.m"
                    {
#line 1318 "prog_type.m"
                      parse_tree__prog_type__BindingOfX_9 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_9);
#line 1318 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 1318 "prog_type.m"
                    }
#line 1318 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1319 "prog_type.m"
                    {
#line 1319 "prog_type.m"
                      /* direct tailcall eliminated */
#line 1319 "prog_type.m"
                      {
#line 1319 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_9;

#line 1319 "prog_type.m"
                        parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1319 "prog_type.m"
                      }
#line 1319 "prog_type.m"
                      continue;
#line 1319 "prog_type.m"
                    }
#line 1318 "prog_type.m"
                }
#line 1314 "prog_type.m"
            }
#line 1314 "prog_type.m"
          else
#line 1314 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1336 "prog_type.m"
              {
#line 1336 "prog_type.m"
                MR_Word parse_tree__prog_type__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1336 "prog_type.m"
                MR_Word parse_tree__prog_type__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1336 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1338 "prog_type.m"
                {
#line 1338 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_24)), ((MR_Box) (parse_tree__prog_type__Y_5)));
                }
#line 1339 "prog_type.m"
                if (!(parse_tree__prog_type__succeeded))
#line 1339 "prog_type.m"
                  {
#line 1340 "prog_type.m"
                    {
#line 1340 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_26, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                    }
#line 1339 "prog_type.m"
                    if (!(parse_tree__prog_type__succeeded))
#line 1342 "prog_type.m"
                      {
#line 1342 "prog_type.m"
                        MR_Word parse_tree__prog_type__BindingOfX_22;
#line 1342 "prog_type.m"
                        MR_Box parse_tree__prog_type__conv1_BindingOfX_22;

#line 1342 "prog_type.m"
                        {
#line 1342 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Bindings_6, ((MR_Box) (parse_tree__prog_type__X_24)), &parse_tree__prog_type__conv1_BindingOfX_22);
                        }
#line 1342 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1342 "prog_type.m"
                          {
#line 1342 "prog_type.m"
                            parse_tree__prog_type__BindingOfX_22 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfX_22);
#line 1342 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1342 "prog_type.m"
                          }
#line 1342 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1343 "prog_type.m"
                          {
#line 1343 "prog_type.m"
                            /* direct tailcall eliminated */
#line 1343 "prog_type.m"
                            {
#line 1343 "prog_type.m"
                              MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__BindingOfX_22;

#line 1343 "prog_type.m"
                              parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1343 "prog_type.m"
                            }
#line 1343 "prog_type.m"
                            continue;
#line 1343 "prog_type.m"
                          }
#line 1342 "prog_type.m"
                      }
#line 1339 "prog_type.m"
                  }
#line 1336 "prog_type.m"
              }
#line 1314 "prog_type.m"
            else
#line 1314 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1325 "prog_type.m"
                {
#line 1325 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));
#line 1325 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1325 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 3)));

#line 1327 "prog_type.m"
                  {
#line 1327 "prog_type.m"
                    parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                  }
#line 1328 "prog_type.m"
                  if (!(parse_tree__prog_type__succeeded))
#line 1329 "prog_type.m"
                    {
#line 1329 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16;

#line 1329 "prog_type.m"
                      parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__MaybeRet_13)) == (MR_mktag((MR_Integer) 1)));
#line 1329 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1329 "prog_type.m"
                        {
#line 1329 "prog_type.m"
                          parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 1330 "prog_type.m"
                          /* direct tailcall eliminated */
#line 1330 "prog_type.m"
                          {
#line 1330 "prog_type.m"
                            MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__Ret_16;

#line 1330 "prog_type.m"
                            parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1330 "prog_type.m"
                          }
#line 1330 "prog_type.m"
                          continue;
#line 1329 "prog_type.m"
                        }
#line 1329 "prog_type.m"
                    }
#line 1325 "prog_type.m"
                }
#line 1314 "prog_type.m"
              else
#line 1314 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1346 "prog_type.m"
                  {
#line 1346 "prog_type.m"
                    MR_Word parse_tree__prog_type__X_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1346 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1347 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1347 "prog_type.m"
                    {
#line 1347 "prog_type.m"
                      MR_Word parse_tree__prog_type__TypeX__tmp_copy_4 = parse_tree__prog_type__X_27;

#line 1347 "prog_type.m"
                      parse_tree__prog_type__TypeX_4 = parse_tree__prog_type__TypeX__tmp_copy_4;
#line 1347 "prog_type.m"
                    }
#line 1347 "prog_type.m"
                    continue;
#line 1346 "prog_type.m"
                  }
#line 1314 "prog_type.m"
                else
#line 1314 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1333 "prog_type.m"
                    {
#line 1333 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 1)));
#line 1333 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_4, (MR_Integer) 2)));

#line 1334 "prog_type.m"
                      {
#line 1334 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_list_3_p_0(parse_tree__prog_type__Args_21, parse_tree__prog_type__Y_5, parse_tree__prog_type__Bindings_6);
                      }
#line 1333 "prog_type.m"
                    }
#line 1314 "prog_type.m"
                  else
#line 1314 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1314 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1314 "prog_type.m"
      }
#line 1314 "prog_type.m"
      break;
#line 1314 "prog_type.m"
    }
#line 1310 "prog_type.m"
}

#line 1289 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_rev_args_8_p_0(
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 1289 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_3,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__4_4,
#line 1289 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_5,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_6,
#line 1289 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7,
#line 1289 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_8)
#line 1289 "prog_type.m"
{
#line 1293 "prog_type.m"
  while (MR_TRUE)
#line 1293 "prog_type.m"
    {
#line 1293 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1293 "prog_type.m"
      {
#line 1293 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1293 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "prog_type.m"
          {
#line 1293 "prog_type.m"
            *parse_tree__prog_type__ArgsY_3 = parse_tree__prog_type__HeadVar__2_2;
#line 1293 "prog_type.m"
            *parse_tree__prog_type__KindY_5 = parse_tree__prog_type__HeadVar__4_4;
#line 1293 "prog_type.m"
            *parse_tree__prog_type__STATE_VARIABLE_Bindings_8 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7;
#line 1293 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1293 "prog_type.m"
          }
#line 1293 "prog_type.m"
        else
#line 1295 "prog_type.m"
          {
#line 1295 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgX_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1295 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1295 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgY0_17;
#line 1295 "prog_type.m"
            MR_Word parse_tree__prog_type__ArgsY0_18;
#line 1295 "prog_type.m"
            MR_Word parse_tree__prog_type__KindY1_24;
#line 1295 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;
#line 1295 "prog_type.m"
            MR_Word parse_tree__prog_type__V_28_28;

#line 1294 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1294 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1294 "prog_type.m"
              {
#line 1294 "prog_type.m"
                parse_tree__prog_type__ArgY0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1294 "prog_type.m"
                parse_tree__prog_type__ArgsY0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1296 "prog_type.m"
                {
#line 1296 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__ArgX_15, parse_tree__prog_type__ArgY0_17, parse_tree__prog_type__HeadTypeParams_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                }
#line 1295 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1295 "prog_type.m"
                  {
#line 1297 "prog_type.m"
                    {
#line 1297 "prog_type.m"
                      parse_tree__prog_type__V_28_28 = parse_tree__prog_data__get_type_kind_1_f_0(parse_tree__prog_type__ArgY0_17);
                    }
#line 1297 "prog_type.m"
                    {
#line 1297 "prog_type.m"
                      parse_tree__prog_type__KindY1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1297 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 1297 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__KindY1_24, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__4_4));
#line 1297 "prog_type.m"
                    }
#line 1298 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1298 "prog_type.m"
                    {
#line 1298 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__ArgsX_16;
#line 1298 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__ArgsY0_18;
#line 1298 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__4__tmp_copy_4 = parse_tree__prog_type__KindY1_24;
#line 1298 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1298 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_7 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_7;
#line 1298 "prog_type.m"
                      parse_tree__prog_type__HeadVar__4_4 = parse_tree__prog_type__HeadVar__4__tmp_copy_4;
#line 1298 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1298 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1298 "prog_type.m"
                    }
#line 1298 "prog_type.m"
                    continue;
#line 1295 "prog_type.m"
                  }
#line 1294 "prog_type.m"
              }
#line 1295 "prog_type.m"
          }
#line 1293 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1293 "prog_type.m"
      }
#line 1293 "prog_type.m"
      break;
#line 1293 "prog_type.m"
    }
#line 1289 "prog_type.m"
}

#line 1277 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_args_8_p_0(
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX_9,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsY0_10,
#line 1277 "prog_type.m"
  MR_Word * parse_tree__prog_type__ArgsY_11,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__KindY0_12,
#line 1277 "prog_type.m"
  MR_Word * parse_tree__prog_type__KindY_13,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_14,
#line 1277 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19,
#line 1277 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_20)
#line 1277 "prog_type.m"
{
#line 1282 "prog_type.m"
  {
#line 1282 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1282 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1282 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsX_16;
#line 1282 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY0_17;
#line 1282 "prog_type.m"
    MR_Word parse_tree__prog_type__RevArgsY_18;

#line 1283 "prog_type.m"
    {
#line 1283 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsX_9, &parse_tree__prog_type__RevArgsX_16);
    }
#line 1284 "prog_type.m"
    {
#line 1284 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__ArgsY0_10, &parse_tree__prog_type__RevArgsY0_17);
    }
#line 1285 "prog_type.m"
    {
#line 1285 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_rev_args_8_p_0(parse_tree__prog_type__RevArgsX_16, parse_tree__prog_type__RevArgsY0_17, &parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__KindY0_12, parse_tree__prog_type__KindY_13, parse_tree__prog_type__HeadTypeParams_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_19, parse_tree__prog_type__STATE_VARIABLE_Bindings_20);
    }
#line 1282 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1282 "prog_type.m"
      {
#line 1287 "prog_type.m"
        {
#line 1287 "prog_type.m"
          mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeCtorInfo_22_22, parse_tree__prog_type__RevArgsY_18, parse_tree__prog_type__ArgsY_11);
        }
#line 1287 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1282 "prog_type.m"
      }
#line 1282 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1282 "prog_type.m"
  }
#line 1277 "prog_type.m"
}

#line 1224 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_apply_6_p_0(
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_8,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__ArgsX0_9,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1224 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32,
#line 1224 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_33)
#line 1224 "prog_type.m"
{
#line 1229 "prog_type.m"
  while (MR_TRUE)
#line 1229 "prog_type.m"
    {
#line 1229 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1229 "prog_type.m"
      {
#line 1229 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1229 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2))))
#line 1235 "prog_type.m"
          {
#line 1236 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1235 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1237 "prog_type.m"
              {
#line 1237 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
              }
#line 1235 "prog_type.m"
          }
#line 1229 "prog_type.m"
        else
#line 1229 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1))))
#line 1229 "prog_type.m"
            {
#line 1229 "prog_type.m"
              MR_Word parse_tree__prog_type__NameY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1229 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1229 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1229 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_15;
#line 1229 "prog_type.m"
              MR_Word parse_tree__prog_type__KindY_16;
#line 1229 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48;
#line 1229 "prog_type.m"
              MR_Word parse_tree__prog_type__V_49_49;

#line 1230 "prog_type.m"
              {
#line 1230 "prog_type.m"
                parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_13, &parse_tree__prog_type__ArgsY_15, parse_tree__prog_type__KindY0_14, &parse_tree__prog_type__KindY_16, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48);
              }
#line 1229 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1229 "prog_type.m"
                {
#line 1232 "prog_type.m"
                  {
#line 1232 "prog_type.m"
                    parse_tree__prog_type__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 0) = ((MR_Box) (parse_tree__prog_type__NameY_12));
#line 1232 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_15));
#line 1232 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, 2) = ((MR_Box) (parse_tree__prog_type__KindY_16));
#line 1232 "prog_type.m"
                  }
#line 1232 "prog_type.m"
                  {
#line 1232 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_49_49, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_48_48, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                  }
#line 1229 "prog_type.m"
                }
#line 1229 "prog_type.m"
            }
#line 1229 "prog_type.m"
          else
#line 1229 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1249 "prog_type.m"
              {
#line 1249 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1249 "prog_type.m"
                MR_Word parse_tree__prog_type__VarY_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1249 "prog_type.m"
                MR_Word parse_tree__prog_type__Kind0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1249 "prog_type.m"
                MR_Integer parse_tree__prog_type__NArgsX0_24;
#line 1249 "prog_type.m"
                MR_Integer parse_tree__prog_type__NArgsY0_25;
#line 1249 "prog_type.m"
                MR_Word parse_tree__prog_type__Result_26;
#line 1249 "prog_type.m"
                MR_Word parse_tree__prog_type__ArgsY0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1250 "prog_type.m"
                {
#line 1250 "prog_type.m"
                  mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__NArgsX0_24);
                }
#line 1251 "prog_type.m"
                {
#line 1251 "prog_type.m"
                  mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_61_61, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__NArgsY0_25);
                }
#line 1252 "prog_type.m"
                {
#line 1252 "prog_type.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_type__Result_26, parse_tree__prog_type__NArgsX0_24, parse_tree__prog_type__NArgsY0_25);
                }
#line 1259 "prog_type.m"
                if ((parse_tree__prog_type__Result_26 == (MR_Integer) 1))
#line 1254 "prog_type.m"
                  {
#line 1254 "prog_type.m"
                    MR_Word parse_tree__prog_type__Kind_27;
#line 1254 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40;
#line 1254 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_41_41;
#line 1254 "prog_type.m"
                    MR_Word parse_tree__prog_type__ArgsY_55;

#line 1255 "prog_type.m"
                    {
#line 1255 "prog_type.m"
                      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__ArgsY_55, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_27, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40);
                    }
#line 1254 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1254 "prog_type.m"
                      {
#line 1257 "prog_type.m"
                        {
#line 1257 "prog_type.m"
                          parse_tree__prog_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1257 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 1) = ((MR_Box) (parse_tree__prog_type__VarY_22));
#line 1257 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 2) = ((MR_Box) (parse_tree__prog_type__ArgsY_55));
#line 1257 "prog_type.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_41_41, 3) = ((MR_Box) (parse_tree__prog_type__Kind_27));
#line 1257 "prog_type.m"
                        }
#line 1257 "prog_type.m"
                        {
#line 1257 "prog_type.m"
                          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_41_41, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_40_40, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                        }
#line 1254 "prog_type.m"
                      }
#line 1254 "prog_type.m"
                  }
#line 1259 "prog_type.m"
                else
#line 1259 "prog_type.m"
                  if ((parse_tree__prog_type__Result_26 == (MR_Integer) 0))
#line 1260 "prog_type.m"
                    {
#line 1260 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38;
#line 1260 "prog_type.m"
                      MR_Word parse_tree__prog_type__Kind_56;
#line 1262 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_28_28;

#line 1262 "prog_type.m"
                      {
#line 1262 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_59, &parse_tree__prog_type__V_28_28, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38);
                      }
#line 1260 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1264 "prog_type.m"
                        {
#line 1264 "prog_type.m"
                          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__VarY_22, parse_tree__prog_type__Kind_56, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_38_38, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                        }
#line 1260 "prog_type.m"
                    }
#line 1259 "prog_type.m"
                  else
#line 1266 "prog_type.m"
                    {
#line 1266 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsX_29;
#line 1266 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35;
#line 1266 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_36_36;
#line 1266 "prog_type.m"
                      MR_Word parse_tree__prog_type__Kind_57;

#line 1267 "prog_type.m"
                      {
#line 1267 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsY0_59, parse_tree__prog_type__ArgsX0_9, &parse_tree__prog_type__ArgsX_29, parse_tree__prog_type__Kind0_23, &parse_tree__prog_type__Kind_57, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35);
                      }
#line 1266 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1266 "prog_type.m"
                        {
#line 1269 "prog_type.m"
                          {
#line 1269 "prog_type.m"
                            parse_tree__prog_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1269 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 1) = ((MR_Box) (parse_tree__prog_type__VarX_8));
#line 1269 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 2) = ((MR_Box) (parse_tree__prog_type__ArgsX_29));
#line 1269 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_36_36, 3) = ((MR_Box) (parse_tree__prog_type__Kind_57));
#line 1269 "prog_type.m"
                          }
#line 1269 "prog_type.m"
                          {
#line 1269 "prog_type.m"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_22, parse_tree__prog_type__V_36_36, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_35_35, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1266 "prog_type.m"
                        }
#line 1266 "prog_type.m"
                    }
#line 1249 "prog_type.m"
              }
#line 1229 "prog_type.m"
            else
#line 1229 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1239 "prog_type.m"
                {
#line 1240 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__ArgsX0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1241 "prog_type.m"
                    {
#line 1241 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                    }
#line 1239 "prog_type.m"
                }
#line 1229 "prog_type.m"
              else
#line 1229 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1273 "prog_type.m"
                  {
#line 1273 "prog_type.m"
                    MR_Word parse_tree__prog_type__RawY_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1273 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));

#line 1274 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1274 "prog_type.m"
                    {
#line 1274 "prog_type.m"
                      MR_Word parse_tree__prog_type__TypeY__tmp_copy_7 = parse_tree__prog_type__RawY_30;

#line 1274 "prog_type.m"
                      parse_tree__prog_type__TypeY_7 = parse_tree__prog_type__TypeY__tmp_copy_7;
#line 1274 "prog_type.m"
                    }
#line 1274 "prog_type.m"
                    continue;
#line 1273 "prog_type.m"
                  }
#line 1229 "prog_type.m"
                else
#line 1229 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1243 "prog_type.m"
                    {
#line 1243 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43;
#line 1243 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_44_44;
#line 1243 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsY0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1243 "prog_type.m"
                      MR_Word parse_tree__prog_type__KindY0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1243 "prog_type.m"
                      MR_Word parse_tree__prog_type__ArgsY_53;
#line 1243 "prog_type.m"
                      MR_Word parse_tree__prog_type__KindY_54;

#line 1244 "prog_type.m"
                      {
#line 1244 "prog_type.m"
                        parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_args_8_p_0(parse_tree__prog_type__ArgsX0_9, parse_tree__prog_type__ArgsY0_51, &parse_tree__prog_type__ArgsY_53, parse_tree__prog_type__KindY0_52, &parse_tree__prog_type__KindY_54, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_32, &parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43);
                      }
#line 1243 "prog_type.m"
                      if (parse_tree__prog_type__succeeded)
#line 1243 "prog_type.m"
                        {
#line 1246 "prog_type.m"
                          {
#line 1246 "prog_type.m"
                            parse_tree__prog_type__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1246 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) (parse_tree__prog_type__ArgsY_53));
#line 1246 "prog_type.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_44_44, 2) = ((MR_Box) (parse_tree__prog_type__KindY_54));
#line 1246 "prog_type.m"
                          }
#line 1246 "prog_type.m"
                          {
#line 1246 "prog_type.m"
                            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_8, parse_tree__prog_type__V_44_44, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_43_43, parse_tree__prog_type__STATE_VARIABLE_Bindings_33);
                          }
#line 1243 "prog_type.m"
                        }
#line 1243 "prog_type.m"
                    }
#line 1229 "prog_type.m"
                  else
#line 1229 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1229 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1229 "prog_type.m"
      }
#line 1229 "prog_type.m"
      break;
#line 1229 "prog_type.m"
    }
#line 1224 "prog_type.m"
}

#line 1193 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_special_5_p_0(
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1193 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21,
#line 1193 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_22)
#line 1193 "prog_type.m"
{
#line 1199 "prog_type.m"
  {
#line 1199 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1199 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1199 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsX_11;
#line 1197 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;

#line 1197 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1197 "prog_type.m"
      {
#line 1197 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1197 "prog_type.m"
        parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1197 "prog_type.m"
        parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1198 "prog_type.m"
        {
#line 1198 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_10, parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
        }
#line 1197 "prog_type.m"
      }
#line 1197 "prog_type.m"
    else
#line 1201 "prog_type.m"
      {
#line 1201 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_13;
#line 1201 "prog_type.m"
        MR_Word parse_tree__prog_type__ArgsY_14;
#line 1199 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;

#line 1199 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1199 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1199 "prog_type.m"
          {
#line 1199 "prog_type.m"
            parse_tree__prog_type__VarY_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1199 "prog_type.m"
            parse_tree__prog_type__ArgsY_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1199 "prog_type.m"
            parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1200 "prog_type.m"
            {
#line 1200 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_apply_6_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__VarY_13, parse_tree__prog_type__ArgsY_14, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
            }
#line 1199 "prog_type.m"
          }
#line 1199 "prog_type.m"
        else
#line 1207 "prog_type.m"
          {
#line 1207 "prog_type.m"
            MR_Word parse_tree__prog_type__RawX_16;
#line 1201 "prog_type.m"
            MR_Word parse_tree__prog_type__V_17_17;

#line 1201 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1201 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1201 "prog_type.m"
              {
#line 1201 "prog_type.m"
                parse_tree__prog_type__RawX_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1201 "prog_type.m"
                parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1204 "prog_type.m"
                {
#line 1204 "prog_type.m"
                  MR_Word parse_tree__prog_type__RawY_18;
#line 1202 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_19_19;

#line 1202 "prog_type.m"
                  parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1202 "prog_type.m"
                  if (parse_tree__prog_type__succeeded)
#line 1202 "prog_type.m"
                    {
#line 1202 "prog_type.m"
                      parse_tree__prog_type__RawY_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1202 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1203 "prog_type.m"
                      {
#line 1203 "prog_type.m"
                        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__RawY_18, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                      }
#line 1202 "prog_type.m"
                    }
#line 1202 "prog_type.m"
                  else
#line 1205 "prog_type.m"
                    {
#line 1205 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RawX_16, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1204 "prog_type.m"
                }
#line 1201 "prog_type.m"
              }
#line 1201 "prog_type.m"
            else
#line 1209 "prog_type.m"
              {
#line 1209 "prog_type.m"
                MR_Word parse_tree__prog_type__RawY_28;
#line 1207 "prog_type.m"
                MR_Word parse_tree__prog_type__V_20_20;

#line 1207 "prog_type.m"
                parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1207 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1207 "prog_type.m"
                  {
#line 1207 "prog_type.m"
                    parse_tree__prog_type__RawY_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1207 "prog_type.m"
                    parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1208 "prog_type.m"
                    {
#line 1208 "prog_type.m"
                      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeX_6, parse_tree__prog_type__RawY_28, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_21, parse_tree__prog_type__STATE_VARIABLE_Bindings_22);
                    }
#line 1207 "prog_type.m"
                  }
#line 1209 "prog_type.m"
              }
#line 1207 "prog_type.m"
          }
#line 1201 "prog_type.m"
      }
#line 1199 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1199 "prog_type.m"
  }
#line 1193 "prog_type.m"
}

#line 1161 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_nonvar_5_p_0(
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeX_6,
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1161 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22,
#line 1161 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_23)
#line 1161 "prog_type.m"
{
#line 1166 "prog_type.m"
  {
#line 1166 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1166 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 2))))
#line 1174 "prog_type.m"
      {
#line 1174 "prog_type.m"
        MR_Word parse_tree__prog_type__BuiltinType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1174 "prog_type.m"
        MR_Word parse_tree__prog_type__V_42_42;

#line 1175 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 2)));
#line 1175 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1175 "prog_type.m"
          {
#line 1175 "prog_type.m"
            parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1175 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__BuiltinType_15 == parse_tree__prog_type__V_42_42);
#line 1174 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1174 "prog_type.m"
              {
#line 1174 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_23 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22;
#line 1174 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1174 "prog_type.m"
              }
#line 1175 "prog_type.m"
          }
#line 1174 "prog_type.m"
      }
#line 1166 "prog_type.m"
    else
#line 1166 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 1))))
#line 1166 "prog_type.m"
        {
#line 1166 "prog_type.m"
          MR_Word parse_tree__prog_type__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)));
#line 1166 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1166 "prog_type.m"
          MR_Word parse_tree__prog_type__ArgsY_13;
#line 1166 "prog_type.m"
          MR_Word parse_tree__prog_type__V_41_41;
#line 1166 "prog_type.m"
          MR_Word parse_tree__prog_type__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1167 "prog_type.m"
          MR_Word parse_tree__prog_type__V_14_14;

#line 1167 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 1)));
#line 1167 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 1167 "prog_type.m"
            {
#line 1167 "prog_type.m"
              parse_tree__prog_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1167 "prog_type.m"
              parse_tree__prog_type__ArgsY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1167 "prog_type.m"
              parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1167 "prog_type.m"
              {
#line 1167 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__SymName_10, parse_tree__prog_type__V_41_41);
              }
#line 1166 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1172 "prog_type.m"
                {
#line 1172 "prog_type.m"
                  return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_11, parse_tree__prog_type__ArgsY_13, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                }
#line 1167 "prog_type.m"
            }
#line 1166 "prog_type.m"
        }
#line 1166 "prog_type.m"
      else
#line 1166 "prog_type.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1166 "prog_type.m"
          {
#line 1166 "prog_type.m"
            MR_Word parse_tree__prog_type__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 3)));
#line 1166 "prog_type.m"
            MR_Word parse_tree__prog_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1166 "prog_type.m"
            MR_Word parse_tree__prog_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1166 "prog_type.m"
            MR_Word parse_tree__prog_type__V_52_52;
#line 1166 "prog_type.m"
            MR_Word parse_tree__prog_type__V_53_53;
#line 1166 "prog_type.m"
            MR_Word parse_tree__prog_type__V_54_54;

#line 1178 "prog_type.m"
            parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1178 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1178 "prog_type.m"
              {
#line 1178 "prog_type.m"
                parse_tree__prog_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1178 "prog_type.m"
                parse_tree__prog_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1178 "prog_type.m"
                parse_tree__prog_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 3)));
#line 1166 "prog_type.m"
                if ((parse_tree__prog_type__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1177 "prog_type.m"
                  {
#line 1178 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1177 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1177 "prog_type.m"
                      {
#line 1178 "prog_type.m"
                        parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1177 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1177 "prog_type.m"
                          {
#line 1178 "prog_type.m"
                            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1179 "prog_type.m"
                              {
#line 1179 "prog_type.m"
                                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                              }
#line 1177 "prog_type.m"
                          }
#line 1177 "prog_type.m"
                      }
#line 1177 "prog_type.m"
                  }
#line 1166 "prog_type.m"
                else
#line 1181 "prog_type.m"
                  {
#line 1181 "prog_type.m"
                    MR_Word parse_tree__prog_type__RetX_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_49_49, (MR_Integer) 0)));
#line 1181 "prog_type.m"
                    MR_Word parse_tree__prog_type__RetY_19;
#line 1181 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27;

#line 1182 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_48_48 == parse_tree__prog_type__V_52_52);
#line 1181 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1181 "prog_type.m"
                      {
#line 1182 "prog_type.m"
                        parse_tree__prog_type__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 1181 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1181 "prog_type.m"
                          {
#line 1182 "prog_type.m"
                            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 1182 "prog_type.m"
                            if (parse_tree__prog_type__succeeded)
#line 1182 "prog_type.m"
                              {
#line 1182 "prog_type.m"
                                parse_tree__prog_type__RetY_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_53_53, (MR_Integer) 0)));
#line 1183 "prog_type.m"
                                {
#line 1183 "prog_type.m"
                                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__V_50_50, parse_tree__prog_type__V_54_54, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, &parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27);
                                }
#line 1181 "prog_type.m"
                                if (parse_tree__prog_type__succeeded)
#line 1184 "prog_type.m"
                                  {
#line 1184 "prog_type.m"
                                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__RetX_18, parse_tree__prog_type__RetY_19, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_27_27, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                                  }
#line 1182 "prog_type.m"
                              }
#line 1181 "prog_type.m"
                          }
#line 1181 "prog_type.m"
                      }
#line 1181 "prog_type.m"
                  }
#line 1178 "prog_type.m"
              }
#line 1166 "prog_type.m"
          }
#line 1166 "prog_type.m"
        else
#line 1166 "prog_type.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeX_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1186 "prog_type.m"
            {
#line 1186 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsX_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 1)));
#line 1186 "prog_type.m"
              MR_Word parse_tree__prog_type__ArgsY_40;
#line 1186 "prog_type.m"
              MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeX_6, (MR_Integer) 2)));
#line 1187 "prog_type.m"
              MR_Word parse_tree__prog_type__V_21_21;

#line 1187 "prog_type.m"
              parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1187 "prog_type.m"
              if (parse_tree__prog_type__succeeded)
#line 1187 "prog_type.m"
                {
#line 1187 "prog_type.m"
                  parse_tree__prog_type__ArgsY_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1187 "prog_type.m"
                  parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeY_7, (MR_Integer) 2)));
#line 1188 "prog_type.m"
                  {
#line 1188 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ArgsX_39, parse_tree__prog_type__ArgsY_40, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_22, parse_tree__prog_type__STATE_VARIABLE_Bindings_23);
                  }
#line 1187 "prog_type.m"
                }
#line 1186 "prog_type.m"
            }
#line 1166 "prog_type.m"
          else
#line 1166 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 1166 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1166 "prog_type.m"
  }
#line 1161 "prog_type.m"
}

#line 1140 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_head_type_param_6_p_0(
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_7,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar_8,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1140 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15,
#line 1140 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_16)
#line 1140 "prog_type.m"
{
#line 1148 "prog_type.m"
  while (MR_TRUE)
#line 1148 "prog_type.m"
    {
#line 1148 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1148 "prog_type.m"
      {
#line 1148 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;
#line 1148 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfVar_12;
#line 1144 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfVar_12;

#line 1144 "prog_type.m"
        {
#line 1144 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, ((MR_Box) (parse_tree__prog_type__Var_7)), &parse_tree__prog_type__conv0_BindingOfVar_12);
        }
#line 1144 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1144 "prog_type.m"
          {
#line 1144 "prog_type.m"
            parse_tree__prog_type__BindingOfVar_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfVar_12);
#line 1144 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1144 "prog_type.m"
          }
#line 1148 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1145 "prog_type.m"
          {
#line 1145 "prog_type.m"
            MR_Word parse_tree__prog_type__Var2_13;
#line 1145 "prog_type.m"
            MR_Word parse_tree__prog_type__V_14_14;

#line 1145 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__BindingOfVar_12)) == (MR_mktag((MR_Integer) 0)));
#line 1145 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1145 "prog_type.m"
              {
#line 1145 "prog_type.m"
                parse_tree__prog_type__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 0)));
#line 1145 "prog_type.m"
                parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__BindingOfVar_12, (MR_Integer) 1)));
#line 1146 "prog_type.m"
                /* direct tailcall eliminated */
#line 1146 "prog_type.m"
                {
#line 1146 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var__tmp_copy_7 = parse_tree__prog_type__Var2_13;

#line 1146 "prog_type.m"
                  parse_tree__prog_type__Var_7 = parse_tree__prog_type__Var__tmp_copy_7;
#line 1146 "prog_type.m"
                }
#line 1146 "prog_type.m"
                continue;
#line 1145 "prog_type.m"
              }
#line 1145 "prog_type.m"
          }
#line 1148 "prog_type.m"
        else
#line 1151 "prog_type.m"
          {
#line 1149 "prog_type.m"
            {
#line 1149 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__HeadVar_8)));
            }
#line 1151 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1151 "prog_type.m"
              {
#line 1151 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_16 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15;
#line 1151 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1151 "prog_type.m"
              }
#line 1151 "prog_type.m"
            else
#line 1152 "prog_type.m"
              {
#line 1152 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeInfo_23_23;
#line 1152 "prog_type.m"
                MR_Word parse_tree__prog_type__TypeCtorInfo_24_24;
#line 1152 "prog_type.m"
                MR_Word parse_tree__prog_type__V_18_18;

#line 1152 "prog_type.m"
                {
#line 1152 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Var_7)), parse_tree__prog_type__HeadTypeParams_10);
                }
#line 1152 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1152 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1152 "prog_type.m"
                  {
#line 5536 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5538 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1153 "prog_type.m"
                    {
#line 1153 "prog_type.m"
                      parse_tree__prog_type__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 0) = ((MR_Box) (parse_tree__prog_type__HeadVar_8));
#line 1153 "prog_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_18_18, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1153 "prog_type.m"
                    }
#line 1153 "prog_type.m"
                    {
#line 1153 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_23_23, parse_tree__prog_type__TypeCtorInfo_24_24, ((MR_Box) (parse_tree__prog_type__Var_7)), ((MR_Box) (parse_tree__prog_type__V_18_18)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_15, parse_tree__prog_type__STATE_VARIABLE_Bindings_16);
                    }
#line 1153 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1152 "prog_type.m"
                  }
#line 1152 "prog_type.m"
              }
#line 1151 "prog_type.m"
          }
#line 1148 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1148 "prog_type.m"
      }
#line 1148 "prog_type.m"
      break;
#line 1148 "prog_type.m"
    }
#line 1140 "prog_type.m"
}

#line 1097 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_var_6_p_0(
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__X_7,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__Y_8,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__Kind_9,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_10,
#line 1097 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18,
#line 1097 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_19)
#line 1097 "prog_type.m"
{
#line 1103 "prog_type.m"
  {
#line 1103 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1101 "prog_type.m"
    {
#line 1101 "prog_type.m"
      parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__Y_8)), parse_tree__prog_type__HeadTypeParams_10);
    }
#line 1103 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1102 "prog_type.m"
      {
#line 1102 "prog_type.m"
        return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__X_7, parse_tree__prog_type__Y_8, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
      }
#line 1103 "prog_type.m"
    else
#line 1105 "prog_type.m"
      {
#line 1103 "prog_type.m"
        {
#line 1103 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), parse_tree__prog_type__HeadTypeParams_10);
        }
#line 1105 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1104 "prog_type.m"
          {
#line 1104 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_head_type_param_6_p_0(parse_tree__prog_type__Y_8, parse_tree__prog_type__X_7, parse_tree__prog_type__Kind_9, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
          }
#line 1105 "prog_type.m"
        else
#line 1120 "prog_type.m"
          {
#line 1120 "prog_type.m"
            MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1105 "prog_type.m"
            MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1105 "prog_type.m"
            {
#line 1105 "prog_type.m"
              parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__X_7)), &parse_tree__prog_type__conv0_BindingOfX_12);
            }
#line 1105 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1105 "prog_type.m"
              {
#line 1105 "prog_type.m"
                parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1105 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1105 "prog_type.m"
              }
#line 1120 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1110 "prog_type.m"
              {
#line 1110 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_13;
#line 1106 "prog_type.m"
                MR_Box parse_tree__prog_type__conv1_BindingOfY_13;

#line 1106 "prog_type.m"
                {
#line 1106 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv1_BindingOfY_13);
                }
#line 1106 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1106 "prog_type.m"
                  {
#line 1106 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_13 = ((MR_Word) parse_tree__prog_type__conv1_BindingOfY_13);
#line 1106 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1106 "prog_type.m"
                  }
#line 1110 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1109 "prog_type.m"
                  {
#line 1109 "prog_type.m"
                    return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__BindingOfY_13, parse_tree__prog_type__HeadTypeParams_10, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                  }
#line 1110 "prog_type.m"
                else
#line 1112 "prog_type.m"
                  {
#line 1112 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfX_14;
#line 1113 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_44_44;
#line 1113 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_42_42;
#line 1113 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_15_15;

#line 1112 "prog_type.m"
                    {
#line 1112 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfX_12, &parse_tree__prog_type__SubstBindingOfX_14);
                    }
#line 1113 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfX_14)) == (MR_mktag((MR_Integer) 0)));
#line 1113 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1113 "prog_type.m"
                      {
#line 1113 "prog_type.m"
                        parse_tree__prog_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 0)));
#line 1113 "prog_type.m"
                        parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfX_14, (MR_Integer) 1)));
#line 5707 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1113 "prog_type.m"
                        {
#line 1113 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__V_42_42)));
                        }
#line 1113 "prog_type.m"
                      }
#line 1115 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1115 "prog_type.m"
                      {
#line 1115 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1115 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1115 "prog_type.m"
                      }
#line 1115 "prog_type.m"
                    else
#line 1116 "prog_type.m"
                      {
#line 1116 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_34_34;
#line 1116 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_35_35;

#line 1116 "prog_type.m"
                        {
#line 1116 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfX_14, parse_tree__prog_type__Y_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1116 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1116 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1116 "prog_type.m"
                          {
#line 5746 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5748 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1117 "prog_type.m"
                            {
#line 1117 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_34_34, parse_tree__prog_type__TypeCtorInfo_35_35, ((MR_Box) (parse_tree__prog_type__Y_8)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfX_14)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1117 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1116 "prog_type.m"
                          }
#line 1116 "prog_type.m"
                      }
#line 1112 "prog_type.m"
                  }
#line 1110 "prog_type.m"
              }
#line 1120 "prog_type.m"
            else
#line 1130 "prog_type.m"
              {
#line 1130 "prog_type.m"
                MR_Word parse_tree__prog_type__BindingOfY_27;
#line 1122 "prog_type.m"
                MR_Box parse_tree__prog_type__conv2_BindingOfY_27;

#line 1122 "prog_type.m"
                {
#line 1122 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, ((MR_Box) (parse_tree__prog_type__Y_8)), &parse_tree__prog_type__conv2_BindingOfY_27);
                }
#line 1122 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1122 "prog_type.m"
                  {
#line 1122 "prog_type.m"
                    parse_tree__prog_type__BindingOfY_27 = ((MR_Word) parse_tree__prog_type__conv2_BindingOfY_27);
#line 1122 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1122 "prog_type.m"
                  }
#line 1130 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1123 "prog_type.m"
                  {
#line 1123 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubstBindingOfY_16;
#line 1124 "prog_type.m"
                    MR_Word parse_tree__prog_type__TypeInfo_45_45;
#line 1124 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_43_43;
#line 1124 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_17_17;

#line 1123 "prog_type.m"
                    {
#line 1123 "prog_type.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__BindingOfY_27, &parse_tree__prog_type__SubstBindingOfY_16);
                    }
#line 1124 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__SubstBindingOfY_16)) == (MR_mktag((MR_Integer) 0)));
#line 1124 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1124 "prog_type.m"
                      {
#line 1124 "prog_type.m"
                        parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 0)));
#line 1124 "prog_type.m"
                        parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SubstBindingOfY_16, (MR_Integer) 1)));
#line 5817 "parse_tree.prog_type.c"
                        parse_tree__prog_type__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1124 "prog_type.m"
                        {
#line 1124 "prog_type.m"
                          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_45_45, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_43_43)));
                        }
#line 1124 "prog_type.m"
                      }
#line 1126 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1126 "prog_type.m"
                      {
#line 1126 "prog_type.m"
                        *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1126 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 1126 "prog_type.m"
                      }
#line 1126 "prog_type.m"
                    else
#line 1127 "prog_type.m"
                      {
#line 1127 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeInfo_38_38;
#line 1127 "prog_type.m"
                        MR_Word parse_tree__prog_type__TypeCtorInfo_39_39;

#line 1127 "prog_type.m"
                        {
#line 1127 "prog_type.m"
                          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__SubstBindingOfY_16, parse_tree__prog_type__X_7, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18);
                        }
#line 1127 "prog_type.m"
                        parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1127 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1127 "prog_type.m"
                          {
#line 5856 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 5858 "parse_tree.prog_type.c"
                            parse_tree__prog_type__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1128 "prog_type.m"
                            {
#line 1128 "prog_type.m"
                              mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_38_38, parse_tree__prog_type__TypeCtorInfo_39_39, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__SubstBindingOfY_16)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                            }
#line 1128 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1127 "prog_type.m"
                          }
#line 1127 "prog_type.m"
                      }
#line 1123 "prog_type.m"
                  }
#line 1130 "prog_type.m"
                else
#line 1134 "prog_type.m"
                  {
#line 1132 "prog_type.m"
                    {
#line 1132 "prog_type.m"
                      parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__Y_8)));
                    }
#line 1134 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 1134 "prog_type.m"
                      *parse_tree__prog_type__STATE_VARIABLE_Bindings_19 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18;
#line 1134 "prog_type.m"
                    else
#line 1135 "prog_type.m"
                      {
#line 1135 "prog_type.m"
                        MR_Word parse_tree__prog_type__V_25_25;

#line 1135 "prog_type.m"
                        {
#line 1135 "prog_type.m"
                          parse_tree__prog_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__Y_8));
#line 1135 "prog_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__Kind_9));
#line 1135 "prog_type.m"
                        }
#line 1135 "prog_type.m"
                        {
#line 1135 "prog_type.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__X_7)), ((MR_Box) (parse_tree__prog_type__V_25_25)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_18, parse_tree__prog_type__STATE_VARIABLE_Bindings_19);
                        }
#line 1135 "prog_type.m"
                      }
#line 1134 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1134 "prog_type.m"
                  }
#line 1130 "prog_type.m"
              }
#line 1120 "prog_type.m"
          }
#line 1105 "prog_type.m"
      }
#line 1103 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1103 "prog_type.m"
  }
#line 1097 "prog_type.m"
}

#line 1081 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__type_unify_var_5_p_0(
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__VarX_6,
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeY_7,
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_8,
#line 1081 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13,
#line 1081 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_Bindings_14)
#line 1081 "prog_type.m"
{
#line 1087 "prog_type.m"
  {
#line 1087 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__TypeY_7)) == (MR_mktag((MR_Integer) 0)));
#line 1087 "prog_type.m"
    MR_Word parse_tree__prog_type__VarY_10;
#line 1087 "prog_type.m"
    MR_Word parse_tree__prog_type__KindY_11;

#line 1085 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1085 "prog_type.m"
      {
#line 1085 "prog_type.m"
        parse_tree__prog_type__VarY_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 0)));
#line 1085 "prog_type.m"
        parse_tree__prog_type__KindY_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeY_7, (MR_Integer) 1)));
#line 1086 "prog_type.m"
        {
#line 1086 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_var_6_p_0(parse_tree__prog_type__VarX_6, parse_tree__prog_type__VarY_10, parse_tree__prog_type__KindY_11, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
        }
#line 1085 "prog_type.m"
      }
#line 1085 "prog_type.m"
    else
#line 1090 "prog_type.m"
      {
#line 1090 "prog_type.m"
        MR_Word parse_tree__prog_type__BindingOfX_12;
#line 1087 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_BindingOfX_12;

#line 1087 "prog_type.m"
        {
#line 1087 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, ((MR_Box) (parse_tree__prog_type__VarX_6)), &parse_tree__prog_type__conv0_BindingOfX_12);
        }
#line 1087 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1087 "prog_type.m"
          {
#line 1087 "prog_type.m"
            parse_tree__prog_type__BindingOfX_12 = ((MR_Word) parse_tree__prog_type__conv0_BindingOfX_12);
#line 1087 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1087 "prog_type.m"
          }
#line 1090 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1089 "prog_type.m"
          {
#line 1089 "prog_type.m"
            return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__BindingOfX_12, parse_tree__prog_type__TypeY_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
          }
#line 1090 "prog_type.m"
        else
#line 1092 "prog_type.m"
          {
#line 1092 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_21_21;
#line 1092 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtorInfo_22_22;
#line 1093 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeInfo_20_20;

#line 1092 "prog_type.m"
            {
#line 1092 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_occurs_3_p_0(parse_tree__prog_type__TypeY_7, parse_tree__prog_type__VarX_6, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13);
            }
#line 1092 "prog_type.m"
            parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1092 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1092 "prog_type.m"
              {
#line 6019 "parse_tree.prog_type.c"
                parse_tree__prog_type__TypeInfo_20_20 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 1093 "prog_type.m"
                {
#line 1093 "prog_type.m"
                  parse_tree__prog_type__succeeded = mercury__list__member_2_p_0(parse_tree__prog_type__TypeInfo_20_20, ((MR_Box) (parse_tree__prog_type__VarX_6)), parse_tree__prog_type__HeadTypeParams_8);
                }
#line 1093 "prog_type.m"
                parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 1092 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1092 "prog_type.m"
                  {
#line 6032 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeInfo_21_21 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 6034 "parse_tree.prog_type.c"
                    parse_tree__prog_type__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1094 "prog_type.m"
                    {
#line 1094 "prog_type.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_type__TypeInfo_21_21, parse_tree__prog_type__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__prog_type__VarX_6)), ((MR_Box) (parse_tree__prog_type__TypeY_7)), parse_tree__prog_type__STATE_VARIABLE_Bindings_0_13, parse_tree__prog_type__STATE_VARIABLE_Bindings_14);
                    }
#line 1094 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1092 "prog_type.m"
                  }
#line 1092 "prog_type.m"
              }
#line 1092 "prog_type.m"
          }
#line 1090 "prog_type.m"
      }
#line 1087 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1087 "prog_type.m"
  }
#line 1081 "prog_type.m"
}

#line 897 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(
#line 897 "prog_type.m"
  MR_Word parse_tree__prog_type__VarTypes_3,
#line 897 "prog_type.m"
  MR_Word parse_tree__prog_type__Var_4)
#line 897 "prog_type.m"
{
#line 900 "prog_type.m"
  {
#line 900 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 900 "prog_type.m"
    MR_Word parse_tree__prog_type__Type_5;

#line 901 "prog_type.m"
    {
#line 901 "prog_type.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(parse_tree__prog_type__VarTypes_3, parse_tree__prog_type__Var_4, &parse_tree__prog_type__Type_5);
    }
#line 902 "prog_type.m"
    {
#line 902 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(parse_tree__prog_type__Type_5);
    }
#line 900 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 900 "prog_type.m"
  }
#line 897 "prog_type.m"
}

#line 666 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_list_2_3_p_0(
#line 666 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 666 "prog_type.m"
  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0_2,
#line 666 "prog_type.m"
  MR_Word * parse_tree__prog_type__STATE_VARIABLE_V_3)
#line 666 "prog_type.m"
{
#line 669 "prog_type.m"
  while (MR_TRUE)
#line 669 "prog_type.m"
    {
#line 669 "prog_type.m"
      /* tailcall optimized into a loop */
#line 669 "prog_type.m"
      {
#line 669 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 669 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "prog_type.m"
          *parse_tree__prog_type__STATE_VARIABLE_V_3 = parse_tree__prog_type__STATE_VARIABLE_V_0_2;
#line 669 "prog_type.m"
        else
#line 670 "prog_type.m"
          {
#line 670 "prog_type.m"
            MR_Word parse_tree__prog_type__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 670 "prog_type.m"
            MR_Word parse_tree__prog_type__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 670 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 671 "prog_type.m"
            {
#line 671 "prog_type.m"
              parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_7, parse_tree__prog_type__STATE_VARIABLE_V_0_2, &parse_tree__prog_type__STATE_VARIABLE_V_12_12);
            }
#line 672 "prog_type.m"
            /* direct tailcall eliminated */
#line 672 "prog_type.m"
            {
#line 672 "prog_type.m"
              MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Types_8;
#line 672 "prog_type.m"
              MR_Word parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_12_12;

#line 672 "prog_type.m"
              parse_tree__prog_type__STATE_VARIABLE_V_0_2 = parse_tree__prog_type__STATE_VARIABLE_V_0__tmp_copy_2;
#line 672 "prog_type.m"
              parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 672 "prog_type.m"
            }
#line 672 "prog_type.m"
            continue;
#line 670 "prog_type.m"
          }
#line 669 "prog_type.m"
      }
#line 669 "prog_type.m"
      break;
#line 669 "prog_type.m"
    }
#line 666 "prog_type.m"
}

#line 639 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_vars_2_3_p_0(
#line 639 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 639 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 639 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 639 "prog_type.m"
{
#line 641 "prog_type.m"
  while (MR_TRUE)
#line 641 "prog_type.m"
    {
#line 641 "prog_type.m"
      /* tailcall optimized into a loop */
#line 641 "prog_type.m"
      {
#line 641 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 641 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 644 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__HeadVar__2_2;
#line 641 "prog_type.m"
        else
#line 641 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 642 "prog_type.m"
            {
#line 642 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 642 "prog_type.m"
              MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 642 "prog_type.m"
              MR_Word parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 643 "prog_type.m"
              {
#line 643 "prog_type.m"
                parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_8, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 643 "prog_type.m"
                return;
              }
#line 642 "prog_type.m"
            }
#line 641 "prog_type.m"
          else
#line 641 "prog_type.m"
            if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 641 "prog_type.m"
              {
#line 641 "prog_type.m"
                MR_Word parse_tree__prog_type__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 641 "prog_type.m"
                MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 641 "prog_type.m"
                {
#line 641 "prog_type.m"
                  MR_Word base;
#line 641 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__3_3 = base;
#line 641 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_4));
#line 641 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 641 "prog_type.m"
                }
#line 641 "prog_type.m"
              }
#line 641 "prog_type.m"
            else
#line 641 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 655 "prog_type.m"
                {
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__STATE_VARIABLE_V_40_40;
#line 655 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 656 "prog_type.m"
                  {
#line 656 "prog_type.m"
                    parse_tree__prog_type__STATE_VARIABLE_V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 0) = ((MR_Box) (parse_tree__prog_type__Var_34));
#line 656 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__STATE_VARIABLE_V_40_40, 1) = ((MR_Box) (parse_tree__prog_type__HeadVar__2_2));
#line 656 "prog_type.m"
                  }
#line 657 "prog_type.m"
                  {
#line 657 "prog_type.m"
                    parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_35, parse_tree__prog_type__STATE_VARIABLE_V_40_40, parse_tree__prog_type__HeadVar__3_3);
#line 657 "prog_type.m"
                    return;
                  }
#line 655 "prog_type.m"
                }
#line 641 "prog_type.m"
              else
#line 641 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 645 "prog_type.m"
                  {
#line 645 "prog_type.m"
                    MR_Word parse_tree__prog_type__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "prog_type.m"
                    MR_Word parse_tree__prog_type__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 645 "prog_type.m"
                    MR_Word parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 645 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 646 "prog_type.m"
                    {
#line 646 "prog_type.m"
                      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_18, parse_tree__prog_type__HeadVar__2_2, &parse_tree__prog_type__STATE_VARIABLE_V_26_26);
                    }
#line 650 "prog_type.m"
                    if ((parse_tree__prog_type__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "prog_type.m"
                      *parse_tree__prog_type__HeadVar__3_3 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;
#line 650 "prog_type.m"
                    else
#line 648 "prog_type.m"
                      {
#line 648 "prog_type.m"
                        MR_Word parse_tree__prog_type__Ret_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_19, (MR_Integer) 0)));

#line 649 "prog_type.m"
                        /* direct tailcall eliminated */
#line 649 "prog_type.m"
                        {
#line 649 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_23;
#line 649 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__STATE_VARIABLE_V_26_26;

#line 649 "prog_type.m"
                          parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 649 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 649 "prog_type.m"
                        }
#line 649 "prog_type.m"
                        continue;
#line 648 "prog_type.m"
                      }
#line 645 "prog_type.m"
                  }
#line 641 "prog_type.m"
                else
#line 641 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 658 "prog_type.m"
                    {
#line 658 "prog_type.m"
                      MR_Word parse_tree__prog_type__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 658 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 659 "prog_type.m"
                      /* direct tailcall eliminated */
#line 659 "prog_type.m"
                      {
#line 659 "prog_type.m"
                        MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_42;

#line 659 "prog_type.m"
                        parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 659 "prog_type.m"
                      }
#line 659 "prog_type.m"
                      continue;
#line 658 "prog_type.m"
                    }
#line 641 "prog_type.m"
                  else
#line 653 "prog_type.m"
                    {
#line 653 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 653 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 654 "prog_type.m"
                      {
#line 654 "prog_type.m"
                        parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Args_28, parse_tree__prog_type__HeadVar__2_2, parse_tree__prog_type__HeadVar__3_3);
#line 654 "prog_type.m"
                        return;
                      }
#line 653 "prog_type.m"
                    }
#line 641 "prog_type.m"
      }
#line 641 "prog_type.m"
      break;
#line 641 "prog_type.m"
    }
#line 639 "prog_type.m"
}

#line 427 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
#line 427 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeInfo_for_T_11,
#line 427 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__1_1,
#line 427 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadVar__2_2,
#line 427 "prog_type.m"
  MR_Word * parse_tree__prog_type__HeadVar__3_3)
#line 427 "prog_type.m"
{
#line 1443 "prog_type.m"
  {
#line 1443 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1443 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1443 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1443 "prog_type.m"
    else
#line 1444 "prog_type.m"
      {
#line 1444 "prog_type.m"
        MR_Box parse_tree__prog_type__X_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0));
#line 1444 "prog_type.m"
        MR_Word parse_tree__prog_type__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1444 "prog_type.m"
        MR_Box parse_tree__prog_type__Y_8;
#line 1444 "prog_type.m"
        MR_Word parse_tree__prog_type__Ys_9;
#line 1447 "prog_type.m"
        MR_Box parse_tree__prog_type__Y0_10;

#line 1445 "prog_type.m"
        {
#line 1445 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__map__search_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__X_6, &parse_tree__prog_type__Y0_10);
        }
#line 1447 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1446 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__Y0_10;
#line 1447 "prog_type.m"
        else
#line 1448 "prog_type.m"
          parse_tree__prog_type__Y_8 = parse_tree__prog_type__X_6;
#line 1450 "prog_type.m"
        {
#line 1450 "prog_type.m"
          parse_tree__prog_type__apply_partial_map_to_list_3_p_0(parse_tree__prog_type__TypeInfo_for_T_11, parse_tree__prog_type__HeadVar__1_1, parse_tree__prog_type__Xs_7, &parse_tree__prog_type__Ys_9);
        }
#line 1444 "prog_type.m"
        {
#line 1444 "prog_type.m"
          MR_Word base;
#line 1444 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 1444 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_type__Y_8;
#line 1444 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Ys_9));
#line 1444 "prog_type.m"
        }
#line 1444 "prog_type.m"
      }
#line 1443 "prog_type.m"
  }
#line 427 "prog_type.m"
}

#line 1430 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(
#line 1430 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1430 "prog_type.m"
{
#line 1430 "prog_type.m"
  {
#line 1430 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1430 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
#line 1430 "prog_type.m"
  }
#line 1430 "prog_type.m"
}

#line 1431 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3(
#line 1431 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1431 "prog_type.m"
{
#line 1431 "prog_type.m"
  {
#line 1431 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1431 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28);
#line 1431 "prog_type.m"
    {
#line 1431 "prog_type.m"
      parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(parse_tree__prog_type__env_ptr);
#line 1431 "prog_type.m"
      return;
    }
#line 1431 "prog_type.m"
  }
#line 1431 "prog_type.m"
}

#line 1430 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_2(
#line 1430 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1430 "prog_type.m"
{
#line 1430 "prog_type.m"
  {
#line 1430 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1430 "prog_type.m"
    {
#line 1433 "prog_type.m"
      MR_Word parse_tree__prog_type__V_29_29;
#line 1433 "prog_type.m"
      MR_Word parse_tree__prog_type__V_30_30;

#line 1433 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_mktag((MR_Integer) 0)));
#line 1433 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1433 "prog_type.m"
        {
#line 1433 "prog_type.m"
          parse_tree__prog_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0)));
#line 1433 "prog_type.m"
          parse_tree__prog_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1)));
#line 1433 "prog_type.m"
        }
#line 1432 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1432 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1432 "prog_type.m"
        {
#line 1432 "prog_type.m"
          parse_tree__prog_type__arg_type_list_subsumes_8_p_0_1(parse_tree__prog_type__env_ptr);
#line 1432 "prog_type.m"
          return;
        }
#line 1430 "prog_type.m"
    }
#line 1430 "prog_type.m"
  }
#line 1430 "prog_type.m"
}

#line 1430 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(
#line 1430 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1430 "prog_type.m"
{
#line 1430 "prog_type.m"
  {
#line 1430 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1430 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
#line 1430 "prog_type.m"
      {
#line 1430 "prog_type.m"
        {
#line 1431 "prog_type.m"
          {
#line 1431 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type__arg_type_list_subsumes_8_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 1430 "prog_type.m"
        }
#line 1430 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
#line 1430 "prog_type.m"
      }
#line 1430 "prog_type.m"
    else
#line 1430 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1430 "prog_type.m"
  }
#line 1430 "prog_type.m"
}

#line 419 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__arg_type_list_subsumes_8_p_0(
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__TVarSet_9,
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__ExistQVars_10,
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__ActualArgTypes_11,
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__HeadTypeParams_12,
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__CalleeTVarSet_13,
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__PredKindMap_14,
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__PredExistQVars_15,
#line 419 "prog_type.m"
  MR_Word parse_tree__prog_type__PredArgTypes_16)
#line 419 "prog_type.m"
{
#line 419 "prog_type.m"
  {
#line 419 "prog_type.m"
    struct parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0_s parse_tree__prog_type__env;

#line 1390 "prog_type.m"
    {
#line 1390 "prog_type.m"
      MR_Word parse_tree__prog_type__Renaming_18;
#line 1390 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentKindMap_19;
#line 1390 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentArgTypes_20;
#line 1390 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentExistQVars_21;
#line 1390 "prog_type.m"
      MR_Word parse_tree__prog_type__ParentToActualSubst_22;
#line 1392 "prog_type.m"
      MR_Word parse_tree__prog_type___TVarSet1_17;

#line 1392 "prog_type.m"
      {
#line 1392 "prog_type.m"
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(parse_tree__prog_type__TVarSet_9, parse_tree__prog_type__CalleeTVarSet_13, &parse_tree__prog_type___TVarSet1_17, &parse_tree__prog_type__Renaming_18);
      }
#line 1393 "prog_type.m"
      {
#line 1393 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredKindMap_14, &parse_tree__prog_type__ParentKindMap_19);
      }
#line 1395 "prog_type.m"
      {
#line 1395 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredArgTypes_16, &parse_tree__prog_type__ParentArgTypes_20);
      }
#line 1397 "prog_type.m"
      {
#line 1397 "prog_type.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(parse_tree__prog_type__Renaming_18, parse_tree__prog_type__PredExistQVars_15, &parse_tree__prog_type__ParentExistQVars_21);
      }
#line 1413 "prog_type.m"
      if ((parse_tree__prog_type__ExistQVars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1412 "prog_type.m"
        {
#line 1412 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, &parse_tree__prog_type__ParentToActualSubst_22);
        }
#line 1413 "prog_type.m"
      else
#line 1414 "prog_type.m"
        {
#line 1414 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 1418 "prog_type.m"
          {
#line 1418 "prog_type.m"
            parse_tree__prog_type__V_31_31 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 1417 "prog_type.m"
          {
#line 1417 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__ParentArgTypes_20, parse_tree__prog_type__ActualArgTypes_11, parse_tree__prog_type__HeadTypeParams_12, parse_tree__prog_type__V_31_31, &parse_tree__prog_type__ParentToActualSubst_22);
          }
#line 1414 "prog_type.m"
        }
#line 1390 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded)
#line 1426 "prog_type.m"
        {
#line 1426 "prog_type.m"
          if ((parse_tree__prog_type__ParentExistQVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1424 "prog_type.m"
            (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
#line 1426 "prog_type.m"
          else
#line 1427 "prog_type.m"
            {
#line 1428 "prog_type.m"
              {
#line 1428 "prog_type.m"
                parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(parse_tree__prog_type__ParentKindMap_19, parse_tree__prog_type__ParentToActualSubst_22, parse_tree__prog_type__ParentExistQVars_21, &(parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
              }
#line 1430 "prog_type.m"
              {
#line 1430 "prog_type.m"
                parse_tree__prog_type__arg_type_list_subsumes_8_p_0_4(&parse_tree__prog_type__env);
              }
#line 1430 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded);
#line 1427 "prog_type.m"
            }
#line 1426 "prog_type.m"
        }
#line 1390 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__arg_type_list_subsumes_8_p_0_env_0__succeeded;
#line 1390 "prog_type.m"
    }
#line 419 "prog_type.m"
  }
#line 419 "prog_type.m"
}

#line 408 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_list_subsumes_det_3_p_0(
#line 408 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 408 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 408 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 408 "prog_type.m"
{
#line 1385 "prog_type.m"
  {
#line 1385 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1385 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1383 "prog_type.m"
    {
#line 1383 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1385 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1384 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1385 "prog_type.m"
    else
#line 1386 "prog_type.m"
      {
#line 1386 "prog_type.m"
        {
#line 1386 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
#line 1386 "prog_type.m"
          return;
        }
#line 1386 "prog_type.m"
      }
#line 1385 "prog_type.m"
  }
#line 408 "prog_type.m"
}

#line 403 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_list_subsumes_3_p_0(
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesA_4,
#line 403 "prog_type.m"
  MR_Word parse_tree__prog_type__TypesB_5,
#line 403 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 403 "prog_type.m"
{
#line 1375 "prog_type.m"
  {
#line 1375 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1375 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
#line 1375 "prog_type.m"
    MR_Word parse_tree__prog_type__TypesBVars_7;
#line 1375 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubst0_8;
#line 1375 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_13;
#line 1375 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_14;

#line 662 "prog_type.m"
    {
#line 662 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__TypesB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 6783 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 663 "prog_type.m"
    {
#line 663 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 664 "prog_type.m"
    {
#line 664 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypesBVars_7);
    }
#line 1379 "prog_type.m"
    {
#line 1379 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1380 "prog_type.m"
    {
#line 1380 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(parse_tree__prog_type__TypesA_4, parse_tree__prog_type__TypesB_5, parse_tree__prog_type__TypesBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1375 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1375 "prog_type.m"
  }
#line 403 "prog_type.m"
}

#line 397 "prog_type.m"
void MR_CALL 
parse_tree__prog_type__type_subsumes_det_3_p_0(
#line 397 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeA_4,
#line 397 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeB_5,
#line 397 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 397 "prog_type.m"
{
#line 1371 "prog_type.m"
  {
#line 1371 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1371 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubstPrime_7;

#line 1369 "prog_type.m"
    {
#line 1369 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_subsumes_3_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, &parse_tree__prog_type__TypeSubstPrime_7);
    }
#line 1371 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1370 "prog_type.m"
      *parse_tree__prog_type__TypeSubst_6 = parse_tree__prog_type__TypeSubstPrime_7;
#line 1371 "prog_type.m"
    else
#line 1372 "prog_type.m"
      {
#line 1372 "prog_type.m"
        {
#line 1372 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_subsumes_det\'/3", (MR_String) "type_subsumes failed");
#line 1372 "prog_type.m"
          return;
        }
#line 1372 "prog_type.m"
      }
#line 1371 "prog_type.m"
  }
#line 397 "prog_type.m"
}

#line 393 "prog_type.m"
MR_bool MR_CALL 
parse_tree__prog_type__type_subsumes_3_p_0(
#line 393 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeA_4,
#line 393 "prog_type.m"
  MR_Word parse_tree__prog_type__TypeB_5,
#line 393 "prog_type.m"
  MR_Word * parse_tree__prog_type__TypeSubst_6)
#line 393 "prog_type.m"
{
#line 1361 "prog_type.m"
  {
#line 1361 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 1361 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_16;
#line 1361 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeBVars_7;
#line 1361 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeSubst0_8;
#line 1361 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_13;
#line 1361 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_14;

#line 635 "prog_type.m"
    {
#line 635 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__TypeB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_13);
    }
#line 6888 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_16 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 636 "prog_type.m"
    {
#line 636 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__RevTVars_13, &parse_tree__prog_type__TVarsDups_14);
    }
#line 637 "prog_type.m"
    {
#line 637 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_16, parse_tree__prog_type__TVarsDups_14, &parse_tree__prog_type__TypeBVars_7);
    }
#line 1365 "prog_type.m"
    {
#line 1365 "prog_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &parse_tree__prog_type__TypeSubst0_8);
    }
#line 1366 "prog_type.m"
    {
#line 1366 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__TypeA_4, parse_tree__prog_type__TypeB_5, parse_tree__prog_type__TypeBVars_7, parse_tree__prog_type__TypeSubst0_8, parse_tree__prog_type__TypeSubst_6);
    }
#line 1361 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1361 "prog_type.m"
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
#line 1301 "prog_type.m"
  while (MR_TRUE)
#line 1301 "prog_type.m"
    {
#line 1301 "prog_type.m"
      /* tailcall optimized into a loop */
#line 1301 "prog_type.m"
      {
#line 1301 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 1301 "prog_type.m"
        if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1301 "prog_type.m"
          {
#line 1301 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1301 "prog_type.m"
              {
#line 1301 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_5 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4;
#line 1301 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1301 "prog_type.m"
              }
#line 1301 "prog_type.m"
          }
#line 1301 "prog_type.m"
        else
#line 1302 "prog_type.m"
          {
#line 1302 "prog_type.m"
            MR_Word parse_tree__prog_type__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 1302 "prog_type.m"
            MR_Word parse_tree__prog_type__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1302 "prog_type.m"
            MR_Word parse_tree__prog_type__Y_12;
#line 1302 "prog_type.m"
            MR_Word parse_tree__prog_type__Ys_13;
#line 1302 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1302 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1302 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1302 "prog_type.m"
              {
#line 1302 "prog_type.m"
                parse_tree__prog_type__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1302 "prog_type.m"
                parse_tree__prog_type__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1303 "prog_type.m"
                {
#line 1303 "prog_type.m"
                  parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_5_p_0(parse_tree__prog_type__X_10, parse_tree__prog_type__Y_12, parse_tree__prog_type__HeadVar__3_3, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
                }
#line 1302 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 1304 "prog_type.m"
                  {
#line 1304 "prog_type.m"
                    /* direct tailcall eliminated */
#line 1304 "prog_type.m"
                    {
#line 1304 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Xs_11;
#line 1304 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__2__tmp_copy_2 = parse_tree__prog_type__Ys_13;
#line 1304 "prog_type.m"
                      MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1304 "prog_type.m"
                      parse_tree__prog_type__STATE_VARIABLE_Bindings_0_4 = parse_tree__prog_type__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 1304 "prog_type.m"
                      parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__2__tmp_copy_2;
#line 1304 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 1304 "prog_type.m"
                    }
#line 1304 "prog_type.m"
                    continue;
#line 1304 "prog_type.m"
                  }
#line 1302 "prog_type.m"
              }
#line 1302 "prog_type.m"
          }
#line 1301 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 1301 "prog_type.m"
      }
#line 1301 "prog_type.m"
      break;
#line 1301 "prog_type.m"
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
#line 1071 "prog_type.m"
  {
#line 1071 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__X_6)) == (MR_mktag((MR_Integer) 0)));
#line 1071 "prog_type.m"
    MR_Word parse_tree__prog_type__VarX_10;
#line 1069 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 1069 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 1069 "prog_type.m"
      {
#line 1069 "prog_type.m"
        parse_tree__prog_type__VarX_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 0)));
#line 1069 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__X_6, (MR_Integer) 1)));
#line 1070 "prog_type.m"
        {
#line 1070 "prog_type.m"
          return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarX_10, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
        }
#line 1069 "prog_type.m"
      }
#line 1069 "prog_type.m"
    else
#line 1073 "prog_type.m"
      {
#line 1073 "prog_type.m"
        MR_Word parse_tree__prog_type__VarY_12;
#line 1071 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 1071 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Y_7)) == (MR_mktag((MR_Integer) 0)));
#line 1071 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 1071 "prog_type.m"
          {
#line 1071 "prog_type.m"
            parse_tree__prog_type__VarY_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 0)));
#line 1071 "prog_type.m"
            parse_tree__prog_type__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Y_7, (MR_Integer) 1)));
#line 1072 "prog_type.m"
            {
#line 1072 "prog_type.m"
              return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_var_5_p_0(parse_tree__prog_type__VarY_12, parse_tree__prog_type__X_6, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
            }
#line 1071 "prog_type.m"
          }
#line 1071 "prog_type.m"
        else
#line 1075 "prog_type.m"
          {
#line 1075 "prog_type.m"
            MR_Word parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;

#line 1073 "prog_type.m"
            {
#line 1073 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_nonvar_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, &parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18);
            }
#line 1075 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 1075 "prog_type.m"
              {
#line 1075 "prog_type.m"
                *parse_tree__prog_type__STATE_VARIABLE_Bindings_15 = parse_tree__prog_type__STATE_VARIABLE_Bindings_18_18;
#line 1075 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1075 "prog_type.m"
              }
#line 1075 "prog_type.m"
            else
#line 1078 "prog_type.m"
              {
#line 1078 "prog_type.m"
                return parse_tree__prog_type__succeeded = parse_tree__prog_type__type_unify_special_5_p_0(parse_tree__prog_type__X_6, parse_tree__prog_type__Y_7, parse_tree__prog_type__HeadTypeParams_8, parse_tree__prog_type__STATE_VARIABLE_Bindings_0_14, parse_tree__prog_type__STATE_VARIABLE_Bindings_15);
              }
#line 1075 "prog_type.m"
          }
#line 1073 "prog_type.m"
      }
#line 1071 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1071 "prog_type.m"
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
#line 1039 "prog_type.m"
  {
#line 1039 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 1039 "prog_type.m"
    {
#line 1039 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_p_0(parse_tree__prog_type__Globals_9, parse_tree__prog_type__ReserveTagPragma_11, parse_tree__prog_type__Ctors_12, parse_tree__prog_type__MaybeUserEqCmp_13, parse_tree__prog_type__SingleFunctorName_14, parse_tree__prog_type__SingleArgType_15, parse_tree__prog_type__MaybeSingleArgName_16);
    }
#line 1039 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 1039 "prog_type.m"
  }
#line 372 "prog_type.m"
}

#line 1024 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_1(
#line 1024 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1024 "prog_type.m"
{
#line 1024 "prog_type.m"
  {
#line 1024 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1024 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0, 1);
#line 1024 "prog_type.m"
  }
#line 1024 "prog_type.m"
}

#line 1025 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_3(
#line 1025 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1025 "prog_type.m"
{
#line 1025 "prog_type.m"
  {
#line 1025 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1025 "prog_type.m"
    (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8 = ((MR_Word) (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8);
#line 1025 "prog_type.m"
    {
#line 1025 "prog_type.m"
      parse_tree__prog_type__du_type_is_enum_2_p_0_2(parse_tree__prog_type__env_ptr);
#line 1025 "prog_type.m"
      return;
    }
#line 1025 "prog_type.m"
  }
#line 1025 "prog_type.m"
}

#line 1024 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_2(
#line 1024 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1024 "prog_type.m"
{
#line 1024 "prog_type.m"
  {
#line 1024 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1024 "prog_type.m"
    {
#line 1027 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 0)));
#line 1027 "prog_type.m"
      MR_Word parse_tree__prog_type__ExistConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 1)));
#line 1027 "prog_type.m"
      MR_Word parse_tree__prog_type__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 3)));
#line 1027 "prog_type.m"
      MR_Word parse_tree__prog_type___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 2)));
#line 1027 "prog_type.m"
      MR_Word parse_tree__prog_type___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctor_8, (MR_Integer) 4)));

#line 1028 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistQTVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1027 "prog_type.m"
        {
#line 1029 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__ExistConstraints_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "prog_type.m"
          if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1030 "prog_type.m"
            (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = (parse_tree__prog_type__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "prog_type.m"
        }
#line 1026 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 1026 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1026 "prog_type.m"
        {
#line 1026 "prog_type.m"
          parse_tree__prog_type__du_type_is_enum_2_p_0_1(parse_tree__prog_type__env_ptr);
#line 1026 "prog_type.m"
          return;
        }
#line 1024 "prog_type.m"
    }
#line 1024 "prog_type.m"
  }
#line 1024 "prog_type.m"
}

#line 1024 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__du_type_is_enum_2_p_0_4(
#line 1024 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 1024 "prog_type.m"
{
#line 1024 "prog_type.m"
  {
#line 1024 "prog_type.m"
    struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__du_type_is_enum_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 1024 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__commit_0) == 0)
#line 1024 "prog_type.m"
      {
#line 1024 "prog_type.m"
        {
#line 1025 "prog_type.m"
          {
#line 1025 "prog_type.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__conv0_Ctor_8, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, parse_tree__prog_type__du_type_is_enum_2_p_0_3, parse_tree__prog_type__env_ptr);
          }
#line 1024 "prog_type.m"
        }
#line 1024 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_FALSE;
#line 1024 "prog_type.m"
      }
#line 1024 "prog_type.m"
    else
#line 1024 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 1024 "prog_type.m"
  }
#line 1024 "prog_type.m"
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
#line 1022 "prog_type.m"
    {
#line 1022 "prog_type.m"
      MR_Word parse_tree__prog_type__TypeCtorInfo_17_17;
#line 1022 "prog_type.m"
      MR_Integer parse_tree__prog_type__NumFunctors_14;
#line 1022 "prog_type.m"
      MR_Word parse_tree__prog_type__V_15_15;
#line 1023 "prog_type.m"
      MR_Word parse_tree__prog_type__V_5_5;
#line 1023 "prog_type.m"
      MR_Word parse_tree__prog_type__V_6_6;
#line 1023 "prog_type.m"
      MR_Word parse_tree__prog_type__V_7_7;

#line 1023 "prog_type.m"
      (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_type.m"
      if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1023 "prog_type.m"
        {
#line 1023 "prog_type.m"
          parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 0)));
#line 1023 "prog_type.m"
          parse_tree__prog_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, (MR_Integer) 1)));
#line 1023 "prog_type.m"
          (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_type.m"
          if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1023 "prog_type.m"
            {
#line 1023 "prog_type.m"
              parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, (MR_Integer) 0)));
#line 1023 "prog_type.m"
              parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, (MR_Integer) 1)));
#line 1024 "prog_type.m"
              {
#line 1024 "prog_type.m"
                parse_tree__prog_type__du_type_is_enum_2_p_0_4(&parse_tree__prog_type__env);
              }
#line 1024 "prog_type.m"
              (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded);
#line 1022 "prog_type.m"
              if ((parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded)
#line 1022 "prog_type.m"
                {
#line 7378 "parse_tree.prog_type.c"
                  parse_tree__prog_type__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 1032 "prog_type.m"
                  {
#line 1032 "prog_type.m"
                    mercury__list__length_2_p_0(parse_tree__prog_type__TypeCtorInfo_17_17, (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__Ctors_3, &parse_tree__prog_type__NumFunctors_14);
                  }
#line 1033 "prog_type.m"
                  {
#line 1033 "prog_type.m"
                    mercury__int__log2_2_p_0(parse_tree__prog_type__NumFunctors_14, parse_tree__prog_type__NumBits_4);
                  }
#line 1033 "prog_type.m"
                  (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded = MR_TRUE;
#line 1022 "prog_type.m"
                }
#line 1023 "prog_type.m"
            }
#line 1023 "prog_type.m"
        }
#line 1022 "prog_type.m"
      return (parse_tree__prog_type__env).parse_tree__prog_type__du_type_is_enum_2_p_0_env_0__succeeded;
#line 1022 "prog_type.m"
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
#line 983 "prog_type.m"
  {
#line 983 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Ctors_2)) == (MR_mktag((MR_Integer) 1)));
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__Ctor_3;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__SingleCtor_10;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistQVars_11;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__V_17_17;
#line 983 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 983 "prog_type.m"
    MR_String parse_tree__prog_type__Name_21;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type___Constraints_12;
#line 992 "prog_type.m"
    MR_Word parse_tree__prog_type___Ctxt_15;
#line 993 "prog_type.m"
    MR_Word parse_tree__prog_type__V_18_18;

#line 991 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 991 "prog_type.m"
      {
#line 991 "prog_type.m"
        parse_tree__prog_type__SingleCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 0)));
#line 991 "prog_type.m"
        parse_tree__prog_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctors_2, (MR_Integer) 1)));
#line 991 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 983 "prog_type.m"
          {
#line 992 "prog_type.m"
            parse_tree__prog_type__ExistQVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 0)));
#line 992 "prog_type.m"
            parse_tree__prog_type___Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 1)));
#line 992 "prog_type.m"
            parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 2)));
#line 992 "prog_type.m"
            parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 3)));
#line 992 "prog_type.m"
            parse_tree__prog_type___Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SingleCtor_10, (MR_Integer) 4)));
#line 993 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 993 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 993 "prog_type.m"
              {
#line 993 "prog_type.m"
                parse_tree__prog_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 993 "prog_type.m"
                parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_17_17, (MR_Integer) 1)));
#line 993 "prog_type.m"
                parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 983 "prog_type.m"
                  {
#line 994 "prog_type.m"
                    parse_tree__prog_type__succeeded = (parse_tree__prog_type__ExistQVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 983 "prog_type.m"
                      {
#line 1009 "prog_type.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_type__Ctor_3)) == (MR_mktag((MR_Integer) 1))))
#line 1010 "prog_type.m"
                          {
#line 1010 "prog_type.m"
                            MR_Word parse_tree__prog_type__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 1010 "prog_type.m"
                            MR_Word parse_tree__prog_type__V_25_25;

#line 1010 "prog_type.m"
                            parse_tree__prog_type__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Ctor_3, (MR_Integer) 1)));
#line 1011 "prog_type.m"
                            {
#line 1011 "prog_type.m"
                              parse_tree__prog_type__V_25_25 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            }
#line 1011 "prog_type.m"
                            {
#line 1011 "prog_type.m"
                              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_23, parse_tree__prog_type__V_25_25);
                            }
#line 1010 "prog_type.m"
                          }
#line 1009 "prog_type.m"
                        else
#line 1009 "prog_type.m"
                          {
#line 1009 "prog_type.m"
                            parse_tree__prog_type__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Ctor_3, (MR_Integer) 0)));
#line 1009 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 1009 "prog_type.m"
                          }
#line 983 "prog_type.m"
                        if (parse_tree__prog_type__succeeded)
#line 1015 "prog_type.m"
                          {
#line 1015 "prog_type.m"
                            if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "type_info") == 0))
#line 1015 "prog_type.m"
                              parse_tree__prog_type__succeeded = MR_TRUE;
#line 1015 "prog_type.m"
                            else
#line 1015 "prog_type.m"
                              if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "type_ctor_info") == 0))
#line 1016 "prog_type.m"
                                parse_tree__prog_type__succeeded = MR_TRUE;
#line 1015 "prog_type.m"
                              else
#line 1015 "prog_type.m"
                                if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "typeclass_info") == 0))
#line 1017 "prog_type.m"
                                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 1015 "prog_type.m"
                                else
#line 1015 "prog_type.m"
                                  if ((strcmp(parse_tree__prog_type__Name_21, (MR_String) "base_typeclass_info") == 0))
#line 1018 "prog_type.m"
                                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 1015 "prog_type.m"
                                  else
#line 1015 "prog_type.m"
                                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 1015 "prog_type.m"
                          }
#line 983 "prog_type.m"
                      }
#line 983 "prog_type.m"
                  }
#line 993 "prog_type.m"
              }
#line 983 "prog_type.m"
          }
#line 991 "prog_type.m"
      }
#line 983 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 983 "prog_type.m"
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
#line 941 "prog_type.m"
  {
#line 941 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 941 "prog_type.m"
    if ((parse_tree__prog_type__ConsId0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "prog_type.m"
      {
#line 957 "prog_type.m"
        MR_Integer parse_tree__prog_type__V_41_41;
#line 957 "prog_type.m"
        MR_Word parse_tree__prog_type__PrivateBuiltin_62;
#line 957 "prog_type.m"
        MR_Word parse_tree__prog_type__TypeCtor_63;
#line 957 "prog_type.m"
        MR_Word parse_tree__prog_type__V_64_64;

#line 958 "prog_type.m"
        *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 959 "prog_type.m"
        {
#line 959 "prog_type.m"
          parse_tree__prog_type__V_41_41 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
        }
#line 933 "prog_type.m"
        {
#line 933 "prog_type.m"
          parse_tree__prog_type__PrivateBuiltin_62 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 934 "prog_type.m"
        {
#line 934 "prog_type.m"
          parse_tree__prog_type__TypeCtor_63 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 935 "prog_type.m"
        {
#line 935 "prog_type.m"
          parse_tree__prog_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_62));
#line 935 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_64_64, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
#line 935 "prog_type.m"
        }
#line 935 "prog_type.m"
        {
#line 935 "prog_type.m"
          MR_Word base;
#line 935 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_type.m"
          *parse_tree__prog_type__InstConsId_8 = base;
#line 935 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 935 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_64_64));
#line 935 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_41_41));
#line 935 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_63));
#line 935 "prog_type.m"
        }
#line 957 "prog_type.m"
      }
#line 941 "prog_type.m"
    else
#line 941 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) == (MR_mktag((MR_Integer) 1))))
#line 952 "prog_type.m"
        {
#line 952 "prog_type.m"
          MR_Integer parse_tree__prog_type__V_43_43;
#line 952 "prog_type.m"
          MR_Word parse_tree__prog_type__PrivateBuiltin_54;
#line 952 "prog_type.m"
          MR_Word parse_tree__prog_type__TypeCtor_55;
#line 952 "prog_type.m"
          MR_Word parse_tree__prog_type__V_56_56;

#line 953 "prog_type.m"
          *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 955 "prog_type.m"
          {
#line 955 "prog_type.m"
            parse_tree__prog_type__V_43_43 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__Args_5);
          }
#line 933 "prog_type.m"
          {
#line 933 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_54 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 934 "prog_type.m"
          {
#line 934 "prog_type.m"
            parse_tree__prog_type__TypeCtor_55 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          }
#line 935 "prog_type.m"
          {
#line 935 "prog_type.m"
            parse_tree__prog_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_54));
#line 935 "prog_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_56_56, 1) = ((MR_Box) ((MR_String) "type_info"));
#line 935 "prog_type.m"
          }
#line 935 "prog_type.m"
          {
#line 935 "prog_type.m"
            MR_Word base;
#line 935 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = base;
#line 935 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 935 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__V_56_56));
#line 935 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 935 "prog_type.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_55));
#line 935 "prog_type.m"
          }
#line 952 "prog_type.m"
        }
#line 941 "prog_type.m"
      else
#line 941 "prog_type.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_type__ConsId0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 941 "prog_type.m"
          {
#line 941 "prog_type.m"
            MR_Word parse_tree__prog_type__Name0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 1)));
#line 941 "prog_type.m"
            MR_Integer parse_tree__prog_type__OrigArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 2)));
#line 941 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__ConsId0_6, (MR_Integer) 3)));
#line 947 "prog_type.m"
            MR_Word parse_tree__prog_type__TypeModule_12;
#line 942 "prog_type.m"
            MR_Word parse_tree__prog_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 0)));
#line 942 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_11, (MR_Integer) 1)));
#line 942 "prog_type.m"
            MR_String parse_tree__prog_type__V_13_13;

#line 942 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 942 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 942 "prog_type.m"
              {
#line 942 "prog_type.m"
                parse_tree__prog_type__TypeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 0)));
#line 942 "prog_type.m"
                parse_tree__prog_type__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_44_44, (MR_Integer) 1)));
#line 943 "prog_type.m"
                {
#line 943 "prog_type.m"
                  MR_String parse_tree__prog_type__UnqualName_15;
#line 943 "prog_type.m"
                  MR_Word parse_tree__prog_type__Name_16;
#line 943 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_45_45;

#line 943 "prog_type.m"
                  {
#line 943 "prog_type.m"
                    parse_tree__prog_type__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_type__Name0_9);
                  }
#line 944 "prog_type.m"
                  {
#line 944 "prog_type.m"
                    parse_tree__prog_type__Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 0) = ((MR_Box) (parse_tree__prog_type__TypeModule_12));
#line 944 "prog_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name_16, 1) = ((MR_Box) (parse_tree__prog_type__UnqualName_15));
#line 944 "prog_type.m"
                  }
#line 945 "prog_type.m"
                  {
#line 945 "prog_type.m"
                    MR_Word base;
#line 945 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 945 "prog_type.m"
                    *parse_tree__prog_type__ConsId_7 = base;
#line 945 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 945 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 945 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 945 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_11));
#line 945 "prog_type.m"
                  }
#line 946 "prog_type.m"
                  {
#line 946 "prog_type.m"
                    parse_tree__prog_type__V_45_45 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 946 "prog_type.m"
                  {
#line 946 "prog_type.m"
                    MR_Word base;
#line 946 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 946 "prog_type.m"
                    *parse_tree__prog_type__InstConsId_8 = base;
#line 946 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 946 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_16));
#line 946 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 946 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 946 "prog_type.m"
                  }
#line 943 "prog_type.m"
                }
#line 942 "prog_type.m"
              }
#line 942 "prog_type.m"
            else
#line 948 "prog_type.m"
              {
#line 948 "prog_type.m"
                MR_Word parse_tree__prog_type__V_46_46;

#line 948 "prog_type.m"
                *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 949 "prog_type.m"
                {
#line 949 "prog_type.m"
                  parse_tree__prog_type__V_46_46 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 949 "prog_type.m"
                {
#line 949 "prog_type.m"
                  MR_Word base;
#line 949 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 949 "prog_type.m"
                  *parse_tree__prog_type__InstConsId_8 = base;
#line 949 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Name0_9));
#line 949 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__OrigArity_10));
#line 949 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 949 "prog_type.m"
                }
#line 948 "prog_type.m"
              }
#line 941 "prog_type.m"
          }
#line 941 "prog_type.m"
        else
#line 976 "prog_type.m"
          {
#line 977 "prog_type.m"
            *parse_tree__prog_type__ConsId_7 = parse_tree__prog_type__ConsId0_6;
#line 978 "prog_type.m"
            *parse_tree__prog_type__InstConsId_8 = *parse_tree__prog_type__ConsId_7;
#line 976 "prog_type.m"
          }
#line 941 "prog_type.m"
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
#line 923 "prog_type.m"
  {
#line 923 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 923 "prog_type.m"
    MR_Word parse_tree__prog_type__InstConsId_6;
#line 923 "prog_type.m"
    MR_String parse_tree__prog_type__Symbol_8;
#line 923 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_9;
#line 923 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_10;
#line 923 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 929 "prog_type.m"
    if ((parse_tree__prog_type__Which_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "typeclass_info";
#line 929 "prog_type.m"
    else
#line 928 "prog_type.m"
      parse_tree__prog_type__Symbol_8 = (MR_String) "type_info";
#line 933 "prog_type.m"
    {
#line 933 "prog_type.m"
      parse_tree__prog_type__PrivateBuiltin_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 934 "prog_type.m"
    {
#line 934 "prog_type.m"
      parse_tree__prog_type__TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 935 "prog_type.m"
    {
#line 935 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__PrivateBuiltin_9));
#line 935 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 1) = ((MR_Box) (parse_tree__prog_type__Symbol_8));
#line 935 "prog_type.m"
    }
#line 935 "prog_type.m"
    {
#line 935 "prog_type.m"
      parse_tree__prog_type__InstConsId_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 935 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 1) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 935 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 2) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 935 "prog_type.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_type__InstConsId_6, 3) = ((MR_Box) (parse_tree__prog_type__TypeCtor_10));
#line 935 "prog_type.m"
    }
#line 923 "prog_type.m"
    return parse_tree__prog_type__InstConsId_6;
#line 923 "prog_type.m"
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
#line 920 "prog_type.m"
  {
#line 920 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 920 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__2_2;

#line 920 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "prog_type.m"
      parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 920 "prog_type.m"
    else
#line 920 "prog_type.m"
      {
#line 920 "prog_type.m"
        MR_Word parse_tree__prog_type__Ctor_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 920 "prog_type.m"
        parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_type__Ctor_3);
#line 920 "prog_type.m"
      }
#line 920 "prog_type.m"
    return parse_tree__prog_type__HeadVar__2_2;
#line 920 "prog_type.m"
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
#line 916 "prog_type.m"
  {
#line 916 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 916 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 916 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;

#line 916 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 916 "prog_type.m"
      {
#line 916 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 916 "prog_type.m"
        {
#line 916 "prog_type.m"
          parse_tree__prog_type__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 916 "prog_type.m"
        }
#line 916 "prog_type.m"
        {
#line 916 "prog_type.m"
          MR_Word base;
#line 916 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 916 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_6_6));
#line 916 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_5));
#line 916 "prog_type.m"
        }
#line 916 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 916 "prog_type.m"
      }
#line 916 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 916 "prog_type.m"
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
#line 909 "prog_type.m"
  {
#line 909 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 909 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 911 "prog_type.m"
      {
#line 911 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 911 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 911 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 912 "prog_type.m"
        {
#line 912 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_7, &parse_tree__prog_type__Name_8);
        }
#line 911 "prog_type.m"
        {
#line 911 "prog_type.m"
          MR_Word base;
#line 911 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 911 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 911 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 911 "prog_type.m"
        }
#line 911 "prog_type.m"
      }
#line 909 "prog_type.m"
    else
#line 909 "prog_type.m"
      {
#line 909 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 909 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 910 "prog_type.m"
        {
#line 910 "prog_type.m"
          mercury__string__append_3_p_2((MR_String) "new ", parse_tree__prog_type__Name0_3, &parse_tree__prog_type__Name_4);
        }
#line 909 "prog_type.m"
        {
#line 909 "prog_type.m"
          MR_Word base;
#line 909 "prog_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 909 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = base;
#line 909 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 909 "prog_type.m"
        }
#line 909 "prog_type.m"
      }
#line 909 "prog_type.m"
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
#line 904 "prog_type.m"
  {
#line 904 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 904 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 906 "prog_type.m"
      {
#line 906 "prog_type.m"
        MR_Word parse_tree__prog_type__Module_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 906 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 906 "prog_type.m"
        MR_String parse_tree__prog_type__Name_8;

#line 907 "prog_type.m"
        {
#line 907 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_8, parse_tree__prog_type__Name0_7);
        }
#line 906 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 906 "prog_type.m"
          {
#line 906 "prog_type.m"
            {
#line 906 "prog_type.m"
              MR_Word base;
#line 906 "prog_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 906 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Module_6));
#line 906 "prog_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 906 "prog_type.m"
            }
#line 906 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 906 "prog_type.m"
          }
#line 906 "prog_type.m"
      }
#line 904 "prog_type.m"
    else
#line 904 "prog_type.m"
      {
#line 904 "prog_type.m"
        MR_String parse_tree__prog_type__Name0_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 904 "prog_type.m"
        MR_String parse_tree__prog_type__Name_4;

#line 905 "prog_type.m"
        {
#line 905 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__string__append_3_p_1((MR_String) "new ", &parse_tree__prog_type__Name_4, parse_tree__prog_type__Name0_3);
        }
#line 904 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 904 "prog_type.m"
          {
#line 904 "prog_type.m"
            {
#line 904 "prog_type.m"
              MR_Word base;
#line 904 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_type.m"
              *parse_tree__prog_type__HeadVar__2_2 = base;
#line 904 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_4));
#line 904 "prog_type.m"
            }
#line 904 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 904 "prog_type.m"
          }
#line 904 "prog_type.m"
      }
#line 904 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 904 "prog_type.m"
  }
#line 270 "prog_type.m"
}

#line 875 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 875 "prog_type.m"
{
#line 875 "prog_type.m"
  {
#line 875 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 875 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 875 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 875 "prog_type.m"
  }
#line 875 "prog_type.m"
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
#line 883 "prog_type.m"
  {
#line 883 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 883 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsSet_6;
#line 883 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 883 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList0_7;
#line 883 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList_8;
#line 883 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 885 "prog_type.m"
    {
#line 885 "prog_type.m"
      parse_tree__prog_type__VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(parse_tree__prog_type__TypeCtorInfo_9_9, parse_tree__prog_type__VarsSet0_5);
    }
#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 875 "prog_type.m"
    }
#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList0_7, &parse_tree__prog_type__VarsList_8);
    }
#line 887 "prog_type.m"
    {
#line 887 "prog_type.m"
      parse_tree__prog_type__VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(parse_tree__prog_type__TypeCtorInfo_9_9, parse_tree__prog_type__VarsList_8);
    }
#line 883 "prog_type.m"
    return parse_tree__prog_type__VarsSet_6;
#line 883 "prog_type.m"
  }
#line 262 "prog_type.m"
}

#line 875 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1(
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 875 "prog_type.m"
{
#line 875 "prog_type.m"
  {
#line 875 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 875 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 875 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 875 "prog_type.m"
  }
#line 875 "prog_type.m"
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
#line 878 "prog_type.m"
  {
#line 878 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 878 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsSet_6;
#line 878 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[2];
#line 878 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList0_7;
#line 878 "prog_type.m"
    MR_Word parse_tree__prog_type__VarsList_8;
#line 878 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 879 "prog_type.m"
    {
#line 879 "prog_type.m"
      parse_tree__prog_type__VarsList0_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__VarsSet0_5);
    }
#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_from_set_2_f_0_1));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 875 "prog_type.m"
    }
#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList0_7, &parse_tree__prog_type__VarsList_8);
    }
#line 881 "prog_type.m"
    {
#line 881 "prog_type.m"
      parse_tree__prog_type__VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__VarsList_8);
    }
#line 878 "prog_type.m"
    return parse_tree__prog_type__VarsSet_6;
#line 878 "prog_type.m"
  }
#line 260 "prog_type.m"
}

#line 875 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1(
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 875 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 875 "prog_type.m"
{
#line 875 "prog_type.m"
  {
#line 875 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 875 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 875 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 875 "prog_type.m"
  }
#line 875 "prog_type.m"
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
#line 874 "prog_type.m"
  {
#line 874 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 874 "prog_type.m"
    MR_Word parse_tree__prog_type__NonTypeInfoVarsList_6;
#line 874 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;

#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      parse_tree__prog_type__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type__remove_typeinfo_vars_2_f_0_1));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 875 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_7_7, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_4));
#line 875 "prog_type.m"
    }
#line 875 "prog_type.m"
    {
#line 875 "prog_type.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_7_7, parse_tree__prog_type__VarsList_5, &parse_tree__prog_type__NonTypeInfoVarsList_6);
    }
#line 874 "prog_type.m"
    return parse_tree__prog_type__NonTypeInfoVarsList_6;
#line 874 "prog_type.m"
  }
#line 259 "prog_type.m"
}

#line 894 "prog_type.m"
static MR_bool MR_CALL 
parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1(
#line 894 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 894 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1)
#line 894 "prog_type.m"
{
#line 894 "prog_type.m"
  {
#line 894 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 894 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;

#line 894 "prog_type.m"
    {
#line 894 "prog_type.m"
      return parse_tree__prog_type__succeeded = parse_tree__prog_type__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_type__wrapper_arg_1));
    }
#line 894 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 894 "prog_type.m"
  }
#line 894 "prog_type.m"
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
#line 870 "prog_type.m"
  {
#line 870 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 870 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__3_3;
#line 870 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfoVarsList_6;
#line 870 "prog_type.m"
    MR_Word parse_tree__prog_type__NonTypeInfoVarsList_7;
#line 870 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;

#line 894 "prog_type.m"
    {
#line 894 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 894 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_4[2]));
#line 894 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__put_typeinfo_vars_first_2_f_0_1));
#line 894 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 894 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 3) = ((MR_Box) (parse_tree__prog_type__VarTypes_5));
#line 894 "prog_type.m"
    }
#line 894 "prog_type.m"
    {
#line 894 "prog_type.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__V_13_13, parse_tree__prog_type__VarsList_4, &parse_tree__prog_type__TypeInfoVarsList_6, &parse_tree__prog_type__NonTypeInfoVarsList_7);
    }
#line 870 "prog_type.m"
    {
#line 870 "prog_type.m"
      parse_tree__prog_type__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_type_scalar_common_1[2], parse_tree__prog_type__TypeInfoVarsList_6, parse_tree__prog_type__NonTypeInfoVarsList_7);
    }
#line 870 "prog_type.m"
    return parse_tree__prog_type__HeadVar__3_3;
#line 870 "prog_type.m"
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
#line 860 "prog_type.m"
  {
#line 860 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 860 "prog_type.m"
    MR_Word parse_tree__prog_type__IsIntroduced_4;

#line 860 "prog_type.m"
    if (((((MR_tag((MR_Word) parse_tree__prog_type__TypeCtorCat_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__TypeCtorCat_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 864 "prog_type.m"
      parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 1;
#line 860 "prog_type.m"
    else
#line 861 "prog_type.m"
      parse_tree__prog_type__IsIntroduced_4 = (MR_Integer) 0;
#line 860 "prog_type.m"
    return parse_tree__prog_type__IsIntroduced_4;
#line 860 "prog_type.m"
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
#line 841 "prog_type.m"
  {
#line 841 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 841 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_3;
#line 841 "prog_type.m"
    MR_String parse_tree__prog_type__Name_4;
#line 841 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 0)));
#line 841 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_2, (MR_Integer) 1)));
#line 841 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;

#line 842 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 842 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 842 "prog_type.m"
      {
#line 842 "prog_type.m"
        parse_tree__prog_type__PrivateBuiltin_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 842 "prog_type.m"
        parse_tree__prog_type__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 842 "prog_type.m"
        parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 841 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 841 "prog_type.m"
          {
#line 843 "prog_type.m"
            {
#line 843 "prog_type.m"
              parse_tree__prog_type__V_7_7 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            }
#line 843 "prog_type.m"
            {
#line 843 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_3, parse_tree__prog_type__V_7_7);
            }
#line 841 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 845 "prog_type.m"
              {
#line 845 "prog_type.m"
                if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "type_info") == 0))
#line 844 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                else
#line 845 "prog_type.m"
                  if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "type_ctor_info") == 0))
#line 845 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                  else
#line 845 "prog_type.m"
                    if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "typeclass_info") == 0))
#line 846 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                    else
#line 845 "prog_type.m"
                      if ((strcmp(parse_tree__prog_type__Name_4, (MR_String) "base_typeclass_info") == 0))
#line 847 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                      else
#line 845 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_FALSE;
#line 845 "prog_type.m"
              }
#line 841 "prog_type.m"
          }
#line 842 "prog_type.m"
      }
#line 841 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 841 "prog_type.m"
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
#line 837 "prog_type.m"
  {
#line 837 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 837 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 837 "prog_type.m"
    MR_Word parse_tree__prog_type__PrivateBuiltin_8;
#line 837 "prog_type.m"
    MR_String parse_tree__prog_type__Name_9;
#line 837 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 837 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_11_11;
#line 837 "prog_type.m"
    MR_Word parse_tree__prog_type__V_12_12;
#line 583 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_6;

#line 583 "prog_type.m"
    {
#line 583 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type___Args_6);
    }
#line 837 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 837 "prog_type.m"
      {
#line 842 "prog_type.m"
        parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 842 "prog_type.m"
        parse_tree__prog_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 842 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 842 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 842 "prog_type.m"
          {
#line 842 "prog_type.m"
            parse_tree__prog_type__PrivateBuiltin_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 0)));
#line 842 "prog_type.m"
            parse_tree__prog_type__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_10_10, (MR_Integer) 1)));
#line 842 "prog_type.m"
            parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_11_11 == (MR_Integer) 0);
#line 837 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 837 "prog_type.m"
              {
#line 843 "prog_type.m"
                {
#line 843 "prog_type.m"
                  parse_tree__prog_type__V_12_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
#line 843 "prog_type.m"
                {
#line 843 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__PrivateBuiltin_8, parse_tree__prog_type__V_12_12);
                }
#line 837 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 845 "prog_type.m"
                  {
#line 845 "prog_type.m"
                    if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "type_info") == 0))
#line 844 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                    else
#line 845 "prog_type.m"
                      if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "type_ctor_info") == 0))
#line 845 "prog_type.m"
                        parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                      else
#line 845 "prog_type.m"
                        if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "typeclass_info") == 0))
#line 846 "prog_type.m"
                          parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                        else
#line 845 "prog_type.m"
                          if ((strcmp(parse_tree__prog_type__Name_9, (MR_String) "base_typeclass_info") == 0))
#line 847 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_TRUE;
#line 845 "prog_type.m"
                          else
#line 845 "prog_type.m"
                            parse_tree__prog_type__succeeded = MR_FALSE;
#line 845 "prog_type.m"
                  }
#line 837 "prog_type.m"
              }
#line 842 "prog_type.m"
          }
#line 837 "prog_type.m"
      }
#line 837 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 837 "prog_type.m"
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
#line 834 "prog_type.m"
  {
#line 834 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 834 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 834 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 834 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 834 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 835 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 835 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 835 "prog_type.m"
      {
#line 835 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 835 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 835 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 835 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 835 "prog_type.m"
          {
#line 835 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 835 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "bitmap") == 0);
#line 834 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 834 "prog_type.m"
              {
#line 835 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "bitmap") == 0);
#line 834 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 835 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 0);
#line 834 "prog_type.m"
              }
#line 835 "prog_type.m"
          }
#line 835 "prog_type.m"
      }
#line 834 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 834 "prog_type.m"
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
#line 832 "prog_type.m"
  {
#line 832 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 832 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 832 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 832 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 832 "prog_type.m"
    MR_String parse_tree__prog_type__V_5_5;
#line 832 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 832 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_2_2)) == (MR_mktag((MR_Integer) 1)));
#line 832 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 832 "prog_type.m"
      {
#line 832 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 0)));
#line 832 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_2_2, (MR_Integer) 1)));
#line 832 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 832 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 832 "prog_type.m"
          {
#line 832 "prog_type.m"
            parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 832 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "array") == 0);
#line 832 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 832 "prog_type.m"
              {
#line 832 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_5_5, (MR_String) "array") == 0);
#line 832 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 832 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_6_6 == (MR_Integer) 1);
#line 832 "prog_type.m"
              }
#line 832 "prog_type.m"
          }
#line 832 "prog_type.m"
      }
#line 832 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 832 "prog_type.m"
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
#line 827 "prog_type.m"
  {
#line 827 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_11_11;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtor_3;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_4;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 827 "prog_type.m"
    MR_String parse_tree__prog_type__V_7_7;
#line 827 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_8_8;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 827 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;

#line 828 "prog_type.m"
    {
#line 828 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_2, &parse_tree__prog_type__TypeCtor_3, &parse_tree__prog_type__V_9_9);
    }
#line 827 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 827 "prog_type.m"
      {
#line 8928 "parse_tree.prog_type.c"
        parse_tree__prog_type__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[5];
#line 828 "prog_type.m"
        {
#line 828 "prog_type.m"
          parse_tree__prog_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_type__TypeInfo_11_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (parse_tree__prog_type__V_9_9)));
        }
#line 827 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 827 "prog_type.m"
          {
#line 829 "prog_type.m"
            {
#line 829 "prog_type.m"
              parse_tree__prog_type__ModuleName_4 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 830 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 830 "prog_type.m"
            parse_tree__prog_type__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 830 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 830 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 830 "prog_type.m"
              {
#line 830 "prog_type.m"
                parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 830 "prog_type.m"
                parse_tree__prog_type__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 830 "prog_type.m"
                {
#line 830 "prog_type.m"
                  parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_4, parse_tree__prog_type__V_10_10);
                }
#line 827 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 827 "prog_type.m"
                  {
#line 830 "prog_type.m"
                    parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_7_7, (MR_String) "state") == 0);
#line 827 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 830 "prog_type.m"
                      parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_8_8 == (MR_Integer) 0);
#line 827 "prog_type.m"
                  }
#line 830 "prog_type.m"
              }
#line 827 "prog_type.m"
          }
#line 827 "prog_type.m"
      }
#line 827 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 827 "prog_type.m"
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
#line 807 "prog_type.m"
  {
#line 807 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 807 "prog_type.m"
    MR_Word parse_tree__prog_type__IsBuiltinDummy_4;
#line 807 "prog_type.m"
    MR_Word parse_tree__prog_type__CtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 0)));
#line 807 "prog_type.m"
    MR_Integer parse_tree__prog_type__TypeArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_3, (MR_Integer) 1)));
#line 810 "prog_type.m"
    MR_Word parse_tree__prog_type__ModuleName_7;
#line 810 "prog_type.m"
    MR_String parse_tree__prog_type__TypeName_8;
#line 810 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;

#line 810 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 810 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 810 "prog_type.m"
      {
#line 810 "prog_type.m"
        parse_tree__prog_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 810 "prog_type.m"
        parse_tree__prog_type__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 811 "prog_type.m"
        {
#line 811 "prog_type.m"
          parse_tree__prog_type__V_15_15 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        }
#line 811 "prog_type.m"
        {
#line 811 "prog_type.m"
          parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_7, parse_tree__prog_type__V_15_15);
        }
#line 810 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 810 "prog_type.m"
          {
#line 812 "prog_type.m"
            parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_8, (MR_String) "state") == 0);
#line 810 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 813 "prog_type.m"
              parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 0);
#line 810 "prog_type.m"
          }
#line 810 "prog_type.m"
      }
#line 816 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 815 "prog_type.m"
      parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 816 "prog_type.m"
    else
#line 823 "prog_type.m"
      {
#line 817 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 817 "prog_type.m"
        MR_String parse_tree__prog_type__V_10_10;
#line 817 "prog_type.m"
        MR_Word parse_tree__prog_type__ModuleName_11;
#line 817 "prog_type.m"
        MR_String parse_tree__prog_type__TypeName_12;
#line 817 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17;

#line 817 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__CtorSymName_5)) == (MR_mktag((MR_Integer) 1)));
#line 817 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
          {
#line 817 "prog_type.m"
            parse_tree__prog_type__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 0)));
#line 817 "prog_type.m"
            parse_tree__prog_type__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__CtorSymName_5, (MR_Integer) 1)));
#line 818 "prog_type.m"
            parse_tree__prog_type__V_10_10 = (MR_String) "store";
#line 818 "prog_type.m"
            parse_tree__prog_type__V_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_3[2];
#line 818 "prog_type.m"
            {
#line 818 "prog_type.m"
              parse_tree__prog_type__V_17_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(parse_tree__prog_type__V_9_9);
            }
#line 818 "prog_type.m"
            {
#line 818 "prog_type.m"
              parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__ModuleName_11, parse_tree__prog_type__V_17_17);
            }
#line 817 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 817 "prog_type.m"
              {
#line 819 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__TypeName_12, (MR_String) "store") == 0);
#line 817 "prog_type.m"
                if (parse_tree__prog_type__succeeded)
#line 820 "prog_type.m"
                  parse_tree__prog_type__succeeded = (parse_tree__prog_type__TypeArity_6 == (MR_Integer) 1);
#line 817 "prog_type.m"
              }
#line 817 "prog_type.m"
          }
#line 823 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 822 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 0;
#line 823 "prog_type.m"
        else
#line 824 "prog_type.m"
          parse_tree__prog_type__IsBuiltinDummy_4 = (MR_Integer) 1;
#line 823 "prog_type.m"
      }
#line 807 "prog_type.m"
    return parse_tree__prog_type__IsBuiltinDummy_4;
#line 807 "prog_type.m"
  }
#line 228 "prog_type.m"
}

#line 217 "prog_type.m"
MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
#line 217 "prog_type.m"
{
#line 796 "prog_type.m"
  {
#line 796 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__HeadVar__1_1;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_2_2;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_8_8;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_9_9;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_10_10;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_13_13;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_15_15;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_16_16;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_19_19;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_20_20;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_21_21;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_22_22;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_25_25;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_26_26;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_27_27;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_28_28;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_31_31;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_32_32;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_33_33;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_34_34;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_37_37;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_38_38;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_39_39;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_40_40;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_43_43;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_44_44;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_45_45;
#line 796 "prog_type.m"
    MR_Word parse_tree__prog_type__V_46_46;

#line 797 "prog_type.m"
    {
#line 797 "prog_type.m"
      parse_tree__prog_type__V_4_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 797 "prog_type.m"
    {
#line 797 "prog_type.m"
      parse_tree__prog_type__V_3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 0) = ((MR_Box) (parse_tree__prog_type__V_4_4));
#line 797 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_3_3, 1) = ((MR_Box) ((MR_String) "int"));
#line 797 "prog_type.m"
    }
#line 797 "prog_type.m"
    {
#line 797 "prog_type.m"
      parse_tree__prog_type__V_2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 797 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 0) = ((MR_Box) (parse_tree__prog_type__V_3_3));
#line 797 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_2_2, 1) = ((MR_Box) ((MR_Integer) 0));
#line 797 "prog_type.m"
    }
#line 798 "prog_type.m"
    {
#line 798 "prog_type.m"
      parse_tree__prog_type__V_10_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 798 "prog_type.m"
    {
#line 798 "prog_type.m"
      parse_tree__prog_type__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 0) = ((MR_Box) (parse_tree__prog_type__V_10_10));
#line 798 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_9_9, 1) = ((MR_Box) ((MR_String) "string"));
#line 798 "prog_type.m"
    }
#line 798 "prog_type.m"
    {
#line 798 "prog_type.m"
      parse_tree__prog_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 0) = ((MR_Box) (parse_tree__prog_type__V_9_9));
#line 798 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 798 "prog_type.m"
    }
#line 799 "prog_type.m"
    {
#line 799 "prog_type.m"
      parse_tree__prog_type__V_16_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 799 "prog_type.m"
    {
#line 799 "prog_type.m"
      parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__V_16_16));
#line 799 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) ((MR_String) "character"));
#line 799 "prog_type.m"
    }
#line 799 "prog_type.m"
    {
#line 799 "prog_type.m"
      parse_tree__prog_type__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 799 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 0) = ((MR_Box) (parse_tree__prog_type__V_15_15));
#line 799 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 799 "prog_type.m"
    }
#line 800 "prog_type.m"
    {
#line 800 "prog_type.m"
      parse_tree__prog_type__V_22_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 800 "prog_type.m"
    {
#line 800 "prog_type.m"
      parse_tree__prog_type__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 0) = ((MR_Box) (parse_tree__prog_type__V_22_22));
#line 800 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_21_21, 1) = ((MR_Box) ((MR_String) "float"));
#line 800 "prog_type.m"
    }
#line 800 "prog_type.m"
    {
#line 800 "prog_type.m"
      parse_tree__prog_type__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 800 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 0) = ((MR_Box) (parse_tree__prog_type__V_21_21));
#line 800 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 800 "prog_type.m"
    }
#line 801 "prog_type.m"
    {
#line 801 "prog_type.m"
      parse_tree__prog_type__V_28_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 801 "prog_type.m"
    {
#line 801 "prog_type.m"
      parse_tree__prog_type__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 0) = ((MR_Box) (parse_tree__prog_type__V_28_28));
#line 801 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_27_27, 1) = ((MR_Box) ((MR_String) "pred"));
#line 801 "prog_type.m"
    }
#line 801 "prog_type.m"
    {
#line 801 "prog_type.m"
      parse_tree__prog_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 0) = ((MR_Box) (parse_tree__prog_type__V_27_27));
#line 801 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_26_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 801 "prog_type.m"
    }
#line 802 "prog_type.m"
    {
#line 802 "prog_type.m"
      parse_tree__prog_type__V_34_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 802 "prog_type.m"
    {
#line 802 "prog_type.m"
      parse_tree__prog_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 0) = ((MR_Box) (parse_tree__prog_type__V_34_34));
#line 802 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_33_33, 1) = ((MR_Box) ((MR_String) "func"));
#line 802 "prog_type.m"
    }
#line 802 "prog_type.m"
    {
#line 802 "prog_type.m"
      parse_tree__prog_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 0) = ((MR_Box) (parse_tree__prog_type__V_33_33));
#line 802 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_32_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 802 "prog_type.m"
    }
#line 803 "prog_type.m"
    {
#line 803 "prog_type.m"
      parse_tree__prog_type__V_40_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 803 "prog_type.m"
    {
#line 803 "prog_type.m"
      parse_tree__prog_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 0) = ((MR_Box) (parse_tree__prog_type__V_40_40));
#line 803 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_39_39, 1) = ((MR_Box) ((MR_String) "void"));
#line 803 "prog_type.m"
    }
#line 803 "prog_type.m"
    {
#line 803 "prog_type.m"
      parse_tree__prog_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 803 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 0) = ((MR_Box) (parse_tree__prog_type__V_39_39));
#line 803 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 803 "prog_type.m"
    }
#line 804 "prog_type.m"
    {
#line 804 "prog_type.m"
      parse_tree__prog_type__V_46_46 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 804 "prog_type.m"
    {
#line 804 "prog_type.m"
      parse_tree__prog_type__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 0) = ((MR_Box) (parse_tree__prog_type__V_46_46));
#line 804 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_45_45, 1) = ((MR_Box) ((MR_String) "tuple"));
#line 804 "prog_type.m"
    }
#line 804 "prog_type.m"
    {
#line 804 "prog_type.m"
      parse_tree__prog_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 0) = ((MR_Box) (parse_tree__prog_type__V_45_45));
#line 804 "prog_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 804 "prog_type.m"
    }
#line 805 "prog_type.m"
    {
#line 805 "prog_type.m"
      parse_tree__prog_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 0) = ((MR_Box) (parse_tree__prog_type__V_44_44));
#line 805 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "prog_type.m"
    }
#line 803 "prog_type.m"
    {
#line 803 "prog_type.m"
      parse_tree__prog_type__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 0) = ((MR_Box) (parse_tree__prog_type__V_38_38));
#line 803 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_37_37, 1) = ((MR_Box) (parse_tree__prog_type__V_43_43));
#line 803 "prog_type.m"
    }
#line 802 "prog_type.m"
    {
#line 802 "prog_type.m"
      parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__V_32_32));
#line 802 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 1) = ((MR_Box) (parse_tree__prog_type__V_37_37));
#line 802 "prog_type.m"
    }
#line 801 "prog_type.m"
    {
#line 801 "prog_type.m"
      parse_tree__prog_type__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 0) = ((MR_Box) (parse_tree__prog_type__V_26_26));
#line 801 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_25_25, 1) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 801 "prog_type.m"
    }
#line 800 "prog_type.m"
    {
#line 800 "prog_type.m"
      parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__V_20_20));
#line 800 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 1) = ((MR_Box) (parse_tree__prog_type__V_25_25));
#line 800 "prog_type.m"
    }
#line 799 "prog_type.m"
    {
#line 799 "prog_type.m"
      parse_tree__prog_type__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__V_14_14));
#line 799 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_13_13, 1) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 799 "prog_type.m"
    }
#line 798 "prog_type.m"
    {
#line 798 "prog_type.m"
      parse_tree__prog_type__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 0) = ((MR_Box) (parse_tree__prog_type__V_8_8));
#line 798 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_7_7, 1) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 798 "prog_type.m"
    }
#line 797 "prog_type.m"
    {
#line 797 "prog_type.m"
      parse_tree__prog_type__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__prog_type__V_2_2));
#line 797 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__prog_type__V_7_7));
#line 797 "prog_type.m"
    }
#line 796 "prog_type.m"
    return parse_tree__prog_type__HeadVar__1_1;
#line 796 "prog_type.m"
  }
#line 217 "prog_type.m"
}

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__get_unconstrained_tvars_3_p_0_1(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 781 "prog_type.m"
{
#line 781 "prog_type.m"
  {
#line 781 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 781 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 781 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 781 "prog_type.m"
  }
#line 781 "prog_type.m"
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
#line 787 "prog_type.m"
  {
#line 787 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 787 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_9_9;
#line 787 "prog_type.m"
    MR_Word parse_tree__prog_type__ConstrainedTvars_7;
#line 787 "prog_type.m"
    MR_Word parse_tree__prog_type__Unconstrained0_8;
#line 787 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_12;

#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[5], parse_tree__prog_type__Constraints_5, &parse_tree__prog_type__TVarsList_12);
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_12, &parse_tree__prog_type__ConstrainedTvars_7);
    }
#line 9545 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 789 "prog_type.m"
    {
#line 789 "prog_type.m"
      mercury__list__delete_elems_3_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Tvars_4, parse_tree__prog_type__ConstrainedTvars_7, &parse_tree__prog_type__Unconstrained0_8);
    }
#line 790 "prog_type.m"
    {
#line 790 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_9_9, parse_tree__prog_type__Unconstrained0_8, parse_tree__prog_type__Unconstrained_6);
#line 790 "prog_type.m"
      return;
    }
#line 787 "prog_type.m"
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
#line 784 "prog_type.m"
  {
#line 784 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 784 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_11;
#line 784 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 784 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_8;
#line 784 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_9;
#line 784 "prog_type.m"
    MR_Word parse_tree__prog_type___ClassName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));

#line 662 "prog_type.m"
    {
#line 662 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__ArgTypes_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_8);
    }
#line 9593 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_11 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 663 "prog_type.m"
    {
#line 663 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__RevTVars_8, &parse_tree__prog_type__TVarsDups_9);
    }
#line 664 "prog_type.m"
    {
#line 664 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_11, parse_tree__prog_type__TVarsDups_9, parse_tree__prog_type__TVars_5);
#line 664 "prog_type.m"
      return;
    }
#line 784 "prog_type.m"
  }
#line 207 "prog_type.m"
}

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__constraint_list_get_tvars_2_p_0_1(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 781 "prog_type.m"
{
#line 781 "prog_type.m"
  {
#line 781 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 781 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 781 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 781 "prog_type.m"
  }
#line 781 "prog_type.m"
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
#line 780 "prog_type.m"
  {
#line 780 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 780 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_5;

#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[4], parse_tree__prog_type__Constraints_3, &parse_tree__prog_type__TVarsList_5);
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_5, parse_tree__prog_type__TVars_4);
#line 782 "prog_type.m"
      return;
    }
#line 780 "prog_type.m"
  }
#line 202 "prog_type.m"
}

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_2(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 781 "prog_type.m"
{
#line 781 "prog_type.m"
  {
#line 781 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 781 "prog_type.m"
    MR_Word parse_tree__prog_type__conv1_TVars_5;

#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv1_TVars_5);
    }
#line 781 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv1_TVars_5));
#line 781 "prog_type.m"
  }
#line 781 "prog_type.m"
}

#line 781 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__prog_constraints_get_tvars_2_p_0_1(
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__closure_arg,
#line 781 "prog_type.m"
  MR_Box parse_tree__prog_type__wrapper_arg_1,
#line 781 "prog_type.m"
  MR_Box * parse_tree__prog_type__wrapper_arg_2)
#line 781 "prog_type.m"
{
#line 781 "prog_type.m"
  {
#line 781 "prog_type.m"
    MR_Box parse_tree__prog_type__closure = parse_tree__prog_type__closure_arg;
#line 781 "prog_type.m"
    MR_Word parse_tree__prog_type__conv0_TVars_5;

#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      parse_tree__prog_type__constraint_get_tvars_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_TVars_5);
    }
#line 781 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_TVars_5));
#line 781 "prog_type.m"
  }
#line 781 "prog_type.m"
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
#line 775 "prog_type.m"
  {
#line 775 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 775 "prog_type.m"
    MR_Word parse_tree__prog_type__Univ_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 775 "prog_type.m"
    MR_Word parse_tree__prog_type__Exist_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 775 "prog_type.m"
    MR_Word parse_tree__prog_type__UnivTVars_6;
#line 775 "prog_type.m"
    MR_Word parse_tree__prog_type__ExistTVars_7;
#line 775 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_11;
#line 775 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsList_20;

#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[2], parse_tree__prog_type__Univ_3, &parse_tree__prog_type__TVarsList_11);
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_11, &parse_tree__prog_type__UnivTVars_6);
    }
#line 781 "prog_type.m"
    {
#line 781 "prog_type.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_type_scalar_common_1[1], (MR_Word) &parse_tree__prog_type_scalar_common_2[3], parse_tree__prog_type__Exist_4, &parse_tree__prog_type__TVarsList_20);
    }
#line 782 "prog_type.m"
    {
#line 782 "prog_type.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__TVarsList_20, &parse_tree__prog_type__ExistTVars_7);
    }
#line 778 "prog_type.m"
    {
#line 778 "prog_type.m"
      mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_type_scalar_common_1[0], parse_tree__prog_type__UnivTVars_6, parse_tree__prog_type__ExistTVars_7, parse_tree__prog_type__TVars_5);
#line 778 "prog_type.m"
      return;
    }
#line 775 "prog_type.m"
  }
#line 197 "prog_type.m"
}

#line 771 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0_1(
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
    MR_Word parse_tree__prog_type__conv0_HeadVar__2_2;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(((MR_Word) parse_tree__prog_type__wrapper_arg_1), &parse_tree__prog_type__conv0_HeadVar__2_2);
    }
#line 771 "prog_type.m"
    *parse_tree__prog_type__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_type__conv0_HeadVar__2_2));
#line 771 "prog_type.m"
  }
#line 771 "prog_type.m"
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
#line 770 "prog_type.m"
  {
#line 770 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 770 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorInfo_8_8 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 771 "prog_type.m"
    {
#line 771 "prog_type.m"
      mercury__list__map_3_p_0(parse_tree__prog_type__TypeCtorInfo_8_8, parse_tree__prog_type__TypeCtorInfo_8_8, (MR_Word) &parse_tree__prog_type_scalar_common_2[1], parse_tree__prog_type__Types0_3, parse_tree__prog_type__Types_4);
#line 771 "prog_type.m"
      return;
    }
#line 770 "prog_type.m"
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
#line 733 "prog_type.m"
  {
#line 733 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 733 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 747 "prog_type.m"
      *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 733 "prog_type.m"
    else
#line 733 "prog_type.m"
      if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 736 "prog_type.m"
        {
#line 736 "prog_type.m"
          MR_Word parse_tree__prog_type__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 736 "prog_type.m"
          MR_Word parse_tree__prog_type__Args0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 736 "prog_type.m"
          MR_Word parse_tree__prog_type__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 736 "prog_type.m"
          MR_Word parse_tree__prog_type__Name_8;
#line 736 "prog_type.m"
          MR_Word parse_tree__prog_type__Args_9;
#line 742 "prog_type.m"
          MR_String parse_tree__prog_type__Name1_11;
#line 738 "prog_type.m"
          MR_Word parse_tree__prog_type__Module_10;
#line 738 "prog_type.m"
          MR_Word parse_tree__prog_type__V_31_31;

#line 738 "prog_type.m"
          parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 738 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 738 "prog_type.m"
            {
#line 738 "prog_type.m"
              parse_tree__prog_type__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 0)));
#line 738 "prog_type.m"
              parse_tree__prog_type__Name1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Name0_5, (MR_Integer) 1)));
#line 739 "prog_type.m"
              {
#line 739 "prog_type.m"
                parse_tree__prog_type__V_31_31 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 739 "prog_type.m"
              {
#line 739 "prog_type.m"
                parse_tree__prog_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_type__Module_10, parse_tree__prog_type__V_31_31);
              }
#line 738 "prog_type.m"
            }
#line 742 "prog_type.m"
          if (parse_tree__prog_type__succeeded)
#line 741 "prog_type.m"
            {
#line 741 "prog_type.m"
              parse_tree__prog_type__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 741 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__Name_8, 0) = ((MR_Box) (parse_tree__prog_type__Name1_11));
#line 741 "prog_type.m"
            }
#line 742 "prog_type.m"
          else
#line 743 "prog_type.m"
            parse_tree__prog_type__Name_8 = parse_tree__prog_type__Name0_5;
#line 745 "prog_type.m"
          {
#line 745 "prog_type.m"
            parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_6, &parse_tree__prog_type__Args_9);
          }
#line 736 "prog_type.m"
          {
#line 736 "prog_type.m"
            MR_Word base;
#line 736 "prog_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 736 "prog_type.m"
            *parse_tree__prog_type__HeadVar__2_2 = base;
#line 736 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Name_8));
#line 736 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_9));
#line 736 "prog_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_7));
#line 736 "prog_type.m"
          }
#line 736 "prog_type.m"
        }
#line 733 "prog_type.m"
      else
#line 733 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 734 "prog_type.m"
          *parse_tree__prog_type__HeadVar__2_2 = parse_tree__prog_type__HeadVar__1_1;
#line 733 "prog_type.m"
        else
#line 733 "prog_type.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 764 "prog_type.m"
            {
#line 764 "prog_type.m"
              MR_Word parse_tree__prog_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 764 "prog_type.m"
              MR_Word parse_tree__prog_type__Args0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 764 "prog_type.m"
              MR_Word parse_tree__prog_type__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 764 "prog_type.m"
              MR_Word parse_tree__prog_type__Args_27;

#line 765 "prog_type.m"
              {
#line 765 "prog_type.m"
                parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_25, &parse_tree__prog_type__Args_27);
              }
#line 764 "prog_type.m"
              {
#line 764 "prog_type.m"
                MR_Word base;
#line 764 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 764 "prog_type.m"
                *parse_tree__prog_type__HeadVar__2_2 = base;
#line 764 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 764 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Var_24));
#line 764 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Args_27));
#line 764 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Kind_26));
#line 764 "prog_type.m"
              }
#line 764 "prog_type.m"
            }
#line 733 "prog_type.m"
          else
#line 733 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 750 "prog_type.m"
              {
#line 750 "prog_type.m"
                MR_Word parse_tree__prog_type__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "prog_type.m"
                MR_Word parse_tree__prog_type__MaybeRet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 750 "prog_type.m"
                MR_Word parse_tree__prog_type__Purity_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));
#line 750 "prog_type.m"
                MR_Word parse_tree__prog_type__Args_17;
#line 750 "prog_type.m"
                MR_Word parse_tree__prog_type__MaybeRet_18;

#line 751 "prog_type.m"
                {
#line 751 "prog_type.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_13, &parse_tree__prog_type__Args_17);
                }
#line 756 "prog_type.m"
                if ((parse_tree__prog_type__MaybeRet0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "prog_type.m"
                  parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 756 "prog_type.m"
                else
#line 753 "prog_type.m"
                  {
#line 753 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet0_14, (MR_Integer) 0)));
#line 753 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_20;

#line 754 "prog_type.m"
                    {
#line 754 "prog_type.m"
                      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Ret0_19, &parse_tree__prog_type__Ret_20);
                    }
#line 755 "prog_type.m"
                    {
#line 755 "prog_type.m"
                      parse_tree__prog_type__MaybeRet_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "prog_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_18, 0) = ((MR_Box) (parse_tree__prog_type__Ret_20));
#line 755 "prog_type.m"
                    }
#line 753 "prog_type.m"
                  }
#line 750 "prog_type.m"
                {
#line 750 "prog_type.m"
                  MR_Word base;
#line 750 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 750 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 750 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 750 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_17));
#line 750 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__MaybeRet_18));
#line 750 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_15));
#line 750 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 750 "prog_type.m"
                }
#line 750 "prog_type.m"
              }
#line 733 "prog_type.m"
            else
#line 733 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 767 "prog_type.m"
                {
#line 767 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 767 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 767 "prog_type.m"
                  MR_Word parse_tree__prog_type__Type_30;

#line 768 "prog_type.m"
                  {
#line 768 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(parse_tree__prog_type__Type0_28, &parse_tree__prog_type__Type_30);
                  }
#line 767 "prog_type.m"
                  {
#line 767 "prog_type.m"
                    MR_Word base;
#line 767 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 767 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__2_2 = base;
#line 767 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 767 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Type_30));
#line 767 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_29));
#line 767 "prog_type.m"
                  }
#line 767 "prog_type.m"
                }
#line 733 "prog_type.m"
              else
#line 761 "prog_type.m"
                {
#line 761 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 761 "prog_type.m"
                  MR_Word parse_tree__prog_type__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 761 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args_23;

#line 762 "prog_type.m"
                  {
#line 762 "prog_type.m"
                    parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(parse_tree__prog_type__Args0_21, &parse_tree__prog_type__Args_23);
                  }
#line 761 "prog_type.m"
                  {
#line 761 "prog_type.m"
                    MR_Word base;
#line 761 "prog_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 761 "prog_type.m"
                    *parse_tree__prog_type__HeadVar__2_2 = base;
#line 761 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 761 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_23));
#line 761 "prog_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__Kind_22));
#line 761 "prog_type.m"
                  }
#line 761 "prog_type.m"
                }
#line 733 "prog_type.m"
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
#line 730 "prog_type.m"
  {
#line 730 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 730 "prog_type.m"
    MR_Word parse_tree__prog_type__V_11_11;

#line 731 "prog_type.m"
    {
#line 731 "prog_type.m"
      parse_tree__prog_type__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_11_11, 0) = ((MR_Box) (parse_tree__prog_type__RetType_9));
#line 731 "prog_type.m"
    }
#line 731 "prog_type.m"
    {
#line 731 "prog_type.m"
      MR_Word base;
#line 731 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_type.m"
      *parse_tree__prog_type__Type_10 = base;
#line 731 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_8));
#line 731 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_11_11));
#line 731 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 731 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 731 "prog_type.m"
    }
#line 730 "prog_type.m"
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
#line 726 "prog_type.m"
  {
#line 726 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 727 "prog_type.m"
    {
#line 727 "prog_type.m"
      MR_Word base;
#line 727 "prog_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 727 "prog_type.m"
      *parse_tree__prog_type__Type_8 = base;
#line 727 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 727 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_7));
#line 727 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_5));
#line 727 "prog_type.m"
      MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 727 "prog_type.m"
    }
#line 726 "prog_type.m"
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
#line 717 "prog_type.m"
  {
#line 717 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 717 "prog_type.m"
    if ((parse_tree__prog_type__PredOrFunc_7 == (MR_Integer) 1))
#line 720 "prog_type.m"
      {
#line 720 "prog_type.m"
        MR_Word parse_tree__prog_type__FuncArgTypes_11;
#line 720 "prog_type.m"
        MR_Word parse_tree__prog_type__FuncRetType_12;
#line 720 "prog_type.m"
        MR_Word parse_tree__prog_type__V_19_19;
#line 721 "prog_type.m"
        MR_Box parse_tree__prog_type__conv0_FuncRetType_12;

#line 721 "prog_type.m"
        {
#line 721 "prog_type.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_9, &parse_tree__prog_type__FuncArgTypes_11, &parse_tree__prog_type__conv0_FuncRetType_12);
        }
#line 721 "prog_type.m"
        parse_tree__prog_type__FuncRetType_12 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_12);
#line 731 "prog_type.m"
        {
#line 731 "prog_type.m"
          parse_tree__prog_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_19_19, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_12));
#line 731 "prog_type.m"
        }
#line 731 "prog_type.m"
        {
#line 731 "prog_type.m"
          MR_Word base;
#line 731 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_type.m"
          *parse_tree__prog_type__Type_10 = base;
#line 731 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_11));
#line 731 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_19_19));
#line 731 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 731 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 731 "prog_type.m"
        }
#line 720 "prog_type.m"
      }
#line 717 "prog_type.m"
    else
#line 726 "prog_type.m"
      {
#line 727 "prog_type.m"
        {
#line 727 "prog_type.m"
          MR_Word base;
#line 727 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 727 "prog_type.m"
          *parse_tree__prog_type__Type_10 = base;
#line 727 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 727 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__ArgTypes_9));
#line 727 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_6));
#line 727 "prog_type.m"
          MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 727 "prog_type.m"
        }
#line 726 "prog_type.m"
      }
#line 717 "prog_type.m"
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
#line 700 "prog_type.m"
  {
#line 700 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 700 "prog_type.m"
    MR_Word parse_tree__prog_type__BuiltinType_8;
#line 696 "prog_type.m"
    MR_String parse_tree__prog_type__Name_7;
#line 696 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 696 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 696 "prog_type.m"
    parse_tree__prog_type__succeeded = (parse_tree__prog_type__V_15_15 == (MR_Integer) 0);
#line 696 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 696 "prog_type.m"
      {
#line 696 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 696 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 696 "prog_type.m"
          {
#line 696 "prog_type.m"
            parse_tree__prog_type__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_14_14, (MR_Integer) 0)));
#line 697 "prog_type.m"
            {
#line 697 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_type__BuiltinType_8, parse_tree__prog_type__Name_7);
            }
#line 696 "prog_type.m"
          }
#line 696 "prog_type.m"
      }
#line 700 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 699 "prog_type.m"
      {
#line 699 "prog_type.m"
        MR_Word base;
#line 699 "prog_type.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_type.m"
        *parse_tree__prog_type__Type_6 = base;
#line 699 "prog_type.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_type__BuiltinType_8));
#line 699 "prog_type.m"
      }
#line 700 "prog_type.m"
    else
#line 704 "prog_type.m"
      {
#line 704 "prog_type.m"
        MR_Word parse_tree__prog_type__Purity_9;
#line 704 "prog_type.m"
        MR_Word parse_tree__prog_type__PredOrFunc_10;

#line 701 "prog_type.m"
        {
#line 701 "prog_type.m"
          parse_tree__prog_type__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type__Purity_9, &parse_tree__prog_type__PredOrFunc_10);
        }
#line 704 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 717 "prog_type.m"
          if ((parse_tree__prog_type__PredOrFunc_10 == (MR_Integer) 1))
#line 720 "prog_type.m"
            {
#line 720 "prog_type.m"
              MR_Word parse_tree__prog_type__FuncArgTypes_23;
#line 720 "prog_type.m"
              MR_Word parse_tree__prog_type__FuncRetType_24;
#line 720 "prog_type.m"
              MR_Word parse_tree__prog_type__V_31_31;
#line 721 "prog_type.m"
              MR_Box parse_tree__prog_type__conv0_FuncRetType_24;

#line 721 "prog_type.m"
              {
#line 721 "prog_type.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__Args_5, &parse_tree__prog_type__FuncArgTypes_23, &parse_tree__prog_type__conv0_FuncRetType_24);
              }
#line 721 "prog_type.m"
              parse_tree__prog_type__FuncRetType_24 = ((MR_Word) parse_tree__prog_type__conv0_FuncRetType_24);
#line 731 "prog_type.m"
              {
#line 731 "prog_type.m"
                parse_tree__prog_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_31_31, 0) = ((MR_Box) (parse_tree__prog_type__FuncRetType_24));
#line 731 "prog_type.m"
              }
#line 731 "prog_type.m"
              {
#line 731 "prog_type.m"
                MR_Word base;
#line 731 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_type.m"
                *parse_tree__prog_type__Type_6 = base;
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__FuncArgTypes_23));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_type__V_31_31));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 731 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 731 "prog_type.m"
              }
#line 720 "prog_type.m"
            }
#line 717 "prog_type.m"
          else
#line 726 "prog_type.m"
            {
#line 727 "prog_type.m"
              {
#line 727 "prog_type.m"
                MR_Word base;
#line 727 "prog_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 727 "prog_type.m"
                *parse_tree__prog_type__Type_6 = base;
#line 727 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 727 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 727 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_type__Purity_9));
#line 727 "prog_type.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 727 "prog_type.m"
              }
#line 726 "prog_type.m"
            }
#line 704 "prog_type.m"
        else
#line 709 "prog_type.m"
          {
#line 621 "prog_type.m"
            MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 621 "prog_type.m"
            MR_String parse_tree__prog_type__V_39_39;
#line 621 "prog_type.m"
            MR_Integer parse_tree__prog_type__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 621 "prog_type.m"
            parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 621 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 621 "prog_type.m"
              {
#line 621 "prog_type.m"
                parse_tree__prog_type__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 621 "prog_type.m"
                parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_39_39, (MR_String) "{}") == 0);
#line 621 "prog_type.m"
              }
#line 709 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 708 "prog_type.m"
              {
#line 708 "prog_type.m"
                {
#line 708 "prog_type.m"
                  MR_Word base;
#line 708 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 708 "prog_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_type.m"
                }
#line 708 "prog_type.m"
              }
#line 709 "prog_type.m"
            else
#line 710 "prog_type.m"
              {
#line 710 "prog_type.m"
                MR_Word parse_tree__prog_type__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 0)));
#line 710 "prog_type.m"
                MR_Integer parse_tree__prog_type__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_4, (MR_Integer) 1)));

#line 712 "prog_type.m"
                {
#line 712 "prog_type.m"
                  MR_Word base;
#line 712 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_type.m"
                  *parse_tree__prog_type__Type_6 = base;
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_12));
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Args_5));
#line 712 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "prog_type.m"
                }
#line 710 "prog_type.m"
              }
#line 709 "prog_type.m"
          }
#line 704 "prog_type.m"
      }
#line 700 "prog_type.m"
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
#line 689 "prog_type.m"
  while (MR_TRUE)
#line 689 "prog_type.m"
    {
#line 689 "prog_type.m"
      /* tailcall optimized into a loop */
#line 689 "prog_type.m"
      {
#line 689 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 689 "prog_type.m"
        MR_Word parse_tree__prog_type__V_9_9;
#line 689 "prog_type.m"
        MR_Word parse_tree__prog_type__V_10_10;

#line 689 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 689 "prog_type.m"
          {
#line 689 "prog_type.m"
            parse_tree__prog_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 689 "prog_type.m"
            parse_tree__prog_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 690 "prog_type.m"
            {
#line 690 "prog_type.m"
              parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_type__V_10_10, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
            }
#line 692 "prog_type.m"
            {
#line 692 "prog_type.m"
              /* direct tailcall eliminated */
#line 692 "prog_type.m"
              {
#line 692 "prog_type.m"
                MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__V_9_9;

#line 692 "prog_type.m"
                parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 692 "prog_type.m"
              }
#line 692 "prog_type.m"
              continue;
#line 692 "prog_type.m"
            }
#line 689 "prog_type.m"
          }
#line 689 "prog_type.m"
      }
#line 689 "prog_type.m"
      break;
#line 689 "prog_type.m"
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
#line 674 "prog_type.m"
  while (MR_TRUE)
#line 674 "prog_type.m"
    {
#line 674 "prog_type.m"
      /* tailcall optimized into a loop */
#line 674 "prog_type.m"
      {
#line 674 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 674 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 675 "prog_type.m"
          {
#line 675 "prog_type.m"
            MR_Word parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 675 "prog_type.m"
            MR_Word parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 675 "prog_type.m"
            MR_Word parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 676 "prog_type.m"
            {
#line 676 "prog_type.m"
              parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_6, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 676 "prog_type.m"
              return;
            }
#line 675 "prog_type.m"
          }
#line 674 "prog_type.m"
        else
#line 674 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 674 "prog_type.m"
            {
#line 674 "prog_type.m"
              MR_Word parse_tree__prog_type__V_4_4;

#line 674 "prog_type.m"
              *parse_tree__prog_type__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 674 "prog_type.m"
              parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 674 "prog_type.m"
              {
#line 674 "prog_type.m"
                parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
#line 674 "prog_type.m"
                return;
              }
#line 674 "prog_type.m"
            }
#line 674 "prog_type.m"
          else
#line 674 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 674 "prog_type.m"
              {
#line 674 "prog_type.m"
                MR_Word parse_tree__prog_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 674 "prog_type.m"
                MR_Word parse_tree__prog_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 683 "prog_type.m"
                MR_Word parse_tree__prog_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 683 "prog_type.m"
                *parse_tree__prog_type__Var_2 = parse_tree__prog_type__V_35_35;
#line 683 "prog_type.m"
                {
#line 683 "prog_type.m"
                  parse_tree__prog_type__cont(parse_tree__prog_type__cont_env_ptr);
                }
#line 685 "prog_type.m"
                {
#line 685 "prog_type.m"
                  parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_34_34, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 685 "prog_type.m"
                  return;
                }
#line 674 "prog_type.m"
              }
#line 674 "prog_type.m"
            else
#line 674 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 674 "prog_type.m"
                {
#line 674 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));
#line 674 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 677 "prog_type.m"
                  MR_Word parse_tree__prog_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 3)));

#line 678 "prog_type.m"
                  {
#line 678 "prog_type.m"
                    parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__V_39_39, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
                  }
#line 679 "prog_type.m"
                  {
#line 679 "prog_type.m"
                    MR_Word parse_tree__prog_type__Ret_15;

#line 679 "prog_type.m"
                    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 679 "prog_type.m"
                    if (parse_tree__prog_type__succeeded)
#line 679 "prog_type.m"
                      {
#line 679 "prog_type.m"
                        parse_tree__prog_type__Ret_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_38_38, (MR_Integer) 0)));
#line 680 "prog_type.m"
                        /* direct tailcall eliminated */
#line 680 "prog_type.m"
                        {
#line 680 "prog_type.m"
                          MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Ret_15;

#line 680 "prog_type.m"
                          parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 680 "prog_type.m"
                        }
#line 680 "prog_type.m"
                        continue;
#line 679 "prog_type.m"
                      }
#line 679 "prog_type.m"
                  }
#line 674 "prog_type.m"
                }
#line 674 "prog_type.m"
              else
#line 674 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 686 "prog_type.m"
                  {
#line 686 "prog_type.m"
                    MR_Word parse_tree__prog_type__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 686 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 687 "prog_type.m"
                    /* direct tailcall eliminated */
#line 687 "prog_type.m"
                    {
#line 687 "prog_type.m"
                      MR_Word parse_tree__prog_type__HeadVar__1__tmp_copy_1 = parse_tree__prog_type__Type_30;

#line 687 "prog_type.m"
                      parse_tree__prog_type__HeadVar__1_1 = parse_tree__prog_type__HeadVar__1__tmp_copy_1;
#line 687 "prog_type.m"
                    }
#line 687 "prog_type.m"
                    continue;
#line 686 "prog_type.m"
                  }
#line 674 "prog_type.m"
                else
#line 674 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 681 "prog_type.m"
                    {
#line 681 "prog_type.m"
                      MR_Word parse_tree__prog_type__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 681 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 2)));

#line 682 "prog_type.m"
                      {
#line 682 "prog_type.m"
                        parse_tree__prog_type__type_list_contains_var_2_p_0(parse_tree__prog_type__Args_20, parse_tree__prog_type__Var_2, parse_tree__prog_type__cont, parse_tree__prog_type__cont_env_ptr);
#line 682 "prog_type.m"
                        return;
                      }
#line 681 "prog_type.m"
                    }
#line 674 "prog_type.m"
                  else
#line 674 "prog_type.m"
                    {
#line 674 "prog_type.m"
                    }
#line 674 "prog_type.m"
      }
#line 674 "prog_type.m"
      break;
#line 674 "prog_type.m"
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
#line 661 "prog_type.m"
  {
#line 661 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 661 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 661 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 661 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 662 "prog_type.m"
    {
#line 662 "prog_type.m"
      parse_tree__prog_type__type_vars_list_2_3_p_0(parse_tree__prog_type__Types_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 10871 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 663 "prog_type.m"
    {
#line 663 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 664 "prog_type.m"
    {
#line 664 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 664 "prog_type.m"
      return;
    }
#line 661 "prog_type.m"
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
#line 634 "prog_type.m"
  {
#line 634 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 634 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeInfo_8_8;
#line 634 "prog_type.m"
    MR_Word parse_tree__prog_type__RevTVars_5;
#line 634 "prog_type.m"
    MR_Word parse_tree__prog_type__TVarsDups_6;

#line 635 "prog_type.m"
    {
#line 635 "prog_type.m"
      parse_tree__prog_type__type_vars_2_3_p_0(parse_tree__prog_type__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_type__RevTVars_5);
    }
#line 10915 "parse_tree.prog_type.c"
    parse_tree__prog_type__TypeInfo_8_8 = (MR_Word) &parse_tree__prog_type_scalar_common_1[0];
#line 636 "prog_type.m"
    {
#line 636 "prog_type.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__RevTVars_5, &parse_tree__prog_type__TVarsDups_6);
    }
#line 637 "prog_type.m"
    {
#line 637 "prog_type.m"
      mercury__list__remove_dups_2_p_0(parse_tree__prog_type__TypeInfo_8_8, parse_tree__prog_type__TVarsDups_6, parse_tree__prog_type__TVars_4);
#line 637 "prog_type.m"
      return;
    }
#line 634 "prog_type.m"
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
#line 628 "prog_type.m"
  {
#line 628 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 628 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "prog_type.m"
      *parse_tree__prog_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "prog_type.m"
    else
#line 629 "prog_type.m"
      {
#line 629 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 0)));
#line 629 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__2_2, (MR_Integer) 1)));
#line 629 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_8;
#line 629 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_9;
#line 629 "prog_type.m"
        MR_Word parse_tree__prog_type__Kind_10;

#line 630 "prog_type.m"
        {
#line 630 "prog_type.m"
          parse_tree__prog_data__get_tvar_kind_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Var_6, &parse_tree__prog_type__Kind_10);
        }
#line 631 "prog_type.m"
        {
#line 631 "prog_type.m"
          parse_tree__prog_type__Type_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 0) = ((MR_Box) (parse_tree__prog_type__Var_6));
#line 631 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_8, 1) = ((MR_Box) (parse_tree__prog_type__Kind_10));
#line 631 "prog_type.m"
        }
#line 632 "prog_type.m"
        {
#line 632 "prog_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(parse_tree__prog_type__KindMap_1, parse_tree__prog_type__Vars_7, &parse_tree__prog_type__Types_9);
        }
#line 629 "prog_type.m"
        {
#line 629 "prog_type.m"
          MR_Word base;
#line 629 "prog_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "prog_type.m"
          *parse_tree__prog_type__HeadVar__3_3 = base;
#line 629 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Type_8));
#line 629 "prog_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Types_9));
#line 629 "prog_type.m"
        }
#line 629 "prog_type.m"
      }
#line 628 "prog_type.m"
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
#line 623 "prog_type.m"
  {
#line 623 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 623 "prog_type.m"
    if ((parse_tree__prog_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "prog_type.m"
      {
#line 623 "prog_type.m"
        *parse_tree__prog_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 623 "prog_type.m"
      }
#line 623 "prog_type.m"
    else
#line 624 "prog_type.m"
      {
#line 624 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 624 "prog_type.m"
        MR_Word parse_tree__prog_type__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "prog_type.m"
        MR_Word parse_tree__prog_type__Var_5;
#line 624 "prog_type.m"
        MR_Word parse_tree__prog_type__Vars_6;
#line 625 "prog_type.m"
        MR_Word parse_tree__prog_type__V_7_7;

#line 625 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__Type_3)) == (MR_mktag((MR_Integer) 0)));
#line 625 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 625 "prog_type.m"
          {
#line 625 "prog_type.m"
            parse_tree__prog_type__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 0)));
#line 625 "prog_type.m"
            parse_tree__prog_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__Type_3, (MR_Integer) 1)));
#line 626 "prog_type.m"
            {
#line 626 "prog_type.m"
              parse_tree__prog_type__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(parse_tree__prog_type__Types_4, &parse_tree__prog_type__Vars_6);
            }
#line 624 "prog_type.m"
            if (parse_tree__prog_type__succeeded)
#line 624 "prog_type.m"
              {
#line 624 "prog_type.m"
                {
#line 624 "prog_type.m"
                  MR_Word base;
#line 624 "prog_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_type.m"
                  *parse_tree__prog_type__HeadVar__2_2 = base;
#line 624 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_type__Var_5));
#line 624 "prog_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_type__Vars_6));
#line 624 "prog_type.m"
                }
#line 624 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 624 "prog_type.m"
              }
#line 625 "prog_type.m"
          }
#line 624 "prog_type.m"
      }
#line 623 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 623 "prog_type.m"
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
#line 621 "prog_type.m"
  {
#line 621 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 621 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 0)));
#line 621 "prog_type.m"
    MR_String parse_tree__prog_type__V_4_4;
#line 621 "prog_type.m"
    MR_Integer parse_tree__prog_type__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__HeadVar__1_1, (MR_Integer) 1)));

#line 621 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_3_3)) == (MR_mktag((MR_Integer) 0)));
#line 621 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 621 "prog_type.m"
      {
#line 621 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_3_3, (MR_Integer) 0)));
#line 621 "prog_type.m"
        parse_tree__prog_type__succeeded = (strcmp(parse_tree__prog_type__V_4_4, (MR_String) "{}") == 0);
#line 621 "prog_type.m"
      }
#line 621 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 621 "prog_type.m"
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
#line 589 "prog_type.m"
  {
#line 589 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 589 "prog_type.m"
    MR_Word parse_tree__prog_type__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 0)));
#line 589 "prog_type.m"
    MR_String parse_tree__prog_type__PorFStr_11;
#line 590 "prog_type.m"
    MR_Integer parse_tree__prog_type___Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__TypeCtor_5, (MR_Integer) 1)));

#line 605 "prog_type.m"
    if (((MR_tag((MR_Word) parse_tree__prog_type__SymName_9)) == (MR_mktag((MR_Integer) 1))))
#line 605 "prog_type.m"
      {
#line 605 "prog_type.m"
        MR_String parse_tree__prog_type__Qualifier_16;
#line 605 "prog_type.m"
        MR_Word parse_tree__prog_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));

#line 605 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__SymName_9, (MR_Integer) 1)));
#line 605 "prog_type.m"
        parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 605 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 605 "prog_type.m"
          {
#line 605 "prog_type.m"
            parse_tree__prog_type__Qualifier_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_17_17, (MR_Integer) 0)));
#line 610 "prog_type.m"
            if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "impure") == 0))
#line 607 "prog_type.m"
              {
#line 608 "prog_type.m"
                *parse_tree__prog_type__Purity_6 = (MR_Integer) 2;
#line 609 "prog_type.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 607 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 607 "prog_type.m"
              }
#line 610 "prog_type.m"
            else
#line 610 "prog_type.m"
              if ((strcmp(parse_tree__prog_type__Qualifier_16, (MR_String) "semipure") == 0))
#line 611 "prog_type.m"
                {
#line 612 "prog_type.m"
                  *parse_tree__prog_type__Purity_6 = (MR_Integer) 1;
#line 613 "prog_type.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 611 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 611 "prog_type.m"
                }
#line 610 "prog_type.m"
              else
#line 610 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_FALSE;
#line 605 "prog_type.m"
          }
#line 605 "prog_type.m"
      }
#line 605 "prog_type.m"
    else
#line 616 "prog_type.m"
      {
#line 616 "prog_type.m"
        parse_tree__prog_type__PorFStr_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_9, (MR_Integer) 0)));
#line 617 "prog_type.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 618 "prog_type.m"
        *parse_tree__prog_type__Purity_6 = (MR_Integer) 0;
#line 616 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 616 "prog_type.m"
      }
#line 589 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 595 "prog_type.m"
      {
#line 595 "prog_type.m"
        if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "func") == 0))
#line 597 "prog_type.m"
          {
#line 597 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 1;
#line 597 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 597 "prog_type.m"
          }
#line 595 "prog_type.m"
        else
#line 595 "prog_type.m"
          if ((strcmp(parse_tree__prog_type__PorFStr_11, (MR_String) "pred") == 0))
#line 594 "prog_type.m"
            {
#line 594 "prog_type.m"
              *parse_tree__prog_type__PredOrFunc_7 = (MR_Integer) 0;
#line 594 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 594 "prog_type.m"
            }
#line 595 "prog_type.m"
          else
#line 595 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_FALSE;
#line 595 "prog_type.m"
      }
#line 589 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 589 "prog_type.m"
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
#line 587 "prog_type.m"
  {
#line 587 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 587 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 587 "prog_type.m"
    {
#line 587 "prog_type.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 587 "prog_type.m"
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
#line 583 "prog_type.m"
  {
#line 583 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 583 "prog_type.m"
    MR_Word parse_tree__prog_type___Args_5;

#line 583 "prog_type.m"
    {
#line 583 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TypeCtor_4, &parse_tree__prog_type___Args_5);
    }
#line 583 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 583 "prog_type.m"
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
#line 576 "prog_type.m"
  {
#line 576 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 576 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeCtorPrime_7;
#line 576 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgsPrime_8;

#line 573 "prog_type.m"
    {
#line 573 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type__TypeCtorPrime_7, &parse_tree__prog_type__ArgsPrime_8);
    }
#line 576 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 574 "prog_type.m"
      {
#line 574 "prog_type.m"
        *parse_tree__prog_type__TypeCtor_5 = parse_tree__prog_type__TypeCtorPrime_7;
#line 575 "prog_type.m"
        *parse_tree__prog_type__Args_6 = parse_tree__prog_type__ArgsPrime_8;
#line 574 "prog_type.m"
      }
#line 576 "prog_type.m"
    else
#line 577 "prog_type.m"
      {
#line 577 "prog_type.m"
        MR_String parse_tree__prog_type__V_11_11;
#line 577 "prog_type.m"
        MR_String parse_tree__prog_type__V_13_13;

#line 578 "prog_type.m"
        {
#line 578 "prog_type.m"
          parse_tree__prog_type__V_13_13 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_type__Type_4)));
        }
#line 578 "prog_type.m"
        {
#line 578 "prog_type.m"
          parse_tree__prog_type__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", parse_tree__prog_type__V_13_13);
        }
#line 577 "prog_type.m"
        {
#line 577 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", parse_tree__prog_type__V_11_11);
#line 577 "prog_type.m"
          return;
        }
#line 577 "prog_type.m"
      }
#line 576 "prog_type.m"
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
#line 525 "prog_type.m"
  while (MR_TRUE)
#line 525 "prog_type.m"
    {
#line 525 "prog_type.m"
      /* tailcall optimized into a loop */
#line 525 "prog_type.m"
      {
#line 525 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded;

#line 525 "prog_type.m"
        if (((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 2))))
#line 529 "prog_type.m"
          {
#line 529 "prog_type.m"
            MR_Word parse_tree__prog_type__BuiltinType_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 529 "prog_type.m"
            MR_String parse_tree__prog_type__Name_11;
#line 529 "prog_type.m"
            MR_Word parse_tree__prog_type__SymName_33;

#line 530 "prog_type.m"
            {
#line 530 "prog_type.m"
              parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_type__BuiltinType_10, &parse_tree__prog_type__Name_11);
            }
#line 531 "prog_type.m"
            {
#line 531 "prog_type.m"
              parse_tree__prog_type__SymName_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 531 "prog_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName_33, 0) = ((MR_Box) (parse_tree__prog_type__Name_11));
#line 531 "prog_type.m"
            }
#line 533 "prog_type.m"
            *parse_tree__prog_type__Args_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "prog_type.m"
            {
#line 534 "prog_type.m"
              MR_Word base;
#line 534 "prog_type.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "prog_type.m"
              *parse_tree__prog_type__TypeCtor_5 = base;
#line 534 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_33));
#line 534 "prog_type.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 534 "prog_type.m"
            }
#line 529 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 529 "prog_type.m"
          }
#line 525 "prog_type.m"
        else
#line 525 "prog_type.m"
          if (((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 1))))
#line 525 "prog_type.m"
            {
#line 525 "prog_type.m"
              MR_Word parse_tree__prog_type__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 0)));
#line 525 "prog_type.m"
              MR_Integer parse_tree__prog_type__Arity_9;
#line 525 "prog_type.m"
              MR_Word parse_tree__prog_type__V_8_8;

#line 525 "prog_type.m"
              *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 525 "prog_type.m"
              parse_tree__prog_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 526 "prog_type.m"
              {
#line 526 "prog_type.m"
                parse_tree__prog_type__Arity_9 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
              }
#line 527 "prog_type.m"
              {
#line 527 "prog_type.m"
                MR_Word base;
#line 527 "prog_type.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "prog_type.m"
                *parse_tree__prog_type__TypeCtor_5 = base;
#line 527 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_7));
#line 527 "prog_type.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_9));
#line 527 "prog_type.m"
              }
#line 525 "prog_type.m"
              parse_tree__prog_type__succeeded = MR_TRUE;
#line 525 "prog_type.m"
            }
#line 525 "prog_type.m"
          else
#line 525 "prog_type.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 565 "prog_type.m"
              {
#line 566 "prog_type.m"
                {
#line 566 "prog_type.m"
                  mercury__require__sorry_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
                }
#line 565 "prog_type.m"
                parse_tree__prog_type__succeeded = MR_TRUE;
#line 565 "prog_type.m"
              }
#line 525 "prog_type.m"
            else
#line 525 "prog_type.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 536 "prog_type.m"
                {
#line 536 "prog_type.m"
                  MR_Word parse_tree__prog_type__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 536 "prog_type.m"
                  MR_Word parse_tree__prog_type__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 536 "prog_type.m"
                  MR_Word parse_tree__prog_type__MaybeRet_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 536 "prog_type.m"
                  MR_Word parse_tree__prog_type__Purity_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 3)));
#line 536 "prog_type.m"
                  MR_String parse_tree__prog_type__PorFStr_17;
#line 536 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName0_18;
#line 536 "prog_type.m"
                  MR_Word parse_tree__prog_type__SymName_35;
#line 536 "prog_type.m"
                  MR_Integer parse_tree__prog_type__Arity_36;

#line 537 "prog_type.m"
                  {
#line 537 "prog_type.m"
                    parse_tree__prog_type__Arity_36 = mercury__list__length_1_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12);
                  }
#line 542 "prog_type.m"
                  if ((parse_tree__prog_type__MaybeRet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "prog_type.m"
                    {
#line 544 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "pred";
#line 545 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = parse_tree__prog_type__Args0_12;
#line 543 "prog_type.m"
                    }
#line 542 "prog_type.m"
                  else
#line 539 "prog_type.m"
                    {
#line 539 "prog_type.m"
                      MR_Word parse_tree__prog_type__Ret_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRet_13, (MR_Integer) 0)));
#line 539 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_29_29;

#line 540 "prog_type.m"
                      parse_tree__prog_type__PorFStr_17 = (MR_String) "func";
#line 541 "prog_type.m"
                      {
#line 541 "prog_type.m"
                        parse_tree__prog_type__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 0) = ((MR_Box) (parse_tree__prog_type__Ret_16));
#line 541 "prog_type.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_type.m"
                      }
#line 541 "prog_type.m"
                      {
#line 541 "prog_type.m"
                        *parse_tree__prog_type__Args_6 = mercury__list__append_2_f_0(parse_tree__prog_type__TypeCtorInfo_40_40, parse_tree__prog_type__Args0_12, parse_tree__prog_type__V_29_29);
                      }
#line 539 "prog_type.m"
                    }
#line 547 "prog_type.m"
                  {
#line 547 "prog_type.m"
                    parse_tree__prog_type__SymName0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 547 "prog_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_type__SymName0_18, 0) = ((MR_Box) (parse_tree__prog_type__PorFStr_17));
#line 547 "prog_type.m"
                  }
#line 551 "prog_type.m"
                  if ((parse_tree__prog_type__Purity_14 == (MR_Integer) 2))
#line 555 "prog_type.m"
                    {
#line 556 "prog_type.m"
                      {
#line 556 "prog_type.m"
                        parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "impure", parse_tree__prog_type__SymName0_18);
                      }
#line 555 "prog_type.m"
                    }
#line 551 "prog_type.m"
                  else
#line 551 "prog_type.m"
                    if ((parse_tree__prog_type__Purity_14 == (MR_Integer) 0))
#line 550 "prog_type.m"
                      parse_tree__prog_type__SymName_35 = parse_tree__prog_type__SymName0_18;
#line 551 "prog_type.m"
                    else
#line 552 "prog_type.m"
                      {
#line 553 "prog_type.m"
                        {
#line 553 "prog_type.m"
                          parse_tree__prog_type__SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "semipure", parse_tree__prog_type__SymName0_18);
                        }
#line 552 "prog_type.m"
                      }
#line 558 "prog_type.m"
                  {
#line 558 "prog_type.m"
                    MR_Word base;
#line 558 "prog_type.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 558 "prog_type.m"
                    *parse_tree__prog_type__TypeCtor_5 = base;
#line 558 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__SymName_35));
#line 558 "prog_type.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_36));
#line 558 "prog_type.m"
                  }
#line 536 "prog_type.m"
                  parse_tree__prog_type__succeeded = MR_TRUE;
#line 536 "prog_type.m"
                }
#line 525 "prog_type.m"
              else
#line 525 "prog_type.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 568 "prog_type.m"
                  {
#line 568 "prog_type.m"
                    MR_Word parse_tree__prog_type__SubType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 568 "prog_type.m"
                    MR_Word parse_tree__prog_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));

#line 569 "prog_type.m"
                    /* direct tailcall eliminated */
#line 569 "prog_type.m"
                    {
#line 569 "prog_type.m"
                      MR_Word parse_tree__prog_type__Type__tmp_copy_4 = parse_tree__prog_type__SubType_23;

#line 569 "prog_type.m"
                      parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type__tmp_copy_4;
#line 569 "prog_type.m"
                    }
#line 569 "prog_type.m"
                    continue;
#line 568 "prog_type.m"
                  }
#line 525 "prog_type.m"
                else
#line 525 "prog_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_type__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 560 "prog_type.m"
                    {
#line 560 "prog_type.m"
                      MR_Integer parse_tree__prog_type__Arity_38;
#line 560 "prog_type.m"
                      MR_Word parse_tree__prog_type__V_19_19;

#line 560 "prog_type.m"
                      *parse_tree__prog_type__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 1)));
#line 560 "prog_type.m"
                      parse_tree__prog_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type_4, (MR_Integer) 2)));
#line 562 "prog_type.m"
                      {
#line 562 "prog_type.m"
                        parse_tree__prog_type__Arity_38 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *parse_tree__prog_type__Args_6);
                      }
#line 563 "prog_type.m"
                      {
#line 563 "prog_type.m"
                        MR_Word base;
#line 563 "prog_type.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "prog_type.m"
                        *parse_tree__prog_type__TypeCtor_5 = base;
#line 563 "prog_type.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[1]));
#line 563 "prog_type.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_type__Arity_38));
#line 563 "prog_type.m"
                      }
#line 560 "prog_type.m"
                      parse_tree__prog_type__succeeded = MR_TRUE;
#line 560 "prog_type.m"
                    }
#line 525 "prog_type.m"
                  else
#line 525 "prog_type.m"
                    parse_tree__prog_type__succeeded = MR_FALSE;
#line 525 "prog_type.m"
        return parse_tree__prog_type__succeeded;
#line 525 "prog_type.m"
      }
#line 525 "prog_type.m"
      break;
#line 525 "prog_type.m"
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
#line 515 "prog_type.m"
  {
#line 515 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 515 "prog_type.m"
    MR_Word parse_tree__prog_type__PredOrFunc_8;
#line 515 "prog_type.m"
    MR_Word parse_tree__prog_type__TypeArgs0_10;
#line 511 "prog_type.m"
    MR_Word parse_tree__prog_type___Purity_7;

#line 511 "prog_type.m"
    {
#line 511 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_4, &parse_tree__prog_type___Purity_7, &parse_tree__prog_type__PredOrFunc_8, &parse_tree__prog_type__TypeArgs0_10);
    }
#line 515 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 512 "prog_type.m"
      {
#line 512 "prog_type.m"
        MR_String parse_tree__prog_type__PredOrFuncStr_11;
#line 512 "prog_type.m"
        MR_Word parse_tree__prog_type__V_13_13;

#line 512 "prog_type.m"
        *parse_tree__prog_type__TypeArgs_6 = parse_tree__prog_type__TypeArgs0_10;
#line 513 "prog_type.m"
        {
#line 513 "prog_type.m"
          parse_tree__prog_type__PredOrFuncStr_11 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_type__PredOrFunc_8);
        }
#line 514 "prog_type.m"
        {
#line 514 "prog_type.m"
          parse_tree__prog_type__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 514 "prog_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_13_13, 0) = ((MR_Box) (parse_tree__prog_type__PredOrFuncStr_11));
#line 514 "prog_type.m"
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_type__V_13_13));
#line 514 "prog_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 514 "prog_type.m"
        }
#line 512 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 512 "prog_type.m"
      }
#line 515 "prog_type.m"
    else
#line 519 "prog_type.m"
      {
#line 519 "prog_type.m"
        MR_Word parse_tree__prog_type__V_15_15;
#line 519 "prog_type.m"
        MR_String parse_tree__prog_type__V_16_16;
#line 519 "prog_type.m"
        MR_Integer parse_tree__prog_type__V_17_17;
#line 519 "prog_type.m"
        MR_Word parse_tree__prog_type__V_21_21;
#line 482 "prog_type.m"
        MR_Word parse_tree__prog_type__V_20_20;

#line 482 "prog_type.m"
        {
#line 482 "prog_type.m"
          parse_tree__prog_type__V_21_21 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_4);
        }
#line 482 "prog_type.m"
        parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 482 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 482 "prog_type.m"
          {
#line 482 "prog_type.m"
            *parse_tree__prog_type__TypeArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 1)));
#line 482 "prog_type.m"
            parse_tree__prog_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_21_21, (MR_Integer) 2)));
#line 518 "prog_type.m"
            parse_tree__prog_type__V_16_16 = (MR_String) "tuple";
#line 518 "prog_type.m"
            parse_tree__prog_type__V_17_17 = (MR_Integer) 0;
#line 518 "prog_type.m"
            parse_tree__prog_type__V_15_15 = (MR_Word) &parse_tree__prog_type_scalar_common_3[0];
#line 518 "prog_type.m"
            *parse_tree__prog_type__TypeCtor_5 = (MR_Word) &parse_tree__prog_type_scalar_common_1[6];
#line 518 "prog_type.m"
            parse_tree__prog_type__succeeded = MR_TRUE;
#line 482 "prog_type.m"
          }
#line 519 "prog_type.m"
      }
#line 515 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 515 "prog_type.m"
  }
#line 109 "prog_type.m"
}

#line 502 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(
#line 502 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 502 "prog_type.m"
{
#line 502 "prog_type.m"
  {
#line 502 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 502 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0, 1);
#line 502 "prog_type.m"
  }
#line 502 "prog_type.m"
}

#line 502 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_2(
#line 502 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 502 "prog_type.m"
{
#line 502 "prog_type.m"
  {
#line 502 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 502 "prog_type.m"
    {
#line 506 "prog_type.m"
      MR_Word parse_tree__prog_type__Binding_6;
#line 504 "prog_type.m"
      MR_Box parse_tree__prog_type__conv0_Binding_6;

#line 504 "prog_type.m"
      {
#line 504 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4, ((MR_Box) ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5)), &parse_tree__prog_type__conv0_Binding_6);
      }
#line 504 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 504 "prog_type.m"
        {
#line 504 "prog_type.m"
          parse_tree__prog_type__Binding_6 = ((MR_Word) parse_tree__prog_type__conv0_Binding_6);
#line 504 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 504 "prog_type.m"
        }
#line 506 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 505 "prog_type.m"
        {
#line 505 "prog_type.m"
          (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Binding_6, (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TSubst_4);
        }
#line 506 "prog_type.m"
      else
#line 507 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 506 "prog_type.m"
      if ((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded)
#line 506 "prog_type.m"
        {
#line 506 "prog_type.m"
          parse_tree__prog_type__subst_type_is_nonground_2_p_0_1(parse_tree__prog_type__env_ptr);
#line 506 "prog_type.m"
          return;
        }
#line 502 "prog_type.m"
    }
#line 502 "prog_type.m"
  }
#line 502 "prog_type.m"
}

#line 502 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(
#line 502 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 502 "prog_type.m"
{
#line 502 "prog_type.m"
  {
#line 502 "prog_type.m"
    struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 502 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__commit_0) == 0)
#line 502 "prog_type.m"
      {
#line 503 "prog_type.m"
        {
#line 503 "prog_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__Type_3, &(parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__TVar_5, parse_tree__prog_type__subst_type_is_nonground_2_p_0_2, parse_tree__prog_type__env_ptr);
        }
#line 502 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_FALSE;
#line 502 "prog_type.m"
      }
#line 502 "prog_type.m"
    else
#line 502 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__subst_type_is_nonground_2_p_0_env_0__succeeded = MR_TRUE;
#line 502 "prog_type.m"
  }
#line 502 "prog_type.m"
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
#line 502 "prog_type.m"
    {
#line 502 "prog_type.m"
      parse_tree__prog_type__subst_type_is_nonground_2_p_0_3(&parse_tree__prog_type__env);
    }
#line 502 "prog_type.m"
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
#line 500 "prog_type.m"
  {
#line 500 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;

#line 500 "prog_type.m"
    {
#line 500 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__subst_type_is_nonground_2_p_0(parse_tree__prog_type__Type_3, parse_tree__prog_type__TSubst_4);
    }
#line 500 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 500 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 500 "prog_type.m"
  }
#line 96 "prog_type.m"
}

#line 497 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_1(
#line 497 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 497 "prog_type.m"
{
#line 497 "prog_type.m"
  {
#line 497 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 497 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0, 1);
#line 497 "prog_type.m"
  }
#line 497 "prog_type.m"
}

#line 497 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_nonground_1_p_0_2(
#line 497 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 497 "prog_type.m"
{
#line 497 "prog_type.m"
  {
#line 497 "prog_type.m"
    struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_nonground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 497 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__commit_0) == 0)
#line 497 "prog_type.m"
      {
#line 497 "prog_type.m"
        {
#line 497 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 497 "prog_type.m"
          {
#line 497 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_nonground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 497 "prog_type.m"
        }
#line 497 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
#line 497 "prog_type.m"
      }
#line 497 "prog_type.m"
    else
#line 497 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
#line 497 "prog_type.m"
  }
#line 497 "prog_type.m"
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
#line 497 "prog_type.m"
    {
#line 497 "prog_type.m"
      parse_tree__prog_type__type_is_nonground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 497 "prog_type.m"
    return (parse_tree__prog_type__env).parse_tree__prog_type__type_is_nonground_1_p_0_env_0__succeeded;
#line 92 "prog_type.m"
  }
#line 92 "prog_type.m"
}

#line 494 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_1(
#line 494 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 494 "prog_type.m"
{
#line 494 "prog_type.m"
  {
#line 494 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 494 "prog_type.m"
    MR_builtin_longjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0, 1);
#line 494 "prog_type.m"
  }
#line 494 "prog_type.m"
}

#line 494 "prog_type.m"
static void MR_CALL 
parse_tree__prog_type__type_is_ground_1_p_0_2(
#line 494 "prog_type.m"
  void * parse_tree__prog_type__env_ptr_arg)
#line 494 "prog_type.m"
{
#line 494 "prog_type.m"
  {
#line 494 "prog_type.m"
    struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s * parse_tree__prog_type__env_ptr = (struct parse_tree__prog_type__type_is_ground_1_p_0_env_0_s *) parse_tree__prog_type__env_ptr_arg;

#line 494 "prog_type.m"
    if (MR_builtin_setjmp((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__commit_0) == 0)
#line 494 "prog_type.m"
      {
#line 494 "prog_type.m"
        {
#line 494 "prog_type.m"
          MR_Word parse_tree__prog_type__V_3_3;

#line 494 "prog_type.m"
          {
#line 494 "prog_type.m"
            parse_tree__prog_type__type_contains_var_2_p_0((parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__Type_2, &parse_tree__prog_type__V_3_3, parse_tree__prog_type__type_is_ground_1_p_0_1, parse_tree__prog_type__env_ptr);
          }
#line 494 "prog_type.m"
        }
#line 494 "prog_type.m"
        (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
#line 494 "prog_type.m"
      }
#line 494 "prog_type.m"
    else
#line 494 "prog_type.m"
      (parse_tree__prog_type__env_ptr)->parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
#line 494 "prog_type.m"
  }
#line 494 "prog_type.m"
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
#line 494 "prog_type.m"
    {
#line 494 "prog_type.m"
      parse_tree__prog_type__type_is_ground_1_p_0_2(&parse_tree__prog_type__env);
    }
#line 494 "prog_type.m"
    (parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded = !((parse_tree__prog_type__env).parse_tree__prog_type__type_is_ground_1_p_0_env_0__succeeded);
#line 494 "prog_type.m"
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
#line 487 "prog_type.m"
  while (MR_TRUE)
#line 487 "prog_type.m"
    {
#line 487 "prog_type.m"
      /* tailcall optimized into a loop */
#line 487 "prog_type.m"
      {
#line 487 "prog_type.m"
        MR_bool parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__Type0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 487 "prog_type.m"
        MR_Word parse_tree__prog_type__Type_4;
#line 487 "prog_type.m"
        MR_Word parse_tree__prog_type__Type1_5;
#line 485 "prog_type.m"
        MR_Word parse_tree__prog_type__V_6_6;

#line 485 "prog_type.m"
        if (parse_tree__prog_type__succeeded)
#line 485 "prog_type.m"
          {
#line 485 "prog_type.m"
            parse_tree__prog_type__Type1_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 1)));
#line 485 "prog_type.m"
            parse_tree__prog_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__Type0_3, (MR_Integer) 2)));
#line 486 "prog_type.m"
            /* direct tailcall eliminated */
#line 486 "prog_type.m"
            {
#line 486 "prog_type.m"
              MR_Word parse_tree__prog_type__Type0__tmp_copy_3 = parse_tree__prog_type__Type1_5;

#line 486 "prog_type.m"
              parse_tree__prog_type__Type0_3 = parse_tree__prog_type__Type0__tmp_copy_3;
#line 486 "prog_type.m"
            }
#line 486 "prog_type.m"
            continue;
#line 485 "prog_type.m"
          }
#line 485 "prog_type.m"
        else
#line 488 "prog_type.m"
          parse_tree__prog_type__Type_4 = parse_tree__prog_type__Type0_3;
#line 487 "prog_type.m"
        return parse_tree__prog_type__Type_4;
#line 487 "prog_type.m"
      }
#line 487 "prog_type.m"
      break;
#line 487 "prog_type.m"
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
#line 481 "prog_type.m"
  {
#line 481 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 481 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 482 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 482 "prog_type.m"
    {
#line 482 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_3);
    }
#line 482 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 482 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 482 "prog_type.m"
      {
#line 482 "prog_type.m"
        *parse_tree__prog_type__ArgTypes_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 482 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_6_6, (MR_Integer) 2)));
#line 482 "prog_type.m"
      }
#line 481 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 481 "prog_type.m"
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
#line 477 "prog_type.m"
  {
#line 477 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 477 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 477 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 477 "prog_type.m"
    MR_Word parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;

#line 473 "prog_type.m"
    {
#line 473 "prog_type.m"
      parse_tree__prog_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__prog_type__Type_6, &parse_tree__prog_type__STATE_VARIABLE_Purity_15_15, &parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16, &parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18);
    }
#line 477 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 476 "prog_type.m"
      {
#line 476 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_14 = parse_tree__prog_type__STATE_VARIABLE_PredArgTypes_18_18;
#line 476 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_12 = parse_tree__prog_type__STATE_VARIABLE_PredOrFunc_16_16;
#line 476 "prog_type.m"
        *parse_tree__prog_type__STATE_VARIABLE_Purity_11 = parse_tree__prog_type__STATE_VARIABLE_Purity_15_15;
#line 476 "prog_type.m"
      }
#line 477 "prog_type.m"
    else
#line 478 "prog_type.m"
      {
#line 478 "prog_type.m"
        {
#line 478 "prog_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_type", (MR_String) "predicate \140parse_tree.prog_type.type_is_higher_order_details_det\'/5", (MR_String) "type is not higher-order");
#line 478 "prog_type.m"
          return;
        }
#line 478 "prog_type.m"
      }
#line 477 "prog_type.m"
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
#line 457 "prog_type.m"
  {
#line 457 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 457 "prog_type.m"
    MR_Word parse_tree__prog_type__ArgTypes_11;
#line 457 "prog_type.m"
    MR_Word parse_tree__prog_type__MaybeRetType_12;
#line 457 "prog_type.m"
    MR_Word parse_tree__prog_type__V_14_14;

#line 458 "prog_type.m"
    {
#line 458 "prog_type.m"
      parse_tree__prog_type__V_14_14 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_6);
    }
#line 459 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 459 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 459 "prog_type.m"
      {
#line 459 "prog_type.m"
        parse_tree__prog_type__ArgTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 1)));
#line 459 "prog_type.m"
        parse_tree__prog_type__MaybeRetType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 2)));
#line 459 "prog_type.m"
        *parse_tree__prog_type__Purity_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_14_14, (MR_Integer) 3)));
#line 464 "prog_type.m"
        if ((parse_tree__prog_type__MaybeRetType_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "prog_type.m"
          {
#line 466 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 0;
#line 467 "prog_type.m"
            *parse_tree__prog_type__PredArgTypes_10 = parse_tree__prog_type__ArgTypes_11;
#line 465 "prog_type.m"
          }
#line 464 "prog_type.m"
        else
#line 461 "prog_type.m"
          {
#line 461 "prog_type.m"
            MR_Word parse_tree__prog_type__RetType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_type__MaybeRetType_12, (MR_Integer) 0)));
#line 461 "prog_type.m"
            MR_Word parse_tree__prog_type__V_15_15;

#line 462 "prog_type.m"
            *parse_tree__prog_type__PredOrFunc_8 = (MR_Integer) 1;
#line 463 "prog_type.m"
            {
#line 463 "prog_type.m"
              parse_tree__prog_type__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 0) = ((MR_Box) (parse_tree__prog_type__RetType_13));
#line 463 "prog_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_type__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "prog_type.m"
            }
#line 463 "prog_type.m"
            {
#line 463 "prog_type.m"
              *parse_tree__prog_type__PredArgTypes_10 = mercury__list__append_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_type__ArgTypes_11, parse_tree__prog_type__V_15_15);
            }
#line 461 "prog_type.m"
          }
#line 464 "prog_type.m"
        parse_tree__prog_type__succeeded = MR_TRUE;
#line 459 "prog_type.m"
      }
#line 457 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 457 "prog_type.m"
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
#line 453 "prog_type.m"
  {
#line 453 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 453 "prog_type.m"
    MR_Word parse_tree__prog_type__V_7_7;
#line 454 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 454 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 454 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 454 "prog_type.m"
    {
#line 454 "prog_type.m"
      parse_tree__prog_type__V_7_7 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 454 "prog_type.m"
    parse_tree__prog_type__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_type__V_7_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 454 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 454 "prog_type.m"
      {
#line 454 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 1)));
#line 454 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 2)));
#line 454 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_type__V_7_7, (MR_Integer) 3)));
#line 454 "prog_type.m"
      }
#line 453 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 453 "prog_type.m"
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
#line 451 "prog_type.m"
  {
#line 451 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 447 "prog_type.m"
    MR_Word parse_tree__prog_type__V_6_6;
#line 448 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;
#line 448 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;

#line 448 "prog_type.m"
    {
#line 448 "prog_type.m"
      parse_tree__prog_type__V_6_6 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 448 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_6_6)) == (MR_mktag((MR_Integer) 0)));
#line 448 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 448 "prog_type.m"
      {
#line 448 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 0)));
#line 448 "prog_type.m"
        parse_tree__prog_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_6_6, (MR_Integer) 1)));
#line 448 "prog_type.m"
      }
#line 451 "prog_type.m"
    parse_tree__prog_type__succeeded = !(parse_tree__prog_type__succeeded);
#line 451 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 451 "prog_type.m"
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
#line 447 "prog_type.m"
  {
#line 447 "prog_type.m"
    MR_bool parse_tree__prog_type__succeeded;
#line 447 "prog_type.m"
    MR_Word parse_tree__prog_type__V_5_5;
#line 448 "prog_type.m"
    MR_Word parse_tree__prog_type__V_3_3;
#line 448 "prog_type.m"
    MR_Word parse_tree__prog_type__V_4_4;

#line 448 "prog_type.m"
    {
#line 448 "prog_type.m"
      parse_tree__prog_type__V_5_5 = parse_tree__prog_type__strip_kind_annotation_1_f_0(parse_tree__prog_type__Type_2);
    }
#line 448 "prog_type.m"
    parse_tree__prog_type__succeeded = ((MR_tag((MR_Word) parse_tree__prog_type__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 448 "prog_type.m"
    if (parse_tree__prog_type__succeeded)
#line 448 "prog_type.m"
      {
#line 448 "prog_type.m"
        parse_tree__prog_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 0)));
#line 448 "prog_type.m"
        parse_tree__prog_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_type__V_5_5, (MR_Integer) 1)));
#line 448 "prog_type.m"
      }
#line 447 "prog_type.m"
    return parse_tree__prog_type__succeeded;
#line 447 "prog_type.m"
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
