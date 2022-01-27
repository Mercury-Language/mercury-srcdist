/*
** Automatically generated from `prog_io_util.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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



#line 824 "prog_io_util.m"
struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
#line 827 "prog_io_util.m"
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 827 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
#line 827 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
#line 833 "prog_io_util.m"
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
#line 833 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
#line 833 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
#line 833 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
#line 833 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
#line 833 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
#line 833 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
#line 824 "prog_io_util.m"
};


#line 161 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 164 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0;

#line 167 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1;

#line 170 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2];

#line 173 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2];

#line 176 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2];

#line 179 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1];

#line 182 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0;

#line 185 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0;

#line 188 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 191 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2];

#line 194 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1;

#line 197 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0;

#line 200 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2];

#line 203 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2;

#line 206 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3;

#line 209 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1];

#line 212 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1];

#line 215 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1];

#line 218 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1];

#line 221 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_decl_attribute_0[4];

#line 224 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4];

#line 227 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4];

#line 230 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 233 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 236 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 239 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1];

#line 242 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0;

#line 245 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1];

#line 248 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1;

#line 251 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1];

#line 254 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1];

#line 257 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1[2];

#line 260 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2];

#line 263 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2];

#line 266 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1];

#line 269 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0;

#line 272 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2];

#line 275 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1;

#line 278 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1];

#line 281 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1];

#line 284 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2[2];

#line 287 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2];

#line 290 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2];

#line 293 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1];

#line 296 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0;

#line 299 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3];

#line 302 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1;

#line 305 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1];

#line 308 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1];

#line 311 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3[2];

#line 314 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2];

#line 317 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2];

#line 320 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1];

#line 323 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0;

#line 326 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4];

#line 329 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1;

#line 332 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1];

#line 335 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1];

#line 338 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4[2];

#line 341 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2];

#line 344 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2];

#line 347 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

#line 350 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 353 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 356 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 359 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 362 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

#line 365 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

#line 368 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 371 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 374 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

#line 377 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

#line 380 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

#line 383 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

#line 386 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

#line 389 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

#line 392 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

#line 395 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

#line 398 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

#line 401 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

#line 404 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

#line 407 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

#line 410 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

#line 413 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

#line 416 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

#line 419 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

#line 422 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

#line 425 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

#line 428 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

#line 431 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

#line 434 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

#line 437 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

#line 440 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

#line 443 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

#line 446 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

#line 449 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 452 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 455 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0;

#line 458 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1;

#line 461 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2];

#line 464 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2];

#line 467 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2];

#line 470 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 473 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 476 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 479 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 482 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 485 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 487 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 490 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 493 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 495 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 497 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 500 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 503 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 505 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 508 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 511 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 513 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 515 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 518 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 521 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 523 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 526 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 529 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 531 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 533 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 536 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 539 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 541 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 543 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 546 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 549 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 551 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 553 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 555 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 558 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 561 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 563 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 565 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 567 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 570 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 573 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 575 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 577 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 579 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 581 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 584 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 587 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 589 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 591 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 593 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 595 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 598 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 601 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 603 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 605 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 607 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 609 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 611 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 614 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 617 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 619 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 621 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 623 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 625 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 627 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 630 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 633 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 635 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 637 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 639 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 641 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 643 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 645 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7);

#line 648 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 651 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 653 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 655 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 658 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 661 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 663 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 665 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 667 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 670 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 673 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 675 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 678 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 681 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 683 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 685 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 688 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 691 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 693 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 695 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 698 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 701 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 703 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 705 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 707 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 710 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 713 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 715 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 717 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 720 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 723 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 725 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 727 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 729 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 732 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 735 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 737 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 739 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 742 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 745 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 747 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 749 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 751 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 754 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 757 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 759 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 761 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 764 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 767 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 769 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 771 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 773 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 776 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 779 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 781 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 784 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 787 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 789 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 791 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 794 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 797 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 799 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 802 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 805 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 807 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 809 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 812 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 815 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 817 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 820 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 823 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 825 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 827 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 898 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0(
#line 898 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 898 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 898 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_0_11,
#line 898 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_List_12);

#line 971 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 971 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 971 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1028 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1028 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1028 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1153 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1153 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1153 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10);

#line 1133 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1133 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 848 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 848 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

#line 840 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 840 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 840 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 840 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

#line 833 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 833 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 833 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 833 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 833 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 833 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 824 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 824 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 824 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 824 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 824 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 784 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(
#line 784 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 784 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 784 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_5);

#line 494 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 494 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 494 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 494 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3);

#line 492 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 492 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 492 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 492 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

#line 489 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 489 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4);

#line 425 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 425 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 425 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 425 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 425 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9);

#line 400 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 400 "prog_io_util.m"
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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



#line 1338 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1346 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

#line 1352 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

#line 1358 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1364 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1370 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1376 "parse_tree.prog_io_util.c"
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

#line 1397 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0
};

#line 1402 "parse_tree.prog_io_util.c"
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

#line 1417 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1425 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1433 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1439 "parse_tree.prog_io_util.c"
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

#line 1454 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1462 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
};

#line 1468 "parse_tree.prog_io_util.c"
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

#line 1483 "parse_tree.prog_io_util.c"
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

#line 1498 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 1503 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0
};

#line 1508 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1
};

#line 1513 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2
};

#line 1518 "parse_tree.prog_io_util.c"
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

#line 1542 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 1550 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1558 "parse_tree.prog_io_util.c"
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

#line 1579 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1588 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0
  }
};

#line 1596 "parse_tree.prog_io_util.c"
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

#line 1617 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1625 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1630 "parse_tree.prog_io_util.c"
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

#line 1645 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1650 "parse_tree.prog_io_util.c"
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

#line 1665 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0
};

#line 1670 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 1675 "parse_tree.prog_io_util.c"
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

#line 1689 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 1695 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1701 "parse_tree.prog_io_util.c"
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

#line 1722 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1727 "parse_tree.prog_io_util.c"
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

#line 1742 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1748 "parse_tree.prog_io_util.c"
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

#line 1763 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0
};

#line 1768 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 1773 "parse_tree.prog_io_util.c"
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

#line 1787 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 1793 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1799 "parse_tree.prog_io_util.c"
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

#line 1820 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1825 "parse_tree.prog_io_util.c"
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

#line 1840 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 1847 "parse_tree.prog_io_util.c"
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

#line 1862 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0
};

#line 1867 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 1872 "parse_tree.prog_io_util.c"
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

#line 1886 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 1892 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1898 "parse_tree.prog_io_util.c"
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

#line 1919 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1924 "parse_tree.prog_io_util.c"
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

#line 1939 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

#line 1947 "parse_tree.prog_io_util.c"
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

#line 1962 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0
};

#line 1967 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 1972 "parse_tree.prog_io_util.c"
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

#line 1986 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 1992 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1998 "parse_tree.prog_io_util.c"
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

#line 2019 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2027 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

#line 2035 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

#line 2044 "parse_tree.prog_io_util.c"
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
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2065 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2073 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2082 "parse_tree.prog_io_util.c"
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
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2103 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2111 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2119 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

#line 2128 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

#line 2137 "parse_tree.prog_io_util.c"
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
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2158 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2166 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2171 "parse_tree.prog_io_util.c"
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

#line 2186 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2191 "parse_tree.prog_io_util.c"
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

#line 2206 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2211 "parse_tree.prog_io_util.c"
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

#line 2226 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2231 "parse_tree.prog_io_util.c"
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

#line 2246 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

#line 2251 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2256 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

#line 2261 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

#line 2266 "parse_tree.prog_io_util.c"
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

#line 2290 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2298 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2306 "parse_tree.prog_io_util.c"
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

#line 2327 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2332 "parse_tree.prog_io_util.c"
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

#line 2347 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2352 "parse_tree.prog_io_util.c"
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

#line 2367 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

#line 2372 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2377 "parse_tree.prog_io_util.c"
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

#line 2391 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2397 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2403 "parse_tree.prog_io_util.c"
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

#line 2424 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2432 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1
  }
};

#line 2442 "parse_tree.prog_io_util.c"
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

#line 2463 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

#line 2469 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

#line 2475 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 2481 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 2487 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2493 "parse_tree.prog_io_util.c"
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

#line 2514 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2522 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2531 "parse_tree.prog_io_util.c"
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

#line 2552 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2560 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2569 "parse_tree.prog_io_util.c"
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

#line 2590 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 2593 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2595 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2597 "parse_tree.prog_io_util.c"
{
#line 2599 "parse_tree.prog_io_util.c"
  {
#line 2601 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2604 "parse_tree.prog_io_util.c"
    {
#line 2606 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2609 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2611 "parse_tree.prog_io_util.c"
  }
#line 2613 "parse_tree.prog_io_util.c"
}

#line 2616 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 2619 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 2621 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2623 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2625 "parse_tree.prog_io_util.c"
{
#line 2627 "parse_tree.prog_io_util.c"
  {
#line 2629 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2632 "parse_tree.prog_io_util.c"
    {
#line 2634 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2637 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2639 "parse_tree.prog_io_util.c"
  }
#line 2641 "parse_tree.prog_io_util.c"
}

#line 2644 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 2647 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2649 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2651 "parse_tree.prog_io_util.c"
{
#line 2653 "parse_tree.prog_io_util.c"
  {
#line 2655 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2658 "parse_tree.prog_io_util.c"
    {
#line 2660 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attribute_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2663 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2665 "parse_tree.prog_io_util.c"
  }
#line 2667 "parse_tree.prog_io_util.c"
}

#line 2670 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 2673 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 2675 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2677 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2679 "parse_tree.prog_io_util.c"
{
#line 2681 "parse_tree.prog_io_util.c"
  {
#line 2683 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2686 "parse_tree.prog_io_util.c"
    {
#line 2688 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attribute_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2691 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2693 "parse_tree.prog_io_util.c"
  }
#line 2695 "parse_tree.prog_io_util.c"
}

#line 2698 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 2701 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2703 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2705 "parse_tree.prog_io_util.c"
{
#line 2707 "parse_tree.prog_io_util.c"
  {
#line 2709 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2712 "parse_tree.prog_io_util.c"
    {
#line 2714 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attrs_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2717 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2719 "parse_tree.prog_io_util.c"
  }
#line 2721 "parse_tree.prog_io_util.c"
}

#line 2724 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 2727 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 2729 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2731 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2733 "parse_tree.prog_io_util.c"
{
#line 2735 "parse_tree.prog_io_util.c"
  {
#line 2737 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2740 "parse_tree.prog_io_util.c"
    {
#line 2742 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attrs_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2745 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2747 "parse_tree.prog_io_util.c"
  }
#line 2749 "parse_tree.prog_io_util.c"
}

#line 2752 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 2755 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2757 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2759 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 2761 "parse_tree.prog_io_util.c"
{
#line 2763 "parse_tree.prog_io_util.c"
  {
#line 2765 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2768 "parse_tree.prog_io_util.c"
    {
#line 2770 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 2773 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2775 "parse_tree.prog_io_util.c"
  }
#line 2777 "parse_tree.prog_io_util.c"
}

#line 2780 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 2783 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2785 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 2787 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2789 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 2791 "parse_tree.prog_io_util.c"
{
#line 2793 "parse_tree.prog_io_util.c"
  {
#line 2795 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2798 "parse_tree.prog_io_util.c"
    {
#line 2800 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 2803 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2805 "parse_tree.prog_io_util.c"
  }
#line 2807 "parse_tree.prog_io_util.c"
}

#line 2810 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 2813 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2815 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2817 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2819 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 2821 "parse_tree.prog_io_util.c"
{
#line 2823 "parse_tree.prog_io_util.c"
  {
#line 2825 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2828 "parse_tree.prog_io_util.c"
    {
#line 2830 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 2833 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2835 "parse_tree.prog_io_util.c"
  }
#line 2837 "parse_tree.prog_io_util.c"
}

#line 2840 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 2843 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2845 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2847 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 2849 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2851 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 2853 "parse_tree.prog_io_util.c"
{
#line 2855 "parse_tree.prog_io_util.c"
  {
#line 2857 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2860 "parse_tree.prog_io_util.c"
    {
#line 2862 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 2865 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2867 "parse_tree.prog_io_util.c"
  }
#line 2869 "parse_tree.prog_io_util.c"
}

#line 2872 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 2875 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2877 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2879 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2881 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2883 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 2885 "parse_tree.prog_io_util.c"
{
#line 2887 "parse_tree.prog_io_util.c"
  {
#line 2889 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2892 "parse_tree.prog_io_util.c"
    {
#line 2894 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 2897 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2899 "parse_tree.prog_io_util.c"
  }
#line 2901 "parse_tree.prog_io_util.c"
}

#line 2904 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 2907 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2909 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2911 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2913 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 2915 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 2917 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 2919 "parse_tree.prog_io_util.c"
{
#line 2921 "parse_tree.prog_io_util.c"
  {
#line 2923 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2926 "parse_tree.prog_io_util.c"
    {
#line 2928 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 2931 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 2933 "parse_tree.prog_io_util.c"
  }
#line 2935 "parse_tree.prog_io_util.c"
}

#line 2938 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 2941 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2943 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2945 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2947 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2949 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 2951 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 2953 "parse_tree.prog_io_util.c"
{
#line 2955 "parse_tree.prog_io_util.c"
  {
#line 2957 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2960 "parse_tree.prog_io_util.c"
    {
#line 2962 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 2965 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2967 "parse_tree.prog_io_util.c"
  }
#line 2969 "parse_tree.prog_io_util.c"
}

#line 2972 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 2975 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2977 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2979 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 2981 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 2983 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 2985 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 2987 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7)
#line 2989 "parse_tree.prog_io_util.c"
{
#line 2991 "parse_tree.prog_io_util.c"
  {
#line 2993 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 2996 "parse_tree.prog_io_util.c"
    {
#line 2998 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_7));
    }
#line 3001 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3003 "parse_tree.prog_io_util.c"
  }
#line 3005 "parse_tree.prog_io_util.c"
}

#line 3008 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 3011 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3013 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3015 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3017 "parse_tree.prog_io_util.c"
{
#line 3019 "parse_tree.prog_io_util.c"
  {
#line 3021 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3024 "parse_tree.prog_io_util.c"
    {
#line 3026 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3029 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3031 "parse_tree.prog_io_util.c"
  }
#line 3033 "parse_tree.prog_io_util.c"
}

#line 3036 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 3039 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3041 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3043 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3045 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3047 "parse_tree.prog_io_util.c"
{
#line 3049 "parse_tree.prog_io_util.c"
  {
#line 3051 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3054 "parse_tree.prog_io_util.c"
    {
#line 3056 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3059 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3061 "parse_tree.prog_io_util.c"
  }
#line 3063 "parse_tree.prog_io_util.c"
}

#line 3066 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 3069 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3071 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3073 "parse_tree.prog_io_util.c"
{
#line 3075 "parse_tree.prog_io_util.c"
  {
#line 3077 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3080 "parse_tree.prog_io_util.c"
    {
#line 3082 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3085 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3087 "parse_tree.prog_io_util.c"
  }
#line 3089 "parse_tree.prog_io_util.c"
}

#line 3092 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 3095 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3097 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3099 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3101 "parse_tree.prog_io_util.c"
{
#line 3103 "parse_tree.prog_io_util.c"
  {
#line 3105 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3108 "parse_tree.prog_io_util.c"
    {
#line 3110 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3113 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3115 "parse_tree.prog_io_util.c"
  }
#line 3117 "parse_tree.prog_io_util.c"
}

#line 3120 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 3123 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3125 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3127 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3129 "parse_tree.prog_io_util.c"
{
#line 3131 "parse_tree.prog_io_util.c"
  {
#line 3133 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3136 "parse_tree.prog_io_util.c"
    {
#line 3138 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3141 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3143 "parse_tree.prog_io_util.c"
  }
#line 3145 "parse_tree.prog_io_util.c"
}

#line 3148 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 3151 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3153 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3155 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3157 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3159 "parse_tree.prog_io_util.c"
{
#line 3161 "parse_tree.prog_io_util.c"
  {
#line 3163 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3166 "parse_tree.prog_io_util.c"
    {
#line 3168 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3171 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3173 "parse_tree.prog_io_util.c"
  }
#line 3175 "parse_tree.prog_io_util.c"
}

#line 3178 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 3181 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3183 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3185 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3187 "parse_tree.prog_io_util.c"
{
#line 3189 "parse_tree.prog_io_util.c"
  {
#line 3191 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3194 "parse_tree.prog_io_util.c"
    {
#line 3196 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3199 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3201 "parse_tree.prog_io_util.c"
  }
#line 3203 "parse_tree.prog_io_util.c"
}

#line 3206 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 3209 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3211 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3213 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3215 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3217 "parse_tree.prog_io_util.c"
{
#line 3219 "parse_tree.prog_io_util.c"
  {
#line 3221 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3224 "parse_tree.prog_io_util.c"
    {
#line 3226 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3229 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3231 "parse_tree.prog_io_util.c"
  }
#line 3233 "parse_tree.prog_io_util.c"
}

#line 3236 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 3239 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3241 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3243 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3245 "parse_tree.prog_io_util.c"
{
#line 3247 "parse_tree.prog_io_util.c"
  {
#line 3249 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3252 "parse_tree.prog_io_util.c"
    {
#line 3254 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3257 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3259 "parse_tree.prog_io_util.c"
  }
#line 3261 "parse_tree.prog_io_util.c"
}

#line 3264 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 3267 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3269 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3271 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3273 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3275 "parse_tree.prog_io_util.c"
{
#line 3277 "parse_tree.prog_io_util.c"
  {
#line 3279 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3282 "parse_tree.prog_io_util.c"
    {
#line 3284 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3287 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3289 "parse_tree.prog_io_util.c"
  }
#line 3291 "parse_tree.prog_io_util.c"
}

#line 3294 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 3297 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3299 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3301 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3303 "parse_tree.prog_io_util.c"
{
#line 3305 "parse_tree.prog_io_util.c"
  {
#line 3307 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3310 "parse_tree.prog_io_util.c"
    {
#line 3312 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3315 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3317 "parse_tree.prog_io_util.c"
  }
#line 3319 "parse_tree.prog_io_util.c"
}

#line 3322 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 3325 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3327 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3329 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3331 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3333 "parse_tree.prog_io_util.c"
{
#line 3335 "parse_tree.prog_io_util.c"
  {
#line 3337 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3340 "parse_tree.prog_io_util.c"
    {
#line 3342 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3345 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3347 "parse_tree.prog_io_util.c"
  }
#line 3349 "parse_tree.prog_io_util.c"
}

#line 3352 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 3355 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3357 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3359 "parse_tree.prog_io_util.c"
{
#line 3361 "parse_tree.prog_io_util.c"
  {
#line 3363 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3366 "parse_tree.prog_io_util.c"
    {
#line 3368 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____quantifier_type_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3371 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3373 "parse_tree.prog_io_util.c"
  }
#line 3375 "parse_tree.prog_io_util.c"
}

#line 3378 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 3381 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3383 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3385 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3387 "parse_tree.prog_io_util.c"
{
#line 3389 "parse_tree.prog_io_util.c"
  {
#line 3391 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3394 "parse_tree.prog_io_util.c"
    {
#line 3396 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____quantifier_type_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3399 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3401 "parse_tree.prog_io_util.c"
  }
#line 3403 "parse_tree.prog_io_util.c"
}

#line 3406 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 3409 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3411 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3413 "parse_tree.prog_io_util.c"
{
#line 3415 "parse_tree.prog_io_util.c"
  {
#line 3417 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3420 "parse_tree.prog_io_util.c"
    {
#line 3422 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3425 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3427 "parse_tree.prog_io_util.c"
  }
#line 3429 "parse_tree.prog_io_util.c"
}

#line 3432 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 3435 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3437 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3439 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3441 "parse_tree.prog_io_util.c"
{
#line 3443 "parse_tree.prog_io_util.c"
  {
#line 3445 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3448 "parse_tree.prog_io_util.c"
    {
#line 3450 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3453 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3455 "parse_tree.prog_io_util.c"
  }
#line 3457 "parse_tree.prog_io_util.c"
}

#line 3460 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 3463 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3465 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3467 "parse_tree.prog_io_util.c"
{
#line 3469 "parse_tree.prog_io_util.c"
  {
#line 3471 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3474 "parse_tree.prog_io_util.c"
    {
#line 3476 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3479 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3481 "parse_tree.prog_io_util.c"
  }
#line 3483 "parse_tree.prog_io_util.c"
}

#line 3486 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 3489 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3491 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3493 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3495 "parse_tree.prog_io_util.c"
{
#line 3497 "parse_tree.prog_io_util.c"
  {
#line 3499 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3502 "parse_tree.prog_io_util.c"
    {
#line 3504 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3507 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3509 "parse_tree.prog_io_util.c"
  }
#line 3511 "parse_tree.prog_io_util.c"
}

#line 898 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0(
#line 898 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 898 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 898 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_0_11,
#line 898 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_List_12)
#line 898 "prog_io_util.m"
{
#line 905 "prog_io_util.m"
  while (MR_TRUE)
#line 905 "prog_io_util.m"
    {
#line 905 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 905 "prog_io_util.m"
      {
#line 905 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 905 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__L_8;
#line 905 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__R_9;
#line 902 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_13_13;
#line 902 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 902 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 902 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 902 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_21_21;
#line 902 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_10;

#line 902 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 902 "prog_io_util.m"
              {
#line 902 "prog_io_util.m"
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 902 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
#line 902 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 902 "prog_io_util.m"
                  {
#line 902 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 902 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 902 "prog_io_util.m"
                      {
#line 902 "prog_io_util.m"
                        parse_tree__prog_io_util__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 902 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, (MR_Integer) 1)));
#line 902 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 902 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 902 "prog_io_util.m"
                          {
#line 902 "prog_io_util.m"
                            parse_tree__prog_io_util__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 902 "prog_io_util.m"
                            parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 902 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_util.m"
                          }
#line 902 "prog_io_util.m"
                      }
#line 902 "prog_io_util.m"
                  }
#line 902 "prog_io_util.m"
              }
#line 902 "prog_io_util.m"
          }
#line 905 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 903 "prog_io_util.m"
          {
#line 903 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_17_17;

#line 903 "prog_io_util.m"
            {
#line 903 "prog_io_util.m"
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_9, parse_tree__prog_io_util__STATE_VARIABLE_List_0_11, &parse_tree__prog_io_util__STATE_VARIABLE_List_17_17);
            }
#line 904 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 904 "prog_io_util.m"
            {
#line 904 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_8;
#line 904 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_List_0__tmp_copy_11 = parse_tree__prog_io_util__STATE_VARIABLE_List_17_17;

#line 904 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_List_0_11 = parse_tree__prog_io_util__STATE_VARIABLE_List_0__tmp_copy_11;
#line 904 "prog_io_util.m"
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
#line 904 "prog_io_util.m"
            }
#line 904 "prog_io_util.m"
            continue;
#line 903 "prog_io_util.m"
          }
#line 905 "prog_io_util.m"
        else
#line 906 "prog_io_util.m"
          {
#line 906 "prog_io_util.m"
            MR_Word base;
#line 906 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_List_12 = base;
#line 906 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
#line 906 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__STATE_VARIABLE_List_0_11));
#line 906 "prog_io_util.m"
          }
#line 905 "prog_io_util.m"
      }
#line 905 "prog_io_util.m"
      break;
#line 905 "prog_io_util.m"
    }
#line 898 "prog_io_util.m"
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
#line 3831 "parse_tree.prog_io_util.c"
  {
#line 3833 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 3836 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3838 "parse_tree.prog_io_util.c"
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

#line 971 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 971 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 971 "prog_io_util.m"
{
#line 971 "prog_io_util.m"
  {
#line 971 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 971 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 971 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 971 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 971 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 3935 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 971 "prog_io_util.m"
    else
#line 971 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 971 "prog_io_util.m"
        {
#line 971 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 971 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 971 "prog_io_util.m"
            {
#line 971 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 971 "prog_io_util.m"
              {
#line 971 "prog_io_util.m"
                mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
#line 971 "prog_io_util.m"
                return;
              }
#line 971 "prog_io_util.m"
            }
#line 971 "prog_io_util.m"
          else
#line 3964 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 971 "prog_io_util.m"
        }
#line 971 "prog_io_util.m"
      else
#line 971 "prog_io_util.m"
        {
#line 971 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 971 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3977 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 971 "prog_io_util.m"
          else
#line 971 "prog_io_util.m"
            {
#line 971 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 971 "prog_io_util.m"
              {
#line 971 "prog_io_util.m"
                mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
#line 971 "prog_io_util.m"
                return;
              }
#line 971 "prog_io_util.m"
            }
#line 971 "prog_io_util.m"
        }
#line 971 "prog_io_util.m"
  }
#line 971 "prog_io_util.m"
}

#line 971 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 971 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 971 "prog_io_util.m"
{
#line 971 "prog_io_util.m"
  {
#line 971 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 971 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 971 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 971 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 971 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 971 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 971 "prog_io_util.m"
    else
#line 971 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 971 "prog_io_util.m"
        {
#line 971 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 971 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4;

#line 971 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 971 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 971 "prog_io_util.m"
            {
#line 971 "prog_io_util.m"
              parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4047 "parse_tree.prog_io_util.c"
              {
#line 4049 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
              }
#line 971 "prog_io_util.m"
            }
#line 971 "prog_io_util.m"
        }
#line 971 "prog_io_util.m"
      else
#line 971 "prog_io_util.m"
        {
#line 971 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 971 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_6_6;

#line 971 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 971 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 971 "prog_io_util.m"
            {
#line 971 "prog_io_util.m"
              parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4073 "parse_tree.prog_io_util.c"
              {
#line 4075 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
              }
#line 971 "prog_io_util.m"
            }
#line 971 "prog_io_util.m"
        }
#line 971 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 971 "prog_io_util.m"
  }
#line 971 "prog_io_util.m"
}

#line 1028 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1028 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1028 "prog_io_util.m"
{
#line 1028 "prog_io_util.m"
  {
#line 1028 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1028 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1028 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1028 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
#line 1028 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 4115 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1028 "prog_io_util.m"
    else
#line 1028 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 1028 "prog_io_util.m"
        {
#line 1028 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1028 "prog_io_util.m"
            {
#line 1028 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
              {
#line 1028 "prog_io_util.m"
                mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
#line 1028 "prog_io_util.m"
                return;
              }
#line 1028 "prog_io_util.m"
            }
#line 1028 "prog_io_util.m"
          else
#line 1028 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4146 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "prog_io_util.m"
            else
#line 1028 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4152 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "prog_io_util.m"
              else
#line 4156 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "prog_io_util.m"
        }
#line 1028 "prog_io_util.m"
      else
#line 1028 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1028 "prog_io_util.m"
          {
#line 1028 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4171 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "prog_io_util.m"
            else
#line 1028 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1028 "prog_io_util.m"
                {
#line 1028 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
                  {
#line 1028 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
#line 1028 "prog_io_util.m"
                    return;
                  }
#line 1028 "prog_io_util.m"
                }
#line 1028 "prog_io_util.m"
              else
#line 1028 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4195 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "prog_io_util.m"
                else
#line 4199 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "prog_io_util.m"
          }
#line 1028 "prog_io_util.m"
        else
#line 1028 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "prog_io_util.m"
            {
#line 1028 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4214 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "prog_io_util.m"
              else
#line 1028 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4220 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "prog_io_util.m"
                else
#line 1028 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "prog_io_util.m"
                    {
#line 1028 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
                      {
#line 1028 "prog_io_util.m"
                        mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
#line 1028 "prog_io_util.m"
                        return;
                      }
#line 1028 "prog_io_util.m"
                    }
#line 1028 "prog_io_util.m"
                  else
#line 4242 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "prog_io_util.m"
            }
#line 1028 "prog_io_util.m"
          else
#line 1028 "prog_io_util.m"
            {
#line 1028 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4255 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "prog_io_util.m"
              else
#line 1028 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4261 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "prog_io_util.m"
                else
#line 1028 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4267 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "prog_io_util.m"
                  else
#line 1028 "prog_io_util.m"
                    {
#line 1028 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "prog_io_util.m"
                      {
#line 1028 "prog_io_util.m"
                        mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
#line 1028 "prog_io_util.m"
                        return;
                      }
#line 1028 "prog_io_util.m"
                    }
#line 1028 "prog_io_util.m"
            }
#line 1028 "prog_io_util.m"
  }
#line 1028 "prog_io_util.m"
}

#line 1028 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1028 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1028 "prog_io_util.m"
{
#line 1028 "prog_io_util.m"
  {
#line 1028 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1028 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1028 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1028 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 1028 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1028 "prog_io_util.m"
    else
#line 1028 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1028 "prog_io_util.m"
        {
#line 1028 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_10_10;

#line 1028 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1028 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
            {
#line 1028 "prog_io_util.m"
              parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4337 "parse_tree.prog_io_util.c"
              {
#line 4339 "parse_tree.prog_io_util.c"
                return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
              }
#line 1028 "prog_io_util.m"
            }
#line 1028 "prog_io_util.m"
        }
#line 1028 "prog_io_util.m"
      else
#line 1028 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1028 "prog_io_util.m"
          {
#line 1028 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 1028 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1028 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
              {
#line 1028 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4365 "parse_tree.prog_io_util.c"
                {
#line 4367 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
#line 1028 "prog_io_util.m"
              }
#line 1028 "prog_io_util.m"
          }
#line 1028 "prog_io_util.m"
        else
#line 1028 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "prog_io_util.m"
            {
#line 1028 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_4_4;

#line 1028 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1028 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
                {
#line 1028 "prog_io_util.m"
                  parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4393 "parse_tree.prog_io_util.c"
                  {
#line 4395 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                  }
#line 1028 "prog_io_util.m"
                }
#line 1028 "prog_io_util.m"
            }
#line 1028 "prog_io_util.m"
          else
#line 1028 "prog_io_util.m"
            {
#line 1028 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_6_6;

#line 1028 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1028 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
                {
#line 1028 "prog_io_util.m"
                  parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4419 "parse_tree.prog_io_util.c"
                  {
#line 4421 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                  }
#line 1028 "prog_io_util.m"
                }
#line 1028 "prog_io_util.m"
            }
#line 1028 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1028 "prog_io_util.m"
  }
#line 1028 "prog_io_util.m"
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

#line 4463 "parse_tree.prog_io_util.c"
    {
#line 4465 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4467 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4469 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4471 "parse_tree.prog_io_util.c"
    }
#line 4473 "parse_tree.prog_io_util.c"
    {
#line 4475 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4477 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4479 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4481 "parse_tree.prog_io_util.c"
    }
#line 4483 "parse_tree.prog_io_util.c"
    {
#line 4485 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4487 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4489 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 4491 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
#line 4493 "parse_tree.prog_io_util.c"
    }
#line 70 "prog_io_util.m"
    {
#line 70 "prog_io_util.m"
      parse_tree__prog_io_util____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_13_13, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
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

#line 4533 "parse_tree.prog_io_util.c"
    {
#line 4535 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4537 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4539 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 4541 "parse_tree.prog_io_util.c"
    }
#line 4543 "parse_tree.prog_io_util.c"
    {
#line 4545 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4547 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4549 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 4551 "parse_tree.prog_io_util.c"
    }
#line 4553 "parse_tree.prog_io_util.c"
    {
#line 4555 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4557 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4559 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 4561 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
#line 4563 "parse_tree.prog_io_util.c"
    }
#line 70 "prog_io_util.m"
    {
#line 70 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_12_12, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
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

#line 4603 "parse_tree.prog_io_util.c"
    {
#line 4605 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4607 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 4609 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4611 "parse_tree.prog_io_util.c"
    }
#line 4613 "parse_tree.prog_io_util.c"
    {
#line 4615 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4617 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4619 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 4621 "parse_tree.prog_io_util.c"
    }
#line 67 "prog_io_util.m"
    {
#line 67 "prog_io_util.m"
      parse_tree__prog_io_util____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_11_11, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
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

#line 4659 "parse_tree.prog_io_util.c"
    {
#line 4661 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4663 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 4665 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 4667 "parse_tree.prog_io_util.c"
    }
#line 4669 "parse_tree.prog_io_util.c"
    {
#line 4671 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4673 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4675 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 4677 "parse_tree.prog_io_util.c"
    }
#line 67 "prog_io_util.m"
    {
#line 67 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_10_10, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
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
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[6], parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
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
#line 4785 "parse_tree.prog_io_util.c"
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
#line 4814 "parse_tree.prog_io_util.c"
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
#line 4833 "parse_tree.prog_io_util.c"
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
#line 4855 "parse_tree.prog_io_util.c"
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
#line 4875 "parse_tree.prog_io_util.c"
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
#line 4895 "parse_tree.prog_io_util.c"
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
#line 4978 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 4980 "parse_tree.prog_io_util.c"
              {
#line 4982 "parse_tree.prog_io_util.c"
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
#line 5024 "parse_tree.prog_io_util.c"
              {
#line 5026 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_15, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_9_9);
              }
#line 57 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                {
#line 5033 "parse_tree.prog_io_util.c"
                  {
#line 5035 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_16, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_10_10);
                  }
#line 57 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                    {
#line 5042 "parse_tree.prog_io_util.c"
                      {
#line 5044 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_17, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_11_11);
                      }
#line 57 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 5049 "parse_tree.prog_io_util.c"
                        {
#line 5051 "parse_tree.prog_io_util.c"
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
#line 5099 "parse_tree.prog_io_util.c"
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
#line 5128 "parse_tree.prog_io_util.c"
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
#line 5145 "parse_tree.prog_io_util.c"
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
#line 5165 "parse_tree.prog_io_util.c"
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
#line 5185 "parse_tree.prog_io_util.c"
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
#line 5264 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5266 "parse_tree.prog_io_util.c"
              {
#line 5268 "parse_tree.prog_io_util.c"
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
#line 5304 "parse_tree.prog_io_util.c"
              {
#line 5306 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_8_8);
              }
#line 53 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
                {
#line 5313 "parse_tree.prog_io_util.c"
                  {
#line 5315 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_14, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_9_9);
                  }
#line 53 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 5320 "parse_tree.prog_io_util.c"
                    {
#line 5322 "parse_tree.prog_io_util.c"
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
#line 5366 "parse_tree.prog_io_util.c"
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
#line 5395 "parse_tree.prog_io_util.c"
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
#line 5410 "parse_tree.prog_io_util.c"
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
#line 5428 "parse_tree.prog_io_util.c"
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
#line 5503 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5505 "parse_tree.prog_io_util.c"
              {
#line 5507 "parse_tree.prog_io_util.c"
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
#line 5537 "parse_tree.prog_io_util.c"
              {
#line 5539 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
              }
#line 49 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 5544 "parse_tree.prog_io_util.c"
                {
#line 5546 "parse_tree.prog_io_util.c"
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
#line 5586 "parse_tree.prog_io_util.c"
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
#line 5615 "parse_tree.prog_io_util.c"
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
#line 5628 "parse_tree.prog_io_util.c"
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
#line 5700 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5702 "parse_tree.prog_io_util.c"
              {
#line 5704 "parse_tree.prog_io_util.c"
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
#line 5728 "parse_tree.prog_io_util.c"
              {
#line 5730 "parse_tree.prog_io_util.c"
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
#line 5830 "parse_tree.prog_io_util.c"
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
#line 5844 "parse_tree.prog_io_util.c"
            *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
          else
#line 186 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5850 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
            else
#line 5854 "parse_tree.prog_io_util.c"
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
#line 5869 "parse_tree.prog_io_util.c"
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
#line 5893 "parse_tree.prog_io_util.c"
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
#line 5920 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "prog_io_util.m"
                else
#line 5924 "parse_tree.prog_io_util.c"
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
#line 5939 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
              else
#line 186 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5945 "parse_tree.prog_io_util.c"
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
#line 5971 "parse_tree.prog_io_util.c"
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
#line 5986 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
              else
#line 186 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5992 "parse_tree.prog_io_util.c"
                  *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "prog_io_util.m"
                else
#line 186 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5998 "parse_tree.prog_io_util.c"
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
#line 6020 "parse_tree.prog_io_util.c"
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
#line 6116 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_9_9 == parse_tree__prog_io_util__V_11_11);
#line 186 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                  {
#line 6122 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_17_17 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 6124 "parse_tree.prog_io_util.c"
                    {
#line 6126 "parse_tree.prog_io_util.c"
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
#line 6154 "parse_tree.prog_io_util.c"
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
#line 6185 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_5_5 == parse_tree__prog_io_util__V_7_7);
#line 186 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 186 "prog_io_util.m"
                    {
#line 6191 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[3];
#line 6193 "parse_tree.prog_io_util.c"
                      {
#line 6195 "parse_tree.prog_io_util.c"
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
#line 6252 "parse_tree.prog_io_util.c"
  {
#line 6254 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 6257 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 6259 "parse_tree.prog_io_util.c"
  }
#line 138 "prog_io_util.m"
}

#line 1153 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1153 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1153 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10)
#line 1153 "prog_io_util.m"
{
#line 1157 "prog_io_util.m"
  {
#line 1157 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1157 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_11;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_12;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_37_37;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_39_39;
#line 1157 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;

#line 1158 "prog_io_util.m"
    {
#line 1158 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
#line 1160 "prog_io_util.m"
    {
#line 1160 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
#line 1160 "prog_io_util.m"
    }
#line 1161 "prog_io_util.m"
    {
#line 1161 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
#line 1161 "prog_io_util.m"
    }
#line 1161 "prog_io_util.m"
    {
#line 1161 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1161 "prog_io_util.m"
    }
#line 1161 "prog_io_util.m"
    {
#line 1161 "prog_io_util.m"
      parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[26])));
#line 1161 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1161 "prog_io_util.m"
    }
#line 1160 "prog_io_util.m"
    {
#line 1160 "prog_io_util.m"
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[25])));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1160 "prog_io_util.m"
    }
#line 1160 "prog_io_util.m"
    {
#line 1160 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1160 "prog_io_util.m"
    }
#line 1160 "prog_io_util.m"
    {
#line 1160 "prog_io_util.m"
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[24])));
#line 1160 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1160 "prog_io_util.m"
    }
#line 1159 "prog_io_util.m"
    {
#line 1159 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1159 "prog_io_util.m"
    }
#line 1159 "prog_io_util.m"
    {
#line 1159 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__V_13_13);
    }
#line 1163 "prog_io_util.m"
    {
#line 1163 "prog_io_util.m"
      parse_tree__prog_io_util__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__Term_9);
    }
#line 1163 "prog_io_util.m"
    {
#line 1163 "prog_io_util.m"
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
#line 1163 "prog_io_util.m"
    }
#line 1163 "prog_io_util.m"
    {
#line 1163 "prog_io_util.m"
      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "prog_io_util.m"
    }
#line 1163 "prog_io_util.m"
    {
#line 1163 "prog_io_util.m"
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1163 "prog_io_util.m"
    }
#line 1163 "prog_io_util.m"
    {
#line 1163 "prog_io_util.m"
      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "prog_io_util.m"
    }
#line 1162 "prog_io_util.m"
    {
#line 1162 "prog_io_util.m"
      MR_Word base;
#line 1162 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_10 = base;
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1162 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1162 "prog_io_util.m"
    }
#line 1157 "prog_io_util.m"
  }
#line 1153 "prog_io_util.m"
}

#line 1133 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1133 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1133 "prog_io_util.m"
{
#line 1136 "prog_io_util.m"
  {
#line 1136 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1136 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1136 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1137 "prog_io_util.m"
    {
#line 1137 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1139 "prog_io_util.m"
    {
#line 1139 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1139 "prog_io_util.m"
    }
#line 1139 "prog_io_util.m"
    {
#line 1139 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1139 "prog_io_util.m"
    }
#line 1139 "prog_io_util.m"
    {
#line 1139 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[23])));
#line 1139 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1139 "prog_io_util.m"
    }
#line 1138 "prog_io_util.m"
    {
#line 1138 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1138 "prog_io_util.m"
    }
#line 1138 "prog_io_util.m"
    {
#line 1138 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1141 "prog_io_util.m"
    {
#line 1141 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1141 "prog_io_util.m"
    {
#line 1141 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1141 "prog_io_util.m"
    }
#line 1141 "prog_io_util.m"
    {
#line 1141 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1141 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1141 "prog_io_util.m"
    }
#line 1141 "prog_io_util.m"
    {
#line 1141 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1141 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1141 "prog_io_util.m"
    }
#line 1141 "prog_io_util.m"
    {
#line 1141 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1141 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1141 "prog_io_util.m"
    }
#line 1140 "prog_io_util.m"
    {
#line 1140 "prog_io_util.m"
      MR_Word base;
#line 1140 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1140 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1140 "prog_io_util.m"
    }
#line 1136 "prog_io_util.m"
  }
#line 1133 "prog_io_util.m"
}

#line 848 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 848 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
#line 848 "prog_io_util.m"
{
#line 851 "prog_io_util.m"
  {
#line 851 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 851 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Functor_7;
#line 851 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args0_8;
#line 851 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args1_12;
#line 851 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ConsId_14;
#line 851 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_19;
#line 852 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 852 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 852 "prog_io_util.m"
      {
#line 852 "prog_io_util.m"
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
#line 852 "prog_io_util.m"
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
#line 852 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
#line 859 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 0))))
#line 854 "prog_io_util.m"
          {
#line 854 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_23_23;
#line 854 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__SymName_11;
#line 854 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__Arity_13;
#line 854 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_20_20;

#line 855 "prog_io_util.m"
            {
#line 855 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
            }
#line 854 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 854 "prog_io_util.m"
              {
#line 6686 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 857 "prog_io_util.m"
                {
#line 857 "prog_io_util.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_23_23, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                }
#line 858 "prog_io_util.m"
                {
#line 858 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 858 "prog_io_util.m"
                {
#line 858 "prog_io_util.m"
                  parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 858 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
#line 858 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
#line 858 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 858 "prog_io_util.m"
                }
#line 858 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 854 "prog_io_util.m"
              }
#line 854 "prog_io_util.m"
          }
#line 859 "prog_io_util.m"
        else
#line 859 "prog_io_util.m"
          if (((((((((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) == (MR_Integer) 0)))) || (((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) == (MR_mktag((MR_Integer) 2))))))
#line 868 "prog_io_util.m"
            {
#line 868 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_21;

#line 869 "prog_io_util.m"
              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 870 "prog_io_util.m"
              {
#line 870 "prog_io_util.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_21);
              }
#line 871 "prog_io_util.m"
              {
#line 871 "prog_io_util.m"
                parse_tree__prog_io_util__ConsId_14 = parse_tree__prog_util__make_functor_cons_id_2_f_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_21);
              }
#line 868 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 868 "prog_io_util.m"
            }
#line 859 "prog_io_util.m"
          else
#line 859 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 851 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 851 "prog_io_util.m"
          {
#line 873 "prog_io_util.m"
            {
#line 873 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_19);
            }
#line 851 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 851 "prog_io_util.m"
              {
#line 874 "prog_io_util.m"
                {
#line 874 "prog_io_util.m"
                  MR_Word base;
#line 874 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 874 "prog_io_util.m"
                  *parse_tree__prog_io_util__BoundInst_6 = base;
#line 874 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
#line 874 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_19));
#line 874 "prog_io_util.m"
                }
#line 874 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 851 "prog_io_util.m"
              }
#line 851 "prog_io_util.m"
          }
#line 852 "prog_io_util.m"
      }
#line 851 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 851 "prog_io_util.m"
  }
#line 848 "prog_io_util.m"
}

#line 840 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 840 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 840 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 840 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 840 "prog_io_util.m"
{
#line 843 "prog_io_util.m"
  {
#line 843 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 843 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "prog_io_util.m"
      {
#line 843 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 843 "prog_io_util.m"
      }
#line 843 "prog_io_util.m"
    else
#line 844 "prog_io_util.m"
      {
#line 844 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 844 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 844 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 844 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 845 "prog_io_util.m"
        {
#line 845 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 844 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 844 "prog_io_util.m"
          {
#line 846 "prog_io_util.m"
            {
#line 846 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 844 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 844 "prog_io_util.m"
              {
#line 844 "prog_io_util.m"
                {
#line 844 "prog_io_util.m"
                  MR_Word base;
#line 844 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 844 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 844 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 844 "prog_io_util.m"
                }
#line 844 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 844 "prog_io_util.m"
              }
#line 844 "prog_io_util.m"
          }
#line 844 "prog_io_util.m"
      }
#line 843 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 843 "prog_io_util.m"
  }
#line 840 "prog_io_util.m"
}

#line 833 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 833 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 833 "prog_io_util.m"
{
#line 833 "prog_io_util.m"
  {
#line 833 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 833 "prog_io_util.m"
    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
#line 833 "prog_io_util.m"
  }
#line 833 "prog_io_util.m"
}

#line 833 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 833 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 833 "prog_io_util.m"
{
#line 833 "prog_io_util.m"
  {
#line 833 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 833 "prog_io_util.m"
    {
#line 834 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_16_16;
#line 835 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_18_18;
#line 836 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_19_19;

#line 834 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
#line 834 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 834 "prog_io_util.m"
        {
#line 834 "prog_io_util.m"
          {
#line 834 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
#line 834 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
#line 834 "prog_io_util.m"
          }
#line 833 "prog_io_util.m"
          {
#line 834 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 834 "prog_io_util.m"
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 834 "prog_io_util.m"
              {
#line 834 "prog_io_util.m"
                {
#line 834 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 834 "prog_io_util.m"
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 834 "prog_io_util.m"
                }
#line 833 "prog_io_util.m"
                {
#line 835 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
#line 835 "prog_io_util.m"
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
#line 836 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
#line 836 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
#line 836 "prog_io_util.m"
                  {
#line 836 "prog_io_util.m"
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
#line 836 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 836 "prog_io_util.m"
                    {
#line 836 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
#line 836 "prog_io_util.m"
                      return;
                    }
#line 833 "prog_io_util.m"
                }
#line 834 "prog_io_util.m"
              }
#line 833 "prog_io_util.m"
          }
#line 834 "prog_io_util.m"
        }
#line 833 "prog_io_util.m"
    }
#line 833 "prog_io_util.m"
  }
#line 833 "prog_io_util.m"
}

#line 833 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 833 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 833 "prog_io_util.m"
{
#line 833 "prog_io_util.m"
  {
#line 833 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 833 "prog_io_util.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
#line 833 "prog_io_util.m"
      {
#line 833 "prog_io_util.m"
        {
#line 833 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12;

#line 833 "prog_io_util.m"
          {
#line 833 "prog_io_util.m"
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
#line 833 "prog_io_util.m"
        }
#line 833 "prog_io_util.m"
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 833 "prog_io_util.m"
      }
#line 833 "prog_io_util.m"
    else
#line 833 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 833 "prog_io_util.m"
  }
#line 833 "prog_io_util.m"
}

#line 824 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 824 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 824 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 824 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 824 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 824 "prog_io_util.m"
{
#line 824 "prog_io_util.m"
  {
#line 824 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

#line 827 "prog_io_util.m"
    {
#line 827 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__List_9;
#line 827 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__Functors0_10;
#line 827 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_21_21;

#line 896 "prog_io_util.m"
      {
#line 896 "prog_io_util.m"
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__List_9);
      }
#line 829 "prog_io_util.m"
      {
#line 829 "prog_io_util.m"
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__List_9, &parse_tree__prog_io_util__Functors0_10);
      }
#line 827 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 827 "prog_io_util.m"
        {
#line 7066 "parse_tree.prog_io_util.c"
          (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 830 "prog_io_util.m"
          {
#line 830 "prog_io_util.m"
            mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
          }
#line 833 "prog_io_util.m"
          {
#line 833 "prog_io_util.m"
            parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
          }
#line 832 "prog_io_util.m"
          (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
#line 827 "prog_io_util.m"
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 827 "prog_io_util.m"
            {
#line 838 "prog_io_util.m"
              parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "prog_io_util.m"
              {
#line 838 "prog_io_util.m"
                MR_Word base;
#line 838 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 838 "prog_io_util.m"
                *parse_tree__prog_io_util__Inst_8 = base;
#line 838 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 838 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
#line 838 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 838 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
#line 838 "prog_io_util.m"
              }
#line 838 "prog_io_util.m"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 827 "prog_io_util.m"
            }
#line 827 "prog_io_util.m"
        }
#line 827 "prog_io_util.m"
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 827 "prog_io_util.m"
    }
#line 824 "prog_io_util.m"
  }
#line 824 "prog_io_util.m"
}

#line 784 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(
#line 784 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 784 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 784 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_5)
#line 784 "prog_io_util.m"
{
#line 787 "prog_io_util.m"
  {
#line 787 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 787 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 793 "prog_io_util.m"
      {
#line 793 "prog_io_util.m"
        if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "any") == 0))
#line 796 "prog_io_util.m"
          {
#line 796 "prog_io_util.m"
            *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[18]);
#line 796 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 796 "prog_io_util.m"
          }
#line 793 "prog_io_util.m"
        else
#line 793 "prog_io_util.m"
          if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "free") == 0))
#line 793 "prog_io_util.m"
            {
#line 793 "prog_io_util.m"
              *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 793 "prog_io_util.m"
            }
#line 793 "prog_io_util.m"
          else
#line 793 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "ground") == 0))
#line 804 "prog_io_util.m"
              {
#line 804 "prog_io_util.m"
                *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5]);
#line 804 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 804 "prog_io_util.m"
              }
#line 793 "prog_io_util.m"
            else
#line 793 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "unique") == 0))
#line 805 "prog_io_util.m"
                {
#line 805 "prog_io_util.m"
                  *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[6]);
#line 805 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 805 "prog_io_util.m"
                }
#line 793 "prog_io_util.m"
              else
#line 793 "prog_io_util.m"
                if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "clobbered") == 0))
#line 807 "prog_io_util.m"
                  {
#line 807 "prog_io_util.m"
                    *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[7]);
#line 807 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 807 "prog_io_util.m"
                  }
#line 793 "prog_io_util.m"
                else
#line 793 "prog_io_util.m"
                  if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "unique_any") == 0))
#line 797 "prog_io_util.m"
                    {
#line 797 "prog_io_util.m"
                      *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[19]);
#line 797 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 797 "prog_io_util.m"
                    }
#line 793 "prog_io_util.m"
                  else
#line 793 "prog_io_util.m"
                    if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "not_reached") == 0))
#line 812 "prog_io_util.m"
                      {
#line 812 "prog_io_util.m"
                        *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 812 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 812 "prog_io_util.m"
                      }
#line 793 "prog_io_util.m"
                    else
#line 793 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "clobbered_any") == 0))
#line 799 "prog_io_util.m"
                        {
#line 799 "prog_io_util.m"
                          *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[20]);
#line 799 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 799 "prog_io_util.m"
                        }
#line 793 "prog_io_util.m"
                      else
#line 793 "prog_io_util.m"
                        if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique") == 0))
#line 806 "prog_io_util.m"
                          {
#line 806 "prog_io_util.m"
                            *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8]);
#line 806 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 806 "prog_io_util.m"
                          }
#line 793 "prog_io_util.m"
                        else
#line 793 "prog_io_util.m"
                          if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered") == 0))
#line 808 "prog_io_util.m"
                            {
#line 809 "prog_io_util.m"
                              *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[9]);
#line 808 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 808 "prog_io_util.m"
                            }
#line 793 "prog_io_util.m"
                          else
#line 793 "prog_io_util.m"
                            if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique_any") == 0))
#line 798 "prog_io_util.m"
                              {
#line 798 "prog_io_util.m"
                                *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[21]);
#line 798 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 798 "prog_io_util.m"
                              }
#line 793 "prog_io_util.m"
                            else
#line 793 "prog_io_util.m"
                              if ((strcmp(parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered_any") == 0))
#line 800 "prog_io_util.m"
                                {
#line 801 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Inst_5 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[22]);
#line 800 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 800 "prog_io_util.m"
                                }
#line 793 "prog_io_util.m"
                              else
#line 793 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 793 "prog_io_util.m"
      }
#line 787 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 787 "prog_io_util.m"
  }
#line 784 "prog_io_util.m"
}

#line 494 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 494 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 494 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 494 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 494 "prog_io_util.m"
{
#line 496 "prog_io_util.m"
  {
#line 496 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 496 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 499 "prog_io_util.m"
      {
#line 499 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 499 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 499 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_13;
#line 499 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__QualTerm_14;
#line 499 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term0_15;
#line 499 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 499 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20;
#line 499 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_21_21;

#line 500 "prog_io_util.m"
        {
#line 500 "prog_io_util.m"
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
#line 501 "prog_io_util.m"
        {
#line 501 "prog_io_util.m"
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
#line 502 "prog_io_util.m"
        {
#line 502 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
#line 502 "prog_io_util.m"
        }
#line 502 "prog_io_util.m"
        {
#line 502 "prog_io_util.m"
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 502 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 502 "prog_io_util.m"
        }
#line 503 "prog_io_util.m"
        {
#line 503 "prog_io_util.m"
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
#line 503 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "prog_io_util.m"
        }
#line 503 "prog_io_util.m"
        {
#line 503 "prog_io_util.m"
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
#line 503 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 503 "prog_io_util.m"
        }
#line 503 "prog_io_util.m"
        {
#line 503 "prog_io_util.m"
          MR_Word base;
#line 503 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 503 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 503 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[12]));
#line 503 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 503 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 503 "prog_io_util.m"
        }
#line 499 "prog_io_util.m"
      }
#line 496 "prog_io_util.m"
    else
#line 496 "prog_io_util.m"
      {
#line 496 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 496 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_7;
#line 496 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8;

#line 497 "prog_io_util.m"
        {
#line 497 "prog_io_util.m"
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
#line 498 "prog_io_util.m"
        {
#line 498 "prog_io_util.m"
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 498 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
#line 498 "prog_io_util.m"
        }
#line 498 "prog_io_util.m"
        {
#line 498 "prog_io_util.m"
          MR_Word base;
#line 498 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 498 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 498 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
#line 498 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 498 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
#line 498 "prog_io_util.m"
        }
#line 496 "prog_io_util.m"
      }
#line 496 "prog_io_util.m"
  }
#line 494 "prog_io_util.m"
}

#line 492 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 492 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 492 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 492 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
#line 492 "prog_io_util.m"
{
#line 492 "prog_io_util.m"
  {
#line 492 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
#line 492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__2_2;

#line 492 "prog_io_util.m"
    {
#line 492 "prog_io_util.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__2_2);
    }
#line 492 "prog_io_util.m"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__2_2));
#line 492 "prog_io_util.m"
  }
#line 492 "prog_io_util.m"
}

#line 489 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 489 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 489 "prog_io_util.m"
{
#line 491 "prog_io_util.m"
  {
#line 491 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 492 "prog_io_util.m"
    {
#line 492 "prog_io_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[4], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
#line 492 "prog_io_util.m"
      return;
    }
#line 491 "prog_io_util.m"
  }
#line 489 "prog_io_util.m"
}

#line 425 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 425 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 425 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 425 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 425 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9)
#line 425 "prog_io_util.m"
{
#line 428 "prog_io_util.m"
  {
#line 428 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 428 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_39;
#line 428 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_10;
#line 428 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_14;
#line 428 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_36;
#line 428 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ContextPieces_37;
#line 428 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 434 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgs_11;
#line 434 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Ret_12;
#line 430 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 430 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;
#line 430 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 430 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 430 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 430 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 428 "prog_io_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 429 "prog_io_util.m"
    {
#line 429 "prog_io_util.m"
      parse_tree__prog_io_util__parse_purity_annotation_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term0_6, parse_tree__prog_io_util__Purity_9, &parse_tree__prog_io_util__Term1_10);
    }
#line 430 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 430 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
      {
#line 430 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 430 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 430 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 430 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 430 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
          {
#line 430 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 430 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) "=") == 0);
#line 430 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
              {
#line 430 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 430 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
                  {
#line 430 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 430 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 430 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 430 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 430 "prog_io_util.m"
                      {
#line 430 "prog_io_util.m"
                        parse_tree__prog_io_util__Ret_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 430 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 430 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "prog_io_util.m"
                      }
#line 430 "prog_io_util.m"
                  }
#line 430 "prog_io_util.m"
              }
#line 430 "prog_io_util.m"
          }
#line 430 "prog_io_util.m"
      }
#line 434 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 431 "prog_io_util.m"
      {
#line 431 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_33;
#line 431 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__RetType_16;
#line 431 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_23_23;
#line 431 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_24_24;
#line 431 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__VarSet_30;
#line 431 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ContextPieces_31;
#line 431 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_32_32;
#line 431 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;

#line 431 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncAndArgs_11)) == (MR_mktag((MR_Integer) 0)));
#line 431 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 431 "prog_io_util.m"
          {
#line 431 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 0)));
#line 431 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 1)));
#line 431 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 2)));
#line 431 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 431 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 431 "prog_io_util.m"
              {
#line 431 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 431 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "func") == 0);
#line 431 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 431 "prog_io_util.m"
                  {
#line 7660 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeCtorInfo_8_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 327 "prog_io_util.m"
                    {
#line 327 "prog_io_util.m"
                      parse_tree__prog_io_util__VarSet_30 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_33);
                    }
#line 328 "prog_io_util.m"
                    parse_tree__prog_io_util__ContextPieces_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 329 "prog_io_util.m"
                    {
#line 329 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Ret_12, parse_tree__prog_io_util__VarSet_30, parse_tree__prog_io_util__ContextPieces_31, &parse_tree__prog_io_util__V_32_32);
                    }
#line 329 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 329 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 329 "prog_io_util.m"
                      {
#line 329 "prog_io_util.m"
                        parse_tree__prog_io_util__RetType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 433 "prog_io_util.m"
                        {
#line 433 "prog_io_util.m"
                          MR_Word base;
#line 433 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeRet_8 = base;
#line 433 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_16));
#line 433 "prog_io_util.m"
                        }
#line 433 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 329 "prog_io_util.m"
                      }
#line 431 "prog_io_util.m"
                  }
#line 431 "prog_io_util.m"
              }
#line 431 "prog_io_util.m"
          }
#line 431 "prog_io_util.m"
      }
#line 434 "prog_io_util.m"
    else
#line 435 "prog_io_util.m"
      {
#line 435 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_25_25;
#line 435 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_26_26;
#line 435 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;

#line 435 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 435 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
          {
#line 435 "prog_io_util.m"
            parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 435 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 435 "prog_io_util.m"
            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 435 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 435 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
              {
#line 435 "prog_io_util.m"
                parse_tree__prog_io_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 435 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_26_26, (MR_String) "pred") == 0);
#line 435 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
                  {
#line 436 "prog_io_util.m"
                    *parse_tree__prog_io_util__MaybeRet_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 435 "prog_io_util.m"
                  }
#line 435 "prog_io_util.m"
              }
#line 435 "prog_io_util.m"
          }
#line 435 "prog_io_util.m"
      }
#line 428 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 428 "prog_io_util.m"
      {
#line 7759 "parse_tree.prog_io_util.c"
        parse_tree__prog_io_util__TypeCtorInfo_8_39 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 393 "prog_io_util.m"
        {
#line 393 "prog_io_util.m"
          parse_tree__prog_io_util__VarSet_36 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_39);
        }
#line 394 "prog_io_util.m"
        parse_tree__prog_io_util__ContextPieces_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "prog_io_util.m"
        {
#line 395 "prog_io_util.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_14, parse_tree__prog_io_util__VarSet_36, parse_tree__prog_io_util__ContextPieces_37, &parse_tree__prog_io_util__V_38_38);
        }
#line 395 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 395 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 395 "prog_io_util.m"
          *parse_tree__prog_io_util__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 428 "prog_io_util.m"
      }
#line 428 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 428 "prog_io_util.m"
  }
#line 425 "prog_io_util.m"
}

#line 400 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 400 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 400 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__5_5)
#line 400 "prog_io_util.m"
{
#line 403 "prog_io_util.m"
  while (MR_TRUE)
#line 403 "prog_io_util.m"
    {
#line 403 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 403 "prog_io_util.m"
      {
#line 403 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded;

#line 403 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "prog_io_util.m"
          {
#line 403 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Types_9;

#line 404 "prog_io_util.m"
            {
#line 404 "prog_io_util.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_4, &parse_tree__prog_io_util__Types_9);
            }
#line 403 "prog_io_util.m"
            {
#line 403 "prog_io_util.m"
              MR_Word base;
#line 403 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = base;
#line 403 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Types_9));
#line 403 "prog_io_util.m"
            }
#line 403 "prog_io_util.m"
          }
#line 403 "prog_io_util.m"
        else
#line 405 "prog_io_util.m"
          {
#line 405 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 405 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Result0_16;

#line 406 "prog_io_util.m"
            {
#line 406 "prog_io_util.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_10, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__Result0_16);
            }
#line 410 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_16)) == (MR_mktag((MR_Integer) 0))))
#line 412 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = (MR_Word) parse_tree__prog_io_util__Result0_16;
#line 410 "prog_io_util.m"
            else
#line 408 "prog_io_util.m"
              {
#line 408 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_16, (MR_Integer) 0)));
#line 408 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 409 "prog_io_util.m"
                {
#line 409 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_17));
#line 409 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RevTypes_4));
#line 409 "prog_io_util.m"
                }
#line 409 "prog_io_util.m"
                /* direct tailcall eliminated */
