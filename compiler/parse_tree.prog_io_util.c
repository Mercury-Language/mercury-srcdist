/*
** Automatically generated from `prog_io_util.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module parse_tree.prog_io_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_util__init
ENDINIT
*/

#include "parse_tree.prog_io_util.mih"


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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 823 "prog_io_util.m"
struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
#line 826 "prog_io_util.m"
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 826 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
#line 826 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
#line 832 "prog_io_util.m"
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
#line 832 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
#line 832 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
#line 832 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
#line 832 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
#line 832 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
#line 832 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
#line 823 "prog_io_util.m"
};


#line 158 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 161 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0;

#line 164 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1;

#line 167 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2];

#line 170 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2];

#line 173 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2];

#line 176 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1];

#line 179 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0;

#line 182 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0;

#line 185 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 188 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2];

#line 191 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1;

#line 194 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0;

#line 197 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2];

#line 200 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2;

#line 203 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3;

#line 206 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1];

#line 209 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1];

#line 212 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1];

#line 215 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1];

#line 218 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_decl_attribute_0[4];

#line 221 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4];

#line 224 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4];

#line 227 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 230 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 233 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 236 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1];

#line 239 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0;

#line 242 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1];

#line 245 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1;

#line 248 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1];

#line 251 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1];

#line 254 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1[2];

#line 257 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2];

#line 260 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2];

#line 263 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1];

#line 266 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0;

#line 269 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2];

#line 272 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1;

#line 275 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1];

#line 278 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1];

#line 281 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2[2];

#line 284 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2];

#line 287 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2];

#line 290 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1];

#line 293 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0;

#line 296 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3];

#line 299 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1;

#line 302 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1];

#line 305 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1];

#line 308 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3[2];

#line 311 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2];

#line 314 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2];

#line 317 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1];

#line 320 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0;

#line 323 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4];

#line 326 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1;

#line 329 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1];

#line 332 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1];

#line 335 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4[2];

#line 338 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2];

#line 341 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2];

#line 344 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

#line 347 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 350 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 353 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 356 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 359 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

#line 362 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

#line 365 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 368 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 371 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

#line 374 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

#line 377 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

#line 380 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

#line 383 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

#line 386 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

#line 389 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

#line 392 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

#line 395 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

#line 398 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

#line 401 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

#line 404 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

#line 407 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

#line 410 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

#line 413 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

#line 416 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

#line 419 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

#line 422 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

#line 425 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

#line 428 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

#line 431 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

#line 434 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

#line 437 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

#line 440 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

#line 443 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

#line 446 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 449 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 452 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0;

#line 455 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1;

#line 458 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2];

#line 461 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2];

#line 464 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2];

#line 467 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 470 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 473 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 476 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 479 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 482 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 484 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 487 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 490 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 492 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 494 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 497 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 500 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 502 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 505 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 508 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 510 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 512 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 515 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 518 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 520 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 523 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 526 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 528 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 530 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 533 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 536 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 538 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 540 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 543 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 546 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 548 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 550 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 552 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 555 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 558 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 560 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 562 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 564 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 567 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 570 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 572 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 574 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 576 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 578 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 581 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 584 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 586 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 588 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 590 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 592 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 595 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 598 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 600 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 602 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 604 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 606 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 608 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 611 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 614 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 616 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 618 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 620 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 622 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 624 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 627 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 630 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 632 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 634 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 636 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 638 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 640 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 642 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7);

#line 645 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 648 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 650 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 652 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 655 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 658 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 660 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 662 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 664 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 667 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 670 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 672 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 675 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 678 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 680 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 682 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 685 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 688 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 690 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 692 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 695 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 698 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 700 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 702 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 704 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 707 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 710 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 712 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 714 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 717 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 720 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 722 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 724 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 726 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 729 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 732 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 734 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 736 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 739 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 742 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 744 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 746 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 748 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 751 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 754 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 756 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 758 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 761 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 764 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 766 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 768 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 770 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 773 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 776 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 778 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 781 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 784 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 786 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 788 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 791 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 794 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 796 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 799 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 802 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 804 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 806 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 809 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 812 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 814 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 817 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 820 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 822 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 824 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 897 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0(
#line 897 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_0_11,
#line 897 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_List_12);

#line 970 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 970 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 970 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1027 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1027 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1027 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1152 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1152 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1152 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10);

#line 1132 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1132 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 847 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 847 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 847 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 847 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

#line 839 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 839 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 839 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 839 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

#line 832 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 832 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 832 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 832 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 832 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 832 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 823 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 823 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 783 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(
#line 783 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 783 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 783 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_5);

#line 493 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 493 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 493 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 493 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3);

#line 491 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 491 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 491 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 491 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

#line 488 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 488 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 488 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4);

#line 424 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 424 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 424 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 424 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 424 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9);

#line 399 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 399 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__5_5);


static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[27][2];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[10][3];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[13][1];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_5[1][5];




static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not allowed here."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[9])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[6]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[7]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[8]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_io_util__unparse_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[13][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "."))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0))
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



#line 1335 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1343 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

#line 1349 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

#line 1355 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1361 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1367 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1373 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "allow_constrained_inst_var",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0
};

#line 1394 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0
};

#line 1399 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0 = {
  (MR_String) "decl_attr_purity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0,
  NULL,
  NULL,
  NULL
};

#line 1414 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1422 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1430 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1436 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1 = {
  (MR_String) "decl_attr_quantifier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1,
  NULL,
  NULL,
  NULL
};

#line 1451 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1459 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
};

#line 1465 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2 = {
  (MR_String) "decl_attr_constraints",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2,
  NULL,
  NULL,
  NULL
};

#line 1480 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3 = {
  (MR_String) "decl_attr_solver_type",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1495 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 1500 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0
};

#line 1505 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1
};

#line 1510 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2
};

#line 1515 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_decl_attribute_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3
  }
};

#line 1539 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 1547 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1555 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "decl_attribute",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_decl_attribute_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0
};

#line 1576 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1585 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0
  }
};

#line 1593 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attrs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "decl_attrs",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1614 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1622 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1627 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0 = {
  (MR_String) "error1",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0,
  NULL,
  NULL,
  NULL
};

#line 1642 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1647 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1 = {
  (MR_String) "ok1",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1,
  NULL,
  NULL,
  NULL
};

#line 1662 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0
};

#line 1667 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 1672 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1
  }
};

#line 1686 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 1692 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1698 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe1_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe1_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe1",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1
};

#line 1719 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1724 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0 = {
  (MR_String) "error2",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0,
  NULL,
  NULL,
  NULL
};

#line 1739 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1745 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1 = {
  (MR_String) "ok2",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1,
  NULL,
  NULL,
  NULL
};

#line 1760 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0
};

#line 1765 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 1770 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1
  }
};

#line 1784 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 1790 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1796 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe2_2_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe2_2_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe2",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2
};

#line 1817 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1822 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0 = {
  (MR_String) "error3",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0,
  NULL,
  NULL,
  NULL
};

#line 1837 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 1844 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1 = {
  (MR_String) "ok3",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1,
  NULL,
  NULL,
  NULL
};

#line 1859 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0
};

#line 1864 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 1869 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1
  }
};

#line 1883 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 1889 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1895 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe3_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe3_3_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe3_3_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe3",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3
};

#line 1916 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1921 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0 = {
  (MR_String) "error4",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0,
  NULL,
  NULL,
  NULL
};

#line 1936 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

#line 1944 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1 = {
  (MR_String) "ok4",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1,
  NULL,
  NULL,
  NULL
};

#line 1959 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0
};

#line 1964 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 1969 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1
  }
};

#line 1983 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 1989 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1995 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe4_4 = {
  (MR_Integer) 4,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe4_4_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe4_4_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe4",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4
};

#line 2016 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2024 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

#line 2032 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

#line 2041 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_functor",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2062 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2070 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2079 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_functor",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2100 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2108 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2116 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

#line 2125 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

#line 2134 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_pred_or_func",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2155 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2163 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2168 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0 = {
  (MR_String) "osdc_ordinary_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0,
  NULL,
  NULL,
  NULL
};

#line 2183 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2188 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1 = {
  (MR_String) "osdc_state_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1,
  NULL,
  NULL,
  NULL
};

#line 2203 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2208 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2 = {
  (MR_String) "osdc_dot_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2,
  NULL,
  NULL,
  NULL
};

#line 2223 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2228 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3 = {
  (MR_String) "osdc_colon_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3,
  NULL,
  NULL,
  NULL
};

#line 2243 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

#line 2248 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2253 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

#line 2258 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

#line 2263 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3
  }
};

#line 2287 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2295 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2303 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "ordinary_state_dot_colon_var",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1
};

#line 2324 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2329 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0 = {
  (MR_String) "os_ordinary_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0,
  NULL,
  NULL,
  NULL
};

#line 2344 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2349 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1 = {
  (MR_String) "os_state_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1,
  NULL,
  NULL,
  NULL
};

#line 2364 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

#line 2369 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2374 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1
  }
};

#line 2388 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2394 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2400 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "ordinary_state_var",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1
};

#line 2421 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2429 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1
  }
};

#line 2439 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____parser_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____parser_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "parser",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2460 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

#line 2466 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

#line 2472 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 2478 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 2484 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2490 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "quantifier_type",
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0
  },
  {
    parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0
};