#line 409 "prog_io_util.m"
                {
#line 409 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_11;
#line 409 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RevTypes__tmp_copy_4 = parse_tree__prog_io_util__V_19_19;

#line 409 "prog_io_util.m"
                  parse_tree__prog_io_util__RevTypes_4 = parse_tree__prog_io_util__RevTypes__tmp_copy_4;
#line 409 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
#line 409 "prog_io_util.m"
                }
#line 409 "prog_io_util.m"
                continue;
#line 408 "prog_io_util.m"
              }
#line 405 "prog_io_util.m"
          }
#line 403 "prog_io_util.m"
      }
#line 403 "prog_io_util.m"
      break;
#line 403 "prog_io_util.m"
    }
#line 400 "prog_io_util.m"
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
#line 1240 "prog_io_util.m"
  {
#line 1240 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1240 "prog_io_util.m"
    *parse_tree__prog_io_util__Term_2 = parse_tree__prog_io_util__Term_4;
#line 1240 "prog_io_util.m"
    *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1240 "prog_io_util.m"
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
#line 1227 "prog_io_util.m"
  {
#line 1227 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1227 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__HeadVar__2_2;

#line 1227 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "solver type specifier";
#line 1227 "prog_io_util.m"
    else
#line 1227 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1227 "prog_io_util.m"
        {
#line 1227 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1232 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1227 "prog_io_util.m"
          if ((parse_tree__prog_io_util__V_13_13 == (MR_Integer) 0))
#line 1235 "prog_io_util.m"
            parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existentially quantified type class constraint (\140=>\')";
#line 1227 "prog_io_util.m"
          else
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "type class constraint (\140<=\')";
#line 1227 "prog_io_util.m"
        }
#line 1227 "prog_io_util.m"
      else
#line 1227 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1227 "prog_io_util.m"
          parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "purity specifier";
#line 1227 "prog_io_util.m"
        else
#line 1227 "prog_io_util.m"
          {
#line 1227 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1228 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1227 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_15_15 == (MR_Integer) 0))
#line 1231 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existential quantifier (\140some\')";
#line 1227 "prog_io_util.m"
            else
#line 1229 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "universal quantifier (\140all\')";
#line 1227 "prog_io_util.m"
          }
#line 1227 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 1227 "prog_io_util.m"
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
#line 1223 "prog_io_util.m"
  {
#line 1223 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_4)) == (MR_mktag((MR_Integer) 1)));
#line 1223 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Attr_8;
#line 1223 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_9;
#line 1214 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1214 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__V_7_7;
#line 1215 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 1214 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1214 "prog_io_util.m"
      {
#line 1214 "prog_io_util.m"
        parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_4, (MR_Integer) 0));
#line 1215 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Attributes_5)) == (MR_mktag((MR_Integer) 1)));
#line 1215 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1215 "prog_io_util.m"
          {
#line 1215 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 0)));
#line 1215 "prog_io_util.m"
            parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 1)));
#line 1215 "prog_io_util.m"
            parse_tree__prog_io_util__Attr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 1215 "prog_io_util.m"
            parse_tree__prog_io_util__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 1)));
#line 1215 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1215 "prog_io_util.m"
          }
#line 1214 "prog_io_util.m"
      }
#line 1223 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1219 "prog_io_util.m"
      {
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Pieces_11;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Spec_12;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1219 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_18_18;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_28_28;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1219 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;

#line 1218 "prog_io_util.m"
        {
#line 1218 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = parse_tree__prog_io_util__attribute_description_1_f_0(parse_tree__prog_io_util__Attr_8);
        }
#line 1218 "prog_io_util.m"
        {
#line 1218 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1218 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1218 "prog_io_util.m"
        }
#line 1218 "prog_io_util.m"
        {
#line 1218 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1218 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1218 "prog_io_util.m"
        }
#line 1218 "prog_io_util.m"
        {
#line 1218 "prog_io_util.m"
          parse_tree__prog_io_util__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[17])));
#line 1218 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1218 "prog_io_util.m"
        }
#line 1221 "prog_io_util.m"
        {
#line 1221 "prog_io_util.m"
          parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_11));
#line 1221 "prog_io_util.m"
        }
#line 1221 "prog_io_util.m"
        {
#line 1221 "prog_io_util.m"
          parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "prog_io_util.m"
        }
#line 1221 "prog_io_util.m"
        {
#line 1221 "prog_io_util.m"
          parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_9));
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1221 "prog_io_util.m"
        }
#line 1221 "prog_io_util.m"
        {
#line 1221 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1221 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "prog_io_util.m"
        }
#line 1220 "prog_io_util.m"
        {
#line 1220 "prog_io_util.m"
          parse_tree__prog_io_util__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1220 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1220 "prog_io_util.m"
        }
#line 1222 "prog_io_util.m"
        {
#line 1222 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_12));
#line 1222 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "prog_io_util.m"
        }
#line 1222 "prog_io_util.m"
        {
#line 1222 "prog_io_util.m"
          MR_Word base;
#line 1222 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_6 = base;
#line 1222 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1222 "prog_io_util.m"
        }
#line 1219 "prog_io_util.m"
      }
#line 1223 "prog_io_util.m"
    else
#line 1224 "prog_io_util.m"
      *parse_tree__prog_io_util__Result_6 = parse_tree__prog_io_util__Result0_4;
#line 1223 "prog_io_util.m"
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
#line 1181 "prog_io_util.m"
  {
#line 1181 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArgTerms_6)) == (MR_mktag((MR_Integer) 1)));
#line 1181 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1181 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_35_35;

#line 1190 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1190 "prog_io_util.m"
      {
#line 1190 "prog_io_util.m"
        parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 0)));
#line 1190 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 1)));
#line 1181 "prog_io_util.m"
        if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "<=") == 0))
#line 1189 "prog_io_util.m"
          {
#line 1189 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__ConstraintsTerm_9;
#line 1189 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23;
#line 1189 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24;

#line 1190 "prog_io_util.m"
            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1190 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1190 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1190 "prog_io_util.m"
              {
#line 1190 "prog_io_util.m"
                parse_tree__prog_io_util__ConstraintsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1190 "prog_io_util.m"
                parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1190 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1189 "prog_io_util.m"
                  {
#line 1191 "prog_io_util.m"
                    parse_tree__prog_io_util__V_24_24 = (MR_Integer) 1;
#line 1191 "prog_io_util.m"
                    {
#line 1191 "prog_io_util.m"
                      MR_Word base;
#line 1191 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io_util.m"
                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1191 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
#line 1191 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_9));
#line 1191 "prog_io_util.m"
                    }
#line 1191 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1189 "prog_io_util.m"
                  }
#line 1190 "prog_io_util.m"
              }
#line 1189 "prog_io_util.m"
          }
#line 1181 "prog_io_util.m"
        else
#line 1181 "prog_io_util.m"
          if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "=>") == 0))
#line 1193 "prog_io_util.m"
            {
#line 1193 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_20_20;
#line 1193 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_21_21;
#line 1193 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ConstraintsTerm_29;

#line 1194 "prog_io_util.m"
              *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1194 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1194 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1194 "prog_io_util.m"
                {
#line 1194 "prog_io_util.m"
                  parse_tree__prog_io_util__ConstraintsTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1194 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1194 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1193 "prog_io_util.m"
                    {
#line 1195 "prog_io_util.m"
                      parse_tree__prog_io_util__V_21_21 = (MR_Integer) 0;
#line 1195 "prog_io_util.m"
                      {
#line 1195 "prog_io_util.m"
                        MR_Word base;
#line 1195 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "prog_io_util.m"
                        *parse_tree__prog_io_util__Attribute_7 = base;
#line 1195 "prog_io_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1195 "prog_io_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_29));
#line 1195 "prog_io_util.m"
                      }
#line 1195 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1193 "prog_io_util.m"
                    }
#line 1194 "prog_io_util.m"
                }
#line 1193 "prog_io_util.m"
            }
#line 1181 "prog_io_util.m"
          else
#line 1181 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "all") == 0))
#line 1202 "prog_io_util.m"
              {
#line 1202 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_33_33;
#line 1202 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14;
#line 1202 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;
#line 1202 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TVars_31;

#line 1203 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1203 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1203 "prog_io_util.m"
                  {
#line 1203 "prog_io_util.m"
                    *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1203 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1203 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1202 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1202 "prog_io_util.m"
                      {
#line 8371 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1204 "prog_io_util.m"
                        {
#line 1204 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_33_33, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_31);
                        }
#line 1202 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1202 "prog_io_util.m"
                          {
#line 1205 "prog_io_util.m"
                            parse_tree__prog_io_util__V_15_15 = (MR_Integer) 1;
#line 1205 "prog_io_util.m"
                            {
#line 1205 "prog_io_util.m"
                              MR_Word base;
#line 1205 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "prog_io_util.m"
                              *parse_tree__prog_io_util__Attribute_7 = base;
#line 1205 "prog_io_util.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1205 "prog_io_util.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_31));
#line 1205 "prog_io_util.m"
                            }
#line 1205 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1202 "prog_io_util.m"
                          }
#line 1202 "prog_io_util.m"
                      }
#line 1203 "prog_io_util.m"
                  }
#line 1202 "prog_io_util.m"
              }
#line 1181 "prog_io_util.m"
            else
#line 1181 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "some") == 0))
#line 1197 "prog_io_util.m"
                {
#line 1197 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeCtorInfo_32_32;
#line 1197 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TVars_11;
#line 1197 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_17_17;
#line 1197 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_18_18;

#line 1198 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1198 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1198 "prog_io_util.m"
                    {
#line 1198 "prog_io_util.m"
                      *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1198 "prog_io_util.m"
                      parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1198 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1197 "prog_io_util.m"
                        {
#line 8439 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1199 "prog_io_util.m"
                          {
#line 1199 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_32_32, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_11);
                          }
#line 1197 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1197 "prog_io_util.m"
                            {
#line 1200 "prog_io_util.m"
                              parse_tree__prog_io_util__V_18_18 = (MR_Integer) 0;
#line 1200 "prog_io_util.m"
                              {
#line 1200 "prog_io_util.m"
                                MR_Word base;
#line 1200 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "prog_io_util.m"
                                *parse_tree__prog_io_util__Attribute_7 = base;
#line 1200 "prog_io_util.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1200 "prog_io_util.m"
                                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_11));
#line 1200 "prog_io_util.m"
                              }
#line 1200 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1197 "prog_io_util.m"
                            }
#line 1197 "prog_io_util.m"
                        }
#line 1198 "prog_io_util.m"
                    }
#line 1197 "prog_io_util.m"
                }
#line 1181 "prog_io_util.m"
              else
#line 1181 "prog_io_util.m"
                if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "impure") == 0))
#line 1181 "prog_io_util.m"
                  {
#line 1181 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_28_28;

#line 1182 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1181 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1181 "prog_io_util.m"
                      {
#line 1182 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1183 "prog_io_util.m"
                        parse_tree__prog_io_util__V_28_28 = (MR_Integer) 2;
#line 1183 "prog_io_util.m"
                        *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[10]);
#line 1183 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1181 "prog_io_util.m"
                      }
#line 1181 "prog_io_util.m"
                  }
#line 1181 "prog_io_util.m"
                else
#line 1181 "prog_io_util.m"
                  if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "solver") == 0))
#line 1207 "prog_io_util.m"
                    {
#line 1208 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1207 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1207 "prog_io_util.m"
                        {
#line 1208 "prog_io_util.m"
                          *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1209 "prog_io_util.m"
                          *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1207 "prog_io_util.m"
                        }
#line 1207 "prog_io_util.m"
                    }
#line 1181 "prog_io_util.m"
                  else
#line 1181 "prog_io_util.m"
                    if ((strcmp(parse_tree__prog_io_util__Functor_5, (MR_String) "semipure") == 0))
#line 1185 "prog_io_util.m"
                      {
#line 1185 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_26_26;

#line 1186 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1185 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1185 "prog_io_util.m"
                          {
#line 1186 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1187 "prog_io_util.m"
                            parse_tree__prog_io_util__V_26_26 = (MR_Integer) 1;
#line 1187 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[11]);
#line 1187 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1185 "prog_io_util.m"
                          }
#line 1185 "prog_io_util.m"
                      }
#line 1181 "prog_io_util.m"
                    else
#line 1181 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1190 "prog_io_util.m"
      }
#line 1181 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1181 "prog_io_util.m"
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
#line 1169 "prog_io_util.m"
  {
#line 1169 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1169 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1169 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1169 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_21_21;
#line 1169 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;

#line 1169 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1169 "prog_io_util.m"
      {
#line 1169 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
#line 1169 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
#line 1169 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
#line 1173 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1173 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1173 "prog_io_util.m"
          {
#line 1173 "prog_io_util.m"
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1169 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "prog_io_util.m"
              {
#line 1173 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
#line 1173 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1173 "prog_io_util.m"
                  {
#line 1174 "prog_io_util.m"
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1174 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1173 "prog_io_util.m"
                  }
#line 1173 "prog_io_util.m"
              }
#line 1169 "prog_io_util.m"
            else
#line 1169 "prog_io_util.m"
              {
#line 1169 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
#line 1169 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerm_6;
#line 1169 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerms_8;
#line 1169 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1169 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1169 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
#line 1169 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1169 "prog_io_util.m"
                  {
#line 1169 "prog_io_util.m"
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
#line 1169 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
#line 1169 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1169 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1169 "prog_io_util.m"
                      {
#line 1169 "prog_io_util.m"
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1169 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1169 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1169 "prog_io_util.m"
                          {
#line 1170 "prog_io_util.m"
                            {
#line 1170 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
#line 1169 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1169 "prog_io_util.m"
                              {
#line 1171 "prog_io_util.m"
                                {
#line 1171 "prog_io_util.m"
                                  MR_Word base;
#line 1171 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Terms_4 = base;
#line 1171 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
#line 1171 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
#line 1171 "prog_io_util.m"
                                }
#line 1171 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1169 "prog_io_util.m"
                              }
#line 1169 "prog_io_util.m"
                          }
#line 1169 "prog_io_util.m"
                      }
#line 1169 "prog_io_util.m"
                  }
#line 1169 "prog_io_util.m"
              }
#line 1173 "prog_io_util.m"
          }
#line 1169 "prog_io_util.m"
      }
#line 1169 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1169 "prog_io_util.m"
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
#line 913 "prog_io_util.m"
  {
#line 913 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 913 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "prog_io_util.m"
      {
#line 913 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
#line 913 "prog_io_util.m"
      }
#line 913 "prog_io_util.m"
    else
#line 914 "prog_io_util.m"
      {
#line 914 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 914 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 914 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__X_Result_10;
#line 914 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Xs_Result_11;
#line 915 "prog_io_util.m"
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
#line 915 "prog_io_util.m"
        MR_Box parse_tree__prog_io_util__conv1_X_Result_10;

#line 915 "prog_io_util.m"
        {
#line 915 "prog_io_util.m"
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__X_7)), &parse_tree__prog_io_util__conv1_X_Result_10);
        }
#line 915 "prog_io_util.m"
        parse_tree__prog_io_util__X_Result_10 = ((MR_Word) parse_tree__prog_io_util__conv1_X_Result_10);
#line 916 "prog_io_util.m"
        {
#line 916 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_12, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Xs_8, &parse_tree__prog_io_util__Xs_Result_11);
        }
#line 924 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__X_Result_10)) == (MR_mktag((MR_Integer) 0))))
#line 924 "prog_io_util.m"
          {
#line 924 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__X_Result_10, (MR_Integer) 0)));

#line 924 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Xs_Result_11)) == (MR_mktag((MR_Integer) 0))))
#line 924 "prog_io_util.m"
              {
#line 924 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Xs_Result_11, (MR_Integer) 0)));
#line 924 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 925 "prog_io_util.m"
                {
#line 925 "prog_io_util.m"
                  parse_tree__prog_io_util__V_15_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_14);
                }
#line 925 "prog_io_util.m"
                {
#line 925 "prog_io_util.m"
                  MR_Word base;
#line 925 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 925 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 925 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 925 "prog_io_util.m"
                }
#line 924 "prog_io_util.m"
              }
#line 924 "prog_io_util.m"
            else
#line 926 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__X_Result_10;
#line 924 "prog_io_util.m"
          }
#line 924 "prog_io_util.m"
        else
#line 924 "prog_io_util.m"
          {
#line 924 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__X_Result_10, (MR_Integer) 0));

#line 924 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Xs_Result_11)) == (MR_mktag((MR_Integer) 0))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Xs_Result_11;
#line 924 "prog_io_util.m"
            else
#line 928 "prog_io_util.m"
              {
#line 928 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Xs_Result_11, (MR_Integer) 0)));
#line 928 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;

#line 928 "prog_io_util.m"
                {
#line 928 "prog_io_util.m"
                  parse_tree__prog_io_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_22_22, 0) = parse_tree__prog_io_util__V_25_25;
#line 928 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__Xs_21));
#line 928 "prog_io_util.m"
                }
#line 928 "prog_io_util.m"
                {
#line 928 "prog_io_util.m"
                  MR_Word base;
#line 928 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 928 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 928 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 928 "prog_io_util.m"
                }
#line 928 "prog_io_util.m"
              }