#line 2511 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2519 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2528 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2pvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____var2pvar_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____var2pvar_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "var2pvar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2549 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2557 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2566 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2tvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____var2tvar_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____var2tvar_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "var2tvar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2587 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 2590 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2592 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2594 "parse_tree.prog_io_util.c"
{
#line 2596 "parse_tree.prog_io_util.c"
  {
#line 2598 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2601 "parse_tree.prog_io_util.c"
    {
#line 2603 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2606 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2608 "parse_tree.prog_io_util.c"
  }
#line 2610 "parse_tree.prog_io_util.c"
}

#line 2613 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 2616 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 2618 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2620 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2622 "parse_tree.prog_io_util.c"
{
#line 2624 "parse_tree.prog_io_util.c"
  {
#line 2626 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2629 "parse_tree.prog_io_util.c"
    {
#line 2631 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2634 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2636 "parse_tree.prog_io_util.c"
  }
#line 2638 "parse_tree.prog_io_util.c"
}

#line 2641 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 2644 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2646 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2648 "parse_tree.prog_io_util.c"
{
#line 2650 "parse_tree.prog_io_util.c"
  {
#line 2652 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2655 "parse_tree.prog_io_util.c"
    {
#line 2657 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attribute_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2660 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2662 "parse_tree.prog_io_util.c"
  }
#line 2664 "parse_tree.prog_io_util.c"
}

#line 2667 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 2670 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 2672 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2674 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2676 "parse_tree.prog_io_util.c"
{
#line 2678 "parse_tree.prog_io_util.c"
  {
#line 2680 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2683 "parse_tree.prog_io_util.c"
    {
#line 2685 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attribute_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2688 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2690 "parse_tree.prog_io_util.c"
  }
#line 2692 "parse_tree.prog_io_util.c"
}

#line 2695 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 2698 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2700 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2702 "parse_tree.prog_io_util.c"
{
#line 2704 "parse_tree.prog_io_util.c"
  {
#line 2706 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2709 "parse_tree.prog_io_util.c"
    {
#line 2711 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attrs_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2714 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2716 "parse_tree.prog_io_util.c"
  }
#line 2718 "parse_tree.prog_io_util.c"
}

#line 2721 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 2724 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 2726 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2728 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2730 "parse_tree.prog_io_util.c"
{
#line 2732 "parse_tree.prog_io_util.c"
  {
#line 2734 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2737 "parse_tree.prog_io_util.c"
    {
#line 2739 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attrs_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2742 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2744 "parse_tree.prog_io_util.c"
  }
#line 2746 "parse_tree.prog_io_util.c"
}

#line 2749 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 2752 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2754 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2756 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2758 "parse_tree.prog_io_util.c"
{
#line 2760 "parse_tree.prog_io_util.c"
  {
#line 2762 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2765 "parse_tree.prog_io_util.c"
    {
#line 2767 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2770 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2772 "parse_tree.prog_io_util.c"
  }
#line 2774 "parse_tree.prog_io_util.c"
}

#line 2777 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 2780 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2782 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 2784 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2786 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 2788 "parse_tree.prog_io_util.c"
{
#line 2790 "parse_tree.prog_io_util.c"
  {
#line 2792 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2795 "parse_tree.prog_io_util.c"
    {
#line 2797 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 2800 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2802 "parse_tree.prog_io_util.c"
  }
#line 2804 "parse_tree.prog_io_util.c"
}

#line 2807 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 2810 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2812 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2814 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2816 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 2818 "parse_tree.prog_io_util.c"
{
#line 2820 "parse_tree.prog_io_util.c"
  {
#line 2822 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2825 "parse_tree.prog_io_util.c"
    {
#line 2827 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 2830 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2832 "parse_tree.prog_io_util.c"
  }
#line 2834 "parse_tree.prog_io_util.c"
}

#line 2837 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 2840 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2842 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2844 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 2846 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2848 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 2850 "parse_tree.prog_io_util.c"
{
#line 2852 "parse_tree.prog_io_util.c"
  {
#line 2854 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2857 "parse_tree.prog_io_util.c"
    {
#line 2859 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 2862 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2864 "parse_tree.prog_io_util.c"
  }
#line 2866 "parse_tree.prog_io_util.c"
}

#line 2869 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 2872 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2874 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2876 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2878 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2880 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 2882 "parse_tree.prog_io_util.c"
{
#line 2884 "parse_tree.prog_io_util.c"
  {
#line 2886 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2889 "parse_tree.prog_io_util.c"
    {
#line 2891 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 2894 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2896 "parse_tree.prog_io_util.c"
  }
#line 2898 "parse_tree.prog_io_util.c"
}

#line 2901 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 2904 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2906 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2908 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2910 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 2912 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 2914 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 2916 "parse_tree.prog_io_util.c"
{
#line 2918 "parse_tree.prog_io_util.c"
  {
#line 2920 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2923 "parse_tree.prog_io_util.c"
    {
#line 2925 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 2928 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2930 "parse_tree.prog_io_util.c"
  }
#line 2932 "parse_tree.prog_io_util.c"
}

#line 2935 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 2938 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2940 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2942 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2944 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2946 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 2948 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 2950 "parse_tree.prog_io_util.c"
{
#line 2952 "parse_tree.prog_io_util.c"
  {
#line 2954 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2957 "parse_tree.prog_io_util.c"
    {
#line 2959 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 2962 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2964 "parse_tree.prog_io_util.c"
  }
#line 2966 "parse_tree.prog_io_util.c"
}

#line 2969 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 2972 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2974 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2976 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2978 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2980 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 2982 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 2984 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7)
#line 2986 "parse_tree.prog_io_util.c"
{
#line 2988 "parse_tree.prog_io_util.c"
  {
#line 2990 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2993 "parse_tree.prog_io_util.c"
    {
#line 2995 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_7));
    }
#line 2998 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3000 "parse_tree.prog_io_util.c"
  }
#line 3002 "parse_tree.prog_io_util.c"
}

#line 3005 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 3008 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3010 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3012 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3014 "parse_tree.prog_io_util.c"
{
#line 3016 "parse_tree.prog_io_util.c"
  {
#line 3018 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3021 "parse_tree.prog_io_util.c"
    {
#line 3023 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3026 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3028 "parse_tree.prog_io_util.c"
  }
#line 3030 "parse_tree.prog_io_util.c"
}

#line 3033 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 3036 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3038 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3040 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3042 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3044 "parse_tree.prog_io_util.c"
{
#line 3046 "parse_tree.prog_io_util.c"
  {
#line 3048 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3051 "parse_tree.prog_io_util.c"
    {
#line 3053 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3056 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3058 "parse_tree.prog_io_util.c"
  }
#line 3060 "parse_tree.prog_io_util.c"
}

#line 3063 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 3066 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3068 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3070 "parse_tree.prog_io_util.c"
{
#line 3072 "parse_tree.prog_io_util.c"
  {
#line 3074 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3077 "parse_tree.prog_io_util.c"
    {
#line 3079 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3082 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3084 "parse_tree.prog_io_util.c"
  }
#line 3086 "parse_tree.prog_io_util.c"
}

#line 3089 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 3092 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3094 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3096 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3098 "parse_tree.prog_io_util.c"
{
#line 3100 "parse_tree.prog_io_util.c"
  {
#line 3102 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3105 "parse_tree.prog_io_util.c"
    {
#line 3107 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3110 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3112 "parse_tree.prog_io_util.c"
  }
#line 3114 "parse_tree.prog_io_util.c"
}

#line 3117 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 3120 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3122 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3124 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3126 "parse_tree.prog_io_util.c"
{
#line 3128 "parse_tree.prog_io_util.c"
  {
#line 3130 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3133 "parse_tree.prog_io_util.c"
    {
#line 3135 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3138 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3140 "parse_tree.prog_io_util.c"
  }
#line 3142 "parse_tree.prog_io_util.c"
}

#line 3145 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 3148 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3150 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3152 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3154 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3156 "parse_tree.prog_io_util.c"
{
#line 3158 "parse_tree.prog_io_util.c"
  {
#line 3160 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3163 "parse_tree.prog_io_util.c"
    {
#line 3165 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3168 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3170 "parse_tree.prog_io_util.c"
  }
#line 3172 "parse_tree.prog_io_util.c"
}

#line 3175 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 3178 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3180 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3182 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3184 "parse_tree.prog_io_util.c"
{
#line 3186 "parse_tree.prog_io_util.c"
  {
#line 3188 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3191 "parse_tree.prog_io_util.c"
    {
#line 3193 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3196 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3198 "parse_tree.prog_io_util.c"
  }
#line 3200 "parse_tree.prog_io_util.c"
}

#line 3203 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 3206 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3208 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3210 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3212 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3214 "parse_tree.prog_io_util.c"
{
#line 3216 "parse_tree.prog_io_util.c"
  {
#line 3218 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3221 "parse_tree.prog_io_util.c"
    {
#line 3223 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3226 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3228 "parse_tree.prog_io_util.c"
  }
#line 3230 "parse_tree.prog_io_util.c"
}

#line 3233 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 3236 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3238 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3240 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3242 "parse_tree.prog_io_util.c"
{
#line 3244 "parse_tree.prog_io_util.c"
  {
#line 3246 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3249 "parse_tree.prog_io_util.c"
    {
#line 3251 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3254 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3256 "parse_tree.prog_io_util.c"
  }
#line 3258 "parse_tree.prog_io_util.c"
}

#line 3261 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 3264 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3266 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3268 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3270 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3272 "parse_tree.prog_io_util.c"
{
#line 3274 "parse_tree.prog_io_util.c"
  {
#line 3276 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3279 "parse_tree.prog_io_util.c"
    {
#line 3281 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3284 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3286 "parse_tree.prog_io_util.c"
  }
#line 3288 "parse_tree.prog_io_util.c"
}

#line 3291 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 3294 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3296 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3298 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3300 "parse_tree.prog_io_util.c"
{
#line 3302 "parse_tree.prog_io_util.c"
  {
#line 3304 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3307 "parse_tree.prog_io_util.c"
    {
#line 3309 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3312 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3314 "parse_tree.prog_io_util.c"
  }
#line 3316 "parse_tree.prog_io_util.c"
}

#line 3319 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 3322 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3324 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3326 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3328 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3330 "parse_tree.prog_io_util.c"
{
#line 3332 "parse_tree.prog_io_util.c"
  {
#line 3334 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3337 "parse_tree.prog_io_util.c"
    {
#line 3339 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3342 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3344 "parse_tree.prog_io_util.c"
  }
#line 3346 "parse_tree.prog_io_util.c"
}

#line 3349 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 3352 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3354 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3356 "parse_tree.prog_io_util.c"
{
#line 3358 "parse_tree.prog_io_util.c"
  {
#line 3360 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3363 "parse_tree.prog_io_util.c"
    {
#line 3365 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____quantifier_type_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3368 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3370 "parse_tree.prog_io_util.c"
  }
#line 3372 "parse_tree.prog_io_util.c"
}

#line 3375 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 3378 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3380 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3382 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3384 "parse_tree.prog_io_util.c"
{
#line 3386 "parse_tree.prog_io_util.c"
  {
#line 3388 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3391 "parse_tree.prog_io_util.c"
    {
#line 3393 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____quantifier_type_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3396 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3398 "parse_tree.prog_io_util.c"
  }
#line 3400 "parse_tree.prog_io_util.c"
}

#line 3403 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 3406 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3408 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3410 "parse_tree.prog_io_util.c"
{
#line 3412 "parse_tree.prog_io_util.c"
  {
#line 3414 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3417 "parse_tree.prog_io_util.c"
    {
#line 3419 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3422 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3424 "parse_tree.prog_io_util.c"
  }
#line 3426 "parse_tree.prog_io_util.c"
}

#line 3429 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 3432 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3434 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3436 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3438 "parse_tree.prog_io_util.c"
{
#line 3440 "parse_tree.prog_io_util.c"
  {
#line 3442 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3445 "parse_tree.prog_io_util.c"
    {
#line 3447 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3450 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3452 "parse_tree.prog_io_util.c"
  }
#line 3454 "parse_tree.prog_io_util.c"
}

#line 3457 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 3460 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3462 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3464 "parse_tree.prog_io_util.c"
{
#line 3466 "parse_tree.prog_io_util.c"
  {
#line 3468 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3471 "parse_tree.prog_io_util.c"
    {
#line 3473 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3476 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3478 "parse_tree.prog_io_util.c"
  }
#line 3480 "parse_tree.prog_io_util.c"
}

#line 3483 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 3486 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3488 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3490 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3492 "parse_tree.prog_io_util.c"
{
#line 3494 "parse_tree.prog_io_util.c"
  {
#line 3496 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3499 "parse_tree.prog_io_util.c"
    {
#line 3501 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3504 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3506 "parse_tree.prog_io_util.c"
  }
#line 3508 "parse_tree.prog_io_util.c"
}

#line 897 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0(
#line 897 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_0_11,
#line 897 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_List_12)
#line 897 "prog_io_util.m"
{
#line 904 "prog_io_util.m"
  while (MR_TRUE)
#line 904 "prog_io_util.m"
    {
#line 904 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 904 "prog_io_util.m"
      {
#line 904 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 904 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__L_8;
#line 904 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__R_9;
#line 901 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_13_13;
#line 901 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 901 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 901 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 901 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_21_21;
#line 901 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_10;

#line 901 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 901 "prog_io_util.m"
          {
#line 901 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
#line 901 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
#line 901 "prog_io_util.m"
            parse_tree__prog_io_util___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
#line 901 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 901 "prog_io_util.m"
              {
#line 901 "prog_io_util.m"
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 901 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
#line 901 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 901 "prog_io_util.m"
                  {
#line 901 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 901 "prog_io_util.m"
                      {
#line 901 "prog_io_util.m"
                        parse_tree__prog_io_util__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 901 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, (MR_Integer) 1)));
#line 901 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 901 "prog_io_util.m"
                          {
#line 901 "prog_io_util.m"
                            parse_tree__prog_io_util__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 901 "prog_io_util.m"
                            parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 901 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_util.m"
                          }
#line 901 "prog_io_util.m"
                      }
#line 901 "prog_io_util.m"
                  }
#line 901 "prog_io_util.m"
              }
#line 901 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_17_17;

#line 902 "prog_io_util.m"
            {
#line 902 "prog_io_util.m"
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_9, parse_tree__prog_io_util__STATE_VARIABLE_List_0_11, &parse_tree__prog_io_util__STATE_VARIABLE_List_17_17);
            }
#line 903 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 903 "prog_io_util.m"
            {
#line 903 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_8;
#line 903 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_0__tmp_copy_11 = parse_tree__prog_io_util__STATE_VARIABLE_List_17_17;

#line 903 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_List_0_11 = parse_tree__prog_io_util__STATE_VARIABLE_List_0__tmp_copy_11;
#line 903 "prog_io_util.m"
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
#line 903 "prog_io_util.m"
            }
#line 903 "prog_io_util.m"
            continue;
#line 902 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
        else
#line 905 "prog_io_util.m"
          {
#line 905 "prog_io_util.m"
            MR_Word base;
#line 905 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_List_12 = base;
#line 905 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
#line 905 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__STATE_VARIABLE_List_0_11));
#line 905 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
      }
#line 904 "prog_io_util.m"
      break;
#line 904 "prog_io_util.m"
    }
#line 897 "prog_io_util.m"
}

#line 72 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0(
#line 72 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 72 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 72 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 72 "prog_io_util.m"
{
#line 72 "prog_io_util.m"
  {
#line 72 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 72 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 72 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 72 "prog_io_util.m"
    {
#line 72 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[3], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 72 "prog_io_util.m"
      return;
    }
#line 72 "prog_io_util.m"
  }
#line 72 "prog_io_util.m"
}

#line 72 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0(
#line 72 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 72 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 72 "prog_io_util.m"
{
#line 72 "prog_io_util.m"
  {
#line 72 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 72 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 72 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 72 "prog_io_util.m"
    {
#line 72 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[3], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 72 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 72 "prog_io_util.m"
  }
#line 72 "prog_io_util.m"
}

#line 74 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0(
#line 74 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 74 "prog_io_util.m"
{
#line 74 "prog_io_util.m"
  {
#line 74 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 74 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 74 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 74 "prog_io_util.m"
    {
#line 74 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 74 "prog_io_util.m"
      return;
    }
#line 74 "prog_io_util.m"
  }
#line 74 "prog_io_util.m"
}

#line 74 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0(
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 74 "prog_io_util.m"
{
#line 74 "prog_io_util.m"
  {
#line 74 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 74 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 74 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 74 "prog_io_util.m"
    {
#line 74 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 74 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 74 "prog_io_util.m"
  }
#line 74 "prog_io_util.m"
}

#line 193 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0(
#line 193 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 193 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 193 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 193 "prog_io_util.m"
{
#line 193 "prog_io_util.m"
  {
#line 193 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 193 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 193 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 193 "prog_io_util.m"
    {
#line 193 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 193 "prog_io_util.m"
      return;
    }
#line 193 "prog_io_util.m"
  }
#line 193 "prog_io_util.m"
}

#line 193 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0(
#line 193 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 193 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 193 "prog_io_util.m"
{
#line 3828 "parse_tree.prog_io_util.c"
  {
#line 3830 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 3833 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3835 "parse_tree.prog_io_util.c"
  }
#line 193 "prog_io_util.m"
}

#line 76 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0(
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 76 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 76 "prog_io_util.m"
{
#line 76 "prog_io_util.m"
  {
#line 76 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 76 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 76 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 76 "prog_io_util.m"
    {
#line 76 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 76 "prog_io_util.m"
      return;
    }
#line 76 "prog_io_util.m"
  }
#line 76 "prog_io_util.m"
}

#line 76 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0(
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 76 "prog_io_util.m"
{
#line 76 "prog_io_util.m"
  {
#line 76 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 76 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 76 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 76 "prog_io_util.m"
    {
#line 76 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 76 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 76 "prog_io_util.m"
  }
#line 76 "prog_io_util.m"
}

#line 970 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 970 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 970 "prog_io_util.m"
{
#line 970 "prog_io_util.m"
  {
#line 970 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 970 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 970 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 970 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 970 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 3932 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 970 "prog_io_util.m"
    else
#line 970 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 970 "prog_io_util.m"
        {
#line 970 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 970 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 970 "prog_io_util.m"
            {
#line 970 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 970 "prog_io_util.m"
              {
#line 970 "prog_io_util.m"
                mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
#line 970 "prog_io_util.m"
                return;
              }
#line 970 "prog_io_util.m"
            }
#line 970 "prog_io_util.m"
          else
#line 3961 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 970 "prog_io_util.m"
        }
#line 970 "prog_io_util.m"
      else
#line 970 "prog_io_util.m"
        {
#line 970 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 970 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3974 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 970 "prog_io_util.m"
          else
#line 970 "prog_io_util.m"
            {
#line 970 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 970 "prog_io_util.m"
              {
#line 970 "prog_io_util.m"
                mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
#line 970 "prog_io_util.m"
                return;
              }
#line 970 "prog_io_util.m"
            }
#line 970 "prog_io_util.m"
        }
#line 970 "prog_io_util.m"
  }
#line 970 "prog_io_util.m"
}

#line 970 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 970 "prog_io_util.m"
{
#line 970 "prog_io_util.m"
  {
#line 970 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 970 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 970 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 970 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 970 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 970 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 970 "prog_io_util.m"
    else
#line 970 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 970 "prog_io_util.m"
        {
#line 970 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 970 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4;

#line 970 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 970 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 970 "prog_io_util.m"
            {
#line 970 "prog_io_util.m"
              parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4044 "parse_tree.prog_io_util.c"
              {
#line 4046 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
              }
#line 970 "prog_io_util.m"
            }
#line 970 "prog_io_util.m"
        }
#line 970 "prog_io_util.m"
      else
#line 970 "prog_io_util.m"
        {
#line 970 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 970 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_6_6;

#line 970 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 970 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 970 "prog_io_util.m"
            {
#line 970 "prog_io_util.m"
              parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4070 "parse_tree.prog_io_util.c"
              {
#line 4072 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
              }
#line 970 "prog_io_util.m"
            }
#line 970 "prog_io_util.m"
        }
#line 970 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 970 "prog_io_util.m"
  }
#line 970 "prog_io_util.m"
}

#line 1027 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1027 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1027 "prog_io_util.m"
{
#line 1027 "prog_io_util.m"
  {
#line 1027 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1027 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1027 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1027 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
#line 1027 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 4112 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1027 "prog_io_util.m"
    else
#line 1027 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 1027 "prog_io_util.m"
        {
#line 1027 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1027 "prog_io_util.m"
            {
#line 1027 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
              {
#line 1027 "prog_io_util.m"
                mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
#line 1027 "prog_io_util.m"
                return;
              }
#line 1027 "prog_io_util.m"
            }
#line 1027 "prog_io_util.m"
          else
#line 1027 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4143 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1027 "prog_io_util.m"
            else
#line 1027 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4149 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1027 "prog_io_util.m"
              else
#line 4153 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1027 "prog_io_util.m"
        }
#line 1027 "prog_io_util.m"
      else
#line 1027 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1027 "prog_io_util.m"
          {
#line 1027 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4168 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1027 "prog_io_util.m"
            else
#line 1027 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1027 "prog_io_util.m"
                {
#line 1027 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
                  {
#line 1027 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
#line 1027 "prog_io_util.m"
                    return;
                  }
#line 1027 "prog_io_util.m"
                }
#line 1027 "prog_io_util.m"
              else
#line 1027 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4192 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1027 "prog_io_util.m"
                else
#line 4196 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1027 "prog_io_util.m"
          }
#line 1027 "prog_io_util.m"
        else
#line 1027 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "prog_io_util.m"
            {
#line 1027 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4211 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1027 "prog_io_util.m"
              else
#line 1027 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4217 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1027 "prog_io_util.m"
                else
#line 1027 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "prog_io_util.m"
                    {
#line 1027 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
                      {
#line 1027 "prog_io_util.m"
                        mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
#line 1027 "prog_io_util.m"
                        return;
                      }
#line 1027 "prog_io_util.m"
                    }
#line 1027 "prog_io_util.m"
                  else
#line 4239 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1027 "prog_io_util.m"
            }
#line 1027 "prog_io_util.m"
          else
#line 1027 "prog_io_util.m"
            {
#line 1027 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4252 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1027 "prog_io_util.m"
              else
#line 1027 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4258 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1027 "prog_io_util.m"
                else
#line 1027 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4264 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1027 "prog_io_util.m"
                  else
#line 1027 "prog_io_util.m"
                    {
#line 1027 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1027 "prog_io_util.m"
                      {
#line 1027 "prog_io_util.m"
                        mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
#line 1027 "prog_io_util.m"
                        return;
                      }
#line 1027 "prog_io_util.m"
                    }
#line 1027 "prog_io_util.m"
            }
#line 1027 "prog_io_util.m"
  }
#line 1027 "prog_io_util.m"
}

#line 1027 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1027 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1027 "prog_io_util.m"
{
#line 1027 "prog_io_util.m"
  {
#line 1027 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1027 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1027 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1027 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 1027 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1027 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1027 "prog_io_util.m"
    else
#line 1027 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1027 "prog_io_util.m"
        {
#line 1027 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_10_10;

#line 1027 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1027 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 1027 "prog_io_util.m"
            {
#line 1027 "prog_io_util.m"
              parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4334 "parse_tree.prog_io_util.c"
              {
#line 4336 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
              }
#line 1027 "prog_io_util.m"
            }
#line 1027 "prog_io_util.m"
        }
#line 1027 "prog_io_util.m"
      else
#line 1027 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1027 "prog_io_util.m"
          {
#line 1027 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 1027 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1027 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1027 "prog_io_util.m"
              {
#line 1027 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4362 "parse_tree.prog_io_util.c"
                {
#line 4364 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
#line 1027 "prog_io_util.m"
              }
#line 1027 "prog_io_util.m"
          }
#line 1027 "prog_io_util.m"
        else
#line 1027 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "prog_io_util.m"
            {
#line 1027 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_4_4;

#line 1027 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1027 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1027 "prog_io_util.m"
                {
#line 1027 "prog_io_util.m"
                  parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4390 "parse_tree.prog_io_util.c"
                  {
#line 4392 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                  }
#line 1027 "prog_io_util.m"
                }
#line 1027 "prog_io_util.m"
            }
#line 1027 "prog_io_util.m"
          else
#line 1027 "prog_io_util.m"
            {
#line 1027 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_6_6;

#line 1027 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1027 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1027 "prog_io_util.m"
                {
#line 1027 "prog_io_util.m"
                  parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4416 "parse_tree.prog_io_util.c"
                  {
#line 4418 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                  }
#line 1027 "prog_io_util.m"
                }
#line 1027 "prog_io_util.m"
            }
#line 1027 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1027 "prog_io_util.m"
  }
#line 1027 "prog_io_util.m"
}

#line 70 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(
#line 70 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 70 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 70 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 70 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 70 "prog_io_util.m"
{
#line 70 "prog_io_util.m"
  {
#line 70 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_13_13;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 4460 "parse_tree.prog_io_util.c"
    {
#line 4462 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4464 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4466 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4468 "parse_tree.prog_io_util.c"
    }
#line 4470 "parse_tree.prog_io_util.c"
    {
#line 4472 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4474 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4476 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4478 "parse_tree.prog_io_util.c"
    }
#line 4480 "parse_tree.prog_io_util.c"
    {
#line 4482 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4484 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4486 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 4488 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
#line 4490 "parse_tree.prog_io_util.c"
    }
#line 70 "prog_io_util.m"
    {
#line 70 "prog_io_util.m"
      parse_tree__prog_io_util____Compare____maybe2_2_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_13_13, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 70 "prog_io_util.m"
      return;
    }
#line 70 "prog_io_util.m"
  }
#line 70 "prog_io_util.m"
}

#line 70 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(
#line 70 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 70 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 70 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 70 "prog_io_util.m"
{
#line 70 "prog_io_util.m"
  {
#line 70 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_12_12;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 70 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 4530 "parse_tree.prog_io_util.c"
    {
#line 4532 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4534 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4536 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 4538 "parse_tree.prog_io_util.c"
    }
#line 4540 "parse_tree.prog_io_util.c"
    {
#line 4542 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4544 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4546 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 4548 "parse_tree.prog_io_util.c"
    }
#line 4550 "parse_tree.prog_io_util.c"
    {
#line 4552 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4554 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4556 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 4558 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
#line 4560 "parse_tree.prog_io_util.c"
    }
#line 70 "prog_io_util.m"
    {
#line 70 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_12_12, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 70 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 70 "prog_io_util.m"
  }
#line 70 "prog_io_util.m"
}

#line 67 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0(
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 67 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 67 "prog_io_util.m"
{
#line 67 "prog_io_util.m"
  {
#line 67 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 4600 "parse_tree.prog_io_util.c"
    {
#line 4602 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4604 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 4606 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4608 "parse_tree.prog_io_util.c"
    }
#line 4610 "parse_tree.prog_io_util.c"
    {
#line 4612 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4614 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4616 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 4618 "parse_tree.prog_io_util.c"
    }
#line 67 "prog_io_util.m"
    {
#line 67 "prog_io_util.m"
      parse_tree__prog_io_util____Compare____maybe2_2_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_11_11, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 67 "prog_io_util.m"
      return;
    }
#line 67 "prog_io_util.m"
  }
#line 67 "prog_io_util.m"
}

#line 67 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0(
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 67 "prog_io_util.m"
{
#line 67 "prog_io_util.m"
  {
#line 67 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 67 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 4656 "parse_tree.prog_io_util.c"
    {
#line 4658 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4660 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 4662 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 4664 "parse_tree.prog_io_util.c"
    }
#line 4666 "parse_tree.prog_io_util.c"
    {
#line 4668 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4670 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4672 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 4674 "parse_tree.prog_io_util.c"
    }
#line 67 "prog_io_util.m"
    {
#line 67 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_10_10, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 67 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 67 "prog_io_util.m"
  }
#line 67 "prog_io_util.m"
}

#line 66 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0(
#line 66 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 66 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 66 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 66 "prog_io_util.m"
{
#line 66 "prog_io_util.m"
  {
#line 66 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 66 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 66 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 66 "prog_io_util.m"
    {
#line 66 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[1], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 66 "prog_io_util.m"
      return;
    }
#line 66 "prog_io_util.m"
  }
#line 66 "prog_io_util.m"
}

#line 66 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0(
#line 66 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 66 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 66 "prog_io_util.m"
{
#line 66 "prog_io_util.m"
  {
#line 66 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 66 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 66 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 66 "prog_io_util.m"
    {
#line 66 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[6], parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 66 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 66 "prog_io_util.m"
  }
#line 66 "prog_io_util.m"
}

#line 57 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0(
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_29,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_30,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T3_31,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T4_32,
#line 57 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 57 "prog_io_util.m"
{
#line 57 "prog_io_util.m"
  {
#line 57 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 57 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_27 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 57 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_28 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 57 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_27 == parse_tree__prog_io_util__CastY_28);
#line 57 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 4782 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "prog_io_util.m"
    else
#line 57 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 57 "prog_io_util.m"
        {
#line 57 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 57 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 57 "prog_io_util.m"
            {
#line 57 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 57 "prog_io_util.m"
              {
#line 57 "prog_io_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[5], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_34_34)), ((MR_Box) (parse_tree__prog_io_util__V_5_5)));
#line 57 "prog_io_util.m"
                return;
              }
#line 57 "prog_io_util.m"
            }
#line 57 "prog_io_util.m"
          else
#line 4811 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "prog_io_util.m"
        }
#line 57 "prog_io_util.m"
      else
#line 57 "prog_io_util.m"
        {
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_35_35 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 3));
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_36_36 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_37_37 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_38_38 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 57 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4830 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "prog_io_util.m"
          else
#line 57 "prog_io_util.m"
            {
#line 57 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 57 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 57 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 2));
#line 57 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_23_23 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 3));
#line 57 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_24_24;

#line 57 "prog_io_util.m"
              {
#line 57 "prog_io_util.m"
                mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_29, &parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__V_38_38, parse_tree__prog_io_util__V_20_20);
              }
#line 4852 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_24_24 == (MR_Integer) 0);
#line 57 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 57 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_24_24;
#line 57 "prog_io_util.m"
              else
#line 57 "prog_io_util.m"
                {
#line 57 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25;

#line 57 "prog_io_util.m"
                  {
#line 57 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_30, &parse_tree__prog_io_util__V_25_25, parse_tree__prog_io_util__V_37_37, parse_tree__prog_io_util__V_21_21);
                  }
#line 4872 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_25_25 == (MR_Integer) 0);
#line 57 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 57 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_25_25;
#line 57 "prog_io_util.m"
                  else
#line 57 "prog_io_util.m"
                    {
#line 57 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_26_26;

#line 57 "prog_io_util.m"
                      {
#line 57 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_31, &parse_tree__prog_io_util__V_26_26, parse_tree__prog_io_util__V_36_36, parse_tree__prog_io_util__V_22_22);
                      }
#line 4892 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == (MR_Integer) 0);
#line 57 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 57 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                        *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_26_26;
#line 57 "prog_io_util.m"
                      else
#line 57 "prog_io_util.m"
                        {
#line 57 "prog_io_util.m"
                          mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T4_32, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_35_35, parse_tree__prog_io_util__V_23_23);
#line 57 "prog_io_util.m"
                          return;
                        }
#line 57 "prog_io_util.m"
                    }
#line 57 "prog_io_util.m"
                }
#line 57 "prog_io_util.m"
            }
#line 57 "prog_io_util.m"
        }
#line 57 "prog_io_util.m"
  }
#line 57 "prog_io_util.m"
}

#line 57 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0(
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_15,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_16,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T3_17,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T4_18,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 57 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 57 "prog_io_util.m"
{
#line 57 "prog_io_util.m"
  {
#line 57 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 57 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 57 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_14 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 57 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_13 == parse_tree__prog_io_util__CastY_14);
#line 57 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 57 "prog_io_util.m"
    else
#line 57 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 57 "prog_io_util.m"
        {
#line 57 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TypeInfo_19_19;
#line 57 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 57 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4;

#line 57 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 57 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
            {
#line 57 "prog_io_util.m"
              parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4975 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 4977 "parse_tree.prog_io_util.c"
              {
#line 4979 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_19_19, ((MR_Box) (parse_tree__prog_io_util__V_3_3)), ((MR_Box) (parse_tree__prog_io_util__V_4_4)));
              }
#line 57 "prog_io_util.m"
            }
#line 57 "prog_io_util.m"
        }
#line 57 "prog_io_util.m"
      else
#line 57 "prog_io_util.m"
        {
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2));
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3));
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_9_9;
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_10_10;
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_11_11;
#line 57 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_12_12;

#line 57 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 57 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
            {
#line 57 "prog_io_util.m"
              parse_tree__prog_io_util__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 57 "prog_io_util.m"
              parse_tree__prog_io_util__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 57 "prog_io_util.m"
              parse_tree__prog_io_util__V_11_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 57 "prog_io_util.m"
              parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 3));
#line 5021 "parse_tree.prog_io_util.c"
              {
#line 5023 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_15, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_9_9);
              }
#line 57 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                {
#line 5030 "parse_tree.prog_io_util.c"
                  {
#line 5032 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_16, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_10_10);
                  }
#line 57 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                    {
#line 5039 "parse_tree.prog_io_util.c"
                      {
#line 5041 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_17, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_11_11);
                      }
#line 57 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 5046 "parse_tree.prog_io_util.c"
                        {
#line 5048 "parse_tree.prog_io_util.c"
                          return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T4_18, parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_12_12);
                        }
#line 57 "prog_io_util.m"
                    }
#line 57 "prog_io_util.m"
                }
#line 57 "prog_io_util.m"
            }
#line 57 "prog_io_util.m"
        }
#line 57 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 57 "prog_io_util.m"
  }
#line 57 "prog_io_util.m"
}

#line 53 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0(
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_24,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_25,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T3_26,
#line 53 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 53 "prog_io_util.m"
{
#line 53 "prog_io_util.m"
  {
#line 53 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 53 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_22 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 53 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_23 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 53 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_22 == parse_tree__prog_io_util__CastY_23);
#line 53 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5096 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 53 "prog_io_util.m"
    else
#line 53 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 53 "prog_io_util.m"
        {
#line 53 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 53 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 53 "prog_io_util.m"
            {
#line 53 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 53 "prog_io_util.m"
              {
#line 53 "prog_io_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[5], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_28_28)), ((MR_Box) (parse_tree__prog_io_util__V_5_5)));
#line 53 "prog_io_util.m"
                return;
              }
#line 53 "prog_io_util.m"
            }
#line 53 "prog_io_util.m"
          else
#line 5125 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "prog_io_util.m"
        }
#line 53 "prog_io_util.m"
      else
#line 53 "prog_io_util.m"
        {
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_30_30 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_31_31 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 53 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5142 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 53 "prog_io_util.m"
          else
#line 53 "prog_io_util.m"
            {
#line 53 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_17_17 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 53 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_18_18 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 53 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_19_19 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 2));
#line 53 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_20_20;

#line 53 "prog_io_util.m"
              {
#line 53 "prog_io_util.m"
                mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_24, &parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_31_31, parse_tree__prog_io_util__V_17_17);
              }
#line 5162 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == (MR_Integer) 0);
#line 53 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 53 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_20_20;
#line 53 "prog_io_util.m"
              else
#line 53 "prog_io_util.m"
                {
#line 53 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_21_21;

#line 53 "prog_io_util.m"
                  {
#line 53 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_25, &parse_tree__prog_io_util__V_21_21, parse_tree__prog_io_util__V_30_30, parse_tree__prog_io_util__V_18_18);
                  }
#line 5182 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_21_21 == (MR_Integer) 0);
#line 53 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 53 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_21_21;
#line 53 "prog_io_util.m"
                  else
#line 53 "prog_io_util.m"
                    {
#line 53 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_26, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_29_29, parse_tree__prog_io_util__V_19_19);
#line 53 "prog_io_util.m"
                      return;
                    }
#line 53 "prog_io_util.m"
                }
#line 53 "prog_io_util.m"
            }
#line 53 "prog_io_util.m"
        }
#line 53 "prog_io_util.m"
  }
#line 53 "prog_io_util.m"
}

#line 53 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0(
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_13,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_14,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T3_15,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 53 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 53 "prog_io_util.m"
{
#line 53 "prog_io_util.m"
  {
#line 53 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 53 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 53 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 53 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 53 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 53 "prog_io_util.m"
    else
#line 53 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 53 "prog_io_util.m"
        {
#line 53 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TypeInfo_16_16;
#line 53 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 53 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4;

#line 53 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 53 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
            {
#line 53 "prog_io_util.m"
              parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5261 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5263 "parse_tree.prog_io_util.c"
              {
#line 5265 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_16_16, ((MR_Box) (parse_tree__prog_io_util__V_3_3)), ((MR_Box) (parse_tree__prog_io_util__V_4_4)));
              }
#line 53 "prog_io_util.m"
            }
#line 53 "prog_io_util.m"
        }
#line 53 "prog_io_util.m"
      else
#line 53 "prog_io_util.m"
        {
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2));
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_8_8;
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_9_9;
#line 53 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_10_10;

#line 53 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 53 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
            {
#line 53 "prog_io_util.m"
              parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 53 "prog_io_util.m"
              parse_tree__prog_io_util__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 53 "prog_io_util.m"
              parse_tree__prog_io_util__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 5301 "parse_tree.prog_io_util.c"
              {
#line 5303 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_8_8);
              }
#line 53 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
                {
#line 5310 "parse_tree.prog_io_util.c"
                  {
#line 5312 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_14, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_9_9);
                  }
#line 53 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 5317 "parse_tree.prog_io_util.c"
                    {
#line 5319 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_15, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_10_10);
                    }
#line 53 "prog_io_util.m"
                }
#line 53 "prog_io_util.m"
            }
#line 53 "prog_io_util.m"
        }
#line 53 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 53 "prog_io_util.m"
  }
#line 53 "prog_io_util.m"
}

#line 49 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0(
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_19,
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_20,
#line 49 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 49 "prog_io_util.m"
{
#line 49 "prog_io_util.m"
  {
#line 49 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 49 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 49 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 49 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 49 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5363 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 49 "prog_io_util.m"
    else
#line 49 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 49 "prog_io_util.m"
        {
#line 49 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 49 "prog_io_util.m"
            {
#line 49 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 49 "prog_io_util.m"
              {
#line 49 "prog_io_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[5], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_22_22)), ((MR_Box) (parse_tree__prog_io_util__V_5_5)));
#line 49 "prog_io_util.m"
                return;
              }
#line 49 "prog_io_util.m"
            }
#line 49 "prog_io_util.m"
          else
#line 5392 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "prog_io_util.m"
        }
#line 49 "prog_io_util.m"
      else
#line 49 "prog_io_util.m"
        {
#line 49 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_23_23 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 49 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_24_24 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 49 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5407 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "prog_io_util.m"
          else
#line 49 "prog_io_util.m"
            {
#line 49 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 49 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_15_15 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 49 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_16_16;

#line 49 "prog_io_util.m"
              {
#line 49 "prog_io_util.m"
                mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_19, &parse_tree__prog_io_util__V_16_16, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__V_14_14);
              }
#line 5425 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_16_16 == (MR_Integer) 0);
#line 49 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 49 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 49 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_16_16;
#line 49 "prog_io_util.m"
              else
#line 49 "prog_io_util.m"
                {
#line 49 "prog_io_util.m"
                  mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_20, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_15_15);
#line 49 "prog_io_util.m"
                  return;
                }
#line 49 "prog_io_util.m"
            }
#line 49 "prog_io_util.m"
        }
#line 49 "prog_io_util.m"
  }
#line 49 "prog_io_util.m"
}

#line 49 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0(
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_11,
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_12,
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 49 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 49 "prog_io_util.m"
{
#line 49 "prog_io_util.m"
  {
#line 49 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 49 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 49 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 49 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 49 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 49 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 49 "prog_io_util.m"
    else
#line 49 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 49 "prog_io_util.m"
        {
#line 49 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TypeInfo_13_13;
#line 49 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4;

#line 49 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 49 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 49 "prog_io_util.m"
            {
#line 49 "prog_io_util.m"
              parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5500 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5502 "parse_tree.prog_io_util.c"
              {
#line 5504 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_13_13, ((MR_Box) (parse_tree__prog_io_util__V_3_3)), ((MR_Box) (parse_tree__prog_io_util__V_4_4)));
              }
#line 49 "prog_io_util.m"
            }
#line 49 "prog_io_util.m"
        }
#line 49 "prog_io_util.m"
      else
#line 49 "prog_io_util.m"
        {
#line 49 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 49 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 49 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_7_7;
#line 49 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_8_8;

#line 49 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 49 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 49 "prog_io_util.m"
            {
#line 49 "prog_io_util.m"
              parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 49 "prog_io_util.m"
              parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 5534 "parse_tree.prog_io_util.c"
              {
#line 5536 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
              }
#line 49 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 5541 "parse_tree.prog_io_util.c"
                {
#line 5543 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_12, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_8_8);
                }
#line 49 "prog_io_util.m"
            }
#line 49 "prog_io_util.m"
        }
#line 49 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 49 "prog_io_util.m"
  }
#line 49 "prog_io_util.m"
}

#line 45 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0(
#line 45 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_14,
#line 45 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 45 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 45 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 45 "prog_io_util.m"
{
#line 45 "prog_io_util.m"
  {
#line 45 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 45 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 45 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 45 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 45 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5583 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "prog_io_util.m"
    else
#line 45 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 45 "prog_io_util.m"
        {
#line 45 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 45 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 45 "prog_io_util.m"
            {
#line 45 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 45 "prog_io_util.m"
              {
#line 45 "prog_io_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[5], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_16_16)), ((MR_Box) (parse_tree__prog_io_util__V_5_5)));
#line 45 "prog_io_util.m"
                return;
              }
#line 45 "prog_io_util.m"
            }
#line 45 "prog_io_util.m"
          else
#line 5612 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "prog_io_util.m"
        }
#line 45 "prog_io_util.m"
      else
#line 45 "prog_io_util.m"
        {
#line 45 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_17_17 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 45 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5625 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "prog_io_util.m"
          else
#line 45 "prog_io_util.m"
            {
#line 45 "prog_io_util.m"
              MR_Box parse_tree__prog_io_util__V_11_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));

#line 45 "prog_io_util.m"
              {
#line 45 "prog_io_util.m"
                mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_17_17, parse_tree__prog_io_util__V_11_11);
#line 45 "prog_io_util.m"
                return;
              }
#line 45 "prog_io_util.m"
            }
#line 45 "prog_io_util.m"
        }
#line 45 "prog_io_util.m"
  }
#line 45 "prog_io_util.m"
}

#line 45 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0(
#line 45 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_9,
#line 45 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 45 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 45 "prog_io_util.m"
{
#line 45 "prog_io_util.m"
  {
#line 45 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 45 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 45 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 45 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 45 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 45 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 45 "prog_io_util.m"
    else
#line 45 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 45 "prog_io_util.m"
        {
#line 45 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
#line 45 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4;

#line 45 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 45 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 45 "prog_io_util.m"
            {
#line 45 "prog_io_util.m"
              parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5697 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5699 "parse_tree.prog_io_util.c"
              {
#line 5701 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_10_10, ((MR_Box) (parse_tree__prog_io_util__V_3_3)), ((MR_Box) (parse_tree__prog_io_util__V_4_4)));
              }
#line 45 "prog_io_util.m"
            }
#line 45 "prog_io_util.m"
        }
#line 45 "prog_io_util.m"
      else
#line 45 "prog_io_util.m"
        {
#line 45 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 45 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__V_6_6;

#line 45 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 45 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 45 "prog_io_util.m"
            {
#line 45 "prog_io_util.m"
              parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 5725 "parse_tree.prog_io_util.c"
              {
#line 5727 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
              }
#line 45 "prog_io_util.m"
            }
#line 45 "prog_io_util.m"
        }
#line 45 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 45 "prog_io_util.m"
  }
#line 45 "prog_io_util.m"
}

#line 201 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0(
#line 201 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 201 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 201 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 201 "prog_io_util.m"
{
#line 201 "prog_io_util.m"
  {
#line 201 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 201 "prog_io_util.m"
    {
#line 201 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 201 "prog_io_util.m"
      return;
    }
#line 201 "prog_io_util.m"
  }
#line 201 "prog_io_util.m"
}

#line 201 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0(
#line 201 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 201 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 201 "prog_io_util.m"
{
#line 201 "prog_io_util.m"
  {
#line 201 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 201 "prog_io_util.m"
    {
#line 201 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 201 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 201 "prog_io_util.m"
  }
#line 201 "prog_io_util.m"
}

#line 186 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0(
#line 186 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 186 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 186 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 186 "prog_io_util.m"
{
#line 186 "prog_io_util.m"
  {
#line 186 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 186 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_46 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 186 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_47 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 186 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_46 == parse_tree__prog_io_util__CastY_47);
#line 186 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5827 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 186 "prog_io_util.m"
    else
#line 186 "prog_io_util.m"
      if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 186 "prog_io_util.m"
        else
#line 186 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5841 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
          else
#line 186 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5847 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
            else
#line 5851 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
      else
#line 186 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 186 "prog_io_util.m"
          {
#line 186 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "prog_io_util.m"
            if ((parse_tree__prog_io_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5866 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
            else
#line 186 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 186 "prog_io_util.m"
                {
#line 186 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 186 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_38_38;
#line 186 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_58_58 = (MR_Integer) parse_tree__prog_io_util__V_54_54;
#line 186 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_59_59 = (MR_Integer) parse_tree__prog_io_util__V_36_36;

#line 186 "prog_io_util.m"
                  {
#line 186 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_38_38, parse_tree__prog_io_util__V_58_58, parse_tree__prog_io_util__V_59_59);
                  }
#line 5890 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == (MR_Integer) 0);
#line 186 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 186 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_38_38;
#line 186 "prog_io_util.m"
                  else
#line 186 "prog_io_util.m"
                    {
#line 186 "prog_io_util.m"
                      {
#line 186 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_53_53)), ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
#line 186 "prog_io_util.m"
                        return;
                      }
#line 186 "prog_io_util.m"
                    }
#line 186 "prog_io_util.m"
                }
#line 186 "prog_io_util.m"
              else
#line 186 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5917 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
                else
#line 5921 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
          }
#line 186 "prog_io_util.m"
        else
#line 186 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 186 "prog_io_util.m"
            {
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "prog_io_util.m"
              if ((parse_tree__prog_io_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5936 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
              else
#line 186 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5942 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
                else
#line 186 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 186 "prog_io_util.m"
                    {
#line 186 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
                      MR_Integer parse_tree__prog_io_util__V_60_60 = (MR_Integer) parse_tree__prog_io_util__V_55_55;
#line 186 "prog_io_util.m"
                      MR_Integer parse_tree__prog_io_util__V_61_61 = (MR_Integer) parse_tree__prog_io_util__V_5_5;

#line 186 "prog_io_util.m"
                      {
#line 186 "prog_io_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_61_61);
#line 186 "prog_io_util.m"
                        return;
                      }
#line 186 "prog_io_util.m"
                    }
#line 186 "prog_io_util.m"
                  else
#line 5968 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
            }
#line 186 "prog_io_util.m"
          else
#line 186 "prog_io_util.m"
            {
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "prog_io_util.m"
              if ((parse_tree__prog_io_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5983 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
              else
#line 186 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5989 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
                else
#line 186 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5995 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
                  else
#line 186 "prog_io_util.m"
                    {
#line 186 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 186 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_20_20;
#line 186 "prog_io_util.m"
                      MR_Integer parse_tree__prog_io_util__V_62_62 = (MR_Integer) parse_tree__prog_io_util__V_57_57;
#line 186 "prog_io_util.m"
                      MR_Integer parse_tree__prog_io_util__V_63_63 = (MR_Integer) parse_tree__prog_io_util__V_18_18;

#line 186 "prog_io_util.m"
                      {
#line 186 "prog_io_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_62_62, parse_tree__prog_io_util__V_63_63);
                      }
#line 6017 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == (MR_Integer) 0);
#line 186 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 186 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                        *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_20_20;
#line 186 "prog_io_util.m"
                      else
#line 186 "prog_io_util.m"
                        {
#line 186 "prog_io_util.m"
                          {
#line 186 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[3], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_56_56)), ((MR_Box) (parse_tree__prog_io_util__V_19_19)));
#line 186 "prog_io_util.m"
                            return;
                          }
#line 186 "prog_io_util.m"
                        }
#line 186 "prog_io_util.m"
                    }
#line 186 "prog_io_util.m"
            }
#line 186 "prog_io_util.m"
  }
#line 186 "prog_io_util.m"
}

#line 186 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0(
#line 186 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 186 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 186 "prog_io_util.m"
{
#line 186 "prog_io_util.m"
  {
#line 186 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 186 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_15 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 186 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 186 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_15 == parse_tree__prog_io_util__CastY_16);
#line 186 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 186 "prog_io_util.m"
    else
#line 186 "prog_io_util.m"
      if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "prog_io_util.m"
        {
#line 186 "prog_io_util.m"
          MR_Integer parse_tree__prog_io_util__CastX_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 186 "prog_io_util.m"
          MR_Integer parse_tree__prog_io_util__CastY_14 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 186 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_14 == parse_tree__prog_io_util__CastX_13);
#line 186 "prog_io_util.m"
        }
#line 186 "prog_io_util.m"
      else
#line 186 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 186 "prog_io_util.m"
          {
#line 186 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_17_17;
#line 186 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11;
#line 186 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_12_12;

#line 186 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 186 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
              {
#line 186 "prog_io_util.m"
                parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6113 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_9_9 == parse_tree__prog_io_util__V_11_11);
#line 186 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                  {
#line 6119 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_17_17 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 6121 "parse_tree.prog_io_util.c"
                    {
#line 6123 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_17_17, ((MR_Box) (parse_tree__prog_io_util__V_10_10)), ((MR_Box) (parse_tree__prog_io_util__V_12_12)));
                    }
#line 186 "prog_io_util.m"
                  }
#line 186 "prog_io_util.m"
              }
#line 186 "prog_io_util.m"
          }
#line 186 "prog_io_util.m"
        else
#line 186 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 186 "prog_io_util.m"
            {
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_4_4;

#line 186 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 186 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                {
#line 186 "prog_io_util.m"
                  parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6151 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_3_3 == parse_tree__prog_io_util__V_4_4);
#line 186 "prog_io_util.m"
                }
#line 186 "prog_io_util.m"
            }
#line 186 "prog_io_util.m"
          else
#line 186 "prog_io_util.m"
            {
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeInfo_18_18;
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_7_7;
#line 186 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_8_8;

#line 186 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 186 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                {
#line 186 "prog_io_util.m"
                  parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "prog_io_util.m"
                  parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6182 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_5_5 == parse_tree__prog_io_util__V_7_7);
#line 186 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                    {
#line 6188 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[3];
#line 6190 "parse_tree.prog_io_util.c"
                      {
#line 6192 "parse_tree.prog_io_util.c"
                        return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_io_util__V_6_6)), ((MR_Box) (parse_tree__prog_io_util__V_8_8)));
                      }
#line 186 "prog_io_util.m"
                    }
#line 186 "prog_io_util.m"
                }
#line 186 "prog_io_util.m"
            }
#line 186 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 186 "prog_io_util.m"
  }
#line 186 "prog_io_util.m"
}

#line 138 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(
#line 138 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 138 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 138 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 138 "prog_io_util.m"
{
#line 138 "prog_io_util.m"
  {
#line 138 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 138 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 138 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 138 "prog_io_util.m"
    {
#line 138 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 138 "prog_io_util.m"
      return;
    }
#line 138 "prog_io_util.m"
  }
#line 138 "prog_io_util.m"
}

#line 138 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(
#line 138 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 138 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 138 "prog_io_util.m"
{
#line 6249 "parse_tree.prog_io_util.c"
  {
#line 6251 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 6254 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 6256 "parse_tree.prog_io_util.c"
  }
#line 138 "prog_io_util.m"
}

#line 1152 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1152 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1152 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1152 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10)
#line 1152 "prog_io_util.m"
{
#line 1156 "prog_io_util.m"
  {
#line 1156 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1156 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_11;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_12;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_37_37;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_39_39;
#line 1156 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;

#line 1157 "prog_io_util.m"
    {
#line 1157 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
#line 1159 "prog_io_util.m"
    {
#line 1159 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
#line 1159 "prog_io_util.m"
    }
#line 1160 "prog_io_util.m"
    {
#line 1160 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
#line 1160 "prog_io_util.m"
    }
#line 1160 "prog_io_util.m"
    {
#line 1160 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1160 "prog_io_util.m"
    }
#line 1159 "prog_io_util.m"
    {
#line 1159 "prog_io_util.m"
      parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[26])));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1159 "prog_io_util.m"
    }
#line 1159 "prog_io_util.m"
    {
#line 1159 "prog_io_util.m"
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[25])));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1159 "prog_io_util.m"
    }
#line 1159 "prog_io_util.m"
    {
#line 1159 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1159 "prog_io_util.m"
    }
#line 1158 "prog_io_util.m"
    {
#line 1158 "prog_io_util.m"
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[24])));
#line 1158 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1158 "prog_io_util.m"
    }
#line 1158 "prog_io_util.m"
    {
#line 1158 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1158 "prog_io_util.m"
    }
#line 1158 "prog_io_util.m"
    {
#line 1158 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__V_13_13);
    }
#line 1162 "prog_io_util.m"
    {
#line 1162 "prog_io_util.m"
      parse_tree__prog_io_util__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__Term_9);
    }
#line 1162 "prog_io_util.m"
    {
#line 1162 "prog_io_util.m"
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
#line 1162 "prog_io_util.m"
    }
#line 1162 "prog_io_util.m"
    {
#line 1162 "prog_io_util.m"
      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1162 "prog_io_util.m"
    }
#line 1162 "prog_io_util.m"
    {
#line 1162 "prog_io_util.m"
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1162 "prog_io_util.m"
    }
#line 1161 "prog_io_util.m"
    {
#line 1161 "prog_io_util.m"
      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "prog_io_util.m"
    }
#line 1161 "prog_io_util.m"
    {
#line 1161 "prog_io_util.m"
      MR_Word base;
#line 1161 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1161 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_10 = base;
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1161 "prog_io_util.m"
    }
#line 1156 "prog_io_util.m"
  }
#line 1152 "prog_io_util.m"
}

#line 1132 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1132 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1132 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1132 "prog_io_util.m"
{
#line 1135 "prog_io_util.m"
  {
#line 1135 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1135 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1135 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1136 "prog_io_util.m"
    {
#line 1136 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1138 "prog_io_util.m"
    {
#line 1138 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1138 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1138 "prog_io_util.m"
    }
#line 1138 "prog_io_util.m"
    {
#line 1138 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1138 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1138 "prog_io_util.m"
    }
#line 1137 "prog_io_util.m"
    {
#line 1137 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[23])));
#line 1137 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1137 "prog_io_util.m"
    }
#line 1137 "prog_io_util.m"
    {
#line 1137 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1137 "prog_io_util.m"
    }
#line 1137 "prog_io_util.m"
    {
#line 1137 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1140 "prog_io_util.m"
    {
#line 1140 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1140 "prog_io_util.m"
    {
#line 1140 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1140 "prog_io_util.m"
    }
#line 1140 "prog_io_util.m"
    {
#line 1140 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "prog_io_util.m"
    }
#line 1140 "prog_io_util.m"
    {
#line 1140 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1140 "prog_io_util.m"
    }
#line 1139 "prog_io_util.m"
    {
#line 1139 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "prog_io_util.m"
    }
#line 1139 "prog_io_util.m"
    {
#line 1139 "prog_io_util.m"
      MR_Word base;
#line 1139 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1139 "prog_io_util.m"
    }
#line 1135 "prog_io_util.m"
  }
#line 1132 "prog_io_util.m"
}

#line 847 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 847 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 847 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 847 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
#line 847 "prog_io_util.m"
{
#line 850 "prog_io_util.m"
  {
#line 850 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 850 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Functor_7;
#line 850 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args0_8;
#line 850 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args1_12;
#line 850 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ConsId_14;
#line 850 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_19;
#line 851 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 851 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 851 "prog_io_util.m"
      {
#line 851 "prog_io_util.m"
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
#line 851 "prog_io_util.m"
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
#line 851 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
#line 858 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 0))))
#line 853 "prog_io_util.m"
          {
#line 853 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_23_23;
#line 853 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__SymName_11;
#line 853 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__Arity_13;
#line 853 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_20_20;

#line 854 "prog_io_util.m"
            {
#line 854 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
            }
#line 853 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 853 "prog_io_util.m"
              {
#line 6683 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 856 "prog_io_util.m"
                {
#line 856 "prog_io_util.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_23_23, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                }
#line 857 "prog_io_util.m"
                {
#line 857 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 857 "prog_io_util.m"
                {
#line 857 "prog_io_util.m"
                  parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
#line 857 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
#line 857 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 857 "prog_io_util.m"
                }
#line 857 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 853 "prog_io_util.m"
              }
#line 853 "prog_io_util.m"
          }
#line 858 "prog_io_util.m"
        else
#line 858 "prog_io_util.m"
          if (((((((((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) == (MR_Integer) 0)))) || (((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 2))))))
#line 867 "prog_io_util.m"
            {
#line 867 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_21;

#line 868 "prog_io_util.m"
              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 869 "prog_io_util.m"
              {
#line 869 "prog_io_util.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_21);
              }
#line 870 "prog_io_util.m"
              {
#line 870 "prog_io_util.m"
                parse_tree__prog_io_util__ConsId_14 = parse_tree__prog_util__make_functor_cons_id_2_f_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_21);
              }
#line 867 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 867 "prog_io_util.m"
            }
#line 858 "prog_io_util.m"
          else
#line 858 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 850 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 850 "prog_io_util.m"
          {
#line 872 "prog_io_util.m"
            {
#line 872 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_19);
            }
#line 850 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 850 "prog_io_util.m"
              {
#line 873 "prog_io_util.m"
                {
#line 873 "prog_io_util.m"
                  MR_Word base;
#line 873 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 873 "prog_io_util.m"
                  *parse_tree__prog_io_util__BoundInst_6 = base;
#line 873 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
#line 873 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_19));
#line 873 "prog_io_util.m"
                }
#line 873 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 850 "prog_io_util.m"
              }
#line 850 "prog_io_util.m"
          }
#line 851 "prog_io_util.m"
      }
#line 850 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 850 "prog_io_util.m"
  }
#line 847 "prog_io_util.m"
}

#line 839 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 839 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 839 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 839 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 839 "prog_io_util.m"
{
#line 842 "prog_io_util.m"
  {
#line 842 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 842 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 842 "prog_io_util.m"
      {
#line 842 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 842 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 842 "prog_io_util.m"
      }
#line 842 "prog_io_util.m"
    else
#line 843 "prog_io_util.m"
      {
#line 843 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 843 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 843 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 843 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 844 "prog_io_util.m"
        {
#line 844 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 843 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 843 "prog_io_util.m"
          {
#line 845 "prog_io_util.m"
            {
#line 845 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 843 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 843 "prog_io_util.m"
              {
#line 843 "prog_io_util.m"
                {
#line 843 "prog_io_util.m"
                  MR_Word base;
#line 843 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 843 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 843 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 843 "prog_io_util.m"
                }
#line 843 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 843 "prog_io_util.m"
              }
#line 843 "prog_io_util.m"
          }
#line 843 "prog_io_util.m"
      }
#line 842 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 842 "prog_io_util.m"
  }
#line 839 "prog_io_util.m"
}

#line 832 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 832 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 832 "prog_io_util.m"
{
#line 832 "prog_io_util.m"
  {
#line 832 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 832 "prog_io_util.m"
    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
#line 832 "prog_io_util.m"
  }
#line 832 "prog_io_util.m"
}

#line 832 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 832 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 832 "prog_io_util.m"
{
#line 832 "prog_io_util.m"
  {
#line 832 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 832 "prog_io_util.m"
    {
#line 833 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_16_16;
#line 834 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_18_18;
#line 835 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_19_19;

#line 833 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
#line 833 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 833 "prog_io_util.m"
        {
#line 833 "prog_io_util.m"
          {
#line 833 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
#line 833 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
#line 833 "prog_io_util.m"
          }
#line 832 "prog_io_util.m"
          {
#line 833 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 833 "prog_io_util.m"
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 833 "prog_io_util.m"
              {
#line 833 "prog_io_util.m"
                {
#line 833 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 833 "prog_io_util.m"
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 833 "prog_io_util.m"
                }
#line 832 "prog_io_util.m"
                {
#line 834 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
#line 834 "prog_io_util.m"
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
#line 835 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
#line 835 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
#line 835 "prog_io_util.m"
                  {
#line 835 "prog_io_util.m"
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
#line 835 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 835 "prog_io_util.m"
                    {
#line 835 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
#line 835 "prog_io_util.m"
                      return;
                    }
#line 832 "prog_io_util.m"
                }
#line 833 "prog_io_util.m"
              }
#line 832 "prog_io_util.m"
          }
#line 833 "prog_io_util.m"
        }
#line 832 "prog_io_util.m"
    }
#line 832 "prog_io_util.m"
  }
#line 832 "prog_io_util.m"
}

#line 832 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 832 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 832 "prog_io_util.m"
{
#line 832 "prog_io_util.m"
  {
#line 832 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 832 "prog_io_util.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
#line 832 "prog_io_util.m"
      {
#line 832 "prog_io_util.m"
        {
#line 832 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12;

#line 832 "prog_io_util.m"
          {
#line 832 "prog_io_util.m"
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
#line 832 "prog_io_util.m"
        }
#line 832 "prog_io_util.m"
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 832 "prog_io_util.m"
      }
#line 832 "prog_io_util.m"
    else
#line 832 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 832 "prog_io_util.m"
  }
#line 832 "prog_io_util.m"
}

#line 823 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 823 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 823 "prog_io_util.m"
{
#line 823 "prog_io_util.m"
  {
#line 823 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

#line 826 "prog_io_util.m"
    {
#line 826 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__List_9;
#line 826 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__Functors0_10;
#line 826 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_21_21;

#line 895 "prog_io_util.m"
      {
#line 895 "prog_io_util.m"
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__List_9);
      }
#line 828 "prog_io_util.m"
      {
#line 828 "prog_io_util.m"
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__List_9, &parse_tree__prog_io_util__Functors0_10);
      }
#line 826 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 826 "prog_io_util.m"
        {
#line 7063 "parse_tree.prog_io_util.c"
          (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 829 "prog_io_util.m"
          {
#line 829 "prog_io_util.m"
            mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
          }
#line 832 "prog_io_util.m"
          {
#line 832 "prog_io_util.m"
            parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
          }
#line 831 "prog_io_util.m"
          (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
#line 826 "prog_io_util.m"
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 826 "prog_io_util.m"
            {
#line 837 "prog_io_util.m"
              parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "prog_io_util.m"
              {
#line 837 "prog_io_util.m"
                MR_Word base;
#line 837 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 837 "prog_io_util.m"
                *parse_tree__prog_io_util__Inst_8 = base;
#line 837 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 837 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
#line 837 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 837 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
#line 837 "prog_io_util.m"
              }
#line 837 "prog_io_util.m"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 826 "prog_io_util.m"
            }
#line 826 "prog_io_util.m"
        }
#line 826 "prog_io_util.m"
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 826 "prog_io_util.m"
    }
#line 823 "prog_io_util.m"
  }
#line 823 "prog_io_util.m"
}

#line 783 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(
#line 783 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 783 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 783 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_5)
#line 783 "prog_io_util.m"
{
#line 786 "prog_io_util.m"
  {
#line 786 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 786 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 792 "prog_io_util.m"
      {
#line 792 "prog_io_util.m"
        if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "any") == 0))
#line 795 "prog_io_util.m"
          {
#line 795 "prog_io_util.m"
            *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[18]);
#line 795 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 795 "prog_io_util.m"
          }
#line 792 "prog_io_util.m"
        else
#line 792 "prog_io_util.m"
          if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "free") == 0))
#line 792 "prog_io_util.m"
            {
#line 792 "prog_io_util.m"
              *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 792 "prog_io_util.m"
            }
#line 792 "prog_io_util.m"
          else
#line 792 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "ground") == 0))
#line 803 "prog_io_util.m"
              {
#line 803 "prog_io_util.m"
                *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5]);
#line 803 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 803 "prog_io_util.m"
              }
#line 792 "prog_io_util.m"
            else
#line 792 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "unique") == 0))
#line 804 "prog_io_util.m"
                {
#line 804 "prog_io_util.m"
                  *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[6]);
#line 804 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 804 "prog_io_util.m"
                }
#line 792 "prog_io_util.m"
              else
#line 792 "prog_io_util.m"
                if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "clobbered") == 0))
#line 806 "prog_io_util.m"
                  {
#line 806 "prog_io_util.m"
                    *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[7]);
#line 806 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 806 "prog_io_util.m"
                  }
#line 792 "prog_io_util.m"
                else
#line 792 "prog_io_util.m"
                  if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "unique_any") == 0))
#line 796 "prog_io_util.m"
                    {
#line 796 "prog_io_util.m"
                      *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[19]);
#line 796 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 796 "prog_io_util.m"
                    }
#line 792 "prog_io_util.m"
                  else
#line 792 "prog_io_util.m"
                    if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "not_reached") == 0))
#line 811 "prog_io_util.m"
                      {
#line 811 "prog_io_util.m"
                        *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 811 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 811 "prog_io_util.m"
                      }
#line 792 "prog_io_util.m"
                    else
#line 792 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "clobbered_any") == 0))
#line 798 "prog_io_util.m"
                        {
#line 798 "prog_io_util.m"
                          *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[20]);
#line 798 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 798 "prog_io_util.m"
                        }
#line 792 "prog_io_util.m"
                      else
#line 792 "prog_io_util.m"
                        if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique") == 0))
#line 805 "prog_io_util.m"
                          {
#line 805 "prog_io_util.m"
                            *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8]);
#line 805 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 805 "prog_io_util.m"
                          }
#line 792 "prog_io_util.m"
                        else
#line 792 "prog_io_util.m"
                          if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered") == 0))
#line 807 "prog_io_util.m"
                            {
#line 807 "prog_io_util.m"
                              *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[9]);
#line 807 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 807 "prog_io_util.m"
                            }
#line 792 "prog_io_util.m"
                          else
#line 792 "prog_io_util.m"
                            if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique_any") == 0))
#line 797 "prog_io_util.m"
                              {
#line 797 "prog_io_util.m"
                                *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[21]);
#line 797 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 797 "prog_io_util.m"
                              }
#line 792 "prog_io_util.m"
                            else
#line 792 "prog_io_util.m"
                              if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered_any") == 0))
#line 799 "prog_io_util.m"
                                {
#line 799 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[22]);
#line 799 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 799 "prog_io_util.m"
                                }
#line 792 "prog_io_util.m"
                              else
#line 792 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 792 "prog_io_util.m"
      }
#line 786 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 786 "prog_io_util.m"
  }
#line 783 "prog_io_util.m"
}

#line 493 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 493 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 493 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 493 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 493 "prog_io_util.m"
{
#line 495 "prog_io_util.m"
  {
#line 495 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 495 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 498 "prog_io_util.m"
      {
#line 498 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 498 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 498 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_13;
#line 498 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__QualTerm_14;
#line 498 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term0_15;
#line 498 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 498 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20;
#line 498 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_21_21;

#line 499 "prog_io_util.m"
        {
#line 499 "prog_io_util.m"
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
#line 500 "prog_io_util.m"
        {
#line 500 "prog_io_util.m"
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
#line 501 "prog_io_util.m"
        {
#line 501 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
#line 501 "prog_io_util.m"
        }
#line 501 "prog_io_util.m"
        {
#line 501 "prog_io_util.m"
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 501 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 501 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 501 "prog_io_util.m"
        }
#line 502 "prog_io_util.m"
        {
#line 502 "prog_io_util.m"
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "prog_io_util.m"
        }
#line 502 "prog_io_util.m"
        {
#line 502 "prog_io_util.m"
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 502 "prog_io_util.m"
        }
#line 502 "prog_io_util.m"
        {
#line 502 "prog_io_util.m"
          MR_Word base;
#line 502 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[12]));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 502 "prog_io_util.m"
        }
#line 498 "prog_io_util.m"
      }
#line 495 "prog_io_util.m"
    else
#line 495 "prog_io_util.m"
      {
#line 495 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 495 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_7;
#line 495 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8;

#line 496 "prog_io_util.m"
        {
#line 496 "prog_io_util.m"
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
#line 497 "prog_io_util.m"
        {
#line 497 "prog_io_util.m"
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 497 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
#line 497 "prog_io_util.m"
        }
#line 497 "prog_io_util.m"
        {
#line 497 "prog_io_util.m"
          MR_Word base;
#line 497 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 497 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 497 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
#line 497 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 497 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
#line 497 "prog_io_util.m"
        }
#line 495 "prog_io_util.m"
      }
#line 495 "prog_io_util.m"
  }
#line 493 "prog_io_util.m"
}

#line 491 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 491 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 491 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 491 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
#line 491 "prog_io_util.m"
{
#line 491 "prog_io_util.m"
  {
#line 491 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
#line 491 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__2_2;

#line 491 "prog_io_util.m"
    {
#line 491 "prog_io_util.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__2_2);
    }
#line 491 "prog_io_util.m"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__2_2));
#line 491 "prog_io_util.m"
  }
#line 491 "prog_io_util.m"
}

#line 488 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 488 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 488 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 488 "prog_io_util.m"
{
#line 490 "prog_io_util.m"
  {
#line 490 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 491 "prog_io_util.m"
    {
#line 491 "prog_io_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[4], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
#line 491 "prog_io_util.m"
      return;
    }
#line 490 "prog_io_util.m"
  }
#line 488 "prog_io_util.m"
}

#line 424 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 424 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 424 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 424 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 424 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9)
#line 424 "prog_io_util.m"
{
#line 427 "prog_io_util.m"
  {
#line 427 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_39;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_10;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_14;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_36;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ContextPieces_37;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 433 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgs_11;
#line 433 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Ret_12;
#line 429 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 429 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;
#line 429 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 429 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 429 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 429 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 427 "prog_io_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 428 "prog_io_util.m"
    {
#line 428 "prog_io_util.m"
      parse_tree__prog_io_util__parse_purity_annotation_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term0_6, parse_tree__prog_io_util__Purity_9, &parse_tree__prog_io_util__Term1_10);
    }
#line 429 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 429 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 429 "prog_io_util.m"
      {
#line 429 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 429 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 429 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 429 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 429 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 429 "prog_io_util.m"
          {
#line 429 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 429 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) "=") == 0);
#line 429 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 429 "prog_io_util.m"
              {
#line 429 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 429 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 429 "prog_io_util.m"
                  {
#line 429 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 429 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 429 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 429 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 429 "prog_io_util.m"
                      {
#line 429 "prog_io_util.m"
                        parse_tree__prog_io_util__Ret_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 429 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 429 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "prog_io_util.m"
                      }
#line 429 "prog_io_util.m"
                  }
#line 429 "prog_io_util.m"
              }
#line 429 "prog_io_util.m"
          }
#line 429 "prog_io_util.m"
      }
#line 433 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
      {
#line 430 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_33;
#line 430 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__RetType_16;
#line 430 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_23_23;
#line 430 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_24_24;
#line 430 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__VarSet_30;
#line 430 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ContextPieces_31;
#line 430 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_32_32;
#line 430 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;

#line 430 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncAndArgs_11)) == (MR_mktag((MR_Integer) 0)));
#line 430 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
          {
#line 430 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 0)));
#line 430 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 1)));
#line 430 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 2)));
#line 430 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 430 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
              {
#line 430 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 430 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "func") == 0);
#line 430 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
                  {
#line 7657 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeCtorInfo_8_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 326 "prog_io_util.m"
                    {
#line 326 "prog_io_util.m"
                      parse_tree__prog_io_util__VarSet_30 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_33);
                    }
#line 327 "prog_io_util.m"
                    parse_tree__prog_io_util__ContextPieces_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 328 "prog_io_util.m"
                    {
#line 328 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Ret_12, parse_tree__prog_io_util__VarSet_30, parse_tree__prog_io_util__ContextPieces_31, &parse_tree__prog_io_util__V_32_32);
                    }
#line 328 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 328 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 328 "prog_io_util.m"
                      {
#line 328 "prog_io_util.m"
                        parse_tree__prog_io_util__RetType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 432 "prog_io_util.m"
                        {
#line 432 "prog_io_util.m"
                          MR_Word base;
#line 432 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeRet_8 = base;
#line 432 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_16));
#line 432 "prog_io_util.m"
                        }
#line 432 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 328 "prog_io_util.m"
                      }
#line 430 "prog_io_util.m"
                  }
#line 430 "prog_io_util.m"
              }
#line 430 "prog_io_util.m"
          }
#line 430 "prog_io_util.m"
      }
#line 433 "prog_io_util.m"
    else
#line 434 "prog_io_util.m"
      {
#line 434 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_25_25;
#line 434 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_26_26;
#line 434 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;

#line 434 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 434 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 434 "prog_io_util.m"
          {
#line 434 "prog_io_util.m"
            parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 434 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 434 "prog_io_util.m"
            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 434 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 434 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 434 "prog_io_util.m"
              {
#line 434 "prog_io_util.m"
                parse_tree__prog_io_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 434 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_26_26, (MR_String) "pred") == 0);
#line 434 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 434 "prog_io_util.m"
                  {
#line 435 "prog_io_util.m"
                    *parse_tree__prog_io_util__MaybeRet_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 434 "prog_io_util.m"
                  }
#line 434 "prog_io_util.m"
              }
#line 434 "prog_io_util.m"
          }
#line 434 "prog_io_util.m"
      }
#line 427 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 427 "prog_io_util.m"
      {
#line 7756 "parse_tree.prog_io_util.c"
        parse_tree__prog_io_util__TypeCtorInfo_8_39 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 392 "prog_io_util.m"
        {
#line 392 "prog_io_util.m"
          parse_tree__prog_io_util__VarSet_36 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_39);
        }
#line 393 "prog_io_util.m"
        parse_tree__prog_io_util__ContextPieces_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "prog_io_util.m"
        {
#line 394 "prog_io_util.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_14, parse_tree__prog_io_util__VarSet_36, parse_tree__prog_io_util__ContextPieces_37, &parse_tree__prog_io_util__V_38_38);
        }
#line 394 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 394 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 394 "prog_io_util.m"
          *parse_tree__prog_io_util__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 427 "prog_io_util.m"
      }
#line 427 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 427 "prog_io_util.m"
  }
#line 424 "prog_io_util.m"
}

#line 399 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 399 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 399 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__5_5)
#line 399 "prog_io_util.m"
{
#line 402 "prog_io_util.m"
  while (MR_TRUE)
#line 402 "prog_io_util.m"
    {
#line 402 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 402 "prog_io_util.m"
      {
#line 402 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded;

#line 402 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "prog_io_util.m"
          {
#line 402 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Types_9;

#line 403 "prog_io_util.m"
            {
#line 403 "prog_io_util.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_4, &parse_tree__prog_io_util__Types_9);
            }
#line 402 "prog_io_util.m"
            {
#line 402 "prog_io_util.m"
              MR_Word base;
#line 402 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = base;
#line 402 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Types_9));
#line 402 "prog_io_util.m"
            }
#line 402 "prog_io_util.m"
          }
#line 402 "prog_io_util.m"
        else
#line 404 "prog_io_util.m"
          {
#line 404 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Result0_16;

#line 405 "prog_io_util.m"
            {
#line 405 "prog_io_util.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_10, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__Result0_16);
            }
#line 409 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_16)) == (MR_mktag((MR_Integer) 0))))
#line 411 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = (MR_Word) parse_tree__prog_io_util__Result0_16;
#line 409 "prog_io_util.m"
            else
#line 407 "prog_io_util.m"
              {
#line 407 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_16, (MR_Integer) 0)));
#line 407 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 408 "prog_io_util.m"
                {
#line 408 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_17));
#line 408 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RevTypes_4));
#line 408 "prog_io_util.m"
                }
#line 408 "prog_io_util.m"
                /* direct tailcall eliminated */
#line 408 "prog_io_util.m"
                {
#line 408 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_11;
#line 408 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RevTypes__tmp_copy_4 = parse_tree__prog_io_util__V_19_19;

#line 408 "prog_io_util.m"
                  parse_tree__prog_io_util__RevTypes_4 = parse_tree__prog_io_util__RevTypes__tmp_copy_4;
#line 408 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
#line 408 "prog_io_util.m"
                }
#line 408 "prog_io_util.m"
                continue;
#line 407 "prog_io_util.m"
              }
#line 404 "prog_io_util.m"
          }
#line 402 "prog_io_util.m"
      }
#line 402 "prog_io_util.m"
      break;
#line 402 "prog_io_util.m"
    }
#line 399 "prog_io_util.m"
}

#line 229 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_condition_suffix_3_p_0(
#line 229 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_4,
#line 229 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_2,
#line 229 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 229 "prog_io_util.m"
{
#line 1239 "prog_io_util.m"
  {
#line 1239 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1239 "prog_io_util.m"
    *parse_tree__prog_io_util__Term_2 = parse_tree__prog_io_util__Term_4;
#line 1239 "prog_io_util.m"
    *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1239 "prog_io_util.m"
  }
#line 229 "prog_io_util.m"
}

#line 209 "prog_io_util.m"
MR_String MR_CALL 
parse_tree__prog_io_util__attribute_description_1_f_0(
#line 209 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 209 "prog_io_util.m"
{
#line 1226 "prog_io_util.m"
  {
#line 1226 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1226 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__HeadVar__2_2;

#line 1226 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1235 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "solver type specifier";
#line 1226 "prog_io_util.m"
    else
#line 1226 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1226 "prog_io_util.m"
        {
#line 1226 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1231 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1226 "prog_io_util.m"
          if ((parse_tree__prog_io_util__V_13_13 == (MR_Integer) 0))
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existentially quantified type class constraint (\140=>\')";
#line 1226 "prog_io_util.m"
          else
#line 1231 "prog_io_util.m"
            parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "type class constraint (\140<=\')";
#line 1226 "prog_io_util.m"
        }
#line 1226 "prog_io_util.m"
      else
#line 1226 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1226 "prog_io_util.m"
          parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "purity specifier";
#line 1226 "prog_io_util.m"
        else
#line 1226 "prog_io_util.m"
          {
#line 1226 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1227 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1226 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_15_15 == (MR_Integer) 0))
#line 1229 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existential quantifier (\140some\')";
#line 1226 "prog_io_util.m"
            else
#line 1227 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "universal quantifier (\140all\')";
#line 1226 "prog_io_util.m"
          }
#line 1226 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 1226 "prog_io_util.m"
  }
#line 209 "prog_io_util.m"
}

#line 206 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__check_no_attributes_3_p_0(
#line 206 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_35,
#line 206 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Result0_4,
#line 206 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Attributes_5,
#line 206 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 206 "prog_io_util.m"
{
#line 1222 "prog_io_util.m"
  {
#line 1222 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_4)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Attr_8;
#line 1222 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_9;
#line 1213 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1213 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__V_7_7;
#line 1214 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 1213 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1213 "prog_io_util.m"
      {
#line 1213 "prog_io_util.m"
        parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_4, (MR_Integer) 0));
#line 1214 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Attributes_5)) == (MR_mktag((MR_Integer) 1)));
#line 1214 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1214 "prog_io_util.m"
          {
#line 1214 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 0)));
#line 1214 "prog_io_util.m"
            parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 1)));
#line 1214 "prog_io_util.m"
            parse_tree__prog_io_util__Attr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 1214 "prog_io_util.m"
            parse_tree__prog_io_util__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 1)));
#line 1214 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1214 "prog_io_util.m"
          }
#line 1213 "prog_io_util.m"
      }