#line 924 "prog_io_util.m"
          }
#line 914 "prog_io_util.m"
      }
#line 913 "prog_io_util.m"
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
#line 909 "prog_io_util.m"
  {
#line 909 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 909 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__List_7;

#line 896 "prog_io_util.m"
    {
#line 896 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__List_7);
    }
#line 911 "prog_io_util.m"
    {
#line 911 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
#line 911 "prog_io_util.m"
      return;
    }
#line 909 "prog_io_util.m"
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
#line 887 "prog_io_util.m"
  {
#line 887 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 896 "prog_io_util.m"
    {
#line 896 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__List_4);
#line 896 "prog_io_util.m"
      return;
    }
#line 887 "prog_io_util.m"
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
#line 882 "prog_io_util.m"
  {
#line 882 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 882 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 882 "prog_io_util.m"
      *parse_tree__prog_io_util__Term_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 882 "prog_io_util.m"
    else
#line 883 "prog_io_util.m"
      {
#line 883 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 883 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 883 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_12;
#line 883 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 883 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;

#line 884 "prog_io_util.m"
        {
#line 884 "prog_io_util.m"
          parse_tree__prog_io_util__list_to_conjunction_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__Second_9, parse_tree__prog_io_util__Rest_10, &parse_tree__prog_io_util__Tail_12);
        }
#line 885 "prog_io_util.m"
        {
#line 885 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 885 "prog_io_util.m"
        }
#line 885 "prog_io_util.m"
        {
#line 885 "prog_io_util.m"
          parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar__2_2));
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 885 "prog_io_util.m"
        }
#line 885 "prog_io_util.m"
        {
#line 885 "prog_io_util.m"
          MR_Word base;
#line 885 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 885 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_4 = base;
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
#line 885 "prog_io_util.m"
        }
#line 883 "prog_io_util.m"
      }
#line 882 "prog_io_util.m"
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
#line 879 "prog_io_util.m"
  {
#line 879 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 896 "prog_io_util.m"
    {
#line 896 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__List_4);
#line 896 "prog_io_util.m"
      return;
    }
#line 879 "prog_io_util.m"
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
#line 876 "prog_io_util.m"
  {
#line 876 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 896 "prog_io_util.m"
    {
#line 896 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_108_105_115_116_95_50_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__List_4);
#line 896 "prog_io_util.m"
      return;
    }
#line 876 "prog_io_util.m"
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
#line 814 "prog_io_util.m"
  {
#line 814 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 814 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "det") == 0))
#line 814 "prog_io_util.m"
      {
#line 814 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 0;
#line 814 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 814 "prog_io_util.m"
      }
#line 814 "prog_io_util.m"
    else
#line 814 "prog_io_util.m"
      if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "multi") == 0))
#line 818 "prog_io_util.m"
        {
#line 818 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 2;
#line 818 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 818 "prog_io_util.m"
        }
#line 814 "prog_io_util.m"
      else
#line 814 "prog_io_util.m"
        if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "nondet") == 0))
#line 817 "prog_io_util.m"
          {
#line 817 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 3;
#line 817 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 817 "prog_io_util.m"
          }
#line 814 "prog_io_util.m"
        else
#line 814 "prog_io_util.m"
          if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "failure") == 0))
#line 822 "prog_io_util.m"
            {
#line 822 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 7;
#line 822 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 822 "prog_io_util.m"
            }
#line 814 "prog_io_util.m"
          else
#line 814 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "semidet") == 0))
#line 820 "prog_io_util.m"
              {
#line 820 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 1;
#line 820 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 820 "prog_io_util.m"
              }
#line 814 "prog_io_util.m"
            else
#line 814 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "cc_multi") == 0))
#line 816 "prog_io_util.m"
                {
#line 816 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 4;
#line 816 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 816 "prog_io_util.m"
                }
#line 814 "prog_io_util.m"
              else
#line 814 "prog_io_util.m"
                if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "multidet") == 0))
#line 819 "prog_io_util.m"
                  {
#line 819 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 2;
#line 819 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 819 "prog_io_util.m"
                  }
#line 814 "prog_io_util.m"
                else
#line 814 "prog_io_util.m"
                  if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "cc_nondet") == 0))
#line 815 "prog_io_util.m"
                    {
#line 815 "prog_io_util.m"
                      *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 5;
#line 815 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 815 "prog_io_util.m"
                    }
#line 814 "prog_io_util.m"
                  else
#line 814 "prog_io_util.m"
                    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "erroneous") == 0))
#line 821 "prog_io_util.m"
                      {
#line 821 "prog_io_util.m"
                        *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Integer) 6;
#line 821 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 821 "prog_io_util.m"
                      }
#line 814 "prog_io_util.m"
                    else
#line 814 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 814 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 814 "prog_io_util.m"
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
#line 634 "prog_io_util.m"
  {
#line 634 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 634 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 636 "prog_io_util.m"
      {
#line 636 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 636 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 636 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_14;
#line 637 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2)));
#line 643 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Result0_15;

#line 638 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_11)) == (MR_mktag((MR_Integer) 0)));
#line 638 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 638 "prog_io_util.m"
          {
#line 638 "prog_io_util.m"
            parse_tree__prog_io_util__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_11, (MR_Integer) 0)));
#line 640 "prog_io_util.m"
            {
#line 640 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(parse_tree__prog_io_util__Name_14, parse_tree__prog_io_util__Args0_12, &parse_tree__prog_io_util__Result0_15);
            }
#line 643 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 642 "prog_io_util.m"
              {
#line 642 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Result0_15;
#line 642 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 642 "prog_io_util.m"
              }
#line 643 "prog_io_util.m"
            else
#line 661 "prog_io_util.m"
              {
#line 661 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_17;
#line 661 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerm_18;
#line 651 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredTerm_16;
#line 651 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_52_52;
#line 651 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_53_53;
#line 651 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;
#line 651 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_55_55;
#line 653 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 651 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 651 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 651 "prog_io_util.m"
                  {
#line 652 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 652 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 652 "prog_io_util.m"
                      {
#line 652 "prog_io_util.m"
                        parse_tree__prog_io_util__PredTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 652 "prog_io_util.m"
                        parse_tree__prog_io_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 652 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 652 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 652 "prog_io_util.m"
                          {
#line 652 "prog_io_util.m"
                            parse_tree__prog_io_util__DetTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, (MR_Integer) 0)));
#line 652 "prog_io_util.m"
                            parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, (MR_Integer) 1)));
#line 652 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 651 "prog_io_util.m"
                              {
#line 653 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_16)) == (MR_mktag((MR_Integer) 0)));
#line 653 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 653 "prog_io_util.m"
                                  {
#line 653 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 0)));
#line 653 "prog_io_util.m"
                                    parse_tree__prog_io_util__ArgModesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 1)));
#line 653 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 2)));
#line 653 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_54_54)) == (MR_mktag((MR_Integer) 0)));
#line 653 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 653 "prog_io_util.m"
                                      {
#line 653 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_54_54, (MR_Integer) 0)));
#line 653 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_55_55, (MR_String) "pred") == 0);
#line 653 "prog_io_util.m"
                                      }
#line 653 "prog_io_util.m"
                                  }
#line 651 "prog_io_util.m"
                              }
#line 652 "prog_io_util.m"
                          }
#line 652 "prog_io_util.m"
                      }
#line 651 "prog_io_util.m"
                  }
#line 661 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 655 "prog_io_util.m"
                  {
#line 655 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__DetString_20;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Detism_22;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes_23;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__PredInst_24;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_56_56;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_57_57;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_58_58;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_59_59;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_60_60;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_61_61;
#line 655 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_21_21;

#line 655 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 655 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 655 "prog_io_util.m"
                      {
#line 655 "prog_io_util.m"
                        parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 0)));
#line 655 "prog_io_util.m"
                        parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 1)));
#line 655 "prog_io_util.m"
                        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 2)));
#line 655 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 655 "prog_io_util.m"
                          {
#line 655 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_56_56)) == (MR_mktag((MR_Integer) 0)));
#line 655 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 655 "prog_io_util.m"
                              {
#line 655 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, (MR_Integer) 0)));
#line 656 "prog_io_util.m"
                                {
#line 656 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_20, &parse_tree__prog_io_util__Detism_22);
                                }
#line 655 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 655 "prog_io_util.m"
                                  {
#line 657 "prog_io_util.m"
                                    {
#line 657 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_18, &parse_tree__prog_io_util__ArgModes_23);
                                    }
#line 655 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 655 "prog_io_util.m"
                                      {
#line 658 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_58_58 = (MR_Integer) 0;
#line 659 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_60_60 = (MR_Integer) 0;
#line 658 "prog_io_util.m"
                                        {
#line 658 "prog_io_util.m"
                                          parse_tree__prog_io_util__PredInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 658 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_23));
#line 658 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 2) = ((MR_Box) (parse_tree__prog_io_util__V_59_59));
#line 658 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_22));
#line 658 "prog_io_util.m"
                                        }
#line 660 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_24);
#line 660 "prog_io_util.m"
                                        {
#line 660 "prog_io_util.m"
                                          MR_Word base;
#line 660 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_util.m"
                                          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 660 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 660 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
#line 660 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_61_61));
#line 660 "prog_io_util.m"
                                        }
#line 660 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 655 "prog_io_util.m"
                                      }
#line 655 "prog_io_util.m"
                                  }
#line 655 "prog_io_util.m"
                              }
#line 655 "prog_io_util.m"
                          }
#line 655 "prog_io_util.m"
                      }
#line 655 "prog_io_util.m"
                  }
#line 661 "prog_io_util.m"
                else
#line 682 "prog_io_util.m"
                  {
#line 682 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetModeTerm_27;
#line 682 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__DetTerm_177;
#line 682 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModesTerm_178;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__EqTerm_25;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__FuncTerm_26;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_62_62;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_63_63;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_64_64;
#line 669 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_65_65;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_66_66;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_67_67;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;
#line 669 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_69_69;
#line 669 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_70_70;
#line 671 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_28_28;
#line 672 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_29_29;

#line 669 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 669 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 669 "prog_io_util.m"
                      {
#line 670 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 670 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 670 "prog_io_util.m"
                          {
#line 670 "prog_io_util.m"
                            parse_tree__prog_io_util__EqTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 670 "prog_io_util.m"
                            parse_tree__prog_io_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 670 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 670 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 670 "prog_io_util.m"
                              {
#line 670 "prog_io_util.m"
                                parse_tree__prog_io_util__DetTerm_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 0)));
#line 670 "prog_io_util.m"
                                parse_tree__prog_io_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 1)));
#line 670 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 669 "prog_io_util.m"
                                  {
#line 671 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 671 "prog_io_util.m"
                                      {
#line 671 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 1)));
#line 671 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 2)));
#line 671 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 671 "prog_io_util.m"
                                          {
#line 671 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_64_64, (MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_65_65, (MR_String) "=") == 0);
#line 669 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 669 "prog_io_util.m"
                                              {
#line 671 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 671 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 671 "prog_io_util.m"
                                                  {
#line 671 "prog_io_util.m"
                                                    parse_tree__prog_io_util__FuncTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, (MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, (MR_Integer) 1)));
#line 671 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 671 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 671 "prog_io_util.m"
                                                      {
#line 671 "prog_io_util.m"
                                                        parse_tree__prog_io_util__RetModeTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, (MR_Integer) 0)));
#line 671 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, (MR_Integer) 1)));
#line 671 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 669 "prog_io_util.m"
                                                          {
#line 672 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_26)) == (MR_mktag((MR_Integer) 0)));
#line 672 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 672 "prog_io_util.m"
                                                              {
#line 672 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 0)));
#line 672 "prog_io_util.m"
                                                                parse_tree__prog_io_util__ArgModesTerm_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 1)));
#line 672 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 2)));
#line 672 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_69_69)) == (MR_mktag((MR_Integer) 0)));
#line 672 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 672 "prog_io_util.m"
                                                                  {
#line 672 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_69_69, (MR_Integer) 0)));
#line 672 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_70_70, (MR_String) "func") == 0);
#line 672 "prog_io_util.m"
                                                                  }
#line 672 "prog_io_util.m"
                                                              }
#line 669 "prog_io_util.m"
                                                          }
#line 671 "prog_io_util.m"
                                                      }
#line 671 "prog_io_util.m"
                                                  }
#line 669 "prog_io_util.m"
                                              }
#line 671 "prog_io_util.m"
                                          }
#line 671 "prog_io_util.m"
                                      }
#line 669 "prog_io_util.m"
                                  }
#line 670 "prog_io_util.m"
                              }
#line 670 "prog_io_util.m"
                          }
#line 669 "prog_io_util.m"
                      }
#line 682 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 674 "prog_io_util.m"
                      {
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_186_186;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes0_31;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__RetMode_32;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__FuncInst_33;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_71_71;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_72_72;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_73_73;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_74_74;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_75_75;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_76_76;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_77_77;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_78_78;
#line 674 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__DetString_123;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Detism_124;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes_125;
#line 674 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_30_30;

#line 674 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_177)) == (MR_mktag((MR_Integer) 0)));
#line 674 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 674 "prog_io_util.m"
                          {
#line 674 "prog_io_util.m"
                            parse_tree__prog_io_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 0)));
#line 674 "prog_io_util.m"
                            parse_tree__prog_io_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 1)));
#line 674 "prog_io_util.m"
                            parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 2)));
#line 674 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 674 "prog_io_util.m"
                              {
#line 674 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 674 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 674 "prog_io_util.m"
                                  {
#line 674 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetString_123 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_71_71, (MR_Integer) 0)));
#line 675 "prog_io_util.m"
                                    {
#line 675 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_123, &parse_tree__prog_io_util__Detism_124);
                                    }
#line 674 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 674 "prog_io_util.m"
                                      {
#line 676 "prog_io_util.m"
                                        {
#line 676 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_178, &parse_tree__prog_io_util__ArgModes0_31);
                                        }
#line 674 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 674 "prog_io_util.m"
                                          {
#line 677 "prog_io_util.m"
                                            {
#line 677 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__RetModeTerm_27, &parse_tree__prog_io_util__RetMode_32);
                                            }
#line 674 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 674 "prog_io_util.m"
                                              {
#line 678 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9721 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_186_186 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 678 "prog_io_util.m"
                                                {
#line 678 "prog_io_util.m"
                                                  parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_32));
#line 678 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 678 "prog_io_util.m"
                                                }
#line 678 "prog_io_util.m"
                                                {
#line 678 "prog_io_util.m"
                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_186_186, parse_tree__prog_io_util__ArgModes0_31, parse_tree__prog_io_util__V_73_73, &parse_tree__prog_io_util__ArgModes_125);
                                                }
#line 679 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_75_75 = (MR_Integer) 1;
#line 680 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_77_77 = (MR_Integer) 0;
#line 679 "prog_io_util.m"
                                                {
#line 679 "prog_io_util.m"
                                                  parse_tree__prog_io_util__FuncInst_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 679 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 679 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_125));
#line 679 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 2) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 679 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_124));
#line 679 "prog_io_util.m"
                                                }
#line 681 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_33);
#line 681 "prog_io_util.m"
                                                {
#line 681 "prog_io_util.m"
                                                  MR_Word base;
#line 681 "prog_io_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 681 "prog_io_util.m"
                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 681 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_77_77));
#line 681 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_78_78));
#line 681 "prog_io_util.m"
                                                }
#line 681 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 674 "prog_io_util.m"
                                              }
#line 674 "prog_io_util.m"
                                          }
#line 674 "prog_io_util.m"
                                      }
#line 674 "prog_io_util.m"
                                  }
#line 674 "prog_io_util.m"
                              }
#line 674 "prog_io_util.m"
                          }
#line 674 "prog_io_util.m"
                      }
#line 682 "prog_io_util.m"
                    else
#line 700 "prog_io_util.m"
                      {
#line 700 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_163;
#line 700 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModesTerm_164;
#line 690 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_79_79;
#line 690 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_80_80;
#line 690 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_81_81;
#line 690 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_82_82;
#line 690 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__PredTerm_126;
#line 692 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_34_34;

#line 690 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 690 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 690 "prog_io_util.m"
                          {
#line 691 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 691 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                              {
#line 691 "prog_io_util.m"
                                parse_tree__prog_io_util__PredTerm_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 691 "prog_io_util.m"
                                parse_tree__prog_io_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 691 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 691 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                                  {
#line 691 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetTerm_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_79_79, (MR_Integer) 0)));
#line 691 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_79_79, (MR_Integer) 1)));
#line 691 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 690 "prog_io_util.m"
                                      {
#line 692 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_126)) == (MR_mktag((MR_Integer) 0)));
#line 692 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 692 "prog_io_util.m"
                                          {
#line 692 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 0)));
#line 692 "prog_io_util.m"
                                            parse_tree__prog_io_util__ArgModesTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 1)));
#line 692 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 2)));
#line 692 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_81_81)) == (MR_mktag((MR_Integer) 0)));
#line 692 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 692 "prog_io_util.m"
                                              {
#line 692 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_81_81, (MR_Integer) 0)));
#line 692 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_82_82, (MR_String) "any_pred") == 0);
#line 692 "prog_io_util.m"
                                              }
#line 692 "prog_io_util.m"
                                          }
#line 690 "prog_io_util.m"
                                      }
#line 691 "prog_io_util.m"
                                  }
#line 691 "prog_io_util.m"
                              }
#line 690 "prog_io_util.m"
                          }
#line 700 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 694 "prog_io_util.m"
                          {
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_83_83;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_84_84;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_85_85;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_86_86;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_87_87;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_88_88;
#line 694 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__DetString_127;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Detism_128;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes_129;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__PredInst_130;
#line 694 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_35_35;

#line 694 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_163)) == (MR_mktag((MR_Integer) 0)));
#line 694 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 694 "prog_io_util.m"
                              {
#line 694 "prog_io_util.m"
                                parse_tree__prog_io_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 0)));
#line 694 "prog_io_util.m"
                                parse_tree__prog_io_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 1)));
#line 694 "prog_io_util.m"
                                parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 2)));
#line 694 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 694 "prog_io_util.m"
                                  {
#line 694 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_83_83)) == (MR_mktag((MR_Integer) 0)));
#line 694 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 694 "prog_io_util.m"
                                      {
#line 694 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetString_127 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_83_83, (MR_Integer) 0)));
#line 695 "prog_io_util.m"
                                        {
#line 695 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_127, &parse_tree__prog_io_util__Detism_128);
                                        }
#line 694 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 694 "prog_io_util.m"
                                          {
#line 696 "prog_io_util.m"
                                            {
#line 696 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_164, &parse_tree__prog_io_util__ArgModes_129);
                                            }
#line 694 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 694 "prog_io_util.m"
                                              {
#line 697 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_85_85 = (MR_Integer) 0;
#line 698 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 699 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_87_87 = (MR_Integer) 0;
#line 697 "prog_io_util.m"
                                                {
#line 697 "prog_io_util.m"
                                                  parse_tree__prog_io_util__PredInst_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 697 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 0) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 697 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_129));
#line 697 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 2) = ((MR_Box) (parse_tree__prog_io_util__V_86_86));
#line 697 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_128));
#line 697 "prog_io_util.m"
                                                }
#line 699 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_130);
#line 699 "prog_io_util.m"
                                                {
#line 699 "prog_io_util.m"
                                                  MR_Word base;
#line 699 "prog_io_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_io_util.m"
                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 699 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_87_87));
#line 699 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_88_88));
#line 699 "prog_io_util.m"
                                                }
#line 699 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 694 "prog_io_util.m"
                                              }
#line 694 "prog_io_util.m"
                                          }
#line 694 "prog_io_util.m"
                                      }
#line 694 "prog_io_util.m"
                                  }
#line 694 "prog_io_util.m"
                              }
#line 694 "prog_io_util.m"
                          }
#line 700 "prog_io_util.m"
                        else
#line 722 "prog_io_util.m"
                          {
#line 722 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DetTerm_150;
#line 722 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModesTerm_151;
#line 722 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__RetModeTerm_157;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_89_89;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_90_90;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_91_91;
#line 708 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__V_92_92;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_93_93;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_94_94;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_95_95;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_96_96;
#line 708 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__V_97_97;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__EqTerm_131;
#line 708 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__FuncTerm_132;
#line 710 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_36_36;
#line 711 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_37_37;

#line 708 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 708 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 708 "prog_io_util.m"
                              {
#line 709 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                                  {
#line 709 "prog_io_util.m"
                                    parse_tree__prog_io_util__EqTerm_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_89_89)) == (MR_mktag((MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                                      {
#line 709 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetTerm_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_89_89, (MR_Integer) 0)));
#line 709 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_89_89, (MR_Integer) 1)));
#line 709 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 708 "prog_io_util.m"
                                          {
#line 710 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_131)) == (MR_mktag((MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                                              {
#line 710 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 1)));
#line 710 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 2)));
#line 710 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                                                  {
#line 710 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_91_91, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_92_92, (MR_String) "=") == 0);
#line 708 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 708 "prog_io_util.m"
                                                      {
#line 710 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 710 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                                                          {
#line 710 "prog_io_util.m"
                                                            parse_tree__prog_io_util__FuncTerm_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 1)));
#line 710 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 710 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                                                              {
#line 710 "prog_io_util.m"
                                                                parse_tree__prog_io_util__RetModeTerm_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_94_94, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_94_94, (MR_Integer) 1)));
#line 710 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 708 "prog_io_util.m"
                                                                  {
#line 711 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_132)) == (MR_mktag((MR_Integer) 0)));
#line 711 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 711 "prog_io_util.m"
                                                                      {
#line 711 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 0)));
#line 711 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__ArgModesTerm_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 1)));
#line 711 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 2)));
#line 711 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 711 "prog_io_util.m"
                                                                        if (parse_tree__prog_io_util__succeeded)
#line 711 "prog_io_util.m"
                                                                          {
#line 711 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_96_96, (MR_Integer) 0)));
#line 711 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_97_97, (MR_String) "any_func") == 0);
#line 711 "prog_io_util.m"
                                                                          }
#line 711 "prog_io_util.m"
                                                                      }
#line 708 "prog_io_util.m"
                                                                  }
#line 710 "prog_io_util.m"
                                                              }
#line 710 "prog_io_util.m"
                                                          }
#line 708 "prog_io_util.m"
                                                      }
#line 710 "prog_io_util.m"
                                                  }
#line 710 "prog_io_util.m"
                                              }
#line 708 "prog_io_util.m"
                                          }
#line 709 "prog_io_util.m"
                                      }
#line 709 "prog_io_util.m"
                                  }
#line 708 "prog_io_util.m"
                              }
#line 722 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                              {
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeCtorInfo_187_187;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_98_98;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_99_99;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_100_100;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_101_101;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_102_102;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_103_103;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_104_104;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_105_105;
#line 713 "prog_io_util.m"
                                MR_String parse_tree__prog_io_util__DetString_133;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Detism_134;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgModes_135;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgModes0_136;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__RetMode_137;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__FuncInst_138;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_38_38;

#line 713 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_150)) == (MR_mktag((MR_Integer) 0)));
#line 713 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                                  {
#line 713 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 0)));
#line 713 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 1)));
#line 713 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 2)));
#line 713 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                                      {
#line 713 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_98_98)) == (MR_mktag((MR_Integer) 0)));
#line 713 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                                          {
#line 713 "prog_io_util.m"
                                            parse_tree__prog_io_util__DetString_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_98_98, (MR_Integer) 0)));
#line 714 "prog_io_util.m"
                                            {
#line 714 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_133, &parse_tree__prog_io_util__Detism_134);
                                            }
#line 713 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                                              {
#line 715 "prog_io_util.m"
                                                {
#line 715 "prog_io_util.m"
                                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_151, &parse_tree__prog_io_util__ArgModes0_136);
                                                }
#line 713 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                                                  {
#line 716 "prog_io_util.m"
                                                    {
#line 716 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__RetModeTerm_157, &parse_tree__prog_io_util__RetMode_137);
                                                    }
#line 713 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                                                      {
#line 717 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10259 "parse_tree.prog_io_util.c"
                                                        parse_tree__prog_io_util__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 717 "prog_io_util.m"
                                                        {
#line 717 "prog_io_util.m"
                                                          parse_tree__prog_io_util__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_137));
#line 717 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__V_101_101));
#line 717 "prog_io_util.m"
                                                        }
#line 717 "prog_io_util.m"
                                                        {
#line 717 "prog_io_util.m"
                                                          mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_187_187, parse_tree__prog_io_util__ArgModes0_136, parse_tree__prog_io_util__V_100_100, &parse_tree__prog_io_util__ArgModes_135);
                                                        }
#line 718 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_102_102 = (MR_Integer) 1;
#line 719 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_103_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 720 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_104_104 = (MR_Integer) 0;
#line 718 "prog_io_util.m"
                                                        {
#line 718 "prog_io_util.m"
                                                          parse_tree__prog_io_util__FuncInst_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 718 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 0) = ((MR_Box) (parse_tree__prog_io_util__V_102_102));
#line 718 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_135));
#line 718 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 2) = ((MR_Box) (parse_tree__prog_io_util__V_103_103));
#line 718 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_134));
#line 718 "prog_io_util.m"
                                                        }
#line 720 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_138);
#line 720 "prog_io_util.m"
                                                        {
#line 720 "prog_io_util.m"
                                                          MR_Word base;
#line 720 "prog_io_util.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "prog_io_util.m"
                                                          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 720 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_104_104));
#line 720 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_105_105));
#line 720 "prog_io_util.m"
                                                        }
#line 720 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 713 "prog_io_util.m"
                                                      }
#line 713 "prog_io_util.m"
                                                  }
#line 713 "prog_io_util.m"
                                              }
#line 713 "prog_io_util.m"
                                          }
#line 713 "prog_io_util.m"
                                      }
#line 713 "prog_io_util.m"
                                  }
#line 713 "prog_io_util.m"
                              }