#line 1222 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1218 "prog_io_util.m"
      {
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Pieces_11;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Spec_12;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1218 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_18_18;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_28_28;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1218 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;

#line 1217 "prog_io_util.m"
        {
#line 1217 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = parse_tree__prog_io_util__attribute_description_1_f_0(parse_tree__prog_io_util__Attr_8);
        }
#line 1217 "prog_io_util.m"
        {
#line 1217 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1217 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1217 "prog_io_util.m"
        }
#line 1217 "prog_io_util.m"
        {
#line 1217 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1217 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1217 "prog_io_util.m"
        }
#line 1217 "prog_io_util.m"
        {
#line 1217 "prog_io_util.m"
          parse_tree__prog_io_util__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[17])));
#line 1217 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1217 "prog_io_util.m"
        }
#line 1220 "prog_io_util.m"
        {
#line 1220 "prog_io_util.m"
          parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_11));
#line 1220 "prog_io_util.m"
        }
#line 1220 "prog_io_util.m"
        {
#line 1220 "prog_io_util.m"
          parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1220 "prog_io_util.m"
        }
#line 1220 "prog_io_util.m"
        {
#line 1220 "prog_io_util.m"
          parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_9));
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1220 "prog_io_util.m"
        }
#line 1219 "prog_io_util.m"
        {
#line 1219 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1219 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1219 "prog_io_util.m"
        }
#line 1219 "prog_io_util.m"
        {
#line 1219 "prog_io_util.m"
          parse_tree__prog_io_util__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1219 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1219 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1219 "prog_io_util.m"
        }
#line 1221 "prog_io_util.m"
        {
#line 1221 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_12));
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "prog_io_util.m"
        }
#line 1221 "prog_io_util.m"
        {
#line 1221 "prog_io_util.m"
          MR_Word base;
#line 1221 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_6 = base;
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1221 "prog_io_util.m"
        }
#line 1218 "prog_io_util.m"
      }
#line 1222 "prog_io_util.m"
    else
#line 1223 "prog_io_util.m"
      *parse_tree__prog_io_util__Result_6 = parse_tree__prog_io_util__Result0_4;
#line 1222 "prog_io_util.m"
  }
#line 206 "prog_io_util.m"
}

#line 203 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_decl_attribute_4_p_0(
#line 203 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Functor_5,
#line 203 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ArgTerms_6,
#line 203 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Attribute_7,
#line 203 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SubTerm_8)
#line 203 "prog_io_util.m"
{
#line 1180 "prog_io_util.m"
  {
#line 1180 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArgTerms_6)) == (MR_mktag((MR_Integer) 1)));
#line 1180 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1180 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_35_35;

#line 1189 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1189 "prog_io_util.m"
      {
#line 1189 "prog_io_util.m"
        parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 0)));
#line 1189 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 1)));
#line 1180 "prog_io_util.m"
        if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "<=") == 0))
#line 1188 "prog_io_util.m"
          {
#line 1188 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__ConstraintsTerm_9;
#line 1188 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23;
#line 1188 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24;

#line 1189 "prog_io_util.m"
            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1189 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1189 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1189 "prog_io_util.m"
              {
#line 1189 "prog_io_util.m"
                parse_tree__prog_io_util__ConstraintsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1189 "prog_io_util.m"
                parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1189 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1188 "prog_io_util.m"
                  {
#line 1190 "prog_io_util.m"
                    parse_tree__prog_io_util__V_24_24 = (MR_Integer) 1;
#line 1190 "prog_io_util.m"
                    {
#line 1190 "prog_io_util.m"
                      MR_Word base;
#line 1190 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "prog_io_util.m"
                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1190 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
#line 1190 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_9));
#line 1190 "prog_io_util.m"
                    }
#line 1190 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1188 "prog_io_util.m"
                  }
#line 1189 "prog_io_util.m"
              }
#line 1188 "prog_io_util.m"
          }
#line 1180 "prog_io_util.m"
        else
#line 1180 "prog_io_util.m"
          if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "=>") == 0))
#line 1192 "prog_io_util.m"
            {
#line 1192 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_20_20;
#line 1192 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_21_21;
#line 1192 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ConstraintsTerm_29;

#line 1193 "prog_io_util.m"
              *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1193 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1193 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1193 "prog_io_util.m"
                {
#line 1193 "prog_io_util.m"
                  parse_tree__prog_io_util__ConstraintsTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1193 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1193 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1192 "prog_io_util.m"
                    {
#line 1194 "prog_io_util.m"
                      parse_tree__prog_io_util__V_21_21 = (MR_Integer) 0;
#line 1194 "prog_io_util.m"
                      {
#line 1194 "prog_io_util.m"
                        MR_Word base;
#line 1194 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "prog_io_util.m"
                        *parse_tree__prog_io_util__Attribute_7 = base;
#line 1194 "prog_io_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1194 "prog_io_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_29));
#line 1194 "prog_io_util.m"
                      }
#line 1194 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1192 "prog_io_util.m"
                    }
#line 1193 "prog_io_util.m"
                }
#line 1192 "prog_io_util.m"
            }
#line 1180 "prog_io_util.m"
          else
#line 1180 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "all") == 0))
#line 1201 "prog_io_util.m"
              {
#line 1201 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_33_33;
#line 1201 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14;
#line 1201 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;
#line 1201 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TVars_31;

#line 1202 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1202 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1202 "prog_io_util.m"
                  {
#line 1202 "prog_io_util.m"
                    *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1202 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1202 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1201 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1201 "prog_io_util.m"
                      {
#line 8368 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1203 "prog_io_util.m"
                        {
#line 1203 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_33_33, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_31);
                        }
#line 1201 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1201 "prog_io_util.m"
                          {
#line 1204 "prog_io_util.m"
                            parse_tree__prog_io_util__V_15_15 = (MR_Integer) 1;
#line 1204 "prog_io_util.m"
                            {
#line 1204 "prog_io_util.m"
                              MR_Word base;
#line 1204 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "prog_io_util.m"
                              *parse_tree__prog_io_util__Attribute_7 = base;
#line 1204 "prog_io_util.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1204 "prog_io_util.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_31));
#line 1204 "prog_io_util.m"
                            }
#line 1204 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1201 "prog_io_util.m"
                          }
#line 1201 "prog_io_util.m"
                      }
#line 1202 "prog_io_util.m"
                  }
#line 1201 "prog_io_util.m"
              }
#line 1180 "prog_io_util.m"
            else
#line 1180 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "some") == 0))
#line 1196 "prog_io_util.m"
                {
#line 1196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeCtorInfo_32_32;
#line 1196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TVars_11;
#line 1196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_17_17;
#line 1196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_18_18;

#line 1197 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1197 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1197 "prog_io_util.m"
                    {
#line 1197 "prog_io_util.m"
                      *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1197 "prog_io_util.m"
                      parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1197 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1196 "prog_io_util.m"
                        {
#line 8436 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1198 "prog_io_util.m"
                          {
#line 1198 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_32_32, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_11);
                          }
#line 1196 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1196 "prog_io_util.m"
                            {
#line 1199 "prog_io_util.m"
                              parse_tree__prog_io_util__V_18_18 = (MR_Integer) 0;
#line 1199 "prog_io_util.m"
                              {
#line 1199 "prog_io_util.m"
                                MR_Word base;
#line 1199 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_util.m"
                                *parse_tree__prog_io_util__Attribute_7 = base;
#line 1199 "prog_io_util.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1199 "prog_io_util.m"
                                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_11));
#line 1199 "prog_io_util.m"
                              }
#line 1199 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1196 "prog_io_util.m"
                            }
#line 1196 "prog_io_util.m"
                        }
#line 1197 "prog_io_util.m"
                    }
#line 1196 "prog_io_util.m"
                }
#line 1180 "prog_io_util.m"
              else
#line 1180 "prog_io_util.m"
                if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "impure") == 0))
#line 1180 "prog_io_util.m"
                  {
#line 1180 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_28_28;

#line 1181 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1180 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1180 "prog_io_util.m"
                      {
#line 1181 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1182 "prog_io_util.m"
                        parse_tree__prog_io_util__V_28_28 = (MR_Integer) 2;
#line 1182 "prog_io_util.m"
                        *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[10]);
#line 1182 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1180 "prog_io_util.m"
                      }
#line 1180 "prog_io_util.m"
                  }
#line 1180 "prog_io_util.m"
                else
#line 1180 "prog_io_util.m"
                  if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "solver") == 0))
#line 1206 "prog_io_util.m"
                    {
#line 1207 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1206 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1206 "prog_io_util.m"
                        {
#line 1207 "prog_io_util.m"
                          *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1208 "prog_io_util.m"
                          *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1208 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1206 "prog_io_util.m"
                        }
#line 1206 "prog_io_util.m"
                    }
#line 1180 "prog_io_util.m"
                  else
#line 1180 "prog_io_util.m"
                    if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "semipure") == 0))
#line 1184 "prog_io_util.m"
                      {
#line 1184 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_26_26;

#line 1185 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1184 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1184 "prog_io_util.m"
                          {
#line 1185 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1186 "prog_io_util.m"
                            parse_tree__prog_io_util__V_26_26 = (MR_Integer) 1;
#line 1186 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[11]);
#line 1186 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1184 "prog_io_util.m"
                          }
#line 1184 "prog_io_util.m"
                      }
#line 1180 "prog_io_util.m"
                    else
#line 1180 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1189 "prog_io_util.m"
      }
#line 1180 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1180 "prog_io_util.m"
  }
#line 203 "prog_io_util.m"
}

#line 182 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__list_term_to_term_list_2_p_0(
#line 182 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 182 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 182 "prog_io_util.m"
{
#line 1168 "prog_io_util.m"
  {
#line 1168 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1168 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1168 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1168 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_21_21;
#line 1168 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;

#line 1168 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
      {
#line 1168 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
#line 1168 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
#line 1168 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
#line 1172 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1172 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1172 "prog_io_util.m"
          {
#line 1172 "prog_io_util.m"
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1168 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1172 "prog_io_util.m"
              {
#line 1172 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
#line 1172 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1172 "prog_io_util.m"
                  {
#line 1173 "prog_io_util.m"
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1172 "prog_io_util.m"
                  }
#line 1172 "prog_io_util.m"
              }
#line 1168 "prog_io_util.m"
            else
#line 1168 "prog_io_util.m"
              {
#line 1168 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
#line 1168 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerm_6;
#line 1168 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerms_8;
#line 1168 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1168 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1168 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
#line 1168 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
                  {
#line 1168 "prog_io_util.m"
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
#line 1168 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
#line 1168 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1168 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
                      {
#line 1168 "prog_io_util.m"
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1168 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1168 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
                          {
#line 1169 "prog_io_util.m"
                            {
#line 1169 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
#line 1168 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
                              {
#line 1170 "prog_io_util.m"
                                {
#line 1170 "prog_io_util.m"
                                  MR_Word base;
#line 1170 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Terms_4 = base;
#line 1170 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
#line 1170 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
#line 1170 "prog_io_util.m"
                                }
#line 1170 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1168 "prog_io_util.m"
                              }
#line 1168 "prog_io_util.m"
                          }
#line 1168 "prog_io_util.m"
                      }
#line 1168 "prog_io_util.m"
                  }
#line 1168 "prog_io_util.m"
              }
#line 1172 "prog_io_util.m"
          }
#line 1168 "prog_io_util.m"
      }
#line 1168 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1168 "prog_io_util.m"
  }
#line 182 "prog_io_util.m"
}

#line 179 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__map_parser_3_p_0(
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_12,
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_1,
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 179 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 179 "prog_io_util.m"
{
#line 912 "prog_io_util.m"
  {
#line 912 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 912 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "prog_io_util.m"
      {
#line 912 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
#line 912 "prog_io_util.m"
      }
#line 912 "prog_io_util.m"
    else
#line 913 "prog_io_util.m"
      {
#line 913 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 913 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 913 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__X_Result_10;
#line 913 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Xs_Result_11;
#line 914 "prog_io_util.m"
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
#line 914 "prog_io_util.m"
        MR_Box parse_tree__prog_io_util__conv1_X_Result_10;

#line 914 "prog_io_util.m"
        {
#line 914 "prog_io_util.m"
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__X_7)), &parse_tree__prog_io_util__conv1_X_Result_10);
        }
#line 914 "prog_io_util.m"
        parse_tree__prog_io_util__X_Result_10 = ((MR_Word) parse_tree__prog_io_util__conv1_X_Result_10);
#line 915 "prog_io_util.m"
        {
#line 915 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_12, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Xs_8, &parse_tree__prog_io_util__Xs_Result_11);
        }
#line 923 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__X_Result_10)) == (MR_mktag((MR_Integer) 0))))
#line 923 "prog_io_util.m"
          {
#line 923 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__X_Result_10, (MR_Integer) 0)));

#line 923 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Xs_Result_11)) == (MR_mktag((MR_Integer) 0))))
#line 923 "prog_io_util.m"
              {
#line 923 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Xs_Result_11, (MR_Integer) 0)));
#line 923 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 924 "prog_io_util.m"
                {
#line 924 "prog_io_util.m"
                  parse_tree__prog_io_util__V_15_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_14);
                }
#line 923 "prog_io_util.m"
                {
#line 923 "prog_io_util.m"
                  MR_Word base;
#line 923 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 923 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 923 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 923 "prog_io_util.m"
                }
#line 923 "prog_io_util.m"
              }
#line 923 "prog_io_util.m"
            else
#line 925 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__X_Result_10;
#line 923 "prog_io_util.m"
          }
#line 923 "prog_io_util.m"
        else
#line 923 "prog_io_util.m"
          {
#line 923 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__X_Result_10, (MR_Integer) 0));

#line 923 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Xs_Result_11)) == (MR_mktag((MR_Integer) 0))))
#line 926 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Xs_Result_11;
#line 923 "prog_io_util.m"
            else
#line 927 "prog_io_util.m"
              {
#line 927 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Xs_Result_11, (MR_Integer) 0)));
#line 927 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;

#line 927 "prog_io_util.m"
                {
#line 927 "prog_io_util.m"
                  parse_tree__prog_io_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_22_22, 0) = parse_tree__prog_io_util__V_25_25;
#line 927 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__Xs_21));
#line 927 "prog_io_util.m"
                }
#line 927 "prog_io_util.m"
                {
#line 927 "prog_io_util.m"
                  MR_Word base;
#line 927 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 927 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 927 "prog_io_util.m"
                }
#line 927 "prog_io_util.m"
              }
#line 923 "prog_io_util.m"
          }
#line 913 "prog_io_util.m"
      }
#line 912 "prog_io_util.m"
  }
#line 179 "prog_io_util.m"
}

#line 177 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_list_3_p_0(
#line 177 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_8,
#line 177 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 177 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 177 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 177 "prog_io_util.m"
{
#line 908 "prog_io_util.m"
  {
#line 908 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 908 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__List_7;

#line 895 "prog_io_util.m"
    {
#line 895 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__List_7);
    }
#line 910 "prog_io_util.m"
    {
#line 910 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
#line 910 "prog_io_util.m"
      return;
    }
#line 908 "prog_io_util.m"
  }
#line 177 "prog_io_util.m"
}

#line 172 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_list_2_p_0(
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 172 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 172 "prog_io_util.m"
{
#line 886 "prog_io_util.m"
  {
#line 886 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 895 "prog_io_util.m"
    {
#line 895 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__List_4);
#line 895 "prog_io_util.m"
      return;
    }
#line 886 "prog_io_util.m"
  }
#line 172 "prog_io_util.m"
}

#line 167 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__list_to_conjunction_4_p_0(
#line 167 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 167 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Context_1,
#line 167 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 167 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3,
#line 167 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_4)
#line 167 "prog_io_util.m"
{
#line 881 "prog_io_util.m"
  {
#line 881 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 881 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 881 "prog_io_util.m"
      *parse_tree__prog_io_util__Term_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 881 "prog_io_util.m"
    else
#line 882 "prog_io_util.m"
      {
#line 882 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 882 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 882 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_12;
#line 882 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 882 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;

#line 883 "prog_io_util.m"
        {
#line 883 "prog_io_util.m"
          parse_tree__prog_io_util__list_to_conjunction_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__Second_9, parse_tree__prog_io_util__Rest_10, &parse_tree__prog_io_util__Tail_12);
        }
#line 884 "prog_io_util.m"
        {
#line 884 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
#line 884 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "prog_io_util.m"
        }
#line 884 "prog_io_util.m"
        {
#line 884 "prog_io_util.m"
          parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar__2_2));
#line 884 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 884 "prog_io_util.m"
        }
#line 884 "prog_io_util.m"
        {
#line 884 "prog_io_util.m"
          MR_Word base;
#line 884 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 884 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_4 = base;
#line 884 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
#line 884 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 884 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
#line 884 "prog_io_util.m"
        }
#line 882 "prog_io_util.m"
      }
#line 881 "prog_io_util.m"
  }
#line 167 "prog_io_util.m"
}

#line 162 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_list_2_p_0(
#line 162 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 162 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 162 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 162 "prog_io_util.m"
{
#line 878 "prog_io_util.m"
  {
#line 878 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 895 "prog_io_util.m"
    {
#line 895 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__List_4);
#line 895 "prog_io_util.m"
      return;
    }
#line 878 "prog_io_util.m"
  }
#line 162 "prog_io_util.m"
}

#line 158 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_list_2_p_0(
#line 158 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 158 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 158 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 158 "prog_io_util.m"
{
#line 875 "prog_io_util.m"
  {
#line 875 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 895 "prog_io_util.m"
    {
#line 895 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__List_4);
#line 895 "prog_io_util.m"
      return;
    }
#line 875 "prog_io_util.m"
  }
#line 158 "prog_io_util.m"
}

#line 154 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__standard_det_2_p_0(
#line 154 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1,
#line 154 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 154 "prog_io_util.m"
{
#line 813 "prog_io_util.m"
  {
#line 813 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 813 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "det") == 0))
#line 813 "prog_io_util.m"
      {
#line 813 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 0;
#line 813 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 813 "prog_io_util.m"
      }
#line 813 "prog_io_util.m"
    else
#line 813 "prog_io_util.m"
      if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "multi") == 0))
#line 817 "prog_io_util.m"
        {
#line 817 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 2;
#line 817 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 817 "prog_io_util.m"
        }
#line 813 "prog_io_util.m"
      else
#line 813 "prog_io_util.m"
        if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "nondet") == 0))
#line 816 "prog_io_util.m"
          {
#line 816 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 3;
#line 816 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 816 "prog_io_util.m"
          }
#line 813 "prog_io_util.m"
        else
#line 813 "prog_io_util.m"
          if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "failure") == 0))
#line 821 "prog_io_util.m"
            {
#line 821 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 7;
#line 821 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 821 "prog_io_util.m"
            }
#line 813 "prog_io_util.m"
          else
#line 813 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "semidet") == 0))
#line 819 "prog_io_util.m"
              {
#line 819 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 1;
#line 819 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 819 "prog_io_util.m"
              }
#line 813 "prog_io_util.m"
            else
#line 813 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "cc_multi") == 0))
#line 815 "prog_io_util.m"
                {
#line 815 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 4;
#line 815 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 815 "prog_io_util.m"
                }
#line 813 "prog_io_util.m"
              else
#line 813 "prog_io_util.m"
                if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "multidet") == 0))
#line 818 "prog_io_util.m"
                  {
#line 818 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 2;
#line 818 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 818 "prog_io_util.m"
                  }
#line 813 "prog_io_util.m"
                else
#line 813 "prog_io_util.m"
                  if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "cc_nondet") == 0))
#line 814 "prog_io_util.m"
                    {
#line 814 "prog_io_util.m"
                      *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 5;
#line 814 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 814 "prog_io_util.m"
                    }
#line 813 "prog_io_util.m"
                  else
#line 813 "prog_io_util.m"
                    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "erroneous") == 0))
#line 820 "prog_io_util.m"
                      {
#line 820 "prog_io_util.m"
                        *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 6;
#line 820 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 820 "prog_io_util.m"
                      }
#line 813 "prog_io_util.m"
                    else
#line 813 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 813 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 813 "prog_io_util.m"
  }
#line 154 "prog_io_util.m"
}

#line 151 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_3_p_0(
#line 151 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 151 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 151 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 151 "prog_io_util.m"
{
#line 633 "prog_io_util.m"
  {
#line 633 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 633 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 635 "prog_io_util.m"
      {
#line 635 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 635 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 635 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_14;
#line 636 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2)));
#line 642 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Result0_15;

#line 637 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_11)) == (MR_mktag((MR_Integer) 0)));
#line 637 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 637 "prog_io_util.m"
          {
#line 637 "prog_io_util.m"
            parse_tree__prog_io_util__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_11, (MR_Integer) 0)));
#line 639 "prog_io_util.m"
            {
#line 639 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(parse_tree__prog_io_util__Name_14, parse_tree__prog_io_util__Args0_12, &parse_tree__prog_io_util__Result0_15);
            }
#line 642 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 641 "prog_io_util.m"
              {
#line 641 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Result0_15;
#line 641 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 641 "prog_io_util.m"
              }
#line 642 "prog_io_util.m"
            else
#line 660 "prog_io_util.m"
              {
#line 660 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_17;
#line 660 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerm_18;
#line 650 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredTerm_16;
#line 650 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_52_52;
#line 650 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_53_53;
#line 650 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;
#line 650 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_55_55;
#line 652 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 650 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 650 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 650 "prog_io_util.m"
                  {
#line 651 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 651 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 651 "prog_io_util.m"
                      {
#line 651 "prog_io_util.m"
                        parse_tree__prog_io_util__PredTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 651 "prog_io_util.m"
                        parse_tree__prog_io_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 651 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 651 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 651 "prog_io_util.m"
                          {
#line 651 "prog_io_util.m"
                            parse_tree__prog_io_util__DetTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, (MR_Integer) 0)));
#line 651 "prog_io_util.m"
                            parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, (MR_Integer) 1)));
#line 651 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 650 "prog_io_util.m"
                              {
#line 652 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_16)) == (MR_mktag((MR_Integer) 0)));
#line 652 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 652 "prog_io_util.m"
                                  {
#line 652 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 0)));
#line 652 "prog_io_util.m"
                                    parse_tree__prog_io_util__ArgModesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 1)));
#line 652 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 2)));
#line 652 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_54_54)) == (MR_mktag((MR_Integer) 0)));
#line 652 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 652 "prog_io_util.m"
                                      {
#line 652 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_54_54, (MR_Integer) 0)));
#line 652 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_55_55, (MR_String) "pred") == 0);
#line 652 "prog_io_util.m"
                                      }
#line 652 "prog_io_util.m"
                                  }
#line 650 "prog_io_util.m"
                              }
#line 651 "prog_io_util.m"
                          }
#line 651 "prog_io_util.m"
                      }
#line 650 "prog_io_util.m"
                  }
#line 660 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                  {
#line 654 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__DetString_20;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Detism_22;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes_23;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__PredInst_24;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_56_56;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_57_57;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_58_58;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_59_59;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_60_60;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_61_61;
#line 654 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_21_21;

#line 654 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 654 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                      {
#line 654 "prog_io_util.m"
                        parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 0)));
#line 654 "prog_io_util.m"
                        parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 1)));
#line 654 "prog_io_util.m"
                        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 2)));
#line 654 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                          {
#line 654 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_56_56)) == (MR_mktag((MR_Integer) 0)));
#line 654 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                              {
#line 654 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, (MR_Integer) 0)));
#line 655 "prog_io_util.m"
                                {
#line 655 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_20, &parse_tree__prog_io_util__Detism_22);
                                }
#line 654 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                                  {
#line 656 "prog_io_util.m"
                                    {
#line 656 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_18, &parse_tree__prog_io_util__ArgModes_23);
                                    }
#line 654 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                                      {
#line 657 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_58_58 = (MR_Integer) 0;
#line 657 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_60_60 = (MR_Integer) 0;
#line 657 "prog_io_util.m"
                                        {
#line 657 "prog_io_util.m"
                                          parse_tree__prog_io_util__PredInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 657 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 657 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_23));
#line 657 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 2) = ((MR_Box) (parse_tree__prog_io_util__V_59_59));
#line 657 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_22));
#line 657 "prog_io_util.m"
                                        }
#line 659 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_24);
#line 659 "prog_io_util.m"
                                        {
#line 659 "prog_io_util.m"
                                          MR_Word base;
#line 659 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_util.m"
                                          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 659 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 659 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
#line 659 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_61_61));
#line 659 "prog_io_util.m"
                                        }
#line 659 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 654 "prog_io_util.m"
                                      }
#line 654 "prog_io_util.m"
                                  }
#line 654 "prog_io_util.m"
                              }
#line 654 "prog_io_util.m"
                          }
#line 654 "prog_io_util.m"
                      }
#line 654 "prog_io_util.m"
                  }
#line 660 "prog_io_util.m"
                else
#line 681 "prog_io_util.m"
                  {
#line 681 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetModeTerm_27;
#line 681 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__DetTerm_177;
#line 681 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModesTerm_178;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__EqTerm_25;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__FuncTerm_26;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_62_62;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_63_63;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_64_64;
#line 668 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_65_65;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_66_66;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_67_67;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;
#line 668 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_69_69;
#line 668 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_70_70;
#line 670 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_28_28;
#line 671 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_29_29;

#line 668 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 668 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 668 "prog_io_util.m"
                      {
#line 669 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 669 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 669 "prog_io_util.m"
                          {
#line 669 "prog_io_util.m"
                            parse_tree__prog_io_util__EqTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 669 "prog_io_util.m"
                            parse_tree__prog_io_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 669 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 669 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 669 "prog_io_util.m"
                              {
#line 669 "prog_io_util.m"
                                parse_tree__prog_io_util__DetTerm_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 0)));
#line 669 "prog_io_util.m"
                                parse_tree__prog_io_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 1)));
#line 669 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 668 "prog_io_util.m"
                                  {
#line 670 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 670 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 670 "prog_io_util.m"
                                      {
#line 670 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 0)));
#line 670 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 1)));
#line 670 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 2)));
#line 670 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 670 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 670 "prog_io_util.m"
                                          {
#line 670 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_64_64, (MR_Integer) 0)));
#line 670 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_65_65, (MR_String) "=") == 0);
#line 668 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 668 "prog_io_util.m"
                                              {
#line 670 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 670 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 670 "prog_io_util.m"
                                                  {
#line 670 "prog_io_util.m"
                                                    parse_tree__prog_io_util__FuncTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, (MR_Integer) 0)));
#line 670 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, (MR_Integer) 1)));
#line 670 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 670 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 670 "prog_io_util.m"
                                                      {
#line 670 "prog_io_util.m"
                                                        parse_tree__prog_io_util__RetModeTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, (MR_Integer) 0)));
#line 670 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, (MR_Integer) 1)));
#line 670 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 668 "prog_io_util.m"
                                                          {
#line 671 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_26)) == (MR_mktag((MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 671 "prog_io_util.m"
                                                              {
#line 671 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                                                parse_tree__prog_io_util__ArgModesTerm_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 1)));
#line 671 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 2)));
#line 671 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_69_69)) == (MR_mktag((MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 671 "prog_io_util.m"
                                                                  {
#line 671 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_69_69, (MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_70_70, (MR_String) "func") == 0);
#line 671 "prog_io_util.m"
                                                                  }
#line 671 "prog_io_util.m"
                                                              }
#line 668 "prog_io_util.m"
                                                          }
#line 670 "prog_io_util.m"
                                                      }
#line 670 "prog_io_util.m"
                                                  }
#line 668 "prog_io_util.m"
                                              }
#line 670 "prog_io_util.m"
                                          }
#line 670 "prog_io_util.m"
                                      }
#line 668 "prog_io_util.m"
                                  }
#line 669 "prog_io_util.m"
                              }
#line 669 "prog_io_util.m"
                          }
#line 668 "prog_io_util.m"
                      }
#line 681 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 673 "prog_io_util.m"
                      {
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_186_186;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes0_31;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__RetMode_32;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__FuncInst_33;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_71_71;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_72_72;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_73_73;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_74_74;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_75_75;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_76_76;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_77_77;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_78_78;
#line 673 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__DetString_123;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Detism_124;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes_125;
#line 673 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_30_30;

#line 673 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_177)) == (MR_mktag((MR_Integer) 0)));
#line 673 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 673 "prog_io_util.m"
                          {
#line 673 "prog_io_util.m"
                            parse_tree__prog_io_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 0)));
#line 673 "prog_io_util.m"
                            parse_tree__prog_io_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 1)));
#line 673 "prog_io_util.m"
                            parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 2)));
#line 673 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 673 "prog_io_util.m"
                              {
#line 673 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 673 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 673 "prog_io_util.m"
                                  {
#line 673 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetString_123 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_71_71, (MR_Integer) 0)));
#line 674 "prog_io_util.m"
                                    {
#line 674 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_123, &parse_tree__prog_io_util__Detism_124);
                                    }
#line 673 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 673 "prog_io_util.m"
                                      {
#line 675 "prog_io_util.m"
                                        {
#line 675 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_178, &parse_tree__prog_io_util__ArgModes0_31);
                                        }
#line 673 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 673 "prog_io_util.m"
                                          {
#line 676 "prog_io_util.m"
                                            {
#line 676 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__RetModeTerm_27, &parse_tree__prog_io_util__RetMode_32);
                                            }
#line 673 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 673 "prog_io_util.m"
                                              {
#line 677 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9718 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_186_186 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 677 "prog_io_util.m"
                                                {
#line 677 "prog_io_util.m"
                                                  parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_32));
#line 677 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 677 "prog_io_util.m"
                                                }
#line 677 "prog_io_util.m"
                                                {
#line 677 "prog_io_util.m"
                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_186_186, parse_tree__prog_io_util__ArgModes0_31, parse_tree__prog_io_util__V_73_73, &parse_tree__prog_io_util__ArgModes_125);
                                                }
#line 678 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_75_75 = (MR_Integer) 1;
#line 678 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 680 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_77_77 = (MR_Integer) 0;
#line 678 "prog_io_util.m"
                                                {
#line 678 "prog_io_util.m"
                                                  parse_tree__prog_io_util__FuncInst_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 678 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 678 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_125));
#line 678 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 2) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 678 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_124));
#line 678 "prog_io_util.m"
                                                }
#line 680 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_33);
#line 680 "prog_io_util.m"
                                                {
#line 680 "prog_io_util.m"
                                                  MR_Word base;
#line 680 "prog_io_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_io_util.m"
                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 680 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 680 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_77_77));
#line 680 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_78_78));
#line 680 "prog_io_util.m"
                                                }
#line 680 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 673 "prog_io_util.m"
                                              }
#line 673 "prog_io_util.m"
                                          }
#line 673 "prog_io_util.m"
                                      }
#line 673 "prog_io_util.m"
                                  }
#line 673 "prog_io_util.m"
                              }
#line 673 "prog_io_util.m"
                          }
#line 673 "prog_io_util.m"
                      }
#line 681 "prog_io_util.m"
                    else
#line 699 "prog_io_util.m"
                      {
#line 699 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_163;
#line 699 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModesTerm_164;
#line 689 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_79_79;
#line 689 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_80_80;
#line 689 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_81_81;
#line 689 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_82_82;
#line 689 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__PredTerm_126;
#line 691 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_34_34;

#line 689 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 689 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 689 "prog_io_util.m"
                          {
#line 690 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 690 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 690 "prog_io_util.m"
                              {
#line 690 "prog_io_util.m"
                                parse_tree__prog_io_util__PredTerm_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 690 "prog_io_util.m"
                                parse_tree__prog_io_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 690 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 690 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 690 "prog_io_util.m"
                                  {
#line 690 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetTerm_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_79_79, (MR_Integer) 0)));
#line 690 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_79_79, (MR_Integer) 1)));
#line 690 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 689 "prog_io_util.m"
                                      {
#line 691 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_126)) == (MR_mktag((MR_Integer) 0)));
#line 691 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                                          {
#line 691 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 0)));
#line 691 "prog_io_util.m"
                                            parse_tree__prog_io_util__ArgModesTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 1)));
#line 691 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 2)));
#line 691 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_81_81)) == (MR_mktag((MR_Integer) 0)));
#line 691 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                                              {
#line 691 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_81_81, (MR_Integer) 0)));
#line 691 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_82_82, (MR_String) "any_pred") == 0);
#line 691 "prog_io_util.m"
                                              }
#line 691 "prog_io_util.m"
                                          }
#line 689 "prog_io_util.m"
                                      }
#line 690 "prog_io_util.m"
                                  }
#line 690 "prog_io_util.m"
                              }
#line 689 "prog_io_util.m"
                          }
#line 699 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 693 "prog_io_util.m"
                          {
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_83_83;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_84_84;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_85_85;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_86_86;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_87_87;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_88_88;
#line 693 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__DetString_127;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Detism_128;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes_129;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__PredInst_130;
#line 693 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_35_35;

#line 693 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_163)) == (MR_mktag((MR_Integer) 0)));
#line 693 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 693 "prog_io_util.m"
                              {
#line 693 "prog_io_util.m"
                                parse_tree__prog_io_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 0)));
#line 693 "prog_io_util.m"
                                parse_tree__prog_io_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 1)));
#line 693 "prog_io_util.m"
                                parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 2)));
#line 693 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 693 "prog_io_util.m"
                                  {
#line 693 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_83_83)) == (MR_mktag((MR_Integer) 0)));
#line 693 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 693 "prog_io_util.m"
                                      {
#line 693 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetString_127 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_83_83, (MR_Integer) 0)));
#line 694 "prog_io_util.m"
                                        {
#line 694 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_127, &parse_tree__prog_io_util__Detism_128);
                                        }
#line 693 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 693 "prog_io_util.m"
                                          {
#line 695 "prog_io_util.m"
                                            {
#line 695 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_164, &parse_tree__prog_io_util__ArgModes_129);
                                            }
#line 693 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 693 "prog_io_util.m"
                                              {
#line 696 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_85_85 = (MR_Integer) 0;
#line 696 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_87_87 = (MR_Integer) 0;
#line 696 "prog_io_util.m"
                                                {
#line 696 "prog_io_util.m"
                                                  parse_tree__prog_io_util__PredInst_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 696 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 0) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 696 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_129));
#line 696 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 2) = ((MR_Box) (parse_tree__prog_io_util__V_86_86));
#line 696 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_128));
#line 696 "prog_io_util.m"
                                                }
#line 698 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_130);
#line 698 "prog_io_util.m"
                                                {
#line 698 "prog_io_util.m"
                                                  MR_Word base;
#line 698 "prog_io_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "prog_io_util.m"
                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 698 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_87_87));
#line 698 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_88_88));
#line 698 "prog_io_util.m"
                                                }
#line 698 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 693 "prog_io_util.m"
                                              }
#line 693 "prog_io_util.m"
                                          }
#line 693 "prog_io_util.m"
                                      }
#line 693 "prog_io_util.m"
                                  }
#line 693 "prog_io_util.m"
                              }
#line 693 "prog_io_util.m"
                          }
#line 699 "prog_io_util.m"
                        else
#line 721 "prog_io_util.m"
                          {
#line 721 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DetTerm_150;
#line 721 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModesTerm_151;
#line 721 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__RetModeTerm_157;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_89_89;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_90_90;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_91_91;
#line 707 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__V_92_92;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_93_93;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_94_94;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_95_95;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_96_96;
#line 707 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__V_97_97;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__EqTerm_131;
#line 707 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__FuncTerm_132;
#line 709 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_36_36;
#line 710 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_37_37;

#line 707 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 707 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 707 "prog_io_util.m"
                              {
#line 708 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 708 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 708 "prog_io_util.m"
                                  {
#line 708 "prog_io_util.m"
                                    parse_tree__prog_io_util__EqTerm_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 708 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 708 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_89_89)) == (MR_mktag((MR_Integer) 1)));
#line 708 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 708 "prog_io_util.m"
                                      {
#line 708 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetTerm_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_89_89, (MR_Integer) 0)));
#line 708 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_89_89, (MR_Integer) 1)));
#line 708 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 707 "prog_io_util.m"
                                          {
#line 709 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_131)) == (MR_mktag((MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                                              {
#line 709 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 2)));
#line 709 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                                                  {
#line 709 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_91_91, (MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_92_92, (MR_String) "=") == 0);
#line 707 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 707 "prog_io_util.m"
                                                      {
#line 709 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                                                          {
#line 709 "prog_io_util.m"
                                                            parse_tree__prog_io_util__FuncTerm_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                                                              {
#line 709 "prog_io_util.m"
                                                                parse_tree__prog_io_util__RetModeTerm_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_94_94, (MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_94_94, (MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 707 "prog_io_util.m"
                                                                  {
#line 710 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_132)) == (MR_mktag((MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                                                                      {
#line 710 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__ArgModesTerm_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 1)));
#line 710 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 2)));
#line 710 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                                        if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                                                                          {
#line 710 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_96_96, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_97_97, (MR_String) "any_func") == 0);
#line 710 "prog_io_util.m"
                                                                          }
#line 710 "prog_io_util.m"
                                                                      }
#line 707 "prog_io_util.m"
                                                                  }
#line 709 "prog_io_util.m"
                                                              }
#line 709 "prog_io_util.m"
                                                          }
#line 707 "prog_io_util.m"
                                                      }
#line 709 "prog_io_util.m"
                                                  }
#line 709 "prog_io_util.m"
                                              }
#line 707 "prog_io_util.m"
                                          }
#line 708 "prog_io_util.m"
                                      }
#line 708 "prog_io_util.m"
                                  }
#line 707 "prog_io_util.m"
                              }
#line 721 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                              {
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeCtorInfo_187_187;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_98_98;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_99_99;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_100_100;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_101_101;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_102_102;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_103_103;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_104_104;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_105_105;
#line 712 "prog_io_util.m"
                                MR_String parse_tree__prog_io_util__DetString_133;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Detism_134;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgModes_135;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgModes0_136;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__RetMode_137;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__FuncInst_138;
#line 712 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_38_38;

#line 712 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_150)) == (MR_mktag((MR_Integer) 0)));
#line 712 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                                  {
#line 712 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 0)));
#line 712 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 1)));
#line 712 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 2)));
#line 712 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                                      {
#line 712 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_98_98)) == (MR_mktag((MR_Integer) 0)));
#line 712 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                                          {
#line 712 "prog_io_util.m"
                                            parse_tree__prog_io_util__DetString_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_98_98, (MR_Integer) 0)));
#line 713 "prog_io_util.m"
                                            {
#line 713 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_133, &parse_tree__prog_io_util__Detism_134);
                                            }
#line 712 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                                              {
#line 714 "prog_io_util.m"
                                                {
#line 714 "prog_io_util.m"
                                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_151, &parse_tree__prog_io_util__ArgModes0_136);
                                                }
#line 712 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                                                  {
#line 715 "prog_io_util.m"
                                                    {
#line 715 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__RetModeTerm_157, &parse_tree__prog_io_util__RetMode_137);
                                                    }
#line 712 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                                                      {
#line 716 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10256 "parse_tree.prog_io_util.c"
                                                        parse_tree__prog_io_util__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 716 "prog_io_util.m"
                                                        {
#line 716 "prog_io_util.m"
                                                          parse_tree__prog_io_util__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_137));
#line 716 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__V_101_101));
#line 716 "prog_io_util.m"
                                                        }
#line 716 "prog_io_util.m"
                                                        {
#line 716 "prog_io_util.m"
                                                          mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_187_187, parse_tree__prog_io_util__ArgModes0_136, parse_tree__prog_io_util__V_100_100, &parse_tree__prog_io_util__ArgModes_135);
                                                        }
#line 717 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_102_102 = (MR_Integer) 1;
#line 717 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_103_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 719 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_104_104 = (MR_Integer) 0;
#line 717 "prog_io_util.m"
                                                        {
#line 717 "prog_io_util.m"
                                                          parse_tree__prog_io_util__FuncInst_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 717 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 0) = ((MR_Box) (parse_tree__prog_io_util__V_102_102));
#line 717 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_135));
#line 717 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 2) = ((MR_Box) (parse_tree__prog_io_util__V_103_103));
#line 717 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_134));
#line 717 "prog_io_util.m"
                                                        }
#line 719 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_138);
#line 719 "prog_io_util.m"
                                                        {
#line 719 "prog_io_util.m"
                                                          MR_Word base;
#line 719 "prog_io_util.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "prog_io_util.m"
                                                          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 719 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_104_104));
#line 719 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_105_105));
#line 719 "prog_io_util.m"
                                                        }
#line 719 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 712 "prog_io_util.m"
                                                      }
#line 712 "prog_io_util.m"
                                                  }
#line 712 "prog_io_util.m"
                                              }
#line 712 "prog_io_util.m"
                                          }
#line 712 "prog_io_util.m"
                                      }
#line 712 "prog_io_util.m"
                                  }
#line 712 "prog_io_util.m"
                              }
#line 721 "prog_io_util.m"
                            else
#line 727 "prog_io_util.m"
                              {
#line 727 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Disj_39;
#line 722 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_106_106;

#line 722 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "bound") == 0);
#line 722 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 722 "prog_io_util.m"
                                  {
#line 723 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 723 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 723 "prog_io_util.m"
                                      {
#line 723 "prog_io_util.m"
                                        parse_tree__prog_io_util__Disj_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 723 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 723 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 723 "prog_io_util.m"
                                      }
#line 722 "prog_io_util.m"
                                  }
#line 727 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 726 "prog_io_util.m"
                                  {
#line 726 "prog_io_util.m"
                                    {
#line 726 "prog_io_util.m"
                                      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_39, (MR_Integer) 0, parse_tree__prog_io_util__HeadVar__3_3);
                                    }
#line 726 "prog_io_util.m"
                                  }
#line 727 "prog_io_util.m"
                                else
#line 733 "prog_io_util.m"
                                  {
#line 733 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__Disj_147;
#line 728 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__V_108_108;

#line 728 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "bound_unique") == 0);
#line 728 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 728 "prog_io_util.m"
                                      {
#line 729 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 729 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 729 "prog_io_util.m"
                                          {
#line 729 "prog_io_util.m"
                                            parse_tree__prog_io_util__Disj_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 729 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 729 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "prog_io_util.m"
                                          }
#line 728 "prog_io_util.m"
                                      }
#line 733 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 732 "prog_io_util.m"
                                      {
#line 732 "prog_io_util.m"
                                        {
#line 732 "prog_io_util.m"
                                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_147, (MR_Integer) 1, parse_tree__prog_io_util__HeadVar__3_3);
                                        }
#line 732 "prog_io_util.m"
                                      }
#line 733 "prog_io_util.m"
                                    else
#line 738 "prog_io_util.m"
                                      {
#line 738 "prog_io_util.m"
                                        MR_Word parse_tree__prog_io_util__Disj_145;
#line 734 "prog_io_util.m"
                                        MR_Word parse_tree__prog_io_util__V_110_110;

#line 734 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "unique") == 0);
#line 734 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 734 "prog_io_util.m"
                                          {
#line 735 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 735 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 735 "prog_io_util.m"
                                              {
#line 735 "prog_io_util.m"
                                                parse_tree__prog_io_util__Disj_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 735 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 735 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "prog_io_util.m"
                                              }
#line 734 "prog_io_util.m"
                                          }
#line 738 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 737 "prog_io_util.m"
                                          {
#line 737 "prog_io_util.m"
                                            {
#line 737 "prog_io_util.m"
                                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_145, (MR_Integer) 1, parse_tree__prog_io_util__HeadVar__3_3);
                                            }
#line 737 "prog_io_util.m"
                                          }
#line 738 "prog_io_util.m"
                                        else
#line 744 "prog_io_util.m"
                                          {
#line 744 "prog_io_util.m"
                                            MR_Word parse_tree__prog_io_util__Disj_143;
#line 739 "prog_io_util.m"
                                            MR_Word parse_tree__prog_io_util__V_112_112;

#line 739 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "mostly_unique") == 0);
#line 739 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 739 "prog_io_util.m"
                                              {
#line 740 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 740 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 740 "prog_io_util.m"
                                                  {
#line 740 "prog_io_util.m"
                                                    parse_tree__prog_io_util__Disj_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 740 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 740 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_112_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "prog_io_util.m"
                                                  }
#line 739 "prog_io_util.m"
                                              }
#line 744 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 742 "prog_io_util.m"
                                              {
#line 742 "prog_io_util.m"
                                                {
#line 742 "prog_io_util.m"
                                                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_143, (MR_Integer) 2, parse_tree__prog_io_util__HeadVar__3_3);
                                                }
#line 742 "prog_io_util.m"
                                              }
#line 744 "prog_io_util.m"
                                            else
#line 754 "prog_io_util.m"
                                              {
#line 754 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__VarTerm_40;
#line 754 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__InstTerm_41;
#line 745 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__V_114_114;
#line 745 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__V_115_115;

#line 745 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "=<") == 0);
#line 745 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 745 "prog_io_util.m"
                                                  {
#line 746 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 746 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 746 "prog_io_util.m"
                                                      {
#line 746 "prog_io_util.m"
                                                        parse_tree__prog_io_util__VarTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 746 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 746 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 746 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 746 "prog_io_util.m"
                                                          {
#line 746 "prog_io_util.m"
                                                            parse_tree__prog_io_util__InstTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 0)));
#line 746 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 1)));
#line 746 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "prog_io_util.m"
                                                          }
#line 746 "prog_io_util.m"
                                                      }
#line 745 "prog_io_util.m"
                                                  }
#line 754 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                                                  {
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeInfo_188_188;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_189_189;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_190_190;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Var_42;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Inst_44;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_116_116;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_117_117;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_118_118;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_43_43;

#line 748 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
#line 748 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                                                      {
#line 749 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_40)) == (MR_mktag((MR_Integer) 1)));
#line 749 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 749 "prog_io_util.m"
                                                          {
#line 749 "prog_io_util.m"
                                                            parse_tree__prog_io_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_40, (MR_Integer) 0)));
#line 749 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_40, (MR_Integer) 1)));
#line 751 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_116_116 = (MR_Integer) 1;
#line 751 "prog_io_util.m"
                                                            {
#line 751 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_116_116, parse_tree__prog_io_util__InstTerm_41, &parse_tree__prog_io_util__Inst_44);
                                                            }
#line 748 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                                                              {
#line 10590 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeInfo_188_188 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 10592 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeCtorInfo_189_189 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 10594 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeCtorInfo_190_190 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 752 "prog_io_util.m"
                                                                {
#line 752 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_118_118 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_189_189, parse_tree__prog_io_util__TypeCtorInfo_190_190, parse_tree__prog_io_util__Var_42);
                                                                }
#line 752 "prog_io_util.m"
                                                                {
#line 752 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_117_117 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_188_188, ((MR_Box) (parse_tree__prog_io_util__V_118_118)));
                                                                }
#line 752 "prog_io_util.m"
                                                                {
#line 752 "prog_io_util.m"
                                                                  MR_Word base;
#line 752 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 752 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 752 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 752 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_117_117));
#line 752 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Inst_44));
#line 752 "prog_io_util.m"
                                                                }
#line 752 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 748 "prog_io_util.m"
                                                              }
#line 749 "prog_io_util.m"
                                                          }
#line 748 "prog_io_util.m"
                                                      }
#line 748 "prog_io_util.m"
                                                  }
#line 754 "prog_io_util.m"
                                                else
#line 757 "prog_io_util.m"
                                                  {
#line 757 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__QualifiedName_45;
#line 757 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Args1_46;
#line 774 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Result0_139;
#line 759 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__BuiltinModule_47;
#line 759 "prog_io_util.m"
                                                    MR_String parse_tree__prog_io_util__UnqualifiedName_48;
#line 759 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_119_119;
#line 759 "prog_io_util.m"
                                                    MR_String parse_tree__prog_io_util__V_120_120;
#line 759 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_192_192;
#line 771 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_121_121;
#line 771 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_49_49;
#line 771 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_50_50;

#line 756 "prog_io_util.m"
                                                    {
#line 756 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_11, parse_tree__prog_io_util__Args0_12, &parse_tree__prog_io_util__QualifiedName_45, &parse_tree__prog_io_util__Args1_46);
                                                    }
#line 757 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 757 "prog_io_util.m"
                                                      {
#line 759 "prog_io_util.m"
                                                        {
#line 759 "prog_io_util.m"
                                                          parse_tree__prog_io_util__BuiltinModule_47 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                                                        }
#line 760 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_120_120 = (MR_String) "";
#line 760 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_119_119 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 760 "prog_io_util.m"
                                                        {
#line 760 "prog_io_util.m"
                                                          mdbcomp__prim_data__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_45, parse_tree__prog_io_util__V_119_119, &parse_tree__prog_io_util__V_192_192);
                                                        }
#line 760 "prog_io_util.m"
                                                        {
#line 760 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_47, parse_tree__prog_io_util__V_192_192);
                                                        }
#line 759 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 759 "prog_io_util.m"
                                                          {
#line 765 "prog_io_util.m"
                                                            {
#line 765 "prog_io_util.m"
                                                              parse_tree__prog_io_util__UnqualifiedName_48 = mdbcomp__prim_data__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_45);
                                                            }
#line 766 "prog_io_util.m"
                                                            {
#line 766 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(parse_tree__prog_io_util__UnqualifiedName_48, parse_tree__prog_io_util__Args1_46, &parse_tree__prog_io_util__Result0_139);
                                                            }
#line 759 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 759 "prog_io_util.m"
                                                              {
#line 771 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Result0_139, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 771 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 771 "prog_io_util.m"
                                                                  {
#line 771 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Result0_139, (MR_Integer) 1)));
#line 771 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_121_121)) == (MR_mktag((MR_Integer) 0)));
#line 771 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 771 "prog_io_util.m"
                                                                      {
#line 771 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_121_121, (MR_Integer) 0)));
#line 771 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_121_121, (MR_Integer) 1)));
#line 771 "prog_io_util.m"
                                                                      }
#line 771 "prog_io_util.m"
                                                                  }
#line 771 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 759 "prog_io_util.m"
                                                              }
#line 759 "prog_io_util.m"
                                                          }
#line 774 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 773 "prog_io_util.m"
                                                          {
#line 773 "prog_io_util.m"
                                                            *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Result0_139;
#line 773 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
                                                          }
#line 774 "prog_io_util.m"
                                                        else
#line 775 "prog_io_util.m"
                                                          {
#line 775 "prog_io_util.m"
                                                            MR_Word parse_tree__prog_io_util__Args_51;
#line 775 "prog_io_util.m"
                                                            MR_Word parse_tree__prog_io_util__V_122_122;

#line 775 "prog_io_util.m"
                                                            {
#line 775 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_46, &parse_tree__prog_io_util__Args_51);
                                                            }
#line 775 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 775 "prog_io_util.m"
                                                              {
#line 776 "prog_io_util.m"
                                                                {
#line 776 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_45));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_51));
#line 776 "prog_io_util.m"
                                                                }
#line 776 "prog_io_util.m"
                                                                {
#line 776 "prog_io_util.m"
                                                                  MR_Word base;
#line 776 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_122_122));
#line 776 "prog_io_util.m"
                                                                }
#line 776 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 775 "prog_io_util.m"
                                                              }
#line 775 "prog_io_util.m"
                                                          }
#line 757 "prog_io_util.m"
                                                      }
#line 757 "prog_io_util.m"
                                                  }
#line 754 "prog_io_util.m"
                                              }
#line 744 "prog_io_util.m"
                                          }
#line 738 "prog_io_util.m"
                                      }
#line 733 "prog_io_util.m"
                                  }
#line 727 "prog_io_util.m"
                              }
#line 721 "prog_io_util.m"
                          }
#line 699 "prog_io_util.m"
                      }
#line 681 "prog_io_util.m"
                  }
#line 660 "prog_io_util.m"
              }
#line 637 "prog_io_util.m"
          }
#line 635 "prog_io_util.m"
      }
#line 633 "prog_io_util.m"
    else
#line 633 "prog_io_util.m"
      {
#line 633 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 633 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_7;
#line 633 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 634 "prog_io_util.m"
        {
#line 634 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_5, &parse_tree__prog_io_util__V_7);
        }
#line 633 "prog_io_util.m"
        {
#line 633 "prog_io_util.m"
          MR_Word base;
#line 633 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 633 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 633 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_7));
#line 633 "prog_io_util.m"
        }
#line 633 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 633 "prog_io_util.m"
      }
#line 633 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 633 "prog_io_util.m"
  }
#line 151 "prog_io_util.m"
}

#line 148 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_list_3_p_0(
#line 148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 148 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 148 "prog_io_util.m"
{
#line 628 "prog_io_util.m"
  {
#line 628 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 628 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "prog_io_util.m"
      {
#line 628 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 628 "prog_io_util.m"
      }
#line 628 "prog_io_util.m"
    else
#line 629 "prog_io_util.m"
      {
#line 629 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 629 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 629 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 629 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 630 "prog_io_util.m"
        {
#line 630 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 629 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 629 "prog_io_util.m"
          {
#line 631 "prog_io_util.m"
            {
#line 631 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 629 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 629 "prog_io_util.m"
              {
#line 629 "prog_io_util.m"
                {
#line 629 "prog_io_util.m"
                  MR_Word base;
#line 629 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 629 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 629 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 629 "prog_io_util.m"
                }
#line 629 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 629 "prog_io_util.m"
              }
#line 629 "prog_io_util.m"
          }
#line 629 "prog_io_util.m"
      }
#line 628 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 628 "prog_io_util.m"
  }
#line 148 "prog_io_util.m"
}

#line 145 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_3_p_0(
#line 145 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 145 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 145 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_6)
#line 145 "prog_io_util.m"
{
#line 524 "prog_io_util.m"
  {
#line 524 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 524 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
#line 524 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermArgs_8;
#line 525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;
#line 533 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__InstTermA_10;
#line 533 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__InstTermB_11;
#line 527 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_41_41;
#line 527 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_42_42;
#line 527 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_43_43;

#line 525 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 525 "prog_io_util.m"
      {
#line 525 "prog_io_util.m"
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 525 "prog_io_util.m"
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 525 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 527 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 527 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 527 "prog_io_util.m"
          {
#line 527 "prog_io_util.m"
            parse_tree__prog_io_util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 527 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_41_41, (MR_String) ">>") == 0);
#line 527 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 527 "prog_io_util.m"
              {
#line 528 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 528 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 528 "prog_io_util.m"
                  {
#line 528 "prog_io_util.m"
                    parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 528 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 528 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 528 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 528 "prog_io_util.m"
                      {
#line 528 "prog_io_util.m"
                        parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, (MR_Integer) 0)));
#line 528 "prog_io_util.m"
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, (MR_Integer) 1)));
#line 528 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "prog_io_util.m"
                      }
#line 528 "prog_io_util.m"
                  }
#line 527 "prog_io_util.m"
              }
#line 527 "prog_io_util.m"
          }
#line 533 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 530 "prog_io_util.m"
          {
#line 530 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstA_12;
#line 530 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstB_13;

#line 530 "prog_io_util.m"
            {
#line 530 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
            }
#line 530 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 530 "prog_io_util.m"
              {
#line 531 "prog_io_util.m"
                {
#line 531 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                }
#line 530 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 530 "prog_io_util.m"
                  {
#line 532 "prog_io_util.m"
                    {
#line 532 "prog_io_util.m"
                      MR_Word base;
#line 532 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "prog_io_util.m"
                      *parse_tree__prog_io_util__Mode_6 = base;
#line 532 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
#line 532 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
#line 532 "prog_io_util.m"
                    }
#line 532 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 530 "prog_io_util.m"
                  }
#line 530 "prog_io_util.m"
              }
#line 530 "prog_io_util.m"
          }
#line 533 "prog_io_util.m"
        else
#line 553 "prog_io_util.m"
          {
#line 553 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__DetTerm_15;
#line 553 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__ArgModesTerms_16;
#line 542 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__PredTerm_14;
#line 542 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_44_44;
#line 542 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_45_45;
#line 542 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_46_46;
#line 542 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47;
#line 542 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_48_48;
#line 544 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_17_17;

#line 542 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 542 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 542 "prog_io_util.m"
              {
#line 542 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 542 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_44_44, (MR_String) "is") == 0);
#line 542 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 542 "prog_io_util.m"
                  {
#line 543 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 543 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 543 "prog_io_util.m"
                      {
#line 543 "prog_io_util.m"
                        parse_tree__prog_io_util__PredTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 543 "prog_io_util.m"
                        parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 543 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 543 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 543 "prog_io_util.m"
                          {
#line 543 "prog_io_util.m"
                            parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 543 "prog_io_util.m"
                            parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 543 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 542 "prog_io_util.m"
                              {
#line 544 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_14)) == (MR_mktag((MR_Integer) 0)));
#line 544 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 544 "prog_io_util.m"
                                  {
#line 544 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 0)));
#line 544 "prog_io_util.m"
                                    parse_tree__prog_io_util__ArgModesTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 1)));
#line 544 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 2)));
#line 544 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
#line 544 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 544 "prog_io_util.m"
                                      {
#line 544 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_47_47, (MR_Integer) 0)));
#line 544 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_48_48, (MR_String) "pred") == 0);
#line 544 "prog_io_util.m"
                                      }
#line 544 "prog_io_util.m"
                                  }
#line 542 "prog_io_util.m"
                              }
#line 543 "prog_io_util.m"
                          }
#line 543 "prog_io_util.m"
                      }
#line 542 "prog_io_util.m"
                  }
#line 542 "prog_io_util.m"
              }
#line 553 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 546 "prog_io_util.m"
              {
#line 546 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_18;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_20;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_21;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInstInfo_22;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_23;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_49_49;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_50_50;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_51_51;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_52_52;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_53_53;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;
#line 546 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 546 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 546 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 546 "prog_io_util.m"
                  {
#line 546 "prog_io_util.m"
                    parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 0)));
#line 546 "prog_io_util.m"
                    parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 1)));
#line 546 "prog_io_util.m"
                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 2)));
#line 546 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 546 "prog_io_util.m"
                      {
#line 546 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 546 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 546 "prog_io_util.m"
                          {
#line 546 "prog_io_util.m"
                            parse_tree__prog_io_util__DetString_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_49_49, (MR_Integer) 0)));
#line 547 "prog_io_util.m"
                            {
#line 547 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_18, &parse_tree__prog_io_util__Detism_20);
                            }
#line 546 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 546 "prog_io_util.m"
                              {
#line 548 "prog_io_util.m"
                                {
#line 548 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_16, &parse_tree__prog_io_util__ArgModes_21);
                                }
#line 546 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 546 "prog_io_util.m"
                                  {
#line 549 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_51_51 = (MR_Integer) 0;
#line 549 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_53_53 = (MR_Integer) 0;
#line 549 "prog_io_util.m"
                                    {
#line 549 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 0) = ((MR_Box) (parse_tree__prog_io_util__V_51_51));
#line 549 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_21));
#line 549 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 2) = ((MR_Box) (parse_tree__prog_io_util__V_52_52));
#line 549 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_20));
#line 549 "prog_io_util.m"
                                    }
#line 551 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_22);
#line 551 "prog_io_util.m"
                                    {
#line 551 "prog_io_util.m"
                                      parse_tree__prog_io_util__Inst_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 551 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 551 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_53_53));
#line 551 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 2) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 551 "prog_io_util.m"
                                    }
#line 552 "prog_io_util.m"
                                    {
#line 552 "prog_io_util.m"
                                      MR_Word base;
#line 552 "prog_io_util.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 552 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 552 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_23));
#line 552 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_23));
#line 552 "prog_io_util.m"
                                    }
#line 552 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 546 "prog_io_util.m"
                                  }
#line 546 "prog_io_util.m"
                              }
#line 546 "prog_io_util.m"
                          }