#line 722 "prog_io_util.m"
                            else
#line 728 "prog_io_util.m"
                              {
#line 728 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Disj_39;
#line 723 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_106_106;

#line 723 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "bound") == 0);
#line 723 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 723 "prog_io_util.m"
                                  {
#line 724 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 724 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 724 "prog_io_util.m"
                                      {
#line 724 "prog_io_util.m"
                                        parse_tree__prog_io_util__Disj_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 724 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 724 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "prog_io_util.m"
                                      }
#line 723 "prog_io_util.m"
                                  }
#line 728 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 727 "prog_io_util.m"
                                  {
#line 727 "prog_io_util.m"
                                    {
#line 727 "prog_io_util.m"
                                      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_39, (MR_Integer) 0, parse_tree__prog_io_util__HeadVar__3_3);
                                    }
#line 727 "prog_io_util.m"
                                  }
#line 728 "prog_io_util.m"
                                else
#line 734 "prog_io_util.m"
                                  {
#line 734 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__Disj_147;
#line 729 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__V_108_108;

#line 729 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "bound_unique") == 0);
#line 729 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 729 "prog_io_util.m"
                                      {
#line 730 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 730 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 730 "prog_io_util.m"
                                          {
#line 730 "prog_io_util.m"
                                            parse_tree__prog_io_util__Disj_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 730 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 730 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "prog_io_util.m"
                                          }
#line 729 "prog_io_util.m"
                                      }
#line 734 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 733 "prog_io_util.m"
                                      {
#line 733 "prog_io_util.m"
                                        {
#line 733 "prog_io_util.m"
                                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_147, (MR_Integer) 1, parse_tree__prog_io_util__HeadVar__3_3);
                                        }
#line 733 "prog_io_util.m"
                                      }
#line 734 "prog_io_util.m"
                                    else
#line 739 "prog_io_util.m"
                                      {
#line 739 "prog_io_util.m"
                                        MR_Word parse_tree__prog_io_util__Disj_145;
#line 735 "prog_io_util.m"
                                        MR_Word parse_tree__prog_io_util__V_110_110;

#line 735 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "unique") == 0);
#line 735 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 735 "prog_io_util.m"
                                          {
#line 736 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 736 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 736 "prog_io_util.m"
                                              {
#line 736 "prog_io_util.m"
                                                parse_tree__prog_io_util__Disj_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 736 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 736 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "prog_io_util.m"
                                              }
#line 735 "prog_io_util.m"
                                          }
#line 739 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 738 "prog_io_util.m"
                                          {
#line 738 "prog_io_util.m"
                                            {
#line 738 "prog_io_util.m"
                                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_145, (MR_Integer) 1, parse_tree__prog_io_util__HeadVar__3_3);
                                            }
#line 738 "prog_io_util.m"
                                          }
#line 739 "prog_io_util.m"
                                        else
#line 745 "prog_io_util.m"
                                          {
#line 745 "prog_io_util.m"
                                            MR_Word parse_tree__prog_io_util__Disj_143;
#line 740 "prog_io_util.m"
                                            MR_Word parse_tree__prog_io_util__V_112_112;

#line 740 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "mostly_unique") == 0);
#line 740 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 740 "prog_io_util.m"
                                              {
#line 741 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 741 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 741 "prog_io_util.m"
                                                  {
#line 741 "prog_io_util.m"
                                                    parse_tree__prog_io_util__Disj_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 741 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 741 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_112_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 741 "prog_io_util.m"
                                                  }
#line 740 "prog_io_util.m"
                                              }
#line 745 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 743 "prog_io_util.m"
                                              {
#line 743 "prog_io_util.m"
                                                {
#line 743 "prog_io_util.m"
                                                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_143, (MR_Integer) 2, parse_tree__prog_io_util__HeadVar__3_3);
                                                }
#line 743 "prog_io_util.m"
                                              }
#line 745 "prog_io_util.m"
                                            else
#line 755 "prog_io_util.m"
                                              {
#line 755 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__VarTerm_40;
#line 755 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__InstTerm_41;
#line 746 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__V_114_114;
#line 746 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__V_115_115;

#line 746 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "=<") == 0);
#line 746 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 746 "prog_io_util.m"
                                                  {
#line 747 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 747 "prog_io_util.m"
                                                      {
#line 747 "prog_io_util.m"
                                                        parse_tree__prog_io_util__VarTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 747 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 747 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 747 "prog_io_util.m"
                                                          {
#line 747 "prog_io_util.m"
                                                            parse_tree__prog_io_util__InstTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 0)));
#line 747 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 1)));
#line 747 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "prog_io_util.m"
                                                          }
#line 747 "prog_io_util.m"
                                                      }
#line 746 "prog_io_util.m"
                                                  }
#line 755 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 749 "prog_io_util.m"
                                                  {
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeInfo_188_188;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_189_189;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_190_190;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Var_42;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Inst_44;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_116_116;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_117_117;
#line 749 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_118_118;
#line 750 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_43_43;

#line 749 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
#line 749 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 749 "prog_io_util.m"
                                                      {
#line 750 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_40)) == (MR_mktag((MR_Integer) 1)));
#line 750 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 750 "prog_io_util.m"
                                                          {
#line 750 "prog_io_util.m"
                                                            parse_tree__prog_io_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_40, (MR_Integer) 0)));
#line 750 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_40, (MR_Integer) 1)));
#line 752 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_116_116 = (MR_Integer) 1;
#line 752 "prog_io_util.m"
                                                            {
#line 752 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_116_116, parse_tree__prog_io_util__InstTerm_41, &parse_tree__prog_io_util__Inst_44);
                                                            }
#line 749 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 749 "prog_io_util.m"
                                                              {
#line 10593 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeInfo_188_188 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 10595 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeCtorInfo_189_189 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 10597 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeCtorInfo_190_190 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 754 "prog_io_util.m"
                                                                {
#line 754 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_118_118 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_189_189, parse_tree__prog_io_util__TypeCtorInfo_190_190, parse_tree__prog_io_util__Var_42);
                                                                }
#line 753 "prog_io_util.m"
                                                                {
#line 753 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_117_117 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_188_188, ((MR_Box) (parse_tree__prog_io_util__V_118_118)));
                                                                }
#line 753 "prog_io_util.m"
                                                                {
#line 753 "prog_io_util.m"
                                                                  MR_Word base;
#line 753 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 753 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_117_117));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Inst_44));
#line 753 "prog_io_util.m"
                                                                }
#line 753 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 749 "prog_io_util.m"
                                                              }
#line 750 "prog_io_util.m"
                                                          }
#line 749 "prog_io_util.m"
                                                      }
#line 749 "prog_io_util.m"
                                                  }
#line 755 "prog_io_util.m"
                                                else
#line 758 "prog_io_util.m"
                                                  {
#line 758 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__QualifiedName_45;
#line 758 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Args1_46;
#line 775 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Result0_139;
#line 760 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__BuiltinModule_47;
#line 760 "prog_io_util.m"
                                                    MR_String parse_tree__prog_io_util__UnqualifiedName_48;
#line 760 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_119_119;
#line 760 "prog_io_util.m"
                                                    MR_String parse_tree__prog_io_util__V_120_120;
#line 760 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_192_192;
#line 772 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_121_121;
#line 772 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_49_49;
#line 772 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_50_50;

#line 757 "prog_io_util.m"
                                                    {
#line 757 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_11, parse_tree__prog_io_util__Args0_12, &parse_tree__prog_io_util__QualifiedName_45, &parse_tree__prog_io_util__Args1_46);
                                                    }
#line 758 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 758 "prog_io_util.m"
                                                      {
#line 760 "prog_io_util.m"
                                                        {
#line 760 "prog_io_util.m"
                                                          parse_tree__prog_io_util__BuiltinModule_47 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                                                        }
#line 761 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_120_120 = (MR_String) "";
#line 761 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_119_119 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 761 "prog_io_util.m"
                                                        {
#line 761 "prog_io_util.m"
                                                          mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_45, parse_tree__prog_io_util__V_119_119, &parse_tree__prog_io_util__V_192_192);
                                                        }
#line 761 "prog_io_util.m"
                                                        {
#line 761 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_47, parse_tree__prog_io_util__V_192_192);
                                                        }
#line 760 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 760 "prog_io_util.m"
                                                          {
#line 766 "prog_io_util.m"
                                                            {
#line 766 "prog_io_util.m"
                                                              parse_tree__prog_io_util__UnqualifiedName_48 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_45);
                                                            }
#line 767 "prog_io_util.m"
                                                            {
#line 767 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(parse_tree__prog_io_util__UnqualifiedName_48, parse_tree__prog_io_util__Args1_46, &parse_tree__prog_io_util__Result0_139);
                                                            }
#line 760 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 760 "prog_io_util.m"
                                                              {
#line 772 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Result0_139, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 772 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 772 "prog_io_util.m"
                                                                  {
#line 772 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Result0_139, (MR_Integer) 1)));
#line 772 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_121_121)) == (MR_mktag((MR_Integer) 0)));
#line 772 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 772 "prog_io_util.m"
                                                                      {
#line 772 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_121_121, (MR_Integer) 0)));
#line 772 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_121_121, (MR_Integer) 1)));
#line 772 "prog_io_util.m"
                                                                      }
#line 772 "prog_io_util.m"
                                                                  }
#line 772 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 760 "prog_io_util.m"
                                                              }
#line 760 "prog_io_util.m"
                                                          }
#line 775 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 774 "prog_io_util.m"
                                                          {
#line 774 "prog_io_util.m"
                                                            *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Result0_139;
#line 774 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 774 "prog_io_util.m"
                                                          }
#line 775 "prog_io_util.m"
                                                        else
#line 776 "prog_io_util.m"
                                                          {
#line 776 "prog_io_util.m"
                                                            MR_Word parse_tree__prog_io_util__Args_51;
#line 776 "prog_io_util.m"
                                                            MR_Word parse_tree__prog_io_util__V_122_122;

#line 776 "prog_io_util.m"
                                                            {
#line 776 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_46, &parse_tree__prog_io_util__Args_51);
                                                            }
#line 776 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 776 "prog_io_util.m"
                                                              {
#line 777 "prog_io_util.m"
                                                                {
#line 777 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_45));
#line 777 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_51));
#line 777 "prog_io_util.m"
                                                                }
#line 777 "prog_io_util.m"
                                                                {
#line 777 "prog_io_util.m"
                                                                  MR_Word base;
#line 777 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 777 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 777 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_122_122));
#line 777 "prog_io_util.m"
                                                                }
#line 777 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 776 "prog_io_util.m"
                                                              }
#line 776 "prog_io_util.m"
                                                          }
#line 758 "prog_io_util.m"
                                                      }
#line 758 "prog_io_util.m"
                                                  }
#line 755 "prog_io_util.m"
                                              }
#line 745 "prog_io_util.m"
                                          }
#line 739 "prog_io_util.m"
                                      }
#line 734 "prog_io_util.m"
                                  }
#line 728 "prog_io_util.m"
                              }
#line 722 "prog_io_util.m"
                          }
#line 700 "prog_io_util.m"
                      }
#line 682 "prog_io_util.m"
                  }
#line 661 "prog_io_util.m"
              }
#line 638 "prog_io_util.m"
          }
#line 636 "prog_io_util.m"
      }
#line 634 "prog_io_util.m"
    else
#line 634 "prog_io_util.m"
      {
#line 634 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 634 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_7;
#line 634 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 635 "prog_io_util.m"
        {
#line 635 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_5, &parse_tree__prog_io_util__V_7);
        }
#line 634 "prog_io_util.m"
        {
#line 634 "prog_io_util.m"
          MR_Word base;
#line 634 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 634 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 634 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_7));
#line 634 "prog_io_util.m"
        }
#line 634 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 634 "prog_io_util.m"
      }
#line 634 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 634 "prog_io_util.m"
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
#line 629 "prog_io_util.m"
  {
#line 629 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 629 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "prog_io_util.m"
      {
#line 629 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 629 "prog_io_util.m"
      }
#line 629 "prog_io_util.m"
    else
#line 630 "prog_io_util.m"
      {
#line 630 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 630 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 630 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 630 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 631 "prog_io_util.m"
        {
#line 631 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 630 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 630 "prog_io_util.m"
          {
#line 632 "prog_io_util.m"
            {
#line 632 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 630 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 630 "prog_io_util.m"
              {
#line 630 "prog_io_util.m"
                {
#line 630 "prog_io_util.m"
                  MR_Word base;
#line 630 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 630 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 630 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 630 "prog_io_util.m"
                }
#line 630 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 630 "prog_io_util.m"
              }
#line 630 "prog_io_util.m"
          }
#line 630 "prog_io_util.m"
      }
#line 629 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 629 "prog_io_util.m"
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
#line 525 "prog_io_util.m"
  {
#line 525 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
#line 525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermArgs_8;
#line 526 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;
#line 534 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__InstTermA_10;
#line 534 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__InstTermB_11;
#line 528 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_41_41;
#line 528 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_42_42;
#line 528 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_43_43;

#line 526 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 526 "prog_io_util.m"
      {
#line 526 "prog_io_util.m"
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 526 "prog_io_util.m"
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 526 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 528 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 528 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 528 "prog_io_util.m"
          {
#line 528 "prog_io_util.m"
            parse_tree__prog_io_util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 528 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_41_41, (MR_String) ">>") == 0);
#line 528 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 528 "prog_io_util.m"
              {
#line 529 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 529 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 529 "prog_io_util.m"
                  {
#line 529 "prog_io_util.m"
                    parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 529 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 529 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 529 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 529 "prog_io_util.m"
                      {
#line 529 "prog_io_util.m"
                        parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, (MR_Integer) 0)));
#line 529 "prog_io_util.m"
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, (MR_Integer) 1)));
#line 529 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "prog_io_util.m"
                      }
#line 529 "prog_io_util.m"
                  }
#line 528 "prog_io_util.m"
              }
#line 528 "prog_io_util.m"
          }
#line 534 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 531 "prog_io_util.m"
          {
#line 531 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstA_12;
#line 531 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstB_13;

#line 531 "prog_io_util.m"
            {
#line 531 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
            }
#line 531 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 531 "prog_io_util.m"
              {
#line 532 "prog_io_util.m"
                {
#line 532 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                }
#line 531 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 531 "prog_io_util.m"
                  {
#line 533 "prog_io_util.m"
                    {
#line 533 "prog_io_util.m"
                      MR_Word base;
#line 533 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "prog_io_util.m"
                      *parse_tree__prog_io_util__Mode_6 = base;
#line 533 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
#line 533 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
#line 533 "prog_io_util.m"
                    }
#line 533 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 531 "prog_io_util.m"
                  }
#line 531 "prog_io_util.m"
              }
#line 531 "prog_io_util.m"
          }
#line 534 "prog_io_util.m"
        else
#line 554 "prog_io_util.m"
          {
#line 554 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__DetTerm_15;
#line 554 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__ArgModesTerms_16;
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__PredTerm_14;
#line 543 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_44_44;
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_45_45;
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_46_46;
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47;
#line 543 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_48_48;
#line 545 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_17_17;

#line 543 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 543 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 543 "prog_io_util.m"
              {
#line 543 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 543 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_44_44, (MR_String) "is") == 0);
#line 543 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 543 "prog_io_util.m"
                  {
#line 544 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 544 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 544 "prog_io_util.m"
                      {
#line 544 "prog_io_util.m"
                        parse_tree__prog_io_util__PredTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 544 "prog_io_util.m"
                        parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 544 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 544 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 544 "prog_io_util.m"
                          {
#line 544 "prog_io_util.m"
                            parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 544 "prog_io_util.m"
                            parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 544 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 543 "prog_io_util.m"
                              {
#line 545 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_14)) == (MR_mktag((MR_Integer) 0)));
#line 545 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 545 "prog_io_util.m"
                                  {
#line 545 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 0)));
#line 545 "prog_io_util.m"
                                    parse_tree__prog_io_util__ArgModesTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 1)));
#line 545 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 2)));
#line 545 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
#line 545 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 545 "prog_io_util.m"
                                      {
#line 545 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_47_47, (MR_Integer) 0)));
#line 545 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_48_48, (MR_String) "pred") == 0);
#line 545 "prog_io_util.m"
                                      }
#line 545 "prog_io_util.m"
                                  }
#line 543 "prog_io_util.m"
                              }
#line 544 "prog_io_util.m"
                          }
#line 544 "prog_io_util.m"
                      }
#line 543 "prog_io_util.m"
                  }
#line 543 "prog_io_util.m"
              }
#line 554 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 547 "prog_io_util.m"
              {
#line 547 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_18;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_20;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_21;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInstInfo_22;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_23;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_49_49;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_50_50;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_51_51;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_52_52;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_53_53;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 547 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 547 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 547 "prog_io_util.m"
                  {
#line 547 "prog_io_util.m"
                    parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 0)));
#line 547 "prog_io_util.m"
                    parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 1)));
#line 547 "prog_io_util.m"
                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 2)));
#line 547 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 547 "prog_io_util.m"
                      {
#line 547 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 547 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 547 "prog_io_util.m"
                          {
#line 547 "prog_io_util.m"
                            parse_tree__prog_io_util__DetString_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_49_49, (MR_Integer) 0)));
#line 548 "prog_io_util.m"
                            {
#line 548 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_18, &parse_tree__prog_io_util__Detism_20);
                            }
#line 547 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 547 "prog_io_util.m"
                              {
#line 549 "prog_io_util.m"
                                {
#line 549 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_16, &parse_tree__prog_io_util__ArgModes_21);
                                }
#line 547 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 547 "prog_io_util.m"
                                  {
#line 550 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_51_51 = (MR_Integer) 0;
#line 551 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_53_53 = (MR_Integer) 0;
#line 550 "prog_io_util.m"
                                    {
#line 550 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 550 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 0) = ((MR_Box) (parse_tree__prog_io_util__V_51_51));
#line 550 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_21));
#line 550 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 2) = ((MR_Box) (parse_tree__prog_io_util__V_52_52));
#line 550 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_20));
#line 550 "prog_io_util.m"
                                    }
#line 552 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_22);
#line 552 "prog_io_util.m"
                                    {
#line 552 "prog_io_util.m"
                                      parse_tree__prog_io_util__Inst_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 552 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 552 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_53_53));
#line 552 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 2) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 552 "prog_io_util.m"
                                    }
#line 553 "prog_io_util.m"
                                    {
#line 553 "prog_io_util.m"
                                      MR_Word base;
#line 553 "prog_io_util.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 553 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_23));
#line 553 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_23));
#line 553 "prog_io_util.m"
                                    }
#line 553 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 547 "prog_io_util.m"
                                  }
#line 547 "prog_io_util.m"
                              }
#line 547 "prog_io_util.m"
                          }
#line 547 "prog_io_util.m"
                      }
#line 547 "prog_io_util.m"
                  }
#line 547 "prog_io_util.m"
              }
#line 554 "prog_io_util.m"
            else
#line 577 "prog_io_util.m"
              {
#line 577 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_26;
#line 577 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_152;
#line 577 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_153;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__EqTerm_24;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_25;
#line 563 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_56_56;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_57_57;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_58_58;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_59_59;
#line 563 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_60_60;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_61_61;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_62_62;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_63_63;
#line 563 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_64_64;
#line 563 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_65_65;
#line 565 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_27_27;
#line 566 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_28_28;

#line 563 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 563 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 563 "prog_io_util.m"
                  {
#line 563 "prog_io_util.m"
                    parse_tree__prog_io_util__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 563 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_56_56, (MR_String) "is") == 0);
#line 563 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 563 "prog_io_util.m"
                      {
#line 564 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 564 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 564 "prog_io_util.m"
                          {
#line 564 "prog_io_util.m"
                            parse_tree__prog_io_util__EqTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 564 "prog_io_util.m"
                            parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 564 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 564 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 564 "prog_io_util.m"
                              {
#line 564 "prog_io_util.m"
                                parse_tree__prog_io_util__DetTerm_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, (MR_Integer) 0)));
#line 564 "prog_io_util.m"
                                parse_tree__prog_io_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, (MR_Integer) 1)));
#line 564 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 563 "prog_io_util.m"
                                  {
#line 565 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_24)) == (MR_mktag((MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 565 "prog_io_util.m"
                                      {
#line 565 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 1)));
#line 565 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 2)));
#line 565 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 565 "prog_io_util.m"
                                          {
#line 565 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_59_59, (MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_60_60, (MR_String) "=") == 0);
#line 563 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 563 "prog_io_util.m"
                                              {
#line 565 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 565 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 565 "prog_io_util.m"
                                                  {
#line 565 "prog_io_util.m"
                                                    parse_tree__prog_io_util__FuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, (MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, (MR_Integer) 1)));
#line 565 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 565 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 565 "prog_io_util.m"
                                                      {
#line 565 "prog_io_util.m"
                                                        parse_tree__prog_io_util__RetModeTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 0)));
#line 565 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 1)));
#line 565 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 563 "prog_io_util.m"
                                                          {
#line 566 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 566 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 566 "prog_io_util.m"
                                                              {
#line 566 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 0)));
#line 566 "prog_io_util.m"
                                                                parse_tree__prog_io_util__ArgModesTerms_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 1)));
#line 566 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 2)));
#line 566 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 566 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 566 "prog_io_util.m"
                                                                  {
#line 566 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_64_64, (MR_Integer) 0)));
#line 566 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_65_65, (MR_String) "func") == 0);
#line 566 "prog_io_util.m"
                                                                  }
#line 566 "prog_io_util.m"
                                                              }
#line 563 "prog_io_util.m"
                                                          }
#line 565 "prog_io_util.m"
                                                      }
#line 565 "prog_io_util.m"
                                                  }
#line 563 "prog_io_util.m"
                                              }
#line 565 "prog_io_util.m"
                                          }
#line 565 "prog_io_util.m"
                                      }
#line 563 "prog_io_util.m"
                                  }
#line 564 "prog_io_util.m"
                              }
#line 564 "prog_io_util.m"
                          }
#line 563 "prog_io_util.m"
                      }
#line 563 "prog_io_util.m"
                  }
#line 577 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 568 "prog_io_util.m"
                  {
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_159_159;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes0_30;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetMode_31;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__FuncInstInfo_32;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_66_66;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_67_67;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_69_69;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_70_70;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_71_71;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_72_72;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_73_73;
#line 568 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__DetString_106;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Detism_107;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes_108;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Inst_109;
#line 568 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_29_29;

#line 568 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_152)) == (MR_mktag((MR_Integer) 0)));
#line 568 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 568 "prog_io_util.m"
                      {
#line 568 "prog_io_util.m"
                        parse_tree__prog_io_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 0)));
#line 568 "prog_io_util.m"
                        parse_tree__prog_io_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 1)));
#line 568 "prog_io_util.m"
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 2)));
#line 568 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 568 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 568 "prog_io_util.m"
                          {
#line 568 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_66_66)) == (MR_mktag((MR_Integer) 0)));
#line 568 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 568 "prog_io_util.m"
                              {
#line 568 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_106 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_66_66, (MR_Integer) 0)));
#line 569 "prog_io_util.m"
                                {
#line 569 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_106, &parse_tree__prog_io_util__Detism_107);
                                }
#line 568 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 568 "prog_io_util.m"
                                  {
#line 570 "prog_io_util.m"
                                    {
#line 570 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_153, &parse_tree__prog_io_util__ArgModes0_30);
                                    }
#line 568 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 568 "prog_io_util.m"
                                      {
#line 571 "prog_io_util.m"
                                        {
#line 571 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__RetModeTerm_26, &parse_tree__prog_io_util__RetMode_31);
                                        }
#line 568 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 568 "prog_io_util.m"
                                          {
#line 572 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11589 "parse_tree.prog_io_util.c"
                                            parse_tree__prog_io_util__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 572 "prog_io_util.m"
                                            {
#line 572 "prog_io_util.m"
                                              parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_31));
#line 572 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 572 "prog_io_util.m"
                                            }
#line 572 "prog_io_util.m"
                                            {
#line 572 "prog_io_util.m"
                                              mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_159_159, parse_tree__prog_io_util__ArgModes0_30, parse_tree__prog_io_util__V_68_68, &parse_tree__prog_io_util__ArgModes_108);
                                            }
#line 573 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_70_70 = (MR_Integer) 1;
#line 574 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_72_72 = (MR_Integer) 0;
#line 573 "prog_io_util.m"
                                            {
#line 573 "prog_io_util.m"
                                              parse_tree__prog_io_util__FuncInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 573 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 573 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_108));
#line 573 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 2) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 573 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_107));
#line 573 "prog_io_util.m"
                                            }
#line 575 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_32);
#line 575 "prog_io_util.m"
                                            {
#line 575 "prog_io_util.m"
                                              parse_tree__prog_io_util__Inst_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 575 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 1) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 575 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 2) = ((MR_Box) (parse_tree__prog_io_util__V_73_73));
#line 575 "prog_io_util.m"
                                            }
#line 576 "prog_io_util.m"
                                            {
#line 576 "prog_io_util.m"
                                              MR_Word base;
#line 576 "prog_io_util.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "prog_io_util.m"
                                              *parse_tree__prog_io_util__Mode_6 = base;
#line 576 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_109));
#line 576 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_109));
#line 576 "prog_io_util.m"
                                            }
#line 576 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 568 "prog_io_util.m"
                                          }
#line 568 "prog_io_util.m"
                                      }
#line 568 "prog_io_util.m"
                                  }
#line 568 "prog_io_util.m"
                              }
#line 568 "prog_io_util.m"
                          }
#line 568 "prog_io_util.m"
                      }
#line 568 "prog_io_util.m"
                  }
#line 577 "prog_io_util.m"
                else
#line 597 "prog_io_util.m"
                  {
#line 597 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__DetTerm_138;
#line 597 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModesTerms_139;
#line 586 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_75_75;
#line 586 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_76_76;
#line 586 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_77_77;
#line 586 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_78_78;
#line 586 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_79_79;
#line 586 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__PredTerm_110;
#line 588 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_33_33;

#line 586 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 586 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 586 "prog_io_util.m"
                      {
#line 586 "prog_io_util.m"
                        parse_tree__prog_io_util__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 586 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_75_75, (MR_String) "is") == 0);