#line 546 "prog_io_util.m"
                      }
#line 546 "prog_io_util.m"
                  }
#line 546 "prog_io_util.m"
              }
#line 553 "prog_io_util.m"
            else
#line 576 "prog_io_util.m"
              {
#line 576 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_26;
#line 576 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_152;
#line 576 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_153;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__EqTerm_24;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_25;
#line 562 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_56_56;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_57_57;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_58_58;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_59_59;
#line 562 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_60_60;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_61_61;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_62_62;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_63_63;
#line 562 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_64_64;
#line 562 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_65_65;
#line 564 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_27_27;
#line 565 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_28_28;

#line 562 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 562 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 562 "prog_io_util.m"
                  {
#line 562 "prog_io_util.m"
                    parse_tree__prog_io_util__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 562 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_56_56, (MR_String) "is") == 0);
#line 562 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 562 "prog_io_util.m"
                      {
#line 563 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 563 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 563 "prog_io_util.m"
                          {
#line 563 "prog_io_util.m"
                            parse_tree__prog_io_util__EqTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 563 "prog_io_util.m"
                            parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 563 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 563 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 563 "prog_io_util.m"
                              {
#line 563 "prog_io_util.m"
                                parse_tree__prog_io_util__DetTerm_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, (MR_Integer) 0)));
#line 563 "prog_io_util.m"
                                parse_tree__prog_io_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, (MR_Integer) 1)));
#line 563 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 562 "prog_io_util.m"
                                  {
#line 564 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_24)) == (MR_mktag((MR_Integer) 0)));
#line 564 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 564 "prog_io_util.m"
                                      {
#line 564 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 0)));
#line 564 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 1)));
#line 564 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 2)));
#line 564 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 564 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 564 "prog_io_util.m"
                                          {
#line 564 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_59_59, (MR_Integer) 0)));
#line 564 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_60_60, (MR_String) "=") == 0);
#line 562 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 562 "prog_io_util.m"
                                              {
#line 564 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 564 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 564 "prog_io_util.m"
                                                  {
#line 564 "prog_io_util.m"
                                                    parse_tree__prog_io_util__FuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, (MR_Integer) 0)));
#line 564 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, (MR_Integer) 1)));
#line 564 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 564 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 564 "prog_io_util.m"
                                                      {
#line 564 "prog_io_util.m"
                                                        parse_tree__prog_io_util__RetModeTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 0)));
#line 564 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 1)));
#line 564 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 562 "prog_io_util.m"
                                                          {
#line 565 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 565 "prog_io_util.m"
                                                              {
#line 565 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                                                parse_tree__prog_io_util__ArgModesTerms_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 1)));
#line 565 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 2)));
#line 565 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 565 "prog_io_util.m"
                                                                  {
#line 565 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_64_64, (MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_65_65, (MR_String) "func") == 0);
#line 565 "prog_io_util.m"
                                                                  }
#line 565 "prog_io_util.m"
                                                              }
#line 562 "prog_io_util.m"
                                                          }
#line 564 "prog_io_util.m"
                                                      }
#line 564 "prog_io_util.m"
                                                  }
#line 562 "prog_io_util.m"
                                              }
#line 564 "prog_io_util.m"
                                          }
#line 564 "prog_io_util.m"
                                      }
#line 562 "prog_io_util.m"
                                  }
#line 563 "prog_io_util.m"
                              }
#line 563 "prog_io_util.m"
                          }
#line 562 "prog_io_util.m"
                      }
#line 562 "prog_io_util.m"
                  }
#line 576 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 567 "prog_io_util.m"
                  {
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_159_159;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes0_30;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetMode_31;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__FuncInstInfo_32;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_66_66;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_67_67;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_69_69;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_70_70;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_71_71;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_72_72;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_73_73;
#line 567 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__DetString_106;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Detism_107;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes_108;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Inst_109;
#line 567 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_29_29;

#line 567 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_152)) == (MR_mktag((MR_Integer) 0)));
#line 567 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 567 "prog_io_util.m"
                      {
#line 567 "prog_io_util.m"
                        parse_tree__prog_io_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 0)));
#line 567 "prog_io_util.m"
                        parse_tree__prog_io_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 1)));
#line 567 "prog_io_util.m"
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 2)));
#line 567 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 567 "prog_io_util.m"
                          {
#line 567 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_66_66)) == (MR_mktag((MR_Integer) 0)));
#line 567 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 567 "prog_io_util.m"
                              {
#line 567 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_106 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_66_66, (MR_Integer) 0)));
#line 568 "prog_io_util.m"
                                {
#line 568 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_106, &parse_tree__prog_io_util__Detism_107);
                                }
#line 567 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 567 "prog_io_util.m"
                                  {
#line 569 "prog_io_util.m"
                                    {
#line 569 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_153, &parse_tree__prog_io_util__ArgModes0_30);
                                    }
#line 567 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 567 "prog_io_util.m"
                                      {
#line 570 "prog_io_util.m"
                                        {
#line 570 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__RetModeTerm_26, &parse_tree__prog_io_util__RetMode_31);
                                        }
#line 567 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 567 "prog_io_util.m"
                                          {
#line 571 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11586 "parse_tree.prog_io_util.c"
                                            parse_tree__prog_io_util__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 571 "prog_io_util.m"
                                            {
#line 571 "prog_io_util.m"
                                              parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_31));
#line 571 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 571 "prog_io_util.m"
                                            }
#line 571 "prog_io_util.m"
                                            {
#line 571 "prog_io_util.m"
                                              mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_159_159, parse_tree__prog_io_util__ArgModes0_30, parse_tree__prog_io_util__V_68_68, &parse_tree__prog_io_util__ArgModes_108);
                                            }
#line 572 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_70_70 = (MR_Integer) 1;
#line 572 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_72_72 = (MR_Integer) 0;
#line 572 "prog_io_util.m"
                                            {
#line 572 "prog_io_util.m"
                                              parse_tree__prog_io_util__FuncInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 572 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 572 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_108));
#line 572 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 2) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 572 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_107));
#line 572 "prog_io_util.m"
                                            }
#line 574 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_32);
#line 574 "prog_io_util.m"
                                            {
#line 574 "prog_io_util.m"
                                              parse_tree__prog_io_util__Inst_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 574 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 1) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 574 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 2) = ((MR_Box) (parse_tree__prog_io_util__V_73_73));
#line 574 "prog_io_util.m"
                                            }
#line 575 "prog_io_util.m"
                                            {
#line 575 "prog_io_util.m"
                                              MR_Word base;
#line 575 "prog_io_util.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "prog_io_util.m"
                                              *parse_tree__prog_io_util__Mode_6 = base;
#line 575 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_109));
#line 575 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_109));
#line 575 "prog_io_util.m"
                                            }
#line 575 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 567 "prog_io_util.m"
                                          }
#line 567 "prog_io_util.m"
                                      }
#line 567 "prog_io_util.m"
                                  }
#line 567 "prog_io_util.m"
                              }
#line 567 "prog_io_util.m"
                          }
#line 567 "prog_io_util.m"
                      }
#line 567 "prog_io_util.m"
                  }
#line 576 "prog_io_util.m"
                else
#line 596 "prog_io_util.m"
                  {
#line 596 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__DetTerm_138;
#line 596 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModesTerms_139;
#line 585 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_75_75;
#line 585 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_76_76;
#line 585 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_77_77;
#line 585 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_78_78;
#line 585 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_79_79;
#line 585 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__PredTerm_110;
#line 587 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_33_33;

#line 585 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 585 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 585 "prog_io_util.m"
                      {
#line 585 "prog_io_util.m"
                        parse_tree__prog_io_util__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 585 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_75_75, (MR_String) "is") == 0);
#line 585 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 585 "prog_io_util.m"
                          {
#line 586 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 586 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 586 "prog_io_util.m"
                              {
#line 586 "prog_io_util.m"
                                parse_tree__prog_io_util__PredTerm_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 586 "prog_io_util.m"
                                parse_tree__prog_io_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 586 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 586 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 586 "prog_io_util.m"
                                  {
#line 586 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetTerm_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, (MR_Integer) 0)));
#line 586 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, (MR_Integer) 1)));
#line 586 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 585 "prog_io_util.m"
                                      {
#line 587 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_110)) == (MR_mktag((MR_Integer) 0)));
#line 587 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 587 "prog_io_util.m"
                                          {
#line 587 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 0)));
#line 587 "prog_io_util.m"
                                            parse_tree__prog_io_util__ArgModesTerms_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 1)));
#line 587 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 2)));
#line 587 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_78_78)) == (MR_mktag((MR_Integer) 0)));
#line 587 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 587 "prog_io_util.m"
                                              {
#line 587 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_78_78, (MR_Integer) 0)));
#line 587 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_79_79, (MR_String) "any_pred") == 0);
#line 587 "prog_io_util.m"
                                              }
#line 587 "prog_io_util.m"
                                          }
#line 585 "prog_io_util.m"
                                      }
#line 586 "prog_io_util.m"
                                  }
#line 586 "prog_io_util.m"
                              }
#line 585 "prog_io_util.m"
                          }
#line 585 "prog_io_util.m"
                      }
#line 596 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 589 "prog_io_util.m"
                      {
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_80_80;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_81_81;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_82_82;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_83_83;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_84_84;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_85_85;
#line 589 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__DetString_111;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Detism_112;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes_113;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__PredInstInfo_114;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Inst_115;
#line 589 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_34_34;

#line 589 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_138)) == (MR_mktag((MR_Integer) 0)));
#line 589 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 589 "prog_io_util.m"
                          {
#line 589 "prog_io_util.m"
                            parse_tree__prog_io_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 0)));
#line 589 "prog_io_util.m"
                            parse_tree__prog_io_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 1)));
#line 589 "prog_io_util.m"
                            parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 2)));
#line 589 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 589 "prog_io_util.m"
                              {
#line 589 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_80_80)) == (MR_mktag((MR_Integer) 0)));
#line 589 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 589 "prog_io_util.m"
                                  {
#line 589 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetString_111 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_80_80, (MR_Integer) 0)));
#line 590 "prog_io_util.m"
                                    {
#line 590 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_111, &parse_tree__prog_io_util__Detism_112);
                                    }
#line 589 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 589 "prog_io_util.m"
                                      {
#line 591 "prog_io_util.m"
                                        {
#line 591 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_139, &parse_tree__prog_io_util__ArgModes_113);
                                        }
#line 589 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 589 "prog_io_util.m"
                                          {
#line 592 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_82_82 = (MR_Integer) 0;
#line 592 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 594 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_84_84 = (MR_Integer) 0;
#line 592 "prog_io_util.m"
                                            {
#line 592 "prog_io_util.m"
                                              parse_tree__prog_io_util__PredInstInfo_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 592 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 0) = ((MR_Box) (parse_tree__prog_io_util__V_82_82));
#line 592 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_113));
#line 592 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 2) = ((MR_Box) (parse_tree__prog_io_util__V_83_83));
#line 592 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_112));
#line 592 "prog_io_util.m"
                                            }
#line 594 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_114);
#line 594 "prog_io_util.m"
                                            {
#line 594 "prog_io_util.m"
                                              parse_tree__prog_io_util__Inst_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_115, 0) = ((MR_Box) (parse_tree__prog_io_util__V_84_84));
#line 594 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_115, 1) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 594 "prog_io_util.m"
                                            }
#line 595 "prog_io_util.m"
                                            {
#line 595 "prog_io_util.m"
                                              MR_Word base;
#line 595 "prog_io_util.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "prog_io_util.m"
                                              *parse_tree__prog_io_util__Mode_6 = base;
#line 595 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_115));
#line 595 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_115));
#line 595 "prog_io_util.m"
                                            }
#line 595 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 589 "prog_io_util.m"
                                          }
#line 589 "prog_io_util.m"
                                      }
#line 589 "prog_io_util.m"
                                  }
#line 589 "prog_io_util.m"
                              }
#line 589 "prog_io_util.m"
                          }
#line 589 "prog_io_util.m"
                      }
#line 596 "prog_io_util.m"
                    else
#line 619 "prog_io_util.m"
                      {
#line 619 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_125;
#line 619 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModesTerms_126;
#line 619 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__RetModeTerm_133;
#line 605 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_87_87;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_88_88;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_89_89;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_90_90;
#line 605 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_91_91;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_92_92;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_93_93;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_94_94;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_95_95;
#line 605 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_96_96;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__EqTerm_116;
#line 605 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__FuncTerm_117;
#line 607 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_35_35;
#line 608 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;

#line 605 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 605 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 605 "prog_io_util.m"
                          {
#line 605 "prog_io_util.m"
                            parse_tree__prog_io_util__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 605 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_87_87, (MR_String) "is") == 0);
#line 605 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 605 "prog_io_util.m"
                              {
#line 606 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 606 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 606 "prog_io_util.m"
                                  {
#line 606 "prog_io_util.m"
                                    parse_tree__prog_io_util__EqTerm_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 606 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 606 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 606 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 606 "prog_io_util.m"
                                      {
#line 606 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetTerm_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_88_88, (MR_Integer) 0)));
#line 606 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_88_88, (MR_Integer) 1)));
#line 606 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 605 "prog_io_util.m"
                                          {
#line 607 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_116)) == (MR_mktag((MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 607 "prog_io_util.m"
                                              {
#line 607 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 2)));
#line 607 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_90_90)) == (MR_mktag((MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 607 "prog_io_util.m"
                                                  {
#line 607 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_90_90, (MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_91_91, (MR_String) "=") == 0);
#line 605 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 605 "prog_io_util.m"
                                                      {
#line 607 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 607 "prog_io_util.m"
                                                          {
#line 607 "prog_io_util.m"
                                                            parse_tree__prog_io_util__FuncTerm_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_92_92, (MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_92_92, (MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 607 "prog_io_util.m"
                                                              {
#line 607 "prog_io_util.m"
                                                                parse_tree__prog_io_util__RetModeTerm_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_94_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 605 "prog_io_util.m"
                                                                  {
#line 608 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_117)) == (MR_mktag((MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 608 "prog_io_util.m"
                                                                      {
#line 608 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__ArgModesTerms_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 1)));
#line 608 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 2)));
#line 608 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_95_95)) == (MR_mktag((MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                                        if (parse_tree__prog_io_util__succeeded)
#line 608 "prog_io_util.m"
                                                                          {
#line 608 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_95_95, (MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_96_96, (MR_String) "any_func") == 0);
#line 608 "prog_io_util.m"
                                                                          }
#line 608 "prog_io_util.m"
                                                                      }
#line 605 "prog_io_util.m"
                                                                  }
#line 607 "prog_io_util.m"
                                                              }
#line 607 "prog_io_util.m"
                                                          }
#line 605 "prog_io_util.m"
                                                      }
#line 607 "prog_io_util.m"
                                                  }
#line 607 "prog_io_util.m"
                                              }
#line 605 "prog_io_util.m"
                                          }
#line 606 "prog_io_util.m"
                                      }
#line 606 "prog_io_util.m"
                                  }
#line 605 "prog_io_util.m"
                              }
#line 605 "prog_io_util.m"
                          }
#line 619 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 610 "prog_io_util.m"
                          {
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeCtorInfo_160_160;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_97_97;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_98_98;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_99_99;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_100_100;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_101_101;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_102_102;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_103_103;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_104_104;
#line 610 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__DetString_118;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Detism_119;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes_120;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Inst_121;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes0_122;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__RetMode_123;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__FuncInstInfo_124;
#line 610 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_37_37;

#line 610 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_125)) == (MR_mktag((MR_Integer) 0)));
#line 610 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 610 "prog_io_util.m"
                              {
#line 610 "prog_io_util.m"
                                parse_tree__prog_io_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 0)));
#line 610 "prog_io_util.m"
                                parse_tree__prog_io_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 1)));
#line 610 "prog_io_util.m"
                                parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 2)));
#line 610 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 610 "prog_io_util.m"
                                  {
#line 610 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 610 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 610 "prog_io_util.m"
                                      {
#line 610 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetString_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_97_97, (MR_Integer) 0)));
#line 611 "prog_io_util.m"
                                        {
#line 611 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_118, &parse_tree__prog_io_util__Detism_119);
                                        }
#line 610 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 610 "prog_io_util.m"
                                          {
#line 612 "prog_io_util.m"
                                            {
#line 612 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_126, &parse_tree__prog_io_util__ArgModes0_122);
                                            }
#line 610 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 610 "prog_io_util.m"
                                              {
#line 613 "prog_io_util.m"
                                                {
#line 613 "prog_io_util.m"
                                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__RetModeTerm_133, &parse_tree__prog_io_util__RetMode_123);
                                                }
#line 610 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 610 "prog_io_util.m"
                                                  {
#line 614 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12172 "parse_tree.prog_io_util.c"
                                                    parse_tree__prog_io_util__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 614 "prog_io_util.m"
                                                    {
#line 614 "prog_io_util.m"
                                                      parse_tree__prog_io_util__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_123));
#line 614 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_99_99, 1) = ((MR_Box) (parse_tree__prog_io_util__V_100_100));
#line 614 "prog_io_util.m"
                                                    }
#line 614 "prog_io_util.m"
                                                    {
#line 614 "prog_io_util.m"
                                                      mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_160_160, parse_tree__prog_io_util__ArgModes0_122, parse_tree__prog_io_util__V_99_99, &parse_tree__prog_io_util__ArgModes_120);
                                                    }
#line 615 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_101_101 = (MR_Integer) 1;
#line 615 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_102_102 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_103_103 = (MR_Integer) 0;
#line 615 "prog_io_util.m"
                                                    {
#line 615 "prog_io_util.m"
                                                      parse_tree__prog_io_util__FuncInstInfo_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 615 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 0) = ((MR_Box) (parse_tree__prog_io_util__V_101_101));
#line 615 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_120));
#line 615 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 2) = ((MR_Box) (parse_tree__prog_io_util__V_102_102));
#line 615 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_119));
#line 615 "prog_io_util.m"
                                                    }
#line 617 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_124);
#line 617 "prog_io_util.m"
                                                    {
#line 617 "prog_io_util.m"
                                                      parse_tree__prog_io_util__Inst_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_121, 0) = ((MR_Box) (parse_tree__prog_io_util__V_103_103));
#line 617 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_121, 1) = ((MR_Box) (parse_tree__prog_io_util__V_104_104));
#line 617 "prog_io_util.m"
                                                    }
#line 618 "prog_io_util.m"
                                                    {
#line 618 "prog_io_util.m"
                                                      MR_Word base;
#line 618 "prog_io_util.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_io_util.m"
                                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 618 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_121));
#line 618 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_121));
#line 618 "prog_io_util.m"
                                                    }
#line 618 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 610 "prog_io_util.m"
                                                  }
#line 610 "prog_io_util.m"
                                              }
#line 610 "prog_io_util.m"
                                          }
#line 610 "prog_io_util.m"
                                      }
#line 610 "prog_io_util.m"
                                  }
#line 610 "prog_io_util.m"
                              }
#line 610 "prog_io_util.m"
                          }
#line 619 "prog_io_util.m"
                        else
#line 623 "prog_io_util.m"
                          {
#line 623 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Name_38;
#line 623 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Args_39;
#line 623 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ConvertedArgs_40;

#line 622 "prog_io_util.m"
                            {
#line 622 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_38, &parse_tree__prog_io_util__Args_39);
                            }
#line 623 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 623 "prog_io_util.m"
                              {
#line 624 "prog_io_util.m"
                                {
#line 624 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_39, &parse_tree__prog_io_util__ConvertedArgs_40);
                                }
#line 623 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 623 "prog_io_util.m"
                                  {
#line 625 "prog_io_util.m"
                                    {
#line 625 "prog_io_util.m"
                                      MR_Word base;
#line 625 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 625 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_38));
#line 625 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_40));
#line 625 "prog_io_util.m"
                                    }
#line 625 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 623 "prog_io_util.m"
                                  }
#line 623 "prog_io_util.m"
                              }
#line 623 "prog_io_util.m"
                          }
#line 619 "prog_io_util.m"
                      }
#line 596 "prog_io_util.m"
                  }
#line 576 "prog_io_util.m"
              }
#line 553 "prog_io_util.m"
          }
#line 525 "prog_io_util.m"
      }
#line 524 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 524 "prog_io_util.m"
  }
#line 145 "prog_io_util.m"
}

#line 142 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_list_3_p_0(
#line 142 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 142 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 142 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 142 "prog_io_util.m"
{
#line 519 "prog_io_util.m"
  {
#line 519 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 519 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "prog_io_util.m"
      {
#line 519 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 519 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 519 "prog_io_util.m"
      }
#line 519 "prog_io_util.m"
    else
#line 520 "prog_io_util.m"
      {
#line 520 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 520 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 520 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 520 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 521 "prog_io_util.m"
        {
#line 521 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 520 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 520 "prog_io_util.m"
          {
#line 522 "prog_io_util.m"
            {
#line 522 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 520 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 520 "prog_io_util.m"
              {
#line 520 "prog_io_util.m"
                {
#line 520 "prog_io_util.m"
                  MR_Word base;
#line 520 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 520 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 520 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 520 "prog_io_util.m"
                }
#line 520 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 520 "prog_io_util.m"
              }
#line 520 "prog_io_util.m"
          }
#line 520 "prog_io_util.m"
      }
#line 519 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 519 "prog_io_util.m"
  }
#line 142 "prog_io_util.m"
}

#line 136 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_purity_annotation_3_p_0(
#line 136 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 136 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_4,
#line 136 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_5,
#line 136 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_6)
#line 136 "prog_io_util.m"
{
#line 446 "prog_io_util.m"
  {
#line 446 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
#line 446 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_8;
#line 446 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Purity0_10;
#line 441 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PurityName_7;
#line 441 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 441 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 441 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 441 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 441 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 441 "prog_io_util.m"
      {
#line 441 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
#line 441 "prog_io_util.m"
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
#line 441 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
#line 441 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 441 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 441 "prog_io_util.m"
          {
#line 441 "prog_io_util.m"
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
#line 441 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 441 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 441 "prog_io_util.m"
              {
#line 441 "prog_io_util.m"
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
#line 441 "prog_io_util.m"
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
#line 441 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 442 "prog_io_util.m"
                  {
#line 442 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
#line 441 "prog_io_util.m"
              }
#line 441 "prog_io_util.m"
          }
#line 441 "prog_io_util.m"
      }
#line 446 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 444 "prog_io_util.m"
      {
#line 444 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
#line 445 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
#line 444 "prog_io_util.m"
      }
#line 446 "prog_io_util.m"
    else
#line 447 "prog_io_util.m"
      {
#line 447 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
#line 448 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
#line 447 "prog_io_util.m"
      }
#line 446 "prog_io_util.m"
  }
#line 136 "prog_io_util.m"
}

#line 134 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__unparse_type_2_p_0(
#line 134 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 134 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 134 "prog_io_util.m"
{
#line 451 "prog_io_util.m"
  {
#line 451 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 451 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 456 "prog_io_util.m"
      {
#line 456 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__BuiltinType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 456 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_14;
#line 456 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_15;
#line 456 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;

#line 457 "prog_io_util.m"
        {
#line 457 "prog_io_util.m"
          parse_tree__prog_io_util__Context_14 = mercury__term__context_init_0_f_0();
        }
#line 458 "prog_io_util.m"
        {
#line 458 "prog_io_util.m"
          parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_12, &parse_tree__prog_io_util__Name_15);
        }
#line 459 "prog_io_util.m"
        {
#line 459 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_15));
#line 459 "prog_io_util.m"
        }
#line 459 "prog_io_util.m"
        {
#line 459 "prog_io_util.m"
          MR_Word base;
#line 459 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 459 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 459 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_14));
#line 459 "prog_io_util.m"
        }
#line 456 "prog_io_util.m"
      }
#line 451 "prog_io_util.m"
    else
#line 451 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 453 "prog_io_util.m"
        {
#line 453 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 453 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTerms_11;
#line 453 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 454 "prog_io_util.m"
          {
#line 454 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_8, &parse_tree__prog_io_util__ArgTerms_11);
          }
#line 455 "prog_io_util.m"
          {
#line 455 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_11, parse_tree__prog_io_util__HeadVar__2_2);
#line 455 "prog_io_util.m"
            return;
          }
#line 453 "prog_io_util.m"
        }
#line 451 "prog_io_util.m"
      else
#line 451 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 451 "prog_io_util.m"
          {
#line 451 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 451 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Var_5;
#line 451 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;
#line 451 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 451 "prog_io_util.m"
            {
#line 451 "prog_io_util.m"
              parse_tree__prog_io_util__V_6_6 = mercury__term__context_init_0_f_0();
            }
#line 452 "prog_io_util.m"
            {
#line 452 "prog_io_util.m"
              parse_tree__prog_io_util__Var_5 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_3);
            }
#line 451 "prog_io_util.m"
            {
#line 451 "prog_io_util.m"
              MR_Word base;
#line 451 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 451 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_5));
#line 451 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_6_6));
#line 451 "prog_io_util.m"
            }
#line 451 "prog_io_util.m"
          }
#line 451 "prog_io_util.m"
        else
#line 451 "prog_io_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 479 "prog_io_util.m"
            {
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_51;
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Var_52;
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_53;
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_56_56;
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57;
#line 479 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));

#line 480 "prog_io_util.m"
              {
#line 480 "prog_io_util.m"
                parse_tree__prog_io_util__Context_51 = mercury__term__context_init_0_f_0();
              }
#line 481 "prog_io_util.m"
              {
#line 481 "prog_io_util.m"
                parse_tree__prog_io_util__Var_52 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_47);
              }
#line 482 "prog_io_util.m"
              {
#line 482 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_53);
              }
#line 484 "prog_io_util.m"
              {
#line 484 "prog_io_util.m"
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_52));
#line 484 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 484 "prog_io_util.m"
              }
#line 483 "prog_io_util.m"
              {
#line 483 "prog_io_util.m"
                parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 483 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_53));
#line 483 "prog_io_util.m"
              }
#line 483 "prog_io_util.m"
              {
#line 483 "prog_io_util.m"
                MR_Word base;
#line 483 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 483 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 483 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
#line 483 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 483 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 483 "prog_io_util.m"
              }
#line 479 "prog_io_util.m"
            }
#line 451 "prog_io_util.m"
          else
#line 451 "prog_io_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 460 "prog_io_util.m"
              {
#line 460 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 460 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 460 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Purity_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));
#line 460 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Context_23;
#line 460 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgTerms_24;
#line 460 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Term2_29;

#line 461 "prog_io_util.m"
                {
#line 461 "prog_io_util.m"
                  parse_tree__prog_io_util__Context_23 = mercury__term__context_init_0_f_0();
                }
#line 462 "prog_io_util.m"
                {
#line 462 "prog_io_util.m"
                  parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_18, &parse_tree__prog_io_util__ArgTerms_24);
                }
#line 469 "prog_io_util.m"
                if ((parse_tree__prog_io_util__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "prog_io_util.m"
                  {
#line 471 "prog_io_util.m"
                    {
#line 471 "prog_io_util.m"
                      parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
#line 471 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 471 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 471 "prog_io_util.m"
                    }
#line 470 "prog_io_util.m"
                  }
#line 469 "prog_io_util.m"
                else
#line 464 "prog_io_util.m"
                  {
#line 464 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Ret_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_19, (MR_Integer) 0)));
#line 464 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Term1_27;
#line 464 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetTerm_28;
#line 464 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_36_36;
#line 464 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_37_37;

#line 465 "prog_io_util.m"
                    {
#line 465 "prog_io_util.m"
                      parse_tree__prog_io_util__Term1_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
#line 465 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 465 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 465 "prog_io_util.m"
                    }
#line 467 "prog_io_util.m"
                    {
#line 467 "prog_io_util.m"
                      parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_25, &parse_tree__prog_io_util__RetTerm_28);
                    }
#line 468 "prog_io_util.m"
                    {
#line 468 "prog_io_util.m"
                      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_28));
#line 468 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "prog_io_util.m"
                    }
#line 468 "prog_io_util.m"
                    {
#line 468 "prog_io_util.m"
                      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_27));
#line 468 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 468 "prog_io_util.m"
                    }
#line 468 "prog_io_util.m"
                    {
#line 468 "prog_io_util.m"
                      parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 468 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
#line 468 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 468 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 468 "prog_io_util.m"
                    }
#line 464 "prog_io_util.m"
                  }
#line 511 "prog_io_util.m"
                if ((parse_tree__prog_io_util__Purity_20 == (MR_Integer) 2))
#line 515 "prog_io_util.m"
                  {
#line 515 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_80;
#line 515 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_83_83;

#line 516 "prog_io_util.m"
                    {
#line 516 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_80 = mercury__term__context_init_0_f_0();
                    }
#line 517 "prog_io_util.m"
                    {
#line 517 "prog_io_util.m"
                      parse_tree__prog_io_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 517 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "prog_io_util.m"
                    }
#line 517 "prog_io_util.m"
                    {
#line 517 "prog_io_util.m"
                      MR_Word base;
#line 517 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 517 "prog_io_util.m"
                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 517 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
#line 517 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_83_83));
#line 517 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_80));
#line 517 "prog_io_util.m"
                    }
#line 515 "prog_io_util.m"
                  }
#line 511 "prog_io_util.m"
                else
#line 511 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Purity_20 == (MR_Integer) 0))
#line 511 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = parse_tree__prog_io_util__Term2_29;
#line 511 "prog_io_util.m"
                  else
#line 512 "prog_io_util.m"
                    {
#line 512 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Context_73;
#line 512 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_76_76;

#line 513 "prog_io_util.m"
                      {
#line 513 "prog_io_util.m"
                        parse_tree__prog_io_util__Context_73 = mercury__term__context_init_0_f_0();
                      }
#line 514 "prog_io_util.m"
                      {
#line 514 "prog_io_util.m"
                        parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 514 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "prog_io_util.m"
                      }
#line 514 "prog_io_util.m"
                      {
#line 514 "prog_io_util.m"
                        MR_Word base;
#line 514 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 514 "prog_io_util.m"
                        *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 514 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
#line 514 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 514 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_73));
#line 514 "prog_io_util.m"
                      }
#line 512 "prog_io_util.m"
                    }
#line 460 "prog_io_util.m"
              }
#line 451 "prog_io_util.m"
            else
#line 451 "prog_io_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 485 "prog_io_util.m"
                {
#line 486 "prog_io_util.m"
                  {
#line 486 "prog_io_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
#line 486 "prog_io_util.m"
                    return;
                  }
#line 485 "prog_io_util.m"
                }
#line 451 "prog_io_util.m"
              else
#line 475 "prog_io_util.m"
                {
#line 475 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 475 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Context_43;
#line 475 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__ArgTerms_44;
#line 475 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 476 "prog_io_util.m"
                  {
#line 476 "prog_io_util.m"
                    parse_tree__prog_io_util__Context_43 = mercury__term__context_init_0_f_0();
                  }
#line 477 "prog_io_util.m"
                  {
#line 477 "prog_io_util.m"
                    parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_40, &parse_tree__prog_io_util__ArgTerms_44);
                  }
#line 478 "prog_io_util.m"
                  {
#line 478 "prog_io_util.m"
                    MR_Word base;
#line 478 "prog_io_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 478 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 478 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
#line 478 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_44));
#line 478 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_43));
#line 478 "prog_io_util.m"
                  }
#line 475 "prog_io_util.m"
                }
#line 451 "prog_io_util.m"
  }
#line 134 "prog_io_util.m"
}

#line 131 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_types_4_p_0(
#line 131 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Terms_5,
#line 131 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 131 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 131 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 131 "prog_io_util.m"
{
#line 396 "prog_io_util.m"
  {
#line 396 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 397 "prog_io_util.m"
    {
#line 397 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_2_5_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__Result_8);
#line 397 "prog_io_util.m"
      return;
    }
#line 396 "prog_io_util.m"
  }
#line 131 "prog_io_util.m"
}

#line 129 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_types_2_p_0(
#line 129 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 129 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Types_4)
#line 129 "prog_io_util.m"
{
#line 389 "prog_io_util.m"
  {
#line 389 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 389 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 389 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 392 "prog_io_util.m"
    {
#line 392 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 394 "prog_io_util.m"
    {
#line 394 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 394 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 394 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 394 "prog_io_util.m"
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 389 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 389 "prog_io_util.m"
  }
#line 129 "prog_io_util.m"
}

#line 126 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_type_4_p_0(
#line 126 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 126 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 126 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 126 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 126 "prog_io_util.m"
{
#line 339 "prog_io_util.m"
  {
#line 339 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 1)));
#line 339 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Var0_9;
#line 335 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 335 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 335 "prog_io_util.m"
      {
#line 335 "prog_io_util.m"
        parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 335 "prog_io_util.m"
        parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 337 "prog_io_util.m"
        {
#line 337 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_11;
#line 337 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_30_30;

#line 337 "prog_io_util.m"
          {
#line 337 "prog_io_util.m"
            mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
          }
#line 338 "prog_io_util.m"
          {
#line 338 "prog_io_util.m"
            parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
#line 338 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "prog_io_util.m"
          }
#line 338 "prog_io_util.m"
          {
#line 338 "prog_io_util.m"
            MR_Word base;
#line 338 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 338 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 338 "prog_io_util.m"
          }
#line 337 "prog_io_util.m"
        }
#line 335 "prog_io_util.m"
      }
#line 335 "prog_io_util.m"
    else
#line 343 "prog_io_util.m"
      {
#line 343 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__BuiltinType_12;
#line 416 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_89;
#line 416 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_91_91;
#line 416 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_92_92;
#line 417 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_90_90;

#line 417 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 417 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 417 "prog_io_util.m"
          {
#line 417 "prog_io_util.m"
            parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 417 "prog_io_util.m"
            parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 417 "prog_io_util.m"
            parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 417 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 416 "prog_io_util.m"
              {
#line 417 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 417 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 417 "prog_io_util.m"
                  {
#line 417 "prog_io_util.m"
                    parse_tree__prog_io_util__Name_89 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_91_91, (MR_Integer) 0)));
#line 418 "prog_io_util.m"
                    {
#line 418 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_io_util__BuiltinType_12, parse_tree__prog_io_util__Name_89);
                    }
#line 417 "prog_io_util.m"
                  }
#line 416 "prog_io_util.m"
              }
#line 417 "prog_io_util.m"
          }
#line 343 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 342 "prog_io_util.m"
          {
#line 342 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_32_32;

#line 342 "prog_io_util.m"
            {
#line 342 "prog_io_util.m"
              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "prog_io_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__BuiltinType_12));
#line 342 "prog_io_util.m"
            }
#line 342 "prog_io_util.m"
            {
#line 342 "prog_io_util.m"
              MR_Word base;
#line 342 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = base;
#line 342 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 342 "prog_io_util.m"
            }
#line 342 "prog_io_util.m"
          }
#line 343 "prog_io_util.m"
        else
#line 347 "prog_io_util.m"
          {
#line 347 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HOArgs_13;
#line 347 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeRet_14;
#line 347 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Purity_15;

#line 344 "prog_io_util.m"
            {
#line 344 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_higher_order_type_5_p_0(parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__HOArgs_13, &parse_tree__prog_io_util__MaybeRet_14, &parse_tree__prog_io_util__Purity_15);
            }
#line 347 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 346 "prog_io_util.m"
              {
#line 346 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 346 "prog_io_util.m"
                {
#line 346 "prog_io_util.m"
                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 346 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__HOArgs_13));
#line 346 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 2) = ((MR_Box) (parse_tree__prog_io_util__MaybeRet_14));
#line 346 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_15));
#line 346 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 4) = NULL;
#line 346 "prog_io_util.m"
                }
#line 346 "prog_io_util.m"
                {
#line 346 "prog_io_util.m"
                  MR_Word base;
#line 346 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 346 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 346 "prog_io_util.m"
                }
#line 346 "prog_io_util.m"
              }
#line 347 "prog_io_util.m"
            else
#line 358 "prog_io_util.m"
              {
#line 358 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 348 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 348 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_35_35;
#line 348 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18;

#line 348 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 348 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 348 "prog_io_util.m"
                  {
#line 348 "prog_io_util.m"
                    parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 348 "prog_io_util.m"
                    parse_tree__prog_io_util__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 348 "prog_io_util.m"
                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 348 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 348 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 348 "prog_io_util.m"
                      {
#line 348 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 348 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_35_35, (MR_String) "{}") == 0);
#line 348 "prog_io_util.m"
                      }
#line 348 "prog_io_util.m"
                  }
#line 358 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 350 "prog_io_util.m"
                  {
#line 350 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgsResult_19;

#line 350 "prog_io_util.m"
                    {
#line 350 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_17, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_19);
                    }
#line 354 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_19)) == (MR_mktag((MR_Integer) 0))))
#line 356 "prog_io_util.m"
                      *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_19;
#line 354 "prog_io_util.m"
                    else
#line 352 "prog_io_util.m"
                      {
#line 352 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_19, (MR_Integer) 0)));
#line 352 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;

#line 353 "prog_io_util.m"
                        {
#line 353 "prog_io_util.m"
                          parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 353 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_20));
#line 353 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_io_util.m"
                        }
#line 353 "prog_io_util.m"
                        {
#line 353 "prog_io_util.m"
                          MR_Word base;
#line 353 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_util.m"
                          *parse_tree__prog_io_util__Result_8 = base;
#line 353 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 353 "prog_io_util.m"
                        }
#line 352 "prog_io_util.m"
                      }
#line 350 "prog_io_util.m"
                  }
#line 358 "prog_io_util.m"
                else
#line 369 "prog_io_util.m"
                  {
#line 369 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_23;
#line 361 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 361 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_39_39;
#line 361 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_22_22;

#line 361 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 361 "prog_io_util.m"
                      {
#line 361 "prog_io_util.m"
                        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 361 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 361 "prog_io_util.m"
                        parse_tree__prog_io_util__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 361 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 361 "prog_io_util.m"
                          {
#line 361 "prog_io_util.m"
                            parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 361 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "") == 0);
#line 361 "prog_io_util.m"
                          }
#line 361 "prog_io_util.m"
                      }
#line 369 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 363 "prog_io_util.m"
                      {
#line 363 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__TermStr_24;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Pieces_25;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_26;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_40_40;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_42_42;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_45_45;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_46_46;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_55_55;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_56_56;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_57_57;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_58_58;
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_61_61;

#line 363 "prog_io_util.m"
                        {
#line 363 "prog_io_util.m"
                          parse_tree__prog_io_util__TermStr_24 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                        }
#line 365 "prog_io_util.m"
                        {
#line 365 "prog_io_util.m"
                          parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 365 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_24));
#line 365 "prog_io_util.m"
                        }
#line 365 "prog_io_util.m"
                        {
#line 365 "prog_io_util.m"
                          parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 365 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 365 "prog_io_util.m"
                        }
#line 364 "prog_io_util.m"
                        {
#line 364 "prog_io_util.m"
                          parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[16])));
#line 364 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 364 "prog_io_util.m"
                        }
#line 364 "prog_io_util.m"
                        {
#line 364 "prog_io_util.m"
                          parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
#line 364 "prog_io_util.m"
                        }
#line 364 "prog_io_util.m"
                        {
#line 364 "prog_io_util.m"
                          parse_tree__prog_io_util__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_40_40);
                        }
#line 367 "prog_io_util.m"
                        {
#line 367 "prog_io_util.m"
                          parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_25));
#line 367 "prog_io_util.m"
                        }
#line 367 "prog_io_util.m"
                        {
#line 367 "prog_io_util.m"
                          parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "prog_io_util.m"
                        }
#line 367 "prog_io_util.m"
                        {
#line 367 "prog_io_util.m"
                          parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 367 "prog_io_util.m"
                        }
#line 366 "prog_io_util.m"
                        {
#line 366 "prog_io_util.m"
                          parse_tree__prog_io_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "prog_io_util.m"
                        }
#line 366 "prog_io_util.m"
                        {
#line 366 "prog_io_util.m"
                          parse_tree__prog_io_util__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_55_55));
#line 366 "prog_io_util.m"
                        }
#line 368 "prog_io_util.m"
                        {
#line 368 "prog_io_util.m"
                          parse_tree__prog_io_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "prog_io_util.m"
                        }
#line 368 "prog_io_util.m"
                        {
#line 368 "prog_io_util.m"
                          MR_Word base;
#line 368 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 368 "prog_io_util.m"
                          *parse_tree__prog_io_util__Result_8 = base;
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_61_61));
#line 368 "prog_io_util.m"
                        }
#line 363 "prog_io_util.m"
                      }
#line 369 "prog_io_util.m"
                    else
#line 372 "prog_io_util.m"
                      {
#line 372 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__NameResult_27;

#line 372 "prog_io_util.m"
                        {
#line 372 "prog_io_util.m"
                          parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_27);
                        }
#line 383 "prog_io_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_27)) == (MR_mktag((MR_Integer) 0))))
#line 384 "prog_io_util.m"
                          {
#line 384 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Specs_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));

#line 385 "prog_io_util.m"
                            {
#line 385 "prog_io_util.m"
                              MR_Word base;
#line 385 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 385 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = base;
#line 385 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_72));
#line 385 "prog_io_util.m"
                            }
#line 384 "prog_io_util.m"
                          }
#line 383 "prog_io_util.m"
                        else
#line 374 "prog_io_util.m"
                          {
#line 374 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));
#line 374 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 1)));
#line 374 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgsResult_69;

#line 375 "prog_io_util.m"
                            {
#line 375 "prog_io_util.m"
                              parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__ArgTerms_29, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_69);
                            }
#line 379 "prog_io_util.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_69)) == (MR_mktag((MR_Integer) 0))))
#line 381 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_69;
#line 379 "prog_io_util.m"
                            else
#line 377 "prog_io_util.m"
                              {
#line 377 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_63_63;
#line 377 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgTypes_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_69, (MR_Integer) 0)));

#line 378 "prog_io_util.m"
                                {
#line 378 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 378 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_28));
#line 378 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_65));
#line 378 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "prog_io_util.m"
                                }
#line 378 "prog_io_util.m"
                                {
#line 378 "prog_io_util.m"
                                  MR_Word base;
#line 378 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 378 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Result_8 = base;
#line 378 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 378 "prog_io_util.m"
                                }
#line 377 "prog_io_util.m"
                              }
#line 374 "prog_io_util.m"
                          }
#line 372 "prog_io_util.m"
                      }
#line 369 "prog_io_util.m"
                  }
#line 358 "prog_io_util.m"
              }
#line 347 "prog_io_util.m"
          }
#line 343 "prog_io_util.m"
      }
#line 339 "prog_io_util.m"
  }
#line 126 "prog_io_util.m"
}

#line 124 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_type_2_p_0(
#line 124 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 124 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Type_4)
#line 124 "prog_io_util.m"
{
#line 323 "prog_io_util.m"
  {
#line 323 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 323 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 323 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 326 "prog_io_util.m"
    {
#line 326 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 328 "prog_io_util.m"
    {
#line 328 "prog_io_util.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 328 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 328 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 328 "prog_io_util.m"
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 323 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 323 "prog_io_util.m"
  }
#line 124 "prog_io_util.m"
}

#line 120 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_general_5_p_0(
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_28,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__MaybeModuleName_6,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_7,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_8,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_9,
#line 120 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredAndArgsResult_10)
#line 120 "prog_io_util.m"
{
#line 294 "prog_io_util.m"
  {
#line 294 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 294 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
#line 294 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
#line 294 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
#line 294 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_18;
#line 301 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 301 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
#line 296 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 296 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_23_23;
#line 296 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 296 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 296 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 296 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 296 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 296 "prog_io_util.m"
      {
#line 296 "prog_io_util.m"
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
#line 296 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
#line 296 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
#line 296 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 296 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 296 "prog_io_util.m"
          {
#line 296 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
#line 296 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
#line 296 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 296 "prog_io_util.m"
              {
#line 296 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 296 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 296 "prog_io_util.m"
                  {
#line 296 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 296 "prog_io_util.m"
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
#line 297 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 297 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 297 "prog_io_util.m"
                      {
#line 297 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 297 "prog_io_util.m"
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
#line 297 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "prog_io_util.m"
                      }
#line 296 "prog_io_util.m"
                  }
#line 296 "prog_io_util.m"
              }
#line 296 "prog_io_util.m"
          }
#line 296 "prog_io_util.m"
      }
#line 301 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 299 "prog_io_util.m"
      {
#line 299 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 300 "prog_io_util.m"
        {
#line 300 "prog_io_util.m"
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
#line 300 "prog_io_util.m"
        }
#line 299 "prog_io_util.m"
      }
#line 301 "prog_io_util.m"
    else
#line 302 "prog_io_util.m"
      {
#line 302 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
#line 303 "prog_io_util.m"
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "prog_io_util.m"
      }
#line 305 "prog_io_util.m"
    {
#line 305 "prog_io_util.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
#line 310 "prog_io_util.m"
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "prog_io_util.m"
      {
#line 312 "prog_io_util.m"
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
#line 310 "prog_io_util.m"
    else
#line 307 "prog_io_util.m"
      {
#line 307 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

#line 308 "prog_io_util.m"
        {
#line 308 "prog_io_util.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
#line 307 "prog_io_util.m"
      }
#line 318 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
#line 320 "prog_io_util.m"
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
#line 318 "prog_io_util.m"
    else
#line 316 "prog_io_util.m"
      {
#line 316 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
#line 316 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
#line 316 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;

#line 317 "prog_io_util.m"
        {
#line 317 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
#line 317 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
#line 317 "prog_io_util.m"
        }
#line 317 "prog_io_util.m"
        {
#line 317 "prog_io_util.m"
          MR_Word base;
#line 317 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_io_util.m"
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
#line 317 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
#line 317 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 317 "prog_io_util.m"
        }
#line 316 "prog_io_util.m"
      }
#line 294 "prog_io_util.m"
  }
#line 120 "prog_io_util.m"
}

#line 117 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_4_p_0(
#line 117 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_20,
#line 117 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_5,
#line 117 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 117 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 117 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTerms_8)
#line 117 "prog_io_util.m"
{
#line 288 "prog_io_util.m"
  {
#line 288 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 288 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
#line 288 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 282 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 282 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 282 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 282 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 282 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

#line 282 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 282 "prog_io_util.m"
      {
#line 282 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
#line 282 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
#line 282 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
#line 282 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 282 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 282 "prog_io_util.m"
          {
#line 282 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 282 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
#line 282 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 282 "prog_io_util.m"
              {
#line 282 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 282 "prog_io_util.m"
                  {
#line 282 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 282 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 283 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 283 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 283 "prog_io_util.m"
                      {
#line 283 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 283 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 283 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "prog_io_util.m"
                      }
#line 282 "prog_io_util.m"
                  }
#line 282 "prog_io_util.m"
              }
#line 282 "prog_io_util.m"
          }
#line 282 "prog_io_util.m"
      }
#line 288 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 285 "prog_io_util.m"
      {
#line 285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
#line 285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
#line 285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
#line 287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

#line 285 "prog_io_util.m"
        {
#line 285 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
#line 285 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 285 "prog_io_util.m"
          {
#line 286 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 13999 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14001 "parse_tree.prog_io_util.c"
            {
#line 14003 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14005 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
#line 14007 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
#line 14009 "parse_tree.prog_io_util.c"
            }
#line 287 "prog_io_util.m"
            {
#line 287 "prog_io_util.m"
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
#line 287 "prog_io_util.m"
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
#line 287 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 285 "prog_io_util.m"
          }
#line 285 "prog_io_util.m"
      }
#line 288 "prog_io_util.m"
    else
#line 289 "prog_io_util.m"
      {
#line 289 "prog_io_util.m"
        {
#line 289 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
#line 289 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 289 "prog_io_util.m"
          {
#line 290 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 290 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 289 "prog_io_util.m"
          }
#line 289 "prog_io_util.m"
      }
#line 288 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 288 "prog_io_util.m"
  }
#line 117 "prog_io_util.m"
}

#line 114 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_p_0(
#line 114 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_17,
#line 114 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PorFPredAndArityTerm_5,
#line 114 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 114 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 114 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 114 "prog_io_util.m"
{
#line 271 "prog_io_util.m"
  {
#line 271 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 271 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
#line 271 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_10;
#line 271 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Arg_12;
#line 271 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ModuleName_13;
#line 271 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 271 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 271 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_16_16;
#line 272 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 272 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 272 "prog_io_util.m"
      {
#line 272 "prog_io_util.m"
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
#line 272 "prog_io_util.m"
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
#line 272 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
#line 272 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 272 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 272 "prog_io_util.m"
          {
#line 272 "prog_io_util.m"
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 274 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
#line 274 "prog_io_util.m"
              {
#line 274 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 274 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 274 "prog_io_util.m"
              }
#line 274 "prog_io_util.m"
            else
#line 274 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
#line 273 "prog_io_util.m"
                {
#line 273 "prog_io_util.m"
                  *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 273 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 273 "prog_io_util.m"
                }
#line 274 "prog_io_util.m"
              else
#line 274 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 271 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 271 "prog_io_util.m"
              {
#line 276 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 276 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 276 "prog_io_util.m"
                  {
#line 276 "prog_io_util.m"
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
#line 276 "prog_io_util.m"
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
#line 276 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 271 "prog_io_util.m"
                      {
#line 277 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
#line 277 "prog_io_util.m"
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 278 "prog_io_util.m"
                        {
#line 278 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
#line 271 "prog_io_util.m"
                      }
#line 276 "prog_io_util.m"
                  }
#line 271 "prog_io_util.m"
              }
#line 272 "prog_io_util.m"
          }
#line 272 "prog_io_util.m"
      }
#line 271 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 271 "prog_io_util.m"
  }
#line 114 "prog_io_util.m"
}

#line 111 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0(
#line 111 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 111 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_4,
#line 111 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_5,
#line 111 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_6)
#line 111 "prog_io_util.m"
{
#line 266 "prog_io_util.m"
  {
#line 266 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 267 "prog_io_util.m"
    {
#line 267 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
#line 266 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 266 "prog_io_util.m"
  }
#line 111 "prog_io_util.m"
}

#line 108 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_4_p_0(
#line 108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ModuleName_5,
#line 108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_6,
#line 108 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 108 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 108 "prog_io_util.m"
{
#line 259 "prog_io_util.m"
  {
#line 259 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 259 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 259 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 264 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;

#line 260 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
      {
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 260 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
          {
#line 260 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 260 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
#line 259 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 259 "prog_io_util.m"
              {
#line 260 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 260 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
                  {
#line 260 "prog_io_util.m"
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 260 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 261 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 261 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 261 "prog_io_util.m"
                      {
#line 261 "prog_io_util.m"
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 261 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 261 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 259 "prog_io_util.m"
                          {
#line 262 "prog_io_util.m"
                            {
#line 262 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
#line 259 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 259 "prog_io_util.m"
                              {
#line 264 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 264 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 264 "prog_io_util.m"
                                  {
#line 264 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
#line 264 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
#line 264 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
#line 264 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 264 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 264 "prog_io_util.m"
                                      {
#line 264 "prog_io_util.m"
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 264 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "prog_io_util.m"
                                      }
#line 264 "prog_io_util.m"
                                  }
#line 259 "prog_io_util.m"
                              }
#line 259 "prog_io_util.m"
                          }
#line 261 "prog_io_util.m"
                      }
#line 260 "prog_io_util.m"
                  }
#line 259 "prog_io_util.m"
              }
#line 260 "prog_io_util.m"
          }
#line 260 "prog_io_util.m"
      }
#line 259 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 259 "prog_io_util.m"
  }
#line 108 "prog_io_util.m"
}

#line 103 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(
#line 103 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_92,
#line 103 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 103 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 103 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 103 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 103 "prog_io_util.m"
{
#line 1036 "prog_io_util.m"
  {
#line 1036 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1034 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1034 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_37_37;
#line 1034 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1034 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1034 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1034 "prog_io_util.m"
      {
#line 1034 "prog_io_util.m"
        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1034 "prog_io_util.m"
        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1034 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1034 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1034 "prog_io_util.m"
          {
#line 1034 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1034 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1034 "prog_io_util.m"
              {
#line 1034 "prog_io_util.m"
                parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 1034 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "[]") == 0);
#line 1034 "prog_io_util.m"
              }
#line 1034 "prog_io_util.m"
          }
#line 1034 "prog_io_util.m"
      }
#line 1036 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1035 "prog_io_util.m"
      {
#line 1035 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
#line 1035 "prog_io_util.m"
      }
#line 1036 "prog_io_util.m"
    else
#line 1126 "prog_io_util.m"
      {
#line 1126 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1126 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_11;
#line 1036 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_43_43;
#line 1036 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_44_44;
#line 1036 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_45_45;
#line 1036 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_46_46;
#line 1036 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_47_47;
#line 1036 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1036 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1036 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
          {
#line 1036 "prog_io_util.m"
            parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1036 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1036 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 1036 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
              {
#line 1036 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_44_44, (MR_String) "[|]") == 0);
#line 1036 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                  {
#line 1036 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                      {
#line 1036 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                        parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                          {
#line 1036 "prog_io_util.m"
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "prog_io_util.m"
                          }
#line 1036 "prog_io_util.m"
                      }
#line 1036 "prog_io_util.m"
                  }
#line 1036 "prog_io_util.m"
              }
#line 1036 "prog_io_util.m"
          }
#line 1126 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1121 "prog_io_util.m"
          {
#line 1121 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 1041 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1041 "prog_io_util.m"
              {
#line 1041 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1041 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1041 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_116_116;
#line 1041 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_117_117;
#line 1041 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_118_118;
#line 1041 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_120_120;
#line 1042 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1042 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_119_119;

#line 1042 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1042 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1042 "prog_io_util.m"
                  {
#line 1042 "prog_io_util.m"
                    parse_tree__prog_io_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 0)));
#line 1042 "prog_io_util.m"
                    parse_tree__prog_io_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 1)));
#line 1042 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_116_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1041 "prog_io_util.m"
                      {
#line 1042 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_115_115)) == (MR_mktag((MR_Integer) 0)));
#line 1042 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1042 "prog_io_util.m"
                          {
#line 1042 "prog_io_util.m"
                            parse_tree__prog_io_util__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_115_115, (MR_Integer) 0)));
#line 1042 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 1042 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1042 "prog_io_util.m"
                              {
#line 1042 "prog_io_util.m"
                                parse_tree__prog_io_util__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 0)));
#line 1042 "prog_io_util.m"
                                parse_tree__prog_io_util__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 1)));
#line 1041 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!") == 0))
#line 1043 "prog_io_util.m"
                                  {
#line 1043 "prog_io_util.m"
                                    {
#line 1043 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1043 "prog_io_util.m"
                                    }
#line 1043 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1043 "prog_io_util.m"
                                  }
#line 1041 "prog_io_util.m"
                                else
#line 1041 "prog_io_util.m"
                                  if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!.") == 0))
#line 1046 "prog_io_util.m"
                                    {
#line 1046 "prog_io_util.m"
                                      {
#line 1046 "prog_io_util.m"
                                        parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_util.m"
                                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1046 "prog_io_util.m"
                                      }
#line 1046 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1046 "prog_io_util.m"
                                    }
#line 1041 "prog_io_util.m"
                                  else
#line 1041 "prog_io_util.m"
                                    if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!:") == 0))
#line 1049 "prog_io_util.m"
                                      {
#line 1049 "prog_io_util.m"
                                        {
#line 1049 "prog_io_util.m"
                                          parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1049 "prog_io_util.m"
                                        }
#line 1049 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1049 "prog_io_util.m"
                                      }
#line 1041 "prog_io_util.m"
                                    else
#line 1041 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1042 "prog_io_util.m"
                              }
#line 1042 "prog_io_util.m"
                          }
#line 1041 "prog_io_util.m"
                      }
#line 1042 "prog_io_util.m"
                  }
#line 1041 "prog_io_util.m"
              }
#line 1041 "prog_io_util.m"
            else
#line 1039 "prog_io_util.m"
              {
#line 1039 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1039 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1040 "prog_io_util.m"
                {
#line 1040 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1040 "prog_io_util.m"
                }
#line 1039 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1039 "prog_io_util.m"
              }
#line 1121 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1053 "prog_io_util.m"
              {
#line 1053 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_23;

#line 1052 "prog_io_util.m"
                {
#line 1052 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_23);
                }
#line 1117 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_23)) == (MR_mktag((MR_Integer) 0))))
#line 1119 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_23;
#line 1117 "prog_io_util.m"
                else
#line 1056 "prog_io_util.m"
                  {
#line 1056 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 0)));
#line 1056 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 1)));
#line 1056 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailDotVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 2)));
#line 1056 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailColonVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 3)));

#line 1068 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 3))))
#line 1101 "prog_io_util.m"
                      {
#line 1101 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SV_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1103 "prog_io_util.m"
                        {
#line 1103 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

#line 14693 "parse_tree.prog_io_util.c"
                          {
#line 14695 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14697 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14699 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14701 "parse_tree.prog_io_util.c"
                          }
#line 1103 "prog_io_util.m"
                          {
#line 1103 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailStateVars_25);
                          }
#line 1103 "prog_io_util.m"
                        }
#line 1104 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1104 "prog_io_util.m"
                          {
#line 1104 "prog_io_util.m"
                            {
#line 1104 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

#line 14719 "parse_tree.prog_io_util.c"
                              {
#line 14721 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14723 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14725 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14727 "parse_tree.prog_io_util.c"
                              }
#line 1104 "prog_io_util.m"
                              {
#line 1104 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailDotVars_26);
                              }
#line 1104 "prog_io_util.m"
                            }
#line 1104 "prog_io_util.m"
                            if (!(parse_tree__prog_io_util__succeeded))
#line 1105 "prog_io_util.m"
                              {
#line 1105 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

#line 14743 "parse_tree.prog_io_util.c"
                                {
#line 14745 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14747 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14749 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14751 "parse_tree.prog_io_util.c"
                                }
#line 1105 "prog_io_util.m"
                                {
#line 1105 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailColonVars_27);
                                }
#line 1105 "prog_io_util.m"
                              }
#line 1104 "prog_io_util.m"
                          }
#line 1111 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1109 "prog_io_util.m"
                          {
#line 1109 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_63_63;
#line 1109 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_86;

#line 1108 "prog_io_util.m"
                            {
#line 1108 "prog_io_util.m"
                              parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_86);
                            }
#line 1110 "prog_io_util.m"
                            {
#line 1110 "prog_io_util.m"
                              parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_86));
#line 1110 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1110 "prog_io_util.m"
                            }
#line 1110 "prog_io_util.m"
                            {
#line 1110 "prog_io_util.m"
                              MR_Word base;
#line 1110 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1110 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 1110 "prog_io_util.m"
                            }
#line 1109 "prog_io_util.m"
                          }
#line 1111 "prog_io_util.m"
                        else
#line 1112 "prog_io_util.m"
                          {
#line 1112 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ColonVars_34;

#line 1112 "prog_io_util.m"
                            {
#line 1112 "prog_io_util.m"
                              parse_tree__prog_io_util__ColonVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_89));
#line 1112 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1112 "prog_io_util.m"
                            }
#line 1113 "prog_io_util.m"
                            {
#line 1113 "prog_io_util.m"
                              MR_Word base;
#line 1113 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1113 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1113 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1113 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1113 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_34));
#line 1113 "prog_io_util.m"
                            }
#line 1112 "prog_io_util.m"
                          }
#line 1101 "prog_io_util.m"
                      }
#line 1068 "prog_io_util.m"
                    else