#line 586 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 586 "prog_io_util.m"
                          {
#line 587 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 587 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 587 "prog_io_util.m"
                              {
#line 587 "prog_io_util.m"
                                parse_tree__prog_io_util__PredTerm_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 587 "prog_io_util.m"
                                parse_tree__prog_io_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 587 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 587 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 587 "prog_io_util.m"
                                  {
#line 587 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetTerm_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, (MR_Integer) 0)));
#line 587 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, (MR_Integer) 1)));
#line 587 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 586 "prog_io_util.m"
                                      {
#line 588 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_110)) == (MR_mktag((MR_Integer) 0)));
#line 588 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 588 "prog_io_util.m"
                                          {
#line 588 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 0)));
#line 588 "prog_io_util.m"
                                            parse_tree__prog_io_util__ArgModesTerms_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 1)));
#line 588 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 2)));
#line 588 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_78_78)) == (MR_mktag((MR_Integer) 0)));
#line 588 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 588 "prog_io_util.m"
                                              {
#line 588 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_78_78, (MR_Integer) 0)));
#line 588 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_79_79, (MR_String) "any_pred") == 0);
#line 588 "prog_io_util.m"
                                              }
#line 588 "prog_io_util.m"
                                          }
#line 586 "prog_io_util.m"
                                      }
#line 587 "prog_io_util.m"
                                  }
#line 587 "prog_io_util.m"
                              }
#line 586 "prog_io_util.m"
                          }
#line 586 "prog_io_util.m"
                      }
#line 597 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 590 "prog_io_util.m"
                      {
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_80_80;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_81_81;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_82_82;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_83_83;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_84_84;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_85_85;
#line 590 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__DetString_111;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Detism_112;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes_113;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__PredInstInfo_114;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Inst_115;
#line 590 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_34_34;

#line 590 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_138)) == (MR_mktag((MR_Integer) 0)));
#line 590 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 590 "prog_io_util.m"
                          {
#line 590 "prog_io_util.m"
                            parse_tree__prog_io_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 0)));
#line 590 "prog_io_util.m"
                            parse_tree__prog_io_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 1)));
#line 590 "prog_io_util.m"
                            parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 2)));
#line 590 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 590 "prog_io_util.m"
                              {
#line 590 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_80_80)) == (MR_mktag((MR_Integer) 0)));
#line 590 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 590 "prog_io_util.m"
                                  {
#line 590 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetString_111 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_80_80, (MR_Integer) 0)));
#line 591 "prog_io_util.m"
                                    {
#line 591 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_111, &parse_tree__prog_io_util__Detism_112);
                                    }
#line 590 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 590 "prog_io_util.m"
                                      {
#line 592 "prog_io_util.m"
                                        {
#line 592 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_139, &parse_tree__prog_io_util__ArgModes_113);
                                        }
#line 590 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 590 "prog_io_util.m"
                                          {
#line 593 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_82_82 = (MR_Integer) 0;
#line 594 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_84_84 = (MR_Integer) 0;
#line 593 "prog_io_util.m"
                                            {
#line 593 "prog_io_util.m"
                                              parse_tree__prog_io_util__PredInstInfo_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 593 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 0) = ((MR_Box) (parse_tree__prog_io_util__V_82_82));
#line 593 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_113));
#line 593 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 2) = ((MR_Box) (parse_tree__prog_io_util__V_83_83));
#line 593 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_112));
#line 593 "prog_io_util.m"
                                            }
#line 595 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_114);
#line 595 "prog_io_util.m"
                                            {
#line 595 "prog_io_util.m"
                                              parse_tree__prog_io_util__Inst_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_115, 0) = ((MR_Box) (parse_tree__prog_io_util__V_84_84));
#line 595 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_115, 1) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 595 "prog_io_util.m"
                                            }
#line 596 "prog_io_util.m"
                                            {
#line 596 "prog_io_util.m"
                                              MR_Word base;
#line 596 "prog_io_util.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "prog_io_util.m"
                                              *parse_tree__prog_io_util__Mode_6 = base;
#line 596 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_115));
#line 596 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_115));
#line 596 "prog_io_util.m"
                                            }
#line 596 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 590 "prog_io_util.m"
                                          }
#line 590 "prog_io_util.m"
                                      }
#line 590 "prog_io_util.m"
                                  }
#line 590 "prog_io_util.m"
                              }
#line 590 "prog_io_util.m"
                          }
#line 590 "prog_io_util.m"
                      }
#line 597 "prog_io_util.m"
                    else
#line 620 "prog_io_util.m"
                      {
#line 620 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_125;
#line 620 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModesTerms_126;
#line 620 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__RetModeTerm_133;
#line 606 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_87_87;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_88_88;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_89_89;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_90_90;
#line 606 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_91_91;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_92_92;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_93_93;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_94_94;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_95_95;
#line 606 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_96_96;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__EqTerm_116;
#line 606 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__FuncTerm_117;
#line 608 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_35_35;
#line 609 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;

#line 606 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 606 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 606 "prog_io_util.m"
                          {
#line 606 "prog_io_util.m"
                            parse_tree__prog_io_util__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 606 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_87_87, (MR_String) "is") == 0);
#line 606 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 606 "prog_io_util.m"
                              {
#line 607 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 607 "prog_io_util.m"
                                  {
#line 607 "prog_io_util.m"
                                    parse_tree__prog_io_util__EqTerm_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 607 "prog_io_util.m"
                                      {
#line 607 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetTerm_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_88_88, (MR_Integer) 0)));
#line 607 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_88_88, (MR_Integer) 1)));
#line 607 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 606 "prog_io_util.m"
                                          {
#line 608 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_116)) == (MR_mktag((MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 608 "prog_io_util.m"
                                              {
#line 608 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 1)));
#line 608 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 2)));
#line 608 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_90_90)) == (MR_mktag((MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 608 "prog_io_util.m"
                                                  {
#line 608 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_90_90, (MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_91_91, (MR_String) "=") == 0);
#line 606 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 606 "prog_io_util.m"
                                                      {
#line 608 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 608 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 608 "prog_io_util.m"
                                                          {
#line 608 "prog_io_util.m"
                                                            parse_tree__prog_io_util__FuncTerm_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_92_92, (MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_92_92, (MR_Integer) 1)));
#line 608 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 608 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 608 "prog_io_util.m"
                                                              {
#line 608 "prog_io_util.m"
                                                                parse_tree__prog_io_util__RetModeTerm_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 0)));
#line 608 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 1)));
#line 608 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_94_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 606 "prog_io_util.m"
                                                                  {
#line 609 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_117)) == (MR_mktag((MR_Integer) 0)));
#line 609 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 609 "prog_io_util.m"
                                                                      {
#line 609 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 0)));
#line 609 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__ArgModesTerms_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 1)));
#line 609 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 2)));
#line 609 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_95_95)) == (MR_mktag((MR_Integer) 0)));
#line 609 "prog_io_util.m"
                                                                        if (parse_tree__prog_io_util__succeeded)
#line 609 "prog_io_util.m"
                                                                          {
#line 609 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_95_95, (MR_Integer) 0)));
#line 609 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_96_96, (MR_String) "any_func") == 0);
#line 609 "prog_io_util.m"
                                                                          }
#line 609 "prog_io_util.m"
                                                                      }
#line 606 "prog_io_util.m"
                                                                  }
#line 608 "prog_io_util.m"
                                                              }
#line 608 "prog_io_util.m"
                                                          }
#line 606 "prog_io_util.m"
                                                      }
#line 608 "prog_io_util.m"
                                                  }
#line 608 "prog_io_util.m"
                                              }
#line 606 "prog_io_util.m"
                                          }
#line 607 "prog_io_util.m"
                                      }
#line 607 "prog_io_util.m"
                                  }
#line 606 "prog_io_util.m"
                              }
#line 606 "prog_io_util.m"
                          }
#line 620 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 611 "prog_io_util.m"
                          {
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeCtorInfo_160_160;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_97_97;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_98_98;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_99_99;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_100_100;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_101_101;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_102_102;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_103_103;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_104_104;
#line 611 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__DetString_118;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Detism_119;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes_120;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Inst_121;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes0_122;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__RetMode_123;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__FuncInstInfo_124;
#line 611 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_37_37;

#line 611 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_125)) == (MR_mktag((MR_Integer) 0)));
#line 611 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 611 "prog_io_util.m"
                              {
#line 611 "prog_io_util.m"
                                parse_tree__prog_io_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 0)));
#line 611 "prog_io_util.m"
                                parse_tree__prog_io_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 1)));
#line 611 "prog_io_util.m"
                                parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 2)));
#line 611 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 611 "prog_io_util.m"
                                  {
#line 611 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 611 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 611 "prog_io_util.m"
                                      {
#line 611 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetString_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_97_97, (MR_Integer) 0)));
#line 612 "prog_io_util.m"
                                        {
#line 612 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_118, &parse_tree__prog_io_util__Detism_119);
                                        }
#line 611 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 611 "prog_io_util.m"
                                          {
#line 613 "prog_io_util.m"
                                            {
#line 613 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_126, &parse_tree__prog_io_util__ArgModes0_122);
                                            }
#line 611 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 611 "prog_io_util.m"
                                              {
#line 614 "prog_io_util.m"
                                                {
#line 614 "prog_io_util.m"
                                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__RetModeTerm_133, &parse_tree__prog_io_util__RetMode_123);
                                                }
#line 611 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 611 "prog_io_util.m"
                                                  {
#line 615 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12175 "parse_tree.prog_io_util.c"
                                                    parse_tree__prog_io_util__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 615 "prog_io_util.m"
                                                    {
#line 615 "prog_io_util.m"
                                                      parse_tree__prog_io_util__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_123));
#line 615 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_99_99, 1) = ((MR_Box) (parse_tree__prog_io_util__V_100_100));
#line 615 "prog_io_util.m"
                                                    }
#line 615 "prog_io_util.m"
                                                    {
#line 615 "prog_io_util.m"
                                                      mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_160_160, parse_tree__prog_io_util__ArgModes0_122, parse_tree__prog_io_util__V_99_99, &parse_tree__prog_io_util__ArgModes_120);
                                                    }
#line 616 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_101_101 = (MR_Integer) 1;
#line 617 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_102_102 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_103_103 = (MR_Integer) 0;
#line 616 "prog_io_util.m"
                                                    {
#line 616 "prog_io_util.m"
                                                      parse_tree__prog_io_util__FuncInstInfo_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 616 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 0) = ((MR_Box) (parse_tree__prog_io_util__V_101_101));
#line 616 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_120));
#line 616 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 2) = ((MR_Box) (parse_tree__prog_io_util__V_102_102));
#line 616 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_119));
#line 616 "prog_io_util.m"
                                                    }
#line 618 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_124);
#line 618 "prog_io_util.m"
                                                    {
#line 618 "prog_io_util.m"
                                                      parse_tree__prog_io_util__Inst_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_121, 0) = ((MR_Box) (parse_tree__prog_io_util__V_103_103));
#line 618 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_121, 1) = ((MR_Box) (parse_tree__prog_io_util__V_104_104));
#line 618 "prog_io_util.m"
                                                    }
#line 619 "prog_io_util.m"
                                                    {
#line 619 "prog_io_util.m"
                                                      MR_Word base;
#line 619 "prog_io_util.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "prog_io_util.m"
                                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 619 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_121));
#line 619 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_121));
#line 619 "prog_io_util.m"
                                                    }
#line 619 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 611 "prog_io_util.m"
                                                  }
#line 611 "prog_io_util.m"
                                              }
#line 611 "prog_io_util.m"
                                          }
#line 611 "prog_io_util.m"
                                      }
#line 611 "prog_io_util.m"
                                  }
#line 611 "prog_io_util.m"
                              }
#line 611 "prog_io_util.m"
                          }
#line 620 "prog_io_util.m"
                        else
#line 624 "prog_io_util.m"
                          {
#line 624 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Name_38;
#line 624 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Args_39;
#line 624 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ConvertedArgs_40;

#line 623 "prog_io_util.m"
                            {
#line 623 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_38, &parse_tree__prog_io_util__Args_39);
                            }
#line 624 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 624 "prog_io_util.m"
                              {
#line 625 "prog_io_util.m"
                                {
#line 625 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_39, &parse_tree__prog_io_util__ConvertedArgs_40);
                                }
#line 624 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 624 "prog_io_util.m"
                                  {
#line 626 "prog_io_util.m"
                                    {
#line 626 "prog_io_util.m"
                                      MR_Word base;
#line 626 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 626 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_38));
#line 626 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_40));
#line 626 "prog_io_util.m"
                                    }
#line 626 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 624 "prog_io_util.m"
                                  }
#line 624 "prog_io_util.m"
                              }
#line 624 "prog_io_util.m"
                          }
#line 620 "prog_io_util.m"
                      }
#line 597 "prog_io_util.m"
                  }
#line 577 "prog_io_util.m"
              }
#line 554 "prog_io_util.m"
          }
#line 526 "prog_io_util.m"
      }
#line 525 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 525 "prog_io_util.m"
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
#line 520 "prog_io_util.m"
  {
#line 520 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 520 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "prog_io_util.m"
      {
#line 520 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 520 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 520 "prog_io_util.m"
      }
#line 520 "prog_io_util.m"
    else
#line 521 "prog_io_util.m"
      {
#line 521 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 521 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 521 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 521 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 522 "prog_io_util.m"
        {
#line 522 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 521 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 521 "prog_io_util.m"
          {
#line 523 "prog_io_util.m"
            {
#line 523 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 521 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 521 "prog_io_util.m"
              {
#line 521 "prog_io_util.m"
                {
#line 521 "prog_io_util.m"
                  MR_Word base;
#line 521 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 521 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 521 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 521 "prog_io_util.m"
                }
#line 521 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 521 "prog_io_util.m"
              }
#line 521 "prog_io_util.m"
          }
#line 521 "prog_io_util.m"
      }
#line 520 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 520 "prog_io_util.m"
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
#line 447 "prog_io_util.m"
  {
#line 447 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
#line 447 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_8;
#line 447 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Purity0_10;
#line 442 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PurityName_7;
#line 442 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 442 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 442 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 442 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 442 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 442 "prog_io_util.m"
      {
#line 442 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
#line 442 "prog_io_util.m"
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
#line 442 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
#line 442 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 442 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 442 "prog_io_util.m"
          {
#line 442 "prog_io_util.m"
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
#line 442 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 442 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 442 "prog_io_util.m"
              {
#line 442 "prog_io_util.m"
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
#line 442 "prog_io_util.m"
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
#line 442 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 443 "prog_io_util.m"
                  {
#line 443 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
#line 442 "prog_io_util.m"
              }
#line 442 "prog_io_util.m"
          }
#line 442 "prog_io_util.m"
      }
#line 447 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 445 "prog_io_util.m"
      {
#line 445 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
#line 446 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
#line 445 "prog_io_util.m"
      }
#line 447 "prog_io_util.m"
    else
#line 448 "prog_io_util.m"
      {
#line 448 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
#line 449 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
#line 448 "prog_io_util.m"
      }
#line 447 "prog_io_util.m"
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
#line 452 "prog_io_util.m"
  {
#line 452 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 452 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 457 "prog_io_util.m"
      {
#line 457 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__BuiltinType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 457 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_14;
#line 457 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_15;
#line 457 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;

#line 458 "prog_io_util.m"
        {
#line 458 "prog_io_util.m"
          parse_tree__prog_io_util__Context_14 = mercury__term__context_init_0_f_0();
        }
#line 459 "prog_io_util.m"
        {
#line 459 "prog_io_util.m"
          parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_12, &parse_tree__prog_io_util__Name_15);
        }
#line 460 "prog_io_util.m"
        {
#line 460 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 460 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_15));
#line 460 "prog_io_util.m"
        }
#line 460 "prog_io_util.m"
        {
#line 460 "prog_io_util.m"
          MR_Word base;
#line 460 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 460 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 460 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 460 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_14));
#line 460 "prog_io_util.m"
        }
#line 457 "prog_io_util.m"
      }
#line 452 "prog_io_util.m"
    else
#line 452 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 454 "prog_io_util.m"
        {
#line 454 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 454 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTerms_11;
#line 454 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 455 "prog_io_util.m"
          {
#line 455 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_8, &parse_tree__prog_io_util__ArgTerms_11);
          }
#line 456 "prog_io_util.m"
          {
#line 456 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_11, parse_tree__prog_io_util__HeadVar__2_2);
#line 456 "prog_io_util.m"
            return;
          }
#line 454 "prog_io_util.m"
        }
#line 452 "prog_io_util.m"
      else
#line 452 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 452 "prog_io_util.m"
          {
#line 452 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 452 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Var_5;
#line 452 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;
#line 452 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 452 "prog_io_util.m"
            {
#line 452 "prog_io_util.m"
              parse_tree__prog_io_util__V_6_6 = mercury__term__context_init_0_f_0();
            }
#line 453 "prog_io_util.m"
            {
#line 453 "prog_io_util.m"
              parse_tree__prog_io_util__Var_5 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_3);
            }
#line 452 "prog_io_util.m"
            {
#line 452 "prog_io_util.m"
              MR_Word base;
#line 452 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 452 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_5));
#line 452 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_6_6));
#line 452 "prog_io_util.m"
            }
#line 452 "prog_io_util.m"
          }
#line 452 "prog_io_util.m"
        else
#line 452 "prog_io_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 480 "prog_io_util.m"
            {
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_51;
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Var_52;
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_53;
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_56_56;
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57;
#line 480 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));

#line 481 "prog_io_util.m"
              {
#line 481 "prog_io_util.m"
                parse_tree__prog_io_util__Context_51 = mercury__term__context_init_0_f_0();
              }
#line 482 "prog_io_util.m"
              {
#line 482 "prog_io_util.m"
                parse_tree__prog_io_util__Var_52 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_47);
              }
#line 483 "prog_io_util.m"
              {
#line 483 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_53);
              }
#line 485 "prog_io_util.m"
              {
#line 485 "prog_io_util.m"
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_52));
#line 485 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 485 "prog_io_util.m"
              }
#line 485 "prog_io_util.m"
              {
#line 485 "prog_io_util.m"
                parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 485 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_53));
#line 485 "prog_io_util.m"
              }
#line 484 "prog_io_util.m"
              {
#line 484 "prog_io_util.m"
                MR_Word base;
#line 484 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 484 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 484 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
#line 484 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 484 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 484 "prog_io_util.m"
              }
#line 480 "prog_io_util.m"
            }
#line 452 "prog_io_util.m"
          else
#line 452 "prog_io_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 461 "prog_io_util.m"
              {
#line 461 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 461 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 461 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Purity_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));
#line 461 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Context_23;
#line 461 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgTerms_24;
#line 461 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Term2_29;

#line 462 "prog_io_util.m"
                {
#line 462 "prog_io_util.m"
                  parse_tree__prog_io_util__Context_23 = mercury__term__context_init_0_f_0();
                }
#line 463 "prog_io_util.m"
                {
#line 463 "prog_io_util.m"
                  parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_18, &parse_tree__prog_io_util__ArgTerms_24);
                }
#line 470 "prog_io_util.m"
                if ((parse_tree__prog_io_util__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "prog_io_util.m"
                  {
#line 472 "prog_io_util.m"
                    {
#line 472 "prog_io_util.m"
                      parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
#line 472 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 472 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 472 "prog_io_util.m"
                    }
#line 471 "prog_io_util.m"
                  }
#line 470 "prog_io_util.m"
                else
#line 465 "prog_io_util.m"
                  {
#line 465 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Ret_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_19, (MR_Integer) 0)));
#line 465 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Term1_27;
#line 465 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetTerm_28;
#line 465 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_36_36;
#line 465 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_37_37;

#line 466 "prog_io_util.m"
                    {
#line 466 "prog_io_util.m"
                      parse_tree__prog_io_util__Term1_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 466 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
#line 466 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 466 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 466 "prog_io_util.m"
                    }
#line 468 "prog_io_util.m"
                    {
#line 468 "prog_io_util.m"
                      parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_25, &parse_tree__prog_io_util__RetTerm_28);
                    }
#line 469 "prog_io_util.m"
                    {
#line 469 "prog_io_util.m"
                      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_28));
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "prog_io_util.m"
                    }
#line 469 "prog_io_util.m"
                    {
#line 469 "prog_io_util.m"
                      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_27));
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 469 "prog_io_util.m"
                    }
#line 469 "prog_io_util.m"
                    {
#line 469 "prog_io_util.m"
                      parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 469 "prog_io_util.m"
                    }
#line 465 "prog_io_util.m"
                  }
#line 512 "prog_io_util.m"
                if ((parse_tree__prog_io_util__Purity_20 == (MR_Integer) 2))
#line 516 "prog_io_util.m"
                  {
#line 516 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_80;
#line 516 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_83_83;

#line 517 "prog_io_util.m"
                    {
#line 517 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_80 = mercury__term__context_init_0_f_0();
                    }
#line 518 "prog_io_util.m"
                    {
#line 518 "prog_io_util.m"
                      parse_tree__prog_io_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 518 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "prog_io_util.m"
                    }
#line 518 "prog_io_util.m"
                    {
#line 518 "prog_io_util.m"
                      MR_Word base;
#line 518 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 518 "prog_io_util.m"
                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 518 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
#line 518 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_83_83));
#line 518 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_80));
#line 518 "prog_io_util.m"
                    }
#line 516 "prog_io_util.m"
                  }
#line 512 "prog_io_util.m"
                else
#line 512 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Purity_20 == (MR_Integer) 0))
#line 512 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = parse_tree__prog_io_util__Term2_29;
#line 512 "prog_io_util.m"
                  else
#line 513 "prog_io_util.m"
                    {
#line 513 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Context_73;
#line 513 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_76_76;

#line 514 "prog_io_util.m"
                      {
#line 514 "prog_io_util.m"
                        parse_tree__prog_io_util__Context_73 = mercury__term__context_init_0_f_0();
                      }
#line 515 "prog_io_util.m"
                      {
#line 515 "prog_io_util.m"
                        parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 515 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "prog_io_util.m"
                      }
#line 515 "prog_io_util.m"
                      {
#line 515 "prog_io_util.m"
                        MR_Word base;
#line 515 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_io_util.m"
                        *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 515 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
#line 515 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 515 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_73));
#line 515 "prog_io_util.m"
                      }
#line 513 "prog_io_util.m"
                    }
#line 461 "prog_io_util.m"
              }
#line 452 "prog_io_util.m"
            else
#line 452 "prog_io_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 486 "prog_io_util.m"
                {
#line 487 "prog_io_util.m"
                  {
#line 487 "prog_io_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
#line 487 "prog_io_util.m"
                    return;
                  }
#line 486 "prog_io_util.m"
                }
#line 452 "prog_io_util.m"
              else
#line 476 "prog_io_util.m"
                {
#line 476 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Context_43;
#line 476 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__ArgTerms_44;
#line 476 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 477 "prog_io_util.m"
                  {
#line 477 "prog_io_util.m"
                    parse_tree__prog_io_util__Context_43 = mercury__term__context_init_0_f_0();
                  }
#line 478 "prog_io_util.m"
                  {
#line 478 "prog_io_util.m"
                    parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_40, &parse_tree__prog_io_util__ArgTerms_44);
                  }
#line 479 "prog_io_util.m"
                  {
#line 479 "prog_io_util.m"
                    MR_Word base;
#line 479 "prog_io_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 479 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 479 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
#line 479 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_44));
#line 479 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_43));
#line 479 "prog_io_util.m"
                  }
#line 476 "prog_io_util.m"
                }