#line 1068 "prog_io_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 2))))
#line 1085 "prog_io_util.m"
                        {
#line 1085 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1087 "prog_io_util.m"
                          {
#line 1087 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

#line 14853 "parse_tree.prog_io_util.c"
                            {
#line 14855 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14857 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14859 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14861 "parse_tree.prog_io_util.c"
                            }
#line 1087 "prog_io_util.m"
                            {
#line 1087 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1087 "prog_io_util.m"
                          }
#line 1088 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1088 "prog_io_util.m"
                            {
#line 1088 "prog_io_util.m"
                              {
#line 1088 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

#line 14879 "parse_tree.prog_io_util.c"
                                {
#line 14881 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14883 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14885 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14887 "parse_tree.prog_io_util.c"
                                }
#line 1088 "prog_io_util.m"
                                {
#line 1088 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1088 "prog_io_util.m"
                              }
#line 1088 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1089 "prog_io_util.m"
                                {
#line 1089 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

#line 14903 "parse_tree.prog_io_util.c"
                                  {
#line 14905 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14907 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14909 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14911 "parse_tree.prog_io_util.c"
                                  }
#line 1089 "prog_io_util.m"
                                  {
#line 1089 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1089 "prog_io_util.m"
                                }
#line 1088 "prog_io_util.m"
                            }
#line 1095 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1093 "prog_io_util.m"
                            {
#line 1093 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_65_65;
#line 1093 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_82;

#line 1092 "prog_io_util.m"
                              {
#line 1092 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_82);
                              }
#line 1094 "prog_io_util.m"
                              {
#line 1094 "prog_io_util.m"
                                parse_tree__prog_io_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_82));
#line 1094 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1094 "prog_io_util.m"
                              }
#line 1094 "prog_io_util.m"
                              {
#line 1094 "prog_io_util.m"
                                MR_Word base;
#line 1094 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1094 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_65_65));
#line 1094 "prog_io_util.m"
                              }
#line 1093 "prog_io_util.m"
                            }
#line 1095 "prog_io_util.m"
                          else
#line 1096 "prog_io_util.m"
                            {
#line 1096 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__DotVars_33;

#line 1096 "prog_io_util.m"
                              {
#line 1096 "prog_io_util.m"
                                parse_tree__prog_io_util__DotVars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_85));
#line 1096 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1096 "prog_io_util.m"
                              }
#line 1097 "prog_io_util.m"
                              {
#line 1097 "prog_io_util.m"
                                MR_Word base;
#line 1097 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1097 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1097 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1097 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_33));
#line 1097 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1097 "prog_io_util.m"
                              }
#line 1096 "prog_io_util.m"
                            }
#line 1085 "prog_io_util.m"
                        }
#line 1068 "prog_io_util.m"
                      else
#line 1068 "prog_io_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 0))))
#line 1058 "prog_io_util.m"
                          {
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1059 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_94_94;

#line 15010 "parse_tree.prog_io_util.c"
                            {
#line 15012 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15014 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15016 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15018 "parse_tree.prog_io_util.c"
                            }
#line 1059 "prog_io_util.m"
                            {
#line 1059 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_94_94, parse_tree__prog_io_util__V_28, parse_tree__prog_io_util__TailVars_24);
                            }
#line 1063 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1061 "prog_io_util.m"
                              {
#line 1061 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Spec_29;
#line 1061 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_69_69;

#line 1060 "prog_io_util.m"
                                {
#line 1060 "prog_io_util.m"
                                  parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_29);
                                }
#line 1062 "prog_io_util.m"
                                {
#line 1062 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_29));
#line 1062 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1062 "prog_io_util.m"
                                }
#line 1062 "prog_io_util.m"
                                {
#line 1062 "prog_io_util.m"
                                  MR_Word base;
#line 1062 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1062 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 1062 "prog_io_util.m"
                                }
#line 1061 "prog_io_util.m"
                              }
#line 1063 "prog_io_util.m"
                            else
#line 1064 "prog_io_util.m"
                              {
#line 1064 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Vars_30;

#line 1064 "prog_io_util.m"
                                {
#line 1064 "prog_io_util.m"
                                  parse_tree__prog_io_util__Vars_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28));
#line 1064 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1064 "prog_io_util.m"
                                }
#line 1065 "prog_io_util.m"
                                {
#line 1065 "prog_io_util.m"
                                  MR_Word base;
#line 1065 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1065 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_30));
#line 1065 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1065 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1065 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1065 "prog_io_util.m"
                                }
#line 1064 "prog_io_util.m"
                              }
#line 1058 "prog_io_util.m"
                          }
#line 1068 "prog_io_util.m"
                        else
#line 1069 "prog_io_util.m"
                          {
#line 1069 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__SV_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1071 "prog_io_util.m"
                            {
#line 1071 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__TypeInfo_96_96;

#line 15114 "parse_tree.prog_io_util.c"
                              {
#line 15116 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15118 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15120 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15122 "parse_tree.prog_io_util.c"
                              }
#line 1071 "prog_io_util.m"
                              {
#line 1071 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_96_96, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailStateVars_25);
                              }
#line 1071 "prog_io_util.m"
                            }
#line 1072 "prog_io_util.m"
                            if (!(parse_tree__prog_io_util__succeeded))
#line 1072 "prog_io_util.m"
                              {
#line 1072 "prog_io_util.m"
                                {
#line 1072 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

#line 15140 "parse_tree.prog_io_util.c"
                                  {
#line 15142 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15144 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15146 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15148 "parse_tree.prog_io_util.c"
                                  }
#line 1072 "prog_io_util.m"
                                  {
#line 1072 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailDotVars_26);
                                  }
#line 1072 "prog_io_util.m"
                                }
#line 1072 "prog_io_util.m"
                                if (!(parse_tree__prog_io_util__succeeded))
#line 1073 "prog_io_util.m"
                                  {
#line 1073 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

#line 15164 "parse_tree.prog_io_util.c"
                                    {
#line 15166 "parse_tree.prog_io_util.c"
                                      parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15168 "parse_tree.prog_io_util.c"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15170 "parse_tree.prog_io_util.c"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15172 "parse_tree.prog_io_util.c"
                                    }
#line 1073 "prog_io_util.m"
                                    {
#line 1073 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailColonVars_27);
                                    }
#line 1073 "prog_io_util.m"
                                  }
#line 1072 "prog_io_util.m"
                              }
#line 1079 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1077 "prog_io_util.m"
                              {
#line 1077 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_67_67;
#line 1077 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Spec_79;

#line 1076 "prog_io_util.m"
                                {
#line 1076 "prog_io_util.m"
                                  parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_79);
                                }
#line 1078 "prog_io_util.m"
                                {
#line 1078 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_79));
#line 1078 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1078 "prog_io_util.m"
                                }
#line 1078 "prog_io_util.m"
                                {
#line 1078 "prog_io_util.m"
                                  MR_Word base;
#line 1078 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1078 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
#line 1078 "prog_io_util.m"
                                }
#line 1077 "prog_io_util.m"
                              }
#line 1079 "prog_io_util.m"
                            else
#line 1080 "prog_io_util.m"
                              {
#line 1080 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__StateVars_32;

#line 1080 "prog_io_util.m"
                                {
#line 1080 "prog_io_util.m"
                                  parse_tree__prog_io_util__StateVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_31));
#line 1080 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1080 "prog_io_util.m"
                                }
#line 1081 "prog_io_util.m"
                                {
#line 1081 "prog_io_util.m"
                                  MR_Word base;
#line 1081 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1081 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1081 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_32));
#line 1081 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1081 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1081 "prog_io_util.m"
                                }
#line 1080 "prog_io_util.m"
                              }
#line 1069 "prog_io_util.m"
                          }
#line 1056 "prog_io_util.m"
                  }
#line 1053 "prog_io_util.m"
              }
#line 1121 "prog_io_util.m"
            else
#line 1123 "prog_io_util.m"
              {
#line 1123 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_72_72;
#line 1123 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_90;

#line 1122 "prog_io_util.m"
                {
#line 1122 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_90);
                }
#line 1124 "prog_io_util.m"
                {
#line 1124 "prog_io_util.m"
                  parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_90));
#line 1124 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1124 "prog_io_util.m"
                }
#line 1124 "prog_io_util.m"
                {
#line 1124 "prog_io_util.m"
                  MR_Word base;
#line 1124 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1124 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 1124 "prog_io_util.m"
                }
#line 1123 "prog_io_util.m"
              }
#line 1121 "prog_io_util.m"
          }
#line 1126 "prog_io_util.m"
        else
#line 1128 "prog_io_util.m"
          {
#line 1128 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1128 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_91;

#line 1127 "prog_io_util.m"
            {
#line 1127 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_91);
            }
#line 1129 "prog_io_util.m"
            {
#line 1129 "prog_io_util.m"
              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
#line 1129 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1129 "prog_io_util.m"
            }
#line 1129 "prog_io_util.m"
            {
#line 1129 "prog_io_util.m"
              MR_Word base;
#line 1129 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1129 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1129 "prog_io_util.m"
            }
#line 1128 "prog_io_util.m"
          }
#line 1126 "prog_io_util.m"
      }
#line 1036 "prog_io_util.m"
  }
#line 103 "prog_io_util.m"
}

#line 94 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(
#line 94 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_58,
#line 94 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 94 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 94 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 94 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 94 "prog_io_util.m"
{
#line 977 "prog_io_util.m"
  {
#line 977 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 975 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 975 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_29_29;
#line 975 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 975 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 975 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 975 "prog_io_util.m"
      {
#line 975 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 975 "prog_io_util.m"
        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 975 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 975 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 975 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 975 "prog_io_util.m"
          {
#line 975 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 975 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 975 "prog_io_util.m"
              {
#line 975 "prog_io_util.m"
                parse_tree__prog_io_util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 975 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_29_29, (MR_String) "[]") == 0);
#line 975 "prog_io_util.m"
              }
#line 975 "prog_io_util.m"
          }
#line 975 "prog_io_util.m"
      }
#line 977 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 976 "prog_io_util.m"
      {
#line 976 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[14]);
#line 976 "prog_io_util.m"
      }
#line 977 "prog_io_util.m"
    else
#line 1021 "prog_io_util.m"
      {
#line 1021 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1021 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 977 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 977 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_34_34;
#line 977 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_35_35;
#line 977 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_36_36;
#line 977 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_37_37;
#line 977 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 977 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 977 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 977 "prog_io_util.m"
          {
#line 977 "prog_io_util.m"
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 977 "prog_io_util.m"
            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 977 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 977 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 977 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 977 "prog_io_util.m"
              {
#line 977 "prog_io_util.m"
                parse_tree__prog_io_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
#line 977 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_34_34, (MR_String) "[|]") == 0);
#line 977 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 977 "prog_io_util.m"
                  {
#line 977 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 977 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 977 "prog_io_util.m"
                      {
#line 977 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 0)));
#line 977 "prog_io_util.m"
                        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 1)));
#line 977 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 977 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 977 "prog_io_util.m"
                          {
#line 977 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 977 "prog_io_util.m"
                            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 1)));
#line 977 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 977 "prog_io_util.m"
                          }
#line 977 "prog_io_util.m"
                      }
#line 977 "prog_io_util.m"
                  }
#line 977 "prog_io_util.m"
              }
#line 977 "prog_io_util.m"
          }
#line 1021 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1016 "prog_io_util.m"
          {
#line 1016 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 982 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 983 "prog_io_util.m"
              {
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__SV0_16;
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 983 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_39_39;
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 983 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 983 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 983 "prog_io_util.m"
                  {
#line 983 "prog_io_util.m"
                    parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 983 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "!") == 0);
#line 983 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 983 "prog_io_util.m"
                      {
#line 983 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 983 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 983 "prog_io_util.m"
                          {
#line 983 "prog_io_util.m"
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 983 "prog_io_util.m"
                            parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
#line 983 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 983 "prog_io_util.m"
                              {
#line 983 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 983 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 983 "prog_io_util.m"
                                  {
#line 983 "prog_io_util.m"
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 983 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 1)));
#line 984 "prog_io_util.m"
                                    {
#line 984 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
#line 984 "prog_io_util.m"
                                    }
#line 984 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 983 "prog_io_util.m"
                                  }
#line 983 "prog_io_util.m"
                              }
#line 983 "prog_io_util.m"
                          }
#line 983 "prog_io_util.m"
                      }
#line 983 "prog_io_util.m"
                  }
#line 983 "prog_io_util.m"
              }
#line 982 "prog_io_util.m"
            else
#line 980 "prog_io_util.m"
              {
#line 980 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 980 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 981 "prog_io_util.m"
                {
#line 981 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 981 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 981 "prog_io_util.m"
                }
#line 980 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 980 "prog_io_util.m"
              }
#line 1016 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 988 "prog_io_util.m"
              {
#line 988 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_19;

#line 987 "prog_io_util.m"
                {
#line 987 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_19);
                }
#line 1012 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_19)) == (MR_mktag((MR_Integer) 0))))
#line 1014 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_19;
#line 1012 "prog_io_util.m"
                else
#line 990 "prog_io_util.m"
                  {
#line 990 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 0)));
#line 990 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 1)));

#line 1001 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 0))))
#line 992 "prog_io_util.m"
                      {
#line 992 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 993 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_60_60;

#line 15641 "parse_tree.prog_io_util.c"
                        {
#line 15643 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15645 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15647 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 15649 "parse_tree.prog_io_util.c"
                        }
#line 993 "prog_io_util.m"
                        {
#line 993 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_60_60, parse_tree__prog_io_util__V_22, parse_tree__prog_io_util__TailVars_20);
                        }
#line 997 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 995 "prog_io_util.m"
                          {
#line 995 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_23;
#line 995 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_45_45;

#line 994 "prog_io_util.m"
                            {
#line 994 "prog_io_util.m"
                              parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                            }
#line 996 "prog_io_util.m"
                            {
#line 996 "prog_io_util.m"
                              parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
#line 996 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_util.m"
                            }
#line 996 "prog_io_util.m"
                            {
#line 996 "prog_io_util.m"
                              MR_Word base;
#line 996 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 996 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 996 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 996 "prog_io_util.m"
                            }
#line 995 "prog_io_util.m"
                          }
#line 997 "prog_io_util.m"
                        else
#line 998 "prog_io_util.m"
                          {
#line 998 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Vars_24;

#line 998 "prog_io_util.m"
                            {
#line 998 "prog_io_util.m"
                              parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22));
#line 998 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 998 "prog_io_util.m"
                            }
#line 999 "prog_io_util.m"
                            {
#line 999 "prog_io_util.m"
                              MR_Word base;
#line 999 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 999 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
#line 999 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 999 "prog_io_util.m"
                            }
#line 998 "prog_io_util.m"
                          }
#line 992 "prog_io_util.m"
                      }
#line 1001 "prog_io_util.m"
                    else
#line 1002 "prog_io_util.m"
                      {
#line 1002 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SV_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1003 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_62_62;

#line 15738 "parse_tree.prog_io_util.c"
                        {
#line 15740 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15742 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15744 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 15746 "parse_tree.prog_io_util.c"
                        }
#line 1003 "prog_io_util.m"
                        {
#line 1003 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_62_62, parse_tree__prog_io_util__SV_25, parse_tree__prog_io_util__TailStateVars_21);
                        }
#line 1007 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1005 "prog_io_util.m"
                          {
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_43_43;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_53;
#line 1005 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__TermStr_67;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Pieces_68;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_69_69;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_71_71;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_74_74;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_84_84;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_85_85;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_86_86;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_87_87;
#line 1005 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_88_88;

#line 1146 "prog_io_util.m"
                            {
#line 1146 "prog_io_util.m"
                              parse_tree__prog_io_util__TermStr_67 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1148 "prog_io_util.m"
                            {
#line 1148 "prog_io_util.m"
                              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1148 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_67));
#line 1148 "prog_io_util.m"
                            }
#line 1148 "prog_io_util.m"
                            {
#line 1148 "prog_io_util.m"
                              parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1148 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1148 "prog_io_util.m"
                            }
#line 1147 "prog_io_util.m"
                            {
#line 1147 "prog_io_util.m"
                              parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 1147 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 1147 "prog_io_util.m"
                            }
#line 1147 "prog_io_util.m"
                            {
#line 1147 "prog_io_util.m"
                              parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 1147 "prog_io_util.m"
                            }
#line 1147 "prog_io_util.m"
                            {
#line 1147 "prog_io_util.m"
                              parse_tree__prog_io_util__Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_69_69);
                            }
#line 1150 "prog_io_util.m"
                            {
#line 1150 "prog_io_util.m"
                              parse_tree__prog_io_util__V_86_86 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1150 "prog_io_util.m"
                            {
#line 1150 "prog_io_util.m"
                              parse_tree__prog_io_util__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_68));
#line 1150 "prog_io_util.m"
                            }
#line 1150 "prog_io_util.m"
                            {
#line 1150 "prog_io_util.m"
                              parse_tree__prog_io_util__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_util__V_88_88));
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1150 "prog_io_util.m"
                            }
#line 1150 "prog_io_util.m"
                            {
#line 1150 "prog_io_util.m"
                              parse_tree__prog_io_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_util__V_86_86));
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io_util__V_87_87));
#line 1150 "prog_io_util.m"
                            }
#line 1149 "prog_io_util.m"
                            {
#line 1149 "prog_io_util.m"
                              parse_tree__prog_io_util__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1149 "prog_io_util.m"
                            }
#line 1149 "prog_io_util.m"
                            {
#line 1149 "prog_io_util.m"
                              parse_tree__prog_io_util__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_util__V_84_84));
#line 1149 "prog_io_util.m"
                            }
#line 1006 "prog_io_util.m"
                            {
#line 1006 "prog_io_util.m"
                              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_53));
#line 1006 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_io_util.m"
                            }
#line 1006 "prog_io_util.m"
                            {
#line 1006 "prog_io_util.m"
                              MR_Word base;
#line 1006 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1006 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1006 "prog_io_util.m"
                            }
#line 1005 "prog_io_util.m"
                          }
#line 1007 "prog_io_util.m"
                        else
#line 1008 "prog_io_util.m"
                          {
#line 1008 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__StateVars_26;

#line 1008 "prog_io_util.m"
                            {
#line 1008 "prog_io_util.m"
                              parse_tree__prog_io_util__StateVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_25));
#line 1008 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 1008 "prog_io_util.m"
                            }
#line 1009 "prog_io_util.m"
                            {
#line 1009 "prog_io_util.m"
                              MR_Word base;
#line 1009 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1009 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 1009 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_26));
#line 1009 "prog_io_util.m"
                            }
#line 1008 "prog_io_util.m"
                          }
#line 1002 "prog_io_util.m"
                      }
#line 990 "prog_io_util.m"
                  }
#line 988 "prog_io_util.m"
              }
#line 1016 "prog_io_util.m"
            else
#line 1018 "prog_io_util.m"
              {
#line 1018 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_48_48;
#line 1018 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_56;

#line 1017 "prog_io_util.m"
                {
#line 1017 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_56);
                }
#line 1019 "prog_io_util.m"
                {
#line 1019 "prog_io_util.m"
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_56));
#line 1019 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "prog_io_util.m"
                }
#line 1019 "prog_io_util.m"
                {
#line 1019 "prog_io_util.m"
                  MR_Word base;
#line 1019 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1019 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1019 "prog_io_util.m"
                }
#line 1018 "prog_io_util.m"
              }
#line 1016 "prog_io_util.m"
          }
#line 1021 "prog_io_util.m"
        else
#line 1023 "prog_io_util.m"
          {
#line 1023 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_51_51;
#line 1023 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_57;

#line 1022 "prog_io_util.m"
            {
#line 1022 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_57);
            }
#line 1024 "prog_io_util.m"
            {
#line 1024 "prog_io_util.m"
              parse_tree__prog_io_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_57));
#line 1024 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "prog_io_util.m"
            }
#line 1024 "prog_io_util.m"
            {
#line 1024 "prog_io_util.m"
              MR_Word base;
#line 1024 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1024 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_51_51));
#line 1024 "prog_io_util.m"
            }
#line 1023 "prog_io_util.m"
          }
#line 1021 "prog_io_util.m"
      }
#line 977 "prog_io_util.m"
  }
#line 94 "prog_io_util.m"
}

#line 87 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_4_p_0(
#line 87 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_42,
#line 87 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 87 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 87 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 87 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 87 "prog_io_util.m"
{
#line 940 "prog_io_util.m"
  {
#line 940 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 938 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 938 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_24_24;
#line 938 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 938 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 938 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 938 "prog_io_util.m"
      {
#line 938 "prog_io_util.m"
        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 938 "prog_io_util.m"
        parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 938 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 938 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 938 "prog_io_util.m"
          {
#line 938 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 938 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 938 "prog_io_util.m"
              {
#line 938 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 938 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "[]") == 0);
#line 938 "prog_io_util.m"
              }
#line 938 "prog_io_util.m"
          }
#line 938 "prog_io_util.m"
      }
#line 940 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 939 "prog_io_util.m"
      {
#line 939 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 939 "prog_io_util.m"
      }
#line 940 "prog_io_util.m"
    else
#line 964 "prog_io_util.m"
      {
#line 964 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 964 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 940 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 940 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_28_28;
#line 940 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 940 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 940 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 940 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 940 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 940 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 940 "prog_io_util.m"
          {
#line 940 "prog_io_util.m"
            parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 940 "prog_io_util.m"
            parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 940 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 940 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 940 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 940 "prog_io_util.m"
              {
#line 940 "prog_io_util.m"
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 940 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[|]") == 0);
#line 940 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 940 "prog_io_util.m"
                  {
#line 940 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 940 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 940 "prog_io_util.m"
                      {
#line 940 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 940 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 940 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 940 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 940 "prog_io_util.m"
                          {
#line 940 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 940 "prog_io_util.m"
                            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 1)));
#line 940 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "prog_io_util.m"
                          }
#line 940 "prog_io_util.m"
                      }
#line 940 "prog_io_util.m"
                  }
#line 940 "prog_io_util.m"
              }
#line 940 "prog_io_util.m"
          }
#line 964 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 958 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 959 "prog_io_util.m"
            {
#line 959 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_33_33;
#line 959 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Spec_40;

#line 960 "prog_io_util.m"
              {
#line 960 "prog_io_util.m"
                parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_40);
              }
#line 962 "prog_io_util.m"
              {
#line 962 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_40));
#line 962 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "prog_io_util.m"
              }
#line 962 "prog_io_util.m"
              {
#line 962 "prog_io_util.m"
                MR_Word base;
#line 962 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 962 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 962 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 962 "prog_io_util.m"
              }
#line 959 "prog_io_util.m"
            }
#line 958 "prog_io_util.m"
          else
#line 942 "prog_io_util.m"
            {
#line 942 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__HeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 942 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeVarsTail_15;
#line 942 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 943 "prog_io_util.m"
              {
#line 943 "prog_io_util.m"
                parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_15);
              }
#line 954 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_15)) == (MR_mktag((MR_Integer) 0))))
#line 956 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_15;
#line 954 "prog_io_util.m"
              else
#line 945 "prog_io_util.m"
                {
#line 945 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TailVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_15, (MR_Integer) 0)));
#line 946 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_44_44;

#line 16253 "parse_tree.prog_io_util.c"
                  {
#line 16255 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16257 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16259 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_42));
#line 16261 "parse_tree.prog_io_util.c"
                  }
#line 946 "prog_io_util.m"
                  {
#line 946 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TypeInfo_44_44, parse_tree__prog_io_util__HeadVar_13, parse_tree__prog_io_util__TailVars_16);
                  }
#line 950 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 948 "prog_io_util.m"
                    {
#line 948 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_17;
#line 948 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_35_35;

#line 947 "prog_io_util.m"
                      {
#line 947 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_17);
                      }
#line 949 "prog_io_util.m"
                      {
#line 949 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_17));
#line 949 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "prog_io_util.m"
                      }
#line 949 "prog_io_util.m"
                      {
#line 949 "prog_io_util.m"
                        MR_Word base;
#line 949 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 949 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 949 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 949 "prog_io_util.m"
                      }
#line 948 "prog_io_util.m"
                    }
#line 950 "prog_io_util.m"
                  else
#line 951 "prog_io_util.m"
                    {
#line 951 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Vars_18;

#line 951 "prog_io_util.m"
                      {
#line 951 "prog_io_util.m"
                        parse_tree__prog_io_util__Vars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_13));
#line 951 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_16));
#line 951 "prog_io_util.m"
                      }
#line 952 "prog_io_util.m"
                      {
#line 952 "prog_io_util.m"
                        MR_Word base;
#line 952 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 952 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_18));
#line 952 "prog_io_util.m"
                      }
#line 951 "prog_io_util.m"
                    }
#line 945 "prog_io_util.m"
                }
#line 942 "prog_io_util.m"
            }
#line 964 "prog_io_util.m"
        else
#line 966 "prog_io_util.m"
          {
#line 966 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_38_38;
#line 966 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_41;

#line 965 "prog_io_util.m"
            {
#line 965 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_41);
            }
#line 967 "prog_io_util.m"
            {
#line 967 "prog_io_util.m"
              parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_41));
#line 967 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 967 "prog_io_util.m"
            }
#line 967 "prog_io_util.m"
            {
#line 967 "prog_io_util.m"
              MR_Word base;
#line 967 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 967 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 967 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 967 "prog_io_util.m"
            }
#line 966 "prog_io_util.m"
          }
#line 964 "prog_io_util.m"
      }
#line 940 "prog_io_util.m"
  }
#line 87 "prog_io_util.m"
}

#line 82 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_list_of_vars_2_p_0(
#line 82 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 82 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 82 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 82 "prog_io_util.m"
{
#line 931 "prog_io_util.m"
  {
#line 931 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 931 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 931 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 931 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_22_22;
#line 931 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;

#line 931 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 931 "prog_io_util.m"
      {
#line 931 "prog_io_util.m"
        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 931 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 931 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 931 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 931 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 931 "prog_io_util.m"
          {
#line 931 "prog_io_util.m"
            parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 931 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "prog_io_util.m"
              {
#line 931 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[]") == 0);
#line 931 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 931 "prog_io_util.m"
                  {
#line 931 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 931 "prog_io_util.m"
                  }
#line 931 "prog_io_util.m"
              }
#line 931 "prog_io_util.m"
            else
#line 933 "prog_io_util.m"
              {
#line 933 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Head_7;
#line 933 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Tail_8;
#line 933 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Var_10;
#line 933 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Vars_11;
#line 933 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 933 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;
#line 934 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_12_12;

#line 932 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[|]") == 0);
#line 933 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 933 "prog_io_util.m"
                  {
#line 932 "prog_io_util.m"
                    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 932 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 932 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 932 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 932 "prog_io_util.m"
                      {
#line 932 "prog_io_util.m"
                        parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 932 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 932 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 933 "prog_io_util.m"
                          {
#line 934 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 934 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 934 "prog_io_util.m"
                              {
#line 934 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 0)));
#line 934 "prog_io_util.m"
                                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 1)));
#line 935 "prog_io_util.m"
                                {
#line 935 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__Vars_11);
                                }
#line 933 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 933 "prog_io_util.m"
                                  {
#line 933 "prog_io_util.m"
                                    {
#line 933 "prog_io_util.m"
                                      MR_Word base;
#line 933 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_util.m"
                                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 933 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_10));
#line 933 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Vars_11));
#line 933 "prog_io_util.m"
                                    }
#line 933 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 933 "prog_io_util.m"
                                  }
#line 934 "prog_io_util.m"
                              }
#line 933 "prog_io_util.m"
                          }
#line 932 "prog_io_util.m"
                      }
#line 933 "prog_io_util.m"
                  }
#line 933 "prog_io_util.m"
              }
#line 931 "prog_io_util.m"
          }
#line 931 "prog_io_util.m"
      }
#line 931 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 931 "prog_io_util.m"
  }
#line 82 "prog_io_util.m"
}

#line 64 "prog_io_util.m"
MR_Word MR_CALL 
parse_tree__prog_io_util__get_any_errors4_1_f_0(
#line 64 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_8,
#line 64 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_9,
#line 64 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T3_10,
#line 64 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T4_11,
#line 64 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 64 "prog_io_util.m"
{
#line 256 "prog_io_util.m"
  {
#line 256 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 256 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 257 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "prog_io_util.m"
    else
#line 256 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 256 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 256 "prog_io_util.m"
  }
#line 64 "prog_io_util.m"
}

#line 63 "prog_io_util.m"
MR_Word MR_CALL 
parse_tree__prog_io_util__get_any_errors3_1_f_0(
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_7,
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_8,
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T3_9,
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 63 "prog_io_util.m"
{
#line 253 "prog_io_util.m"
  {
#line 253 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 253 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 254 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "prog_io_util.m"
    else
#line 253 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 253 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 253 "prog_io_util.m"
  }
#line 63 "prog_io_util.m"
}

#line 62 "prog_io_util.m"
MR_Word MR_CALL 
parse_tree__prog_io_util__get_any_errors2_1_f_0(
#line 62 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_6,
#line 62 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T2_7,
#line 62 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 62 "prog_io_util.m"
{
#line 250 "prog_io_util.m"
  {
#line 250 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 250 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 251 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "prog_io_util.m"
    else
#line 250 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 250 "prog_io_util.m"
  }
#line 62 "prog_io_util.m"
}

#line 61 "prog_io_util.m"
MR_Word MR_CALL 
parse_tree__prog_io_util__get_any_errors1_1_f_0(
#line 61 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T1_5,
#line 61 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 61 "prog_io_util.m"
{
#line 247 "prog_io_util.m"
  {
#line 247 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 247 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 247 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 248 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "prog_io_util.m"
    else
#line 247 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 247 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 247 "prog_io_util.m"
  }
#line 61 "prog_io_util.m"
}

void mercury__parse_tree__prog_io_util__init(void)
{
}

void mercury__parse_tree__prog_io_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attrs_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe3_3);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe4_4);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_parser_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2pvar_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2tvar_0);
}

void mercury__parse_tree__prog_io_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_util. */