#line 452 "prog_io_util.m"
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
#line 397 "prog_io_util.m"
  {
#line 397 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 398 "prog_io_util.m"
    {
#line 398 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_2_5_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__Result_8);
#line 398 "prog_io_util.m"
      return;
    }
#line 397 "prog_io_util.m"
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
#line 390 "prog_io_util.m"
  {
#line 390 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 390 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 390 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 393 "prog_io_util.m"
    {
#line 393 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 395 "prog_io_util.m"
    {
#line 395 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 395 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 395 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 395 "prog_io_util.m"
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 390 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 390 "prog_io_util.m"
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
#line 340 "prog_io_util.m"
  {
#line 340 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 1)));
#line 340 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Var0_9;
#line 336 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 336 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 336 "prog_io_util.m"
      {
#line 336 "prog_io_util.m"
        parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 336 "prog_io_util.m"
        parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 338 "prog_io_util.m"
        {
#line 338 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_11;
#line 338 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_30_30;

#line 338 "prog_io_util.m"
          {
#line 338 "prog_io_util.m"
            mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
          }
#line 339 "prog_io_util.m"
          {
#line 339 "prog_io_util.m"
            parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
#line 339 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "prog_io_util.m"
          }
#line 339 "prog_io_util.m"
          {
#line 339 "prog_io_util.m"
            MR_Word base;
#line 339 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 339 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 339 "prog_io_util.m"
          }
#line 338 "prog_io_util.m"
        }
#line 336 "prog_io_util.m"
      }
#line 336 "prog_io_util.m"
    else
#line 344 "prog_io_util.m"
      {
#line 344 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__BuiltinType_12;
#line 417 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_89;
#line 417 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_91_91;
#line 417 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_92_92;
#line 418 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_90_90;

#line 418 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 418 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 418 "prog_io_util.m"
          {
#line 418 "prog_io_util.m"
            parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 418 "prog_io_util.m"
            parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 418 "prog_io_util.m"
            parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 418 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 417 "prog_io_util.m"
              {
#line 418 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 418 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 418 "prog_io_util.m"
                  {
#line 418 "prog_io_util.m"
                    parse_tree__prog_io_util__Name_89 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_91_91, (MR_Integer) 0)));
#line 419 "prog_io_util.m"
                    {
#line 419 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_io_util__BuiltinType_12, parse_tree__prog_io_util__Name_89);
                    }
#line 418 "prog_io_util.m"
                  }
#line 417 "prog_io_util.m"
              }
#line 418 "prog_io_util.m"
          }
#line 344 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 343 "prog_io_util.m"
          {
#line 343 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_32_32;

#line 343 "prog_io_util.m"
            {
#line 343 "prog_io_util.m"
              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 343 "prog_io_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__BuiltinType_12));
#line 343 "prog_io_util.m"
            }
#line 343 "prog_io_util.m"
            {
#line 343 "prog_io_util.m"
              MR_Word base;
#line 343 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 343 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = base;
#line 343 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 343 "prog_io_util.m"
            }
#line 343 "prog_io_util.m"
          }
#line 344 "prog_io_util.m"
        else
#line 348 "prog_io_util.m"
          {
#line 348 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HOArgs_13;
#line 348 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeRet_14;
#line 348 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Purity_15;

#line 345 "prog_io_util.m"
            {
#line 345 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_higher_order_type_5_p_0(parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__HOArgs_13, &parse_tree__prog_io_util__MaybeRet_14, &parse_tree__prog_io_util__Purity_15);
            }
#line 348 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 347 "prog_io_util.m"
              {
#line 347 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 347 "prog_io_util.m"
                {
#line 347 "prog_io_util.m"
                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 347 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__HOArgs_13));
#line 347 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 2) = ((MR_Box) (parse_tree__prog_io_util__MaybeRet_14));
#line 347 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_15));
#line 347 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 4) = NULL;
#line 347 "prog_io_util.m"
                }
#line 347 "prog_io_util.m"
                {
#line 347 "prog_io_util.m"
                  MR_Word base;
#line 347 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 347 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 347 "prog_io_util.m"
                }
#line 347 "prog_io_util.m"
              }
#line 348 "prog_io_util.m"
            else
#line 359 "prog_io_util.m"
              {
#line 359 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 349 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 349 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_35_35;
#line 349 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18;

#line 349 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 349 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 349 "prog_io_util.m"
                  {
#line 349 "prog_io_util.m"
                    parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 349 "prog_io_util.m"
                    parse_tree__prog_io_util__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 349 "prog_io_util.m"
                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 349 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 349 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 349 "prog_io_util.m"
                      {
#line 349 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 349 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_35_35, (MR_String) "{}") == 0);
#line 349 "prog_io_util.m"
                      }
#line 349 "prog_io_util.m"
                  }
#line 359 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 351 "prog_io_util.m"
                  {
#line 351 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgsResult_19;

#line 351 "prog_io_util.m"
                    {
#line 351 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_17, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_19);
                    }
#line 355 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_19)) == (MR_mktag((MR_Integer) 0))))
#line 357 "prog_io_util.m"
                      *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_19;
#line 355 "prog_io_util.m"
                    else
#line 353 "prog_io_util.m"
                      {
#line 353 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_19, (MR_Integer) 0)));
#line 353 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;

#line 354 "prog_io_util.m"
                        {
#line 354 "prog_io_util.m"
                          parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 354 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 354 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_20));
#line 354 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "prog_io_util.m"
                        }
#line 354 "prog_io_util.m"
                        {
#line 354 "prog_io_util.m"
                          MR_Word base;
#line 354 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 354 "prog_io_util.m"
                          *parse_tree__prog_io_util__Result_8 = base;
#line 354 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 354 "prog_io_util.m"
                        }
#line 353 "prog_io_util.m"
                      }
#line 351 "prog_io_util.m"
                  }
#line 359 "prog_io_util.m"
                else
#line 370 "prog_io_util.m"
                  {
#line 370 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_23;
#line 362 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 362 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_39_39;
#line 362 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_22_22;

#line 362 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 362 "prog_io_util.m"
                      {
#line 362 "prog_io_util.m"
                        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 362 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 362 "prog_io_util.m"
                        parse_tree__prog_io_util__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 362 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 362 "prog_io_util.m"
                          {
#line 362 "prog_io_util.m"
                            parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 362 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "") == 0);
#line 362 "prog_io_util.m"
                          }
#line 362 "prog_io_util.m"
                      }
#line 370 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 364 "prog_io_util.m"
                      {
#line 364 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__TermStr_24;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Pieces_25;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_26;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_40_40;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_42_42;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_45_45;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_46_46;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_55_55;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_56_56;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_57_57;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_58_58;
#line 364 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_61_61;

#line 364 "prog_io_util.m"
                        {
#line 364 "prog_io_util.m"
                          parse_tree__prog_io_util__TermStr_24 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                        }
#line 366 "prog_io_util.m"
                        {
#line 366 "prog_io_util.m"
                          parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_24));
#line 366 "prog_io_util.m"
                        }
#line 366 "prog_io_util.m"
                        {
#line 366 "prog_io_util.m"
                          parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 366 "prog_io_util.m"
                        }
#line 366 "prog_io_util.m"
                        {
#line 366 "prog_io_util.m"
                          parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[16])));
#line 366 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 366 "prog_io_util.m"
                        }
#line 365 "prog_io_util.m"
                        {
#line 365 "prog_io_util.m"
                          parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
#line 365 "prog_io_util.m"
                        }
#line 365 "prog_io_util.m"
                        {
#line 365 "prog_io_util.m"
                          parse_tree__prog_io_util__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_40_40);
                        }
#line 368 "prog_io_util.m"
                        {
#line 368 "prog_io_util.m"
                          parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_25));
#line 368 "prog_io_util.m"
                        }
#line 368 "prog_io_util.m"
                        {
#line 368 "prog_io_util.m"
                          parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "prog_io_util.m"
                        }
#line 368 "prog_io_util.m"
                        {
#line 368 "prog_io_util.m"
                          parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 368 "prog_io_util.m"
                        }
#line 368 "prog_io_util.m"
                        {
#line 368 "prog_io_util.m"
                          parse_tree__prog_io_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 368 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "prog_io_util.m"
                        }
#line 367 "prog_io_util.m"
                        {
#line 367 "prog_io_util.m"
                          parse_tree__prog_io_util__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 367 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_55_55));
#line 367 "prog_io_util.m"
                        }
#line 369 "prog_io_util.m"
                        {
#line 369 "prog_io_util.m"
                          parse_tree__prog_io_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
#line 369 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "prog_io_util.m"
                        }
#line 369 "prog_io_util.m"
                        {
#line 369 "prog_io_util.m"
                          MR_Word base;
#line 369 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 369 "prog_io_util.m"
                          *parse_tree__prog_io_util__Result_8 = base;
#line 369 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_61_61));
#line 369 "prog_io_util.m"
                        }
#line 364 "prog_io_util.m"
                      }
#line 370 "prog_io_util.m"
                    else
#line 373 "prog_io_util.m"
                      {
#line 373 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__NameResult_27;

#line 373 "prog_io_util.m"
                        {
#line 373 "prog_io_util.m"
                          parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_27);
                        }
#line 384 "prog_io_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_27)) == (MR_mktag((MR_Integer) 0))))
#line 385 "prog_io_util.m"
                          {
#line 385 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Specs_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));

#line 386 "prog_io_util.m"
                            {
#line 386 "prog_io_util.m"
                              MR_Word base;
#line 386 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 386 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = base;
#line 386 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_72));
#line 386 "prog_io_util.m"
                            }
#line 385 "prog_io_util.m"
                          }
#line 384 "prog_io_util.m"
                        else
#line 375 "prog_io_util.m"
                          {
#line 375 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));
#line 375 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 1)));
#line 375 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgsResult_69;

#line 376 "prog_io_util.m"
                            {
#line 376 "prog_io_util.m"
                              parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__ArgTerms_29, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_69);
                            }
#line 380 "prog_io_util.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_69)) == (MR_mktag((MR_Integer) 0))))
#line 382 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_69;
#line 380 "prog_io_util.m"
                            else
#line 378 "prog_io_util.m"
                              {
#line 378 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_63_63;
#line 378 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgTypes_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_69, (MR_Integer) 0)));

#line 379 "prog_io_util.m"
                                {
#line 379 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 379 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_28));
#line 379 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_65));
#line 379 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_util.m"
                                }
#line 379 "prog_io_util.m"
                                {
#line 379 "prog_io_util.m"
                                  MR_Word base;
#line 379 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Result_8 = base;
#line 379 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 379 "prog_io_util.m"
                                }
#line 378 "prog_io_util.m"
                              }
#line 375 "prog_io_util.m"
                          }
#line 373 "prog_io_util.m"
                      }
#line 370 "prog_io_util.m"
                  }
#line 359 "prog_io_util.m"
              }
#line 348 "prog_io_util.m"
          }
#line 344 "prog_io_util.m"
      }
#line 340 "prog_io_util.m"
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
#line 324 "prog_io_util.m"
  {
#line 324 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 324 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 324 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 327 "prog_io_util.m"
    {
#line 327 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 329 "prog_io_util.m"
    {
#line 329 "prog_io_util.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 329 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 329 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 329 "prog_io_util.m"
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 324 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 324 "prog_io_util.m"
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
#line 295 "prog_io_util.m"
  {
#line 295 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 295 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
#line 295 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
#line 295 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
#line 295 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_18;
#line 302 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 302 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
#line 297 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 297 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_23_23;
#line 297 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 297 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 297 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 297 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 297 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 297 "prog_io_util.m"
      {
#line 297 "prog_io_util.m"
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
#line 297 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
#line 297 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
#line 297 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 297 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 297 "prog_io_util.m"
          {
#line 297 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
#line 297 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
#line 297 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 297 "prog_io_util.m"
              {
#line 298 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 298 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 298 "prog_io_util.m"
                  {
#line 298 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 298 "prog_io_util.m"
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
#line 298 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 298 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 298 "prog_io_util.m"
                      {
#line 298 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 298 "prog_io_util.m"
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
#line 298 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "prog_io_util.m"
                      }
#line 298 "prog_io_util.m"
                  }
#line 297 "prog_io_util.m"
              }
#line 297 "prog_io_util.m"
          }
#line 297 "prog_io_util.m"
      }
#line 302 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 300 "prog_io_util.m"
      {
#line 300 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 301 "prog_io_util.m"
        {
#line 301 "prog_io_util.m"
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
#line 301 "prog_io_util.m"
        }
#line 300 "prog_io_util.m"
      }
#line 302 "prog_io_util.m"
    else
#line 303 "prog_io_util.m"
      {
#line 303 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
#line 304 "prog_io_util.m"
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "prog_io_util.m"
      }
#line 306 "prog_io_util.m"
    {
#line 306 "prog_io_util.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
#line 311 "prog_io_util.m"
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "prog_io_util.m"
      {
#line 313 "prog_io_util.m"
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
#line 311 "prog_io_util.m"
    else
#line 308 "prog_io_util.m"
      {
#line 308 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

#line 309 "prog_io_util.m"
        {
#line 309 "prog_io_util.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
#line 308 "prog_io_util.m"
      }
#line 319 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
#line 321 "prog_io_util.m"
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
#line 319 "prog_io_util.m"
    else
#line 317 "prog_io_util.m"
      {
#line 317 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
#line 317 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
#line 317 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;

#line 318 "prog_io_util.m"
        {
#line 318 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
#line 318 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
#line 318 "prog_io_util.m"
        }
#line 318 "prog_io_util.m"
        {
#line 318 "prog_io_util.m"
          MR_Word base;
#line 318 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_util.m"
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
#line 318 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
#line 318 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 318 "prog_io_util.m"
        }
#line 317 "prog_io_util.m"
      }
#line 295 "prog_io_util.m"
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
#line 289 "prog_io_util.m"
  {
#line 289 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 289 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
#line 289 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 283 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 284 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

#line 283 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 283 "prog_io_util.m"
      {
#line 283 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
#line 283 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
#line 283 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
#line 283 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 283 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 283 "prog_io_util.m"
          {
#line 283 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 283 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
#line 283 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 283 "prog_io_util.m"
              {
#line 284 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 284 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 284 "prog_io_util.m"
                  {
#line 284 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 284 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 284 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 284 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 284 "prog_io_util.m"
                      {
#line 284 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 284 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 284 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "prog_io_util.m"
                      }
#line 284 "prog_io_util.m"
                  }
#line 283 "prog_io_util.m"
              }
#line 283 "prog_io_util.m"
          }
#line 283 "prog_io_util.m"
      }
#line 289 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 286 "prog_io_util.m"
      {
#line 286 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
#line 286 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
#line 286 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
#line 288 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

#line 286 "prog_io_util.m"
        {
#line 286 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
#line 286 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 286 "prog_io_util.m"
          {
#line 287 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 14002 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14004 "parse_tree.prog_io_util.c"
            {
#line 14006 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14008 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
#line 14010 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
#line 14012 "parse_tree.prog_io_util.c"
            }
#line 288 "prog_io_util.m"
            {
#line 288 "prog_io_util.m"
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
#line 288 "prog_io_util.m"
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
#line 288 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 286 "prog_io_util.m"
          }
#line 286 "prog_io_util.m"
      }
#line 289 "prog_io_util.m"
    else
#line 290 "prog_io_util.m"
      {
#line 290 "prog_io_util.m"
        {
#line 290 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
#line 290 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 290 "prog_io_util.m"
          {
#line 291 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 291 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 290 "prog_io_util.m"
          }
#line 290 "prog_io_util.m"
      }
#line 289 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 289 "prog_io_util.m"
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
#line 272 "prog_io_util.m"
  {
#line 272 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 272 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
#line 272 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_10;
#line 272 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Arg_12;
#line 272 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ModuleName_13;
#line 272 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 272 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 272 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_16_16;
#line 273 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 273 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 273 "prog_io_util.m"
      {
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 273 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 273 "prog_io_util.m"
          {
#line 273 "prog_io_util.m"
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 275 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
#line 275 "prog_io_util.m"
              {
#line 275 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 275 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 275 "prog_io_util.m"
              }
#line 275 "prog_io_util.m"
            else
#line 275 "prog_io_util.m"
              if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
#line 274 "prog_io_util.m"
                {
#line 274 "prog_io_util.m"
                  *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 274 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 274 "prog_io_util.m"
                }
#line 275 "prog_io_util.m"
              else
#line 275 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 272 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 272 "prog_io_util.m"
              {
#line 277 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 277 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 277 "prog_io_util.m"
                  {
#line 277 "prog_io_util.m"
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
#line 277 "prog_io_util.m"
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
#line 277 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 272 "prog_io_util.m"
                      {
#line 278 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
#line 278 "prog_io_util.m"
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 279 "prog_io_util.m"
                        {
#line 279 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
#line 272 "prog_io_util.m"
                      }
#line 277 "prog_io_util.m"
                  }
#line 272 "prog_io_util.m"
              }
#line 273 "prog_io_util.m"
          }
#line 273 "prog_io_util.m"
      }
#line 272 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 272 "prog_io_util.m"
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
#line 267 "prog_io_util.m"
  {
#line 267 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 268 "prog_io_util.m"
    {
#line 268 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
#line 267 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 267 "prog_io_util.m"
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
#line 260 "prog_io_util.m"
  {
#line 260 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 260 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 261 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;

#line 261 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 261 "prog_io_util.m"
      {
#line 261 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
#line 261 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
#line 261 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
#line 261 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 261 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 261 "prog_io_util.m"
          {
#line 261 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 261 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
#line 260 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
              {
#line 262 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 262 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 262 "prog_io_util.m"
                  {
#line 262 "prog_io_util.m"
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 262 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 262 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 262 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 262 "prog_io_util.m"
                      {
#line 262 "prog_io_util.m"
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 262 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 262 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
                          {
#line 263 "prog_io_util.m"
                            {
#line 263 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
#line 260 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
                              {
#line 265 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 265 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 265 "prog_io_util.m"
                                  {
#line 265 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
#line 265 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
#line 265 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
#line 265 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 265 "prog_io_util.m"
                                      {
#line 265 "prog_io_util.m"
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 265 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "prog_io_util.m"
                                      }
#line 265 "prog_io_util.m"
                                  }
#line 260 "prog_io_util.m"
                              }
#line 260 "prog_io_util.m"
                          }
#line 262 "prog_io_util.m"
                      }
#line 262 "prog_io_util.m"
                  }
#line 260 "prog_io_util.m"
              }
#line 261 "prog_io_util.m"
          }
#line 261 "prog_io_util.m"
      }
#line 260 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 260 "prog_io_util.m"
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
#line 1037 "prog_io_util.m"
  {
#line 1037 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1035 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1035 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_37_37;
#line 1035 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1035 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1035 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1035 "prog_io_util.m"
      {
#line 1035 "prog_io_util.m"
        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1035 "prog_io_util.m"
        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1035 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1035 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1035 "prog_io_util.m"
          {
#line 1035 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1035 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1035 "prog_io_util.m"
              {
#line 1035 "prog_io_util.m"
                parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 1035 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "[]") == 0);
#line 1035 "prog_io_util.m"
              }
#line 1035 "prog_io_util.m"
          }
#line 1035 "prog_io_util.m"
      }
#line 1037 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
      {
#line 1036 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
#line 1036 "prog_io_util.m"
      }
#line 1037 "prog_io_util.m"
    else
#line 1127 "prog_io_util.m"
      {
#line 1127 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1127 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_11;
#line 1037 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_43_43;
#line 1037 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_44_44;
#line 1037 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_45_45;
#line 1037 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_46_46;
#line 1037 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_47_47;
#line 1037 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1037 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1037 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1037 "prog_io_util.m"
          {
#line 1037 "prog_io_util.m"
            parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1037 "prog_io_util.m"
            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1037 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1037 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 1037 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1037 "prog_io_util.m"
              {
#line 1037 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 1037 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_44_44, (MR_String) "[|]") == 0);
#line 1037 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1037 "prog_io_util.m"
                  {
#line 1037 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1037 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1037 "prog_io_util.m"
                      {
#line 1037 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 1037 "prog_io_util.m"
                        parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 1037 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 1037 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1037 "prog_io_util.m"
                          {
#line 1037 "prog_io_util.m"
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 0)));
#line 1037 "prog_io_util.m"
                            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 1)));
#line 1037 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io_util.m"
                          }
#line 1037 "prog_io_util.m"
                      }
#line 1037 "prog_io_util.m"
                  }
#line 1037 "prog_io_util.m"
              }
#line 1037 "prog_io_util.m"
          }
#line 1127 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1122 "prog_io_util.m"
          {
#line 1122 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 1042 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1042 "prog_io_util.m"
              {
#line 1042 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1042 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1042 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_116_116;
#line 1042 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_117_117;
#line 1042 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_118_118;
#line 1042 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_120_120;
#line 1043 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1043 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_119_119;

#line 1043 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1043 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1043 "prog_io_util.m"
                  {
#line 1043 "prog_io_util.m"
                    parse_tree__prog_io_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 0)));
#line 1043 "prog_io_util.m"
                    parse_tree__prog_io_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 1)));
#line 1043 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_116_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1042 "prog_io_util.m"
                      {
#line 1043 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_115_115)) == (MR_mktag((MR_Integer) 0)));
#line 1043 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1043 "prog_io_util.m"
                          {
#line 1043 "prog_io_util.m"
                            parse_tree__prog_io_util__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_115_115, (MR_Integer) 0)));
#line 1043 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 1043 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1043 "prog_io_util.m"
                              {
#line 1043 "prog_io_util.m"
                                parse_tree__prog_io_util__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 0)));
#line 1043 "prog_io_util.m"
                                parse_tree__prog_io_util__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 1)));
#line 1042 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!") == 0))
#line 1044 "prog_io_util.m"
                                  {
#line 1044 "prog_io_util.m"
                                    {
#line 1044 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1044 "prog_io_util.m"
                                    }
#line 1044 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1044 "prog_io_util.m"
                                  }
#line 1042 "prog_io_util.m"
                                else
#line 1042 "prog_io_util.m"
                                  if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!.") == 0))
#line 1047 "prog_io_util.m"
                                    {
#line 1047 "prog_io_util.m"
                                      {
#line 1047 "prog_io_util.m"
                                        parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "prog_io_util.m"
                                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1047 "prog_io_util.m"
                                      }
#line 1047 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1047 "prog_io_util.m"
                                    }
#line 1042 "prog_io_util.m"
                                  else
#line 1042 "prog_io_util.m"
                                    if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!:") == 0))
#line 1050 "prog_io_util.m"
                                      {
#line 1050 "prog_io_util.m"
                                        {
#line 1050 "prog_io_util.m"
                                          parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1050 "prog_io_util.m"
                                        }
#line 1050 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1050 "prog_io_util.m"
                                      }
#line 1042 "prog_io_util.m"
                                    else
#line 1042 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1043 "prog_io_util.m"
                              }
#line 1043 "prog_io_util.m"
                          }
#line 1042 "prog_io_util.m"
                      }
#line 1043 "prog_io_util.m"
                  }
#line 1042 "prog_io_util.m"
              }
#line 1042 "prog_io_util.m"
            else
#line 1040 "prog_io_util.m"
              {
#line 1040 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1040 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1041 "prog_io_util.m"
                {
#line 1041 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1041 "prog_io_util.m"
                }
#line 1040 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1040 "prog_io_util.m"
              }
#line 1122 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1054 "prog_io_util.m"
              {
#line 1054 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_23;

#line 1053 "prog_io_util.m"
                {
#line 1053 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_23);
                }
#line 1118 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_23)) == (MR_mktag((MR_Integer) 0))))
#line 1120 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_23;
#line 1118 "prog_io_util.m"
                else
#line 1057 "prog_io_util.m"
                  {
#line 1057 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 0)));
#line 1057 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 1)));
#line 1057 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailDotVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 2)));
#line 1057 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailColonVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 3)));

#line 1069 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 3))))
#line 1102 "prog_io_util.m"
                      {
#line 1102 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SV_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1104 "prog_io_util.m"
                        {
#line 1104 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

#line 14696 "parse_tree.prog_io_util.c"
                          {
#line 14698 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14700 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14702 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14704 "parse_tree.prog_io_util.c"
                          }
#line 1104 "prog_io_util.m"
                          {
#line 1104 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailStateVars_25);
                          }
#line 1104 "prog_io_util.m"
                        }
#line 1105 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1105 "prog_io_util.m"
                          {
#line 1105 "prog_io_util.m"
                            {
#line 1105 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

#line 14722 "parse_tree.prog_io_util.c"
                              {
#line 14724 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14726 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14728 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14730 "parse_tree.prog_io_util.c"
                              }
#line 1105 "prog_io_util.m"
                              {
#line 1105 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailDotVars_26);
                              }
#line 1105 "prog_io_util.m"
                            }
#line 1105 "prog_io_util.m"
                            if (!(parse_tree__prog_io_util__succeeded))
#line 1106 "prog_io_util.m"
                              {
#line 1106 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

#line 14746 "parse_tree.prog_io_util.c"
                                {
#line 14748 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14750 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14752 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14754 "parse_tree.prog_io_util.c"
                                }
#line 1106 "prog_io_util.m"
                                {
#line 1106 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailColonVars_27);
                                }
#line 1106 "prog_io_util.m"
                              }
#line 1105 "prog_io_util.m"
                          }
#line 1112 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1110 "prog_io_util.m"
                          {
#line 1110 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_63_63;
#line 1110 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_86;

#line 1109 "prog_io_util.m"
                            {
#line 1109 "prog_io_util.m"
                              parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_86);
                            }
#line 1111 "prog_io_util.m"
                            {
#line 1111 "prog_io_util.m"
                              parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_86));
#line 1111 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "prog_io_util.m"
                            }
#line 1111 "prog_io_util.m"
                            {
#line 1111 "prog_io_util.m"
                              MR_Word base;
#line 1111 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1111 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 1111 "prog_io_util.m"
                            }
#line 1110 "prog_io_util.m"
                          }
#line 1112 "prog_io_util.m"
                        else
#line 1113 "prog_io_util.m"
                          {
#line 1113 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ColonVars_34;

#line 1113 "prog_io_util.m"
                            {
#line 1113 "prog_io_util.m"
                              parse_tree__prog_io_util__ColonVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_89));
#line 1113 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1113 "prog_io_util.m"
                            }
#line 1114 "prog_io_util.m"
                            {
#line 1114 "prog_io_util.m"
                              MR_Word base;
#line 1114 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1114 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1114 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1114 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1114 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_34));
#line 1114 "prog_io_util.m"
                            }
#line 1113 "prog_io_util.m"
                          }
#line 1102 "prog_io_util.m"
                      }
#line 1069 "prog_io_util.m"
                    else
#line 1069 "prog_io_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 2))))
#line 1086 "prog_io_util.m"
                        {
#line 1086 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1088 "prog_io_util.m"
                          {
#line 1088 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

#line 14856 "parse_tree.prog_io_util.c"
                            {
#line 14858 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14860 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14862 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14864 "parse_tree.prog_io_util.c"
                            }
#line 1088 "prog_io_util.m"
                            {
#line 1088 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1088 "prog_io_util.m"
                          }
#line 1089 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1089 "prog_io_util.m"
                            {
#line 1089 "prog_io_util.m"
                              {
#line 1089 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

#line 14882 "parse_tree.prog_io_util.c"
                                {
#line 14884 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14886 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14888 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14890 "parse_tree.prog_io_util.c"
                                }
#line 1089 "prog_io_util.m"
                                {
#line 1089 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1089 "prog_io_util.m"
                              }
#line 1089 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1090 "prog_io_util.m"
                                {
#line 1090 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

#line 14906 "parse_tree.prog_io_util.c"
                                  {
#line 14908 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14910 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 14912 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 14914 "parse_tree.prog_io_util.c"
                                  }
#line 1090 "prog_io_util.m"
                                  {
#line 1090 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1090 "prog_io_util.m"
                                }
#line 1089 "prog_io_util.m"
                            }
#line 1096 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1094 "prog_io_util.m"
                            {
#line 1094 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_65_65;
#line 1094 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_82;

#line 1093 "prog_io_util.m"
                              {
#line 1093 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_82);
                              }
#line 1095 "prog_io_util.m"
                              {
#line 1095 "prog_io_util.m"
                                parse_tree__prog_io_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_82));
#line 1095 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1095 "prog_io_util.m"
                              }
#line 1095 "prog_io_util.m"
                              {
#line 1095 "prog_io_util.m"
                                MR_Word base;
#line 1095 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1095 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_65_65));
#line 1095 "prog_io_util.m"
                              }
#line 1094 "prog_io_util.m"
                            }
#line 1096 "prog_io_util.m"
                          else
#line 1097 "prog_io_util.m"
                            {
#line 1097 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__DotVars_33;

#line 1097 "prog_io_util.m"
                              {
#line 1097 "prog_io_util.m"
                                parse_tree__prog_io_util__DotVars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_85));
#line 1097 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1097 "prog_io_util.m"
                              }
#line 1098 "prog_io_util.m"
                              {
#line 1098 "prog_io_util.m"
                                MR_Word base;
#line 1098 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1098 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1098 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1098 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_33));
#line 1098 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1098 "prog_io_util.m"
                              }
#line 1097 "prog_io_util.m"
                            }
#line 1086 "prog_io_util.m"
                        }
#line 1069 "prog_io_util.m"
                      else
#line 1069 "prog_io_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 0))))
#line 1059 "prog_io_util.m"
                          {
#line 1059 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1060 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_94_94;

#line 15013 "parse_tree.prog_io_util.c"
                            {
#line 15015 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15017 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15019 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15021 "parse_tree.prog_io_util.c"
                            }
#line 1060 "prog_io_util.m"
                            {
#line 1060 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_94_94, parse_tree__prog_io_util__V_28, parse_tree__prog_io_util__TailVars_24);
                            }
#line 1064 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1062 "prog_io_util.m"
                              {
#line 1062 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Spec_29;
#line 1062 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_69_69;

#line 1061 "prog_io_util.m"
                                {
#line 1061 "prog_io_util.m"
                                  parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_29);
                                }
#line 1063 "prog_io_util.m"
                                {
#line 1063 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_29));
#line 1063 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1063 "prog_io_util.m"
                                }
#line 1063 "prog_io_util.m"
                                {
#line 1063 "prog_io_util.m"
                                  MR_Word base;
#line 1063 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1063 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 1063 "prog_io_util.m"
                                }
#line 1062 "prog_io_util.m"
                              }
#line 1064 "prog_io_util.m"
                            else
#line 1065 "prog_io_util.m"
                              {
#line 1065 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Vars_30;

#line 1065 "prog_io_util.m"
                                {
#line 1065 "prog_io_util.m"
                                  parse_tree__prog_io_util__Vars_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28));
#line 1065 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1065 "prog_io_util.m"
                                }
#line 1066 "prog_io_util.m"
                                {
#line 1066 "prog_io_util.m"
                                  MR_Word base;
#line 1066 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1066 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_30));
#line 1066 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1066 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1066 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1066 "prog_io_util.m"
                                }
#line 1065 "prog_io_util.m"
                              }
#line 1059 "prog_io_util.m"
                          }
#line 1069 "prog_io_util.m"
                        else
#line 1070 "prog_io_util.m"
                          {
#line 1070 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__SV_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1072 "prog_io_util.m"
                            {
#line 1072 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__TypeInfo_96_96;

#line 15117 "parse_tree.prog_io_util.c"
                              {
#line 15119 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15121 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15123 "parse_tree.prog_io_util.c"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15125 "parse_tree.prog_io_util.c"
                              }
#line 1072 "prog_io_util.m"
                              {
#line 1072 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_96_96, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailStateVars_25);
                              }
#line 1072 "prog_io_util.m"
                            }
#line 1073 "prog_io_util.m"
                            if (!(parse_tree__prog_io_util__succeeded))
#line 1073 "prog_io_util.m"
                              {
#line 1073 "prog_io_util.m"
                                {
#line 1073 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

#line 15143 "parse_tree.prog_io_util.c"
                                  {
#line 15145 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15147 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15149 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15151 "parse_tree.prog_io_util.c"
                                  }
#line 1073 "prog_io_util.m"
                                  {
#line 1073 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailDotVars_26);
                                  }
#line 1073 "prog_io_util.m"
                                }
#line 1073 "prog_io_util.m"
                                if (!(parse_tree__prog_io_util__succeeded))
#line 1074 "prog_io_util.m"
                                  {
#line 1074 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

#line 15167 "parse_tree.prog_io_util.c"
                                    {
#line 15169 "parse_tree.prog_io_util.c"
                                      parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15171 "parse_tree.prog_io_util.c"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15173 "parse_tree.prog_io_util.c"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15175 "parse_tree.prog_io_util.c"
                                    }
#line 1074 "prog_io_util.m"
                                    {
#line 1074 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailColonVars_27);
                                    }
#line 1074 "prog_io_util.m"
                                  }
#line 1073 "prog_io_util.m"
                              }
#line 1080 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1078 "prog_io_util.m"
                              {
#line 1078 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_67_67;
#line 1078 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Spec_79;

#line 1077 "prog_io_util.m"
                                {
#line 1077 "prog_io_util.m"
                                  parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_79);
                                }
#line 1079 "prog_io_util.m"
                                {
#line 1079 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_79));
#line 1079 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1079 "prog_io_util.m"
                                }
#line 1079 "prog_io_util.m"
                                {
#line 1079 "prog_io_util.m"
                                  MR_Word base;
#line 1079 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1079 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
#line 1079 "prog_io_util.m"
                                }
#line 1078 "prog_io_util.m"
                              }
#line 1080 "prog_io_util.m"
                            else
#line 1081 "prog_io_util.m"
                              {
#line 1081 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__StateVars_32;

#line 1081 "prog_io_util.m"
                                {
#line 1081 "prog_io_util.m"
                                  parse_tree__prog_io_util__StateVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_31));
#line 1081 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1081 "prog_io_util.m"
                                }
#line 1082 "prog_io_util.m"
                                {
#line 1082 "prog_io_util.m"
                                  MR_Word base;
#line 1082 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "prog_io_util.m"
                                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1082 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1082 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_32));
#line 1082 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1082 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1082 "prog_io_util.m"
                                }
#line 1081 "prog_io_util.m"
                              }
#line 1070 "prog_io_util.m"
                          }
#line 1057 "prog_io_util.m"
                  }
#line 1054 "prog_io_util.m"
              }
#line 1122 "prog_io_util.m"
            else
#line 1124 "prog_io_util.m"
              {
#line 1124 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_72_72;
#line 1124 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_90;

#line 1123 "prog_io_util.m"
                {
#line 1123 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_90);
                }
#line 1125 "prog_io_util.m"
                {
#line 1125 "prog_io_util.m"
                  parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_90));
#line 1125 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1125 "prog_io_util.m"
                }
#line 1125 "prog_io_util.m"
                {
#line 1125 "prog_io_util.m"
                  MR_Word base;
#line 1125 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1125 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 1125 "prog_io_util.m"
                }
#line 1124 "prog_io_util.m"
              }
#line 1122 "prog_io_util.m"
          }
#line 1127 "prog_io_util.m"
        else
#line 1129 "prog_io_util.m"
          {
#line 1129 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1129 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_91;

#line 1128 "prog_io_util.m"
            {
#line 1128 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_91);
            }
#line 1130 "prog_io_util.m"
            {
#line 1130 "prog_io_util.m"
              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
#line 1130 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1130 "prog_io_util.m"
            }
#line 1130 "prog_io_util.m"
            {
#line 1130 "prog_io_util.m"
              MR_Word base;
#line 1130 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1130 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1130 "prog_io_util.m"
            }
#line 1129 "prog_io_util.m"
          }
#line 1127 "prog_io_util.m"
      }
#line 1037 "prog_io_util.m"
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
#line 978 "prog_io_util.m"
  {
#line 978 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 976 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 976 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_29_29;
#line 976 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 976 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 976 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 976 "prog_io_util.m"
      {
#line 976 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 976 "prog_io_util.m"
        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 976 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 976 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 976 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 976 "prog_io_util.m"
          {
#line 976 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 976 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 976 "prog_io_util.m"
              {
#line 976 "prog_io_util.m"
                parse_tree__prog_io_util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 976 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_29_29, (MR_String) "[]") == 0);
#line 976 "prog_io_util.m"
              }
#line 976 "prog_io_util.m"
          }
#line 976 "prog_io_util.m"
      }
#line 978 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 977 "prog_io_util.m"
      {
#line 977 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[14]);
#line 977 "prog_io_util.m"
      }
#line 978 "prog_io_util.m"
    else
#line 1022 "prog_io_util.m"
      {
#line 1022 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1022 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 978 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 978 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_34_34;
#line 978 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_35_35;
#line 978 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_36_36;
#line 978 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_37_37;
#line 978 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 978 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 978 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 978 "prog_io_util.m"
          {
#line 978 "prog_io_util.m"
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 978 "prog_io_util.m"
            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 978 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 978 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 978 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 978 "prog_io_util.m"
              {
#line 978 "prog_io_util.m"
                parse_tree__prog_io_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
#line 978 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_34_34, (MR_String) "[|]") == 0);
#line 978 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 978 "prog_io_util.m"
                  {
#line 978 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 978 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 978 "prog_io_util.m"
                      {
#line 978 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 0)));
#line 978 "prog_io_util.m"
                        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 1)));
#line 978 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 978 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 978 "prog_io_util.m"
                          {
#line 978 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 978 "prog_io_util.m"
                            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 1)));
#line 978 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 978 "prog_io_util.m"
                          }
#line 978 "prog_io_util.m"
                      }
#line 978 "prog_io_util.m"
                  }
#line 978 "prog_io_util.m"
              }
#line 978 "prog_io_util.m"
          }
#line 1022 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1017 "prog_io_util.m"
          {
#line 1017 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 983 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 984 "prog_io_util.m"
              {
#line 984 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__SV0_16;
#line 984 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 984 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_39_39;
#line 984 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 984 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 984 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 984 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 984 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 984 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 984 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
                  {
#line 984 "prog_io_util.m"
                    parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 984 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "!") == 0);
#line 984 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
                      {
#line 984 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 984 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
                          {
#line 984 "prog_io_util.m"
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 984 "prog_io_util.m"
                            parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
#line 984 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 984 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
                              {
#line 984 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 984 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
                                  {
#line 984 "prog_io_util.m"
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 984 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 1)));
#line 985 "prog_io_util.m"
                                    {
#line 985 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
#line 985 "prog_io_util.m"
                                    }
#line 985 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 984 "prog_io_util.m"
                                  }
#line 984 "prog_io_util.m"
                              }
#line 984 "prog_io_util.m"
                          }
#line 984 "prog_io_util.m"
                      }
#line 984 "prog_io_util.m"
                  }
#line 984 "prog_io_util.m"
              }
#line 983 "prog_io_util.m"
            else
#line 981 "prog_io_util.m"
              {
#line 981 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 981 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 982 "prog_io_util.m"
                {
#line 982 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 982 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 982 "prog_io_util.m"
                }
#line 981 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 981 "prog_io_util.m"
              }
#line 1017 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 989 "prog_io_util.m"
              {
#line 989 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_19;

#line 988 "prog_io_util.m"
                {
#line 988 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_19);
                }
#line 1013 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_19)) == (MR_mktag((MR_Integer) 0))))
#line 1015 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_19;
#line 1013 "prog_io_util.m"
                else
#line 991 "prog_io_util.m"
                  {
#line 991 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 0)));
#line 991 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 1)));

#line 1002 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 0))))
#line 993 "prog_io_util.m"
                      {
#line 993 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 994 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_60_60;

#line 15644 "parse_tree.prog_io_util.c"
                        {
#line 15646 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15648 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15650 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 15652 "parse_tree.prog_io_util.c"
                        }
#line 994 "prog_io_util.m"
                        {
#line 994 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_60_60, parse_tree__prog_io_util__V_22, parse_tree__prog_io_util__TailVars_20);
                        }
#line 998 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 996 "prog_io_util.m"
                          {
#line 996 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_23;
#line 996 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_45_45;

#line 995 "prog_io_util.m"
                            {
#line 995 "prog_io_util.m"
                              parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                            }
#line 997 "prog_io_util.m"
                            {
#line 997 "prog_io_util.m"
                              parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
#line 997 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "prog_io_util.m"
                            }
#line 997 "prog_io_util.m"
                            {
#line 997 "prog_io_util.m"
                              MR_Word base;
#line 997 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 997 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 997 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 997 "prog_io_util.m"
                            }
#line 996 "prog_io_util.m"
                          }
#line 998 "prog_io_util.m"
                        else
#line 999 "prog_io_util.m"
                          {
#line 999 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Vars_24;

#line 999 "prog_io_util.m"
                            {
#line 999 "prog_io_util.m"
                              parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22));
#line 999 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 999 "prog_io_util.m"
                            }
#line 1000 "prog_io_util.m"
                            {
#line 1000 "prog_io_util.m"
                              MR_Word base;
#line 1000 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1000 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
#line 1000 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 1000 "prog_io_util.m"
                            }
#line 999 "prog_io_util.m"
                          }
#line 993 "prog_io_util.m"
                      }
#line 1002 "prog_io_util.m"
                    else
#line 1003 "prog_io_util.m"
                      {
#line 1003 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SV_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1004 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_62_62;

#line 15741 "parse_tree.prog_io_util.c"
                        {
#line 15743 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15745 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15747 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 15749 "parse_tree.prog_io_util.c"
                        }
#line 1004 "prog_io_util.m"
                        {
#line 1004 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_62_62, parse_tree__prog_io_util__SV_25, parse_tree__prog_io_util__TailStateVars_21);
                        }
#line 1008 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1006 "prog_io_util.m"
                          {
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_43_43;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_53;
#line 1006 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__TermStr_67;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Pieces_68;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_69_69;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_71_71;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_74_74;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_84_84;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_85_85;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_86_86;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_87_87;
#line 1006 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_88_88;

#line 1147 "prog_io_util.m"
                            {
#line 1147 "prog_io_util.m"
                              parse_tree__prog_io_util__TermStr_67 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1149 "prog_io_util.m"
                            {
#line 1149 "prog_io_util.m"
                              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_67));
#line 1149 "prog_io_util.m"
                            }
#line 1149 "prog_io_util.m"
                            {
#line 1149 "prog_io_util.m"
                              parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1149 "prog_io_util.m"
                            }
#line 1149 "prog_io_util.m"
                            {
#line 1149 "prog_io_util.m"
                              parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 1149 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 1149 "prog_io_util.m"
                            }
#line 1148 "prog_io_util.m"
                            {
#line 1148 "prog_io_util.m"
                              parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 1148 "prog_io_util.m"
                            }
#line 1148 "prog_io_util.m"
                            {
#line 1148 "prog_io_util.m"
                              parse_tree__prog_io_util__Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_69_69);
                            }
#line 1151 "prog_io_util.m"
                            {
#line 1151 "prog_io_util.m"
                              parse_tree__prog_io_util__V_86_86 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1151 "prog_io_util.m"
                            {
#line 1151 "prog_io_util.m"
                              parse_tree__prog_io_util__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_68));
#line 1151 "prog_io_util.m"
                            }
#line 1151 "prog_io_util.m"
                            {
#line 1151 "prog_io_util.m"
                              parse_tree__prog_io_util__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_util__V_88_88));
#line 1151 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_util.m"
                            }
#line 1151 "prog_io_util.m"
                            {
#line 1151 "prog_io_util.m"
                              parse_tree__prog_io_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_util__V_86_86));
#line 1151 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io_util__V_87_87));
#line 1151 "prog_io_util.m"
                            }
#line 1151 "prog_io_util.m"
                            {
#line 1151 "prog_io_util.m"
                              parse_tree__prog_io_util__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 1151 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_util.m"
                            }
#line 1150 "prog_io_util.m"
                            {
#line 1150 "prog_io_util.m"
                              parse_tree__prog_io_util__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1150 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_util__V_84_84));
#line 1150 "prog_io_util.m"
                            }
#line 1007 "prog_io_util.m"
                            {
#line 1007 "prog_io_util.m"
                              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_53));
#line 1007 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "prog_io_util.m"
                            }
#line 1007 "prog_io_util.m"
                            {
#line 1007 "prog_io_util.m"
                              MR_Word base;
#line 1007 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1007 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1007 "prog_io_util.m"
                            }
#line 1006 "prog_io_util.m"
                          }
#line 1008 "prog_io_util.m"
                        else
#line 1009 "prog_io_util.m"
                          {
#line 1009 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__StateVars_26;

#line 1009 "prog_io_util.m"
                            {
#line 1009 "prog_io_util.m"
                              parse_tree__prog_io_util__StateVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_25));
#line 1009 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 1009 "prog_io_util.m"
                            }
#line 1010 "prog_io_util.m"
                            {
#line 1010 "prog_io_util.m"
                              MR_Word base;
#line 1010 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1010 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 1010 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_26));
#line 1010 "prog_io_util.m"
                            }
#line 1009 "prog_io_util.m"
                          }
#line 1003 "prog_io_util.m"
                      }
#line 991 "prog_io_util.m"
                  }
#line 989 "prog_io_util.m"
              }
#line 1017 "prog_io_util.m"
            else
#line 1019 "prog_io_util.m"
              {
#line 1019 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_48_48;
#line 1019 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_56;

#line 1018 "prog_io_util.m"
                {
#line 1018 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_56);
                }
#line 1020 "prog_io_util.m"
                {
#line 1020 "prog_io_util.m"
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_56));
#line 1020 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1020 "prog_io_util.m"
                }
#line 1020 "prog_io_util.m"
                {
#line 1020 "prog_io_util.m"
                  MR_Word base;
#line 1020 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1020 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1020 "prog_io_util.m"
                }
#line 1019 "prog_io_util.m"
              }
#line 1017 "prog_io_util.m"
          }
#line 1022 "prog_io_util.m"
        else
#line 1024 "prog_io_util.m"
          {
#line 1024 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_51_51;
#line 1024 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_57;

#line 1023 "prog_io_util.m"
            {
#line 1023 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_57);
            }
#line 1025 "prog_io_util.m"
            {
#line 1025 "prog_io_util.m"
              parse_tree__prog_io_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_57));
#line 1025 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1025 "prog_io_util.m"
            }
#line 1025 "prog_io_util.m"
            {
#line 1025 "prog_io_util.m"
              MR_Word base;
#line 1025 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1025 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_51_51));
#line 1025 "prog_io_util.m"
            }
#line 1024 "prog_io_util.m"
          }
#line 1022 "prog_io_util.m"
      }
#line 978 "prog_io_util.m"
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
#line 941 "prog_io_util.m"
  {
#line 941 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 939 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 939 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_24_24;
#line 939 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 939 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 939 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 939 "prog_io_util.m"
      {
#line 939 "prog_io_util.m"
        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 939 "prog_io_util.m"
        parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 939 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 939 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 939 "prog_io_util.m"
          {
#line 939 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 939 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 939 "prog_io_util.m"
              {
#line 939 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 939 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "[]") == 0);
#line 939 "prog_io_util.m"
              }
#line 939 "prog_io_util.m"
          }
#line 939 "prog_io_util.m"
      }
#line 941 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 940 "prog_io_util.m"
      {
#line 940 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 940 "prog_io_util.m"
      }
#line 941 "prog_io_util.m"
    else
#line 965 "prog_io_util.m"
      {
#line 965 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 965 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 941 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 941 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_28_28;
#line 941 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 941 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 941 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 941 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 941 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 941 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 941 "prog_io_util.m"
          {
#line 941 "prog_io_util.m"
            parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 941 "prog_io_util.m"
            parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 941 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 941 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 941 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 941 "prog_io_util.m"
              {
#line 941 "prog_io_util.m"
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 941 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[|]") == 0);
#line 941 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 941 "prog_io_util.m"
                  {
#line 941 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 941 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 941 "prog_io_util.m"
                      {
#line 941 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 941 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 941 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 941 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 941 "prog_io_util.m"
                          {
#line 941 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 941 "prog_io_util.m"
                            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 1)));
#line 941 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "prog_io_util.m"
                          }
#line 941 "prog_io_util.m"
                      }
#line 941 "prog_io_util.m"
                  }
#line 941 "prog_io_util.m"
              }
#line 941 "prog_io_util.m"
          }
#line 965 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 959 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 960 "prog_io_util.m"
            {
#line 960 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_33_33;
#line 960 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Spec_40;

#line 961 "prog_io_util.m"
              {
#line 961 "prog_io_util.m"
                parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_40);
              }
#line 963 "prog_io_util.m"
              {
#line 963 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_40));
#line 963 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 963 "prog_io_util.m"
              }
#line 963 "prog_io_util.m"
              {
#line 963 "prog_io_util.m"
                MR_Word base;
#line 963 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 963 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 963 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 963 "prog_io_util.m"
              }
#line 960 "prog_io_util.m"
            }
#line 959 "prog_io_util.m"
          else
#line 943 "prog_io_util.m"
            {
#line 943 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__HeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 943 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeVarsTail_15;
#line 943 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 944 "prog_io_util.m"
              {
#line 944 "prog_io_util.m"
                parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_15);
              }
#line 955 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_15)) == (MR_mktag((MR_Integer) 0))))
#line 957 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_15;
#line 955 "prog_io_util.m"
              else
#line 946 "prog_io_util.m"
                {
#line 946 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TailVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_15, (MR_Integer) 0)));
#line 947 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_44_44;

#line 16256 "parse_tree.prog_io_util.c"
                  {
#line 16258 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16260 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16262 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_42));
#line 16264 "parse_tree.prog_io_util.c"
                  }
#line 947 "prog_io_util.m"
                  {
#line 947 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TypeInfo_44_44, parse_tree__prog_io_util__HeadVar_13, parse_tree__prog_io_util__TailVars_16);
                  }
#line 951 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 949 "prog_io_util.m"
                    {
#line 949 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_17;
#line 949 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_35_35;

#line 948 "prog_io_util.m"
                      {
#line 948 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_17);
                      }
#line 950 "prog_io_util.m"
                      {
#line 950 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_17));
#line 950 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 950 "prog_io_util.m"
                      }
#line 950 "prog_io_util.m"
                      {
#line 950 "prog_io_util.m"
                        MR_Word base;
#line 950 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 950 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 950 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 950 "prog_io_util.m"
                      }
#line 949 "prog_io_util.m"
                    }
#line 951 "prog_io_util.m"
                  else
#line 952 "prog_io_util.m"
                    {
#line 952 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Vars_18;

#line 952 "prog_io_util.m"
                      {
#line 952 "prog_io_util.m"
                        parse_tree__prog_io_util__Vars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_13));
#line 952 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_16));
#line 952 "prog_io_util.m"
                      }
#line 953 "prog_io_util.m"
                      {
#line 953 "prog_io_util.m"
                        MR_Word base;
#line 953 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 953 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_18));
#line 953 "prog_io_util.m"
                      }
#line 952 "prog_io_util.m"
                    }
#line 946 "prog_io_util.m"
                }
#line 943 "prog_io_util.m"
            }
#line 965 "prog_io_util.m"
        else
#line 967 "prog_io_util.m"
          {
#line 967 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_38_38;
#line 967 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_41;

#line 966 "prog_io_util.m"
            {
#line 966 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_41);
            }
#line 968 "prog_io_util.m"
            {
#line 968 "prog_io_util.m"
              parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_41));
#line 968 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 968 "prog_io_util.m"
            }
#line 968 "prog_io_util.m"
            {
#line 968 "prog_io_util.m"
              MR_Word base;
#line 968 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 968 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 968 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 968 "prog_io_util.m"
            }
#line 967 "prog_io_util.m"
          }
#line 965 "prog_io_util.m"
      }
#line 941 "prog_io_util.m"
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
#line 932 "prog_io_util.m"
  {
#line 932 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 932 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 932 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 932 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_22_22;
#line 932 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;

#line 932 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 932 "prog_io_util.m"
      {
#line 932 "prog_io_util.m"
        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 932 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 932 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 932 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 932 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 932 "prog_io_util.m"
          {
#line 932 "prog_io_util.m"
            parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 932 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "prog_io_util.m"
              {
#line 932 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[]") == 0);
#line 932 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 932 "prog_io_util.m"
                  {
#line 932 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 932 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 932 "prog_io_util.m"
                  }
#line 932 "prog_io_util.m"
              }
#line 932 "prog_io_util.m"
            else
#line 934 "prog_io_util.m"
              {
#line 934 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Head_7;
#line 934 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Tail_8;
#line 934 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Var_10;
#line 934 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Vars_11;
#line 934 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 934 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;
#line 935 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_12_12;

#line 933 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[|]") == 0);
#line 934 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 934 "prog_io_util.m"
                  {
#line 933 "prog_io_util.m"
                    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 933 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 933 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 933 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 933 "prog_io_util.m"
                      {
#line 933 "prog_io_util.m"
                        parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 933 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 933 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 934 "prog_io_util.m"
                          {
#line 935 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 935 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 935 "prog_io_util.m"
                              {
#line 935 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 0)));
#line 935 "prog_io_util.m"
                                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 1)));
#line 936 "prog_io_util.m"
                                {
#line 936 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__Vars_11);
                                }
#line 934 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 934 "prog_io_util.m"
                                  {
#line 934 "prog_io_util.m"
                                    {
#line 934 "prog_io_util.m"
                                      MR_Word base;
#line 934 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_io_util.m"
                                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 934 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_10));
#line 934 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Vars_11));
#line 934 "prog_io_util.m"
                                    }
#line 934 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 934 "prog_io_util.m"
                                  }
#line 935 "prog_io_util.m"
                              }
#line 934 "prog_io_util.m"
                          }
#line 933 "prog_io_util.m"
                      }
#line 934 "prog_io_util.m"
                  }
#line 934 "prog_io_util.m"
              }
#line 932 "prog_io_util.m"
          }
#line 932 "prog_io_util.m"
      }
#line 932 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 932 "prog_io_util.m"
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
#line 257 "prog_io_util.m"
  {
#line 257 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 257 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 257 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 258 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 257 "prog_io_util.m"
    else
#line 257 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 257 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 257 "prog_io_util.m"
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
#line 254 "prog_io_util.m"
  {
#line 254 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 254 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 254 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 255 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "prog_io_util.m"
    else
#line 254 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 254 "prog_io_util.m"
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
#line 251 "prog_io_util.m"
  {
#line 251 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 251 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 251 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 252 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 251 "prog_io_util.m"
    else
#line 251 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 251 "prog_io_util.m"
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
#line 248 "prog_io_util.m"
  {
#line 248 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 248 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 248 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 249 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "prog_io_util.m"
    else
#line 248 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 248 "prog_io_util.m"
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
